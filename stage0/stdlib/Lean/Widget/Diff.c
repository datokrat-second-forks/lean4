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
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_MVarIdMap_get_x3f_spec__0___redArg(lean_object*, lean_object*);
uint8_t l_Lean_MVarIdSet_contains(lean_object*, lean_object*);
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
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Std_DTreeMap_Internal_Impl_balance___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_SubExpr_Pos_pushNthBindingDomain(lean_object*, lean_object*);
lean_object* l_Lean_Meta_SavedState_restore___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
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
lean_object* lean_expr_instantiate1(lean_object*, lean_object*);
lean_object* l_Lean_SubExpr_Pos_pushBindingBody(lean_object*);
lean_object* l_Lean_SubExpr_Pos_pushBindingDomain(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqBinderInfo_beq(uint8_t, uint8_t);
lean_object* l_Lean_SubExpr_Pos_pushProj(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* lean_register_option(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_foldl___redArg(lean_object*, lean_object*, lean_object*);
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
lean_object* l_Lean_MetavarContext_findDecl_x3f(lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_sanitizeNames(lean_object*, lean_object*);
uint8_t l_Lean_LocalContext_contains(lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_findFromUserName_x3f(lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
extern lean_object* l_Lean_SubExpr_Pos_root;
lean_object* l_Lean_Widget_SubexprInfo_withDiffTag(uint8_t, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvar___override(lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvar___override(lean_object*);
lean_object* l_Lean_Meta_getMVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarIdSet_ofArray(lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_MVarIdSet_insert_spec__1___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_SubExpr_Pos_toString(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_instToStringString___lam__0___boxed(lean_object*);
lean_object* l_List_toString___redArg(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_mapTR_loop___redArg(lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_ctorIdx___boxed(lean_object*);
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
LEAN_EXPORT uint8_t l_List_find_x3f___at___00Lean_Widget_diffInteractiveGoals_spec__3___lam__0(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_find_x3f___at___00Lean_Widget_diffInteractiveGoals_spec__3___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_find_x3f___at___00Lean_Widget_diffInteractiveGoals_spec__3(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_find_x3f___at___00Lean_Widget_diffInteractiveGoals_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_any___at___00Lean_Widget_diffInteractiveGoals_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_any___at___00Lean_Widget_diffInteractiveGoals_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_diffInteractiveGoals_spec__5___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_diffInteractiveGoals_spec__5___lam__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__4_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__4_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__4___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "unknown goal "};
static const lean_object* l_Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__4___redArg___closed__0 = (const lean_object*)&l_Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__4___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__4___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__4___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_diffInteractiveGoals_spec__5_spec__6(lean_object*, uint8_t, lean_object*, uint8_t, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_diffInteractiveGoals_spec__5_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_diffInteractiveGoals_spec__5(uint8_t, lean_object*, lean_object*, uint8_t, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_diffInteractiveGoals_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_diffInteractiveGoals(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_diffInteractiveGoals___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__4_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__4_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Widget_Diff_0__Lean_Widget_initFn_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__spec__0___boxed(lean_object* v_name_29_, lean_object* v_decl_30_, lean_object* v_ref_31_, lean_object* v___y_32_){
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
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_initFn_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4____boxed(lean_object* v___y_76_){
_start:
{
lean_object* v_res_77_; 
v_res_77_ = l___private_Lean_Widget_Diff_0__Lean_Widget_initFn_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4_();
return v_res_77_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_ctorIdx(uint8_t v_x_78_){
_start:
{
switch(v_x_78_)
{
case 0:
{
lean_object* v___x_79_; 
v___x_79_ = lean_unsigned_to_nat(0u);
return v___x_79_;
}
case 1:
{
lean_object* v___x_80_; 
v___x_80_ = lean_unsigned_to_nat(1u);
return v___x_80_;
}
default: 
{
lean_object* v___x_81_; 
v___x_81_ = lean_unsigned_to_nat(2u);
return v___x_81_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_ctorIdx___boxed(lean_object* v_x_82_){
_start:
{
uint8_t v_x_boxed_83_; lean_object* v_res_84_; 
v_x_boxed_83_ = lean_unbox(v_x_82_);
v_res_84_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_ctorIdx(v_x_boxed_83_);
return v_res_84_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_ctorElim___redArg(lean_object* v_k_85_){
_start:
{
lean_inc(v_k_85_);
return v_k_85_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_ctorElim___redArg___boxed(lean_object* v_k_86_){
_start:
{
lean_object* v_res_87_; 
v_res_87_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_ctorElim___redArg(v_k_86_);
lean_dec(v_k_86_);
return v_res_87_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_ctorElim(lean_object* v_motive_88_, lean_object* v_ctorIdx_89_, uint8_t v_t_90_, lean_object* v_h_91_, lean_object* v_k_92_){
_start:
{
lean_inc(v_k_92_);
return v_k_92_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_ctorElim___boxed(lean_object* v_motive_93_, lean_object* v_ctorIdx_94_, lean_object* v_t_95_, lean_object* v_h_96_, lean_object* v_k_97_){
_start:
{
uint8_t v_t_boxed_98_; lean_object* v_res_99_; 
v_t_boxed_98_ = lean_unbox(v_t_95_);
v_res_99_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_ctorElim(v_motive_93_, v_ctorIdx_94_, v_t_boxed_98_, v_h_96_, v_k_97_);
lean_dec(v_k_97_);
lean_dec(v_ctorIdx_94_);
return v_res_99_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_change_elim___redArg(lean_object* v_change_100_){
_start:
{
lean_inc(v_change_100_);
return v_change_100_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_change_elim___redArg___boxed(lean_object* v_change_101_){
_start:
{
lean_object* v_res_102_; 
v_res_102_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_change_elim___redArg(v_change_101_);
lean_dec(v_change_101_);
return v_res_102_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_change_elim(lean_object* v_motive_103_, uint8_t v_t_104_, lean_object* v_h_105_, lean_object* v_change_106_){
_start:
{
lean_inc(v_change_106_);
return v_change_106_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_change_elim___boxed(lean_object* v_motive_107_, lean_object* v_t_108_, lean_object* v_h_109_, lean_object* v_change_110_){
_start:
{
uint8_t v_t_boxed_111_; lean_object* v_res_112_; 
v_t_boxed_111_ = lean_unbox(v_t_108_);
v_res_112_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_change_elim(v_motive_107_, v_t_boxed_111_, v_h_109_, v_change_110_);
lean_dec(v_change_110_);
return v_res_112_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_delete_elim___redArg(lean_object* v_delete_113_){
_start:
{
lean_inc(v_delete_113_);
return v_delete_113_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_delete_elim___redArg___boxed(lean_object* v_delete_114_){
_start:
{
lean_object* v_res_115_; 
v_res_115_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_delete_elim___redArg(v_delete_114_);
lean_dec(v_delete_114_);
return v_res_115_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_delete_elim(lean_object* v_motive_116_, uint8_t v_t_117_, lean_object* v_h_118_, lean_object* v_delete_119_){
_start:
{
lean_inc(v_delete_119_);
return v_delete_119_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_delete_elim___boxed(lean_object* v_motive_120_, lean_object* v_t_121_, lean_object* v_h_122_, lean_object* v_delete_123_){
_start:
{
uint8_t v_t_boxed_124_; lean_object* v_res_125_; 
v_t_boxed_124_ = lean_unbox(v_t_121_);
v_res_125_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_delete_elim(v_motive_120_, v_t_boxed_124_, v_h_122_, v_delete_123_);
lean_dec(v_delete_123_);
return v_res_125_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_insert_elim___redArg(lean_object* v_insert_126_){
_start:
{
lean_inc(v_insert_126_);
return v_insert_126_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_insert_elim___redArg___boxed(lean_object* v_insert_127_){
_start:
{
lean_object* v_res_128_; 
v_res_128_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_insert_elim___redArg(v_insert_127_);
lean_dec(v_insert_127_);
return v_res_128_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_insert_elim(lean_object* v_motive_129_, uint8_t v_t_130_, lean_object* v_h_131_, lean_object* v_insert_132_){
_start:
{
lean_inc(v_insert_132_);
return v_insert_132_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_insert_elim___boxed(lean_object* v_motive_133_, lean_object* v_t_134_, lean_object* v_h_135_, lean_object* v_insert_136_){
_start:
{
uint8_t v_t_boxed_137_; lean_object* v_res_138_; 
v_t_boxed_137_ = lean_unbox(v_t_134_);
v_res_138_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_insert_elim(v_motive_133_, v_t_boxed_137_, v_h_135_, v_insert_136_);
lean_dec(v_insert_136_);
return v_res_138_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_toDiffTag(uint8_t v_x_139_, uint8_t v_x_140_){
_start:
{
if (v_x_139_ == 0)
{
switch(v_x_140_)
{
case 0:
{
uint8_t v___x_141_; 
v___x_141_ = 1;
return v___x_141_;
}
case 1:
{
uint8_t v___x_142_; 
v___x_142_ = 3;
return v___x_142_;
}
default: 
{
uint8_t v___x_143_; 
v___x_143_ = 5;
return v___x_143_;
}
}
}
else
{
switch(v_x_140_)
{
case 0:
{
uint8_t v___x_144_; 
v___x_144_ = 0;
return v___x_144_;
}
case 1:
{
uint8_t v___x_145_; 
v___x_145_ = 2;
return v___x_145_;
}
default: 
{
uint8_t v___x_146_; 
v___x_146_ = 4;
return v___x_146_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_toDiffTag___boxed(lean_object* v_x_147_, lean_object* v_x_148_){
_start:
{
uint8_t v_x_49__boxed_149_; uint8_t v_x_50__boxed_150_; uint8_t v_res_151_; lean_object* v_r_152_; 
v_x_49__boxed_149_ = lean_unbox(v_x_147_);
v_x_50__boxed_150_ = lean_unbox(v_x_148_);
v_res_151_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_toDiffTag(v_x_49__boxed_149_, v_x_50__boxed_150_);
v_r_152_ = lean_box(v_res_151_);
return v_r_152_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_toString(uint8_t v_x_156_){
_start:
{
switch(v_x_156_)
{
case 0:
{
lean_object* v___x_157_; 
v___x_157_ = ((lean_object*)(l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_toString___closed__0));
return v___x_157_;
}
case 1:
{
lean_object* v___x_158_; 
v___x_158_ = ((lean_object*)(l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_toString___closed__1));
return v___x_158_;
}
default: 
{
lean_object* v___x_159_; 
v___x_159_ = ((lean_object*)(l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_toString___closed__2));
return v___x_159_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_toString___boxed(lean_object* v_x_160_){
_start:
{
uint8_t v_x_31__boxed_161_; lean_object* v_res_162_; 
v_x_31__boxed_161_ = lean_unbox(v_x_160_);
v_res_162_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_toString(v_x_31__boxed_161_);
return v_res_162_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___lam__0(lean_object* v_p_168_, lean_object* v_q_169_){
_start:
{
uint8_t v___x_170_; 
v___x_170_ = lean_nat_dec_lt(v_p_168_, v_q_169_);
if (v___x_170_ == 0)
{
uint8_t v___x_171_; 
v___x_171_ = lean_nat_dec_eq(v_p_168_, v_q_169_);
if (v___x_171_ == 0)
{
uint8_t v___x_172_; 
v___x_172_ = 2;
return v___x_172_;
}
else
{
uint8_t v___x_173_; 
v___x_173_ = 1;
return v___x_173_;
}
}
else
{
uint8_t v___x_174_; 
v___x_174_ = 0;
return v___x_174_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___lam__0___boxed(lean_object* v_p_175_, lean_object* v_q_176_){
_start:
{
uint8_t v_res_177_; lean_object* v_r_178_; 
v_res_177_ = l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___lam__0(v_p_175_, v_q_176_);
lean_dec(v_q_176_);
lean_dec(v_p_175_);
v_r_178_ = lean_box(v_res_177_);
return v_r_178_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___lam__1(uint8_t v_b_u2082_179_, lean_object* v_x_180_){
_start:
{
lean_object* v___x_181_; lean_object* v___x_182_; 
v___x_181_ = lean_box(v_b_u2082_179_);
v___x_182_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_182_, 0, v___x_181_);
return v___x_182_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___lam__1___boxed(lean_object* v_b_u2082_183_, lean_object* v_x_184_){
_start:
{
uint8_t v_b_u2082_boxed_185_; lean_object* v_res_186_; 
v_b_u2082_boxed_185_ = lean_unbox(v_b_u2082_183_);
v_res_186_ = l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___lam__1(v_b_u2082_boxed_185_, v_x_184_);
lean_dec(v_x_184_);
return v_res_186_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___lam__2(lean_object* v___f_187_, lean_object* v_t_188_, lean_object* v_a_189_, uint8_t v_b_u2082_190_){
_start:
{
lean_object* v___x_191_; lean_object* v___f_192_; lean_object* v___x_193_; 
v___x_191_ = lean_box(v_b_u2082_190_);
v___f_192_ = lean_alloc_closure((void*)(l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___lam__1___boxed), 2, 1);
lean_closure_set(v___f_192_, 0, v___x_191_);
v___x_193_ = l_Std_DTreeMap_Internal_Impl_Const_alter___redArg(v___f_187_, v_a_189_, v___f_192_, v_t_188_);
return v___x_193_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___lam__2___boxed(lean_object* v___f_194_, lean_object* v_t_195_, lean_object* v_a_196_, lean_object* v_b_u2082_197_){
_start:
{
uint8_t v_b_u2082_boxed_198_; lean_object* v_res_199_; 
v_b_u2082_boxed_198_ = lean_unbox(v_b_u2082_197_);
v_res_199_ = l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___lam__2(v___f_194_, v_t_195_, v_a_196_, v_b_u2082_boxed_198_);
return v_res_199_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___lam__5(lean_object* v___f_200_, lean_object* v___f_201_, lean_object* v_a_202_, lean_object* v_b_203_){
_start:
{
lean_object* v_changesBefore_204_; lean_object* v_changesAfter_205_; lean_object* v_changesBefore_206_; lean_object* v_changesAfter_207_; lean_object* v___x_209_; uint8_t v_isShared_210_; uint8_t v_isSharedCheck_216_; 
v_changesBefore_204_ = lean_ctor_get(v_a_202_, 0);
lean_inc(v_changesBefore_204_);
v_changesAfter_205_ = lean_ctor_get(v_a_202_, 1);
lean_inc(v_changesAfter_205_);
lean_dec_ref(v_a_202_);
v_changesBefore_206_ = lean_ctor_get(v_b_203_, 0);
v_changesAfter_207_ = lean_ctor_get(v_b_203_, 1);
v_isSharedCheck_216_ = !lean_is_exclusive(v_b_203_);
if (v_isSharedCheck_216_ == 0)
{
v___x_209_ = v_b_203_;
v_isShared_210_ = v_isSharedCheck_216_;
goto v_resetjp_208_;
}
else
{
lean_inc(v_changesAfter_207_);
lean_inc(v_changesBefore_206_);
lean_dec(v_b_203_);
v___x_209_ = lean_box(0);
v_isShared_210_ = v_isSharedCheck_216_;
goto v_resetjp_208_;
}
v_resetjp_208_:
{
lean_object* v___x_211_; lean_object* v___x_212_; lean_object* v___x_214_; 
v___x_211_ = l_Std_DTreeMap_Internal_Impl_foldl___redArg(v___f_200_, v_changesBefore_204_, v_changesBefore_206_);
v___x_212_ = l_Std_DTreeMap_Internal_Impl_foldl___redArg(v___f_201_, v_changesAfter_205_, v_changesAfter_207_);
if (v_isShared_210_ == 0)
{
lean_ctor_set(v___x_209_, 1, v___x_212_);
lean_ctor_set(v___x_209_, 0, v___x_211_);
v___x_214_ = v___x_209_;
goto v_reusejp_213_;
}
else
{
lean_object* v_reuseFailAlloc_215_; 
v_reuseFailAlloc_215_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_215_, 0, v___x_211_);
lean_ctor_set(v_reuseFailAlloc_215_, 1, v___x_212_);
v___x_214_ = v_reuseFailAlloc_215_;
goto v_reusejp_213_;
}
v_reusejp_213_:
{
return v___x_214_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__0(lean_object* v_x_226_){
_start:
{
lean_object* v_fst_227_; lean_object* v_snd_228_; lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; uint8_t v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; 
v_fst_227_ = lean_ctor_get(v_x_226_, 0);
v_snd_228_ = lean_ctor_get(v_x_226_, 1);
v___x_229_ = ((lean_object*)(l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__0___closed__0));
v___x_230_ = l_Lean_SubExpr_Pos_toString(v_fst_227_);
v___x_231_ = lean_string_append(v___x_229_, v___x_230_);
lean_dec_ref(v___x_230_);
v___x_232_ = ((lean_object*)(l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__0___closed__1));
v___x_233_ = lean_string_append(v___x_231_, v___x_232_);
v___x_234_ = lean_unbox(v_snd_228_);
v___x_235_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_toString(v___x_234_);
v___x_236_ = lean_string_append(v___x_233_, v___x_235_);
lean_dec_ref(v___x_235_);
v___x_237_ = ((lean_object*)(l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__0___closed__2));
v___x_238_ = lean_string_append(v___x_236_, v___x_237_);
return v___x_238_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__0___boxed(lean_object* v_x_239_){
_start:
{
lean_object* v_res_240_; 
v_res_240_ = l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__0(v_x_239_);
lean_dec_ref(v_x_239_);
return v_res_240_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__1(lean_object* v_x1_241_, uint8_t v_x2_242_, lean_object* v_x3_243_){
_start:
{
lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; 
v___x_244_ = lean_box(v_x2_242_);
v___x_245_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_245_, 0, v_x1_241_);
lean_ctor_set(v___x_245_, 1, v___x_244_);
v___x_246_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_246_, 0, v___x_245_);
lean_ctor_set(v___x_246_, 1, v_x3_243_);
return v___x_246_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__1___boxed(lean_object* v_x1_247_, lean_object* v_x2_248_, lean_object* v_x3_249_){
_start:
{
uint8_t v_x2_247__boxed_250_; lean_object* v_res_251_; 
v_x2_247__boxed_250_ = lean_unbox(v_x2_248_);
v_res_251_ = l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__1(v_x1_247_, v_x2_247__boxed_250_, v_x3_249_);
return v_res_251_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2(lean_object* v___f_271_, lean_object* v___f_272_, lean_object* v_p_273_){
_start:
{
lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; 
v___x_274_ = lean_box(0);
v___x_275_ = ((lean_object*)(l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__9));
v___x_276_ = l_Std_DTreeMap_Internal_Impl_foldrM___redArg(v___x_275_, v___f_271_, v___x_274_, v_p_273_);
v___x_277_ = l_List_mapTR_loop___redArg(v___f_272_, v___x_276_, v___x_274_);
return v___x_277_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__3(lean_object* v_f_280_, lean_object* v___f_281_, lean_object* v_x_282_){
_start:
{
lean_object* v_changesBefore_283_; lean_object* v_changesAfter_284_; lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; 
v_changesBefore_283_ = lean_ctor_get(v_x_282_, 0);
lean_inc(v_changesBefore_283_);
v_changesAfter_284_ = lean_ctor_get(v_x_282_, 1);
lean_inc(v_changesAfter_284_);
lean_dec_ref(v_x_282_);
v___x_285_ = ((lean_object*)(l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__3___closed__0));
lean_inc_ref(v_f_280_);
v___x_286_ = lean_apply_1(v_f_280_, v_changesBefore_283_);
lean_inc_ref(v___f_281_);
v___x_287_ = l_List_toString___redArg(v___f_281_, v___x_286_);
v___x_288_ = lean_string_append(v___x_285_, v___x_287_);
lean_dec_ref(v___x_287_);
v___x_289_ = ((lean_object*)(l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__3___closed__1));
v___x_290_ = lean_string_append(v___x_288_, v___x_289_);
v___x_291_ = lean_apply_1(v_f_280_, v_changesAfter_284_);
v___x_292_ = l_List_toString___redArg(v___f_281_, v___x_291_);
v___x_293_ = lean_string_append(v___x_290_, v___x_292_);
lean_dec_ref(v___x_292_);
return v___x_293_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_insertBeforeChange_spec__0___redArg(lean_object* v_k_304_, lean_object* v_v_305_, lean_object* v_t_306_){
_start:
{
if (lean_obj_tag(v_t_306_) == 0)
{
lean_object* v_size_307_; lean_object* v_k_308_; lean_object* v_v_309_; lean_object* v_l_310_; lean_object* v_r_311_; lean_object* v___x_313_; uint8_t v_isShared_314_; uint8_t v_isSharedCheck_592_; 
v_size_307_ = lean_ctor_get(v_t_306_, 0);
v_k_308_ = lean_ctor_get(v_t_306_, 1);
v_v_309_ = lean_ctor_get(v_t_306_, 2);
v_l_310_ = lean_ctor_get(v_t_306_, 3);
v_r_311_ = lean_ctor_get(v_t_306_, 4);
v_isSharedCheck_592_ = !lean_is_exclusive(v_t_306_);
if (v_isSharedCheck_592_ == 0)
{
v___x_313_ = v_t_306_;
v_isShared_314_ = v_isSharedCheck_592_;
goto v_resetjp_312_;
}
else
{
lean_inc(v_r_311_);
lean_inc(v_l_310_);
lean_inc(v_v_309_);
lean_inc(v_k_308_);
lean_inc(v_size_307_);
lean_dec(v_t_306_);
v___x_313_ = lean_box(0);
v_isShared_314_ = v_isSharedCheck_592_;
goto v_resetjp_312_;
}
v_resetjp_312_:
{
uint8_t v___x_315_; 
v___x_315_ = lean_nat_dec_lt(v_k_304_, v_k_308_);
if (v___x_315_ == 0)
{
uint8_t v___x_316_; 
v___x_316_ = lean_nat_dec_eq(v_k_304_, v_k_308_);
if (v___x_316_ == 0)
{
lean_object* v_impl_317_; lean_object* v___x_318_; 
lean_dec(v_size_307_);
v_impl_317_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_insertBeforeChange_spec__0___redArg(v_k_304_, v_v_305_, v_r_311_);
v___x_318_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_l_310_) == 0)
{
lean_object* v_size_319_; lean_object* v_size_320_; lean_object* v_k_321_; lean_object* v_v_322_; lean_object* v_l_323_; lean_object* v_r_324_; lean_object* v___x_325_; lean_object* v___x_326_; uint8_t v___x_327_; 
v_size_319_ = lean_ctor_get(v_l_310_, 0);
v_size_320_ = lean_ctor_get(v_impl_317_, 0);
lean_inc(v_size_320_);
v_k_321_ = lean_ctor_get(v_impl_317_, 1);
lean_inc(v_k_321_);
v_v_322_ = lean_ctor_get(v_impl_317_, 2);
lean_inc(v_v_322_);
v_l_323_ = lean_ctor_get(v_impl_317_, 3);
lean_inc(v_l_323_);
v_r_324_ = lean_ctor_get(v_impl_317_, 4);
lean_inc(v_r_324_);
v___x_325_ = lean_unsigned_to_nat(3u);
v___x_326_ = lean_nat_mul(v___x_325_, v_size_319_);
v___x_327_ = lean_nat_dec_lt(v___x_326_, v_size_320_);
lean_dec(v___x_326_);
if (v___x_327_ == 0)
{
lean_object* v___x_328_; lean_object* v___x_329_; lean_object* v___x_331_; 
lean_dec(v_r_324_);
lean_dec(v_l_323_);
lean_dec(v_v_322_);
lean_dec(v_k_321_);
v___x_328_ = lean_nat_add(v___x_318_, v_size_319_);
v___x_329_ = lean_nat_add(v___x_328_, v_size_320_);
lean_dec(v_size_320_);
lean_dec(v___x_328_);
if (v_isShared_314_ == 0)
{
lean_ctor_set(v___x_313_, 4, v_impl_317_);
lean_ctor_set(v___x_313_, 0, v___x_329_);
v___x_331_ = v___x_313_;
goto v_reusejp_330_;
}
else
{
lean_object* v_reuseFailAlloc_332_; 
v_reuseFailAlloc_332_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_332_, 0, v___x_329_);
lean_ctor_set(v_reuseFailAlloc_332_, 1, v_k_308_);
lean_ctor_set(v_reuseFailAlloc_332_, 2, v_v_309_);
lean_ctor_set(v_reuseFailAlloc_332_, 3, v_l_310_);
lean_ctor_set(v_reuseFailAlloc_332_, 4, v_impl_317_);
v___x_331_ = v_reuseFailAlloc_332_;
goto v_reusejp_330_;
}
v_reusejp_330_:
{
return v___x_331_;
}
}
else
{
lean_object* v___x_334_; uint8_t v_isShared_335_; uint8_t v_isSharedCheck_396_; 
v_isSharedCheck_396_ = !lean_is_exclusive(v_impl_317_);
if (v_isSharedCheck_396_ == 0)
{
lean_object* v_unused_397_; lean_object* v_unused_398_; lean_object* v_unused_399_; lean_object* v_unused_400_; lean_object* v_unused_401_; 
v_unused_397_ = lean_ctor_get(v_impl_317_, 4);
lean_dec(v_unused_397_);
v_unused_398_ = lean_ctor_get(v_impl_317_, 3);
lean_dec(v_unused_398_);
v_unused_399_ = lean_ctor_get(v_impl_317_, 2);
lean_dec(v_unused_399_);
v_unused_400_ = lean_ctor_get(v_impl_317_, 1);
lean_dec(v_unused_400_);
v_unused_401_ = lean_ctor_get(v_impl_317_, 0);
lean_dec(v_unused_401_);
v___x_334_ = v_impl_317_;
v_isShared_335_ = v_isSharedCheck_396_;
goto v_resetjp_333_;
}
else
{
lean_dec(v_impl_317_);
v___x_334_ = lean_box(0);
v_isShared_335_ = v_isSharedCheck_396_;
goto v_resetjp_333_;
}
v_resetjp_333_:
{
lean_object* v_size_336_; lean_object* v_k_337_; lean_object* v_v_338_; lean_object* v_l_339_; lean_object* v_r_340_; lean_object* v_size_341_; lean_object* v___x_342_; lean_object* v___x_343_; uint8_t v___x_344_; 
v_size_336_ = lean_ctor_get(v_l_323_, 0);
v_k_337_ = lean_ctor_get(v_l_323_, 1);
v_v_338_ = lean_ctor_get(v_l_323_, 2);
v_l_339_ = lean_ctor_get(v_l_323_, 3);
v_r_340_ = lean_ctor_get(v_l_323_, 4);
v_size_341_ = lean_ctor_get(v_r_324_, 0);
v___x_342_ = lean_unsigned_to_nat(2u);
v___x_343_ = lean_nat_mul(v___x_342_, v_size_341_);
v___x_344_ = lean_nat_dec_lt(v_size_336_, v___x_343_);
lean_dec(v___x_343_);
if (v___x_344_ == 0)
{
lean_object* v___x_346_; uint8_t v_isShared_347_; uint8_t v_isSharedCheck_372_; 
lean_inc(v_r_340_);
lean_inc(v_l_339_);
lean_inc(v_v_338_);
lean_inc(v_k_337_);
v_isSharedCheck_372_ = !lean_is_exclusive(v_l_323_);
if (v_isSharedCheck_372_ == 0)
{
lean_object* v_unused_373_; lean_object* v_unused_374_; lean_object* v_unused_375_; lean_object* v_unused_376_; lean_object* v_unused_377_; 
v_unused_373_ = lean_ctor_get(v_l_323_, 4);
lean_dec(v_unused_373_);
v_unused_374_ = lean_ctor_get(v_l_323_, 3);
lean_dec(v_unused_374_);
v_unused_375_ = lean_ctor_get(v_l_323_, 2);
lean_dec(v_unused_375_);
v_unused_376_ = lean_ctor_get(v_l_323_, 1);
lean_dec(v_unused_376_);
v_unused_377_ = lean_ctor_get(v_l_323_, 0);
lean_dec(v_unused_377_);
v___x_346_ = v_l_323_;
v_isShared_347_ = v_isSharedCheck_372_;
goto v_resetjp_345_;
}
else
{
lean_dec(v_l_323_);
v___x_346_ = lean_box(0);
v_isShared_347_ = v_isSharedCheck_372_;
goto v_resetjp_345_;
}
v_resetjp_345_:
{
lean_object* v___x_348_; lean_object* v___x_349_; lean_object* v___y_351_; lean_object* v___y_352_; lean_object* v___y_353_; lean_object* v___y_362_; 
v___x_348_ = lean_nat_add(v___x_318_, v_size_319_);
v___x_349_ = lean_nat_add(v___x_348_, v_size_320_);
lean_dec(v_size_320_);
if (lean_obj_tag(v_l_339_) == 0)
{
lean_object* v_size_370_; 
v_size_370_ = lean_ctor_get(v_l_339_, 0);
lean_inc(v_size_370_);
v___y_362_ = v_size_370_;
goto v___jp_361_;
}
else
{
lean_object* v___x_371_; 
v___x_371_ = lean_unsigned_to_nat(0u);
v___y_362_ = v___x_371_;
goto v___jp_361_;
}
v___jp_350_:
{
lean_object* v___x_354_; lean_object* v___x_356_; 
v___x_354_ = lean_nat_add(v___y_352_, v___y_353_);
lean_dec(v___y_353_);
lean_dec(v___y_352_);
if (v_isShared_347_ == 0)
{
lean_ctor_set(v___x_346_, 4, v_r_324_);
lean_ctor_set(v___x_346_, 3, v_r_340_);
lean_ctor_set(v___x_346_, 2, v_v_322_);
lean_ctor_set(v___x_346_, 1, v_k_321_);
lean_ctor_set(v___x_346_, 0, v___x_354_);
v___x_356_ = v___x_346_;
goto v_reusejp_355_;
}
else
{
lean_object* v_reuseFailAlloc_360_; 
v_reuseFailAlloc_360_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_360_, 0, v___x_354_);
lean_ctor_set(v_reuseFailAlloc_360_, 1, v_k_321_);
lean_ctor_set(v_reuseFailAlloc_360_, 2, v_v_322_);
lean_ctor_set(v_reuseFailAlloc_360_, 3, v_r_340_);
lean_ctor_set(v_reuseFailAlloc_360_, 4, v_r_324_);
v___x_356_ = v_reuseFailAlloc_360_;
goto v_reusejp_355_;
}
v_reusejp_355_:
{
lean_object* v___x_358_; 
if (v_isShared_335_ == 0)
{
lean_ctor_set(v___x_334_, 4, v___x_356_);
lean_ctor_set(v___x_334_, 3, v___y_351_);
lean_ctor_set(v___x_334_, 2, v_v_338_);
lean_ctor_set(v___x_334_, 1, v_k_337_);
lean_ctor_set(v___x_334_, 0, v___x_349_);
v___x_358_ = v___x_334_;
goto v_reusejp_357_;
}
else
{
lean_object* v_reuseFailAlloc_359_; 
v_reuseFailAlloc_359_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_359_, 0, v___x_349_);
lean_ctor_set(v_reuseFailAlloc_359_, 1, v_k_337_);
lean_ctor_set(v_reuseFailAlloc_359_, 2, v_v_338_);
lean_ctor_set(v_reuseFailAlloc_359_, 3, v___y_351_);
lean_ctor_set(v_reuseFailAlloc_359_, 4, v___x_356_);
v___x_358_ = v_reuseFailAlloc_359_;
goto v_reusejp_357_;
}
v_reusejp_357_:
{
return v___x_358_;
}
}
}
v___jp_361_:
{
lean_object* v___x_363_; lean_object* v___x_365_; 
v___x_363_ = lean_nat_add(v___x_348_, v___y_362_);
lean_dec(v___y_362_);
lean_dec(v___x_348_);
if (v_isShared_314_ == 0)
{
lean_ctor_set(v___x_313_, 4, v_l_339_);
lean_ctor_set(v___x_313_, 0, v___x_363_);
v___x_365_ = v___x_313_;
goto v_reusejp_364_;
}
else
{
lean_object* v_reuseFailAlloc_369_; 
v_reuseFailAlloc_369_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_369_, 0, v___x_363_);
lean_ctor_set(v_reuseFailAlloc_369_, 1, v_k_308_);
lean_ctor_set(v_reuseFailAlloc_369_, 2, v_v_309_);
lean_ctor_set(v_reuseFailAlloc_369_, 3, v_l_310_);
lean_ctor_set(v_reuseFailAlloc_369_, 4, v_l_339_);
v___x_365_ = v_reuseFailAlloc_369_;
goto v_reusejp_364_;
}
v_reusejp_364_:
{
lean_object* v___x_366_; 
v___x_366_ = lean_nat_add(v___x_318_, v_size_341_);
if (lean_obj_tag(v_r_340_) == 0)
{
lean_object* v_size_367_; 
v_size_367_ = lean_ctor_get(v_r_340_, 0);
lean_inc(v_size_367_);
v___y_351_ = v___x_365_;
v___y_352_ = v___x_366_;
v___y_353_ = v_size_367_;
goto v___jp_350_;
}
else
{
lean_object* v___x_368_; 
v___x_368_ = lean_unsigned_to_nat(0u);
v___y_351_ = v___x_365_;
v___y_352_ = v___x_366_;
v___y_353_ = v___x_368_;
goto v___jp_350_;
}
}
}
}
}
else
{
lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v___x_382_; 
lean_del_object(v___x_313_);
v___x_378_ = lean_nat_add(v___x_318_, v_size_319_);
v___x_379_ = lean_nat_add(v___x_378_, v_size_320_);
lean_dec(v_size_320_);
v___x_380_ = lean_nat_add(v___x_378_, v_size_336_);
lean_dec(v___x_378_);
lean_inc_ref(v_l_310_);
if (v_isShared_335_ == 0)
{
lean_ctor_set(v___x_334_, 4, v_l_323_);
lean_ctor_set(v___x_334_, 3, v_l_310_);
lean_ctor_set(v___x_334_, 2, v_v_309_);
lean_ctor_set(v___x_334_, 1, v_k_308_);
lean_ctor_set(v___x_334_, 0, v___x_380_);
v___x_382_ = v___x_334_;
goto v_reusejp_381_;
}
else
{
lean_object* v_reuseFailAlloc_395_; 
v_reuseFailAlloc_395_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_395_, 0, v___x_380_);
lean_ctor_set(v_reuseFailAlloc_395_, 1, v_k_308_);
lean_ctor_set(v_reuseFailAlloc_395_, 2, v_v_309_);
lean_ctor_set(v_reuseFailAlloc_395_, 3, v_l_310_);
lean_ctor_set(v_reuseFailAlloc_395_, 4, v_l_323_);
v___x_382_ = v_reuseFailAlloc_395_;
goto v_reusejp_381_;
}
v_reusejp_381_:
{
lean_object* v___x_384_; uint8_t v_isShared_385_; uint8_t v_isSharedCheck_389_; 
v_isSharedCheck_389_ = !lean_is_exclusive(v_l_310_);
if (v_isSharedCheck_389_ == 0)
{
lean_object* v_unused_390_; lean_object* v_unused_391_; lean_object* v_unused_392_; lean_object* v_unused_393_; lean_object* v_unused_394_; 
v_unused_390_ = lean_ctor_get(v_l_310_, 4);
lean_dec(v_unused_390_);
v_unused_391_ = lean_ctor_get(v_l_310_, 3);
lean_dec(v_unused_391_);
v_unused_392_ = lean_ctor_get(v_l_310_, 2);
lean_dec(v_unused_392_);
v_unused_393_ = lean_ctor_get(v_l_310_, 1);
lean_dec(v_unused_393_);
v_unused_394_ = lean_ctor_get(v_l_310_, 0);
lean_dec(v_unused_394_);
v___x_384_ = v_l_310_;
v_isShared_385_ = v_isSharedCheck_389_;
goto v_resetjp_383_;
}
else
{
lean_dec(v_l_310_);
v___x_384_ = lean_box(0);
v_isShared_385_ = v_isSharedCheck_389_;
goto v_resetjp_383_;
}
v_resetjp_383_:
{
lean_object* v___x_387_; 
if (v_isShared_385_ == 0)
{
lean_ctor_set(v___x_384_, 4, v_r_324_);
lean_ctor_set(v___x_384_, 3, v___x_382_);
lean_ctor_set(v___x_384_, 2, v_v_322_);
lean_ctor_set(v___x_384_, 1, v_k_321_);
lean_ctor_set(v___x_384_, 0, v___x_379_);
v___x_387_ = v___x_384_;
goto v_reusejp_386_;
}
else
{
lean_object* v_reuseFailAlloc_388_; 
v_reuseFailAlloc_388_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_388_, 0, v___x_379_);
lean_ctor_set(v_reuseFailAlloc_388_, 1, v_k_321_);
lean_ctor_set(v_reuseFailAlloc_388_, 2, v_v_322_);
lean_ctor_set(v_reuseFailAlloc_388_, 3, v___x_382_);
lean_ctor_set(v_reuseFailAlloc_388_, 4, v_r_324_);
v___x_387_ = v_reuseFailAlloc_388_;
goto v_reusejp_386_;
}
v_reusejp_386_:
{
return v___x_387_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_402_; 
v_l_402_ = lean_ctor_get(v_impl_317_, 3);
lean_inc(v_l_402_);
if (lean_obj_tag(v_l_402_) == 0)
{
lean_object* v_r_403_; lean_object* v_k_404_; lean_object* v_v_405_; lean_object* v___x_407_; uint8_t v_isShared_408_; uint8_t v_isSharedCheck_428_; 
v_r_403_ = lean_ctor_get(v_impl_317_, 4);
v_k_404_ = lean_ctor_get(v_impl_317_, 1);
v_v_405_ = lean_ctor_get(v_impl_317_, 2);
v_isSharedCheck_428_ = !lean_is_exclusive(v_impl_317_);
if (v_isSharedCheck_428_ == 0)
{
lean_object* v_unused_429_; lean_object* v_unused_430_; 
v_unused_429_ = lean_ctor_get(v_impl_317_, 3);
lean_dec(v_unused_429_);
v_unused_430_ = lean_ctor_get(v_impl_317_, 0);
lean_dec(v_unused_430_);
v___x_407_ = v_impl_317_;
v_isShared_408_ = v_isSharedCheck_428_;
goto v_resetjp_406_;
}
else
{
lean_inc(v_r_403_);
lean_inc(v_v_405_);
lean_inc(v_k_404_);
lean_dec(v_impl_317_);
v___x_407_ = lean_box(0);
v_isShared_408_ = v_isSharedCheck_428_;
goto v_resetjp_406_;
}
v_resetjp_406_:
{
lean_object* v_k_409_; lean_object* v_v_410_; lean_object* v___x_412_; uint8_t v_isShared_413_; uint8_t v_isSharedCheck_424_; 
v_k_409_ = lean_ctor_get(v_l_402_, 1);
v_v_410_ = lean_ctor_get(v_l_402_, 2);
v_isSharedCheck_424_ = !lean_is_exclusive(v_l_402_);
if (v_isSharedCheck_424_ == 0)
{
lean_object* v_unused_425_; lean_object* v_unused_426_; lean_object* v_unused_427_; 
v_unused_425_ = lean_ctor_get(v_l_402_, 4);
lean_dec(v_unused_425_);
v_unused_426_ = lean_ctor_get(v_l_402_, 3);
lean_dec(v_unused_426_);
v_unused_427_ = lean_ctor_get(v_l_402_, 0);
lean_dec(v_unused_427_);
v___x_412_ = v_l_402_;
v_isShared_413_ = v_isSharedCheck_424_;
goto v_resetjp_411_;
}
else
{
lean_inc(v_v_410_);
lean_inc(v_k_409_);
lean_dec(v_l_402_);
v___x_412_ = lean_box(0);
v_isShared_413_ = v_isSharedCheck_424_;
goto v_resetjp_411_;
}
v_resetjp_411_:
{
lean_object* v___x_414_; lean_object* v___x_416_; 
v___x_414_ = lean_unsigned_to_nat(3u);
lean_inc_n(v_r_403_, 2);
if (v_isShared_413_ == 0)
{
lean_ctor_set(v___x_412_, 4, v_r_403_);
lean_ctor_set(v___x_412_, 3, v_r_403_);
lean_ctor_set(v___x_412_, 2, v_v_309_);
lean_ctor_set(v___x_412_, 1, v_k_308_);
lean_ctor_set(v___x_412_, 0, v___x_318_);
v___x_416_ = v___x_412_;
goto v_reusejp_415_;
}
else
{
lean_object* v_reuseFailAlloc_423_; 
v_reuseFailAlloc_423_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_423_, 0, v___x_318_);
lean_ctor_set(v_reuseFailAlloc_423_, 1, v_k_308_);
lean_ctor_set(v_reuseFailAlloc_423_, 2, v_v_309_);
lean_ctor_set(v_reuseFailAlloc_423_, 3, v_r_403_);
lean_ctor_set(v_reuseFailAlloc_423_, 4, v_r_403_);
v___x_416_ = v_reuseFailAlloc_423_;
goto v_reusejp_415_;
}
v_reusejp_415_:
{
lean_object* v___x_418_; 
lean_inc(v_r_403_);
if (v_isShared_408_ == 0)
{
lean_ctor_set(v___x_407_, 3, v_r_403_);
lean_ctor_set(v___x_407_, 0, v___x_318_);
v___x_418_ = v___x_407_;
goto v_reusejp_417_;
}
else
{
lean_object* v_reuseFailAlloc_422_; 
v_reuseFailAlloc_422_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_422_, 0, v___x_318_);
lean_ctor_set(v_reuseFailAlloc_422_, 1, v_k_404_);
lean_ctor_set(v_reuseFailAlloc_422_, 2, v_v_405_);
lean_ctor_set(v_reuseFailAlloc_422_, 3, v_r_403_);
lean_ctor_set(v_reuseFailAlloc_422_, 4, v_r_403_);
v___x_418_ = v_reuseFailAlloc_422_;
goto v_reusejp_417_;
}
v_reusejp_417_:
{
lean_object* v___x_420_; 
if (v_isShared_314_ == 0)
{
lean_ctor_set(v___x_313_, 4, v___x_418_);
lean_ctor_set(v___x_313_, 3, v___x_416_);
lean_ctor_set(v___x_313_, 2, v_v_410_);
lean_ctor_set(v___x_313_, 1, v_k_409_);
lean_ctor_set(v___x_313_, 0, v___x_414_);
v___x_420_ = v___x_313_;
goto v_reusejp_419_;
}
else
{
lean_object* v_reuseFailAlloc_421_; 
v_reuseFailAlloc_421_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_421_, 0, v___x_414_);
lean_ctor_set(v_reuseFailAlloc_421_, 1, v_k_409_);
lean_ctor_set(v_reuseFailAlloc_421_, 2, v_v_410_);
lean_ctor_set(v_reuseFailAlloc_421_, 3, v___x_416_);
lean_ctor_set(v_reuseFailAlloc_421_, 4, v___x_418_);
v___x_420_ = v_reuseFailAlloc_421_;
goto v_reusejp_419_;
}
v_reusejp_419_:
{
return v___x_420_;
}
}
}
}
}
}
else
{
lean_object* v_r_431_; 
v_r_431_ = lean_ctor_get(v_impl_317_, 4);
lean_inc(v_r_431_);
if (lean_obj_tag(v_r_431_) == 0)
{
lean_object* v_k_432_; lean_object* v_v_433_; lean_object* v___x_435_; uint8_t v_isShared_436_; uint8_t v_isSharedCheck_444_; 
v_k_432_ = lean_ctor_get(v_impl_317_, 1);
v_v_433_ = lean_ctor_get(v_impl_317_, 2);
v_isSharedCheck_444_ = !lean_is_exclusive(v_impl_317_);
if (v_isSharedCheck_444_ == 0)
{
lean_object* v_unused_445_; lean_object* v_unused_446_; lean_object* v_unused_447_; 
v_unused_445_ = lean_ctor_get(v_impl_317_, 4);
lean_dec(v_unused_445_);
v_unused_446_ = lean_ctor_get(v_impl_317_, 3);
lean_dec(v_unused_446_);
v_unused_447_ = lean_ctor_get(v_impl_317_, 0);
lean_dec(v_unused_447_);
v___x_435_ = v_impl_317_;
v_isShared_436_ = v_isSharedCheck_444_;
goto v_resetjp_434_;
}
else
{
lean_inc(v_v_433_);
lean_inc(v_k_432_);
lean_dec(v_impl_317_);
v___x_435_ = lean_box(0);
v_isShared_436_ = v_isSharedCheck_444_;
goto v_resetjp_434_;
}
v_resetjp_434_:
{
lean_object* v___x_437_; lean_object* v___x_439_; 
v___x_437_ = lean_unsigned_to_nat(3u);
if (v_isShared_436_ == 0)
{
lean_ctor_set(v___x_435_, 4, v_l_402_);
lean_ctor_set(v___x_435_, 2, v_v_309_);
lean_ctor_set(v___x_435_, 1, v_k_308_);
lean_ctor_set(v___x_435_, 0, v___x_318_);
v___x_439_ = v___x_435_;
goto v_reusejp_438_;
}
else
{
lean_object* v_reuseFailAlloc_443_; 
v_reuseFailAlloc_443_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_443_, 0, v___x_318_);
lean_ctor_set(v_reuseFailAlloc_443_, 1, v_k_308_);
lean_ctor_set(v_reuseFailAlloc_443_, 2, v_v_309_);
lean_ctor_set(v_reuseFailAlloc_443_, 3, v_l_402_);
lean_ctor_set(v_reuseFailAlloc_443_, 4, v_l_402_);
v___x_439_ = v_reuseFailAlloc_443_;
goto v_reusejp_438_;
}
v_reusejp_438_:
{
lean_object* v___x_441_; 
if (v_isShared_314_ == 0)
{
lean_ctor_set(v___x_313_, 4, v_r_431_);
lean_ctor_set(v___x_313_, 3, v___x_439_);
lean_ctor_set(v___x_313_, 2, v_v_433_);
lean_ctor_set(v___x_313_, 1, v_k_432_);
lean_ctor_set(v___x_313_, 0, v___x_437_);
v___x_441_ = v___x_313_;
goto v_reusejp_440_;
}
else
{
lean_object* v_reuseFailAlloc_442_; 
v_reuseFailAlloc_442_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_442_, 0, v___x_437_);
lean_ctor_set(v_reuseFailAlloc_442_, 1, v_k_432_);
lean_ctor_set(v_reuseFailAlloc_442_, 2, v_v_433_);
lean_ctor_set(v_reuseFailAlloc_442_, 3, v___x_439_);
lean_ctor_set(v_reuseFailAlloc_442_, 4, v_r_431_);
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
lean_object* v___x_448_; lean_object* v___x_450_; 
v___x_448_ = lean_unsigned_to_nat(2u);
if (v_isShared_314_ == 0)
{
lean_ctor_set(v___x_313_, 4, v_impl_317_);
lean_ctor_set(v___x_313_, 3, v_r_431_);
lean_ctor_set(v___x_313_, 0, v___x_448_);
v___x_450_ = v___x_313_;
goto v_reusejp_449_;
}
else
{
lean_object* v_reuseFailAlloc_451_; 
v_reuseFailAlloc_451_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_451_, 0, v___x_448_);
lean_ctor_set(v_reuseFailAlloc_451_, 1, v_k_308_);
lean_ctor_set(v_reuseFailAlloc_451_, 2, v_v_309_);
lean_ctor_set(v_reuseFailAlloc_451_, 3, v_r_431_);
lean_ctor_set(v_reuseFailAlloc_451_, 4, v_impl_317_);
v___x_450_ = v_reuseFailAlloc_451_;
goto v_reusejp_449_;
}
v_reusejp_449_:
{
return v___x_450_;
}
}
}
}
}
else
{
lean_object* v___x_453_; 
lean_dec(v_v_309_);
lean_dec(v_k_308_);
if (v_isShared_314_ == 0)
{
lean_ctor_set(v___x_313_, 2, v_v_305_);
lean_ctor_set(v___x_313_, 1, v_k_304_);
v___x_453_ = v___x_313_;
goto v_reusejp_452_;
}
else
{
lean_object* v_reuseFailAlloc_454_; 
v_reuseFailAlloc_454_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_454_, 0, v_size_307_);
lean_ctor_set(v_reuseFailAlloc_454_, 1, v_k_304_);
lean_ctor_set(v_reuseFailAlloc_454_, 2, v_v_305_);
lean_ctor_set(v_reuseFailAlloc_454_, 3, v_l_310_);
lean_ctor_set(v_reuseFailAlloc_454_, 4, v_r_311_);
v___x_453_ = v_reuseFailAlloc_454_;
goto v_reusejp_452_;
}
v_reusejp_452_:
{
return v___x_453_;
}
}
}
else
{
lean_object* v_impl_455_; lean_object* v___x_456_; 
lean_dec(v_size_307_);
v_impl_455_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_insertBeforeChange_spec__0___redArg(v_k_304_, v_v_305_, v_l_310_);
v___x_456_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_r_311_) == 0)
{
lean_object* v_size_457_; lean_object* v_size_458_; lean_object* v_k_459_; lean_object* v_v_460_; lean_object* v_l_461_; lean_object* v_r_462_; lean_object* v___x_463_; lean_object* v___x_464_; uint8_t v___x_465_; 
v_size_457_ = lean_ctor_get(v_r_311_, 0);
v_size_458_ = lean_ctor_get(v_impl_455_, 0);
lean_inc(v_size_458_);
v_k_459_ = lean_ctor_get(v_impl_455_, 1);
lean_inc(v_k_459_);
v_v_460_ = lean_ctor_get(v_impl_455_, 2);
lean_inc(v_v_460_);
v_l_461_ = lean_ctor_get(v_impl_455_, 3);
lean_inc(v_l_461_);
v_r_462_ = lean_ctor_get(v_impl_455_, 4);
lean_inc(v_r_462_);
v___x_463_ = lean_unsigned_to_nat(3u);
v___x_464_ = lean_nat_mul(v___x_463_, v_size_457_);
v___x_465_ = lean_nat_dec_lt(v___x_464_, v_size_458_);
lean_dec(v___x_464_);
if (v___x_465_ == 0)
{
lean_object* v___x_466_; lean_object* v___x_467_; lean_object* v___x_469_; 
lean_dec(v_r_462_);
lean_dec(v_l_461_);
lean_dec(v_v_460_);
lean_dec(v_k_459_);
v___x_466_ = lean_nat_add(v___x_456_, v_size_458_);
lean_dec(v_size_458_);
v___x_467_ = lean_nat_add(v___x_466_, v_size_457_);
lean_dec(v___x_466_);
if (v_isShared_314_ == 0)
{
lean_ctor_set(v___x_313_, 3, v_impl_455_);
lean_ctor_set(v___x_313_, 0, v___x_467_);
v___x_469_ = v___x_313_;
goto v_reusejp_468_;
}
else
{
lean_object* v_reuseFailAlloc_470_; 
v_reuseFailAlloc_470_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_470_, 0, v___x_467_);
lean_ctor_set(v_reuseFailAlloc_470_, 1, v_k_308_);
lean_ctor_set(v_reuseFailAlloc_470_, 2, v_v_309_);
lean_ctor_set(v_reuseFailAlloc_470_, 3, v_impl_455_);
lean_ctor_set(v_reuseFailAlloc_470_, 4, v_r_311_);
v___x_469_ = v_reuseFailAlloc_470_;
goto v_reusejp_468_;
}
v_reusejp_468_:
{
return v___x_469_;
}
}
else
{
lean_object* v___x_472_; uint8_t v_isShared_473_; uint8_t v_isSharedCheck_536_; 
v_isSharedCheck_536_ = !lean_is_exclusive(v_impl_455_);
if (v_isSharedCheck_536_ == 0)
{
lean_object* v_unused_537_; lean_object* v_unused_538_; lean_object* v_unused_539_; lean_object* v_unused_540_; lean_object* v_unused_541_; 
v_unused_537_ = lean_ctor_get(v_impl_455_, 4);
lean_dec(v_unused_537_);
v_unused_538_ = lean_ctor_get(v_impl_455_, 3);
lean_dec(v_unused_538_);
v_unused_539_ = lean_ctor_get(v_impl_455_, 2);
lean_dec(v_unused_539_);
v_unused_540_ = lean_ctor_get(v_impl_455_, 1);
lean_dec(v_unused_540_);
v_unused_541_ = lean_ctor_get(v_impl_455_, 0);
lean_dec(v_unused_541_);
v___x_472_ = v_impl_455_;
v_isShared_473_ = v_isSharedCheck_536_;
goto v_resetjp_471_;
}
else
{
lean_dec(v_impl_455_);
v___x_472_ = lean_box(0);
v_isShared_473_ = v_isSharedCheck_536_;
goto v_resetjp_471_;
}
v_resetjp_471_:
{
lean_object* v_size_474_; lean_object* v_size_475_; lean_object* v_k_476_; lean_object* v_v_477_; lean_object* v_l_478_; lean_object* v_r_479_; lean_object* v___x_480_; lean_object* v___x_481_; uint8_t v___x_482_; 
v_size_474_ = lean_ctor_get(v_l_461_, 0);
v_size_475_ = lean_ctor_get(v_r_462_, 0);
v_k_476_ = lean_ctor_get(v_r_462_, 1);
v_v_477_ = lean_ctor_get(v_r_462_, 2);
v_l_478_ = lean_ctor_get(v_r_462_, 3);
v_r_479_ = lean_ctor_get(v_r_462_, 4);
v___x_480_ = lean_unsigned_to_nat(2u);
v___x_481_ = lean_nat_mul(v___x_480_, v_size_474_);
v___x_482_ = lean_nat_dec_lt(v_size_475_, v___x_481_);
lean_dec(v___x_481_);
if (v___x_482_ == 0)
{
lean_object* v___x_484_; uint8_t v_isShared_485_; uint8_t v_isSharedCheck_511_; 
lean_inc(v_r_479_);
lean_inc(v_l_478_);
lean_inc(v_v_477_);
lean_inc(v_k_476_);
v_isSharedCheck_511_ = !lean_is_exclusive(v_r_462_);
if (v_isSharedCheck_511_ == 0)
{
lean_object* v_unused_512_; lean_object* v_unused_513_; lean_object* v_unused_514_; lean_object* v_unused_515_; lean_object* v_unused_516_; 
v_unused_512_ = lean_ctor_get(v_r_462_, 4);
lean_dec(v_unused_512_);
v_unused_513_ = lean_ctor_get(v_r_462_, 3);
lean_dec(v_unused_513_);
v_unused_514_ = lean_ctor_get(v_r_462_, 2);
lean_dec(v_unused_514_);
v_unused_515_ = lean_ctor_get(v_r_462_, 1);
lean_dec(v_unused_515_);
v_unused_516_ = lean_ctor_get(v_r_462_, 0);
lean_dec(v_unused_516_);
v___x_484_ = v_r_462_;
v_isShared_485_ = v_isSharedCheck_511_;
goto v_resetjp_483_;
}
else
{
lean_dec(v_r_462_);
v___x_484_ = lean_box(0);
v_isShared_485_ = v_isSharedCheck_511_;
goto v_resetjp_483_;
}
v_resetjp_483_:
{
lean_object* v___x_486_; lean_object* v___x_487_; lean_object* v___y_489_; lean_object* v___y_490_; lean_object* v___y_491_; lean_object* v___x_499_; lean_object* v___y_501_; 
v___x_486_ = lean_nat_add(v___x_456_, v_size_458_);
lean_dec(v_size_458_);
v___x_487_ = lean_nat_add(v___x_486_, v_size_457_);
lean_dec(v___x_486_);
v___x_499_ = lean_nat_add(v___x_456_, v_size_474_);
if (lean_obj_tag(v_l_478_) == 0)
{
lean_object* v_size_509_; 
v_size_509_ = lean_ctor_get(v_l_478_, 0);
lean_inc(v_size_509_);
v___y_501_ = v_size_509_;
goto v___jp_500_;
}
else
{
lean_object* v___x_510_; 
v___x_510_ = lean_unsigned_to_nat(0u);
v___y_501_ = v___x_510_;
goto v___jp_500_;
}
v___jp_488_:
{
lean_object* v___x_492_; lean_object* v___x_494_; 
v___x_492_ = lean_nat_add(v___y_490_, v___y_491_);
lean_dec(v___y_491_);
lean_dec(v___y_490_);
if (v_isShared_485_ == 0)
{
lean_ctor_set(v___x_484_, 4, v_r_311_);
lean_ctor_set(v___x_484_, 3, v_r_479_);
lean_ctor_set(v___x_484_, 2, v_v_309_);
lean_ctor_set(v___x_484_, 1, v_k_308_);
lean_ctor_set(v___x_484_, 0, v___x_492_);
v___x_494_ = v___x_484_;
goto v_reusejp_493_;
}
else
{
lean_object* v_reuseFailAlloc_498_; 
v_reuseFailAlloc_498_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_498_, 0, v___x_492_);
lean_ctor_set(v_reuseFailAlloc_498_, 1, v_k_308_);
lean_ctor_set(v_reuseFailAlloc_498_, 2, v_v_309_);
lean_ctor_set(v_reuseFailAlloc_498_, 3, v_r_479_);
lean_ctor_set(v_reuseFailAlloc_498_, 4, v_r_311_);
v___x_494_ = v_reuseFailAlloc_498_;
goto v_reusejp_493_;
}
v_reusejp_493_:
{
lean_object* v___x_496_; 
if (v_isShared_473_ == 0)
{
lean_ctor_set(v___x_472_, 4, v___x_494_);
lean_ctor_set(v___x_472_, 3, v___y_489_);
lean_ctor_set(v___x_472_, 2, v_v_477_);
lean_ctor_set(v___x_472_, 1, v_k_476_);
lean_ctor_set(v___x_472_, 0, v___x_487_);
v___x_496_ = v___x_472_;
goto v_reusejp_495_;
}
else
{
lean_object* v_reuseFailAlloc_497_; 
v_reuseFailAlloc_497_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_497_, 0, v___x_487_);
lean_ctor_set(v_reuseFailAlloc_497_, 1, v_k_476_);
lean_ctor_set(v_reuseFailAlloc_497_, 2, v_v_477_);
lean_ctor_set(v_reuseFailAlloc_497_, 3, v___y_489_);
lean_ctor_set(v_reuseFailAlloc_497_, 4, v___x_494_);
v___x_496_ = v_reuseFailAlloc_497_;
goto v_reusejp_495_;
}
v_reusejp_495_:
{
return v___x_496_;
}
}
}
v___jp_500_:
{
lean_object* v___x_502_; lean_object* v___x_504_; 
v___x_502_ = lean_nat_add(v___x_499_, v___y_501_);
lean_dec(v___y_501_);
lean_dec(v___x_499_);
if (v_isShared_314_ == 0)
{
lean_ctor_set(v___x_313_, 4, v_l_478_);
lean_ctor_set(v___x_313_, 3, v_l_461_);
lean_ctor_set(v___x_313_, 2, v_v_460_);
lean_ctor_set(v___x_313_, 1, v_k_459_);
lean_ctor_set(v___x_313_, 0, v___x_502_);
v___x_504_ = v___x_313_;
goto v_reusejp_503_;
}
else
{
lean_object* v_reuseFailAlloc_508_; 
v_reuseFailAlloc_508_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_508_, 0, v___x_502_);
lean_ctor_set(v_reuseFailAlloc_508_, 1, v_k_459_);
lean_ctor_set(v_reuseFailAlloc_508_, 2, v_v_460_);
lean_ctor_set(v_reuseFailAlloc_508_, 3, v_l_461_);
lean_ctor_set(v_reuseFailAlloc_508_, 4, v_l_478_);
v___x_504_ = v_reuseFailAlloc_508_;
goto v_reusejp_503_;
}
v_reusejp_503_:
{
lean_object* v___x_505_; 
v___x_505_ = lean_nat_add(v___x_456_, v_size_457_);
if (lean_obj_tag(v_r_479_) == 0)
{
lean_object* v_size_506_; 
v_size_506_ = lean_ctor_get(v_r_479_, 0);
lean_inc(v_size_506_);
v___y_489_ = v___x_504_;
v___y_490_ = v___x_505_;
v___y_491_ = v_size_506_;
goto v___jp_488_;
}
else
{
lean_object* v___x_507_; 
v___x_507_ = lean_unsigned_to_nat(0u);
v___y_489_ = v___x_504_;
v___y_490_ = v___x_505_;
v___y_491_ = v___x_507_;
goto v___jp_488_;
}
}
}
}
}
else
{
lean_object* v___x_517_; lean_object* v___x_518_; lean_object* v___x_519_; lean_object* v___x_520_; lean_object* v___x_522_; 
lean_del_object(v___x_313_);
v___x_517_ = lean_nat_add(v___x_456_, v_size_458_);
lean_dec(v_size_458_);
v___x_518_ = lean_nat_add(v___x_517_, v_size_457_);
lean_dec(v___x_517_);
v___x_519_ = lean_nat_add(v___x_456_, v_size_457_);
v___x_520_ = lean_nat_add(v___x_519_, v_size_475_);
lean_dec(v___x_519_);
lean_inc_ref(v_r_311_);
if (v_isShared_473_ == 0)
{
lean_ctor_set(v___x_472_, 4, v_r_311_);
lean_ctor_set(v___x_472_, 3, v_r_462_);
lean_ctor_set(v___x_472_, 2, v_v_309_);
lean_ctor_set(v___x_472_, 1, v_k_308_);
lean_ctor_set(v___x_472_, 0, v___x_520_);
v___x_522_ = v___x_472_;
goto v_reusejp_521_;
}
else
{
lean_object* v_reuseFailAlloc_535_; 
v_reuseFailAlloc_535_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_535_, 0, v___x_520_);
lean_ctor_set(v_reuseFailAlloc_535_, 1, v_k_308_);
lean_ctor_set(v_reuseFailAlloc_535_, 2, v_v_309_);
lean_ctor_set(v_reuseFailAlloc_535_, 3, v_r_462_);
lean_ctor_set(v_reuseFailAlloc_535_, 4, v_r_311_);
v___x_522_ = v_reuseFailAlloc_535_;
goto v_reusejp_521_;
}
v_reusejp_521_:
{
lean_object* v___x_524_; uint8_t v_isShared_525_; uint8_t v_isSharedCheck_529_; 
v_isSharedCheck_529_ = !lean_is_exclusive(v_r_311_);
if (v_isSharedCheck_529_ == 0)
{
lean_object* v_unused_530_; lean_object* v_unused_531_; lean_object* v_unused_532_; lean_object* v_unused_533_; lean_object* v_unused_534_; 
v_unused_530_ = lean_ctor_get(v_r_311_, 4);
lean_dec(v_unused_530_);
v_unused_531_ = lean_ctor_get(v_r_311_, 3);
lean_dec(v_unused_531_);
v_unused_532_ = lean_ctor_get(v_r_311_, 2);
lean_dec(v_unused_532_);
v_unused_533_ = lean_ctor_get(v_r_311_, 1);
lean_dec(v_unused_533_);
v_unused_534_ = lean_ctor_get(v_r_311_, 0);
lean_dec(v_unused_534_);
v___x_524_ = v_r_311_;
v_isShared_525_ = v_isSharedCheck_529_;
goto v_resetjp_523_;
}
else
{
lean_dec(v_r_311_);
v___x_524_ = lean_box(0);
v_isShared_525_ = v_isSharedCheck_529_;
goto v_resetjp_523_;
}
v_resetjp_523_:
{
lean_object* v___x_527_; 
if (v_isShared_525_ == 0)
{
lean_ctor_set(v___x_524_, 4, v___x_522_);
lean_ctor_set(v___x_524_, 3, v_l_461_);
lean_ctor_set(v___x_524_, 2, v_v_460_);
lean_ctor_set(v___x_524_, 1, v_k_459_);
lean_ctor_set(v___x_524_, 0, v___x_518_);
v___x_527_ = v___x_524_;
goto v_reusejp_526_;
}
else
{
lean_object* v_reuseFailAlloc_528_; 
v_reuseFailAlloc_528_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_528_, 0, v___x_518_);
lean_ctor_set(v_reuseFailAlloc_528_, 1, v_k_459_);
lean_ctor_set(v_reuseFailAlloc_528_, 2, v_v_460_);
lean_ctor_set(v_reuseFailAlloc_528_, 3, v_l_461_);
lean_ctor_set(v_reuseFailAlloc_528_, 4, v___x_522_);
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
}
}
}
else
{
lean_object* v_l_542_; 
v_l_542_ = lean_ctor_get(v_impl_455_, 3);
lean_inc(v_l_542_);
if (lean_obj_tag(v_l_542_) == 0)
{
lean_object* v_r_543_; lean_object* v_k_544_; lean_object* v_v_545_; lean_object* v___x_547_; uint8_t v_isShared_548_; uint8_t v_isSharedCheck_556_; 
v_r_543_ = lean_ctor_get(v_impl_455_, 4);
v_k_544_ = lean_ctor_get(v_impl_455_, 1);
v_v_545_ = lean_ctor_get(v_impl_455_, 2);
v_isSharedCheck_556_ = !lean_is_exclusive(v_impl_455_);
if (v_isSharedCheck_556_ == 0)
{
lean_object* v_unused_557_; lean_object* v_unused_558_; 
v_unused_557_ = lean_ctor_get(v_impl_455_, 3);
lean_dec(v_unused_557_);
v_unused_558_ = lean_ctor_get(v_impl_455_, 0);
lean_dec(v_unused_558_);
v___x_547_ = v_impl_455_;
v_isShared_548_ = v_isSharedCheck_556_;
goto v_resetjp_546_;
}
else
{
lean_inc(v_r_543_);
lean_inc(v_v_545_);
lean_inc(v_k_544_);
lean_dec(v_impl_455_);
v___x_547_ = lean_box(0);
v_isShared_548_ = v_isSharedCheck_556_;
goto v_resetjp_546_;
}
v_resetjp_546_:
{
lean_object* v___x_549_; lean_object* v___x_551_; 
v___x_549_ = lean_unsigned_to_nat(3u);
lean_inc(v_r_543_);
if (v_isShared_548_ == 0)
{
lean_ctor_set(v___x_547_, 3, v_r_543_);
lean_ctor_set(v___x_547_, 2, v_v_309_);
lean_ctor_set(v___x_547_, 1, v_k_308_);
lean_ctor_set(v___x_547_, 0, v___x_456_);
v___x_551_ = v___x_547_;
goto v_reusejp_550_;
}
else
{
lean_object* v_reuseFailAlloc_555_; 
v_reuseFailAlloc_555_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_555_, 0, v___x_456_);
lean_ctor_set(v_reuseFailAlloc_555_, 1, v_k_308_);
lean_ctor_set(v_reuseFailAlloc_555_, 2, v_v_309_);
lean_ctor_set(v_reuseFailAlloc_555_, 3, v_r_543_);
lean_ctor_set(v_reuseFailAlloc_555_, 4, v_r_543_);
v___x_551_ = v_reuseFailAlloc_555_;
goto v_reusejp_550_;
}
v_reusejp_550_:
{
lean_object* v___x_553_; 
if (v_isShared_314_ == 0)
{
lean_ctor_set(v___x_313_, 4, v___x_551_);
lean_ctor_set(v___x_313_, 3, v_l_542_);
lean_ctor_set(v___x_313_, 2, v_v_545_);
lean_ctor_set(v___x_313_, 1, v_k_544_);
lean_ctor_set(v___x_313_, 0, v___x_549_);
v___x_553_ = v___x_313_;
goto v_reusejp_552_;
}
else
{
lean_object* v_reuseFailAlloc_554_; 
v_reuseFailAlloc_554_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_554_, 0, v___x_549_);
lean_ctor_set(v_reuseFailAlloc_554_, 1, v_k_544_);
lean_ctor_set(v_reuseFailAlloc_554_, 2, v_v_545_);
lean_ctor_set(v_reuseFailAlloc_554_, 3, v_l_542_);
lean_ctor_set(v_reuseFailAlloc_554_, 4, v___x_551_);
v___x_553_ = v_reuseFailAlloc_554_;
goto v_reusejp_552_;
}
v_reusejp_552_:
{
return v___x_553_;
}
}
}
}
else
{
lean_object* v_r_559_; 
v_r_559_ = lean_ctor_get(v_impl_455_, 4);
lean_inc(v_r_559_);
if (lean_obj_tag(v_r_559_) == 0)
{
lean_object* v_k_560_; lean_object* v_v_561_; lean_object* v___x_563_; uint8_t v_isShared_564_; uint8_t v_isSharedCheck_584_; 
v_k_560_ = lean_ctor_get(v_impl_455_, 1);
v_v_561_ = lean_ctor_get(v_impl_455_, 2);
v_isSharedCheck_584_ = !lean_is_exclusive(v_impl_455_);
if (v_isSharedCheck_584_ == 0)
{
lean_object* v_unused_585_; lean_object* v_unused_586_; lean_object* v_unused_587_; 
v_unused_585_ = lean_ctor_get(v_impl_455_, 4);
lean_dec(v_unused_585_);
v_unused_586_ = lean_ctor_get(v_impl_455_, 3);
lean_dec(v_unused_586_);
v_unused_587_ = lean_ctor_get(v_impl_455_, 0);
lean_dec(v_unused_587_);
v___x_563_ = v_impl_455_;
v_isShared_564_ = v_isSharedCheck_584_;
goto v_resetjp_562_;
}
else
{
lean_inc(v_v_561_);
lean_inc(v_k_560_);
lean_dec(v_impl_455_);
v___x_563_ = lean_box(0);
v_isShared_564_ = v_isSharedCheck_584_;
goto v_resetjp_562_;
}
v_resetjp_562_:
{
lean_object* v_k_565_; lean_object* v_v_566_; lean_object* v___x_568_; uint8_t v_isShared_569_; uint8_t v_isSharedCheck_580_; 
v_k_565_ = lean_ctor_get(v_r_559_, 1);
v_v_566_ = lean_ctor_get(v_r_559_, 2);
v_isSharedCheck_580_ = !lean_is_exclusive(v_r_559_);
if (v_isSharedCheck_580_ == 0)
{
lean_object* v_unused_581_; lean_object* v_unused_582_; lean_object* v_unused_583_; 
v_unused_581_ = lean_ctor_get(v_r_559_, 4);
lean_dec(v_unused_581_);
v_unused_582_ = lean_ctor_get(v_r_559_, 3);
lean_dec(v_unused_582_);
v_unused_583_ = lean_ctor_get(v_r_559_, 0);
lean_dec(v_unused_583_);
v___x_568_ = v_r_559_;
v_isShared_569_ = v_isSharedCheck_580_;
goto v_resetjp_567_;
}
else
{
lean_inc(v_v_566_);
lean_inc(v_k_565_);
lean_dec(v_r_559_);
v___x_568_ = lean_box(0);
v_isShared_569_ = v_isSharedCheck_580_;
goto v_resetjp_567_;
}
v_resetjp_567_:
{
lean_object* v___x_570_; lean_object* v___x_572_; 
v___x_570_ = lean_unsigned_to_nat(3u);
if (v_isShared_569_ == 0)
{
lean_ctor_set(v___x_568_, 4, v_l_542_);
lean_ctor_set(v___x_568_, 3, v_l_542_);
lean_ctor_set(v___x_568_, 2, v_v_561_);
lean_ctor_set(v___x_568_, 1, v_k_560_);
lean_ctor_set(v___x_568_, 0, v___x_456_);
v___x_572_ = v___x_568_;
goto v_reusejp_571_;
}
else
{
lean_object* v_reuseFailAlloc_579_; 
v_reuseFailAlloc_579_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_579_, 0, v___x_456_);
lean_ctor_set(v_reuseFailAlloc_579_, 1, v_k_560_);
lean_ctor_set(v_reuseFailAlloc_579_, 2, v_v_561_);
lean_ctor_set(v_reuseFailAlloc_579_, 3, v_l_542_);
lean_ctor_set(v_reuseFailAlloc_579_, 4, v_l_542_);
v___x_572_ = v_reuseFailAlloc_579_;
goto v_reusejp_571_;
}
v_reusejp_571_:
{
lean_object* v___x_574_; 
if (v_isShared_564_ == 0)
{
lean_ctor_set(v___x_563_, 4, v_l_542_);
lean_ctor_set(v___x_563_, 2, v_v_309_);
lean_ctor_set(v___x_563_, 1, v_k_308_);
lean_ctor_set(v___x_563_, 0, v___x_456_);
v___x_574_ = v___x_563_;
goto v_reusejp_573_;
}
else
{
lean_object* v_reuseFailAlloc_578_; 
v_reuseFailAlloc_578_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_578_, 0, v___x_456_);
lean_ctor_set(v_reuseFailAlloc_578_, 1, v_k_308_);
lean_ctor_set(v_reuseFailAlloc_578_, 2, v_v_309_);
lean_ctor_set(v_reuseFailAlloc_578_, 3, v_l_542_);
lean_ctor_set(v_reuseFailAlloc_578_, 4, v_l_542_);
v___x_574_ = v_reuseFailAlloc_578_;
goto v_reusejp_573_;
}
v_reusejp_573_:
{
lean_object* v___x_576_; 
if (v_isShared_314_ == 0)
{
lean_ctor_set(v___x_313_, 4, v___x_574_);
lean_ctor_set(v___x_313_, 3, v___x_572_);
lean_ctor_set(v___x_313_, 2, v_v_566_);
lean_ctor_set(v___x_313_, 1, v_k_565_);
lean_ctor_set(v___x_313_, 0, v___x_570_);
v___x_576_ = v___x_313_;
goto v_reusejp_575_;
}
else
{
lean_object* v_reuseFailAlloc_577_; 
v_reuseFailAlloc_577_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_577_, 0, v___x_570_);
lean_ctor_set(v_reuseFailAlloc_577_, 1, v_k_565_);
lean_ctor_set(v_reuseFailAlloc_577_, 2, v_v_566_);
lean_ctor_set(v_reuseFailAlloc_577_, 3, v___x_572_);
lean_ctor_set(v_reuseFailAlloc_577_, 4, v___x_574_);
v___x_576_ = v_reuseFailAlloc_577_;
goto v_reusejp_575_;
}
v_reusejp_575_:
{
return v___x_576_;
}
}
}
}
}
}
else
{
lean_object* v___x_588_; lean_object* v___x_590_; 
v___x_588_ = lean_unsigned_to_nat(2u);
if (v_isShared_314_ == 0)
{
lean_ctor_set(v___x_313_, 4, v_r_559_);
lean_ctor_set(v___x_313_, 3, v_impl_455_);
lean_ctor_set(v___x_313_, 0, v___x_588_);
v___x_590_ = v___x_313_;
goto v_reusejp_589_;
}
else
{
lean_object* v_reuseFailAlloc_591_; 
v_reuseFailAlloc_591_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_591_, 0, v___x_588_);
lean_ctor_set(v_reuseFailAlloc_591_, 1, v_k_308_);
lean_ctor_set(v_reuseFailAlloc_591_, 2, v_v_309_);
lean_ctor_set(v_reuseFailAlloc_591_, 3, v_impl_455_);
lean_ctor_set(v_reuseFailAlloc_591_, 4, v_r_559_);
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
else
{
lean_object* v___x_593_; lean_object* v___x_594_; 
v___x_593_ = lean_unsigned_to_nat(1u);
v___x_594_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_594_, 0, v___x_593_);
lean_ctor_set(v___x_594_, 1, v_k_304_);
lean_ctor_set(v___x_594_, 2, v_v_305_);
lean_ctor_set(v___x_594_, 3, v_t_306_);
lean_ctor_set(v___x_594_, 4, v_t_306_);
return v___x_594_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_insertBeforeChange(lean_object* v_p_595_, uint8_t v_d_596_, lean_object* v_00_u03b4_597_){
_start:
{
lean_object* v_changesBefore_598_; lean_object* v_changesAfter_599_; lean_object* v___x_601_; uint8_t v_isShared_602_; uint8_t v_isSharedCheck_608_; 
v_changesBefore_598_ = lean_ctor_get(v_00_u03b4_597_, 0);
v_changesAfter_599_ = lean_ctor_get(v_00_u03b4_597_, 1);
v_isSharedCheck_608_ = !lean_is_exclusive(v_00_u03b4_597_);
if (v_isSharedCheck_608_ == 0)
{
v___x_601_ = v_00_u03b4_597_;
v_isShared_602_ = v_isSharedCheck_608_;
goto v_resetjp_600_;
}
else
{
lean_inc(v_changesAfter_599_);
lean_inc(v_changesBefore_598_);
lean_dec(v_00_u03b4_597_);
v___x_601_ = lean_box(0);
v_isShared_602_ = v_isSharedCheck_608_;
goto v_resetjp_600_;
}
v_resetjp_600_:
{
lean_object* v___x_603_; lean_object* v___x_604_; lean_object* v___x_606_; 
v___x_603_ = lean_box(v_d_596_);
v___x_604_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_insertBeforeChange_spec__0___redArg(v_p_595_, v___x_603_, v_changesBefore_598_);
if (v_isShared_602_ == 0)
{
lean_ctor_set(v___x_601_, 0, v___x_604_);
v___x_606_ = v___x_601_;
goto v_reusejp_605_;
}
else
{
lean_object* v_reuseFailAlloc_607_; 
v_reuseFailAlloc_607_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_607_, 0, v___x_604_);
lean_ctor_set(v_reuseFailAlloc_607_, 1, v_changesAfter_599_);
v___x_606_ = v_reuseFailAlloc_607_;
goto v_reusejp_605_;
}
v_reusejp_605_:
{
return v___x_606_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_insertBeforeChange___boxed(lean_object* v_p_609_, lean_object* v_d_610_, lean_object* v_00_u03b4_611_){
_start:
{
uint8_t v_d_boxed_612_; lean_object* v_res_613_; 
v_d_boxed_612_ = lean_unbox(v_d_610_);
v_res_613_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_insertBeforeChange(v_p_609_, v_d_boxed_612_, v_00_u03b4_611_);
return v_res_613_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_insertBeforeChange_spec__0(lean_object* v_00_u03b2_614_, lean_object* v_k_615_, lean_object* v_v_616_, lean_object* v_t_617_, lean_object* v_hl_618_){
_start:
{
lean_object* v___x_619_; 
v___x_619_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_insertBeforeChange_spec__0___redArg(v_k_615_, v_v_616_, v_t_617_);
return v___x_619_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_insertAfterChange(lean_object* v_p_620_, uint8_t v_d_621_, lean_object* v_00_u03b4_622_){
_start:
{
lean_object* v_changesBefore_623_; lean_object* v_changesAfter_624_; lean_object* v___x_626_; uint8_t v_isShared_627_; uint8_t v_isSharedCheck_633_; 
v_changesBefore_623_ = lean_ctor_get(v_00_u03b4_622_, 0);
v_changesAfter_624_ = lean_ctor_get(v_00_u03b4_622_, 1);
v_isSharedCheck_633_ = !lean_is_exclusive(v_00_u03b4_622_);
if (v_isSharedCheck_633_ == 0)
{
v___x_626_ = v_00_u03b4_622_;
v_isShared_627_ = v_isSharedCheck_633_;
goto v_resetjp_625_;
}
else
{
lean_inc(v_changesAfter_624_);
lean_inc(v_changesBefore_623_);
lean_dec(v_00_u03b4_622_);
v___x_626_ = lean_box(0);
v_isShared_627_ = v_isSharedCheck_633_;
goto v_resetjp_625_;
}
v_resetjp_625_:
{
lean_object* v___x_628_; lean_object* v___x_629_; lean_object* v___x_631_; 
v___x_628_ = lean_box(v_d_621_);
v___x_629_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_insertBeforeChange_spec__0___redArg(v_p_620_, v___x_628_, v_changesAfter_624_);
if (v_isShared_627_ == 0)
{
lean_ctor_set(v___x_626_, 1, v___x_629_);
v___x_631_ = v___x_626_;
goto v_reusejp_630_;
}
else
{
lean_object* v_reuseFailAlloc_632_; 
v_reuseFailAlloc_632_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_632_, 0, v_changesBefore_623_);
lean_ctor_set(v_reuseFailAlloc_632_, 1, v___x_629_);
v___x_631_ = v_reuseFailAlloc_632_;
goto v_reusejp_630_;
}
v_reusejp_630_:
{
return v___x_631_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_insertAfterChange___boxed(lean_object* v_p_634_, lean_object* v_d_635_, lean_object* v_00_u03b4_636_){
_start:
{
uint8_t v_d_boxed_637_; lean_object* v_res_638_; 
v_d_boxed_637_ = lean_unbox(v_d_635_);
v_res_638_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_insertAfterChange(v_p_634_, v_d_boxed_637_, v_00_u03b4_636_);
return v_res_638_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_withChangePos(lean_object* v_before_639_, lean_object* v_after_640_, uint8_t v_d_641_){
_start:
{
lean_object* v___x_642_; lean_object* v___x_643_; lean_object* v___x_644_; lean_object* v___x_645_; lean_object* v___x_646_; lean_object* v___x_647_; 
v___x_642_ = lean_box(1);
v___x_643_ = lean_box(v_d_641_);
v___x_644_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_insertBeforeChange_spec__0___redArg(v_before_639_, v___x_643_, v___x_642_);
v___x_645_ = lean_box(v_d_641_);
v___x_646_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_insertBeforeChange_spec__0___redArg(v_after_640_, v___x_645_, v___x_642_);
v___x_647_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_647_, 0, v___x_644_);
lean_ctor_set(v___x_647_, 1, v___x_646_);
return v___x_647_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_withChangePos___boxed(lean_object* v_before_648_, lean_object* v_after_649_, lean_object* v_d_650_){
_start:
{
uint8_t v_d_boxed_651_; lean_object* v_res_652_; 
v_d_boxed_651_ = lean_unbox(v_d_650_);
v_res_652_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_withChangePos(v_before_648_, v_after_649_, v_d_boxed_651_);
return v_res_652_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_withChange(lean_object* v_before_653_, lean_object* v_after_654_, uint8_t v_d_655_){
_start:
{
lean_object* v_pos_656_; lean_object* v_pos_657_; lean_object* v___x_658_; 
v_pos_656_ = lean_ctor_get(v_before_653_, 1);
lean_inc(v_pos_656_);
lean_dec_ref(v_before_653_);
v_pos_657_ = lean_ctor_get(v_after_654_, 1);
lean_inc(v_pos_657_);
lean_dec_ref(v_after_654_);
v___x_658_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_withChangePos(v_pos_656_, v_pos_657_, v_d_655_);
return v___x_658_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_withChange___boxed(lean_object* v_before_659_, lean_object* v_after_660_, lean_object* v_d_661_){
_start:
{
uint8_t v_d_boxed_662_; lean_object* v_res_663_; 
v_d_boxed_662_ = lean_unbox(v_d_661_);
v_res_663_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_withChange(v_before_659_, v_after_660_, v_d_boxed_662_);
return v_res_663_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_isEmpty(lean_object* v_d_664_){
_start:
{
lean_object* v_changesBefore_665_; lean_object* v_changesAfter_666_; uint8_t v___y_668_; 
v_changesBefore_665_ = lean_ctor_get(v_d_664_, 0);
v_changesAfter_666_ = lean_ctor_get(v_d_664_, 1);
if (lean_obj_tag(v_changesAfter_666_) == 0)
{
uint8_t v___x_670_; 
v___x_670_ = 0;
v___y_668_ = v___x_670_;
goto v___jp_667_;
}
else
{
uint8_t v___x_671_; 
v___x_671_ = 1;
v___y_668_ = v___x_671_;
goto v___jp_667_;
}
v___jp_667_:
{
if (lean_obj_tag(v_changesBefore_665_) == 0)
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
return v___y_668_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_isEmpty___boxed(lean_object* v_d_672_){
_start:
{
uint8_t v_res_673_; lean_object* v_r_674_; 
v_res_673_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_isEmpty(v_d_672_);
lean_dec_ref(v_d_672_);
v_r_674_ = lean_box(v_res_673_);
return v_r_674_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__6___redArg___lam__0(lean_object* v_k_675_, lean_object* v_b_676_, lean_object* v___y_677_, lean_object* v___y_678_, lean_object* v___y_679_, lean_object* v___y_680_){
_start:
{
lean_object* v___x_682_; 
lean_inc(v___y_680_);
lean_inc_ref(v___y_679_);
lean_inc(v___y_678_);
lean_inc_ref(v___y_677_);
v___x_682_ = lean_apply_6(v_k_675_, v_b_676_, v___y_677_, v___y_678_, v___y_679_, v___y_680_, lean_box(0));
return v___x_682_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__6___redArg___lam__0___boxed(lean_object* v_k_683_, lean_object* v_b_684_, lean_object* v___y_685_, lean_object* v___y_686_, lean_object* v___y_687_, lean_object* v___y_688_, lean_object* v___y_689_){
_start:
{
lean_object* v_res_690_; 
v_res_690_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__6___redArg___lam__0(v_k_683_, v_b_684_, v___y_685_, v___y_686_, v___y_687_, v___y_688_);
lean_dec(v___y_688_);
lean_dec_ref(v___y_687_);
lean_dec(v___y_686_);
lean_dec_ref(v___y_685_);
return v_res_690_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__6___redArg(lean_object* v_name_691_, uint8_t v_bi_692_, lean_object* v_type_693_, lean_object* v_k_694_, uint8_t v_kind_695_, lean_object* v___y_696_, lean_object* v___y_697_, lean_object* v___y_698_, lean_object* v___y_699_){
_start:
{
lean_object* v___f_701_; lean_object* v___x_702_; 
v___f_701_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__6___redArg___lam__0___boxed), 7, 1);
lean_closure_set(v___f_701_, 0, v_k_694_);
v___x_702_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_691_, v_bi_692_, v_type_693_, v___f_701_, v_kind_695_, v___y_696_, v___y_697_, v___y_698_, v___y_699_);
if (lean_obj_tag(v___x_702_) == 0)
{
lean_object* v_a_703_; lean_object* v___x_705_; uint8_t v_isShared_706_; uint8_t v_isSharedCheck_710_; 
v_a_703_ = lean_ctor_get(v___x_702_, 0);
v_isSharedCheck_710_ = !lean_is_exclusive(v___x_702_);
if (v_isSharedCheck_710_ == 0)
{
v___x_705_ = v___x_702_;
v_isShared_706_ = v_isSharedCheck_710_;
goto v_resetjp_704_;
}
else
{
lean_inc(v_a_703_);
lean_dec(v___x_702_);
v___x_705_ = lean_box(0);
v_isShared_706_ = v_isSharedCheck_710_;
goto v_resetjp_704_;
}
v_resetjp_704_:
{
lean_object* v___x_708_; 
if (v_isShared_706_ == 0)
{
v___x_708_ = v___x_705_;
goto v_reusejp_707_;
}
else
{
lean_object* v_reuseFailAlloc_709_; 
v_reuseFailAlloc_709_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_709_, 0, v_a_703_);
v___x_708_ = v_reuseFailAlloc_709_;
goto v_reusejp_707_;
}
v_reusejp_707_:
{
return v___x_708_;
}
}
}
else
{
lean_object* v_a_711_; lean_object* v___x_713_; uint8_t v_isShared_714_; uint8_t v_isSharedCheck_718_; 
v_a_711_ = lean_ctor_get(v___x_702_, 0);
v_isSharedCheck_718_ = !lean_is_exclusive(v___x_702_);
if (v_isSharedCheck_718_ == 0)
{
v___x_713_ = v___x_702_;
v_isShared_714_ = v_isSharedCheck_718_;
goto v_resetjp_712_;
}
else
{
lean_inc(v_a_711_);
lean_dec(v___x_702_);
v___x_713_ = lean_box(0);
v_isShared_714_ = v_isSharedCheck_718_;
goto v_resetjp_712_;
}
v_resetjp_712_:
{
lean_object* v___x_716_; 
if (v_isShared_714_ == 0)
{
v___x_716_ = v___x_713_;
goto v_reusejp_715_;
}
else
{
lean_object* v_reuseFailAlloc_717_; 
v_reuseFailAlloc_717_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_717_, 0, v_a_711_);
v___x_716_ = v_reuseFailAlloc_717_;
goto v_reusejp_715_;
}
v_reusejp_715_:
{
return v___x_716_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__6___redArg___boxed(lean_object* v_name_719_, lean_object* v_bi_720_, lean_object* v_type_721_, lean_object* v_k_722_, lean_object* v_kind_723_, lean_object* v___y_724_, lean_object* v___y_725_, lean_object* v___y_726_, lean_object* v___y_727_, lean_object* v___y_728_){
_start:
{
uint8_t v_bi_boxed_729_; uint8_t v_kind_boxed_730_; lean_object* v_res_731_; 
v_bi_boxed_729_ = lean_unbox(v_bi_720_);
v_kind_boxed_730_ = lean_unbox(v_kind_723_);
v_res_731_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__6___redArg(v_name_719_, v_bi_boxed_729_, v_type_721_, v_k_722_, v_kind_boxed_730_, v___y_724_, v___y_725_, v___y_726_, v___y_727_);
lean_dec(v___y_727_);
lean_dec_ref(v___y_726_);
lean_dec(v___y_725_);
lean_dec_ref(v___y_724_);
return v_res_731_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__6(lean_object* v_00_u03b1_732_, lean_object* v_name_733_, uint8_t v_bi_734_, lean_object* v_type_735_, lean_object* v_k_736_, uint8_t v_kind_737_, lean_object* v___y_738_, lean_object* v___y_739_, lean_object* v___y_740_, lean_object* v___y_741_){
_start:
{
lean_object* v___x_743_; 
v___x_743_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__6___redArg(v_name_733_, v_bi_734_, v_type_735_, v_k_736_, v_kind_737_, v___y_738_, v___y_739_, v___y_740_, v___y_741_);
return v___x_743_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__6___boxed(lean_object* v_00_u03b1_744_, lean_object* v_name_745_, lean_object* v_bi_746_, lean_object* v_type_747_, lean_object* v_k_748_, lean_object* v_kind_749_, lean_object* v___y_750_, lean_object* v___y_751_, lean_object* v___y_752_, lean_object* v___y_753_, lean_object* v___y_754_){
_start:
{
uint8_t v_bi_boxed_755_; uint8_t v_kind_boxed_756_; lean_object* v_res_757_; 
v_bi_boxed_755_ = lean_unbox(v_bi_746_);
v_kind_boxed_756_ = lean_unbox(v_kind_749_);
v_res_757_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__6(v_00_u03b1_744_, v_name_745_, v_bi_boxed_755_, v_type_747_, v_k_748_, v_kind_boxed_756_, v___y_750_, v___y_751_, v___y_752_, v___y_753_);
lean_dec(v___y_753_);
lean_dec_ref(v___y_752_);
lean_dec(v___y_751_);
lean_dec_ref(v___y_750_);
return v_res_757_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__3_spec__4(lean_object* v_msgData_758_, lean_object* v___y_759_, lean_object* v___y_760_, lean_object* v___y_761_, lean_object* v___y_762_){
_start:
{
lean_object* v___x_764_; lean_object* v_env_765_; lean_object* v___x_766_; lean_object* v_toCold_767_; lean_object* v_mctx_768_; lean_object* v_lctx_769_; lean_object* v_options_770_; lean_object* v___x_771_; lean_object* v___x_772_; lean_object* v___x_773_; 
v___x_764_ = lean_st_ref_get(v___y_762_);
v_env_765_ = lean_ctor_get(v___x_764_, 0);
lean_inc_ref(v_env_765_);
lean_dec(v___x_764_);
v___x_766_ = lean_st_ref_get(v___y_760_);
v_toCold_767_ = lean_ctor_get(v___y_761_, 0);
v_mctx_768_ = lean_ctor_get(v___x_766_, 0);
lean_inc_ref(v_mctx_768_);
lean_dec(v___x_766_);
v_lctx_769_ = lean_ctor_get(v___y_759_, 2);
v_options_770_ = lean_ctor_get(v_toCold_767_, 2);
lean_inc_ref(v_options_770_);
lean_inc_ref(v_lctx_769_);
v___x_771_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_771_, 0, v_env_765_);
lean_ctor_set(v___x_771_, 1, v_mctx_768_);
lean_ctor_set(v___x_771_, 2, v_lctx_769_);
lean_ctor_set(v___x_771_, 3, v_options_770_);
v___x_772_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_772_, 0, v___x_771_);
lean_ctor_set(v___x_772_, 1, v_msgData_758_);
v___x_773_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_773_, 0, v___x_772_);
return v___x_773_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__3_spec__4___boxed(lean_object* v_msgData_774_, lean_object* v___y_775_, lean_object* v___y_776_, lean_object* v___y_777_, lean_object* v___y_778_, lean_object* v___y_779_){
_start:
{
lean_object* v_res_780_; 
v_res_780_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__3_spec__4(v_msgData_774_, v___y_775_, v___y_776_, v___y_777_, v___y_778_);
lean_dec(v___y_778_);
lean_dec_ref(v___y_777_);
lean_dec(v___y_776_);
lean_dec_ref(v___y_775_);
return v_res_780_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__3___redArg(lean_object* v_msg_781_, lean_object* v___y_782_, lean_object* v___y_783_, lean_object* v___y_784_, lean_object* v___y_785_){
_start:
{
lean_object* v_ref_787_; lean_object* v___x_788_; lean_object* v_a_789_; lean_object* v___x_791_; uint8_t v_isShared_792_; uint8_t v_isSharedCheck_797_; 
v_ref_787_ = lean_ctor_get(v___y_784_, 2);
v___x_788_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__3_spec__4(v_msg_781_, v___y_782_, v___y_783_, v___y_784_, v___y_785_);
v_a_789_ = lean_ctor_get(v___x_788_, 0);
v_isSharedCheck_797_ = !lean_is_exclusive(v___x_788_);
if (v_isSharedCheck_797_ == 0)
{
v___x_791_ = v___x_788_;
v_isShared_792_ = v_isSharedCheck_797_;
goto v_resetjp_790_;
}
else
{
lean_inc(v_a_789_);
lean_dec(v___x_788_);
v___x_791_ = lean_box(0);
v_isShared_792_ = v_isSharedCheck_797_;
goto v_resetjp_790_;
}
v_resetjp_790_:
{
lean_object* v___x_793_; lean_object* v___x_795_; 
lean_inc(v_ref_787_);
v___x_793_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_793_, 0, v_ref_787_);
lean_ctor_set(v___x_793_, 1, v_a_789_);
if (v_isShared_792_ == 0)
{
lean_ctor_set_tag(v___x_791_, 1);
lean_ctor_set(v___x_791_, 0, v___x_793_);
v___x_795_ = v___x_791_;
goto v_reusejp_794_;
}
else
{
lean_object* v_reuseFailAlloc_796_; 
v_reuseFailAlloc_796_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_796_, 0, v___x_793_);
v___x_795_ = v_reuseFailAlloc_796_;
goto v_reusejp_794_;
}
v_reusejp_794_:
{
return v___x_795_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__3___redArg___boxed(lean_object* v_msg_798_, lean_object* v___y_799_, lean_object* v___y_800_, lean_object* v___y_801_, lean_object* v___y_802_, lean_object* v___y_803_){
_start:
{
lean_object* v_res_804_; 
v_res_804_ = l_Lean_throwError___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__3___redArg(v_msg_798_, v___y_799_, v___y_800_, v___y_801_, v___y_802_);
lean_dec(v___y_802_);
lean_dec_ref(v___y_801_);
lean_dec(v___y_800_);
lean_dec_ref(v___y_799_);
return v_res_804_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__2(lean_object* v_x_805_, lean_object* v_x_806_, lean_object* v___y_807_, lean_object* v___y_808_, lean_object* v___y_809_, lean_object* v___y_810_){
_start:
{
if (lean_obj_tag(v_x_805_) == 0)
{
lean_object* v___x_812_; lean_object* v___x_813_; 
v___x_812_ = l_List_reverse___redArg(v_x_806_);
v___x_813_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_813_, 0, v___x_812_);
return v___x_813_;
}
else
{
lean_object* v_head_814_; lean_object* v_tail_815_; lean_object* v___x_817_; uint8_t v_isShared_818_; uint8_t v_isSharedCheck_833_; 
v_head_814_ = lean_ctor_get(v_x_805_, 0);
v_tail_815_ = lean_ctor_get(v_x_805_, 1);
v_isSharedCheck_833_ = !lean_is_exclusive(v_x_805_);
if (v_isSharedCheck_833_ == 0)
{
v___x_817_ = v_x_805_;
v_isShared_818_ = v_isSharedCheck_833_;
goto v_resetjp_816_;
}
else
{
lean_inc(v_tail_815_);
lean_inc(v_head_814_);
lean_dec(v_x_805_);
v___x_817_ = lean_box(0);
v_isShared_818_ = v_isSharedCheck_833_;
goto v_resetjp_816_;
}
v_resetjp_816_:
{
lean_object* v___x_819_; 
v___x_819_ = l_Lean_Meta_getFVarFromUserName(v_head_814_, v___y_807_, v___y_808_, v___y_809_, v___y_810_);
if (lean_obj_tag(v___x_819_) == 0)
{
lean_object* v_a_820_; lean_object* v___x_822_; 
v_a_820_ = lean_ctor_get(v___x_819_, 0);
lean_inc(v_a_820_);
lean_dec_ref_known(v___x_819_, 1);
if (v_isShared_818_ == 0)
{
lean_ctor_set(v___x_817_, 1, v_x_806_);
lean_ctor_set(v___x_817_, 0, v_a_820_);
v___x_822_ = v___x_817_;
goto v_reusejp_821_;
}
else
{
lean_object* v_reuseFailAlloc_824_; 
v_reuseFailAlloc_824_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_824_, 0, v_a_820_);
lean_ctor_set(v_reuseFailAlloc_824_, 1, v_x_806_);
v___x_822_ = v_reuseFailAlloc_824_;
goto v_reusejp_821_;
}
v_reusejp_821_:
{
v_x_805_ = v_tail_815_;
v_x_806_ = v___x_822_;
goto _start;
}
}
else
{
lean_object* v_a_825_; lean_object* v___x_827_; uint8_t v_isShared_828_; uint8_t v_isSharedCheck_832_; 
lean_del_object(v___x_817_);
lean_dec(v_tail_815_);
lean_dec(v_x_806_);
v_a_825_ = lean_ctor_get(v___x_819_, 0);
v_isSharedCheck_832_ = !lean_is_exclusive(v___x_819_);
if (v_isSharedCheck_832_ == 0)
{
v___x_827_ = v___x_819_;
v_isShared_828_ = v_isSharedCheck_832_;
goto v_resetjp_826_;
}
else
{
lean_inc(v_a_825_);
lean_dec(v___x_819_);
v___x_827_ = lean_box(0);
v_isShared_828_ = v_isSharedCheck_832_;
goto v_resetjp_826_;
}
v_resetjp_826_:
{
lean_object* v___x_830_; 
if (v_isShared_828_ == 0)
{
v___x_830_ = v___x_827_;
goto v_reusejp_829_;
}
else
{
lean_object* v_reuseFailAlloc_831_; 
v_reuseFailAlloc_831_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_831_, 0, v_a_825_);
v___x_830_ = v_reuseFailAlloc_831_;
goto v_reusejp_829_;
}
v_reusejp_829_:
{
return v___x_830_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__2___boxed(lean_object* v_x_834_, lean_object* v_x_835_, lean_object* v___y_836_, lean_object* v___y_837_, lean_object* v___y_838_, lean_object* v___y_839_, lean_object* v___y_840_){
_start:
{
lean_object* v_res_841_; 
v_res_841_ = l_List_mapM_loop___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__2(v_x_834_, v_x_835_, v___y_836_, v___y_837_, v___y_838_, v___y_839_);
lean_dec(v___y_839_);
lean_dec_ref(v___y_838_);
lean_dec(v___y_837_);
lean_dec_ref(v___y_836_);
return v_res_841_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__1___redArg(lean_object* v_upperBound_842_, lean_object* v_before_843_, lean_object* v_a_844_, lean_object* v_b_845_){
_start:
{
uint8_t v___x_847_; 
v___x_847_ = lean_nat_dec_lt(v_a_844_, v_upperBound_842_);
if (v___x_847_ == 0)
{
lean_object* v___x_848_; 
lean_dec(v_a_844_);
lean_dec_ref(v_before_843_);
v___x_848_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_848_, 0, v_b_845_);
return v___x_848_;
}
else
{
lean_object* v_pos_849_; lean_object* v___x_850_; uint8_t v___x_851_; lean_object* v___x_852_; lean_object* v___x_853_; lean_object* v___x_854_; 
v_pos_849_ = lean_ctor_get(v_before_843_, 1);
lean_inc(v_pos_849_);
lean_inc(v_a_844_);
v___x_850_ = l_Lean_SubExpr_Pos_pushNthBindingDomain(v_a_844_, v_pos_849_);
v___x_851_ = 1;
v___x_852_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_insertBeforeChange(v___x_850_, v___x_851_, v_b_845_);
v___x_853_ = lean_unsigned_to_nat(1u);
v___x_854_ = lean_nat_add(v_a_844_, v___x_853_);
lean_dec(v_a_844_);
v_a_844_ = v___x_854_;
v_b_845_ = v___x_852_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__1___redArg___boxed(lean_object* v_upperBound_856_, lean_object* v_before_857_, lean_object* v_a_858_, lean_object* v_b_859_, lean_object* v___y_860_){
_start:
{
lean_object* v_res_861_; 
v_res_861_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__1___redArg(v_upperBound_856_, v_before_857_, v_a_858_, v_b_859_);
lean_dec(v_upperBound_856_);
return v_res_861_;
}
}
LEAN_EXPORT lean_object* l_List_isPrefixOf_x3f___at___00List_isSuffixOf_x3f___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__0_spec__0(lean_object* v_x_862_, lean_object* v_x_863_){
_start:
{
if (lean_obj_tag(v_x_862_) == 0)
{
lean_object* v___x_864_; 
v___x_864_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_864_, 0, v_x_863_);
return v___x_864_;
}
else
{
if (lean_obj_tag(v_x_863_) == 0)
{
lean_object* v___x_865_; 
v___x_865_ = lean_box(0);
return v___x_865_;
}
else
{
lean_object* v_head_866_; lean_object* v_tail_867_; lean_object* v_head_868_; lean_object* v_tail_869_; uint8_t v___x_870_; 
v_head_866_ = lean_ctor_get(v_x_862_, 0);
v_tail_867_ = lean_ctor_get(v_x_862_, 1);
v_head_868_ = lean_ctor_get(v_x_863_, 0);
lean_inc(v_head_868_);
v_tail_869_ = lean_ctor_get(v_x_863_, 1);
lean_inc(v_tail_869_);
lean_dec_ref_known(v_x_863_, 2);
v___x_870_ = lean_name_eq(v_head_866_, v_head_868_);
lean_dec(v_head_868_);
if (v___x_870_ == 0)
{
lean_object* v___x_871_; 
lean_dec(v_tail_869_);
v___x_871_ = lean_box(0);
return v___x_871_;
}
else
{
v_x_862_ = v_tail_867_;
v_x_863_ = v_tail_869_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_isPrefixOf_x3f___at___00List_isSuffixOf_x3f___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__0_spec__0___boxed(lean_object* v_x_873_, lean_object* v_x_874_){
_start:
{
lean_object* v_res_875_; 
v_res_875_ = l_List_isPrefixOf_x3f___at___00List_isSuffixOf_x3f___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__0_spec__0(v_x_873_, v_x_874_);
lean_dec(v_x_873_);
return v_res_875_;
}
}
LEAN_EXPORT lean_object* l_List_isSuffixOf_x3f___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__0(lean_object* v_l_u2081_876_, lean_object* v_l_u2082_877_){
_start:
{
lean_object* v___x_878_; lean_object* v___x_879_; lean_object* v___x_880_; 
v___x_878_ = l_List_reverse___redArg(v_l_u2081_876_);
v___x_879_ = l_List_reverse___redArg(v_l_u2082_877_);
v___x_880_ = l_List_isPrefixOf_x3f___at___00List_isSuffixOf_x3f___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__0_spec__0(v___x_878_, v___x_879_);
lean_dec(v___x_878_);
if (lean_obj_tag(v___x_880_) == 0)
{
return v___x_880_;
}
else
{
lean_object* v_val_881_; lean_object* v___x_883_; uint8_t v_isShared_884_; uint8_t v_isSharedCheck_889_; 
v_val_881_ = lean_ctor_get(v___x_880_, 0);
v_isSharedCheck_889_ = !lean_is_exclusive(v___x_880_);
if (v_isSharedCheck_889_ == 0)
{
v___x_883_ = v___x_880_;
v_isShared_884_ = v_isSharedCheck_889_;
goto v_resetjp_882_;
}
else
{
lean_inc(v_val_881_);
lean_dec(v___x_880_);
v___x_883_ = lean_box(0);
v_isShared_884_ = v_isSharedCheck_889_;
goto v_resetjp_882_;
}
v_resetjp_882_:
{
lean_object* v___x_885_; lean_object* v___x_887_; 
v___x_885_ = l_List_reverse___redArg(v_val_881_);
if (v_isShared_884_ == 0)
{
lean_ctor_set(v___x_883_, 0, v___x_885_);
v___x_887_ = v___x_883_;
goto v_reusejp_886_;
}
else
{
lean_object* v_reuseFailAlloc_888_; 
v_reuseFailAlloc_888_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_888_, 0, v___x_885_);
v___x_887_ = v_reuseFailAlloc_888_;
goto v_reusejp_886_;
}
v_reusejp_886_:
{
return v___x_887_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__4___redArg(uint8_t v_b_u2082_890_, lean_object* v_k_891_, lean_object* v_t_892_){
_start:
{
if (lean_obj_tag(v_t_892_) == 0)
{
lean_object* v_size_893_; lean_object* v_k_894_; lean_object* v_v_895_; lean_object* v_l_896_; lean_object* v_r_897_; lean_object* v___x_899_; uint8_t v_isShared_900_; uint8_t v_isSharedCheck_911_; 
v_size_893_ = lean_ctor_get(v_t_892_, 0);
v_k_894_ = lean_ctor_get(v_t_892_, 1);
v_v_895_ = lean_ctor_get(v_t_892_, 2);
v_l_896_ = lean_ctor_get(v_t_892_, 3);
v_r_897_ = lean_ctor_get(v_t_892_, 4);
v_isSharedCheck_911_ = !lean_is_exclusive(v_t_892_);
if (v_isSharedCheck_911_ == 0)
{
v___x_899_ = v_t_892_;
v_isShared_900_ = v_isSharedCheck_911_;
goto v_resetjp_898_;
}
else
{
lean_inc(v_r_897_);
lean_inc(v_l_896_);
lean_inc(v_v_895_);
lean_inc(v_k_894_);
lean_inc(v_size_893_);
lean_dec(v_t_892_);
v___x_899_ = lean_box(0);
v_isShared_900_ = v_isSharedCheck_911_;
goto v_resetjp_898_;
}
v_resetjp_898_:
{
uint8_t v___x_901_; 
v___x_901_ = lean_nat_dec_lt(v_k_891_, v_k_894_);
if (v___x_901_ == 0)
{
uint8_t v___x_902_; 
v___x_902_ = lean_nat_dec_eq(v_k_891_, v_k_894_);
if (v___x_902_ == 0)
{
lean_object* v_impl_903_; lean_object* v___x_904_; 
lean_del_object(v___x_899_);
lean_dec(v_size_893_);
v_impl_903_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__4___redArg(v_b_u2082_890_, v_k_891_, v_r_897_);
v___x_904_ = l_Std_DTreeMap_Internal_Impl_balance___redArg(v_k_894_, v_v_895_, v_l_896_, v_impl_903_);
return v___x_904_;
}
else
{
lean_object* v___x_905_; lean_object* v___x_907_; 
lean_dec(v_v_895_);
lean_dec(v_k_894_);
v___x_905_ = lean_box(v_b_u2082_890_);
if (v_isShared_900_ == 0)
{
lean_ctor_set(v___x_899_, 2, v___x_905_);
lean_ctor_set(v___x_899_, 1, v_k_891_);
v___x_907_ = v___x_899_;
goto v_reusejp_906_;
}
else
{
lean_object* v_reuseFailAlloc_908_; 
v_reuseFailAlloc_908_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_908_, 0, v_size_893_);
lean_ctor_set(v_reuseFailAlloc_908_, 1, v_k_891_);
lean_ctor_set(v_reuseFailAlloc_908_, 2, v___x_905_);
lean_ctor_set(v_reuseFailAlloc_908_, 3, v_l_896_);
lean_ctor_set(v_reuseFailAlloc_908_, 4, v_r_897_);
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
lean_object* v_impl_909_; lean_object* v___x_910_; 
lean_del_object(v___x_899_);
lean_dec(v_size_893_);
v_impl_909_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__4___redArg(v_b_u2082_890_, v_k_891_, v_l_896_);
v___x_910_ = l_Std_DTreeMap_Internal_Impl_balance___redArg(v_k_894_, v_v_895_, v_impl_909_, v_r_897_);
return v___x_910_;
}
}
}
else
{
lean_object* v___x_912_; lean_object* v___x_913_; lean_object* v___x_914_; 
v___x_912_ = lean_unsigned_to_nat(1u);
v___x_913_ = lean_box(v_b_u2082_890_);
v___x_914_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_914_, 0, v___x_912_);
lean_ctor_set(v___x_914_, 1, v_k_891_);
lean_ctor_set(v___x_914_, 2, v___x_913_);
lean_ctor_set(v___x_914_, 3, v_t_892_);
lean_ctor_set(v___x_914_, 4, v_t_892_);
return v___x_914_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__4___redArg___boxed(lean_object* v_b_u2082_915_, lean_object* v_k_916_, lean_object* v_t_917_){
_start:
{
uint8_t v_b_u2082_boxed_918_; lean_object* v_res_919_; 
v_b_u2082_boxed_918_ = lean_unbox(v_b_u2082_915_);
v_res_919_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__4___redArg(v_b_u2082_boxed_918_, v_k_916_, v_t_917_);
return v_res_919_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__5_spec__7(lean_object* v_init_920_, lean_object* v_x_921_){
_start:
{
if (lean_obj_tag(v_x_921_) == 0)
{
lean_object* v_k_922_; lean_object* v_v_923_; lean_object* v_l_924_; lean_object* v_r_925_; lean_object* v___x_926_; uint8_t v___x_927_; lean_object* v___x_928_; 
v_k_922_ = lean_ctor_get(v_x_921_, 1);
lean_inc(v_k_922_);
v_v_923_ = lean_ctor_get(v_x_921_, 2);
lean_inc(v_v_923_);
v_l_924_ = lean_ctor_get(v_x_921_, 3);
lean_inc(v_l_924_);
v_r_925_ = lean_ctor_get(v_x_921_, 4);
lean_inc(v_r_925_);
lean_dec_ref_known(v_x_921_, 5);
v___x_926_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__5_spec__7(v_init_920_, v_l_924_);
v___x_927_ = lean_unbox(v_v_923_);
lean_dec(v_v_923_);
v___x_928_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__4___redArg(v___x_927_, v_k_922_, v___x_926_);
v_init_920_ = v___x_928_;
v_x_921_ = v_r_925_;
goto _start;
}
else
{
return v_init_920_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_spec__10(lean_object* v_as_930_, size_t v_i_931_, size_t v_stop_932_, lean_object* v_b_933_){
_start:
{
uint8_t v___x_934_; 
v___x_934_ = lean_usize_dec_eq(v_i_931_, v_stop_932_);
if (v___x_934_ == 0)
{
lean_object* v_changesBefore_935_; lean_object* v_changesAfter_936_; lean_object* v___x_937_; lean_object* v_changesBefore_938_; lean_object* v_changesAfter_939_; lean_object* v___x_941_; uint8_t v_isShared_942_; uint8_t v_isSharedCheck_951_; 
v_changesBefore_935_ = lean_ctor_get(v_b_933_, 0);
lean_inc(v_changesBefore_935_);
v_changesAfter_936_ = lean_ctor_get(v_b_933_, 1);
lean_inc(v_changesAfter_936_);
lean_dec_ref(v_b_933_);
v___x_937_ = lean_array_uget(v_as_930_, v_i_931_);
v_changesBefore_938_ = lean_ctor_get(v___x_937_, 0);
v_changesAfter_939_ = lean_ctor_get(v___x_937_, 1);
v_isSharedCheck_951_ = !lean_is_exclusive(v___x_937_);
if (v_isSharedCheck_951_ == 0)
{
v___x_941_ = v___x_937_;
v_isShared_942_ = v_isSharedCheck_951_;
goto v_resetjp_940_;
}
else
{
lean_inc(v_changesAfter_939_);
lean_inc(v_changesBefore_938_);
lean_dec(v___x_937_);
v___x_941_ = lean_box(0);
v_isShared_942_ = v_isSharedCheck_951_;
goto v_resetjp_940_;
}
v_resetjp_940_:
{
lean_object* v___x_943_; lean_object* v___x_944_; lean_object* v___x_946_; 
v___x_943_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__5_spec__7(v_changesBefore_935_, v_changesBefore_938_);
v___x_944_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__5_spec__7(v_changesAfter_936_, v_changesAfter_939_);
if (v_isShared_942_ == 0)
{
lean_ctor_set(v___x_941_, 1, v___x_944_);
lean_ctor_set(v___x_941_, 0, v___x_943_);
v___x_946_ = v___x_941_;
goto v_reusejp_945_;
}
else
{
lean_object* v_reuseFailAlloc_950_; 
v_reuseFailAlloc_950_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_950_, 0, v___x_943_);
lean_ctor_set(v_reuseFailAlloc_950_, 1, v___x_944_);
v___x_946_ = v_reuseFailAlloc_950_;
goto v_reusejp_945_;
}
v_reusejp_945_:
{
size_t v___x_947_; size_t v___x_948_; 
v___x_947_ = ((size_t)1ULL);
v___x_948_ = lean_usize_add(v_i_931_, v___x_947_);
v_i_931_ = v___x_948_;
v_b_933_ = v___x_946_;
goto _start;
}
}
}
else
{
return v_b_933_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_spec__10___boxed(lean_object* v_as_952_, lean_object* v_i_953_, lean_object* v_stop_954_, lean_object* v_b_955_){
_start:
{
size_t v_i_boxed_956_; size_t v_stop_boxed_957_; lean_object* v_res_958_; 
v_i_boxed_956_ = lean_unbox_usize(v_i_953_);
lean_dec(v_i_953_);
v_stop_boxed_957_ = lean_unbox_usize(v_stop_954_);
lean_dec(v_stop_954_);
v_res_958_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_spec__10(v_as_952_, v_i_boxed_956_, v_stop_boxed_957_, v_b_955_);
lean_dec_ref(v_as_952_);
return v_res_958_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_spec__8(lean_object* v_x_959_, lean_object* v_x_960_, lean_object* v_x_961_){
_start:
{
if (lean_obj_tag(v_x_959_) == 5)
{
lean_object* v_fn_962_; lean_object* v_arg_963_; lean_object* v___x_964_; lean_object* v___x_965_; lean_object* v___x_966_; 
v_fn_962_ = lean_ctor_get(v_x_959_, 0);
lean_inc_ref(v_fn_962_);
v_arg_963_ = lean_ctor_get(v_x_959_, 1);
lean_inc_ref(v_arg_963_);
lean_dec_ref_known(v_x_959_, 2);
v___x_964_ = lean_array_set(v_x_960_, v_x_961_, v_arg_963_);
v___x_965_ = lean_unsigned_to_nat(1u);
v___x_966_ = lean_nat_sub(v_x_961_, v___x_965_);
lean_dec(v_x_961_);
v_x_959_ = v_fn_962_;
v_x_960_ = v___x_964_;
v_x_961_ = v___x_966_;
goto _start;
}
else
{
lean_object* v___x_968_; 
lean_dec(v_x_961_);
v___x_968_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_968_, 0, v_x_959_);
lean_ctor_set(v___x_968_, 1, v_x_960_);
return v___x_968_;
}
}
}
static lean_object* _init_l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore___closed__0(void){
_start:
{
lean_object* v___x_969_; lean_object* v_dummy_970_; 
v___x_969_ = lean_box(0);
v_dummy_970_ = l_Lean_Expr_sort___override(v___x_969_);
return v_dummy_970_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_spec__9___redArg(lean_object* v_snd_971_, lean_object* v_before_972_, lean_object* v_after_973_, size_t v_sz_974_, size_t v_i_975_, lean_object* v_bs_976_, lean_object* v___y_977_, lean_object* v___y_978_, lean_object* v___y_979_, lean_object* v___y_980_){
_start:
{
uint8_t v___x_982_; 
v___x_982_ = lean_usize_dec_lt(v_i_975_, v_sz_974_);
if (v___x_982_ == 0)
{
lean_object* v___x_983_; 
v___x_983_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_983_, 0, v_bs_976_);
return v___x_983_;
}
else
{
lean_object* v_v_984_; lean_object* v_fst_985_; lean_object* v_snd_986_; lean_object* v___x_988_; uint8_t v_isShared_989_; uint8_t v_isSharedCheck_1016_; 
v_v_984_ = lean_array_uget(v_bs_976_, v_i_975_);
v_fst_985_ = lean_ctor_get(v_v_984_, 0);
v_snd_986_ = lean_ctor_get(v_v_984_, 1);
v_isSharedCheck_1016_ = !lean_is_exclusive(v_v_984_);
if (v_isSharedCheck_1016_ == 0)
{
v___x_988_ = v_v_984_;
v_isShared_989_ = v_isSharedCheck_1016_;
goto v_resetjp_987_;
}
else
{
lean_inc(v_snd_986_);
lean_inc(v_fst_985_);
lean_dec(v_v_984_);
v___x_988_ = lean_box(0);
v_isShared_989_ = v_isSharedCheck_1016_;
goto v_resetjp_987_;
}
v_resetjp_987_:
{
lean_object* v_pos_990_; lean_object* v_pos_991_; lean_object* v___x_992_; lean_object* v_bs_x27_993_; lean_object* v___x_994_; lean_object* v___x_995_; lean_object* v___x_996_; lean_object* v___x_998_; 
v_pos_990_ = lean_ctor_get(v_before_972_, 1);
v_pos_991_ = lean_ctor_get(v_after_973_, 1);
v___x_992_ = lean_unsigned_to_nat(0u);
v_bs_x27_993_ = lean_array_uset(v_bs_976_, v_i_975_, v___x_992_);
v___x_994_ = lean_usize_to_nat(v_i_975_);
v___x_995_ = lean_array_get_size(v_snd_971_);
v___x_996_ = l_Lean_SubExpr_Pos_pushNaryArg(v___x_995_, v___x_994_, v_pos_990_);
if (v_isShared_989_ == 0)
{
lean_ctor_set(v___x_988_, 1, v___x_996_);
v___x_998_ = v___x_988_;
goto v_reusejp_997_;
}
else
{
lean_object* v_reuseFailAlloc_1015_; 
v_reuseFailAlloc_1015_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1015_, 0, v_fst_985_);
lean_ctor_set(v_reuseFailAlloc_1015_, 1, v___x_996_);
v___x_998_ = v_reuseFailAlloc_1015_;
goto v_reusejp_997_;
}
v_reusejp_997_:
{
lean_object* v___x_999_; lean_object* v___x_1000_; lean_object* v___x_1001_; 
v___x_999_ = l_Lean_SubExpr_Pos_pushNaryArg(v___x_995_, v___x_994_, v_pos_991_);
lean_dec(v___x_994_);
v___x_1000_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1000_, 0, v_snd_986_);
lean_ctor_set(v___x_1000_, 1, v___x_999_);
v___x_1001_ = l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore(v___x_998_, v___x_1000_, v___y_977_, v___y_978_, v___y_979_, v___y_980_);
if (lean_obj_tag(v___x_1001_) == 0)
{
lean_object* v_a_1002_; size_t v___x_1003_; size_t v___x_1004_; lean_object* v___x_1005_; 
v_a_1002_ = lean_ctor_get(v___x_1001_, 0);
lean_inc(v_a_1002_);
lean_dec_ref_known(v___x_1001_, 1);
v___x_1003_ = ((size_t)1ULL);
v___x_1004_ = lean_usize_add(v_i_975_, v___x_1003_);
v___x_1005_ = lean_array_uset(v_bs_x27_993_, v_i_975_, v_a_1002_);
v_i_975_ = v___x_1004_;
v_bs_976_ = v___x_1005_;
goto _start;
}
else
{
lean_object* v_a_1007_; lean_object* v___x_1009_; uint8_t v_isShared_1010_; uint8_t v_isSharedCheck_1014_; 
lean_dec_ref(v_bs_x27_993_);
v_a_1007_ = lean_ctor_get(v___x_1001_, 0);
v_isSharedCheck_1014_ = !lean_is_exclusive(v___x_1001_);
if (v_isSharedCheck_1014_ == 0)
{
v___x_1009_ = v___x_1001_;
v_isShared_1010_ = v_isSharedCheck_1014_;
goto v_resetjp_1008_;
}
else
{
lean_inc(v_a_1007_);
lean_dec(v___x_1001_);
v___x_1009_ = lean_box(0);
v_isShared_1010_ = v_isSharedCheck_1014_;
goto v_resetjp_1008_;
}
v_resetjp_1008_:
{
lean_object* v___x_1012_; 
if (v_isShared_1010_ == 0)
{
v___x_1012_ = v___x_1009_;
goto v_reusejp_1011_;
}
else
{
lean_object* v_reuseFailAlloc_1013_; 
v_reuseFailAlloc_1013_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1013_, 0, v_a_1007_);
v___x_1012_ = v_reuseFailAlloc_1013_;
goto v_reusejp_1011_;
}
v_reusejp_1011_:
{
return v___x_1012_;
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
lean_object* v___x_1018_; lean_object* v___x_1019_; 
v___x_1018_ = ((lean_object*)(l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff___closed__0));
v___x_1019_ = l_Lean_stringToMessageData(v___x_1018_);
return v___x_1019_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff___lam__0___boxed(lean_object* v_body_1020_, lean_object* v_pos_1021_, lean_object* v_body_1022_, lean_object* v_pos_1023_, lean_object* v_x_1024_, lean_object* v___y_1025_, lean_object* v___y_1026_, lean_object* v___y_1027_, lean_object* v___y_1028_, lean_object* v___y_1029_){
_start:
{
lean_object* v_res_1030_; 
v_res_1030_ = l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff___lam__0(v_body_1020_, v_pos_1021_, v_body_1022_, v_pos_1023_, v_x_1024_, v___y_1025_, v___y_1026_, v___y_1027_, v___y_1028_);
lean_dec(v___y_1028_);
lean_dec_ref(v___y_1027_);
lean_dec(v___y_1026_);
lean_dec_ref(v___y_1025_);
lean_dec_ref(v_x_1024_);
lean_dec(v_pos_1023_);
lean_dec_ref(v_body_1022_);
lean_dec(v_pos_1021_);
lean_dec_ref(v_body_1020_);
return v_res_1030_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff(lean_object* v_before_1031_, lean_object* v_after_1032_, lean_object* v___y_1033_, lean_object* v___y_1034_, lean_object* v___y_1035_, lean_object* v___y_1036_){
_start:
{
lean_object* v___y_1039_; lean_object* v___y_1040_; lean_object* v___y_1041_; lean_object* v___y_1042_; lean_object* v___y_1043_; lean_object* v_a_1044_; lean_object* v___y_1048_; lean_object* v___y_1049_; lean_object* v___y_1050_; lean_object* v___y_1051_; lean_object* v___y_1052_; lean_object* v___y_1053_; lean_object* v___y_1054_; uint8_t v___y_1055_; lean_object* v___y_1067_; lean_object* v___y_1068_; lean_object* v___y_1069_; lean_object* v___y_1070_; lean_object* v___y_1071_; lean_object* v___y_1072_; lean_object* v___y_1073_; lean_object* v_a_1074_; lean_object* v___y_1078_; lean_object* v___y_1079_; lean_object* v___y_1080_; lean_object* v___y_1081_; lean_object* v___y_1082_; lean_object* v___y_1083_; lean_object* v___y_1084_; lean_object* v_expr_1115_; 
v_expr_1115_ = lean_ctor_get(v_before_1031_, 0);
if (lean_obj_tag(v_expr_1115_) == 7)
{
lean_object* v_pos_1116_; lean_object* v_binderName_1117_; lean_object* v_binderType_1118_; lean_object* v_body_1119_; uint8_t v_binderInfo_1120_; lean_object* v_expr_1121_; lean_object* v_pos_1122_; lean_object* v___y_1124_; lean_object* v___y_1125_; lean_object* v___y_1126_; lean_object* v___y_1127_; 
v_pos_1116_ = lean_ctor_get(v_before_1031_, 1);
v_binderName_1117_ = lean_ctor_get(v_expr_1115_, 0);
v_binderType_1118_ = lean_ctor_get(v_expr_1115_, 1);
v_body_1119_ = lean_ctor_get(v_expr_1115_, 2);
v_binderInfo_1120_ = lean_ctor_get_uint8(v_expr_1115_, sizeof(void*)*3 + 8);
v_expr_1121_ = lean_ctor_get(v_after_1032_, 0);
v_pos_1122_ = lean_ctor_get(v_after_1032_, 1);
if (lean_obj_tag(v_expr_1121_) == 7)
{
lean_object* v_binderName_1148_; lean_object* v_binderType_1149_; lean_object* v_body_1150_; uint8_t v_binderInfo_1151_; lean_object* v___f_1152_; uint8_t v___y_1154_; uint8_t v___x_1204_; 
v_binderName_1148_ = lean_ctor_get(v_expr_1121_, 0);
v_binderType_1149_ = lean_ctor_get(v_expr_1121_, 1);
v_body_1150_ = lean_ctor_get(v_expr_1121_, 2);
v_binderInfo_1151_ = lean_ctor_get_uint8(v_expr_1121_, sizeof(void*)*3 + 8);
lean_inc(v_pos_1122_);
lean_inc_ref(v_body_1150_);
lean_inc(v_pos_1116_);
lean_inc_ref(v_body_1119_);
v___f_1152_ = lean_alloc_closure((void*)(l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff___lam__0___boxed), 10, 4);
lean_closure_set(v___f_1152_, 0, v_body_1119_);
lean_closure_set(v___f_1152_, 1, v_pos_1116_);
lean_closure_set(v___f_1152_, 2, v_body_1150_);
lean_closure_set(v___f_1152_, 3, v_pos_1122_);
v___x_1204_ = lean_name_eq(v_binderName_1117_, v_binderName_1148_);
if (v___x_1204_ == 0)
{
v___y_1154_ = v___x_1204_;
goto v___jp_1153_;
}
else
{
uint8_t v___x_1205_; 
v___x_1205_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_1120_, v_binderInfo_1151_);
v___y_1154_ = v___x_1205_;
goto v___jp_1153_;
}
v___jp_1153_:
{
if (v___y_1154_ == 0)
{
lean_dec_ref(v___f_1152_);
v___y_1124_ = v___y_1033_;
v___y_1125_ = v___y_1034_;
v___y_1126_ = v___y_1035_;
v___y_1127_ = v___y_1036_;
goto v___jp_1123_;
}
else
{
lean_object* v___x_1156_; uint8_t v_isShared_1157_; uint8_t v_isSharedCheck_1201_; 
lean_inc_ref(v_binderType_1149_);
lean_inc(v_pos_1122_);
lean_inc_ref(v_binderType_1118_);
lean_inc(v_binderName_1117_);
lean_inc(v_pos_1116_);
v_isSharedCheck_1201_ = !lean_is_exclusive(v_before_1031_);
if (v_isSharedCheck_1201_ == 0)
{
lean_object* v_unused_1202_; lean_object* v_unused_1203_; 
v_unused_1202_ = lean_ctor_get(v_before_1031_, 1);
lean_dec(v_unused_1202_);
v_unused_1203_ = lean_ctor_get(v_before_1031_, 0);
lean_dec(v_unused_1203_);
v___x_1156_ = v_before_1031_;
v_isShared_1157_ = v_isSharedCheck_1201_;
goto v_resetjp_1155_;
}
else
{
lean_dec(v_before_1031_);
v___x_1156_ = lean_box(0);
v_isShared_1157_ = v_isSharedCheck_1201_;
goto v_resetjp_1155_;
}
v_resetjp_1155_:
{
lean_object* v___x_1159_; uint8_t v_isShared_1160_; uint8_t v_isSharedCheck_1198_; 
v_isSharedCheck_1198_ = !lean_is_exclusive(v_after_1032_);
if (v_isSharedCheck_1198_ == 0)
{
lean_object* v_unused_1199_; lean_object* v_unused_1200_; 
v_unused_1199_ = lean_ctor_get(v_after_1032_, 1);
lean_dec(v_unused_1199_);
v_unused_1200_ = lean_ctor_get(v_after_1032_, 0);
lean_dec(v_unused_1200_);
v___x_1159_ = v_after_1032_;
v_isShared_1160_ = v_isSharedCheck_1198_;
goto v_resetjp_1158_;
}
else
{
lean_dec(v_after_1032_);
v___x_1159_ = lean_box(0);
v_isShared_1160_ = v_isSharedCheck_1198_;
goto v_resetjp_1158_;
}
v_resetjp_1158_:
{
lean_object* v___x_1161_; lean_object* v___x_1163_; 
v___x_1161_ = l_Lean_SubExpr_Pos_pushBindingDomain(v_pos_1116_);
lean_inc_ref(v_binderType_1118_);
if (v_isShared_1160_ == 0)
{
lean_ctor_set(v___x_1159_, 1, v___x_1161_);
lean_ctor_set(v___x_1159_, 0, v_binderType_1118_);
v___x_1163_ = v___x_1159_;
goto v_reusejp_1162_;
}
else
{
lean_object* v_reuseFailAlloc_1197_; 
v_reuseFailAlloc_1197_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1197_, 0, v_binderType_1118_);
lean_ctor_set(v_reuseFailAlloc_1197_, 1, v___x_1161_);
v___x_1163_ = v_reuseFailAlloc_1197_;
goto v_reusejp_1162_;
}
v_reusejp_1162_:
{
lean_object* v___x_1164_; lean_object* v___x_1166_; 
v___x_1164_ = l_Lean_SubExpr_Pos_pushBindingDomain(v_pos_1122_);
if (v_isShared_1157_ == 0)
{
lean_ctor_set(v___x_1156_, 1, v___x_1164_);
lean_ctor_set(v___x_1156_, 0, v_binderType_1149_);
v___x_1166_ = v___x_1156_;
goto v_reusejp_1165_;
}
else
{
lean_object* v_reuseFailAlloc_1196_; 
v_reuseFailAlloc_1196_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1196_, 0, v_binderType_1149_);
lean_ctor_set(v_reuseFailAlloc_1196_, 1, v___x_1164_);
v___x_1166_ = v_reuseFailAlloc_1196_;
goto v_reusejp_1165_;
}
v_reusejp_1165_:
{
lean_object* v___x_1167_; 
v___x_1167_ = l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore(v___x_1163_, v___x_1166_, v___y_1033_, v___y_1034_, v___y_1035_, v___y_1036_);
if (lean_obj_tag(v___x_1167_) == 0)
{
lean_object* v_a_1168_; lean_object* v___x_1170_; uint8_t v_isShared_1171_; uint8_t v_isSharedCheck_1195_; 
v_a_1168_ = lean_ctor_get(v___x_1167_, 0);
v_isSharedCheck_1195_ = !lean_is_exclusive(v___x_1167_);
if (v_isSharedCheck_1195_ == 0)
{
v___x_1170_ = v___x_1167_;
v_isShared_1171_ = v_isSharedCheck_1195_;
goto v_resetjp_1169_;
}
else
{
lean_inc(v_a_1168_);
lean_dec(v___x_1167_);
v___x_1170_ = lean_box(0);
v_isShared_1171_ = v_isSharedCheck_1195_;
goto v_resetjp_1169_;
}
v_resetjp_1169_:
{
uint8_t v___x_1172_; 
v___x_1172_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_isEmpty(v_a_1168_);
if (v___x_1172_ == 0)
{
lean_object* v_changesBefore_1173_; lean_object* v_changesAfter_1174_; lean_object* v___x_1175_; lean_object* v___x_1176_; uint8_t v___x_1177_; lean_object* v___x_1178_; lean_object* v_changesBefore_1179_; lean_object* v_changesAfter_1180_; lean_object* v___x_1182_; uint8_t v_isShared_1183_; uint8_t v_isSharedCheck_1192_; 
lean_dec_ref(v___f_1152_);
lean_dec_ref(v_binderType_1118_);
lean_dec(v_binderName_1117_);
v_changesBefore_1173_ = lean_ctor_get(v_a_1168_, 0);
lean_inc(v_changesBefore_1173_);
v_changesAfter_1174_ = lean_ctor_get(v_a_1168_, 1);
lean_inc(v_changesAfter_1174_);
lean_dec(v_a_1168_);
v___x_1175_ = l_Lean_SubExpr_Pos_pushBindingBody(v_pos_1116_);
lean_dec(v_pos_1116_);
v___x_1176_ = l_Lean_SubExpr_Pos_pushBindingBody(v_pos_1122_);
lean_dec(v_pos_1122_);
v___x_1177_ = 0;
v___x_1178_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_withChangePos(v___x_1175_, v___x_1176_, v___x_1177_);
v_changesBefore_1179_ = lean_ctor_get(v___x_1178_, 0);
v_changesAfter_1180_ = lean_ctor_get(v___x_1178_, 1);
v_isSharedCheck_1192_ = !lean_is_exclusive(v___x_1178_);
if (v_isSharedCheck_1192_ == 0)
{
v___x_1182_ = v___x_1178_;
v_isShared_1183_ = v_isSharedCheck_1192_;
goto v_resetjp_1181_;
}
else
{
lean_inc(v_changesAfter_1180_);
lean_inc(v_changesBefore_1179_);
lean_dec(v___x_1178_);
v___x_1182_ = lean_box(0);
v_isShared_1183_ = v_isSharedCheck_1192_;
goto v_resetjp_1181_;
}
v_resetjp_1181_:
{
lean_object* v___x_1184_; lean_object* v___x_1185_; lean_object* v___x_1187_; 
v___x_1184_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__5_spec__7(v_changesBefore_1173_, v_changesBefore_1179_);
v___x_1185_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__5_spec__7(v_changesAfter_1174_, v_changesAfter_1180_);
if (v_isShared_1183_ == 0)
{
lean_ctor_set(v___x_1182_, 1, v___x_1185_);
lean_ctor_set(v___x_1182_, 0, v___x_1184_);
v___x_1187_ = v___x_1182_;
goto v_reusejp_1186_;
}
else
{
lean_object* v_reuseFailAlloc_1191_; 
v_reuseFailAlloc_1191_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1191_, 0, v___x_1184_);
lean_ctor_set(v_reuseFailAlloc_1191_, 1, v___x_1185_);
v___x_1187_ = v_reuseFailAlloc_1191_;
goto v_reusejp_1186_;
}
v_reusejp_1186_:
{
lean_object* v___x_1189_; 
if (v_isShared_1171_ == 0)
{
lean_ctor_set(v___x_1170_, 0, v___x_1187_);
v___x_1189_ = v___x_1170_;
goto v_reusejp_1188_;
}
else
{
lean_object* v_reuseFailAlloc_1190_; 
v_reuseFailAlloc_1190_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1190_, 0, v___x_1187_);
v___x_1189_ = v_reuseFailAlloc_1190_;
goto v_reusejp_1188_;
}
v_reusejp_1188_:
{
return v___x_1189_;
}
}
}
}
else
{
uint8_t v___x_1193_; lean_object* v___x_1194_; 
lean_del_object(v___x_1170_);
lean_dec(v_a_1168_);
lean_dec(v_pos_1122_);
lean_dec(v_pos_1116_);
v___x_1193_ = 0;
v___x_1194_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__6___redArg(v_binderName_1117_, v_binderInfo_1120_, v_binderType_1118_, v___f_1152_, v___x_1193_, v___y_1033_, v___y_1034_, v___y_1035_, v___y_1036_);
return v___x_1194_;
}
}
}
else
{
lean_dec_ref(v___f_1152_);
lean_dec(v_pos_1122_);
lean_dec_ref(v_binderType_1118_);
lean_dec(v_binderName_1117_);
lean_dec(v_pos_1116_);
return v___x_1167_;
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
v___y_1124_ = v___y_1033_;
v___y_1125_ = v___y_1034_;
v___y_1126_ = v___y_1035_;
v___y_1127_ = v___y_1036_;
goto v___jp_1123_;
}
v___jp_1123_:
{
lean_object* v___x_1128_; lean_object* v___x_1129_; lean_object* v___x_1130_; 
v___x_1128_ = l_Lean_Expr_getForallBinderNames(v_expr_1121_);
v___x_1129_ = l_Lean_Expr_getForallBinderNames(v_expr_1115_);
v___x_1130_ = l_List_isSuffixOf_x3f___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__0(v___x_1128_, v___x_1129_);
if (lean_obj_tag(v___x_1130_) == 1)
{
lean_object* v_val_1131_; lean_object* v___x_1132_; lean_object* v___x_1133_; uint8_t v___x_1134_; 
v_val_1131_ = lean_ctor_get(v___x_1130_, 0);
lean_inc(v_val_1131_);
lean_dec_ref_known(v___x_1130_, 1);
v___x_1132_ = l_List_lengthTR___redArg(v_val_1131_);
v___x_1133_ = lean_unsigned_to_nat(0u);
v___x_1134_ = lean_nat_dec_eq(v___x_1132_, v___x_1133_);
lean_dec(v___x_1132_);
if (v___x_1134_ == 0)
{
lean_inc_ref(v_expr_1115_);
lean_inc(v_pos_1116_);
v___y_1078_ = v_pos_1116_;
v___y_1079_ = v_expr_1115_;
v___y_1080_ = v_val_1131_;
v___y_1081_ = v___y_1124_;
v___y_1082_ = v___y_1125_;
v___y_1083_ = v___y_1126_;
v___y_1084_ = v___y_1127_;
goto v___jp_1077_;
}
else
{
lean_object* v___x_1135_; lean_object* v___x_1136_; 
v___x_1135_ = lean_obj_once(&l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff___closed__1, &l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff___closed__1_once, _init_l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff___closed__1);
v___x_1136_ = l_Lean_throwError___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__3___redArg(v___x_1135_, v___y_1124_, v___y_1125_, v___y_1126_, v___y_1127_);
if (lean_obj_tag(v___x_1136_) == 0)
{
lean_dec_ref_known(v___x_1136_, 1);
lean_inc_ref(v_expr_1115_);
lean_inc(v_pos_1116_);
v___y_1078_ = v_pos_1116_;
v___y_1079_ = v_expr_1115_;
v___y_1080_ = v_val_1131_;
v___y_1081_ = v___y_1124_;
v___y_1082_ = v___y_1125_;
v___y_1083_ = v___y_1126_;
v___y_1084_ = v___y_1127_;
goto v___jp_1077_;
}
else
{
lean_object* v_a_1137_; lean_object* v___x_1139_; uint8_t v_isShared_1140_; uint8_t v_isSharedCheck_1144_; 
lean_dec(v_val_1131_);
lean_dec_ref(v_after_1032_);
lean_dec_ref(v_before_1031_);
v_a_1137_ = lean_ctor_get(v___x_1136_, 0);
v_isSharedCheck_1144_ = !lean_is_exclusive(v___x_1136_);
if (v_isSharedCheck_1144_ == 0)
{
v___x_1139_ = v___x_1136_;
v_isShared_1140_ = v_isSharedCheck_1144_;
goto v_resetjp_1138_;
}
else
{
lean_inc(v_a_1137_);
lean_dec(v___x_1136_);
v___x_1139_ = lean_box(0);
v_isShared_1140_ = v_isSharedCheck_1144_;
goto v_resetjp_1138_;
}
v_resetjp_1138_:
{
lean_object* v___x_1142_; 
if (v_isShared_1140_ == 0)
{
v___x_1142_ = v___x_1139_;
goto v_reusejp_1141_;
}
else
{
lean_object* v_reuseFailAlloc_1143_; 
v_reuseFailAlloc_1143_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1143_, 0, v_a_1137_);
v___x_1142_ = v_reuseFailAlloc_1143_;
goto v_reusejp_1141_;
}
v_reusejp_1141_:
{
return v___x_1142_;
}
}
}
}
}
else
{
uint8_t v___x_1145_; lean_object* v___x_1146_; lean_object* v___x_1147_; 
lean_dec(v___x_1130_);
v___x_1145_ = 0;
v___x_1146_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_withChange(v_before_1031_, v_after_1032_, v___x_1145_);
v___x_1147_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1147_, 0, v___x_1146_);
return v___x_1147_;
}
}
}
else
{
lean_object* v___x_1206_; lean_object* v___x_1207_; 
lean_dec_ref(v_after_1032_);
lean_dec_ref(v_before_1031_);
v___x_1206_ = ((lean_object*)(l___private_Lean_Widget_Diff_0__Lean_Widget_instEmptyCollectionExprDiff___closed__0));
v___x_1207_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1207_, 0, v___x_1206_);
return v___x_1207_;
}
v___jp_1038_:
{
lean_object* v___x_1045_; lean_object* v___x_1046_; 
v___x_1045_ = lean_unsigned_to_nat(0u);
v___x_1046_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__1___redArg(v___y_1042_, v_before_1031_, v___x_1045_, v_a_1044_);
lean_dec(v___y_1042_);
return v___x_1046_;
}
v___jp_1047_:
{
if (v___y_1055_ == 0)
{
lean_object* v___x_1056_; 
lean_dec_ref(v___y_1051_);
v___x_1056_ = l_Lean_Meta_SavedState_restore___redArg(v___y_1049_, v___y_1054_, v___y_1048_);
lean_dec_ref(v___y_1049_);
if (lean_obj_tag(v___x_1056_) == 0)
{
lean_object* v___x_1057_; 
lean_dec_ref_known(v___x_1056_, 1);
v___x_1057_ = ((lean_object*)(l___private_Lean_Widget_Diff_0__Lean_Widget_instEmptyCollectionExprDiff___closed__0));
v___y_1039_ = v___y_1048_;
v___y_1040_ = v___y_1050_;
v___y_1041_ = v___y_1052_;
v___y_1042_ = v___y_1053_;
v___y_1043_ = v___y_1054_;
v_a_1044_ = v___x_1057_;
goto v___jp_1038_;
}
else
{
lean_object* v_a_1058_; lean_object* v___x_1060_; uint8_t v_isShared_1061_; uint8_t v_isSharedCheck_1065_; 
lean_dec(v___y_1053_);
lean_dec_ref(v_before_1031_);
v_a_1058_ = lean_ctor_get(v___x_1056_, 0);
v_isSharedCheck_1065_ = !lean_is_exclusive(v___x_1056_);
if (v_isSharedCheck_1065_ == 0)
{
v___x_1060_ = v___x_1056_;
v_isShared_1061_ = v_isSharedCheck_1065_;
goto v_resetjp_1059_;
}
else
{
lean_inc(v_a_1058_);
lean_dec(v___x_1056_);
v___x_1060_ = lean_box(0);
v_isShared_1061_ = v_isSharedCheck_1065_;
goto v_resetjp_1059_;
}
v_resetjp_1059_:
{
lean_object* v___x_1063_; 
if (v_isShared_1061_ == 0)
{
v___x_1063_ = v___x_1060_;
goto v_reusejp_1062_;
}
else
{
lean_object* v_reuseFailAlloc_1064_; 
v_reuseFailAlloc_1064_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1064_, 0, v_a_1058_);
v___x_1063_ = v_reuseFailAlloc_1064_;
goto v_reusejp_1062_;
}
v_reusejp_1062_:
{
return v___x_1063_;
}
}
}
}
else
{
lean_dec(v___y_1053_);
lean_dec_ref(v___y_1049_);
lean_dec_ref(v_before_1031_);
return v___y_1051_;
}
}
v___jp_1066_:
{
uint8_t v___x_1075_; 
v___x_1075_ = l_Lean_Exception_isInterrupt(v_a_1074_);
if (v___x_1075_ == 0)
{
uint8_t v___x_1076_; 
v___x_1076_ = l_Lean_Exception_isRuntime(v_a_1074_);
v___y_1048_ = v___y_1067_;
v___y_1049_ = v___y_1068_;
v___y_1050_ = v___y_1069_;
v___y_1051_ = v___y_1073_;
v___y_1052_ = v___y_1070_;
v___y_1053_ = v___y_1071_;
v___y_1054_ = v___y_1072_;
v___y_1055_ = v___x_1076_;
goto v___jp_1047_;
}
else
{
lean_dec_ref(v_a_1074_);
v___y_1048_ = v___y_1067_;
v___y_1049_ = v___y_1068_;
v___y_1050_ = v___y_1069_;
v___y_1051_ = v___y_1073_;
v___y_1052_ = v___y_1070_;
v___y_1053_ = v___y_1071_;
v___y_1054_ = v___y_1072_;
v___y_1055_ = v___x_1075_;
goto v___jp_1047_;
}
}
v___jp_1077_:
{
lean_object* v___x_1085_; lean_object* v_body_u2080_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; 
v___x_1085_ = l_List_lengthTR___redArg(v___y_1080_);
lean_inc(v___x_1085_);
v_body_u2080_1086_ = l_Lean_Expr_getForallBodyMaxDepth(v___x_1085_, v___y_1079_);
lean_dec_ref(v___y_1079_);
v___x_1087_ = lean_box(0);
v___x_1088_ = l_Lean_Meta_saveState___redArg(v___y_1082_, v___y_1084_);
if (lean_obj_tag(v___x_1088_) == 0)
{
lean_object* v_a_1089_; lean_object* v___x_1090_; 
v_a_1089_ = lean_ctor_get(v___x_1088_, 0);
lean_inc(v_a_1089_);
lean_dec_ref_known(v___x_1088_, 1);
v___x_1090_ = l_List_mapM_loop___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__2(v___y_1080_, v___x_1087_, v___y_1081_, v___y_1082_, v___y_1083_, v___y_1084_);
if (lean_obj_tag(v___x_1090_) == 0)
{
lean_object* v_a_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; lean_object* v___x_1096_; 
v_a_1091_ = lean_ctor_get(v___x_1090_, 0);
lean_inc(v_a_1091_);
lean_dec_ref_known(v___x_1090_, 1);
v___x_1092_ = lean_array_mk(v_a_1091_);
v___x_1093_ = lean_expr_instantiate_rev(v_body_u2080_1086_, v___x_1092_);
lean_dec_ref(v___x_1092_);
lean_dec_ref(v_body_u2080_1086_);
lean_inc(v___x_1085_);
v___x_1094_ = l_Lean_SubExpr_Pos_pushNthBindingBody(v___x_1085_, v___y_1078_);
v___x_1095_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1095_, 0, v___x_1093_);
lean_ctor_set(v___x_1095_, 1, v___x_1094_);
v___x_1096_ = l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore(v___x_1095_, v_after_1032_, v___y_1081_, v___y_1082_, v___y_1083_, v___y_1084_);
if (lean_obj_tag(v___x_1096_) == 0)
{
lean_object* v_a_1097_; 
lean_dec(v_a_1089_);
v_a_1097_ = lean_ctor_get(v___x_1096_, 0);
lean_inc(v_a_1097_);
lean_dec_ref_known(v___x_1096_, 1);
v___y_1039_ = v___y_1084_;
v___y_1040_ = v___y_1083_;
v___y_1041_ = v___y_1081_;
v___y_1042_ = v___x_1085_;
v___y_1043_ = v___y_1082_;
v_a_1044_ = v_a_1097_;
goto v___jp_1038_;
}
else
{
lean_object* v_a_1098_; 
v_a_1098_ = lean_ctor_get(v___x_1096_, 0);
lean_inc(v_a_1098_);
v___y_1067_ = v___y_1084_;
v___y_1068_ = v_a_1089_;
v___y_1069_ = v___y_1083_;
v___y_1070_ = v___y_1081_;
v___y_1071_ = v___x_1085_;
v___y_1072_ = v___y_1082_;
v___y_1073_ = v___x_1096_;
v_a_1074_ = v_a_1098_;
goto v___jp_1066_;
}
}
else
{
lean_object* v_a_1099_; lean_object* v___x_1101_; uint8_t v_isShared_1102_; uint8_t v_isSharedCheck_1106_; 
lean_dec_ref(v_body_u2080_1086_);
lean_dec(v___y_1078_);
lean_dec_ref(v_after_1032_);
v_a_1099_ = lean_ctor_get(v___x_1090_, 0);
v_isSharedCheck_1106_ = !lean_is_exclusive(v___x_1090_);
if (v_isSharedCheck_1106_ == 0)
{
v___x_1101_ = v___x_1090_;
v_isShared_1102_ = v_isSharedCheck_1106_;
goto v_resetjp_1100_;
}
else
{
lean_inc(v_a_1099_);
lean_dec(v___x_1090_);
v___x_1101_ = lean_box(0);
v_isShared_1102_ = v_isSharedCheck_1106_;
goto v_resetjp_1100_;
}
v_resetjp_1100_:
{
lean_object* v___x_1104_; 
lean_inc(v_a_1099_);
if (v_isShared_1102_ == 0)
{
v___x_1104_ = v___x_1101_;
goto v_reusejp_1103_;
}
else
{
lean_object* v_reuseFailAlloc_1105_; 
v_reuseFailAlloc_1105_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1105_, 0, v_a_1099_);
v___x_1104_ = v_reuseFailAlloc_1105_;
goto v_reusejp_1103_;
}
v_reusejp_1103_:
{
v___y_1067_ = v___y_1084_;
v___y_1068_ = v_a_1089_;
v___y_1069_ = v___y_1083_;
v___y_1070_ = v___y_1081_;
v___y_1071_ = v___x_1085_;
v___y_1072_ = v___y_1082_;
v___y_1073_ = v___x_1104_;
v_a_1074_ = v_a_1099_;
goto v___jp_1066_;
}
}
}
}
else
{
lean_object* v_a_1107_; lean_object* v___x_1109_; uint8_t v_isShared_1110_; uint8_t v_isSharedCheck_1114_; 
lean_dec_ref(v_body_u2080_1086_);
lean_dec(v___x_1085_);
lean_dec(v___y_1080_);
lean_dec(v___y_1078_);
lean_dec_ref(v_after_1032_);
lean_dec_ref(v_before_1031_);
v_a_1107_ = lean_ctor_get(v___x_1088_, 0);
v_isSharedCheck_1114_ = !lean_is_exclusive(v___x_1088_);
if (v_isSharedCheck_1114_ == 0)
{
v___x_1109_ = v___x_1088_;
v_isShared_1110_ = v_isSharedCheck_1114_;
goto v_resetjp_1108_;
}
else
{
lean_inc(v_a_1107_);
lean_dec(v___x_1088_);
v___x_1109_ = lean_box(0);
v_isShared_1110_ = v_isSharedCheck_1114_;
goto v_resetjp_1108_;
}
v_resetjp_1108_:
{
lean_object* v___x_1112_; 
if (v_isShared_1110_ == 0)
{
v___x_1112_ = v___x_1109_;
goto v_reusejp_1111_;
}
else
{
lean_object* v_reuseFailAlloc_1113_; 
v_reuseFailAlloc_1113_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1113_, 0, v_a_1107_);
v___x_1112_ = v_reuseFailAlloc_1113_;
goto v_reusejp_1111_;
}
v_reusejp_1111_:
{
return v___x_1112_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore(lean_object* v_before_1208_, lean_object* v_after_1209_, lean_object* v___y_1210_, lean_object* v___y_1211_, lean_object* v___y_1212_, lean_object* v___y_1213_){
_start:
{
lean_object* v_expr_1231_; lean_object* v_pos_1232_; lean_object* v_expr_1233_; lean_object* v_pos_1234_; lean_object* v_e_u2081_1236_; lean_object* v___y_1237_; lean_object* v___y_1238_; lean_object* v___y_1239_; lean_object* v___y_1240_; uint8_t v___x_1243_; 
v_expr_1231_ = lean_ctor_get(v_before_1208_, 0);
v_pos_1232_ = lean_ctor_get(v_before_1208_, 1);
v_expr_1233_ = lean_ctor_get(v_after_1209_, 0);
v_pos_1234_ = lean_ctor_get(v_after_1209_, 1);
v___x_1243_ = lean_expr_eqv(v_expr_1231_, v_expr_1233_);
if (v___x_1243_ == 0)
{
switch(lean_obj_tag(v_expr_1231_))
{
case 10:
{
lean_object* v___x_1245_; uint8_t v_isShared_1246_; uint8_t v_isSharedCheck_1252_; 
lean_inc_ref(v_expr_1231_);
lean_inc(v_pos_1232_);
v_isSharedCheck_1252_ = !lean_is_exclusive(v_before_1208_);
if (v_isSharedCheck_1252_ == 0)
{
lean_object* v_unused_1253_; lean_object* v_unused_1254_; 
v_unused_1253_ = lean_ctor_get(v_before_1208_, 1);
lean_dec(v_unused_1253_);
v_unused_1254_ = lean_ctor_get(v_before_1208_, 0);
lean_dec(v_unused_1254_);
v___x_1245_ = v_before_1208_;
v_isShared_1246_ = v_isSharedCheck_1252_;
goto v_resetjp_1244_;
}
else
{
lean_dec(v_before_1208_);
v___x_1245_ = lean_box(0);
v_isShared_1246_ = v_isSharedCheck_1252_;
goto v_resetjp_1244_;
}
v_resetjp_1244_:
{
lean_object* v_expr_1247_; lean_object* v___x_1249_; 
v_expr_1247_ = lean_ctor_get(v_expr_1231_, 1);
lean_inc_ref(v_expr_1247_);
lean_dec_ref_known(v_expr_1231_, 2);
if (v_isShared_1246_ == 0)
{
lean_ctor_set(v___x_1245_, 0, v_expr_1247_);
v___x_1249_ = v___x_1245_;
goto v_reusejp_1248_;
}
else
{
lean_object* v_reuseFailAlloc_1251_; 
v_reuseFailAlloc_1251_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1251_, 0, v_expr_1247_);
lean_ctor_set(v_reuseFailAlloc_1251_, 1, v_pos_1232_);
v___x_1249_ = v_reuseFailAlloc_1251_;
goto v_reusejp_1248_;
}
v_reusejp_1248_:
{
v_before_1208_ = v___x_1249_;
goto _start;
}
}
}
case 5:
{
switch(lean_obj_tag(v_expr_1233_))
{
case 10:
{
lean_object* v_expr_1255_; 
lean_inc_ref(v_expr_1233_);
lean_inc(v_pos_1234_);
lean_dec_ref(v_after_1209_);
v_expr_1255_ = lean_ctor_get(v_expr_1233_, 1);
lean_inc_ref(v_expr_1255_);
lean_dec_ref_known(v_expr_1233_, 2);
v_e_u2081_1236_ = v_expr_1255_;
v___y_1237_ = v___y_1210_;
v___y_1238_ = v___y_1211_;
v___y_1239_ = v___y_1212_;
v___y_1240_ = v___y_1213_;
goto v___jp_1235_;
}
case 5:
{
lean_object* v_dummy_1256_; lean_object* v_nargs_1257_; lean_object* v___x_1258_; lean_object* v___x_1259_; lean_object* v___x_1260_; lean_object* v___x_1261_; lean_object* v_fst_1262_; lean_object* v_snd_1263_; lean_object* v_nargs_1264_; lean_object* v___x_1265_; lean_object* v___x_1266_; lean_object* v___x_1267_; lean_object* v_fst_1268_; lean_object* v_snd_1269_; uint8_t v___x_1270_; 
v_dummy_1256_ = lean_obj_once(&l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore___closed__0, &l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore___closed__0_once, _init_l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore___closed__0);
v_nargs_1257_ = l_Lean_Expr_getAppNumArgs(v_expr_1233_);
lean_inc(v_nargs_1257_);
v___x_1258_ = lean_mk_array(v_nargs_1257_, v_dummy_1256_);
v___x_1259_ = lean_unsigned_to_nat(1u);
v___x_1260_ = lean_nat_sub(v_nargs_1257_, v___x_1259_);
lean_dec(v_nargs_1257_);
lean_inc_ref(v_expr_1233_);
v___x_1261_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_spec__8(v_expr_1233_, v___x_1258_, v___x_1260_);
v_fst_1262_ = lean_ctor_get(v___x_1261_, 0);
lean_inc(v_fst_1262_);
v_snd_1263_ = lean_ctor_get(v___x_1261_, 1);
lean_inc(v_snd_1263_);
lean_dec_ref(v___x_1261_);
v_nargs_1264_ = l_Lean_Expr_getAppNumArgs(v_expr_1231_);
lean_inc(v_nargs_1264_);
v___x_1265_ = lean_mk_array(v_nargs_1264_, v_dummy_1256_);
v___x_1266_ = lean_nat_sub(v_nargs_1264_, v___x_1259_);
lean_dec(v_nargs_1264_);
lean_inc_ref(v_expr_1231_);
v___x_1267_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_spec__8(v_expr_1231_, v___x_1265_, v___x_1266_);
v_fst_1268_ = lean_ctor_get(v___x_1267_, 0);
lean_inc(v_fst_1268_);
v_snd_1269_ = lean_ctor_get(v___x_1267_, 1);
lean_inc(v_snd_1269_);
lean_dec_ref(v___x_1267_);
v___x_1270_ = lean_expr_eqv(v_fst_1262_, v_fst_1268_);
lean_dec(v_fst_1268_);
lean_dec(v_fst_1262_);
if (v___x_1270_ == 0)
{
lean_dec(v_snd_1269_);
lean_dec(v_snd_1263_);
goto v___jp_1223_;
}
else
{
if (v___x_1243_ == 0)
{
lean_object* v___x_1271_; lean_object* v___x_1272_; uint8_t v___x_1273_; 
v___x_1271_ = lean_array_get_size(v_snd_1263_);
v___x_1272_ = lean_array_get_size(v_snd_1269_);
v___x_1273_ = lean_nat_dec_eq(v___x_1271_, v___x_1272_);
if (v___x_1273_ == 0)
{
lean_dec(v_snd_1269_);
lean_dec(v_snd_1263_);
goto v___jp_1223_;
}
else
{
if (v___x_1243_ == 0)
{
lean_object* v_args_1274_; size_t v_sz_1275_; size_t v___x_1276_; lean_object* v___x_1277_; 
v_args_1274_ = l_Array_zip___redArg(v_snd_1263_, v_snd_1269_);
lean_dec(v_snd_1269_);
v_sz_1275_ = lean_array_size(v_args_1274_);
v___x_1276_ = ((size_t)0ULL);
v___x_1277_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_spec__9___redArg(v_snd_1263_, v_before_1208_, v_after_1209_, v_sz_1275_, v___x_1276_, v_args_1274_, v___y_1210_, v___y_1211_, v___y_1212_, v___y_1213_);
lean_dec_ref(v_after_1209_);
lean_dec_ref(v_before_1208_);
lean_dec(v_snd_1263_);
if (lean_obj_tag(v___x_1277_) == 0)
{
lean_object* v_a_1278_; lean_object* v___x_1280_; uint8_t v_isShared_1281_; uint8_t v_isSharedCheck_1303_; 
v_a_1278_ = lean_ctor_get(v___x_1277_, 0);
v_isSharedCheck_1303_ = !lean_is_exclusive(v___x_1277_);
if (v_isSharedCheck_1303_ == 0)
{
v___x_1280_ = v___x_1277_;
v_isShared_1281_ = v_isSharedCheck_1303_;
goto v_resetjp_1279_;
}
else
{
lean_inc(v_a_1278_);
lean_dec(v___x_1277_);
v___x_1280_ = lean_box(0);
v_isShared_1281_ = v_isSharedCheck_1303_;
goto v_resetjp_1279_;
}
v_resetjp_1279_:
{
lean_object* v___x_1282_; lean_object* v___x_1283_; lean_object* v___x_1284_; uint8_t v___x_1285_; 
v___x_1282_ = ((lean_object*)(l___private_Lean_Widget_Diff_0__Lean_Widget_instEmptyCollectionExprDiff___closed__0));
v___x_1283_ = lean_unsigned_to_nat(0u);
v___x_1284_ = lean_array_get_size(v_a_1278_);
v___x_1285_ = lean_nat_dec_lt(v___x_1283_, v___x_1284_);
if (v___x_1285_ == 0)
{
lean_object* v___x_1287_; 
lean_dec(v_a_1278_);
if (v_isShared_1281_ == 0)
{
lean_ctor_set(v___x_1280_, 0, v___x_1282_);
v___x_1287_ = v___x_1280_;
goto v_reusejp_1286_;
}
else
{
lean_object* v_reuseFailAlloc_1288_; 
v_reuseFailAlloc_1288_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1288_, 0, v___x_1282_);
v___x_1287_ = v_reuseFailAlloc_1288_;
goto v_reusejp_1286_;
}
v_reusejp_1286_:
{
return v___x_1287_;
}
}
else
{
uint8_t v___x_1289_; 
v___x_1289_ = lean_nat_dec_le(v___x_1284_, v___x_1284_);
if (v___x_1289_ == 0)
{
if (v___x_1285_ == 0)
{
lean_object* v___x_1291_; 
lean_dec(v_a_1278_);
if (v_isShared_1281_ == 0)
{
lean_ctor_set(v___x_1280_, 0, v___x_1282_);
v___x_1291_ = v___x_1280_;
goto v_reusejp_1290_;
}
else
{
lean_object* v_reuseFailAlloc_1292_; 
v_reuseFailAlloc_1292_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1292_, 0, v___x_1282_);
v___x_1291_ = v_reuseFailAlloc_1292_;
goto v_reusejp_1290_;
}
v_reusejp_1290_:
{
return v___x_1291_;
}
}
else
{
size_t v___x_1293_; lean_object* v___x_1294_; lean_object* v___x_1296_; 
v___x_1293_ = lean_usize_of_nat(v___x_1284_);
v___x_1294_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_spec__10(v_a_1278_, v___x_1276_, v___x_1293_, v___x_1282_);
lean_dec(v_a_1278_);
if (v_isShared_1281_ == 0)
{
lean_ctor_set(v___x_1280_, 0, v___x_1294_);
v___x_1296_ = v___x_1280_;
goto v_reusejp_1295_;
}
else
{
lean_object* v_reuseFailAlloc_1297_; 
v_reuseFailAlloc_1297_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1297_, 0, v___x_1294_);
v___x_1296_ = v_reuseFailAlloc_1297_;
goto v_reusejp_1295_;
}
v_reusejp_1295_:
{
return v___x_1296_;
}
}
}
else
{
size_t v___x_1298_; lean_object* v___x_1299_; lean_object* v___x_1301_; 
v___x_1298_ = lean_usize_of_nat(v___x_1284_);
v___x_1299_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_spec__10(v_a_1278_, v___x_1276_, v___x_1298_, v___x_1282_);
lean_dec(v_a_1278_);
if (v_isShared_1281_ == 0)
{
lean_ctor_set(v___x_1280_, 0, v___x_1299_);
v___x_1301_ = v___x_1280_;
goto v_reusejp_1300_;
}
else
{
lean_object* v_reuseFailAlloc_1302_; 
v_reuseFailAlloc_1302_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1302_, 0, v___x_1299_);
v___x_1301_ = v_reuseFailAlloc_1302_;
goto v_reusejp_1300_;
}
v_reusejp_1300_:
{
return v___x_1301_;
}
}
}
}
}
else
{
lean_object* v_a_1304_; lean_object* v___x_1306_; uint8_t v_isShared_1307_; uint8_t v_isSharedCheck_1311_; 
v_a_1304_ = lean_ctor_get(v___x_1277_, 0);
v_isSharedCheck_1311_ = !lean_is_exclusive(v___x_1277_);
if (v_isSharedCheck_1311_ == 0)
{
v___x_1306_ = v___x_1277_;
v_isShared_1307_ = v_isSharedCheck_1311_;
goto v_resetjp_1305_;
}
else
{
lean_inc(v_a_1304_);
lean_dec(v___x_1277_);
v___x_1306_ = lean_box(0);
v_isShared_1307_ = v_isSharedCheck_1311_;
goto v_resetjp_1305_;
}
v_resetjp_1305_:
{
lean_object* v___x_1309_; 
if (v_isShared_1307_ == 0)
{
v___x_1309_ = v___x_1306_;
goto v_reusejp_1308_;
}
else
{
lean_object* v_reuseFailAlloc_1310_; 
v_reuseFailAlloc_1310_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1310_, 0, v_a_1304_);
v___x_1309_ = v_reuseFailAlloc_1310_;
goto v_reusejp_1308_;
}
v_reusejp_1308_:
{
return v___x_1309_;
}
}
}
}
else
{
lean_dec(v_snd_1269_);
lean_dec(v_snd_1263_);
goto v___jp_1223_;
}
}
}
else
{
lean_dec(v_snd_1269_);
lean_dec(v_snd_1263_);
goto v___jp_1223_;
}
}
}
default: 
{
goto v___jp_1227_;
}
}
}
case 7:
{
if (lean_obj_tag(v_expr_1233_) == 10)
{
lean_object* v_expr_1312_; 
lean_inc_ref(v_expr_1233_);
lean_inc(v_pos_1234_);
lean_dec_ref(v_after_1209_);
v_expr_1312_ = lean_ctor_get(v_expr_1233_, 1);
lean_inc_ref(v_expr_1312_);
lean_dec_ref_known(v_expr_1233_, 2);
v_e_u2081_1236_ = v_expr_1312_;
v___y_1237_ = v___y_1210_;
v___y_1238_ = v___y_1211_;
v___y_1239_ = v___y_1212_;
v___y_1240_ = v___y_1213_;
goto v___jp_1235_;
}
else
{
lean_object* v___x_1313_; 
v___x_1313_ = l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff(v_before_1208_, v_after_1209_, v___y_1210_, v___y_1211_, v___y_1212_, v___y_1213_);
return v___x_1313_;
}
}
case 6:
{
switch(lean_obj_tag(v_expr_1233_))
{
case 10:
{
lean_object* v_expr_1314_; 
lean_inc_ref(v_expr_1233_);
lean_inc(v_pos_1234_);
lean_dec_ref(v_after_1209_);
v_expr_1314_ = lean_ctor_get(v_expr_1233_, 1);
lean_inc_ref(v_expr_1314_);
lean_dec_ref_known(v_expr_1233_, 2);
v_e_u2081_1236_ = v_expr_1314_;
v___y_1237_ = v___y_1210_;
v___y_1238_ = v___y_1211_;
v___y_1239_ = v___y_1212_;
v___y_1240_ = v___y_1213_;
goto v___jp_1235_;
}
case 6:
{
lean_object* v_binderName_1315_; lean_object* v_binderType_1316_; lean_object* v_body_1317_; uint8_t v_binderInfo_1318_; lean_object* v_binderName_1319_; lean_object* v_binderType_1320_; lean_object* v_body_1321_; uint8_t v_binderInfo_1322_; uint8_t v___x_1323_; 
v_binderName_1315_ = lean_ctor_get(v_expr_1231_, 0);
v_binderType_1316_ = lean_ctor_get(v_expr_1231_, 1);
v_body_1317_ = lean_ctor_get(v_expr_1231_, 2);
v_binderInfo_1318_ = lean_ctor_get_uint8(v_expr_1231_, sizeof(void*)*3 + 8);
v_binderName_1319_ = lean_ctor_get(v_expr_1233_, 0);
v_binderType_1320_ = lean_ctor_get(v_expr_1233_, 1);
v_body_1321_ = lean_ctor_get(v_expr_1233_, 2);
v_binderInfo_1322_ = lean_ctor_get_uint8(v_expr_1233_, sizeof(void*)*3 + 8);
v___x_1323_ = lean_name_eq(v_binderName_1315_, v_binderName_1319_);
if (v___x_1323_ == 0)
{
goto v___jp_1219_;
}
else
{
if (v___x_1243_ == 0)
{
uint8_t v___x_1324_; 
v___x_1324_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_1318_, v_binderInfo_1322_);
if (v___x_1324_ == 0)
{
goto v___jp_1219_;
}
else
{
if (v___x_1243_ == 0)
{
lean_object* v___x_1326_; uint8_t v_isShared_1327_; uint8_t v_isSharedCheck_1374_; 
lean_inc_ref(v_body_1321_);
lean_inc_ref(v_binderType_1320_);
lean_inc_ref(v_body_1317_);
lean_inc_ref(v_binderType_1316_);
lean_inc(v_pos_1234_);
lean_inc(v_pos_1232_);
v_isSharedCheck_1374_ = !lean_is_exclusive(v_before_1208_);
if (v_isSharedCheck_1374_ == 0)
{
lean_object* v_unused_1375_; lean_object* v_unused_1376_; 
v_unused_1375_ = lean_ctor_get(v_before_1208_, 1);
lean_dec(v_unused_1375_);
v_unused_1376_ = lean_ctor_get(v_before_1208_, 0);
lean_dec(v_unused_1376_);
v___x_1326_ = v_before_1208_;
v_isShared_1327_ = v_isSharedCheck_1374_;
goto v_resetjp_1325_;
}
else
{
lean_dec(v_before_1208_);
v___x_1326_ = lean_box(0);
v_isShared_1327_ = v_isSharedCheck_1374_;
goto v_resetjp_1325_;
}
v_resetjp_1325_:
{
lean_object* v___x_1329_; uint8_t v_isShared_1330_; uint8_t v_isSharedCheck_1371_; 
v_isSharedCheck_1371_ = !lean_is_exclusive(v_after_1209_);
if (v_isSharedCheck_1371_ == 0)
{
lean_object* v_unused_1372_; lean_object* v_unused_1373_; 
v_unused_1372_ = lean_ctor_get(v_after_1209_, 1);
lean_dec(v_unused_1372_);
v_unused_1373_ = lean_ctor_get(v_after_1209_, 0);
lean_dec(v_unused_1373_);
v___x_1329_ = v_after_1209_;
v_isShared_1330_ = v_isSharedCheck_1371_;
goto v_resetjp_1328_;
}
else
{
lean_dec(v_after_1209_);
v___x_1329_ = lean_box(0);
v_isShared_1330_ = v_isSharedCheck_1371_;
goto v_resetjp_1328_;
}
v_resetjp_1328_:
{
lean_object* v___x_1331_; lean_object* v___x_1333_; 
v___x_1331_ = l_Lean_SubExpr_Pos_pushBindingDomain(v_pos_1232_);
if (v_isShared_1330_ == 0)
{
lean_ctor_set(v___x_1329_, 1, v___x_1331_);
lean_ctor_set(v___x_1329_, 0, v_binderType_1316_);
v___x_1333_ = v___x_1329_;
goto v_reusejp_1332_;
}
else
{
lean_object* v_reuseFailAlloc_1370_; 
v_reuseFailAlloc_1370_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1370_, 0, v_binderType_1316_);
lean_ctor_set(v_reuseFailAlloc_1370_, 1, v___x_1331_);
v___x_1333_ = v_reuseFailAlloc_1370_;
goto v_reusejp_1332_;
}
v_reusejp_1332_:
{
lean_object* v___x_1334_; lean_object* v___x_1336_; 
v___x_1334_ = l_Lean_SubExpr_Pos_pushBindingDomain(v_pos_1234_);
if (v_isShared_1327_ == 0)
{
lean_ctor_set(v___x_1326_, 1, v___x_1334_);
lean_ctor_set(v___x_1326_, 0, v_binderType_1320_);
v___x_1336_ = v___x_1326_;
goto v_reusejp_1335_;
}
else
{
lean_object* v_reuseFailAlloc_1369_; 
v_reuseFailAlloc_1369_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1369_, 0, v_binderType_1320_);
lean_ctor_set(v_reuseFailAlloc_1369_, 1, v___x_1334_);
v___x_1336_ = v_reuseFailAlloc_1369_;
goto v_reusejp_1335_;
}
v_reusejp_1335_:
{
lean_object* v___x_1337_; 
v___x_1337_ = l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore(v___x_1333_, v___x_1336_, v___y_1210_, v___y_1211_, v___y_1212_, v___y_1213_);
if (lean_obj_tag(v___x_1337_) == 0)
{
lean_object* v_a_1338_; lean_object* v___x_1340_; uint8_t v_isShared_1341_; uint8_t v_isSharedCheck_1368_; 
v_a_1338_ = lean_ctor_get(v___x_1337_, 0);
v_isSharedCheck_1368_ = !lean_is_exclusive(v___x_1337_);
if (v_isSharedCheck_1368_ == 0)
{
v___x_1340_ = v___x_1337_;
v_isShared_1341_ = v_isSharedCheck_1368_;
goto v_resetjp_1339_;
}
else
{
lean_inc(v_a_1338_);
lean_dec(v___x_1337_);
v___x_1340_ = lean_box(0);
v_isShared_1341_ = v_isSharedCheck_1368_;
goto v_resetjp_1339_;
}
v_resetjp_1339_:
{
uint8_t v___x_1342_; 
v___x_1342_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_isEmpty(v_a_1338_);
if (v___x_1342_ == 0)
{
lean_object* v_changesBefore_1343_; lean_object* v_changesAfter_1344_; lean_object* v___x_1345_; lean_object* v___x_1346_; uint8_t v___x_1347_; lean_object* v___x_1348_; lean_object* v_changesBefore_1349_; lean_object* v_changesAfter_1350_; lean_object* v___x_1352_; uint8_t v_isShared_1353_; uint8_t v_isSharedCheck_1362_; 
lean_dec_ref(v_body_1321_);
lean_dec_ref(v_body_1317_);
v_changesBefore_1343_ = lean_ctor_get(v_a_1338_, 0);
lean_inc(v_changesBefore_1343_);
v_changesAfter_1344_ = lean_ctor_get(v_a_1338_, 1);
lean_inc(v_changesAfter_1344_);
lean_dec(v_a_1338_);
v___x_1345_ = l_Lean_SubExpr_Pos_pushBindingBody(v_pos_1232_);
lean_dec(v_pos_1232_);
v___x_1346_ = l_Lean_SubExpr_Pos_pushBindingBody(v_pos_1234_);
lean_dec(v_pos_1234_);
v___x_1347_ = 0;
v___x_1348_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_withChangePos(v___x_1345_, v___x_1346_, v___x_1347_);
v_changesBefore_1349_ = lean_ctor_get(v___x_1348_, 0);
v_changesAfter_1350_ = lean_ctor_get(v___x_1348_, 1);
v_isSharedCheck_1362_ = !lean_is_exclusive(v___x_1348_);
if (v_isSharedCheck_1362_ == 0)
{
v___x_1352_ = v___x_1348_;
v_isShared_1353_ = v_isSharedCheck_1362_;
goto v_resetjp_1351_;
}
else
{
lean_inc(v_changesAfter_1350_);
lean_inc(v_changesBefore_1349_);
lean_dec(v___x_1348_);
v___x_1352_ = lean_box(0);
v_isShared_1353_ = v_isSharedCheck_1362_;
goto v_resetjp_1351_;
}
v_resetjp_1351_:
{
lean_object* v___x_1354_; lean_object* v___x_1355_; lean_object* v___x_1357_; 
v___x_1354_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__5_spec__7(v_changesBefore_1343_, v_changesBefore_1349_);
v___x_1355_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__5_spec__7(v_changesAfter_1344_, v_changesAfter_1350_);
if (v_isShared_1353_ == 0)
{
lean_ctor_set(v___x_1352_, 1, v___x_1355_);
lean_ctor_set(v___x_1352_, 0, v___x_1354_);
v___x_1357_ = v___x_1352_;
goto v_reusejp_1356_;
}
else
{
lean_object* v_reuseFailAlloc_1361_; 
v_reuseFailAlloc_1361_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1361_, 0, v___x_1354_);
lean_ctor_set(v_reuseFailAlloc_1361_, 1, v___x_1355_);
v___x_1357_ = v_reuseFailAlloc_1361_;
goto v_reusejp_1356_;
}
v_reusejp_1356_:
{
lean_object* v___x_1359_; 
if (v_isShared_1341_ == 0)
{
lean_ctor_set(v___x_1340_, 0, v___x_1357_);
v___x_1359_ = v___x_1340_;
goto v_reusejp_1358_;
}
else
{
lean_object* v_reuseFailAlloc_1360_; 
v_reuseFailAlloc_1360_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1360_, 0, v___x_1357_);
v___x_1359_ = v_reuseFailAlloc_1360_;
goto v_reusejp_1358_;
}
v_reusejp_1358_:
{
return v___x_1359_;
}
}
}
}
else
{
lean_object* v___x_1363_; lean_object* v___x_1364_; lean_object* v___x_1365_; lean_object* v___x_1366_; 
lean_del_object(v___x_1340_);
lean_dec(v_a_1338_);
v___x_1363_ = l_Lean_SubExpr_Pos_pushBindingBody(v_pos_1232_);
lean_dec(v_pos_1232_);
v___x_1364_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1364_, 0, v_body_1317_);
lean_ctor_set(v___x_1364_, 1, v___x_1363_);
v___x_1365_ = l_Lean_SubExpr_Pos_pushBindingBody(v_pos_1234_);
lean_dec(v_pos_1234_);
v___x_1366_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1366_, 0, v_body_1321_);
lean_ctor_set(v___x_1366_, 1, v___x_1365_);
v_before_1208_ = v___x_1364_;
v_after_1209_ = v___x_1366_;
goto _start;
}
}
}
else
{
lean_dec_ref(v_body_1321_);
lean_dec_ref(v_body_1317_);
lean_dec(v_pos_1234_);
lean_dec(v_pos_1232_);
return v___x_1337_;
}
}
}
}
}
}
else
{
goto v___jp_1219_;
}
}
}
else
{
goto v___jp_1219_;
}
}
}
default: 
{
goto v___jp_1227_;
}
}
}
case 11:
{
switch(lean_obj_tag(v_expr_1233_))
{
case 10:
{
lean_object* v_expr_1377_; 
lean_inc_ref(v_expr_1233_);
lean_inc(v_pos_1234_);
lean_dec_ref(v_after_1209_);
v_expr_1377_ = lean_ctor_get(v_expr_1233_, 1);
lean_inc_ref(v_expr_1377_);
lean_dec_ref_known(v_expr_1233_, 2);
v_e_u2081_1236_ = v_expr_1377_;
v___y_1237_ = v___y_1210_;
v___y_1238_ = v___y_1211_;
v___y_1239_ = v___y_1212_;
v___y_1240_ = v___y_1213_;
goto v___jp_1235_;
}
case 11:
{
lean_object* v_typeName_1378_; lean_object* v_idx_1379_; lean_object* v_struct_1380_; lean_object* v_typeName_1381_; lean_object* v_idx_1382_; lean_object* v_struct_1383_; uint8_t v___x_1384_; 
v_typeName_1378_ = lean_ctor_get(v_expr_1231_, 0);
v_idx_1379_ = lean_ctor_get(v_expr_1231_, 1);
v_struct_1380_ = lean_ctor_get(v_expr_1231_, 2);
v_typeName_1381_ = lean_ctor_get(v_expr_1233_, 0);
v_idx_1382_ = lean_ctor_get(v_expr_1233_, 1);
v_struct_1383_ = lean_ctor_get(v_expr_1233_, 2);
v___x_1384_ = lean_name_eq(v_typeName_1378_, v_typeName_1381_);
if (v___x_1384_ == 0)
{
goto v___jp_1215_;
}
else
{
if (v___x_1243_ == 0)
{
uint8_t v___x_1385_; 
v___x_1385_ = lean_nat_dec_eq(v_idx_1379_, v_idx_1382_);
if (v___x_1385_ == 0)
{
goto v___jp_1215_;
}
else
{
if (v___x_1243_ == 0)
{
lean_object* v___x_1387_; uint8_t v_isShared_1388_; uint8_t v_isSharedCheck_1404_; 
lean_inc_ref(v_struct_1383_);
lean_inc_ref(v_struct_1380_);
lean_inc(v_pos_1234_);
lean_inc(v_pos_1232_);
v_isSharedCheck_1404_ = !lean_is_exclusive(v_before_1208_);
if (v_isSharedCheck_1404_ == 0)
{
lean_object* v_unused_1405_; lean_object* v_unused_1406_; 
v_unused_1405_ = lean_ctor_get(v_before_1208_, 1);
lean_dec(v_unused_1405_);
v_unused_1406_ = lean_ctor_get(v_before_1208_, 0);
lean_dec(v_unused_1406_);
v___x_1387_ = v_before_1208_;
v_isShared_1388_ = v_isSharedCheck_1404_;
goto v_resetjp_1386_;
}
else
{
lean_dec(v_before_1208_);
v___x_1387_ = lean_box(0);
v_isShared_1388_ = v_isSharedCheck_1404_;
goto v_resetjp_1386_;
}
v_resetjp_1386_:
{
lean_object* v___x_1390_; uint8_t v_isShared_1391_; uint8_t v_isSharedCheck_1401_; 
v_isSharedCheck_1401_ = !lean_is_exclusive(v_after_1209_);
if (v_isSharedCheck_1401_ == 0)
{
lean_object* v_unused_1402_; lean_object* v_unused_1403_; 
v_unused_1402_ = lean_ctor_get(v_after_1209_, 1);
lean_dec(v_unused_1402_);
v_unused_1403_ = lean_ctor_get(v_after_1209_, 0);
lean_dec(v_unused_1403_);
v___x_1390_ = v_after_1209_;
v_isShared_1391_ = v_isSharedCheck_1401_;
goto v_resetjp_1389_;
}
else
{
lean_dec(v_after_1209_);
v___x_1390_ = lean_box(0);
v_isShared_1391_ = v_isSharedCheck_1401_;
goto v_resetjp_1389_;
}
v_resetjp_1389_:
{
lean_object* v___x_1392_; lean_object* v___x_1394_; 
v___x_1392_ = l_Lean_SubExpr_Pos_pushProj(v_pos_1232_);
lean_dec(v_pos_1232_);
if (v_isShared_1391_ == 0)
{
lean_ctor_set(v___x_1390_, 1, v___x_1392_);
lean_ctor_set(v___x_1390_, 0, v_struct_1380_);
v___x_1394_ = v___x_1390_;
goto v_reusejp_1393_;
}
else
{
lean_object* v_reuseFailAlloc_1400_; 
v_reuseFailAlloc_1400_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1400_, 0, v_struct_1380_);
lean_ctor_set(v_reuseFailAlloc_1400_, 1, v___x_1392_);
v___x_1394_ = v_reuseFailAlloc_1400_;
goto v_reusejp_1393_;
}
v_reusejp_1393_:
{
lean_object* v___x_1395_; lean_object* v___x_1397_; 
v___x_1395_ = l_Lean_SubExpr_Pos_pushProj(v_pos_1234_);
lean_dec(v_pos_1234_);
if (v_isShared_1388_ == 0)
{
lean_ctor_set(v___x_1387_, 1, v___x_1395_);
lean_ctor_set(v___x_1387_, 0, v_struct_1383_);
v___x_1397_ = v___x_1387_;
goto v_reusejp_1396_;
}
else
{
lean_object* v_reuseFailAlloc_1399_; 
v_reuseFailAlloc_1399_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1399_, 0, v_struct_1383_);
lean_ctor_set(v_reuseFailAlloc_1399_, 1, v___x_1395_);
v___x_1397_ = v_reuseFailAlloc_1399_;
goto v_reusejp_1396_;
}
v_reusejp_1396_:
{
v_before_1208_ = v___x_1394_;
v_after_1209_ = v___x_1397_;
goto _start;
}
}
}
}
}
else
{
goto v___jp_1215_;
}
}
}
else
{
goto v___jp_1215_;
}
}
}
default: 
{
goto v___jp_1227_;
}
}
}
default: 
{
if (lean_obj_tag(v_expr_1233_) == 10)
{
lean_object* v_expr_1407_; 
lean_inc_ref(v_expr_1233_);
lean_inc(v_pos_1234_);
lean_dec_ref(v_after_1209_);
v_expr_1407_ = lean_ctor_get(v_expr_1233_, 1);
lean_inc_ref(v_expr_1407_);
lean_dec_ref_known(v_expr_1233_, 2);
v_e_u2081_1236_ = v_expr_1407_;
v___y_1237_ = v___y_1210_;
v___y_1238_ = v___y_1211_;
v___y_1239_ = v___y_1212_;
v___y_1240_ = v___y_1213_;
goto v___jp_1235_;
}
else
{
goto v___jp_1227_;
}
}
}
}
else
{
lean_object* v___x_1408_; lean_object* v___x_1409_; 
lean_dec_ref(v_after_1209_);
lean_dec_ref(v_before_1208_);
v___x_1408_ = ((lean_object*)(l___private_Lean_Widget_Diff_0__Lean_Widget_instEmptyCollectionExprDiff___closed__0));
v___x_1409_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1409_, 0, v___x_1408_);
return v___x_1409_;
}
v___jp_1215_:
{
uint8_t v___x_1216_; lean_object* v___x_1217_; lean_object* v___x_1218_; 
v___x_1216_ = 0;
v___x_1217_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_withChange(v_before_1208_, v_after_1209_, v___x_1216_);
v___x_1218_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1218_, 0, v___x_1217_);
return v___x_1218_;
}
v___jp_1219_:
{
uint8_t v___x_1220_; lean_object* v___x_1221_; lean_object* v___x_1222_; 
v___x_1220_ = 0;
v___x_1221_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_withChange(v_before_1208_, v_after_1209_, v___x_1220_);
v___x_1222_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1222_, 0, v___x_1221_);
return v___x_1222_;
}
v___jp_1223_:
{
uint8_t v___x_1224_; lean_object* v___x_1225_; lean_object* v___x_1226_; 
v___x_1224_ = 0;
v___x_1225_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_withChange(v_before_1208_, v_after_1209_, v___x_1224_);
v___x_1226_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1226_, 0, v___x_1225_);
return v___x_1226_;
}
v___jp_1227_:
{
uint8_t v___x_1228_; lean_object* v___x_1229_; lean_object* v___x_1230_; 
v___x_1228_ = 0;
v___x_1229_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_withChange(v_before_1208_, v_after_1209_, v___x_1228_);
v___x_1230_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1230_, 0, v___x_1229_);
return v___x_1230_;
}
v___jp_1235_:
{
lean_object* v___x_1241_; 
v___x_1241_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1241_, 0, v_e_u2081_1236_);
lean_ctor_set(v___x_1241_, 1, v_pos_1234_);
v_after_1209_ = v___x_1241_;
v___y_1210_ = v___y_1237_;
v___y_1211_ = v___y_1238_;
v___y_1212_ = v___y_1239_;
v___y_1213_ = v___y_1240_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff___lam__0(lean_object* v_body_1410_, lean_object* v_pos_1411_, lean_object* v_body_1412_, lean_object* v_pos_1413_, lean_object* v_x_1414_, lean_object* v___y_1415_, lean_object* v___y_1416_, lean_object* v___y_1417_, lean_object* v___y_1418_){
_start:
{
lean_object* v___x_1420_; lean_object* v___x_1421_; lean_object* v___x_1422_; lean_object* v___x_1423_; lean_object* v___x_1424_; lean_object* v___x_1425_; lean_object* v___x_1426_; 
v___x_1420_ = lean_expr_instantiate1(v_body_1410_, v_x_1414_);
v___x_1421_ = l_Lean_SubExpr_Pos_pushBindingBody(v_pos_1411_);
v___x_1422_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1422_, 0, v___x_1420_);
lean_ctor_set(v___x_1422_, 1, v___x_1421_);
v___x_1423_ = lean_expr_instantiate1(v_body_1412_, v_x_1414_);
v___x_1424_ = l_Lean_SubExpr_Pos_pushBindingBody(v_pos_1413_);
v___x_1425_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1425_, 0, v___x_1423_);
lean_ctor_set(v___x_1425_, 1, v___x_1424_);
v___x_1426_ = l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore(v___x_1422_, v___x_1425_, v___y_1415_, v___y_1416_, v___y_1417_, v___y_1418_);
return v___x_1426_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_spec__9___redArg___boxed(lean_object* v_snd_1427_, lean_object* v_before_1428_, lean_object* v_after_1429_, lean_object* v_sz_1430_, lean_object* v_i_1431_, lean_object* v_bs_1432_, lean_object* v___y_1433_, lean_object* v___y_1434_, lean_object* v___y_1435_, lean_object* v___y_1436_, lean_object* v___y_1437_){
_start:
{
size_t v_sz_boxed_1438_; size_t v_i_boxed_1439_; lean_object* v_res_1440_; 
v_sz_boxed_1438_ = lean_unbox_usize(v_sz_1430_);
lean_dec(v_sz_1430_);
v_i_boxed_1439_ = lean_unbox_usize(v_i_1431_);
lean_dec(v_i_1431_);
v_res_1440_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_spec__9___redArg(v_snd_1427_, v_before_1428_, v_after_1429_, v_sz_boxed_1438_, v_i_boxed_1439_, v_bs_1432_, v___y_1433_, v___y_1434_, v___y_1435_, v___y_1436_);
lean_dec(v___y_1436_);
lean_dec_ref(v___y_1435_);
lean_dec(v___y_1434_);
lean_dec_ref(v___y_1433_);
lean_dec_ref(v_after_1429_);
lean_dec_ref(v_before_1428_);
lean_dec_ref(v_snd_1427_);
return v_res_1440_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff___boxed(lean_object* v_before_1441_, lean_object* v_after_1442_, lean_object* v___y_1443_, lean_object* v___y_1444_, lean_object* v___y_1445_, lean_object* v___y_1446_, lean_object* v___y_1447_){
_start:
{
lean_object* v_res_1448_; 
v_res_1448_ = l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff(v_before_1441_, v_after_1442_, v___y_1443_, v___y_1444_, v___y_1445_, v___y_1446_);
lean_dec(v___y_1446_);
lean_dec_ref(v___y_1445_);
lean_dec(v___y_1444_);
lean_dec_ref(v___y_1443_);
return v_res_1448_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore___boxed(lean_object* v_before_1449_, lean_object* v_after_1450_, lean_object* v___y_1451_, lean_object* v___y_1452_, lean_object* v___y_1453_, lean_object* v___y_1454_, lean_object* v___y_1455_){
_start:
{
lean_object* v_res_1456_; 
v_res_1456_ = l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore(v_before_1449_, v_after_1450_, v___y_1451_, v___y_1452_, v___y_1453_, v___y_1454_);
lean_dec(v___y_1454_);
lean_dec_ref(v___y_1453_);
lean_dec(v___y_1452_);
lean_dec_ref(v___y_1451_);
return v_res_1456_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__1(lean_object* v_upperBound_1457_, lean_object* v_before_1458_, lean_object* v_inst_1459_, lean_object* v_R_1460_, lean_object* v_a_1461_, lean_object* v_b_1462_, lean_object* v_c_1463_, lean_object* v___y_1464_, lean_object* v___y_1465_, lean_object* v___y_1466_, lean_object* v___y_1467_){
_start:
{
lean_object* v___x_1469_; 
v___x_1469_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__1___redArg(v_upperBound_1457_, v_before_1458_, v_a_1461_, v_b_1462_);
return v___x_1469_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__1___boxed(lean_object* v_upperBound_1470_, lean_object* v_before_1471_, lean_object* v_inst_1472_, lean_object* v_R_1473_, lean_object* v_a_1474_, lean_object* v_b_1475_, lean_object* v_c_1476_, lean_object* v___y_1477_, lean_object* v___y_1478_, lean_object* v___y_1479_, lean_object* v___y_1480_, lean_object* v___y_1481_){
_start:
{
lean_object* v_res_1482_; 
v_res_1482_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__1(v_upperBound_1470_, v_before_1471_, v_inst_1472_, v_R_1473_, v_a_1474_, v_b_1475_, v_c_1476_, v___y_1477_, v___y_1478_, v___y_1479_, v___y_1480_);
lean_dec(v___y_1480_);
lean_dec_ref(v___y_1479_);
lean_dec(v___y_1478_);
lean_dec_ref(v___y_1477_);
lean_dec(v_upperBound_1470_);
return v_res_1482_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__3(lean_object* v_00_u03b1_1483_, lean_object* v_msg_1484_, lean_object* v___y_1485_, lean_object* v___y_1486_, lean_object* v___y_1487_, lean_object* v___y_1488_){
_start:
{
lean_object* v___x_1490_; 
v___x_1490_ = l_Lean_throwError___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__3___redArg(v_msg_1484_, v___y_1485_, v___y_1486_, v___y_1487_, v___y_1488_);
return v___x_1490_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__3___boxed(lean_object* v_00_u03b1_1491_, lean_object* v_msg_1492_, lean_object* v___y_1493_, lean_object* v___y_1494_, lean_object* v___y_1495_, lean_object* v___y_1496_, lean_object* v___y_1497_){
_start:
{
lean_object* v_res_1498_; 
v_res_1498_ = l_Lean_throwError___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__3(v_00_u03b1_1491_, v_msg_1492_, v___y_1493_, v___y_1494_, v___y_1495_, v___y_1496_);
lean_dec(v___y_1496_);
lean_dec_ref(v___y_1495_);
lean_dec(v___y_1494_);
lean_dec_ref(v___y_1493_);
return v_res_1498_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__4(uint8_t v_b_u2082_1499_, lean_object* v_k_1500_, lean_object* v_t_1501_, lean_object* v_hl_1502_){
_start:
{
lean_object* v___x_1503_; 
v___x_1503_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__4___redArg(v_b_u2082_1499_, v_k_1500_, v_t_1501_);
return v___x_1503_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__4___boxed(lean_object* v_b_u2082_1504_, lean_object* v_k_1505_, lean_object* v_t_1506_, lean_object* v_hl_1507_){
_start:
{
uint8_t v_b_u2082_boxed_1508_; lean_object* v_res_1509_; 
v_b_u2082_boxed_1508_ = lean_unbox(v_b_u2082_1504_);
v_res_1509_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__4(v_b_u2082_boxed_1508_, v_k_1505_, v_t_1506_, v_hl_1507_);
return v_res_1509_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__5(lean_object* v_init_1510_, lean_object* v_t_1511_){
_start:
{
lean_object* v___x_1512_; 
v___x_1512_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__5_spec__7(v_init_1510_, v_t_1511_);
return v___x_1512_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_spec__9(lean_object* v_snd_1513_, lean_object* v_before_1514_, lean_object* v_after_1515_, lean_object* v_as_1516_, size_t v_sz_1517_, size_t v_i_1518_, lean_object* v_bs_1519_, lean_object* v___y_1520_, lean_object* v___y_1521_, lean_object* v___y_1522_, lean_object* v___y_1523_){
_start:
{
lean_object* v___x_1525_; 
v___x_1525_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_spec__9___redArg(v_snd_1513_, v_before_1514_, v_after_1515_, v_sz_1517_, v_i_1518_, v_bs_1519_, v___y_1520_, v___y_1521_, v___y_1522_, v___y_1523_);
return v___x_1525_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_spec__9___boxed(lean_object* v_snd_1526_, lean_object* v_before_1527_, lean_object* v_after_1528_, lean_object* v_as_1529_, lean_object* v_sz_1530_, lean_object* v_i_1531_, lean_object* v_bs_1532_, lean_object* v___y_1533_, lean_object* v___y_1534_, lean_object* v___y_1535_, lean_object* v___y_1536_, lean_object* v___y_1537_){
_start:
{
size_t v_sz_boxed_1538_; size_t v_i_boxed_1539_; lean_object* v_res_1540_; 
v_sz_boxed_1538_ = lean_unbox_usize(v_sz_1530_);
lean_dec(v_sz_1530_);
v_i_boxed_1539_ = lean_unbox_usize(v_i_1531_);
lean_dec(v_i_1531_);
v_res_1540_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_spec__9(v_snd_1526_, v_before_1527_, v_after_1528_, v_as_1529_, v_sz_boxed_1538_, v_i_boxed_1539_, v_bs_1532_, v___y_1533_, v___y_1534_, v___y_1535_, v___y_1536_);
lean_dec(v___y_1536_);
lean_dec_ref(v___y_1535_);
lean_dec(v___y_1534_);
lean_dec_ref(v___y_1533_);
lean_dec_ref(v_as_1529_);
lean_dec_ref(v_after_1528_);
lean_dec_ref(v_before_1527_);
lean_dec_ref(v_snd_1526_);
return v_res_1540_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiff(lean_object* v_e_u2080_1541_, lean_object* v_e_u2081_1542_, uint8_t v_useAfter_1543_, lean_object* v___y_1544_, lean_object* v___y_1545_, lean_object* v___y_1546_, lean_object* v___y_1547_){
_start:
{
lean_object* v___x_1549_; lean_object* v_s_u2080_1550_; lean_object* v_s_u2081_1551_; 
v___x_1549_ = l_Lean_SubExpr_Pos_root;
v_s_u2080_1550_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_s_u2080_1550_, 0, v_e_u2080_1541_);
lean_ctor_set(v_s_u2080_1550_, 1, v___x_1549_);
v_s_u2081_1551_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_s_u2081_1551_, 0, v_e_u2081_1542_);
lean_ctor_set(v_s_u2081_1551_, 1, v___x_1549_);
if (v_useAfter_1543_ == 0)
{
lean_object* v___x_1552_; 
v___x_1552_ = l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore(v_s_u2081_1551_, v_s_u2080_1550_, v___y_1544_, v___y_1545_, v___y_1546_, v___y_1547_);
return v___x_1552_;
}
else
{
lean_object* v___x_1553_; 
v___x_1553_ = l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore(v_s_u2080_1550_, v_s_u2081_1551_, v___y_1544_, v___y_1545_, v___y_1546_, v___y_1547_);
return v___x_1553_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiff___boxed(lean_object* v_e_u2080_1554_, lean_object* v_e_u2081_1555_, lean_object* v_useAfter_1556_, lean_object* v___y_1557_, lean_object* v___y_1558_, lean_object* v___y_1559_, lean_object* v___y_1560_, lean_object* v___y_1561_){
_start:
{
uint8_t v_useAfter_boxed_1562_; lean_object* v_res_1563_; 
v_useAfter_boxed_1562_ = lean_unbox(v_useAfter_1556_);
v_res_1563_ = l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiff(v_e_u2080_1554_, v_e_u2081_1555_, v_useAfter_boxed_1562_, v___y_1557_, v___y_1558_, v___y_1559_, v___y_1560_);
lean_dec(v___y_1560_);
lean_dec_ref(v___y_1559_);
lean_dec(v___y_1558_);
lean_dec_ref(v___y_1557_);
return v_res_1563_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags___lam__0(uint8_t v_useAfter_1564_, lean_object* v_info_1565_, uint8_t v_d_1566_, lean_object* v___y_1567_, lean_object* v___y_1568_, lean_object* v___y_1569_, lean_object* v___y_1570_){
_start:
{
uint8_t v___x_1572_; lean_object* v___x_1573_; lean_object* v___x_1574_; 
v___x_1572_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_toDiffTag(v_useAfter_1564_, v_d_1566_);
v___x_1573_ = l_Lean_Widget_SubexprInfo_withDiffTag(v___x_1572_, v_info_1565_);
v___x_1574_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1574_, 0, v___x_1573_);
return v___x_1574_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags___lam__0___boxed(lean_object* v_useAfter_1575_, lean_object* v_info_1576_, lean_object* v_d_1577_, lean_object* v___y_1578_, lean_object* v___y_1579_, lean_object* v___y_1580_, lean_object* v___y_1581_, lean_object* v___y_1582_){
_start:
{
uint8_t v_useAfter_boxed_1583_; uint8_t v_d_boxed_1584_; lean_object* v_res_1585_; 
v_useAfter_boxed_1583_ = lean_unbox(v_useAfter_1575_);
v_d_boxed_1584_ = lean_unbox(v_d_1577_);
v_res_1585_ = l___private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags___lam__0(v_useAfter_boxed_1583_, v_info_1576_, v_d_boxed_1584_, v___y_1578_, v___y_1579_, v___y_1580_, v___y_1581_);
lean_dec(v___y_1581_);
lean_dec_ref(v___y_1580_);
lean_dec(v___y_1579_);
lean_dec_ref(v___y_1578_);
return v_res_1585_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_mapM___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__1___redArg(lean_object* v_f_1586_, lean_object* v_x_1587_, lean_object* v___y_1588_, lean_object* v___y_1589_, lean_object* v___y_1590_, lean_object* v___y_1591_){
_start:
{
switch(lean_obj_tag(v_x_1587_))
{
case 0:
{
lean_object* v_a_1593_; lean_object* v___x_1595_; uint8_t v_isShared_1596_; uint8_t v_isSharedCheck_1601_; 
lean_dec_ref(v_f_1586_);
v_a_1593_ = lean_ctor_get(v_x_1587_, 0);
v_isSharedCheck_1601_ = !lean_is_exclusive(v_x_1587_);
if (v_isSharedCheck_1601_ == 0)
{
v___x_1595_ = v_x_1587_;
v_isShared_1596_ = v_isSharedCheck_1601_;
goto v_resetjp_1594_;
}
else
{
lean_inc(v_a_1593_);
lean_dec(v_x_1587_);
v___x_1595_ = lean_box(0);
v_isShared_1596_ = v_isSharedCheck_1601_;
goto v_resetjp_1594_;
}
v_resetjp_1594_:
{
lean_object* v___x_1598_; 
if (v_isShared_1596_ == 0)
{
v___x_1598_ = v___x_1595_;
goto v_reusejp_1597_;
}
else
{
lean_object* v_reuseFailAlloc_1600_; 
v_reuseFailAlloc_1600_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1600_, 0, v_a_1593_);
v___x_1598_ = v_reuseFailAlloc_1600_;
goto v_reusejp_1597_;
}
v_reusejp_1597_:
{
lean_object* v___x_1599_; 
v___x_1599_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1599_, 0, v___x_1598_);
return v___x_1599_;
}
}
}
case 1:
{
lean_object* v_a_1602_; lean_object* v___x_1604_; uint8_t v_isShared_1605_; uint8_t v_isSharedCheck_1628_; 
v_a_1602_ = lean_ctor_get(v_x_1587_, 0);
v_isSharedCheck_1628_ = !lean_is_exclusive(v_x_1587_);
if (v_isSharedCheck_1628_ == 0)
{
v___x_1604_ = v_x_1587_;
v_isShared_1605_ = v_isSharedCheck_1628_;
goto v_resetjp_1603_;
}
else
{
lean_inc(v_a_1602_);
lean_dec(v_x_1587_);
v___x_1604_ = lean_box(0);
v_isShared_1605_ = v_isSharedCheck_1628_;
goto v_resetjp_1603_;
}
v_resetjp_1603_:
{
size_t v_sz_1606_; size_t v___x_1607_; lean_object* v___x_1608_; 
v_sz_1606_ = lean_array_size(v_a_1602_);
v___x_1607_ = ((size_t)0ULL);
v___x_1608_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_mapM___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__1_spec__2___redArg(v_f_1586_, v_sz_1606_, v___x_1607_, v_a_1602_, v___y_1588_, v___y_1589_, v___y_1590_, v___y_1591_);
if (lean_obj_tag(v___x_1608_) == 0)
{
lean_object* v_a_1609_; lean_object* v___x_1611_; uint8_t v_isShared_1612_; uint8_t v_isSharedCheck_1619_; 
v_a_1609_ = lean_ctor_get(v___x_1608_, 0);
v_isSharedCheck_1619_ = !lean_is_exclusive(v___x_1608_);
if (v_isSharedCheck_1619_ == 0)
{
v___x_1611_ = v___x_1608_;
v_isShared_1612_ = v_isSharedCheck_1619_;
goto v_resetjp_1610_;
}
else
{
lean_inc(v_a_1609_);
lean_dec(v___x_1608_);
v___x_1611_ = lean_box(0);
v_isShared_1612_ = v_isSharedCheck_1619_;
goto v_resetjp_1610_;
}
v_resetjp_1610_:
{
lean_object* v___x_1614_; 
if (v_isShared_1605_ == 0)
{
lean_ctor_set(v___x_1604_, 0, v_a_1609_);
v___x_1614_ = v___x_1604_;
goto v_reusejp_1613_;
}
else
{
lean_object* v_reuseFailAlloc_1618_; 
v_reuseFailAlloc_1618_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1618_, 0, v_a_1609_);
v___x_1614_ = v_reuseFailAlloc_1618_;
goto v_reusejp_1613_;
}
v_reusejp_1613_:
{
lean_object* v___x_1616_; 
if (v_isShared_1612_ == 0)
{
lean_ctor_set(v___x_1611_, 0, v___x_1614_);
v___x_1616_ = v___x_1611_;
goto v_reusejp_1615_;
}
else
{
lean_object* v_reuseFailAlloc_1617_; 
v_reuseFailAlloc_1617_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1617_, 0, v___x_1614_);
v___x_1616_ = v_reuseFailAlloc_1617_;
goto v_reusejp_1615_;
}
v_reusejp_1615_:
{
return v___x_1616_;
}
}
}
}
else
{
lean_object* v_a_1620_; lean_object* v___x_1622_; uint8_t v_isShared_1623_; uint8_t v_isSharedCheck_1627_; 
lean_del_object(v___x_1604_);
v_a_1620_ = lean_ctor_get(v___x_1608_, 0);
v_isSharedCheck_1627_ = !lean_is_exclusive(v___x_1608_);
if (v_isSharedCheck_1627_ == 0)
{
v___x_1622_ = v___x_1608_;
v_isShared_1623_ = v_isSharedCheck_1627_;
goto v_resetjp_1621_;
}
else
{
lean_inc(v_a_1620_);
lean_dec(v___x_1608_);
v___x_1622_ = lean_box(0);
v_isShared_1623_ = v_isSharedCheck_1627_;
goto v_resetjp_1621_;
}
v_resetjp_1621_:
{
lean_object* v___x_1625_; 
if (v_isShared_1623_ == 0)
{
v___x_1625_ = v___x_1622_;
goto v_reusejp_1624_;
}
else
{
lean_object* v_reuseFailAlloc_1626_; 
v_reuseFailAlloc_1626_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1626_, 0, v_a_1620_);
v___x_1625_ = v_reuseFailAlloc_1626_;
goto v_reusejp_1624_;
}
v_reusejp_1624_:
{
return v___x_1625_;
}
}
}
}
}
default: 
{
lean_object* v_a_1629_; lean_object* v_a_1630_; lean_object* v___x_1632_; uint8_t v_isShared_1633_; uint8_t v_isSharedCheck_1656_; 
v_a_1629_ = lean_ctor_get(v_x_1587_, 0);
v_a_1630_ = lean_ctor_get(v_x_1587_, 1);
v_isSharedCheck_1656_ = !lean_is_exclusive(v_x_1587_);
if (v_isSharedCheck_1656_ == 0)
{
v___x_1632_ = v_x_1587_;
v_isShared_1633_ = v_isSharedCheck_1656_;
goto v_resetjp_1631_;
}
else
{
lean_inc(v_a_1630_);
lean_inc(v_a_1629_);
lean_dec(v_x_1587_);
v___x_1632_ = lean_box(0);
v_isShared_1633_ = v_isSharedCheck_1656_;
goto v_resetjp_1631_;
}
v_resetjp_1631_:
{
lean_object* v___x_1634_; 
lean_inc_ref(v_f_1586_);
lean_inc(v___y_1591_);
lean_inc_ref(v___y_1590_);
lean_inc(v___y_1589_);
lean_inc_ref(v___y_1588_);
v___x_1634_ = lean_apply_6(v_f_1586_, v_a_1629_, v___y_1588_, v___y_1589_, v___y_1590_, v___y_1591_, lean_box(0));
if (lean_obj_tag(v___x_1634_) == 0)
{
lean_object* v_a_1635_; lean_object* v___x_1636_; 
v_a_1635_ = lean_ctor_get(v___x_1634_, 0);
lean_inc(v_a_1635_);
lean_dec_ref_known(v___x_1634_, 1);
v___x_1636_ = l_Lean_Widget_TaggedText_mapM___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__1___redArg(v_f_1586_, v_a_1630_, v___y_1588_, v___y_1589_, v___y_1590_, v___y_1591_);
if (lean_obj_tag(v___x_1636_) == 0)
{
lean_object* v_a_1637_; lean_object* v___x_1639_; uint8_t v_isShared_1640_; uint8_t v_isSharedCheck_1647_; 
v_a_1637_ = lean_ctor_get(v___x_1636_, 0);
v_isSharedCheck_1647_ = !lean_is_exclusive(v___x_1636_);
if (v_isSharedCheck_1647_ == 0)
{
v___x_1639_ = v___x_1636_;
v_isShared_1640_ = v_isSharedCheck_1647_;
goto v_resetjp_1638_;
}
else
{
lean_inc(v_a_1637_);
lean_dec(v___x_1636_);
v___x_1639_ = lean_box(0);
v_isShared_1640_ = v_isSharedCheck_1647_;
goto v_resetjp_1638_;
}
v_resetjp_1638_:
{
lean_object* v___x_1642_; 
if (v_isShared_1633_ == 0)
{
lean_ctor_set(v___x_1632_, 1, v_a_1637_);
lean_ctor_set(v___x_1632_, 0, v_a_1635_);
v___x_1642_ = v___x_1632_;
goto v_reusejp_1641_;
}
else
{
lean_object* v_reuseFailAlloc_1646_; 
v_reuseFailAlloc_1646_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1646_, 0, v_a_1635_);
lean_ctor_set(v_reuseFailAlloc_1646_, 1, v_a_1637_);
v___x_1642_ = v_reuseFailAlloc_1646_;
goto v_reusejp_1641_;
}
v_reusejp_1641_:
{
lean_object* v___x_1644_; 
if (v_isShared_1640_ == 0)
{
lean_ctor_set(v___x_1639_, 0, v___x_1642_);
v___x_1644_ = v___x_1639_;
goto v_reusejp_1643_;
}
else
{
lean_object* v_reuseFailAlloc_1645_; 
v_reuseFailAlloc_1645_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1645_, 0, v___x_1642_);
v___x_1644_ = v_reuseFailAlloc_1645_;
goto v_reusejp_1643_;
}
v_reusejp_1643_:
{
return v___x_1644_;
}
}
}
}
else
{
lean_dec(v_a_1635_);
lean_del_object(v___x_1632_);
return v___x_1636_;
}
}
else
{
lean_object* v_a_1648_; lean_object* v___x_1650_; uint8_t v_isShared_1651_; uint8_t v_isSharedCheck_1655_; 
lean_del_object(v___x_1632_);
lean_dec_ref(v_a_1630_);
lean_dec_ref(v_f_1586_);
v_a_1648_ = lean_ctor_get(v___x_1634_, 0);
v_isSharedCheck_1655_ = !lean_is_exclusive(v___x_1634_);
if (v_isSharedCheck_1655_ == 0)
{
v___x_1650_ = v___x_1634_;
v_isShared_1651_ = v_isSharedCheck_1655_;
goto v_resetjp_1649_;
}
else
{
lean_inc(v_a_1648_);
lean_dec(v___x_1634_);
v___x_1650_ = lean_box(0);
v_isShared_1651_ = v_isSharedCheck_1655_;
goto v_resetjp_1649_;
}
v_resetjp_1649_:
{
lean_object* v___x_1653_; 
if (v_isShared_1651_ == 0)
{
v___x_1653_ = v___x_1650_;
goto v_reusejp_1652_;
}
else
{
lean_object* v_reuseFailAlloc_1654_; 
v_reuseFailAlloc_1654_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1654_, 0, v_a_1648_);
v___x_1653_ = v_reuseFailAlloc_1654_;
goto v_reusejp_1652_;
}
v_reusejp_1652_:
{
return v___x_1653_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_mapM___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__1_spec__2___redArg(lean_object* v_f_1657_, size_t v_sz_1658_, size_t v_i_1659_, lean_object* v_bs_1660_, lean_object* v___y_1661_, lean_object* v___y_1662_, lean_object* v___y_1663_, lean_object* v___y_1664_){
_start:
{
uint8_t v___x_1666_; 
v___x_1666_ = lean_usize_dec_lt(v_i_1659_, v_sz_1658_);
if (v___x_1666_ == 0)
{
lean_object* v___x_1667_; 
lean_dec_ref(v_f_1657_);
v___x_1667_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1667_, 0, v_bs_1660_);
return v___x_1667_;
}
else
{
lean_object* v_v_1668_; lean_object* v___x_1669_; lean_object* v_bs_x27_1670_; lean_object* v___x_1671_; 
v_v_1668_ = lean_array_uget(v_bs_1660_, v_i_1659_);
v___x_1669_ = lean_unsigned_to_nat(0u);
v_bs_x27_1670_ = lean_array_uset(v_bs_1660_, v_i_1659_, v___x_1669_);
lean_inc_ref(v_f_1657_);
v___x_1671_ = l_Lean_Widget_TaggedText_mapM___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__1___redArg(v_f_1657_, v_v_1668_, v___y_1661_, v___y_1662_, v___y_1663_, v___y_1664_);
if (lean_obj_tag(v___x_1671_) == 0)
{
lean_object* v_a_1672_; size_t v___x_1673_; size_t v___x_1674_; lean_object* v___x_1675_; 
v_a_1672_ = lean_ctor_get(v___x_1671_, 0);
lean_inc(v_a_1672_);
lean_dec_ref_known(v___x_1671_, 1);
v___x_1673_ = ((size_t)1ULL);
v___x_1674_ = lean_usize_add(v_i_1659_, v___x_1673_);
v___x_1675_ = lean_array_uset(v_bs_x27_1670_, v_i_1659_, v_a_1672_);
v_i_1659_ = v___x_1674_;
v_bs_1660_ = v___x_1675_;
goto _start;
}
else
{
lean_object* v_a_1677_; lean_object* v___x_1679_; uint8_t v_isShared_1680_; uint8_t v_isSharedCheck_1684_; 
lean_dec_ref(v_bs_x27_1670_);
lean_dec_ref(v_f_1657_);
v_a_1677_ = lean_ctor_get(v___x_1671_, 0);
v_isSharedCheck_1684_ = !lean_is_exclusive(v___x_1671_);
if (v_isSharedCheck_1684_ == 0)
{
v___x_1679_ = v___x_1671_;
v_isShared_1680_ = v_isSharedCheck_1684_;
goto v_resetjp_1678_;
}
else
{
lean_inc(v_a_1677_);
lean_dec(v___x_1671_);
v___x_1679_ = lean_box(0);
v_isShared_1680_ = v_isSharedCheck_1684_;
goto v_resetjp_1678_;
}
v_resetjp_1678_:
{
lean_object* v___x_1682_; 
if (v_isShared_1680_ == 0)
{
v___x_1682_ = v___x_1679_;
goto v_reusejp_1681_;
}
else
{
lean_object* v_reuseFailAlloc_1683_; 
v_reuseFailAlloc_1683_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1683_, 0, v_a_1677_);
v___x_1682_ = v_reuseFailAlloc_1683_;
goto v_reusejp_1681_;
}
v_reusejp_1681_:
{
return v___x_1682_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_mapM___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__1_spec__2___redArg___boxed(lean_object* v_f_1685_, lean_object* v_sz_1686_, lean_object* v_i_1687_, lean_object* v_bs_1688_, lean_object* v___y_1689_, lean_object* v___y_1690_, lean_object* v___y_1691_, lean_object* v___y_1692_, lean_object* v___y_1693_){
_start:
{
size_t v_sz_boxed_1694_; size_t v_i_boxed_1695_; lean_object* v_res_1696_; 
v_sz_boxed_1694_ = lean_unbox_usize(v_sz_1686_);
lean_dec(v_sz_1686_);
v_i_boxed_1695_ = lean_unbox_usize(v_i_1687_);
lean_dec(v_i_1687_);
v_res_1696_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_mapM___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__1_spec__2___redArg(v_f_1685_, v_sz_boxed_1694_, v_i_boxed_1695_, v_bs_1688_, v___y_1689_, v___y_1690_, v___y_1691_, v___y_1692_);
lean_dec(v___y_1692_);
lean_dec_ref(v___y_1691_);
lean_dec(v___y_1690_);
lean_dec_ref(v___y_1689_);
return v_res_1696_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_mapM___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__1___redArg___boxed(lean_object* v_f_1697_, lean_object* v_x_1698_, lean_object* v___y_1699_, lean_object* v___y_1700_, lean_object* v___y_1701_, lean_object* v___y_1702_, lean_object* v___y_1703_){
_start:
{
lean_object* v_res_1704_; 
v_res_1704_ = l_Lean_Widget_TaggedText_mapM___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__1___redArg(v_f_1697_, v_x_1698_, v___y_1699_, v___y_1700_, v___y_1701_, v___y_1702_);
lean_dec(v___y_1702_);
lean_dec_ref(v___y_1701_);
lean_dec(v___y_1700_);
lean_dec_ref(v___y_1699_);
return v_res_1704_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__0___redArg(lean_object* v_t_1705_, lean_object* v_k_1706_){
_start:
{
if (lean_obj_tag(v_t_1705_) == 0)
{
lean_object* v_k_1707_; lean_object* v_v_1708_; lean_object* v_l_1709_; lean_object* v_r_1710_; uint8_t v___x_1711_; 
v_k_1707_ = lean_ctor_get(v_t_1705_, 1);
v_v_1708_ = lean_ctor_get(v_t_1705_, 2);
v_l_1709_ = lean_ctor_get(v_t_1705_, 3);
v_r_1710_ = lean_ctor_get(v_t_1705_, 4);
v___x_1711_ = lean_nat_dec_lt(v_k_1706_, v_k_1707_);
if (v___x_1711_ == 0)
{
uint8_t v___x_1712_; 
v___x_1712_ = lean_nat_dec_eq(v_k_1706_, v_k_1707_);
if (v___x_1712_ == 0)
{
v_t_1705_ = v_r_1710_;
goto _start;
}
else
{
lean_object* v___x_1714_; 
lean_inc(v_v_1708_);
v___x_1714_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1714_, 0, v_v_1708_);
return v___x_1714_;
}
}
else
{
v_t_1705_ = v_l_1709_;
goto _start;
}
}
else
{
lean_object* v___x_1716_; 
v___x_1716_ = lean_box(0);
return v___x_1716_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__0___redArg___boxed(lean_object* v_t_1717_, lean_object* v_k_1718_){
_start:
{
lean_object* v_res_1719_; 
v_res_1719_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__0___redArg(v_t_1717_, v_k_1718_);
lean_dec(v_k_1718_);
lean_dec(v_t_1717_);
return v_res_1719_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0___redArg___lam__0(lean_object* v_pm_1720_, lean_object* v_merger_1721_, lean_object* v_info_1722_, lean_object* v___y_1723_, lean_object* v___y_1724_, lean_object* v___y_1725_, lean_object* v___y_1726_){
_start:
{
lean_object* v_subexprPos_1728_; lean_object* v___x_1729_; 
v_subexprPos_1728_ = lean_ctor_get(v_info_1722_, 1);
v___x_1729_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__0___redArg(v_pm_1720_, v_subexprPos_1728_);
if (lean_obj_tag(v___x_1729_) == 0)
{
lean_object* v___x_1730_; 
lean_dec_ref(v_merger_1721_);
v___x_1730_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1730_, 0, v_info_1722_);
return v___x_1730_;
}
else
{
lean_object* v_val_1731_; lean_object* v___x_1732_; 
v_val_1731_ = lean_ctor_get(v___x_1729_, 0);
lean_inc(v_val_1731_);
lean_dec_ref_known(v___x_1729_, 1);
lean_inc(v___y_1726_);
lean_inc_ref(v___y_1725_);
lean_inc(v___y_1724_);
lean_inc_ref(v___y_1723_);
v___x_1732_ = lean_apply_7(v_merger_1721_, v_info_1722_, v_val_1731_, v___y_1723_, v___y_1724_, v___y_1725_, v___y_1726_, lean_box(0));
return v___x_1732_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0___redArg___lam__0___boxed(lean_object* v_pm_1733_, lean_object* v_merger_1734_, lean_object* v_info_1735_, lean_object* v___y_1736_, lean_object* v___y_1737_, lean_object* v___y_1738_, lean_object* v___y_1739_, lean_object* v___y_1740_){
_start:
{
lean_object* v_res_1741_; 
v_res_1741_ = l_Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0___redArg___lam__0(v_pm_1733_, v_merger_1734_, v_info_1735_, v___y_1736_, v___y_1737_, v___y_1738_, v___y_1739_);
lean_dec(v___y_1739_);
lean_dec_ref(v___y_1738_);
lean_dec(v___y_1737_);
lean_dec_ref(v___y_1736_);
lean_dec(v_pm_1733_);
return v_res_1741_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0___redArg(lean_object* v_merger_1742_, lean_object* v_pm_1743_, lean_object* v_tt_1744_, lean_object* v___y_1745_, lean_object* v___y_1746_, lean_object* v___y_1747_, lean_object* v___y_1748_){
_start:
{
if (lean_obj_tag(v_pm_1743_) == 0)
{
lean_object* v___f_1750_; lean_object* v___x_1751_; 
v___f_1750_ = lean_alloc_closure((void*)(l_Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0___redArg___lam__0___boxed), 8, 2);
lean_closure_set(v___f_1750_, 0, v_pm_1743_);
lean_closure_set(v___f_1750_, 1, v_merger_1742_);
v___x_1751_ = l_Lean_Widget_TaggedText_mapM___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__1___redArg(v___f_1750_, v_tt_1744_, v___y_1745_, v___y_1746_, v___y_1747_, v___y_1748_);
return v___x_1751_;
}
else
{
lean_object* v___x_1752_; 
lean_dec_ref(v_merger_1742_);
v___x_1752_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1752_, 0, v_tt_1744_);
return v___x_1752_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0___redArg___boxed(lean_object* v_merger_1753_, lean_object* v_pm_1754_, lean_object* v_tt_1755_, lean_object* v___y_1756_, lean_object* v___y_1757_, lean_object* v___y_1758_, lean_object* v___y_1759_, lean_object* v___y_1760_){
_start:
{
lean_object* v_res_1761_; 
v_res_1761_ = l_Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0___redArg(v_merger_1753_, v_pm_1754_, v_tt_1755_, v___y_1756_, v___y_1757_, v___y_1758_, v___y_1759_);
lean_dec(v___y_1759_);
lean_dec_ref(v___y_1758_);
lean_dec(v___y_1757_);
lean_dec_ref(v___y_1756_);
return v_res_1761_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags(uint8_t v_useAfter_1762_, lean_object* v_diff_1763_, lean_object* v_info_u2081_1764_, lean_object* v___y_1765_, lean_object* v___y_1766_, lean_object* v___y_1767_, lean_object* v___y_1768_){
_start:
{
lean_object* v___x_1770_; lean_object* v___f_1771_; 
v___x_1770_ = lean_box(v_useAfter_1762_);
v___f_1771_ = lean_alloc_closure((void*)(l___private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags___lam__0___boxed), 8, 1);
lean_closure_set(v___f_1771_, 0, v___x_1770_);
if (v_useAfter_1762_ == 0)
{
lean_object* v_changesBefore_1772_; lean_object* v___x_1773_; 
v_changesBefore_1772_ = lean_ctor_get(v_diff_1763_, 0);
lean_inc(v_changesBefore_1772_);
lean_dec_ref(v_diff_1763_);
v___x_1773_ = l_Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0___redArg(v___f_1771_, v_changesBefore_1772_, v_info_u2081_1764_, v___y_1765_, v___y_1766_, v___y_1767_, v___y_1768_);
return v___x_1773_;
}
else
{
lean_object* v_changesAfter_1774_; lean_object* v___x_1775_; 
v_changesAfter_1774_ = lean_ctor_get(v_diff_1763_, 1);
lean_inc(v_changesAfter_1774_);
lean_dec_ref(v_diff_1763_);
v___x_1775_ = l_Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0___redArg(v___f_1771_, v_changesAfter_1774_, v_info_u2081_1764_, v___y_1765_, v___y_1766_, v___y_1767_, v___y_1768_);
return v___x_1775_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags___boxed(lean_object* v_useAfter_1776_, lean_object* v_diff_1777_, lean_object* v_info_u2081_1778_, lean_object* v___y_1779_, lean_object* v___y_1780_, lean_object* v___y_1781_, lean_object* v___y_1782_, lean_object* v___y_1783_){
_start:
{
uint8_t v_useAfter_boxed_1784_; lean_object* v_res_1785_; 
v_useAfter_boxed_1784_ = lean_unbox(v_useAfter_1776_);
v_res_1785_ = l___private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags(v_useAfter_boxed_1784_, v_diff_1777_, v_info_u2081_1778_, v___y_1779_, v___y_1780_, v___y_1781_, v___y_1782_);
lean_dec(v___y_1782_);
lean_dec_ref(v___y_1781_);
lean_dec(v___y_1780_);
lean_dec_ref(v___y_1779_);
return v_res_1785_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0(lean_object* v_00_u03b1_1786_, lean_object* v_merger_1787_, lean_object* v_pm_1788_, lean_object* v_tt_1789_, lean_object* v___y_1790_, lean_object* v___y_1791_, lean_object* v___y_1792_, lean_object* v___y_1793_){
_start:
{
lean_object* v___x_1795_; 
v___x_1795_ = l_Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0___redArg(v_merger_1787_, v_pm_1788_, v_tt_1789_, v___y_1790_, v___y_1791_, v___y_1792_, v___y_1793_);
return v___x_1795_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0___boxed(lean_object* v_00_u03b1_1796_, lean_object* v_merger_1797_, lean_object* v_pm_1798_, lean_object* v_tt_1799_, lean_object* v___y_1800_, lean_object* v___y_1801_, lean_object* v___y_1802_, lean_object* v___y_1803_, lean_object* v___y_1804_){
_start:
{
lean_object* v_res_1805_; 
v_res_1805_ = l_Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0(v_00_u03b1_1796_, v_merger_1797_, v_pm_1798_, v_tt_1799_, v___y_1800_, v___y_1801_, v___y_1802_, v___y_1803_);
lean_dec(v___y_1803_);
lean_dec_ref(v___y_1802_);
lean_dec(v___y_1801_);
lean_dec_ref(v___y_1800_);
return v_res_1805_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__0(lean_object* v_00_u03b4_1806_, lean_object* v_t_1807_, lean_object* v_k_1808_){
_start:
{
lean_object* v___x_1809_; 
v___x_1809_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__0___redArg(v_t_1807_, v_k_1808_);
return v___x_1809_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__0___boxed(lean_object* v_00_u03b4_1810_, lean_object* v_t_1811_, lean_object* v_k_1812_){
_start:
{
lean_object* v_res_1813_; 
v_res_1813_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__0(v_00_u03b4_1810_, v_t_1811_, v_k_1812_);
lean_dec(v_k_1812_);
lean_dec(v_t_1811_);
return v_res_1813_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_mapM___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__1(lean_object* v_00_u03b1_1814_, lean_object* v_00_u03b2_1815_, lean_object* v_f_1816_, lean_object* v_x_1817_, lean_object* v___y_1818_, lean_object* v___y_1819_, lean_object* v___y_1820_, lean_object* v___y_1821_){
_start:
{
lean_object* v___x_1823_; 
v___x_1823_ = l_Lean_Widget_TaggedText_mapM___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__1___redArg(v_f_1816_, v_x_1817_, v___y_1818_, v___y_1819_, v___y_1820_, v___y_1821_);
return v___x_1823_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_mapM___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__1___boxed(lean_object* v_00_u03b1_1824_, lean_object* v_00_u03b2_1825_, lean_object* v_f_1826_, lean_object* v_x_1827_, lean_object* v___y_1828_, lean_object* v___y_1829_, lean_object* v___y_1830_, lean_object* v___y_1831_, lean_object* v___y_1832_){
_start:
{
lean_object* v_res_1833_; 
v_res_1833_ = l_Lean_Widget_TaggedText_mapM___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__1(v_00_u03b1_1824_, v_00_u03b2_1825_, v_f_1826_, v_x_1827_, v___y_1828_, v___y_1829_, v___y_1830_, v___y_1831_);
lean_dec(v___y_1831_);
lean_dec_ref(v___y_1830_);
lean_dec(v___y_1829_);
lean_dec_ref(v___y_1828_);
return v_res_1833_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_mapM___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__1_spec__2(lean_object* v_00_u03b1_1834_, lean_object* v_00_u03b2_1835_, lean_object* v_f_1836_, size_t v_sz_1837_, size_t v_i_1838_, lean_object* v_bs_1839_, lean_object* v___y_1840_, lean_object* v___y_1841_, lean_object* v___y_1842_, lean_object* v___y_1843_){
_start:
{
lean_object* v___x_1845_; 
v___x_1845_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_mapM___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__1_spec__2___redArg(v_f_1836_, v_sz_1837_, v_i_1838_, v_bs_1839_, v___y_1840_, v___y_1841_, v___y_1842_, v___y_1843_);
return v___x_1845_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_mapM___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__1_spec__2___boxed(lean_object* v_00_u03b1_1846_, lean_object* v_00_u03b2_1847_, lean_object* v_f_1848_, lean_object* v_sz_1849_, lean_object* v_i_1850_, lean_object* v_bs_1851_, lean_object* v___y_1852_, lean_object* v___y_1853_, lean_object* v___y_1854_, lean_object* v___y_1855_, lean_object* v___y_1856_){
_start:
{
size_t v_sz_boxed_1857_; size_t v_i_boxed_1858_; lean_object* v_res_1859_; 
v_sz_boxed_1857_ = lean_unbox_usize(v_sz_1849_);
lean_dec(v_sz_1849_);
v_i_boxed_1858_ = lean_unbox_usize(v_i_1850_);
lean_dec(v_i_1850_);
v_res_1859_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_mapM___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__1_spec__2(v_00_u03b1_1846_, v_00_u03b2_1847_, v_f_1848_, v_sz_boxed_1857_, v_i_boxed_1858_, v_bs_1851_, v___y_1852_, v___y_1853_, v___y_1854_, v___y_1855_);
lean_dec(v___y_1855_);
lean_dec_ref(v___y_1854_);
lean_dec(v___y_1853_);
lean_dec_ref(v___y_1852_);
return v_res_1859_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff_spec__0___redArg(lean_object* v_e_1860_, lean_object* v___y_1861_){
_start:
{
uint8_t v___x_1863_; 
v___x_1863_ = l_Lean_Expr_hasMVar(v_e_1860_);
if (v___x_1863_ == 0)
{
lean_object* v___x_1864_; 
v___x_1864_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1864_, 0, v_e_1860_);
return v___x_1864_;
}
else
{
lean_object* v___x_1865_; lean_object* v_mctx_1866_; lean_object* v___x_1867_; lean_object* v_fst_1868_; lean_object* v_snd_1869_; lean_object* v___x_1870_; lean_object* v_cache_1871_; lean_object* v_zetaDeltaFVarIds_1872_; lean_object* v_postponed_1873_; lean_object* v_diag_1874_; lean_object* v___x_1876_; uint8_t v_isShared_1877_; uint8_t v_isSharedCheck_1883_; 
v___x_1865_ = lean_st_ref_get(v___y_1861_);
v_mctx_1866_ = lean_ctor_get(v___x_1865_, 0);
lean_inc_ref(v_mctx_1866_);
lean_dec(v___x_1865_);
v___x_1867_ = l_Lean_instantiateMVarsCore(v_mctx_1866_, v_e_1860_);
v_fst_1868_ = lean_ctor_get(v___x_1867_, 0);
lean_inc(v_fst_1868_);
v_snd_1869_ = lean_ctor_get(v___x_1867_, 1);
lean_inc(v_snd_1869_);
lean_dec_ref(v___x_1867_);
v___x_1870_ = lean_st_ref_take(v___y_1861_);
v_cache_1871_ = lean_ctor_get(v___x_1870_, 1);
v_zetaDeltaFVarIds_1872_ = lean_ctor_get(v___x_1870_, 2);
v_postponed_1873_ = lean_ctor_get(v___x_1870_, 3);
v_diag_1874_ = lean_ctor_get(v___x_1870_, 4);
v_isSharedCheck_1883_ = !lean_is_exclusive(v___x_1870_);
if (v_isSharedCheck_1883_ == 0)
{
lean_object* v_unused_1884_; 
v_unused_1884_ = lean_ctor_get(v___x_1870_, 0);
lean_dec(v_unused_1884_);
v___x_1876_ = v___x_1870_;
v_isShared_1877_ = v_isSharedCheck_1883_;
goto v_resetjp_1875_;
}
else
{
lean_inc(v_diag_1874_);
lean_inc(v_postponed_1873_);
lean_inc(v_zetaDeltaFVarIds_1872_);
lean_inc(v_cache_1871_);
lean_dec(v___x_1870_);
v___x_1876_ = lean_box(0);
v_isShared_1877_ = v_isSharedCheck_1883_;
goto v_resetjp_1875_;
}
v_resetjp_1875_:
{
lean_object* v___x_1879_; 
if (v_isShared_1877_ == 0)
{
lean_ctor_set(v___x_1876_, 0, v_snd_1869_);
v___x_1879_ = v___x_1876_;
goto v_reusejp_1878_;
}
else
{
lean_object* v_reuseFailAlloc_1882_; 
v_reuseFailAlloc_1882_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1882_, 0, v_snd_1869_);
lean_ctor_set(v_reuseFailAlloc_1882_, 1, v_cache_1871_);
lean_ctor_set(v_reuseFailAlloc_1882_, 2, v_zetaDeltaFVarIds_1872_);
lean_ctor_set(v_reuseFailAlloc_1882_, 3, v_postponed_1873_);
lean_ctor_set(v_reuseFailAlloc_1882_, 4, v_diag_1874_);
v___x_1879_ = v_reuseFailAlloc_1882_;
goto v_reusejp_1878_;
}
v_reusejp_1878_:
{
lean_object* v___x_1880_; lean_object* v___x_1881_; 
v___x_1880_ = lean_st_ref_put(v___y_1861_, v___x_1879_);
v___x_1881_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1881_, 0, v_fst_1868_);
return v___x_1881_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff_spec__0___redArg___boxed(lean_object* v_e_1885_, lean_object* v___y_1886_, lean_object* v___y_1887_){
_start:
{
lean_object* v_res_1888_; 
v_res_1888_ = l_Lean_instantiateMVars___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff_spec__0___redArg(v_e_1885_, v___y_1886_);
lean_dec(v___y_1886_);
return v_res_1888_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff_spec__0(lean_object* v_e_1889_, lean_object* v___y_1890_, lean_object* v___y_1891_, lean_object* v___y_1892_, lean_object* v___y_1893_){
_start:
{
lean_object* v___x_1895_; 
v___x_1895_ = l_Lean_instantiateMVars___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff_spec__0___redArg(v_e_1889_, v___y_1891_);
return v___x_1895_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff_spec__0___boxed(lean_object* v_e_1896_, lean_object* v___y_1897_, lean_object* v___y_1898_, lean_object* v___y_1899_, lean_object* v___y_1900_, lean_object* v___y_1901_){
_start:
{
lean_object* v_res_1902_; 
v_res_1902_ = l_Lean_instantiateMVars___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff_spec__0(v_e_1896_, v___y_1897_, v___y_1898_, v___y_1899_, v___y_1900_);
lean_dec(v___y_1900_);
lean_dec_ref(v___y_1899_);
lean_dec(v___y_1898_);
lean_dec_ref(v___y_1897_);
return v_res_1902_;
}
}
static lean_object* _init_l___private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff___closed__1(void){
_start:
{
lean_object* v___x_1904_; lean_object* v___x_1905_; 
v___x_1904_ = ((lean_object*)(l___private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff___closed__0));
v___x_1905_ = l_Lean_stringToMessageData(v___x_1904_);
return v___x_1905_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff(uint8_t v_useAfter_1906_, lean_object* v_t_u2080_1907_, lean_object* v_h_u2081_1908_, lean_object* v___y_1909_, lean_object* v___y_1910_, lean_object* v___y_1911_, lean_object* v___y_1912_){
_start:
{
lean_object* v_names_1914_; lean_object* v_fvarIds_1915_; lean_object* v_type_1916_; lean_object* v_val_x3f_1917_; lean_object* v_isInstance_x3f_1918_; lean_object* v_isType_x3f_1919_; lean_object* v_isInserted_x3f_1920_; lean_object* v_isRemoved_x3f_1921_; lean_object* v___x_1923_; uint8_t v_isShared_1924_; uint8_t v_isSharedCheck_1976_; 
v_names_1914_ = lean_ctor_get(v_h_u2081_1908_, 0);
v_fvarIds_1915_ = lean_ctor_get(v_h_u2081_1908_, 1);
v_type_1916_ = lean_ctor_get(v_h_u2081_1908_, 2);
v_val_x3f_1917_ = lean_ctor_get(v_h_u2081_1908_, 3);
v_isInstance_x3f_1918_ = lean_ctor_get(v_h_u2081_1908_, 4);
v_isType_x3f_1919_ = lean_ctor_get(v_h_u2081_1908_, 5);
v_isInserted_x3f_1920_ = lean_ctor_get(v_h_u2081_1908_, 6);
v_isRemoved_x3f_1921_ = lean_ctor_get(v_h_u2081_1908_, 7);
v_isSharedCheck_1976_ = !lean_is_exclusive(v_h_u2081_1908_);
if (v_isSharedCheck_1976_ == 0)
{
v___x_1923_ = v_h_u2081_1908_;
v_isShared_1924_ = v_isSharedCheck_1976_;
goto v_resetjp_1922_;
}
else
{
lean_inc(v_isRemoved_x3f_1921_);
lean_inc(v_isInserted_x3f_1920_);
lean_inc(v_isType_x3f_1919_);
lean_inc(v_isInstance_x3f_1918_);
lean_inc(v_val_x3f_1917_);
lean_inc(v_type_1916_);
lean_inc(v_fvarIds_1915_);
lean_inc(v_names_1914_);
lean_dec(v_h_u2081_1908_);
v___x_1923_ = lean_box(0);
v_isShared_1924_ = v_isSharedCheck_1976_;
goto v_resetjp_1922_;
}
v_resetjp_1922_:
{
lean_object* v___y_1926_; lean_object* v___x_1966_; lean_object* v___x_1967_; uint8_t v___x_1968_; 
v___x_1966_ = lean_unsigned_to_nat(0u);
v___x_1967_ = lean_array_get_size(v_fvarIds_1915_);
v___x_1968_ = lean_nat_dec_lt(v___x_1966_, v___x_1967_);
if (v___x_1968_ == 0)
{
lean_object* v___x_1969_; lean_object* v___x_1970_; 
lean_del_object(v___x_1923_);
lean_dec(v_isRemoved_x3f_1921_);
lean_dec(v_isInserted_x3f_1920_);
lean_dec(v_isType_x3f_1919_);
lean_dec(v_isInstance_x3f_1918_);
lean_dec(v_val_x3f_1917_);
lean_dec_ref(v_type_1916_);
lean_dec_ref(v_fvarIds_1915_);
lean_dec_ref(v_names_1914_);
lean_dec_ref(v_t_u2080_1907_);
v___x_1969_ = lean_obj_once(&l___private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff___closed__1, &l___private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff___closed__1_once, _init_l___private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff___closed__1);
v___x_1970_ = l_Lean_throwError___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__3___redArg(v___x_1969_, v___y_1909_, v___y_1910_, v___y_1911_, v___y_1912_);
return v___x_1970_;
}
else
{
lean_object* v___x_1971_; lean_object* v___x_1972_; lean_object* v___x_1973_; 
v___x_1971_ = lean_array_fget_borrowed(v_fvarIds_1915_, v___x_1966_);
lean_inc(v___x_1971_);
v___x_1972_ = l_Lean_Expr_fvar___override(v___x_1971_);
lean_inc(v___y_1912_);
lean_inc_ref(v___y_1911_);
lean_inc(v___y_1910_);
lean_inc_ref(v___y_1909_);
v___x_1973_ = lean_infer_type(v___x_1972_, v___y_1909_, v___y_1910_, v___y_1911_, v___y_1912_);
if (lean_obj_tag(v___x_1973_) == 0)
{
lean_object* v_a_1974_; lean_object* v___x_1975_; 
v_a_1974_ = lean_ctor_get(v___x_1973_, 0);
lean_inc(v_a_1974_);
lean_dec_ref_known(v___x_1973_, 1);
v___x_1975_ = l_Lean_instantiateMVars___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff_spec__0___redArg(v_a_1974_, v___y_1910_);
v___y_1926_ = v___x_1975_;
goto v___jp_1925_;
}
else
{
v___y_1926_ = v___x_1973_;
goto v___jp_1925_;
}
}
v___jp_1925_:
{
if (lean_obj_tag(v___y_1926_) == 0)
{
lean_object* v_a_1927_; lean_object* v___x_1928_; 
v_a_1927_ = lean_ctor_get(v___y_1926_, 0);
lean_inc(v_a_1927_);
lean_dec_ref_known(v___y_1926_, 1);
v___x_1928_ = l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiff(v_t_u2080_1907_, v_a_1927_, v_useAfter_1906_, v___y_1909_, v___y_1910_, v___y_1911_, v___y_1912_);
if (lean_obj_tag(v___x_1928_) == 0)
{
lean_object* v_a_1929_; lean_object* v___x_1930_; 
v_a_1929_ = lean_ctor_get(v___x_1928_, 0);
lean_inc(v_a_1929_);
lean_dec_ref_known(v___x_1928_, 1);
v___x_1930_ = l___private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags(v_useAfter_1906_, v_a_1929_, v_type_1916_, v___y_1909_, v___y_1910_, v___y_1911_, v___y_1912_);
if (lean_obj_tag(v___x_1930_) == 0)
{
lean_object* v_a_1931_; lean_object* v___x_1933_; uint8_t v_isShared_1934_; uint8_t v_isSharedCheck_1941_; 
v_a_1931_ = lean_ctor_get(v___x_1930_, 0);
v_isSharedCheck_1941_ = !lean_is_exclusive(v___x_1930_);
if (v_isSharedCheck_1941_ == 0)
{
v___x_1933_ = v___x_1930_;
v_isShared_1934_ = v_isSharedCheck_1941_;
goto v_resetjp_1932_;
}
else
{
lean_inc(v_a_1931_);
lean_dec(v___x_1930_);
v___x_1933_ = lean_box(0);
v_isShared_1934_ = v_isSharedCheck_1941_;
goto v_resetjp_1932_;
}
v_resetjp_1932_:
{
lean_object* v___x_1936_; 
if (v_isShared_1924_ == 0)
{
lean_ctor_set(v___x_1923_, 2, v_a_1931_);
v___x_1936_ = v___x_1923_;
goto v_reusejp_1935_;
}
else
{
lean_object* v_reuseFailAlloc_1940_; 
v_reuseFailAlloc_1940_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_1940_, 0, v_names_1914_);
lean_ctor_set(v_reuseFailAlloc_1940_, 1, v_fvarIds_1915_);
lean_ctor_set(v_reuseFailAlloc_1940_, 2, v_a_1931_);
lean_ctor_set(v_reuseFailAlloc_1940_, 3, v_val_x3f_1917_);
lean_ctor_set(v_reuseFailAlloc_1940_, 4, v_isInstance_x3f_1918_);
lean_ctor_set(v_reuseFailAlloc_1940_, 5, v_isType_x3f_1919_);
lean_ctor_set(v_reuseFailAlloc_1940_, 6, v_isInserted_x3f_1920_);
lean_ctor_set(v_reuseFailAlloc_1940_, 7, v_isRemoved_x3f_1921_);
v___x_1936_ = v_reuseFailAlloc_1940_;
goto v_reusejp_1935_;
}
v_reusejp_1935_:
{
lean_object* v___x_1938_; 
if (v_isShared_1934_ == 0)
{
lean_ctor_set(v___x_1933_, 0, v___x_1936_);
v___x_1938_ = v___x_1933_;
goto v_reusejp_1937_;
}
else
{
lean_object* v_reuseFailAlloc_1939_; 
v_reuseFailAlloc_1939_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1939_, 0, v___x_1936_);
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
lean_object* v_a_1942_; lean_object* v___x_1944_; uint8_t v_isShared_1945_; uint8_t v_isSharedCheck_1949_; 
lean_del_object(v___x_1923_);
lean_dec(v_isRemoved_x3f_1921_);
lean_dec(v_isInserted_x3f_1920_);
lean_dec(v_isType_x3f_1919_);
lean_dec(v_isInstance_x3f_1918_);
lean_dec(v_val_x3f_1917_);
lean_dec_ref(v_fvarIds_1915_);
lean_dec_ref(v_names_1914_);
v_a_1942_ = lean_ctor_get(v___x_1930_, 0);
v_isSharedCheck_1949_ = !lean_is_exclusive(v___x_1930_);
if (v_isSharedCheck_1949_ == 0)
{
v___x_1944_ = v___x_1930_;
v_isShared_1945_ = v_isSharedCheck_1949_;
goto v_resetjp_1943_;
}
else
{
lean_inc(v_a_1942_);
lean_dec(v___x_1930_);
v___x_1944_ = lean_box(0);
v_isShared_1945_ = v_isSharedCheck_1949_;
goto v_resetjp_1943_;
}
v_resetjp_1943_:
{
lean_object* v___x_1947_; 
if (v_isShared_1945_ == 0)
{
v___x_1947_ = v___x_1944_;
goto v_reusejp_1946_;
}
else
{
lean_object* v_reuseFailAlloc_1948_; 
v_reuseFailAlloc_1948_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1948_, 0, v_a_1942_);
v___x_1947_ = v_reuseFailAlloc_1948_;
goto v_reusejp_1946_;
}
v_reusejp_1946_:
{
return v___x_1947_;
}
}
}
}
else
{
lean_object* v_a_1950_; lean_object* v___x_1952_; uint8_t v_isShared_1953_; uint8_t v_isSharedCheck_1957_; 
lean_del_object(v___x_1923_);
lean_dec(v_isRemoved_x3f_1921_);
lean_dec(v_isInserted_x3f_1920_);
lean_dec(v_isType_x3f_1919_);
lean_dec(v_isInstance_x3f_1918_);
lean_dec(v_val_x3f_1917_);
lean_dec_ref(v_type_1916_);
lean_dec_ref(v_fvarIds_1915_);
lean_dec_ref(v_names_1914_);
v_a_1950_ = lean_ctor_get(v___x_1928_, 0);
v_isSharedCheck_1957_ = !lean_is_exclusive(v___x_1928_);
if (v_isSharedCheck_1957_ == 0)
{
v___x_1952_ = v___x_1928_;
v_isShared_1953_ = v_isSharedCheck_1957_;
goto v_resetjp_1951_;
}
else
{
lean_inc(v_a_1950_);
lean_dec(v___x_1928_);
v___x_1952_ = lean_box(0);
v_isShared_1953_ = v_isSharedCheck_1957_;
goto v_resetjp_1951_;
}
v_resetjp_1951_:
{
lean_object* v___x_1955_; 
if (v_isShared_1953_ == 0)
{
v___x_1955_ = v___x_1952_;
goto v_reusejp_1954_;
}
else
{
lean_object* v_reuseFailAlloc_1956_; 
v_reuseFailAlloc_1956_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1956_, 0, v_a_1950_);
v___x_1955_ = v_reuseFailAlloc_1956_;
goto v_reusejp_1954_;
}
v_reusejp_1954_:
{
return v___x_1955_;
}
}
}
}
else
{
lean_object* v_a_1958_; lean_object* v___x_1960_; uint8_t v_isShared_1961_; uint8_t v_isSharedCheck_1965_; 
lean_del_object(v___x_1923_);
lean_dec(v_isRemoved_x3f_1921_);
lean_dec(v_isInserted_x3f_1920_);
lean_dec(v_isType_x3f_1919_);
lean_dec(v_isInstance_x3f_1918_);
lean_dec(v_val_x3f_1917_);
lean_dec_ref(v_type_1916_);
lean_dec_ref(v_fvarIds_1915_);
lean_dec_ref(v_names_1914_);
lean_dec_ref(v_t_u2080_1907_);
v_a_1958_ = lean_ctor_get(v___y_1926_, 0);
v_isSharedCheck_1965_ = !lean_is_exclusive(v___y_1926_);
if (v_isSharedCheck_1965_ == 0)
{
v___x_1960_ = v___y_1926_;
v_isShared_1961_ = v_isSharedCheck_1965_;
goto v_resetjp_1959_;
}
else
{
lean_inc(v_a_1958_);
lean_dec(v___y_1926_);
v___x_1960_ = lean_box(0);
v_isShared_1961_ = v_isSharedCheck_1965_;
goto v_resetjp_1959_;
}
v_resetjp_1959_:
{
lean_object* v___x_1963_; 
if (v_isShared_1961_ == 0)
{
v___x_1963_ = v___x_1960_;
goto v_reusejp_1962_;
}
else
{
lean_object* v_reuseFailAlloc_1964_; 
v_reuseFailAlloc_1964_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1964_, 0, v_a_1958_);
v___x_1963_ = v_reuseFailAlloc_1964_;
goto v_reusejp_1962_;
}
v_reusejp_1962_:
{
return v___x_1963_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff___boxed(lean_object* v_useAfter_1977_, lean_object* v_t_u2080_1978_, lean_object* v_h_u2081_1979_, lean_object* v___y_1980_, lean_object* v___y_1981_, lean_object* v___y_1982_, lean_object* v___y_1983_, lean_object* v___y_1984_){
_start:
{
uint8_t v_useAfter_boxed_1985_; lean_object* v_res_1986_; 
v_useAfter_boxed_1985_ = lean_unbox(v_useAfter_1977_);
v_res_1986_ = l___private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff(v_useAfter_boxed_1985_, v_t_u2080_1978_, v_h_u2081_1979_, v___y_1980_, v___y_1981_, v___y_1982_, v___y_1983_);
lean_dec(v___y_1983_);
lean_dec_ref(v___y_1982_);
lean_dec(v___y_1981_);
lean_dec_ref(v___y_1980_);
return v_res_1986_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_spec__0(lean_object* v_ctx_u2080_1990_, uint8_t v_useAfter_1991_, lean_object* v_h_u2081_1992_, lean_object* v___x_1993_, lean_object* v___x_1994_, lean_object* v_as_1995_, size_t v_sz_1996_, size_t v_i_1997_, lean_object* v_b_1998_, lean_object* v___y_1999_, lean_object* v___y_2000_, lean_object* v___y_2001_, lean_object* v___y_2002_){
_start:
{
uint8_t v___x_2004_; 
v___x_2004_ = lean_usize_dec_lt(v_i_1997_, v_sz_1996_);
if (v___x_2004_ == 0)
{
lean_object* v___x_2005_; 
lean_dec_ref(v___x_1994_);
lean_dec_ref(v___x_1993_);
lean_dec_ref(v_h_u2081_1992_);
v___x_2005_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2005_, 0, v_b_1998_);
return v___x_2005_;
}
else
{
lean_object* v_a_2006_; lean_object* v_fst_2007_; lean_object* v_snd_2008_; lean_object* v___x_2010_; uint8_t v_isShared_2011_; uint8_t v_isSharedCheck_2104_; 
lean_dec_ref(v_b_1998_);
v_a_2006_ = lean_array_uget(v_as_1995_, v_i_1997_);
v_fst_2007_ = lean_ctor_get(v_a_2006_, 0);
v_snd_2008_ = lean_ctor_get(v_a_2006_, 1);
v_isSharedCheck_2104_ = !lean_is_exclusive(v_a_2006_);
if (v_isSharedCheck_2104_ == 0)
{
v___x_2010_ = v_a_2006_;
v_isShared_2011_ = v_isSharedCheck_2104_;
goto v_resetjp_2009_;
}
else
{
lean_inc(v_snd_2008_);
lean_inc(v_fst_2007_);
lean_dec(v_a_2006_);
v___x_2010_ = lean_box(0);
v_isShared_2011_ = v_isSharedCheck_2104_;
goto v_resetjp_2009_;
}
v_resetjp_2009_:
{
lean_object* v___x_2012_; uint8_t v___x_2013_; 
v___x_2012_ = lean_box(0);
v___x_2013_ = l_Lean_LocalContext_contains(v_ctx_u2080_1990_, v_snd_2008_);
lean_dec(v_snd_2008_);
if (v___x_2013_ == 0)
{
lean_object* v___x_2014_; lean_object* v___x_2015_; lean_object* v___x_2016_; 
v___x_2014_ = lean_box(0);
v___x_2015_ = l_Lean_Name_str___override(v___x_2014_, v_fst_2007_);
v___x_2016_ = l_Lean_LocalContext_findFromUserName_x3f(v_ctx_u2080_1990_, v___x_2015_);
lean_dec(v___x_2015_);
if (lean_obj_tag(v___x_2016_) == 1)
{
lean_object* v_val_2017_; lean_object* v___x_2019_; uint8_t v_isShared_2020_; uint8_t v_isSharedCheck_2055_; 
lean_dec_ref(v___x_1994_);
lean_dec_ref(v___x_1993_);
v_val_2017_ = lean_ctor_get(v___x_2016_, 0);
v_isSharedCheck_2055_ = !lean_is_exclusive(v___x_2016_);
if (v_isSharedCheck_2055_ == 0)
{
v___x_2019_ = v___x_2016_;
v_isShared_2020_ = v_isSharedCheck_2055_;
goto v_resetjp_2018_;
}
else
{
lean_inc(v_val_2017_);
lean_dec(v___x_2016_);
v___x_2019_ = lean_box(0);
v_isShared_2020_ = v_isSharedCheck_2055_;
goto v_resetjp_2018_;
}
v_resetjp_2018_:
{
lean_object* v___x_2021_; lean_object* v___x_2022_; 
v___x_2021_ = l_Lean_LocalDecl_type(v_val_2017_);
lean_dec(v_val_2017_);
v___x_2022_ = l_Lean_instantiateMVars___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff_spec__0___redArg(v___x_2021_, v___y_2000_);
if (lean_obj_tag(v___x_2022_) == 0)
{
lean_object* v_a_2023_; lean_object* v___x_2024_; 
v_a_2023_ = lean_ctor_get(v___x_2022_, 0);
lean_inc(v_a_2023_);
lean_dec_ref_known(v___x_2022_, 1);
v___x_2024_ = l___private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff(v_useAfter_1991_, v_a_2023_, v_h_u2081_1992_, v___y_1999_, v___y_2000_, v___y_2001_, v___y_2002_);
if (lean_obj_tag(v___x_2024_) == 0)
{
lean_object* v_a_2025_; lean_object* v___x_2027_; uint8_t v_isShared_2028_; uint8_t v_isSharedCheck_2038_; 
v_a_2025_ = lean_ctor_get(v___x_2024_, 0);
v_isSharedCheck_2038_ = !lean_is_exclusive(v___x_2024_);
if (v_isSharedCheck_2038_ == 0)
{
v___x_2027_ = v___x_2024_;
v_isShared_2028_ = v_isSharedCheck_2038_;
goto v_resetjp_2026_;
}
else
{
lean_inc(v_a_2025_);
lean_dec(v___x_2024_);
v___x_2027_ = lean_box(0);
v_isShared_2028_ = v_isSharedCheck_2038_;
goto v_resetjp_2026_;
}
v_resetjp_2026_:
{
lean_object* v___x_2030_; 
if (v_isShared_2020_ == 0)
{
lean_ctor_set(v___x_2019_, 0, v_a_2025_);
v___x_2030_ = v___x_2019_;
goto v_reusejp_2029_;
}
else
{
lean_object* v_reuseFailAlloc_2037_; 
v_reuseFailAlloc_2037_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2037_, 0, v_a_2025_);
v___x_2030_ = v_reuseFailAlloc_2037_;
goto v_reusejp_2029_;
}
v_reusejp_2029_:
{
lean_object* v___x_2032_; 
if (v_isShared_2011_ == 0)
{
lean_ctor_set(v___x_2010_, 1, v___x_2012_);
lean_ctor_set(v___x_2010_, 0, v___x_2030_);
v___x_2032_ = v___x_2010_;
goto v_reusejp_2031_;
}
else
{
lean_object* v_reuseFailAlloc_2036_; 
v_reuseFailAlloc_2036_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2036_, 0, v___x_2030_);
lean_ctor_set(v_reuseFailAlloc_2036_, 1, v___x_2012_);
v___x_2032_ = v_reuseFailAlloc_2036_;
goto v_reusejp_2031_;
}
v_reusejp_2031_:
{
lean_object* v___x_2034_; 
if (v_isShared_2028_ == 0)
{
lean_ctor_set(v___x_2027_, 0, v___x_2032_);
v___x_2034_ = v___x_2027_;
goto v_reusejp_2033_;
}
else
{
lean_object* v_reuseFailAlloc_2035_; 
v_reuseFailAlloc_2035_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2035_, 0, v___x_2032_);
v___x_2034_ = v_reuseFailAlloc_2035_;
goto v_reusejp_2033_;
}
v_reusejp_2033_:
{
return v___x_2034_;
}
}
}
}
}
else
{
lean_object* v_a_2039_; lean_object* v___x_2041_; uint8_t v_isShared_2042_; uint8_t v_isSharedCheck_2046_; 
lean_del_object(v___x_2019_);
lean_del_object(v___x_2010_);
v_a_2039_ = lean_ctor_get(v___x_2024_, 0);
v_isSharedCheck_2046_ = !lean_is_exclusive(v___x_2024_);
if (v_isSharedCheck_2046_ == 0)
{
v___x_2041_ = v___x_2024_;
v_isShared_2042_ = v_isSharedCheck_2046_;
goto v_resetjp_2040_;
}
else
{
lean_inc(v_a_2039_);
lean_dec(v___x_2024_);
v___x_2041_ = lean_box(0);
v_isShared_2042_ = v_isSharedCheck_2046_;
goto v_resetjp_2040_;
}
v_resetjp_2040_:
{
lean_object* v___x_2044_; 
if (v_isShared_2042_ == 0)
{
v___x_2044_ = v___x_2041_;
goto v_reusejp_2043_;
}
else
{
lean_object* v_reuseFailAlloc_2045_; 
v_reuseFailAlloc_2045_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2045_, 0, v_a_2039_);
v___x_2044_ = v_reuseFailAlloc_2045_;
goto v_reusejp_2043_;
}
v_reusejp_2043_:
{
return v___x_2044_;
}
}
}
}
else
{
lean_object* v_a_2047_; lean_object* v___x_2049_; uint8_t v_isShared_2050_; uint8_t v_isSharedCheck_2054_; 
lean_del_object(v___x_2019_);
lean_del_object(v___x_2010_);
lean_dec_ref(v_h_u2081_1992_);
v_a_2047_ = lean_ctor_get(v___x_2022_, 0);
v_isSharedCheck_2054_ = !lean_is_exclusive(v___x_2022_);
if (v_isSharedCheck_2054_ == 0)
{
v___x_2049_ = v___x_2022_;
v_isShared_2050_ = v_isSharedCheck_2054_;
goto v_resetjp_2048_;
}
else
{
lean_inc(v_a_2047_);
lean_dec(v___x_2022_);
v___x_2049_ = lean_box(0);
v_isShared_2050_ = v_isSharedCheck_2054_;
goto v_resetjp_2048_;
}
v_resetjp_2048_:
{
lean_object* v___x_2052_; 
if (v_isShared_2050_ == 0)
{
v___x_2052_ = v___x_2049_;
goto v_reusejp_2051_;
}
else
{
lean_object* v_reuseFailAlloc_2053_; 
v_reuseFailAlloc_2053_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2053_, 0, v_a_2047_);
v___x_2052_ = v_reuseFailAlloc_2053_;
goto v_reusejp_2051_;
}
v_reusejp_2051_:
{
return v___x_2052_;
}
}
}
}
}
else
{
lean_dec(v___x_2016_);
if (v_useAfter_1991_ == 0)
{
lean_object* v_type_2056_; lean_object* v_val_x3f_2057_; lean_object* v_isInstance_x3f_2058_; lean_object* v_isType_x3f_2059_; lean_object* v_isInserted_x3f_2060_; lean_object* v___x_2062_; uint8_t v_isShared_2063_; uint8_t v_isSharedCheck_2074_; 
v_type_2056_ = lean_ctor_get(v_h_u2081_1992_, 2);
v_val_x3f_2057_ = lean_ctor_get(v_h_u2081_1992_, 3);
v_isInstance_x3f_2058_ = lean_ctor_get(v_h_u2081_1992_, 4);
v_isType_x3f_2059_ = lean_ctor_get(v_h_u2081_1992_, 5);
v_isInserted_x3f_2060_ = lean_ctor_get(v_h_u2081_1992_, 6);
v_isSharedCheck_2074_ = !lean_is_exclusive(v_h_u2081_1992_);
if (v_isSharedCheck_2074_ == 0)
{
lean_object* v_unused_2075_; lean_object* v_unused_2076_; lean_object* v_unused_2077_; 
v_unused_2075_ = lean_ctor_get(v_h_u2081_1992_, 7);
lean_dec(v_unused_2075_);
v_unused_2076_ = lean_ctor_get(v_h_u2081_1992_, 1);
lean_dec(v_unused_2076_);
v_unused_2077_ = lean_ctor_get(v_h_u2081_1992_, 0);
lean_dec(v_unused_2077_);
v___x_2062_ = v_h_u2081_1992_;
v_isShared_2063_ = v_isSharedCheck_2074_;
goto v_resetjp_2061_;
}
else
{
lean_inc(v_isInserted_x3f_2060_);
lean_inc(v_isType_x3f_2059_);
lean_inc(v_isInstance_x3f_2058_);
lean_inc(v_val_x3f_2057_);
lean_inc(v_type_2056_);
lean_dec(v_h_u2081_1992_);
v___x_2062_ = lean_box(0);
v_isShared_2063_ = v_isSharedCheck_2074_;
goto v_resetjp_2061_;
}
v_resetjp_2061_:
{
lean_object* v___x_2064_; lean_object* v___x_2065_; lean_object* v___x_2067_; 
v___x_2064_ = lean_box(v___x_2004_);
v___x_2065_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2065_, 0, v___x_2064_);
if (v_isShared_2063_ == 0)
{
lean_ctor_set(v___x_2062_, 7, v___x_2065_);
lean_ctor_set(v___x_2062_, 1, v___x_1994_);
lean_ctor_set(v___x_2062_, 0, v___x_1993_);
v___x_2067_ = v___x_2062_;
goto v_reusejp_2066_;
}
else
{
lean_object* v_reuseFailAlloc_2073_; 
v_reuseFailAlloc_2073_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_2073_, 0, v___x_1993_);
lean_ctor_set(v_reuseFailAlloc_2073_, 1, v___x_1994_);
lean_ctor_set(v_reuseFailAlloc_2073_, 2, v_type_2056_);
lean_ctor_set(v_reuseFailAlloc_2073_, 3, v_val_x3f_2057_);
lean_ctor_set(v_reuseFailAlloc_2073_, 4, v_isInstance_x3f_2058_);
lean_ctor_set(v_reuseFailAlloc_2073_, 5, v_isType_x3f_2059_);
lean_ctor_set(v_reuseFailAlloc_2073_, 6, v_isInserted_x3f_2060_);
lean_ctor_set(v_reuseFailAlloc_2073_, 7, v___x_2065_);
v___x_2067_ = v_reuseFailAlloc_2073_;
goto v_reusejp_2066_;
}
v_reusejp_2066_:
{
lean_object* v___x_2068_; lean_object* v___x_2070_; 
v___x_2068_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2068_, 0, v___x_2067_);
if (v_isShared_2011_ == 0)
{
lean_ctor_set(v___x_2010_, 1, v___x_2012_);
lean_ctor_set(v___x_2010_, 0, v___x_2068_);
v___x_2070_ = v___x_2010_;
goto v_reusejp_2069_;
}
else
{
lean_object* v_reuseFailAlloc_2072_; 
v_reuseFailAlloc_2072_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2072_, 0, v___x_2068_);
lean_ctor_set(v_reuseFailAlloc_2072_, 1, v___x_2012_);
v___x_2070_ = v_reuseFailAlloc_2072_;
goto v_reusejp_2069_;
}
v_reusejp_2069_:
{
lean_object* v___x_2071_; 
v___x_2071_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2071_, 0, v___x_2070_);
return v___x_2071_;
}
}
}
}
else
{
lean_object* v_type_2078_; lean_object* v_val_x3f_2079_; lean_object* v_isInstance_x3f_2080_; lean_object* v_isType_x3f_2081_; lean_object* v_isRemoved_x3f_2082_; lean_object* v___x_2084_; uint8_t v_isShared_2085_; uint8_t v_isSharedCheck_2096_; 
v_type_2078_ = lean_ctor_get(v_h_u2081_1992_, 2);
v_val_x3f_2079_ = lean_ctor_get(v_h_u2081_1992_, 3);
v_isInstance_x3f_2080_ = lean_ctor_get(v_h_u2081_1992_, 4);
v_isType_x3f_2081_ = lean_ctor_get(v_h_u2081_1992_, 5);
v_isRemoved_x3f_2082_ = lean_ctor_get(v_h_u2081_1992_, 7);
v_isSharedCheck_2096_ = !lean_is_exclusive(v_h_u2081_1992_);
if (v_isSharedCheck_2096_ == 0)
{
lean_object* v_unused_2097_; lean_object* v_unused_2098_; lean_object* v_unused_2099_; 
v_unused_2097_ = lean_ctor_get(v_h_u2081_1992_, 6);
lean_dec(v_unused_2097_);
v_unused_2098_ = lean_ctor_get(v_h_u2081_1992_, 1);
lean_dec(v_unused_2098_);
v_unused_2099_ = lean_ctor_get(v_h_u2081_1992_, 0);
lean_dec(v_unused_2099_);
v___x_2084_ = v_h_u2081_1992_;
v_isShared_2085_ = v_isSharedCheck_2096_;
goto v_resetjp_2083_;
}
else
{
lean_inc(v_isRemoved_x3f_2082_);
lean_inc(v_isType_x3f_2081_);
lean_inc(v_isInstance_x3f_2080_);
lean_inc(v_val_x3f_2079_);
lean_inc(v_type_2078_);
lean_dec(v_h_u2081_1992_);
v___x_2084_ = lean_box(0);
v_isShared_2085_ = v_isSharedCheck_2096_;
goto v_resetjp_2083_;
}
v_resetjp_2083_:
{
lean_object* v___x_2086_; lean_object* v___x_2087_; lean_object* v___x_2089_; 
v___x_2086_ = lean_box(v___x_2004_);
v___x_2087_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2087_, 0, v___x_2086_);
if (v_isShared_2085_ == 0)
{
lean_ctor_set(v___x_2084_, 6, v___x_2087_);
lean_ctor_set(v___x_2084_, 1, v___x_1994_);
lean_ctor_set(v___x_2084_, 0, v___x_1993_);
v___x_2089_ = v___x_2084_;
goto v_reusejp_2088_;
}
else
{
lean_object* v_reuseFailAlloc_2095_; 
v_reuseFailAlloc_2095_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_2095_, 0, v___x_1993_);
lean_ctor_set(v_reuseFailAlloc_2095_, 1, v___x_1994_);
lean_ctor_set(v_reuseFailAlloc_2095_, 2, v_type_2078_);
lean_ctor_set(v_reuseFailAlloc_2095_, 3, v_val_x3f_2079_);
lean_ctor_set(v_reuseFailAlloc_2095_, 4, v_isInstance_x3f_2080_);
lean_ctor_set(v_reuseFailAlloc_2095_, 5, v_isType_x3f_2081_);
lean_ctor_set(v_reuseFailAlloc_2095_, 6, v___x_2087_);
lean_ctor_set(v_reuseFailAlloc_2095_, 7, v_isRemoved_x3f_2082_);
v___x_2089_ = v_reuseFailAlloc_2095_;
goto v_reusejp_2088_;
}
v_reusejp_2088_:
{
lean_object* v___x_2090_; lean_object* v___x_2092_; 
v___x_2090_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2090_, 0, v___x_2089_);
if (v_isShared_2011_ == 0)
{
lean_ctor_set(v___x_2010_, 1, v___x_2012_);
lean_ctor_set(v___x_2010_, 0, v___x_2090_);
v___x_2092_ = v___x_2010_;
goto v_reusejp_2091_;
}
else
{
lean_object* v_reuseFailAlloc_2094_; 
v_reuseFailAlloc_2094_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2094_, 0, v___x_2090_);
lean_ctor_set(v_reuseFailAlloc_2094_, 1, v___x_2012_);
v___x_2092_ = v_reuseFailAlloc_2094_;
goto v_reusejp_2091_;
}
v_reusejp_2091_:
{
lean_object* v___x_2093_; 
v___x_2093_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2093_, 0, v___x_2092_);
return v___x_2093_;
}
}
}
}
}
}
else
{
lean_object* v___x_2100_; size_t v___x_2101_; size_t v___x_2102_; 
lean_del_object(v___x_2010_);
lean_dec(v_fst_2007_);
v___x_2100_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_spec__0___closed__0));
v___x_2101_ = ((size_t)1ULL);
v___x_2102_ = lean_usize_add(v_i_1997_, v___x_2101_);
v_i_1997_ = v___x_2102_;
v_b_1998_ = v___x_2100_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_spec__0___boxed(lean_object* v_ctx_u2080_2105_, lean_object* v_useAfter_2106_, lean_object* v_h_u2081_2107_, lean_object* v___x_2108_, lean_object* v___x_2109_, lean_object* v_as_2110_, lean_object* v_sz_2111_, lean_object* v_i_2112_, lean_object* v_b_2113_, lean_object* v___y_2114_, lean_object* v___y_2115_, lean_object* v___y_2116_, lean_object* v___y_2117_, lean_object* v___y_2118_){
_start:
{
uint8_t v_useAfter_boxed_2119_; size_t v_sz_boxed_2120_; size_t v_i_boxed_2121_; lean_object* v_res_2122_; 
v_useAfter_boxed_2119_ = lean_unbox(v_useAfter_2106_);
v_sz_boxed_2120_ = lean_unbox_usize(v_sz_2111_);
lean_dec(v_sz_2111_);
v_i_boxed_2121_ = lean_unbox_usize(v_i_2112_);
lean_dec(v_i_2112_);
v_res_2122_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_spec__0(v_ctx_u2080_2105_, v_useAfter_boxed_2119_, v_h_u2081_2107_, v___x_2108_, v___x_2109_, v_as_2110_, v_sz_boxed_2120_, v_i_boxed_2121_, v_b_2113_, v___y_2114_, v___y_2115_, v___y_2116_, v___y_2117_);
lean_dec(v___y_2117_);
lean_dec_ref(v___y_2116_);
lean_dec(v___y_2115_);
lean_dec_ref(v___y_2114_);
lean_dec_ref(v_as_2110_);
lean_dec_ref(v_ctx_u2080_2105_);
return v_res_2122_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle(uint8_t v_useAfter_2123_, lean_object* v_ctx_u2080_2124_, lean_object* v_h_u2081_2125_, lean_object* v___y_2126_, lean_object* v___y_2127_, lean_object* v___y_2128_, lean_object* v___y_2129_){
_start:
{
lean_object* v_names_2131_; lean_object* v_fvarIds_2132_; lean_object* v___x_2133_; lean_object* v___x_2134_; size_t v_sz_2135_; size_t v___x_2136_; lean_object* v___x_2137_; 
v_names_2131_ = lean_ctor_get(v_h_u2081_2125_, 0);
v_fvarIds_2132_ = lean_ctor_get(v_h_u2081_2125_, 1);
v___x_2133_ = l_Array_zip___redArg(v_names_2131_, v_fvarIds_2132_);
v___x_2134_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_spec__0___closed__0));
v_sz_2135_ = lean_array_size(v___x_2133_);
v___x_2136_ = ((size_t)0ULL);
lean_inc_ref(v_fvarIds_2132_);
lean_inc_ref(v_names_2131_);
lean_inc_ref(v_h_u2081_2125_);
v___x_2137_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_spec__0(v_ctx_u2080_2124_, v_useAfter_2123_, v_h_u2081_2125_, v_names_2131_, v_fvarIds_2132_, v___x_2133_, v_sz_2135_, v___x_2136_, v___x_2134_, v___y_2126_, v___y_2127_, v___y_2128_, v___y_2129_);
lean_dec_ref(v___x_2133_);
if (lean_obj_tag(v___x_2137_) == 0)
{
lean_object* v_a_2138_; lean_object* v___x_2140_; uint8_t v_isShared_2141_; uint8_t v_isSharedCheck_2150_; 
v_a_2138_ = lean_ctor_get(v___x_2137_, 0);
v_isSharedCheck_2150_ = !lean_is_exclusive(v___x_2137_);
if (v_isSharedCheck_2150_ == 0)
{
v___x_2140_ = v___x_2137_;
v_isShared_2141_ = v_isSharedCheck_2150_;
goto v_resetjp_2139_;
}
else
{
lean_inc(v_a_2138_);
lean_dec(v___x_2137_);
v___x_2140_ = lean_box(0);
v_isShared_2141_ = v_isSharedCheck_2150_;
goto v_resetjp_2139_;
}
v_resetjp_2139_:
{
lean_object* v_fst_2142_; 
v_fst_2142_ = lean_ctor_get(v_a_2138_, 0);
lean_inc(v_fst_2142_);
lean_dec(v_a_2138_);
if (lean_obj_tag(v_fst_2142_) == 0)
{
lean_object* v___x_2144_; 
if (v_isShared_2141_ == 0)
{
lean_ctor_set(v___x_2140_, 0, v_h_u2081_2125_);
v___x_2144_ = v___x_2140_;
goto v_reusejp_2143_;
}
else
{
lean_object* v_reuseFailAlloc_2145_; 
v_reuseFailAlloc_2145_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2145_, 0, v_h_u2081_2125_);
v___x_2144_ = v_reuseFailAlloc_2145_;
goto v_reusejp_2143_;
}
v_reusejp_2143_:
{
return v___x_2144_;
}
}
else
{
lean_object* v_val_2146_; lean_object* v___x_2148_; 
lean_dec_ref(v_h_u2081_2125_);
v_val_2146_ = lean_ctor_get(v_fst_2142_, 0);
lean_inc(v_val_2146_);
lean_dec_ref_known(v_fst_2142_, 1);
if (v_isShared_2141_ == 0)
{
lean_ctor_set(v___x_2140_, 0, v_val_2146_);
v___x_2148_ = v___x_2140_;
goto v_reusejp_2147_;
}
else
{
lean_object* v_reuseFailAlloc_2149_; 
v_reuseFailAlloc_2149_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2149_, 0, v_val_2146_);
v___x_2148_ = v_reuseFailAlloc_2149_;
goto v_reusejp_2147_;
}
v_reusejp_2147_:
{
return v___x_2148_;
}
}
}
}
else
{
lean_object* v_a_2151_; lean_object* v___x_2153_; uint8_t v_isShared_2154_; uint8_t v_isSharedCheck_2158_; 
lean_dec_ref(v_h_u2081_2125_);
v_a_2151_ = lean_ctor_get(v___x_2137_, 0);
v_isSharedCheck_2158_ = !lean_is_exclusive(v___x_2137_);
if (v_isSharedCheck_2158_ == 0)
{
v___x_2153_ = v___x_2137_;
v_isShared_2154_ = v_isSharedCheck_2158_;
goto v_resetjp_2152_;
}
else
{
lean_inc(v_a_2151_);
lean_dec(v___x_2137_);
v___x_2153_ = lean_box(0);
v_isShared_2154_ = v_isSharedCheck_2158_;
goto v_resetjp_2152_;
}
v_resetjp_2152_:
{
lean_object* v___x_2156_; 
if (v_isShared_2154_ == 0)
{
v___x_2156_ = v___x_2153_;
goto v_reusejp_2155_;
}
else
{
lean_object* v_reuseFailAlloc_2157_; 
v_reuseFailAlloc_2157_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2157_, 0, v_a_2151_);
v___x_2156_ = v_reuseFailAlloc_2157_;
goto v_reusejp_2155_;
}
v_reusejp_2155_:
{
return v___x_2156_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle___boxed(lean_object* v_useAfter_2159_, lean_object* v_ctx_u2080_2160_, lean_object* v_h_u2081_2161_, lean_object* v___y_2162_, lean_object* v___y_2163_, lean_object* v___y_2164_, lean_object* v___y_2165_, lean_object* v___y_2166_){
_start:
{
uint8_t v_useAfter_boxed_2167_; lean_object* v_res_2168_; 
v_useAfter_boxed_2167_ = lean_unbox(v_useAfter_2159_);
v_res_2168_ = l___private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle(v_useAfter_boxed_2167_, v_ctx_u2080_2160_, v_h_u2081_2161_, v___y_2162_, v___y_2163_, v___y_2164_, v___y_2165_);
lean_dec(v___y_2165_);
lean_dec_ref(v___y_2164_);
lean_dec(v___y_2163_);
lean_dec_ref(v___y_2162_);
lean_dec_ref(v_ctx_u2080_2160_);
return v_res_2168_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypotheses_spec__0(uint8_t v_useAfter_2169_, lean_object* v_lctx_u2080_2170_, size_t v_sz_2171_, size_t v_i_2172_, lean_object* v_bs_2173_, lean_object* v___y_2174_, lean_object* v___y_2175_, lean_object* v___y_2176_, lean_object* v___y_2177_){
_start:
{
uint8_t v___x_2179_; 
v___x_2179_ = lean_usize_dec_lt(v_i_2172_, v_sz_2171_);
if (v___x_2179_ == 0)
{
lean_object* v___x_2180_; 
v___x_2180_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2180_, 0, v_bs_2173_);
return v___x_2180_;
}
else
{
lean_object* v_v_2181_; lean_object* v___x_2182_; lean_object* v_bs_x27_2183_; lean_object* v___x_2184_; 
v_v_2181_ = lean_array_uget(v_bs_2173_, v_i_2172_);
v___x_2182_ = lean_unsigned_to_nat(0u);
v_bs_x27_2183_ = lean_array_uset(v_bs_2173_, v_i_2172_, v___x_2182_);
v___x_2184_ = l___private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle(v_useAfter_2169_, v_lctx_u2080_2170_, v_v_2181_, v___y_2174_, v___y_2175_, v___y_2176_, v___y_2177_);
if (lean_obj_tag(v___x_2184_) == 0)
{
lean_object* v_a_2185_; size_t v___x_2186_; size_t v___x_2187_; lean_object* v___x_2188_; 
v_a_2185_ = lean_ctor_get(v___x_2184_, 0);
lean_inc(v_a_2185_);
lean_dec_ref_known(v___x_2184_, 1);
v___x_2186_ = ((size_t)1ULL);
v___x_2187_ = lean_usize_add(v_i_2172_, v___x_2186_);
v___x_2188_ = lean_array_uset(v_bs_x27_2183_, v_i_2172_, v_a_2185_);
v_i_2172_ = v___x_2187_;
v_bs_2173_ = v___x_2188_;
goto _start;
}
else
{
lean_object* v_a_2190_; lean_object* v___x_2192_; uint8_t v_isShared_2193_; uint8_t v_isSharedCheck_2197_; 
lean_dec_ref(v_bs_x27_2183_);
v_a_2190_ = lean_ctor_get(v___x_2184_, 0);
v_isSharedCheck_2197_ = !lean_is_exclusive(v___x_2184_);
if (v_isSharedCheck_2197_ == 0)
{
v___x_2192_ = v___x_2184_;
v_isShared_2193_ = v_isSharedCheck_2197_;
goto v_resetjp_2191_;
}
else
{
lean_inc(v_a_2190_);
lean_dec(v___x_2184_);
v___x_2192_ = lean_box(0);
v_isShared_2193_ = v_isSharedCheck_2197_;
goto v_resetjp_2191_;
}
v_resetjp_2191_:
{
lean_object* v___x_2195_; 
if (v_isShared_2193_ == 0)
{
v___x_2195_ = v___x_2192_;
goto v_reusejp_2194_;
}
else
{
lean_object* v_reuseFailAlloc_2196_; 
v_reuseFailAlloc_2196_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2196_, 0, v_a_2190_);
v___x_2195_ = v_reuseFailAlloc_2196_;
goto v_reusejp_2194_;
}
v_reusejp_2194_:
{
return v___x_2195_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypotheses_spec__0___boxed(lean_object* v_useAfter_2198_, lean_object* v_lctx_u2080_2199_, lean_object* v_sz_2200_, lean_object* v_i_2201_, lean_object* v_bs_2202_, lean_object* v___y_2203_, lean_object* v___y_2204_, lean_object* v___y_2205_, lean_object* v___y_2206_, lean_object* v___y_2207_){
_start:
{
uint8_t v_useAfter_boxed_2208_; size_t v_sz_boxed_2209_; size_t v_i_boxed_2210_; lean_object* v_res_2211_; 
v_useAfter_boxed_2208_ = lean_unbox(v_useAfter_2198_);
v_sz_boxed_2209_ = lean_unbox_usize(v_sz_2200_);
lean_dec(v_sz_2200_);
v_i_boxed_2210_ = lean_unbox_usize(v_i_2201_);
lean_dec(v_i_2201_);
v_res_2211_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypotheses_spec__0(v_useAfter_boxed_2208_, v_lctx_u2080_2199_, v_sz_boxed_2209_, v_i_boxed_2210_, v_bs_2202_, v___y_2203_, v___y_2204_, v___y_2205_, v___y_2206_);
lean_dec(v___y_2206_);
lean_dec_ref(v___y_2205_);
lean_dec(v___y_2204_);
lean_dec_ref(v___y_2203_);
lean_dec_ref(v_lctx_u2080_2199_);
return v_res_2211_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_diffHypotheses(uint8_t v_useAfter_2212_, lean_object* v_lctx_u2080_2213_, lean_object* v_hs_u2081_2214_, lean_object* v___y_2215_, lean_object* v___y_2216_, lean_object* v___y_2217_, lean_object* v___y_2218_){
_start:
{
size_t v_sz_2220_; size_t v___x_2221_; lean_object* v___x_2222_; 
v_sz_2220_ = lean_array_size(v_hs_u2081_2214_);
v___x_2221_ = ((size_t)0ULL);
v___x_2222_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypotheses_spec__0(v_useAfter_2212_, v_lctx_u2080_2213_, v_sz_2220_, v___x_2221_, v_hs_u2081_2214_, v___y_2215_, v___y_2216_, v___y_2217_, v___y_2218_);
return v___x_2222_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_diffHypotheses___boxed(lean_object* v_useAfter_2223_, lean_object* v_lctx_u2080_2224_, lean_object* v_hs_u2081_2225_, lean_object* v___y_2226_, lean_object* v___y_2227_, lean_object* v___y_2228_, lean_object* v___y_2229_, lean_object* v___y_2230_){
_start:
{
uint8_t v_useAfter_boxed_2231_; lean_object* v_res_2232_; 
v_useAfter_boxed_2231_ = lean_unbox(v_useAfter_2223_);
v_res_2232_ = l___private_Lean_Widget_Diff_0__Lean_Widget_diffHypotheses(v_useAfter_boxed_2231_, v_lctx_u2080_2224_, v_hs_u2081_2225_, v___y_2226_, v___y_2227_, v___y_2228_, v___y_2229_);
lean_dec(v___y_2229_);
lean_dec_ref(v___y_2228_);
lean_dec(v___y_2227_);
lean_dec_ref(v___y_2226_);
lean_dec_ref(v_lctx_u2080_2224_);
return v_res_2232_;
}
}
static lean_object* _init_l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__2(void){
_start:
{
lean_object* v___x_2237_; lean_object* v___x_2238_; 
v___x_2237_ = ((lean_object*)(l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__1));
v___x_2238_ = l_Lean_stringToMessageData(v___x_2237_);
return v___x_2238_;
}
}
static lean_object* _init_l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__4(void){
_start:
{
lean_object* v___x_2240_; lean_object* v___x_2241_; 
v___x_2240_ = ((lean_object*)(l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__3));
v___x_2241_ = l_Lean_stringToMessageData(v___x_2240_);
return v___x_2241_;
}
}
static lean_object* _init_l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__6(void){
_start:
{
lean_object* v___x_2243_; lean_object* v___x_2244_; 
v___x_2243_ = ((lean_object*)(l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__5));
v___x_2244_ = l_Lean_stringToMessageData(v___x_2243_);
return v___x_2244_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal(uint8_t v_useAfter_2245_, lean_object* v_g_u2080_2246_, lean_object* v_i_u2081_2247_, lean_object* v___y_2248_, lean_object* v___y_2249_, lean_object* v___y_2250_, lean_object* v___y_2251_){
_start:
{
lean_object* v___x_2253_; lean_object* v_mctx_2254_; lean_object* v___x_2255_; 
v___x_2253_ = lean_st_ref_get(v___y_2249_);
v_mctx_2254_ = lean_ctor_get(v___x_2253_, 0);
lean_inc_ref(v_mctx_2254_);
lean_dec(v___x_2253_);
v___x_2255_ = l_Lean_MetavarContext_findDecl_x3f(v_mctx_2254_, v_g_u2080_2246_);
lean_dec_ref(v_mctx_2254_);
if (lean_obj_tag(v___x_2255_) == 1)
{
lean_object* v_toCold_2256_; lean_object* v_val_2257_; lean_object* v_options_2258_; lean_object* v_lctx_2259_; lean_object* v___x_2260_; lean_object* v___x_2261_; lean_object* v___x_2262_; lean_object* v_toInteractiveGoalCore_2263_; lean_object* v_fst_2264_; lean_object* v___x_2266_; uint8_t v_isShared_2267_; uint8_t v_isSharedCheck_2361_; 
v_toCold_2256_ = lean_ctor_get(v___y_2250_, 0);
v_val_2257_ = lean_ctor_get(v___x_2255_, 0);
lean_inc(v_val_2257_);
lean_dec_ref_known(v___x_2255_, 1);
v_options_2258_ = lean_ctor_get(v_toCold_2256_, 2);
v_lctx_2259_ = lean_ctor_get(v_val_2257_, 1);
lean_inc_ref(v_lctx_2259_);
lean_dec(v_val_2257_);
v___x_2260_ = lean_box(1);
lean_inc_ref(v_options_2258_);
v___x_2261_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2261_, 0, v_options_2258_);
lean_ctor_set(v___x_2261_, 1, v___x_2260_);
lean_ctor_set(v___x_2261_, 2, v___x_2260_);
v___x_2262_ = l_Lean_LocalContext_sanitizeNames(v_lctx_2259_, v___x_2261_);
v_toInteractiveGoalCore_2263_ = lean_ctor_get(v_i_u2081_2247_, 0);
lean_inc_ref(v_toInteractiveGoalCore_2263_);
v_fst_2264_ = lean_ctor_get(v___x_2262_, 0);
v_isSharedCheck_2361_ = !lean_is_exclusive(v___x_2262_);
if (v_isSharedCheck_2361_ == 0)
{
lean_object* v_unused_2362_; 
v_unused_2362_ = lean_ctor_get(v___x_2262_, 1);
lean_dec(v_unused_2362_);
v___x_2266_ = v___x_2262_;
v_isShared_2267_ = v_isSharedCheck_2361_;
goto v_resetjp_2265_;
}
else
{
lean_inc(v_fst_2264_);
lean_dec(v___x_2262_);
v___x_2266_ = lean_box(0);
v_isShared_2267_ = v_isSharedCheck_2361_;
goto v_resetjp_2265_;
}
v_resetjp_2265_:
{
lean_object* v_userName_x3f_2268_; lean_object* v_goalPrefix_2269_; lean_object* v_mvarId_2270_; lean_object* v_isRemoved_x3f_2271_; lean_object* v___x_2273_; uint8_t v_isShared_2274_; uint8_t v_isSharedCheck_2358_; 
v_userName_x3f_2268_ = lean_ctor_get(v_i_u2081_2247_, 1);
v_goalPrefix_2269_ = lean_ctor_get(v_i_u2081_2247_, 2);
v_mvarId_2270_ = lean_ctor_get(v_i_u2081_2247_, 3);
v_isRemoved_x3f_2271_ = lean_ctor_get(v_i_u2081_2247_, 5);
v_isSharedCheck_2358_ = !lean_is_exclusive(v_i_u2081_2247_);
if (v_isSharedCheck_2358_ == 0)
{
lean_object* v_unused_2359_; lean_object* v_unused_2360_; 
v_unused_2359_ = lean_ctor_get(v_i_u2081_2247_, 4);
lean_dec(v_unused_2359_);
v_unused_2360_ = lean_ctor_get(v_i_u2081_2247_, 0);
lean_dec(v_unused_2360_);
v___x_2273_ = v_i_u2081_2247_;
v_isShared_2274_ = v_isSharedCheck_2358_;
goto v_resetjp_2272_;
}
else
{
lean_inc(v_isRemoved_x3f_2271_);
lean_inc(v_mvarId_2270_);
lean_inc(v_goalPrefix_2269_);
lean_inc(v_userName_x3f_2268_);
lean_dec(v_i_u2081_2247_);
v___x_2273_ = lean_box(0);
v_isShared_2274_ = v_isSharedCheck_2358_;
goto v_resetjp_2272_;
}
v_resetjp_2272_:
{
lean_object* v_hyps_2275_; lean_object* v_type_2276_; lean_object* v_ctx_2277_; lean_object* v___x_2279_; uint8_t v_isShared_2280_; uint8_t v_isSharedCheck_2357_; 
v_hyps_2275_ = lean_ctor_get(v_toInteractiveGoalCore_2263_, 0);
v_type_2276_ = lean_ctor_get(v_toInteractiveGoalCore_2263_, 1);
v_ctx_2277_ = lean_ctor_get(v_toInteractiveGoalCore_2263_, 2);
v_isSharedCheck_2357_ = !lean_is_exclusive(v_toInteractiveGoalCore_2263_);
if (v_isSharedCheck_2357_ == 0)
{
v___x_2279_ = v_toInteractiveGoalCore_2263_;
v_isShared_2280_ = v_isSharedCheck_2357_;
goto v_resetjp_2278_;
}
else
{
lean_inc(v_ctx_2277_);
lean_inc(v_type_2276_);
lean_inc(v_hyps_2275_);
lean_dec(v_toInteractiveGoalCore_2263_);
v___x_2279_ = lean_box(0);
v_isShared_2280_ = v_isSharedCheck_2357_;
goto v_resetjp_2278_;
}
v_resetjp_2278_:
{
lean_object* v___x_2281_; 
v___x_2281_ = l___private_Lean_Widget_Diff_0__Lean_Widget_diffHypotheses(v_useAfter_2245_, v_fst_2264_, v_hyps_2275_, v___y_2248_, v___y_2249_, v___y_2250_, v___y_2251_);
lean_dec(v_fst_2264_);
if (lean_obj_tag(v___x_2281_) == 0)
{
lean_object* v_a_2282_; lean_object* v___x_2283_; lean_object* v___x_2284_; 
v_a_2282_ = lean_ctor_get(v___x_2281_, 0);
lean_inc(v_a_2282_);
lean_dec_ref_known(v___x_2281_, 1);
v___x_2283_ = l_Lean_Expr_mvar___override(v_g_u2080_2246_);
lean_inc(v___y_2251_);
lean_inc_ref(v___y_2250_);
lean_inc(v___y_2249_);
lean_inc_ref(v___y_2248_);
v___x_2284_ = lean_infer_type(v___x_2283_, v___y_2248_, v___y_2249_, v___y_2250_, v___y_2251_);
if (lean_obj_tag(v___x_2284_) == 0)
{
lean_object* v_a_2285_; lean_object* v___x_2286_; lean_object* v_a_2287_; lean_object* v___x_2289_; uint8_t v_isShared_2290_; uint8_t v_isSharedCheck_2340_; 
v_a_2285_ = lean_ctor_get(v___x_2284_, 0);
lean_inc(v_a_2285_);
lean_dec_ref_known(v___x_2284_, 1);
v___x_2286_ = l_Lean_instantiateMVars___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff_spec__0___redArg(v_a_2285_, v___y_2249_);
v_a_2287_ = lean_ctor_get(v___x_2286_, 0);
v_isSharedCheck_2340_ = !lean_is_exclusive(v___x_2286_);
if (v_isSharedCheck_2340_ == 0)
{
v___x_2289_ = v___x_2286_;
v_isShared_2290_ = v_isSharedCheck_2340_;
goto v_resetjp_2288_;
}
else
{
lean_inc(v_a_2287_);
lean_dec(v___x_2286_);
v___x_2289_ = lean_box(0);
v_isShared_2290_ = v_isSharedCheck_2340_;
goto v_resetjp_2288_;
}
v_resetjp_2288_:
{
lean_object* v___x_2291_; lean_object* v_mctx_2292_; lean_object* v___x_2293_; 
v___x_2291_ = lean_st_ref_get(v___y_2249_);
v_mctx_2292_ = lean_ctor_get(v___x_2291_, 0);
lean_inc_ref(v_mctx_2292_);
lean_dec(v___x_2291_);
v___x_2293_ = l_Lean_MetavarContext_findDecl_x3f(v_mctx_2292_, v_mvarId_2270_);
lean_dec_ref(v_mctx_2292_);
if (lean_obj_tag(v___x_2293_) == 1)
{
lean_object* v_val_2294_; lean_object* v_type_2295_; lean_object* v___x_2296_; lean_object* v_a_2297_; lean_object* v___x_2298_; 
lean_del_object(v___x_2289_);
lean_del_object(v___x_2266_);
v_val_2294_ = lean_ctor_get(v___x_2293_, 0);
lean_inc(v_val_2294_);
lean_dec_ref_known(v___x_2293_, 1);
v_type_2295_ = lean_ctor_get(v_val_2294_, 2);
lean_inc_ref(v_type_2295_);
lean_dec(v_val_2294_);
v___x_2296_ = l_Lean_instantiateMVars___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff_spec__0___redArg(v_type_2295_, v___y_2249_);
v_a_2297_ = lean_ctor_get(v___x_2296_, 0);
lean_inc(v_a_2297_);
lean_dec_ref(v___x_2296_);
v___x_2298_ = l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiff(v_a_2287_, v_a_2297_, v_useAfter_2245_, v___y_2248_, v___y_2249_, v___y_2250_, v___y_2251_);
if (lean_obj_tag(v___x_2298_) == 0)
{
lean_object* v_a_2299_; lean_object* v___x_2300_; 
v_a_2299_ = lean_ctor_get(v___x_2298_, 0);
lean_inc(v_a_2299_);
lean_dec_ref_known(v___x_2298_, 1);
v___x_2300_ = l___private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags(v_useAfter_2245_, v_a_2299_, v_type_2276_, v___y_2248_, v___y_2249_, v___y_2250_, v___y_2251_);
if (lean_obj_tag(v___x_2300_) == 0)
{
lean_object* v_a_2301_; lean_object* v___x_2303_; uint8_t v_isShared_2304_; uint8_t v_isSharedCheck_2315_; 
v_a_2301_ = lean_ctor_get(v___x_2300_, 0);
v_isSharedCheck_2315_ = !lean_is_exclusive(v___x_2300_);
if (v_isSharedCheck_2315_ == 0)
{
v___x_2303_ = v___x_2300_;
v_isShared_2304_ = v_isSharedCheck_2315_;
goto v_resetjp_2302_;
}
else
{
lean_inc(v_a_2301_);
lean_dec(v___x_2300_);
v___x_2303_ = lean_box(0);
v_isShared_2304_ = v_isSharedCheck_2315_;
goto v_resetjp_2302_;
}
v_resetjp_2302_:
{
lean_object* v___x_2306_; 
if (v_isShared_2280_ == 0)
{
lean_ctor_set(v___x_2279_, 1, v_a_2301_);
lean_ctor_set(v___x_2279_, 0, v_a_2282_);
v___x_2306_ = v___x_2279_;
goto v_reusejp_2305_;
}
else
{
lean_object* v_reuseFailAlloc_2314_; 
v_reuseFailAlloc_2314_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2314_, 0, v_a_2282_);
lean_ctor_set(v_reuseFailAlloc_2314_, 1, v_a_2301_);
lean_ctor_set(v_reuseFailAlloc_2314_, 2, v_ctx_2277_);
v___x_2306_ = v_reuseFailAlloc_2314_;
goto v_reusejp_2305_;
}
v_reusejp_2305_:
{
lean_object* v___x_2307_; lean_object* v___x_2309_; 
v___x_2307_ = ((lean_object*)(l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__0));
if (v_isShared_2274_ == 0)
{
lean_ctor_set(v___x_2273_, 4, v___x_2307_);
lean_ctor_set(v___x_2273_, 0, v___x_2306_);
v___x_2309_ = v___x_2273_;
goto v_reusejp_2308_;
}
else
{
lean_object* v_reuseFailAlloc_2313_; 
v_reuseFailAlloc_2313_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_2313_, 0, v___x_2306_);
lean_ctor_set(v_reuseFailAlloc_2313_, 1, v_userName_x3f_2268_);
lean_ctor_set(v_reuseFailAlloc_2313_, 2, v_goalPrefix_2269_);
lean_ctor_set(v_reuseFailAlloc_2313_, 3, v_mvarId_2270_);
lean_ctor_set(v_reuseFailAlloc_2313_, 4, v___x_2307_);
lean_ctor_set(v_reuseFailAlloc_2313_, 5, v_isRemoved_x3f_2271_);
v___x_2309_ = v_reuseFailAlloc_2313_;
goto v_reusejp_2308_;
}
v_reusejp_2308_:
{
lean_object* v___x_2311_; 
if (v_isShared_2304_ == 0)
{
lean_ctor_set(v___x_2303_, 0, v___x_2309_);
v___x_2311_ = v___x_2303_;
goto v_reusejp_2310_;
}
else
{
lean_object* v_reuseFailAlloc_2312_; 
v_reuseFailAlloc_2312_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2312_, 0, v___x_2309_);
v___x_2311_ = v_reuseFailAlloc_2312_;
goto v_reusejp_2310_;
}
v_reusejp_2310_:
{
return v___x_2311_;
}
}
}
}
}
else
{
lean_object* v_a_2316_; lean_object* v___x_2318_; uint8_t v_isShared_2319_; uint8_t v_isSharedCheck_2323_; 
lean_dec(v_a_2282_);
lean_del_object(v___x_2279_);
lean_dec_ref(v_ctx_2277_);
lean_del_object(v___x_2273_);
lean_dec(v_isRemoved_x3f_2271_);
lean_dec(v_mvarId_2270_);
lean_dec_ref(v_goalPrefix_2269_);
lean_dec(v_userName_x3f_2268_);
v_a_2316_ = lean_ctor_get(v___x_2300_, 0);
v_isSharedCheck_2323_ = !lean_is_exclusive(v___x_2300_);
if (v_isSharedCheck_2323_ == 0)
{
v___x_2318_ = v___x_2300_;
v_isShared_2319_ = v_isSharedCheck_2323_;
goto v_resetjp_2317_;
}
else
{
lean_inc(v_a_2316_);
lean_dec(v___x_2300_);
v___x_2318_ = lean_box(0);
v_isShared_2319_ = v_isSharedCheck_2323_;
goto v_resetjp_2317_;
}
v_resetjp_2317_:
{
lean_object* v___x_2321_; 
if (v_isShared_2319_ == 0)
{
v___x_2321_ = v___x_2318_;
goto v_reusejp_2320_;
}
else
{
lean_object* v_reuseFailAlloc_2322_; 
v_reuseFailAlloc_2322_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2322_, 0, v_a_2316_);
v___x_2321_ = v_reuseFailAlloc_2322_;
goto v_reusejp_2320_;
}
v_reusejp_2320_:
{
return v___x_2321_;
}
}
}
}
else
{
lean_object* v_a_2324_; lean_object* v___x_2326_; uint8_t v_isShared_2327_; uint8_t v_isSharedCheck_2331_; 
lean_dec(v_a_2282_);
lean_del_object(v___x_2279_);
lean_dec_ref(v_ctx_2277_);
lean_dec_ref(v_type_2276_);
lean_del_object(v___x_2273_);
lean_dec(v_isRemoved_x3f_2271_);
lean_dec(v_mvarId_2270_);
lean_dec_ref(v_goalPrefix_2269_);
lean_dec(v_userName_x3f_2268_);
v_a_2324_ = lean_ctor_get(v___x_2298_, 0);
v_isSharedCheck_2331_ = !lean_is_exclusive(v___x_2298_);
if (v_isSharedCheck_2331_ == 0)
{
v___x_2326_ = v___x_2298_;
v_isShared_2327_ = v_isSharedCheck_2331_;
goto v_resetjp_2325_;
}
else
{
lean_inc(v_a_2324_);
lean_dec(v___x_2298_);
v___x_2326_ = lean_box(0);
v_isShared_2327_ = v_isSharedCheck_2331_;
goto v_resetjp_2325_;
}
v_resetjp_2325_:
{
lean_object* v___x_2329_; 
if (v_isShared_2327_ == 0)
{
v___x_2329_ = v___x_2326_;
goto v_reusejp_2328_;
}
else
{
lean_object* v_reuseFailAlloc_2330_; 
v_reuseFailAlloc_2330_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2330_, 0, v_a_2324_);
v___x_2329_ = v_reuseFailAlloc_2330_;
goto v_reusejp_2328_;
}
v_reusejp_2328_:
{
return v___x_2329_;
}
}
}
}
else
{
lean_object* v___x_2332_; lean_object* v___x_2334_; 
lean_dec(v___x_2293_);
lean_dec(v_a_2287_);
lean_dec(v_a_2282_);
lean_del_object(v___x_2279_);
lean_dec_ref(v_ctx_2277_);
lean_dec_ref(v_type_2276_);
lean_del_object(v___x_2273_);
lean_dec(v_isRemoved_x3f_2271_);
lean_dec_ref(v_goalPrefix_2269_);
lean_dec(v_userName_x3f_2268_);
v___x_2332_ = lean_obj_once(&l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__2, &l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__2_once, _init_l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__2);
if (v_isShared_2290_ == 0)
{
lean_ctor_set_tag(v___x_2289_, 1);
lean_ctor_set(v___x_2289_, 0, v_mvarId_2270_);
v___x_2334_ = v___x_2289_;
goto v_reusejp_2333_;
}
else
{
lean_object* v_reuseFailAlloc_2339_; 
v_reuseFailAlloc_2339_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2339_, 0, v_mvarId_2270_);
v___x_2334_ = v_reuseFailAlloc_2339_;
goto v_reusejp_2333_;
}
v_reusejp_2333_:
{
lean_object* v___x_2336_; 
if (v_isShared_2267_ == 0)
{
lean_ctor_set_tag(v___x_2266_, 7);
lean_ctor_set(v___x_2266_, 1, v___x_2334_);
lean_ctor_set(v___x_2266_, 0, v___x_2332_);
v___x_2336_ = v___x_2266_;
goto v_reusejp_2335_;
}
else
{
lean_object* v_reuseFailAlloc_2338_; 
v_reuseFailAlloc_2338_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2338_, 0, v___x_2332_);
lean_ctor_set(v_reuseFailAlloc_2338_, 1, v___x_2334_);
v___x_2336_ = v_reuseFailAlloc_2338_;
goto v_reusejp_2335_;
}
v_reusejp_2335_:
{
lean_object* v___x_2337_; 
v___x_2337_ = l_Lean_throwError___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__3___redArg(v___x_2336_, v___y_2248_, v___y_2249_, v___y_2250_, v___y_2251_);
return v___x_2337_;
}
}
}
}
}
else
{
lean_object* v_a_2341_; lean_object* v___x_2343_; uint8_t v_isShared_2344_; uint8_t v_isSharedCheck_2348_; 
lean_dec(v_a_2282_);
lean_del_object(v___x_2279_);
lean_dec_ref(v_ctx_2277_);
lean_dec_ref(v_type_2276_);
lean_del_object(v___x_2273_);
lean_dec(v_isRemoved_x3f_2271_);
lean_dec(v_mvarId_2270_);
lean_dec_ref(v_goalPrefix_2269_);
lean_dec(v_userName_x3f_2268_);
lean_del_object(v___x_2266_);
v_a_2341_ = lean_ctor_get(v___x_2284_, 0);
v_isSharedCheck_2348_ = !lean_is_exclusive(v___x_2284_);
if (v_isSharedCheck_2348_ == 0)
{
v___x_2343_ = v___x_2284_;
v_isShared_2344_ = v_isSharedCheck_2348_;
goto v_resetjp_2342_;
}
else
{
lean_inc(v_a_2341_);
lean_dec(v___x_2284_);
v___x_2343_ = lean_box(0);
v_isShared_2344_ = v_isSharedCheck_2348_;
goto v_resetjp_2342_;
}
v_resetjp_2342_:
{
lean_object* v___x_2346_; 
if (v_isShared_2344_ == 0)
{
v___x_2346_ = v___x_2343_;
goto v_reusejp_2345_;
}
else
{
lean_object* v_reuseFailAlloc_2347_; 
v_reuseFailAlloc_2347_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2347_, 0, v_a_2341_);
v___x_2346_ = v_reuseFailAlloc_2347_;
goto v_reusejp_2345_;
}
v_reusejp_2345_:
{
return v___x_2346_;
}
}
}
}
else
{
lean_object* v_a_2349_; lean_object* v___x_2351_; uint8_t v_isShared_2352_; uint8_t v_isSharedCheck_2356_; 
lean_del_object(v___x_2279_);
lean_dec_ref(v_ctx_2277_);
lean_dec_ref(v_type_2276_);
lean_del_object(v___x_2273_);
lean_dec(v_isRemoved_x3f_2271_);
lean_dec(v_mvarId_2270_);
lean_dec_ref(v_goalPrefix_2269_);
lean_dec(v_userName_x3f_2268_);
lean_del_object(v___x_2266_);
lean_dec(v_g_u2080_2246_);
v_a_2349_ = lean_ctor_get(v___x_2281_, 0);
v_isSharedCheck_2356_ = !lean_is_exclusive(v___x_2281_);
if (v_isSharedCheck_2356_ == 0)
{
v___x_2351_ = v___x_2281_;
v_isShared_2352_ = v_isSharedCheck_2356_;
goto v_resetjp_2350_;
}
else
{
lean_inc(v_a_2349_);
lean_dec(v___x_2281_);
v___x_2351_ = lean_box(0);
v_isShared_2352_ = v_isSharedCheck_2356_;
goto v_resetjp_2350_;
}
v_resetjp_2350_:
{
lean_object* v___x_2354_; 
if (v_isShared_2352_ == 0)
{
v___x_2354_ = v___x_2351_;
goto v_reusejp_2353_;
}
else
{
lean_object* v_reuseFailAlloc_2355_; 
v_reuseFailAlloc_2355_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2355_, 0, v_a_2349_);
v___x_2354_ = v_reuseFailAlloc_2355_;
goto v_reusejp_2353_;
}
v_reusejp_2353_:
{
return v___x_2354_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_2363_; lean_object* v___x_2364_; lean_object* v___x_2365_; lean_object* v___x_2366_; lean_object* v___x_2367_; lean_object* v___x_2368_; 
lean_dec(v___x_2255_);
lean_dec_ref(v_i_u2081_2247_);
v___x_2363_ = lean_obj_once(&l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__4, &l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__4_once, _init_l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__4);
v___x_2364_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2364_, 0, v_g_u2080_2246_);
v___x_2365_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2365_, 0, v___x_2363_);
lean_ctor_set(v___x_2365_, 1, v___x_2364_);
v___x_2366_ = lean_obj_once(&l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__6, &l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__6_once, _init_l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__6);
v___x_2367_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2367_, 0, v___x_2365_);
lean_ctor_set(v___x_2367_, 1, v___x_2366_);
v___x_2368_ = l_Lean_throwError___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__3___redArg(v___x_2367_, v___y_2248_, v___y_2249_, v___y_2250_, v___y_2251_);
return v___x_2368_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___boxed(lean_object* v_useAfter_2369_, lean_object* v_g_u2080_2370_, lean_object* v_i_u2081_2371_, lean_object* v___y_2372_, lean_object* v___y_2373_, lean_object* v___y_2374_, lean_object* v___y_2375_, lean_object* v___y_2376_){
_start:
{
uint8_t v_useAfter_boxed_2377_; lean_object* v_res_2378_; 
v_useAfter_boxed_2377_ = lean_unbox(v_useAfter_2369_);
v_res_2378_ = l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal(v_useAfter_boxed_2377_, v_g_u2080_2370_, v_i_u2081_2371_, v___y_2372_, v___y_2373_, v___y_2374_, v___y_2375_);
lean_dec(v___y_2375_);
lean_dec_ref(v___y_2374_);
lean_dec(v___y_2373_);
lean_dec_ref(v___y_2372_);
return v_res_2378_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Widget_diffInteractiveGoals_spec__0(lean_object* v_opts_2379_, lean_object* v_opt_2380_){
_start:
{
lean_object* v_name_2381_; lean_object* v_defValue_2382_; lean_object* v_map_2383_; lean_object* v___x_2384_; 
v_name_2381_ = lean_ctor_get(v_opt_2380_, 0);
v_defValue_2382_ = lean_ctor_get(v_opt_2380_, 1);
v_map_2383_ = lean_ctor_get(v_opts_2379_, 0);
v___x_2384_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_2383_, v_name_2381_);
if (lean_obj_tag(v___x_2384_) == 0)
{
uint8_t v___x_2385_; 
v___x_2385_ = lean_unbox(v_defValue_2382_);
return v___x_2385_;
}
else
{
lean_object* v_val_2386_; 
v_val_2386_ = lean_ctor_get(v___x_2384_, 0);
lean_inc(v_val_2386_);
lean_dec_ref_known(v___x_2384_, 1);
if (lean_obj_tag(v_val_2386_) == 1)
{
uint8_t v_v_2387_; 
v_v_2387_ = lean_ctor_get_uint8(v_val_2386_, 0);
lean_dec_ref_known(v_val_2386_, 0);
return v_v_2387_;
}
else
{
uint8_t v___x_2388_; 
lean_dec(v_val_2386_);
v___x_2388_ = lean_unbox(v_defValue_2382_);
return v___x_2388_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Widget_diffInteractiveGoals_spec__0___boxed(lean_object* v_opts_2389_, lean_object* v_opt_2390_){
_start:
{
uint8_t v_res_2391_; lean_object* v_r_2392_; 
v_res_2391_ = l_Lean_Option_get___at___00Lean_Widget_diffInteractiveGoals_spec__0(v_opts_2389_, v_opt_2390_);
lean_dec_ref(v_opt_2390_);
lean_dec_ref(v_opts_2389_);
v_r_2392_ = lean_box(v_res_2391_);
return v_r_2392_;
}
}
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Widget_diffInteractiveGoals_spec__1(lean_object* v_x_2393_, lean_object* v_x_2394_, lean_object* v___y_2395_, lean_object* v___y_2396_, lean_object* v___y_2397_, lean_object* v___y_2398_){
_start:
{
if (lean_obj_tag(v_x_2394_) == 0)
{
lean_object* v___x_2400_; 
v___x_2400_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2400_, 0, v_x_2393_);
return v___x_2400_;
}
else
{
lean_object* v_head_2401_; lean_object* v_tail_2402_; lean_object* v___x_2403_; lean_object* v___x_2404_; 
v_head_2401_ = lean_ctor_get(v_x_2394_, 0);
lean_inc_n(v_head_2401_, 2);
v_tail_2402_ = lean_ctor_get(v_x_2394_, 1);
lean_inc(v_tail_2402_);
lean_dec_ref_known(v_x_2394_, 2);
v___x_2403_ = l_Lean_Expr_mvar___override(v_head_2401_);
v___x_2404_ = l_Lean_Meta_getMVars(v___x_2403_, v___y_2395_, v___y_2396_, v___y_2397_, v___y_2398_);
if (lean_obj_tag(v___x_2404_) == 0)
{
lean_object* v_a_2405_; lean_object* v___x_2406_; lean_object* v___x_2407_; 
v_a_2405_ = lean_ctor_get(v___x_2404_, 0);
lean_inc(v_a_2405_);
lean_dec_ref_known(v___x_2404_, 1);
v___x_2406_ = l_Lean_MVarIdSet_ofArray(v_a_2405_);
lean_dec(v_a_2405_);
v___x_2407_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_MVarIdSet_insert_spec__1___redArg(v_head_2401_, v___x_2406_, v_x_2393_);
v_x_2393_ = v___x_2407_;
v_x_2394_ = v_tail_2402_;
goto _start;
}
else
{
lean_object* v_a_2409_; lean_object* v___x_2411_; uint8_t v_isShared_2412_; uint8_t v_isSharedCheck_2416_; 
lean_dec(v_tail_2402_);
lean_dec(v_head_2401_);
lean_dec(v_x_2393_);
v_a_2409_ = lean_ctor_get(v___x_2404_, 0);
v_isSharedCheck_2416_ = !lean_is_exclusive(v___x_2404_);
if (v_isSharedCheck_2416_ == 0)
{
v___x_2411_ = v___x_2404_;
v_isShared_2412_ = v_isSharedCheck_2416_;
goto v_resetjp_2410_;
}
else
{
lean_inc(v_a_2409_);
lean_dec(v___x_2404_);
v___x_2411_ = lean_box(0);
v_isShared_2412_ = v_isSharedCheck_2416_;
goto v_resetjp_2410_;
}
v_resetjp_2410_:
{
lean_object* v___x_2414_; 
if (v_isShared_2412_ == 0)
{
v___x_2414_ = v___x_2411_;
goto v_reusejp_2413_;
}
else
{
lean_object* v_reuseFailAlloc_2415_; 
v_reuseFailAlloc_2415_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2415_, 0, v_a_2409_);
v___x_2414_ = v_reuseFailAlloc_2415_;
goto v_reusejp_2413_;
}
v_reusejp_2413_:
{
return v___x_2414_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Widget_diffInteractiveGoals_spec__1___boxed(lean_object* v_x_2417_, lean_object* v_x_2418_, lean_object* v___y_2419_, lean_object* v___y_2420_, lean_object* v___y_2421_, lean_object* v___y_2422_, lean_object* v___y_2423_){
_start:
{
lean_object* v_res_2424_; 
v_res_2424_ = l_List_foldlM___at___00Lean_Widget_diffInteractiveGoals_spec__1(v_x_2417_, v_x_2418_, v___y_2419_, v___y_2420_, v___y_2421_, v___y_2422_);
lean_dec(v___y_2422_);
lean_dec_ref(v___y_2421_);
lean_dec(v___y_2420_);
lean_dec_ref(v___y_2419_);
return v_res_2424_;
}
}
LEAN_EXPORT uint8_t l_List_find_x3f___at___00Lean_Widget_diffInteractiveGoals_spec__3___lam__0(lean_object* v_a_2425_, uint8_t v___x_2426_, lean_object* v_before_2427_, lean_object* v_after_2428_){
_start:
{
lean_object* v___x_2429_; 
v___x_2429_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_MVarIdMap_get_x3f_spec__0___redArg(v_a_2425_, v_before_2427_);
if (lean_obj_tag(v___x_2429_) == 0)
{
return v___x_2426_;
}
else
{
lean_object* v_val_2430_; uint8_t v___x_2431_; 
v_val_2430_ = lean_ctor_get(v___x_2429_, 0);
lean_inc(v_val_2430_);
lean_dec_ref_known(v___x_2429_, 1);
v___x_2431_ = l_Lean_MVarIdSet_contains(v_val_2430_, v_after_2428_);
lean_dec(v_val_2430_);
return v___x_2431_;
}
}
}
LEAN_EXPORT lean_object* l_List_find_x3f___at___00Lean_Widget_diffInteractiveGoals_spec__3___lam__0___boxed(lean_object* v_a_2432_, lean_object* v___x_2433_, lean_object* v_before_2434_, lean_object* v_after_2435_){
_start:
{
uint8_t v___x_3309__boxed_2436_; uint8_t v_res_2437_; lean_object* v_r_2438_; 
v___x_3309__boxed_2436_ = lean_unbox(v___x_2433_);
v_res_2437_ = l_List_find_x3f___at___00Lean_Widget_diffInteractiveGoals_spec__3___lam__0(v_a_2432_, v___x_3309__boxed_2436_, v_before_2434_, v_after_2435_);
lean_dec(v_after_2435_);
lean_dec(v_before_2434_);
lean_dec(v_a_2432_);
v_r_2438_ = lean_box(v_res_2437_);
return v_r_2438_;
}
}
LEAN_EXPORT lean_object* l_List_find_x3f___at___00Lean_Widget_diffInteractiveGoals_spec__3(uint8_t v_useAfter_2439_, lean_object* v_a_2440_, lean_object* v___x_2441_, lean_object* v_x_2442_){
_start:
{
if (lean_obj_tag(v_x_2442_) == 0)
{
lean_object* v___x_2443_; 
v___x_2443_ = lean_box(0);
return v___x_2443_;
}
else
{
lean_object* v_head_2444_; lean_object* v_tail_2445_; uint8_t v___y_2447_; uint8_t v___x_2450_; 
v_head_2444_ = lean_ctor_get(v_x_2442_, 0);
v_tail_2445_ = lean_ctor_get(v_x_2442_, 1);
v___x_2450_ = 0;
if (v_useAfter_2439_ == 0)
{
uint8_t v___x_2451_; 
v___x_2451_ = l_List_find_x3f___at___00Lean_Widget_diffInteractiveGoals_spec__3___lam__0(v_a_2440_, v___x_2450_, v___x_2441_, v_head_2444_);
v___y_2447_ = v___x_2451_;
goto v___jp_2446_;
}
else
{
uint8_t v___x_2452_; 
v___x_2452_ = l_List_find_x3f___at___00Lean_Widget_diffInteractiveGoals_spec__3___lam__0(v_a_2440_, v___x_2450_, v_head_2444_, v___x_2441_);
v___y_2447_ = v___x_2452_;
goto v___jp_2446_;
}
v___jp_2446_:
{
if (v___y_2447_ == 0)
{
v_x_2442_ = v_tail_2445_;
goto _start;
}
else
{
lean_object* v___x_2449_; 
lean_inc(v_head_2444_);
v___x_2449_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2449_, 0, v_head_2444_);
return v___x_2449_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_find_x3f___at___00Lean_Widget_diffInteractiveGoals_spec__3___boxed(lean_object* v_useAfter_2453_, lean_object* v_a_2454_, lean_object* v___x_2455_, lean_object* v_x_2456_){
_start:
{
uint8_t v_useAfter_boxed_2457_; lean_object* v_res_2458_; 
v_useAfter_boxed_2457_ = lean_unbox(v_useAfter_2453_);
v_res_2458_ = l_List_find_x3f___at___00Lean_Widget_diffInteractiveGoals_spec__3(v_useAfter_boxed_2457_, v_a_2454_, v___x_2455_, v_x_2456_);
lean_dec(v_x_2456_);
lean_dec(v___x_2455_);
lean_dec(v_a_2454_);
return v_res_2458_;
}
}
LEAN_EXPORT uint8_t l_List_any___at___00Lean_Widget_diffInteractiveGoals_spec__2(lean_object* v___x_2459_, lean_object* v_x_2460_){
_start:
{
if (lean_obj_tag(v_x_2460_) == 0)
{
uint8_t v___x_2461_; 
v___x_2461_ = 0;
return v___x_2461_;
}
else
{
lean_object* v_head_2462_; lean_object* v_tail_2463_; uint8_t v___x_2464_; 
v_head_2462_ = lean_ctor_get(v_x_2460_, 0);
v_tail_2463_ = lean_ctor_get(v_x_2460_, 1);
v___x_2464_ = l_Lean_instBEqMVarId_beq(v_head_2462_, v___x_2459_);
if (v___x_2464_ == 0)
{
v_x_2460_ = v_tail_2463_;
goto _start;
}
else
{
return v___x_2464_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_any___at___00Lean_Widget_diffInteractiveGoals_spec__2___boxed(lean_object* v___x_2466_, lean_object* v_x_2467_){
_start:
{
uint8_t v_res_2468_; lean_object* v_r_2469_; 
v_res_2468_ = l_List_any___at___00Lean_Widget_diffInteractiveGoals_spec__2(v___x_2466_, v_x_2467_);
lean_dec(v_x_2467_);
lean_dec(v___x_2466_);
v_r_2469_ = lean_box(v_res_2468_);
return v_r_2469_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_diffInteractiveGoals_spec__5___lam__0(lean_object* v_mvarId_2470_, lean_object* v___y_2471_, uint8_t v_useAfter_2472_, lean_object* v_a_2473_, lean_object* v_v_2474_, uint8_t v___x_2475_, lean_object* v_toInteractiveGoalCore_2476_, lean_object* v_userName_x3f_2477_, lean_object* v_goalPrefix_2478_, lean_object* v_isInserted_x3f_2479_, lean_object* v_isRemoved_x3f_2480_, lean_object* v___lctx_u2081_2481_, lean_object* v___md_u2081_2482_, lean_object* v___y_2483_, lean_object* v___y_2484_, lean_object* v___y_2485_, lean_object* v___y_2486_){
_start:
{
uint8_t v___x_2488_; 
v___x_2488_ = l_List_any___at___00Lean_Widget_diffInteractiveGoals_spec__2(v_mvarId_2470_, v___y_2471_);
if (v___x_2488_ == 0)
{
lean_object* v___x_2489_; 
v___x_2489_ = l_List_find_x3f___at___00Lean_Widget_diffInteractiveGoals_spec__3(v_useAfter_2472_, v_a_2473_, v_mvarId_2470_, v___y_2471_);
if (lean_obj_tag(v___x_2489_) == 1)
{
lean_object* v_val_2490_; lean_object* v___x_2491_; 
lean_dec(v_isRemoved_x3f_2480_);
lean_dec(v_isInserted_x3f_2479_);
lean_dec_ref(v_goalPrefix_2478_);
lean_dec(v_userName_x3f_2477_);
lean_dec_ref(v_toInteractiveGoalCore_2476_);
lean_dec(v_mvarId_2470_);
v_val_2490_ = lean_ctor_get(v___x_2489_, 0);
lean_inc(v_val_2490_);
lean_dec_ref_known(v___x_2489_, 1);
v___x_2491_ = l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal(v_useAfter_2472_, v_val_2490_, v_v_2474_, v___y_2483_, v___y_2484_, v___y_2485_, v___y_2486_);
return v___x_2491_;
}
else
{
lean_dec(v___x_2489_);
lean_dec(v_v_2474_);
if (v_useAfter_2472_ == 0)
{
lean_object* v___x_2492_; lean_object* v___x_2493_; lean_object* v___x_2494_; lean_object* v___x_2495_; 
lean_dec(v_isRemoved_x3f_2480_);
v___x_2492_ = lean_box(v___x_2475_);
v___x_2493_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2493_, 0, v___x_2492_);
v___x_2494_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_2494_, 0, v_toInteractiveGoalCore_2476_);
lean_ctor_set(v___x_2494_, 1, v_userName_x3f_2477_);
lean_ctor_set(v___x_2494_, 2, v_goalPrefix_2478_);
lean_ctor_set(v___x_2494_, 3, v_mvarId_2470_);
lean_ctor_set(v___x_2494_, 4, v_isInserted_x3f_2479_);
lean_ctor_set(v___x_2494_, 5, v___x_2493_);
v___x_2495_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2495_, 0, v___x_2494_);
return v___x_2495_;
}
else
{
lean_object* v___x_2496_; lean_object* v___x_2497_; lean_object* v___x_2498_; lean_object* v___x_2499_; 
lean_dec(v_isInserted_x3f_2479_);
v___x_2496_ = lean_box(v___x_2475_);
v___x_2497_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2497_, 0, v___x_2496_);
v___x_2498_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_2498_, 0, v_toInteractiveGoalCore_2476_);
lean_ctor_set(v___x_2498_, 1, v_userName_x3f_2477_);
lean_ctor_set(v___x_2498_, 2, v_goalPrefix_2478_);
lean_ctor_set(v___x_2498_, 3, v_mvarId_2470_);
lean_ctor_set(v___x_2498_, 4, v___x_2497_);
lean_ctor_set(v___x_2498_, 5, v_isRemoved_x3f_2480_);
v___x_2499_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2499_, 0, v___x_2498_);
return v___x_2499_;
}
}
}
else
{
lean_object* v___x_2500_; lean_object* v___x_2501_; lean_object* v___x_2502_; 
lean_dec(v_isInserted_x3f_2479_);
lean_dec(v_v_2474_);
v___x_2500_ = lean_box(0);
v___x_2501_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_2501_, 0, v_toInteractiveGoalCore_2476_);
lean_ctor_set(v___x_2501_, 1, v_userName_x3f_2477_);
lean_ctor_set(v___x_2501_, 2, v_goalPrefix_2478_);
lean_ctor_set(v___x_2501_, 3, v_mvarId_2470_);
lean_ctor_set(v___x_2501_, 4, v___x_2500_);
lean_ctor_set(v___x_2501_, 5, v_isRemoved_x3f_2480_);
v___x_2502_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2502_, 0, v___x_2501_);
return v___x_2502_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_diffInteractiveGoals_spec__5___lam__0___boxed(lean_object** _args){
lean_object* v_mvarId_2503_ = _args[0];
lean_object* v___y_2504_ = _args[1];
lean_object* v_useAfter_2505_ = _args[2];
lean_object* v_a_2506_ = _args[3];
lean_object* v_v_2507_ = _args[4];
lean_object* v___x_2508_ = _args[5];
lean_object* v_toInteractiveGoalCore_2509_ = _args[6];
lean_object* v_userName_x3f_2510_ = _args[7];
lean_object* v_goalPrefix_2511_ = _args[8];
lean_object* v_isInserted_x3f_2512_ = _args[9];
lean_object* v_isRemoved_x3f_2513_ = _args[10];
lean_object* v___lctx_u2081_2514_ = _args[11];
lean_object* v___md_u2081_2515_ = _args[12];
lean_object* v___y_2516_ = _args[13];
lean_object* v___y_2517_ = _args[14];
lean_object* v___y_2518_ = _args[15];
lean_object* v___y_2519_ = _args[16];
lean_object* v___y_2520_ = _args[17];
_start:
{
uint8_t v_useAfter_boxed_2521_; uint8_t v___x_3367__boxed_2522_; lean_object* v_res_2523_; 
v_useAfter_boxed_2521_ = lean_unbox(v_useAfter_2505_);
v___x_3367__boxed_2522_ = lean_unbox(v___x_2508_);
v_res_2523_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_diffInteractiveGoals_spec__5___lam__0(v_mvarId_2503_, v___y_2504_, v_useAfter_boxed_2521_, v_a_2506_, v_v_2507_, v___x_3367__boxed_2522_, v_toInteractiveGoalCore_2509_, v_userName_x3f_2510_, v_goalPrefix_2511_, v_isInserted_x3f_2512_, v_isRemoved_x3f_2513_, v___lctx_u2081_2514_, v___md_u2081_2515_, v___y_2516_, v___y_2517_, v___y_2518_, v___y_2519_);
lean_dec(v___y_2519_);
lean_dec_ref(v___y_2518_);
lean_dec(v___y_2517_);
lean_dec_ref(v___y_2516_);
lean_dec_ref(v___md_u2081_2515_);
lean_dec_ref(v___lctx_u2081_2514_);
lean_dec(v_a_2506_);
lean_dec(v___y_2504_);
return v_res_2523_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__4_spec__4___redArg(lean_object* v_lctx_2524_, lean_object* v_localInsts_2525_, lean_object* v_x_2526_, lean_object* v___y_2527_, lean_object* v___y_2528_, lean_object* v___y_2529_, lean_object* v___y_2530_){
_start:
{
lean_object* v___x_2532_; 
v___x_2532_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalContextImp(lean_box(0), v_lctx_2524_, v_localInsts_2525_, v_x_2526_, v___y_2527_, v___y_2528_, v___y_2529_, v___y_2530_);
if (lean_obj_tag(v___x_2532_) == 0)
{
lean_object* v_a_2533_; lean_object* v___x_2535_; uint8_t v_isShared_2536_; uint8_t v_isSharedCheck_2540_; 
v_a_2533_ = lean_ctor_get(v___x_2532_, 0);
v_isSharedCheck_2540_ = !lean_is_exclusive(v___x_2532_);
if (v_isSharedCheck_2540_ == 0)
{
v___x_2535_ = v___x_2532_;
v_isShared_2536_ = v_isSharedCheck_2540_;
goto v_resetjp_2534_;
}
else
{
lean_inc(v_a_2533_);
lean_dec(v___x_2532_);
v___x_2535_ = lean_box(0);
v_isShared_2536_ = v_isSharedCheck_2540_;
goto v_resetjp_2534_;
}
v_resetjp_2534_:
{
lean_object* v___x_2538_; 
if (v_isShared_2536_ == 0)
{
v___x_2538_ = v___x_2535_;
goto v_reusejp_2537_;
}
else
{
lean_object* v_reuseFailAlloc_2539_; 
v_reuseFailAlloc_2539_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2539_, 0, v_a_2533_);
v___x_2538_ = v_reuseFailAlloc_2539_;
goto v_reusejp_2537_;
}
v_reusejp_2537_:
{
return v___x_2538_;
}
}
}
else
{
lean_object* v_a_2541_; lean_object* v___x_2543_; uint8_t v_isShared_2544_; uint8_t v_isSharedCheck_2548_; 
v_a_2541_ = lean_ctor_get(v___x_2532_, 0);
v_isSharedCheck_2548_ = !lean_is_exclusive(v___x_2532_);
if (v_isSharedCheck_2548_ == 0)
{
v___x_2543_ = v___x_2532_;
v_isShared_2544_ = v_isSharedCheck_2548_;
goto v_resetjp_2542_;
}
else
{
lean_inc(v_a_2541_);
lean_dec(v___x_2532_);
v___x_2543_ = lean_box(0);
v_isShared_2544_ = v_isSharedCheck_2548_;
goto v_resetjp_2542_;
}
v_resetjp_2542_:
{
lean_object* v___x_2546_; 
if (v_isShared_2544_ == 0)
{
v___x_2546_ = v___x_2543_;
goto v_reusejp_2545_;
}
else
{
lean_object* v_reuseFailAlloc_2547_; 
v_reuseFailAlloc_2547_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2547_, 0, v_a_2541_);
v___x_2546_ = v_reuseFailAlloc_2547_;
goto v_reusejp_2545_;
}
v_reusejp_2545_:
{
return v___x_2546_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__4_spec__4___redArg___boxed(lean_object* v_lctx_2549_, lean_object* v_localInsts_2550_, lean_object* v_x_2551_, lean_object* v___y_2552_, lean_object* v___y_2553_, lean_object* v___y_2554_, lean_object* v___y_2555_, lean_object* v___y_2556_){
_start:
{
lean_object* v_res_2557_; 
v_res_2557_ = l_Lean_Meta_withLCtx___at___00Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__4_spec__4___redArg(v_lctx_2549_, v_localInsts_2550_, v_x_2551_, v___y_2552_, v___y_2553_, v___y_2554_, v___y_2555_);
lean_dec(v___y_2555_);
lean_dec_ref(v___y_2554_);
lean_dec(v___y_2553_);
lean_dec_ref(v___y_2552_);
return v_res_2557_;
}
}
static lean_object* _init_l_Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__4___redArg___closed__1(void){
_start:
{
lean_object* v___x_2559_; lean_object* v___x_2560_; 
v___x_2559_ = ((lean_object*)(l_Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__4___redArg___closed__0));
v___x_2560_ = l_Lean_stringToMessageData(v___x_2559_);
return v___x_2560_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__4___redArg(lean_object* v_goal_2561_, lean_object* v_action_2562_, lean_object* v___y_2563_, lean_object* v___y_2564_, lean_object* v___y_2565_, lean_object* v___y_2566_){
_start:
{
lean_object* v___x_2568_; lean_object* v_mctx_2569_; lean_object* v___x_2570_; 
v___x_2568_ = lean_st_ref_get(v___y_2564_);
v_mctx_2569_ = lean_ctor_get(v___x_2568_, 0);
lean_inc_ref(v_mctx_2569_);
lean_dec(v___x_2568_);
v___x_2570_ = l_Lean_MetavarContext_findDecl_x3f(v_mctx_2569_, v_goal_2561_);
lean_dec_ref(v_mctx_2569_);
if (lean_obj_tag(v___x_2570_) == 1)
{
lean_object* v_toCold_2571_; lean_object* v_val_2572_; lean_object* v_options_2573_; lean_object* v_lctx_2574_; lean_object* v_localInstances_2575_; lean_object* v___x_2576_; lean_object* v___x_2577_; lean_object* v___x_2578_; lean_object* v_fst_2579_; lean_object* v___x_2580_; lean_object* v___x_2581_; 
lean_dec(v_goal_2561_);
v_toCold_2571_ = lean_ctor_get(v___y_2565_, 0);
v_val_2572_ = lean_ctor_get(v___x_2570_, 0);
lean_inc(v_val_2572_);
lean_dec_ref_known(v___x_2570_, 1);
v_options_2573_ = lean_ctor_get(v_toCold_2571_, 2);
v_lctx_2574_ = lean_ctor_get(v_val_2572_, 1);
v_localInstances_2575_ = lean_ctor_get(v_val_2572_, 4);
lean_inc_ref(v_localInstances_2575_);
v___x_2576_ = lean_box(1);
lean_inc_ref(v_options_2573_);
v___x_2577_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2577_, 0, v_options_2573_);
lean_ctor_set(v___x_2577_, 1, v___x_2576_);
lean_ctor_set(v___x_2577_, 2, v___x_2576_);
lean_inc_ref(v_lctx_2574_);
v___x_2578_ = l_Lean_LocalContext_sanitizeNames(v_lctx_2574_, v___x_2577_);
v_fst_2579_ = lean_ctor_get(v___x_2578_, 0);
lean_inc_n(v_fst_2579_, 2);
lean_dec_ref(v___x_2578_);
v___x_2580_ = lean_apply_2(v_action_2562_, v_fst_2579_, v_val_2572_);
v___x_2581_ = l_Lean_Meta_withLCtx___at___00Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__4_spec__4___redArg(v_fst_2579_, v_localInstances_2575_, v___x_2580_, v___y_2563_, v___y_2564_, v___y_2565_, v___y_2566_);
return v___x_2581_;
}
else
{
lean_object* v___x_2582_; lean_object* v___x_2583_; lean_object* v___x_2584_; lean_object* v___x_2585_; 
lean_dec(v___x_2570_);
lean_dec_ref(v_action_2562_);
v___x_2582_ = lean_obj_once(&l_Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__4___redArg___closed__1, &l_Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__4___redArg___closed__1_once, _init_l_Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__4___redArg___closed__1);
v___x_2583_ = l_Lean_MessageData_ofName(v_goal_2561_);
v___x_2584_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2584_, 0, v___x_2582_);
lean_ctor_set(v___x_2584_, 1, v___x_2583_);
v___x_2585_ = l_Lean_throwError___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__3___redArg(v___x_2584_, v___y_2563_, v___y_2564_, v___y_2565_, v___y_2566_);
return v___x_2585_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__4___redArg___boxed(lean_object* v_goal_2586_, lean_object* v_action_2587_, lean_object* v___y_2588_, lean_object* v___y_2589_, lean_object* v___y_2590_, lean_object* v___y_2591_, lean_object* v___y_2592_){
_start:
{
lean_object* v_res_2593_; 
v_res_2593_ = l_Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__4___redArg(v_goal_2586_, v_action_2587_, v___y_2588_, v___y_2589_, v___y_2590_, v___y_2591_);
lean_dec(v___y_2591_);
lean_dec_ref(v___y_2590_);
lean_dec(v___y_2589_);
lean_dec_ref(v___y_2588_);
return v_res_2593_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_diffInteractiveGoals_spec__5_spec__6(lean_object* v___y_2594_, uint8_t v_useAfter_2595_, lean_object* v_a_2596_, uint8_t v___x_2597_, size_t v_sz_2598_, size_t v_i_2599_, lean_object* v_bs_2600_, lean_object* v___y_2601_, lean_object* v___y_2602_, lean_object* v___y_2603_, lean_object* v___y_2604_){
_start:
{
uint8_t v___x_2606_; 
v___x_2606_ = lean_usize_dec_lt(v_i_2599_, v_sz_2598_);
if (v___x_2606_ == 0)
{
lean_object* v___x_2607_; 
lean_dec(v_a_2596_);
lean_dec(v___y_2594_);
v___x_2607_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2607_, 0, v_bs_2600_);
return v___x_2607_;
}
else
{
lean_object* v_v_2608_; lean_object* v_toInteractiveGoalCore_2609_; lean_object* v_userName_x3f_2610_; lean_object* v_goalPrefix_2611_; lean_object* v_mvarId_2612_; lean_object* v_isInserted_x3f_2613_; lean_object* v_isRemoved_x3f_2614_; lean_object* v___x_2615_; lean_object* v_bs_x27_2616_; lean_object* v___x_2617_; lean_object* v___x_2618_; lean_object* v___f_2619_; lean_object* v___x_2620_; 
v_v_2608_ = lean_array_uget(v_bs_2600_, v_i_2599_);
v_toInteractiveGoalCore_2609_ = lean_ctor_get(v_v_2608_, 0);
lean_inc_ref(v_toInteractiveGoalCore_2609_);
v_userName_x3f_2610_ = lean_ctor_get(v_v_2608_, 1);
lean_inc(v_userName_x3f_2610_);
v_goalPrefix_2611_ = lean_ctor_get(v_v_2608_, 2);
lean_inc_ref(v_goalPrefix_2611_);
v_mvarId_2612_ = lean_ctor_get(v_v_2608_, 3);
lean_inc_n(v_mvarId_2612_, 2);
v_isInserted_x3f_2613_ = lean_ctor_get(v_v_2608_, 4);
lean_inc(v_isInserted_x3f_2613_);
v_isRemoved_x3f_2614_ = lean_ctor_get(v_v_2608_, 5);
lean_inc(v_isRemoved_x3f_2614_);
v___x_2615_ = lean_unsigned_to_nat(0u);
v_bs_x27_2616_ = lean_array_uset(v_bs_2600_, v_i_2599_, v___x_2615_);
v___x_2617_ = lean_box(v_useAfter_2595_);
v___x_2618_ = lean_box(v___x_2597_);
lean_inc(v_a_2596_);
lean_inc(v___y_2594_);
v___f_2619_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_diffInteractiveGoals_spec__5___lam__0___boxed), 18, 11);
lean_closure_set(v___f_2619_, 0, v_mvarId_2612_);
lean_closure_set(v___f_2619_, 1, v___y_2594_);
lean_closure_set(v___f_2619_, 2, v___x_2617_);
lean_closure_set(v___f_2619_, 3, v_a_2596_);
lean_closure_set(v___f_2619_, 4, v_v_2608_);
lean_closure_set(v___f_2619_, 5, v___x_2618_);
lean_closure_set(v___f_2619_, 6, v_toInteractiveGoalCore_2609_);
lean_closure_set(v___f_2619_, 7, v_userName_x3f_2610_);
lean_closure_set(v___f_2619_, 8, v_goalPrefix_2611_);
lean_closure_set(v___f_2619_, 9, v_isInserted_x3f_2613_);
lean_closure_set(v___f_2619_, 10, v_isRemoved_x3f_2614_);
v___x_2620_ = l_Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__4___redArg(v_mvarId_2612_, v___f_2619_, v___y_2601_, v___y_2602_, v___y_2603_, v___y_2604_);
if (lean_obj_tag(v___x_2620_) == 0)
{
lean_object* v_a_2621_; size_t v___x_2622_; size_t v___x_2623_; lean_object* v___x_2624_; 
v_a_2621_ = lean_ctor_get(v___x_2620_, 0);
lean_inc(v_a_2621_);
lean_dec_ref_known(v___x_2620_, 1);
v___x_2622_ = ((size_t)1ULL);
v___x_2623_ = lean_usize_add(v_i_2599_, v___x_2622_);
v___x_2624_ = lean_array_uset(v_bs_x27_2616_, v_i_2599_, v_a_2621_);
v_i_2599_ = v___x_2623_;
v_bs_2600_ = v___x_2624_;
goto _start;
}
else
{
lean_object* v_a_2626_; lean_object* v___x_2628_; uint8_t v_isShared_2629_; uint8_t v_isSharedCheck_2633_; 
lean_dec_ref(v_bs_x27_2616_);
lean_dec(v_a_2596_);
lean_dec(v___y_2594_);
v_a_2626_ = lean_ctor_get(v___x_2620_, 0);
v_isSharedCheck_2633_ = !lean_is_exclusive(v___x_2620_);
if (v_isSharedCheck_2633_ == 0)
{
v___x_2628_ = v___x_2620_;
v_isShared_2629_ = v_isSharedCheck_2633_;
goto v_resetjp_2627_;
}
else
{
lean_inc(v_a_2626_);
lean_dec(v___x_2620_);
v___x_2628_ = lean_box(0);
v_isShared_2629_ = v_isSharedCheck_2633_;
goto v_resetjp_2627_;
}
v_resetjp_2627_:
{
lean_object* v___x_2631_; 
if (v_isShared_2629_ == 0)
{
v___x_2631_ = v___x_2628_;
goto v_reusejp_2630_;
}
else
{
lean_object* v_reuseFailAlloc_2632_; 
v_reuseFailAlloc_2632_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2632_, 0, v_a_2626_);
v___x_2631_ = v_reuseFailAlloc_2632_;
goto v_reusejp_2630_;
}
v_reusejp_2630_:
{
return v___x_2631_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_diffInteractiveGoals_spec__5_spec__6___boxed(lean_object* v___y_2634_, lean_object* v_useAfter_2635_, lean_object* v_a_2636_, lean_object* v___x_2637_, lean_object* v_sz_2638_, lean_object* v_i_2639_, lean_object* v_bs_2640_, lean_object* v___y_2641_, lean_object* v___y_2642_, lean_object* v___y_2643_, lean_object* v___y_2644_, lean_object* v___y_2645_){
_start:
{
uint8_t v_useAfter_boxed_2646_; uint8_t v___x_3518__boxed_2647_; size_t v_sz_boxed_2648_; size_t v_i_boxed_2649_; lean_object* v_res_2650_; 
v_useAfter_boxed_2646_ = lean_unbox(v_useAfter_2635_);
v___x_3518__boxed_2647_ = lean_unbox(v___x_2637_);
v_sz_boxed_2648_ = lean_unbox_usize(v_sz_2638_);
lean_dec(v_sz_2638_);
v_i_boxed_2649_ = lean_unbox_usize(v_i_2639_);
lean_dec(v_i_2639_);
v_res_2650_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_diffInteractiveGoals_spec__5_spec__6(v___y_2634_, v_useAfter_boxed_2646_, v_a_2636_, v___x_3518__boxed_2647_, v_sz_boxed_2648_, v_i_boxed_2649_, v_bs_2640_, v___y_2641_, v___y_2642_, v___y_2643_, v___y_2644_);
lean_dec(v___y_2644_);
lean_dec_ref(v___y_2643_);
lean_dec(v___y_2642_);
lean_dec_ref(v___y_2641_);
return v_res_2650_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_diffInteractiveGoals_spec__5(uint8_t v_useAfter_2651_, lean_object* v_a_2652_, lean_object* v___y_2653_, uint8_t v___x_2654_, size_t v_sz_2655_, size_t v_i_2656_, lean_object* v_bs_2657_, lean_object* v___y_2658_, lean_object* v___y_2659_, lean_object* v___y_2660_, lean_object* v___y_2661_){
_start:
{
uint8_t v___x_2663_; 
v___x_2663_ = lean_usize_dec_lt(v_i_2656_, v_sz_2655_);
if (v___x_2663_ == 0)
{
lean_object* v___x_2664_; 
lean_dec(v___y_2653_);
lean_dec(v_a_2652_);
v___x_2664_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2664_, 0, v_bs_2657_);
return v___x_2664_;
}
else
{
lean_object* v_v_2665_; lean_object* v_toInteractiveGoalCore_2666_; lean_object* v_userName_x3f_2667_; lean_object* v_goalPrefix_2668_; lean_object* v_mvarId_2669_; lean_object* v_isInserted_x3f_2670_; lean_object* v_isRemoved_x3f_2671_; lean_object* v___x_2672_; lean_object* v_bs_x27_2673_; lean_object* v___x_2674_; lean_object* v___x_2675_; lean_object* v___f_2676_; lean_object* v___x_2677_; 
v_v_2665_ = lean_array_uget(v_bs_2657_, v_i_2656_);
v_toInteractiveGoalCore_2666_ = lean_ctor_get(v_v_2665_, 0);
lean_inc_ref(v_toInteractiveGoalCore_2666_);
v_userName_x3f_2667_ = lean_ctor_get(v_v_2665_, 1);
lean_inc(v_userName_x3f_2667_);
v_goalPrefix_2668_ = lean_ctor_get(v_v_2665_, 2);
lean_inc_ref(v_goalPrefix_2668_);
v_mvarId_2669_ = lean_ctor_get(v_v_2665_, 3);
lean_inc_n(v_mvarId_2669_, 2);
v_isInserted_x3f_2670_ = lean_ctor_get(v_v_2665_, 4);
lean_inc(v_isInserted_x3f_2670_);
v_isRemoved_x3f_2671_ = lean_ctor_get(v_v_2665_, 5);
lean_inc(v_isRemoved_x3f_2671_);
v___x_2672_ = lean_unsigned_to_nat(0u);
v_bs_x27_2673_ = lean_array_uset(v_bs_2657_, v_i_2656_, v___x_2672_);
v___x_2674_ = lean_box(v_useAfter_2651_);
v___x_2675_ = lean_box(v___x_2654_);
lean_inc(v_a_2652_);
lean_inc(v___y_2653_);
v___f_2676_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_diffInteractiveGoals_spec__5___lam__0___boxed), 18, 11);
lean_closure_set(v___f_2676_, 0, v_mvarId_2669_);
lean_closure_set(v___f_2676_, 1, v___y_2653_);
lean_closure_set(v___f_2676_, 2, v___x_2674_);
lean_closure_set(v___f_2676_, 3, v_a_2652_);
lean_closure_set(v___f_2676_, 4, v_v_2665_);
lean_closure_set(v___f_2676_, 5, v___x_2675_);
lean_closure_set(v___f_2676_, 6, v_toInteractiveGoalCore_2666_);
lean_closure_set(v___f_2676_, 7, v_userName_x3f_2667_);
lean_closure_set(v___f_2676_, 8, v_goalPrefix_2668_);
lean_closure_set(v___f_2676_, 9, v_isInserted_x3f_2670_);
lean_closure_set(v___f_2676_, 10, v_isRemoved_x3f_2671_);
v___x_2677_ = l_Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__4___redArg(v_mvarId_2669_, v___f_2676_, v___y_2658_, v___y_2659_, v___y_2660_, v___y_2661_);
if (lean_obj_tag(v___x_2677_) == 0)
{
lean_object* v_a_2678_; size_t v___x_2679_; size_t v___x_2680_; lean_object* v___x_2681_; lean_object* v___x_2682_; 
v_a_2678_ = lean_ctor_get(v___x_2677_, 0);
lean_inc(v_a_2678_);
lean_dec_ref_known(v___x_2677_, 1);
v___x_2679_ = ((size_t)1ULL);
v___x_2680_ = lean_usize_add(v_i_2656_, v___x_2679_);
v___x_2681_ = lean_array_uset(v_bs_x27_2673_, v_i_2656_, v_a_2678_);
v___x_2682_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_diffInteractiveGoals_spec__5_spec__6(v___y_2653_, v_useAfter_2651_, v_a_2652_, v___x_2654_, v_sz_2655_, v___x_2680_, v___x_2681_, v___y_2658_, v___y_2659_, v___y_2660_, v___y_2661_);
return v___x_2682_;
}
else
{
lean_object* v_a_2683_; lean_object* v___x_2685_; uint8_t v_isShared_2686_; uint8_t v_isSharedCheck_2690_; 
lean_dec_ref(v_bs_x27_2673_);
lean_dec(v___y_2653_);
lean_dec(v_a_2652_);
v_a_2683_ = lean_ctor_get(v___x_2677_, 0);
v_isSharedCheck_2690_ = !lean_is_exclusive(v___x_2677_);
if (v_isSharedCheck_2690_ == 0)
{
v___x_2685_ = v___x_2677_;
v_isShared_2686_ = v_isSharedCheck_2690_;
goto v_resetjp_2684_;
}
else
{
lean_inc(v_a_2683_);
lean_dec(v___x_2677_);
v___x_2685_ = lean_box(0);
v_isShared_2686_ = v_isSharedCheck_2690_;
goto v_resetjp_2684_;
}
v_resetjp_2684_:
{
lean_object* v___x_2688_; 
if (v_isShared_2686_ == 0)
{
v___x_2688_ = v___x_2685_;
goto v_reusejp_2687_;
}
else
{
lean_object* v_reuseFailAlloc_2689_; 
v_reuseFailAlloc_2689_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2689_, 0, v_a_2683_);
v___x_2688_ = v_reuseFailAlloc_2689_;
goto v_reusejp_2687_;
}
v_reusejp_2687_:
{
return v___x_2688_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_diffInteractiveGoals_spec__5___boxed(lean_object* v_useAfter_2691_, lean_object* v_a_2692_, lean_object* v___y_2693_, lean_object* v___x_2694_, lean_object* v_sz_2695_, lean_object* v_i_2696_, lean_object* v_bs_2697_, lean_object* v___y_2698_, lean_object* v___y_2699_, lean_object* v___y_2700_, lean_object* v___y_2701_, lean_object* v___y_2702_){
_start:
{
uint8_t v_useAfter_boxed_2703_; uint8_t v___x_3582__boxed_2704_; size_t v_sz_boxed_2705_; size_t v_i_boxed_2706_; lean_object* v_res_2707_; 
v_useAfter_boxed_2703_ = lean_unbox(v_useAfter_2691_);
v___x_3582__boxed_2704_ = lean_unbox(v___x_2694_);
v_sz_boxed_2705_ = lean_unbox_usize(v_sz_2695_);
lean_dec(v_sz_2695_);
v_i_boxed_2706_ = lean_unbox_usize(v_i_2696_);
lean_dec(v_i_2696_);
v_res_2707_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_diffInteractiveGoals_spec__5(v_useAfter_boxed_2703_, v_a_2692_, v___y_2693_, v___x_3582__boxed_2704_, v_sz_boxed_2705_, v_i_boxed_2706_, v_bs_2697_, v___y_2698_, v___y_2699_, v___y_2700_, v___y_2701_);
lean_dec(v___y_2701_);
lean_dec_ref(v___y_2700_);
lean_dec(v___y_2699_);
lean_dec_ref(v___y_2698_);
return v_res_2707_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_diffInteractiveGoals(uint8_t v_useAfter_2708_, lean_object* v_info_2709_, lean_object* v_igs_u2081_2710_, lean_object* v___y_2711_, lean_object* v___y_2712_, lean_object* v___y_2713_, lean_object* v___y_2714_){
_start:
{
lean_object* v_toCold_2716_; lean_object* v_options_2717_; lean_object* v___x_2718_; uint8_t v___x_2719_; lean_object* v___y_2721_; 
v_toCold_2716_ = lean_ctor_get(v___y_2713_, 0);
v_options_2717_ = lean_ctor_get(v_toCold_2716_, 2);
v___x_2718_ = l___private_Lean_Widget_Diff_0__Lean_Widget_showTacticDiff;
v___x_2719_ = l_Lean_Option_get___at___00Lean_Widget_diffInteractiveGoals_spec__0(v_options_2717_, v___x_2718_);
if (v___x_2719_ == 0)
{
lean_object* v___x_2753_; 
lean_dec_ref(v_info_2709_);
v___x_2753_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2753_, 0, v_igs_u2081_2710_);
return v___x_2753_;
}
else
{
if (v_useAfter_2708_ == 0)
{
lean_object* v_goalsAfter_2754_; 
v_goalsAfter_2754_ = lean_ctor_get(v_info_2709_, 4);
lean_inc(v_goalsAfter_2754_);
v___y_2721_ = v_goalsAfter_2754_;
goto v___jp_2720_;
}
else
{
lean_object* v_goalsBefore_2755_; 
v_goalsBefore_2755_ = lean_ctor_get(v_info_2709_, 2);
lean_inc(v_goalsBefore_2755_);
v___y_2721_ = v_goalsBefore_2755_;
goto v___jp_2720_;
}
}
v___jp_2720_:
{
lean_object* v_goalsBefore_2722_; lean_object* v___x_2723_; lean_object* v___x_2724_; 
v_goalsBefore_2722_ = lean_ctor_get(v_info_2709_, 2);
lean_inc(v_goalsBefore_2722_);
lean_dec_ref(v_info_2709_);
v___x_2723_ = lean_box(1);
v___x_2724_ = l_List_foldlM___at___00Lean_Widget_diffInteractiveGoals_spec__1(v___x_2723_, v_goalsBefore_2722_, v___y_2711_, v___y_2712_, v___y_2713_, v___y_2714_);
if (lean_obj_tag(v___x_2724_) == 0)
{
lean_object* v_a_2725_; size_t v_sz_2726_; size_t v___x_2727_; lean_object* v___x_2728_; 
v_a_2725_ = lean_ctor_get(v___x_2724_, 0);
lean_inc(v_a_2725_);
lean_dec_ref_known(v___x_2724_, 1);
v_sz_2726_ = lean_array_size(v_igs_u2081_2710_);
v___x_2727_ = ((size_t)0ULL);
v___x_2728_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_diffInteractiveGoals_spec__5(v_useAfter_2708_, v_a_2725_, v___y_2721_, v___x_2719_, v_sz_2726_, v___x_2727_, v_igs_u2081_2710_, v___y_2711_, v___y_2712_, v___y_2713_, v___y_2714_);
if (lean_obj_tag(v___x_2728_) == 0)
{
lean_object* v_a_2729_; lean_object* v___x_2731_; uint8_t v_isShared_2732_; uint8_t v_isSharedCheck_2736_; 
v_a_2729_ = lean_ctor_get(v___x_2728_, 0);
v_isSharedCheck_2736_ = !lean_is_exclusive(v___x_2728_);
if (v_isSharedCheck_2736_ == 0)
{
v___x_2731_ = v___x_2728_;
v_isShared_2732_ = v_isSharedCheck_2736_;
goto v_resetjp_2730_;
}
else
{
lean_inc(v_a_2729_);
lean_dec(v___x_2728_);
v___x_2731_ = lean_box(0);
v_isShared_2732_ = v_isSharedCheck_2736_;
goto v_resetjp_2730_;
}
v_resetjp_2730_:
{
lean_object* v___x_2734_; 
if (v_isShared_2732_ == 0)
{
v___x_2734_ = v___x_2731_;
goto v_reusejp_2733_;
}
else
{
lean_object* v_reuseFailAlloc_2735_; 
v_reuseFailAlloc_2735_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2735_, 0, v_a_2729_);
v___x_2734_ = v_reuseFailAlloc_2735_;
goto v_reusejp_2733_;
}
v_reusejp_2733_:
{
return v___x_2734_;
}
}
}
else
{
lean_object* v_a_2737_; lean_object* v___x_2739_; uint8_t v_isShared_2740_; uint8_t v_isSharedCheck_2744_; 
v_a_2737_ = lean_ctor_get(v___x_2728_, 0);
v_isSharedCheck_2744_ = !lean_is_exclusive(v___x_2728_);
if (v_isSharedCheck_2744_ == 0)
{
v___x_2739_ = v___x_2728_;
v_isShared_2740_ = v_isSharedCheck_2744_;
goto v_resetjp_2738_;
}
else
{
lean_inc(v_a_2737_);
lean_dec(v___x_2728_);
v___x_2739_ = lean_box(0);
v_isShared_2740_ = v_isSharedCheck_2744_;
goto v_resetjp_2738_;
}
v_resetjp_2738_:
{
lean_object* v___x_2742_; 
if (v_isShared_2740_ == 0)
{
v___x_2742_ = v___x_2739_;
goto v_reusejp_2741_;
}
else
{
lean_object* v_reuseFailAlloc_2743_; 
v_reuseFailAlloc_2743_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2743_, 0, v_a_2737_);
v___x_2742_ = v_reuseFailAlloc_2743_;
goto v_reusejp_2741_;
}
v_reusejp_2741_:
{
return v___x_2742_;
}
}
}
}
else
{
lean_object* v_a_2745_; lean_object* v___x_2747_; uint8_t v_isShared_2748_; uint8_t v_isSharedCheck_2752_; 
lean_dec(v___y_2721_);
lean_dec_ref(v_igs_u2081_2710_);
v_a_2745_ = lean_ctor_get(v___x_2724_, 0);
v_isSharedCheck_2752_ = !lean_is_exclusive(v___x_2724_);
if (v_isSharedCheck_2752_ == 0)
{
v___x_2747_ = v___x_2724_;
v_isShared_2748_ = v_isSharedCheck_2752_;
goto v_resetjp_2746_;
}
else
{
lean_inc(v_a_2745_);
lean_dec(v___x_2724_);
v___x_2747_ = lean_box(0);
v_isShared_2748_ = v_isSharedCheck_2752_;
goto v_resetjp_2746_;
}
v_resetjp_2746_:
{
lean_object* v___x_2750_; 
if (v_isShared_2748_ == 0)
{
v___x_2750_ = v___x_2747_;
goto v_reusejp_2749_;
}
else
{
lean_object* v_reuseFailAlloc_2751_; 
v_reuseFailAlloc_2751_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2751_, 0, v_a_2745_);
v___x_2750_ = v_reuseFailAlloc_2751_;
goto v_reusejp_2749_;
}
v_reusejp_2749_:
{
return v___x_2750_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_diffInteractiveGoals___boxed(lean_object* v_useAfter_2756_, lean_object* v_info_2757_, lean_object* v_igs_u2081_2758_, lean_object* v___y_2759_, lean_object* v___y_2760_, lean_object* v___y_2761_, lean_object* v___y_2762_, lean_object* v___y_2763_){
_start:
{
uint8_t v_useAfter_boxed_2764_; lean_object* v_res_2765_; 
v_useAfter_boxed_2764_ = lean_unbox(v_useAfter_2756_);
v_res_2765_ = l_Lean_Widget_diffInteractiveGoals(v_useAfter_boxed_2764_, v_info_2757_, v_igs_u2081_2758_, v___y_2759_, v___y_2760_, v___y_2761_, v___y_2762_);
lean_dec(v___y_2762_);
lean_dec_ref(v___y_2761_);
lean_dec(v___y_2760_);
lean_dec_ref(v___y_2759_);
return v_res_2765_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__4_spec__4(lean_object* v_00_u03b1_2766_, lean_object* v_lctx_2767_, lean_object* v_localInsts_2768_, lean_object* v_x_2769_, lean_object* v___y_2770_, lean_object* v___y_2771_, lean_object* v___y_2772_, lean_object* v___y_2773_){
_start:
{
lean_object* v___x_2775_; 
v___x_2775_ = l_Lean_Meta_withLCtx___at___00Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__4_spec__4___redArg(v_lctx_2767_, v_localInsts_2768_, v_x_2769_, v___y_2770_, v___y_2771_, v___y_2772_, v___y_2773_);
return v___x_2775_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__4_spec__4___boxed(lean_object* v_00_u03b1_2776_, lean_object* v_lctx_2777_, lean_object* v_localInsts_2778_, lean_object* v_x_2779_, lean_object* v___y_2780_, lean_object* v___y_2781_, lean_object* v___y_2782_, lean_object* v___y_2783_, lean_object* v___y_2784_){
_start:
{
lean_object* v_res_2785_; 
v_res_2785_ = l_Lean_Meta_withLCtx___at___00Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__4_spec__4(v_00_u03b1_2776_, v_lctx_2777_, v_localInsts_2778_, v_x_2779_, v___y_2780_, v___y_2781_, v___y_2782_, v___y_2783_);
lean_dec(v___y_2783_);
lean_dec_ref(v___y_2782_);
lean_dec(v___y_2781_);
lean_dec_ref(v___y_2780_);
return v_res_2785_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__4(lean_object* v_00_u03b1_2786_, lean_object* v_goal_2787_, lean_object* v_action_2788_, lean_object* v___y_2789_, lean_object* v___y_2790_, lean_object* v___y_2791_, lean_object* v___y_2792_){
_start:
{
lean_object* v___x_2794_; 
v___x_2794_ = l_Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__4___redArg(v_goal_2787_, v_action_2788_, v___y_2789_, v___y_2790_, v___y_2791_, v___y_2792_);
return v___x_2794_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__4___boxed(lean_object* v_00_u03b1_2795_, lean_object* v_goal_2796_, lean_object* v_action_2797_, lean_object* v___y_2798_, lean_object* v___y_2799_, lean_object* v___y_2800_, lean_object* v___y_2801_, lean_object* v___y_2802_){
_start:
{
lean_object* v_res_2803_; 
v_res_2803_ = l_Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__4(v_00_u03b1_2795_, v_goal_2796_, v_action_2797_, v___y_2798_, v___y_2799_, v___y_2800_, v___y_2801_);
lean_dec(v___y_2801_);
lean_dec_ref(v___y_2800_);
lean_dec(v___y_2799_);
lean_dec_ref(v___y_2798_);
return v_res_2803_;
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
