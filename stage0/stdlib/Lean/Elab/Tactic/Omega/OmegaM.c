// Lean compiler output
// Module: Lean.Elab.Tactic.Omega.OmegaM
// Imports: public import Lean.Meta.AppBuilder public import Lean.Meta.Canonicalizer public import Init.Omega
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
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Level_ofNat(lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Expr_beta(lean_object*, lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAnd(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Meta_Canonicalizer_canon(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint64_t l_Lean_Expr_hash(lean_object*);
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
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFnArgs(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkOr(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkExpectedPropHint(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_nat_x3f(lean_object*);
lean_object* l_Lean_mkNatLit(lean_object*);
lean_object* l_Lean_Meta_mkDecideProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
uint8_t lean_int_dec_le(lean_object*, lean_object*);
lean_object* lean_int_neg(lean_object*);
lean_object* l_Int_toNat(lean_object*);
lean_object* l_Lean_instToExprInt_mkNat(lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_Meta_mkListLit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_int_x3f(lean_object*);
lean_object* l_Nat_pow___boxed(lean_object*, lean_object*);
lean_object* l_Nat_div___boxed(lean_object*, lean_object*);
lean_object* l_Nat_sub___boxed(lean_object*, lean_object*);
lean_object* l_Nat_mul___boxed(lean_object*, lean_object*);
lean_object* l_Nat_add___boxed(lean_object*, lean_object*);
lean_object* l_Int_pow(lean_object*, lean_object*);
lean_object* l_Int_ediv___boxed(lean_object*, lean_object*);
lean_object* l_Int_sub___boxed(lean_object*, lean_object*);
lean_object* l_Int_mul___boxed(lean_object*, lean_object*);
lean_object* l_Int_add___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqRefl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lean_Meta_Canonicalizer_CanonM_run_x27___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg___closed__1;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_OmegaM_run(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_OmegaM_run___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_cfg___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_cfg___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_cfg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_cfg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Elab_Tactic_Omega_atoms_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Elab_Tactic_Omega_atoms_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Omega_atoms_spec__3(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Omega_atoms_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Omega_atoms_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Omega_atoms_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_atoms___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_atoms___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_atoms(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_atoms___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Int"};
static const lean_object* l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_atomsList___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_atomsList___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_atomsList(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_atomsList___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Omega"};
static const lean_object* l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Coeffs"};
static const lean_object* l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__2_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "ofList"};
static const lean_object* l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__3_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__4_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(113, 76, 155, 247, 209, 92, 141, 248)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__4_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(200, 12, 56, 206, 160, 32, 217, 148)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__4_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(16, 98, 247, 173, 146, 185, 161, 158)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__4_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_atomsCoeffs(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_atomsCoeffs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_commitWhen___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_commitWhen___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_commitWhen(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_commitWhen___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_withoutModifyingState___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_withoutModifyingState___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_withoutModifyingState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_withoutModifyingState___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_withoutModifyingState(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_withoutModifyingState___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Omega_natCast_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Nat"};
static const lean_object* l_Lean_Elab_Tactic_Omega_natCast_x3f___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_natCast_x3f___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_natCast_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "cast"};
static const lean_object* l_Lean_Elab_Tactic_Omega_natCast_x3f___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_natCast_x3f___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_natCast_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_Elab_Tactic_Omega_intCast_x3f_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_intCast_x3f(lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HAdd"};
static const lean_object* l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HMul"};
static const lean_object* l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HSub"};
static const lean_object* l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__2_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HDiv"};
static const lean_object* l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__3_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HPow"};
static const lean_object* l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__4_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hPow"};
static const lean_object* l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__5_value;
static const lean_closure_object l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Nat_pow___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__6 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__6_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hDiv"};
static const lean_object* l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__7 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__7_value;
static const lean_closure_object l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Nat_div___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__8 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__8_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hSub"};
static const lean_object* l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__9 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__9_value;
static const lean_closure_object l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Nat_sub___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__10 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__10_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hMul"};
static const lean_object* l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__11 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__11_value;
static const lean_closure_object l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Nat_mul___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__12 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__12_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hAdd"};
static const lean_object* l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__13 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__13_value;
static const lean_closure_object l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Nat_add___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__14 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__14_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_groundNat_x3f(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Omega_OmegaM_0__Lean_Elab_Tactic_Omega_groundNat_x3f_op(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Tactic_Omega_groundInt_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Int_ediv___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Omega_groundInt_x3f___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_groundInt_x3f___closed__0_value;
static const lean_closure_object l_Lean_Elab_Tactic_Omega_groundInt_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Int_sub___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Omega_groundInt_x3f___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_groundInt_x3f___closed__1_value;
static const lean_closure_object l_Lean_Elab_Tactic_Omega_groundInt_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Int_mul___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Omega_groundInt_x3f___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_groundInt_x3f___closed__2_value;
static const lean_closure_object l_Lean_Elab_Tactic_Omega_groundInt_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Int_add___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Omega_groundInt_x3f___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_groundInt_x3f___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_groundInt_x3f(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Omega_OmegaM_0__Lean_Elab_Tactic_Omega_groundInt_x3f_op(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_mkEqReflWithExpectedType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_mkEqReflWithExpectedType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_conditionalFacts___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_conditionalFacts___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Omega_conditionalFacts_spec__0_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Omega_conditionalFacts_spec__0_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Omega_conditionalFacts_spec__0_spec__0___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Omega_conditionalFacts_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Omega_conditionalFacts_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Omega_conditionalFacts_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Omega_conditionalFacts___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l_Lean_Elab_Tactic_Omega_conditionalFacts___lam__1___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_conditionalFacts___lam__1___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_conditionalFacts___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_conditionalFacts___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_conditionalFacts___lam__1___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_conditionalFacts___lam__1___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_conditionalFacts___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "h"};
static const lean_object* l_Lean_Elab_Tactic_Omega_conditionalFacts___lam__1___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_conditionalFacts___lam__1___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_conditionalFacts___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_conditionalFacts___lam__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(176, 181, 207, 77, 197, 87, 68, 121)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_conditionalFacts___lam__1___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_conditionalFacts___lam__1___closed__3_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_conditionalFacts___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Exists"};
static const lean_object* l_Lean_Elab_Tactic_Omega_conditionalFacts___lam__1___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_conditionalFacts___lam__1___closed__4_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_conditionalFacts___lam__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_conditionalFacts___lam__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(65, 29, 48, 135, 199, 176, 149, 70)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_conditionalFacts___lam__1___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_conditionalFacts___lam__1___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_conditionalFacts___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_conditionalFacts___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "ite"};
static const lean_object* l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "cond"};
static const lean_object* l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "cond_disjunction"};
static const lean_object* l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__3_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(113, 76, 155, 247, 209, 92, 141, 248)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__3_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__2_value),LEAN_SCALAR_PTR_LITERAL(81, 13, 4, 146, 240, 212, 130, 3)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__3_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__4;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__5;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__6;
static const lean_string_object l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "ite_disjunction"};
static const lean_object* l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__7 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__7_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__8_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(113, 76, 155, 247, 209, 92, 141, 248)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__8_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__7_value),LEAN_SCALAR_PTR_LITERAL(77, 139, 125, 42, 52, 100, 157, 106)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__8 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__8_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__9;
static const lean_string_object l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "UDecidable"};
static const lean_object* l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__10 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__10_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Bool"};
static const lean_object* l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__11 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__11_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "dcond"};
static const lean_object* l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__12 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__12_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "dcond_disjunction"};
static const lean_object* l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__13 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__13_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__14_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__14_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__14_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(113, 76, 155, 247, 209, 92, 141, 248)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__14_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__13_value),LEAN_SCALAR_PTR_LITERAL(79, 41, 156, 184, 146, 101, 163, 147)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__14 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__14_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__15;
static const lean_string_object l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__16 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__16_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__17_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__11_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__17_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__16_value),LEAN_SCALAR_PTR_LITERAL(22, 245, 194, 28, 184, 9, 113, 128)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__17 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__17_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__18;
static const lean_string_object l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__19 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__19_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__20_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__11_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__20_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__19_value),LEAN_SCALAR_PTR_LITERAL(117, 151, 161, 190, 111, 237, 188, 218)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__20 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__20_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__21;
static const lean_string_object l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "uite_disjunction"};
static const lean_object* l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__22 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__22_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__23_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__23_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__23_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(113, 76, 155, 247, 209, 92, 141, 248)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__23_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__22_value),LEAN_SCALAR_PTR_LITERAL(20, 61, 243, 232, 63, 63, 55, 172)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__23 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__23_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__24;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_conditionalFacts(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_conditionalFacts___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Omega_conditionalFacts_spec__0_spec__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Omega_conditionalFacts_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Omega_conditionalFacts_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Omega_conditionalFacts_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_elem___at___00Lean_Elab_Tactic_Omega_analyzeAtom_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_elem___at___00Lean_Elab_Tactic_Omega_analyzeAtom_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HMod"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Min"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Max"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__2_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "max"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__3_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "le_max_left"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__4_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__5_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(202, 116, 120, 162, 144, 249, 91, 118)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__5_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__6;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "le_max_right"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__7 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__7_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__8_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__7_value),LEAN_SCALAR_PTR_LITERAL(187, 64, 160, 147, 232, 106, 148, 64)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__8 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__8_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__9;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "min"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__10 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__10_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "min_le_left"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__11 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__11_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__12_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__11_value),LEAN_SCALAR_PTR_LITERAL(18, 98, 222, 238, 10, 11, 175, 208)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__12 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__12_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__13;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "min_le_right"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__14 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__14_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__15_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__15_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__14_value),LEAN_SCALAR_PTR_LITERAL(89, 109, 128, 29, 84, 251, 120, 13)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__15 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__15_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__16;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hMod"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__17 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__17_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "emod_ofNat_nonneg"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__18 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__18_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__19_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__19_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__19_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(113, 76, 155, 247, 209, 92, 141, 248)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__19_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__19_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(127, 141, 7, 147, 89, 24, 200, 6)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__19_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__18_value),LEAN_SCALAR_PTR_LITERAL(193, 64, 179, 146, 49, 216, 163, 147)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__19 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__19_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "LT"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__20 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__20_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "lt"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__21 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__21_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__22_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__20_value),LEAN_SCALAR_PTR_LITERAL(71, 235, 154, 184, 62, 135, 30, 248)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__22_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__21_value),LEAN_SCALAR_PTR_LITERAL(54, 235, 251, 9, 4, 74, 57, 164)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__22 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__22_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_natCast_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__23 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__23_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "instLTNat"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__24 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__24_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__24_value),LEAN_SCALAR_PTR_LITERAL(141, 27, 201, 217, 48, 203, 85, 203)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__25 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__25_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__26;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "pow_pos"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__27 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__27_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__28_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_natCast_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__28_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__27_value),LEAN_SCALAR_PTR_LITERAL(8, 188, 92, 81, 98, 125, 214, 195)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__28 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__28_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "ofNat_pos_of_pos"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__29 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__29_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__30_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__30_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__30_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(113, 76, 155, 247, 209, 92, 141, 248)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__30_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__30_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(127, 141, 7, 147, 89, 24, 200, 6)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__30_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__29_value),LEAN_SCALAR_PTR_LITERAL(40, 203, 156, 230, 39, 171, 106, 183)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__30 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__30_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "emod_nonneg"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__31 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__31_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__32_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__32_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__31_value),LEAN_SCALAR_PTR_LITERAL(61, 100, 115, 114, 207, 135, 28, 238)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__32 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__32_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "ne_of_gt"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__33 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__33_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__34_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__34_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__33_value),LEAN_SCALAR_PTR_LITERAL(124, 85, 105, 24, 138, 4, 9, 162)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__34 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__34_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "emod_lt_of_pos"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__35 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__35_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__36_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__36_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__35_value),LEAN_SCALAR_PTR_LITERAL(179, 253, 191, 46, 213, 199, 79, 210)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__36 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__36_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__37_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__37;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__38_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__38;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Neg"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__39 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__39_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "neg"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__40 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__40_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__41_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__39_value),LEAN_SCALAR_PTR_LITERAL(94, 4, 109, 108, 64, 81, 153, 133)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__41_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__40_value),LEAN_SCALAR_PTR_LITERAL(105, 26, 70, 221, 245, 238, 127, 238)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__41 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__41_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "instNegInt"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__42 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__42_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__43_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__43_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__42_value),LEAN_SCALAR_PTR_LITERAL(217, 109, 233, 1, 211, 122, 77, 88)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__43 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__43_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__44_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__44;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__45_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__45;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__46_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__46;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__47_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__47;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__48_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__48;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__49_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__49;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "instLTInt"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__50 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__50_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__51_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__51_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__50_value),LEAN_SCALAR_PTR_LITERAL(174, 212, 102, 196, 69, 170, 149, 126)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__51 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__51_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__52_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__52;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "pos_pow_of_pos"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__53 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__53_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__54_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__54_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__54_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(113, 76, 155, 247, 209, 92, 141, 248)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__54_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__54_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(127, 141, 7, 147, 89, 24, 200, 6)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__54_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__54_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__53_value),LEAN_SCALAR_PTR_LITERAL(145, 25, 143, 59, 16, 211, 163, 116)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__54 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__54_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__55_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__55;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__56_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__56;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__57_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__57;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__58_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__58;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__59_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__59;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__60_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__60;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__61_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__61;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__62_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Ne"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__62 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__62_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__63_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__62_value),LEAN_SCALAR_PTR_LITERAL(161, 247, 70, 70, 118, 145, 235, 92)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__63 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__63_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__64_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__64;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__65_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__65;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__66_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__66;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__67_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "mul_ediv_self_le"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__67 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__67_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__68_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__68_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__68_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__67_value),LEAN_SCALAR_PTR_LITERAL(252, 253, 214, 154, 97, 254, 157, 214)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__68 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__68_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__69_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__69;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__70_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "lt_mul_ediv_self_add"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__70 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__70_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__71_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__71_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__71_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__70_value),LEAN_SCALAR_PTR_LITERAL(94, 156, 157, 133, 195, 57, 68, 244)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__71 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__71_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__72_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__72;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__73_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "neg_le_natAbs"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__73 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__73_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__74_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__74_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__74_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(113, 76, 155, 247, 209, 92, 141, 248)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__74_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__74_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(127, 141, 7, 147, 89, 24, 200, 6)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__74_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__74_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__73_value),LEAN_SCALAR_PTR_LITERAL(217, 253, 117, 167, 254, 111, 180, 184)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__74 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__74_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__75_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "natCast_nonneg"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__75 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__75_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__76_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__76_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__76_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__75_value),LEAN_SCALAR_PTR_LITERAL(78, 189, 5, 123, 91, 219, 85, 246)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__76 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__76_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__77_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "le_natAbs"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__77 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__77_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__78_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__78_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__78_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__77_value),LEAN_SCALAR_PTR_LITERAL(90, 82, 63, 108, 86, 248, 24, 88)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__78 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__78_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__79_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Fin"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__79 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__79_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__80_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "isLt"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__80 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__80_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__81_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__79_value),LEAN_SCALAR_PTR_LITERAL(62, 91, 162, 2, 110, 238, 123, 219)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__81_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__81_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__80_value),LEAN_SCALAR_PTR_LITERAL(222, 150, 50, 101, 25, 222, 136, 68)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__81 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__81_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__82_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "BitVec"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__82 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__82_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__83_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__82_value),LEAN_SCALAR_PTR_LITERAL(108, 178, 58, 132, 143, 189, 222, 74)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__83_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__83_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__80_value),LEAN_SCALAR_PTR_LITERAL(196, 26, 231, 251, 226, 55, 19, 117)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__83 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__83_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__84_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "toNat"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__84 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__84_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__85_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "val"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__85 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__85_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__86_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "natAbs"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__86 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__86_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__87_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "ofNat_sub_dichotomy"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__87 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__87_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__88_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__88_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__88_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(113, 76, 155, 247, 209, 92, 141, 248)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__88_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__88_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(127, 141, 7, 147, 89, 24, 200, 6)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__88_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__88_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__87_value),LEAN_SCALAR_PTR_LITERAL(132, 176, 7, 204, 155, 0, 78, 60)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__88 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__88_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_lookup_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_lookup_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_lookup_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_lookup_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__3_spec__4_spec__9___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__3___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4___redArg___closed__0;
static const lean_string_object l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4___redArg___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4___redArg___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4___redArg___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_Omega_lookup_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_Omega_lookup_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_Tactic_Omega_lookup_spec__3(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Omega_lookup___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "omega"};
static const lean_object* l_Lean_Elab_Tactic_Omega_lookup___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_lookup___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_lookup___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_lookup___closed__0_value),LEAN_SCALAR_PTR_LITERAL(107, 155, 144, 136, 132, 122, 189, 157)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_lookup___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_lookup___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_lookup___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Elab_Tactic_Omega_lookup___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_lookup___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_lookup___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_lookup___closed__2_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_lookup___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_lookup___closed__3_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_lookup___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_lookup___closed__4;
static const lean_string_object l_Lean_Elab_Tactic_Omega_lookup___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "New facts: "};
static const lean_object* l_Lean_Elab_Tactic_Omega_lookup___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_lookup___closed__5_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_lookup___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_lookup___closed__6;
static const lean_string_object l_Lean_Elab_Tactic_Omega_lookup___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "New atom: "};
static const lean_object* l_Lean_Elab_Tactic_Omega_lookup___closed__7 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_lookup___closed__7_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_lookup___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_lookup___closed__8;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_lookup(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_lookup___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_lookup_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_lookup_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_Omega_lookup_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_Omega_lookup_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_lookup_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_lookup_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__3_spec__4_spec__9(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg___lam__0(lean_object* v___x_1_, lean_object* v___x_2_, lean_object* v_m_3_, lean_object* v_cfg_4_, uint8_t v___y_5_, lean_object* v___y_6_, lean_object* v___y_7_, lean_object* v___y_8_, lean_object* v___y_9_, lean_object* v___y_10_){
_start:
{
lean_object* v___x_12_; lean_object* v___x_13_; lean_object* v___x_14_; lean_object* v___x_15_; 
v___x_12_ = lean_st_mk_ref(v___x_1_);
v___x_13_ = lean_st_mk_ref(v___x_2_);
v___x_14_ = lean_box(v___y_5_);
lean_inc(v___y_10_);
lean_inc_ref(v___y_9_);
lean_inc(v___y_8_);
lean_inc_ref(v___y_7_);
lean_inc(v___y_6_);
lean_inc(v___x_12_);
lean_inc(v___x_13_);
v___x_15_ = lean_apply_10(v_m_3_, v___x_13_, v___x_12_, v_cfg_4_, v___x_14_, v___y_6_, v___y_7_, v___y_8_, v___y_9_, v___y_10_, lean_box(0));
if (lean_obj_tag(v___x_15_) == 0)
{
lean_object* v_a_16_; lean_object* v___x_18_; uint8_t v_isShared_19_; uint8_t v_isSharedCheck_25_; 
v_a_16_ = lean_ctor_get(v___x_15_, 0);
v_isSharedCheck_25_ = !lean_is_exclusive(v___x_15_);
if (v_isSharedCheck_25_ == 0)
{
v___x_18_ = v___x_15_;
v_isShared_19_ = v_isSharedCheck_25_;
goto v_resetjp_17_;
}
else
{
lean_inc(v_a_16_);
lean_dec(v___x_15_);
v___x_18_ = lean_box(0);
v_isShared_19_ = v_isSharedCheck_25_;
goto v_resetjp_17_;
}
v_resetjp_17_:
{
lean_object* v___x_20_; lean_object* v___x_21_; lean_object* v___x_23_; 
v___x_20_ = lean_st_ref_get(v___x_13_);
lean_dec(v___x_13_);
lean_dec(v___x_20_);
v___x_21_ = lean_st_ref_get(v___x_12_);
lean_dec(v___x_12_);
lean_dec(v___x_21_);
if (v_isShared_19_ == 0)
{
v___x_23_ = v___x_18_;
goto v_reusejp_22_;
}
else
{
lean_object* v_reuseFailAlloc_24_; 
v_reuseFailAlloc_24_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_24_, 0, v_a_16_);
v___x_23_ = v_reuseFailAlloc_24_;
goto v_reusejp_22_;
}
v_reusejp_22_:
{
return v___x_23_;
}
}
}
else
{
lean_dec(v___x_13_);
lean_dec(v___x_12_);
return v___x_15_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg___lam__0___boxed(lean_object* v___x_26_, lean_object* v___x_27_, lean_object* v_m_28_, lean_object* v_cfg_29_, lean_object* v___y_30_, lean_object* v___y_31_, lean_object* v___y_32_, lean_object* v___y_33_, lean_object* v___y_34_, lean_object* v___y_35_, lean_object* v___y_36_){
_start:
{
uint8_t v___y_4823__boxed_37_; lean_object* v_res_38_; 
v___y_4823__boxed_37_ = lean_unbox(v___y_30_);
v_res_38_ = l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg___lam__0(v___x_26_, v___x_27_, v_m_28_, v_cfg_29_, v___y_4823__boxed_37_, v___y_31_, v___y_32_, v___y_33_, v___y_34_, v___y_35_);
lean_dec(v___y_35_);
lean_dec_ref(v___y_34_);
lean_dec(v___y_33_);
lean_dec_ref(v___y_32_);
lean_dec(v___y_31_);
return v_res_38_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg___closed__0(void){
_start:
{
lean_object* v___x_39_; lean_object* v___x_40_; lean_object* v___x_41_; 
v___x_39_ = lean_box(0);
v___x_40_ = lean_unsigned_to_nat(16u);
v___x_41_ = lean_mk_array(v___x_40_, v___x_39_);
return v___x_41_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg___closed__1(void){
_start:
{
lean_object* v___x_42_; lean_object* v___x_43_; lean_object* v___x_44_; 
v___x_42_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg___closed__0, &l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg___closed__0_once, _init_l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg___closed__0);
v___x_43_ = lean_unsigned_to_nat(0u);
v___x_44_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_44_, 0, v___x_43_);
lean_ctor_set(v___x_44_, 1, v___x_42_);
return v___x_44_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg___closed__2(void){
_start:
{
lean_object* v___x_45_; lean_object* v___x_46_; 
v___x_45_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg___closed__1, &l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg___closed__1_once, _init_l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg___closed__1);
v___x_46_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_46_, 0, v___x_45_);
lean_ctor_set(v___x_46_, 1, v___x_45_);
return v___x_46_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg(lean_object* v_m_47_, lean_object* v_cfg_48_, lean_object* v_a_49_, lean_object* v_a_50_, lean_object* v_a_51_, lean_object* v_a_52_){
_start:
{
lean_object* v___x_54_; lean_object* v___f_55_; uint8_t v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; 
v___x_54_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg___closed__1, &l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg___closed__1_once, _init_l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg___closed__1);
v___f_55_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg___lam__0___boxed), 11, 4);
lean_closure_set(v___f_55_, 0, v___x_54_);
lean_closure_set(v___f_55_, 1, v___x_54_);
lean_closure_set(v___f_55_, 2, v_m_47_);
lean_closure_set(v___f_55_, 3, v_cfg_48_);
v___x_56_ = 3;
v___x_57_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg___closed__2, &l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg___closed__2_once, _init_l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg___closed__2);
v___x_58_ = l_Lean_Meta_Canonicalizer_CanonM_run_x27___redArg(v___f_55_, v___x_56_, v___x_57_, v_a_49_, v_a_50_, v_a_51_, v_a_52_);
return v___x_58_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg___boxed(lean_object* v_m_59_, lean_object* v_cfg_60_, lean_object* v_a_61_, lean_object* v_a_62_, lean_object* v_a_63_, lean_object* v_a_64_, lean_object* v_a_65_){
_start:
{
lean_object* v_res_66_; 
v_res_66_ = l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg(v_m_59_, v_cfg_60_, v_a_61_, v_a_62_, v_a_63_, v_a_64_);
lean_dec(v_a_64_);
lean_dec_ref(v_a_63_);
lean_dec(v_a_62_);
lean_dec_ref(v_a_61_);
return v_res_66_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_OmegaM_run(lean_object* v_00_u03b1_67_, lean_object* v_m_68_, lean_object* v_cfg_69_, lean_object* v_a_70_, lean_object* v_a_71_, lean_object* v_a_72_, lean_object* v_a_73_){
_start:
{
lean_object* v___x_75_; 
v___x_75_ = l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg(v_m_68_, v_cfg_69_, v_a_70_, v_a_71_, v_a_72_, v_a_73_);
return v___x_75_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_OmegaM_run___boxed(lean_object* v_00_u03b1_76_, lean_object* v_m_77_, lean_object* v_cfg_78_, lean_object* v_a_79_, lean_object* v_a_80_, lean_object* v_a_81_, lean_object* v_a_82_, lean_object* v_a_83_){
_start:
{
lean_object* v_res_84_; 
v_res_84_ = l_Lean_Elab_Tactic_Omega_OmegaM_run(v_00_u03b1_76_, v_m_77_, v_cfg_78_, v_a_79_, v_a_80_, v_a_81_, v_a_82_);
lean_dec(v_a_82_);
lean_dec_ref(v_a_81_);
lean_dec(v_a_80_);
lean_dec_ref(v_a_79_);
return v_res_84_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_cfg___redArg(lean_object* v_a_85_){
_start:
{
lean_object* v___x_87_; 
lean_inc_ref(v_a_85_);
v___x_87_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_87_, 0, v_a_85_);
return v___x_87_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_cfg___redArg___boxed(lean_object* v_a_88_, lean_object* v_a_89_){
_start:
{
lean_object* v_res_90_; 
v_res_90_ = l_Lean_Elab_Tactic_Omega_cfg___redArg(v_a_88_);
lean_dec_ref(v_a_88_);
return v_res_90_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_cfg(lean_object* v_a_91_, lean_object* v_a_92_, lean_object* v_a_93_, uint8_t v_a_94_, lean_object* v_a_95_, lean_object* v_a_96_, lean_object* v_a_97_, lean_object* v_a_98_, lean_object* v_a_99_){
_start:
{
lean_object* v___x_101_; 
lean_inc_ref(v_a_93_);
v___x_101_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_101_, 0, v_a_93_);
return v___x_101_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_cfg___boxed(lean_object* v_a_102_, lean_object* v_a_103_, lean_object* v_a_104_, lean_object* v_a_105_, lean_object* v_a_106_, lean_object* v_a_107_, lean_object* v_a_108_, lean_object* v_a_109_, lean_object* v_a_110_, lean_object* v_a_111_){
_start:
{
uint8_t v_a_boxed_112_; lean_object* v_res_113_; 
v_a_boxed_112_ = lean_unbox(v_a_105_);
v_res_113_ = l_Lean_Elab_Tactic_Omega_cfg(v_a_102_, v_a_103_, v_a_104_, v_a_boxed_112_, v_a_106_, v_a_107_, v_a_108_, v_a_109_, v_a_110_);
lean_dec(v_a_110_);
lean_dec_ref(v_a_109_);
lean_dec(v_a_108_);
lean_dec_ref(v_a_107_);
lean_dec(v_a_106_);
lean_dec_ref(v_a_104_);
lean_dec(v_a_103_);
lean_dec(v_a_102_);
return v_res_113_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1_spec__1___redArg(lean_object* v_hi_114_, lean_object* v_pivot_115_, lean_object* v_as_116_, lean_object* v_i_117_, lean_object* v_k_118_){
_start:
{
uint8_t v___x_119_; 
v___x_119_ = lean_nat_dec_lt(v_k_118_, v_hi_114_);
if (v___x_119_ == 0)
{
lean_object* v___x_120_; lean_object* v___x_121_; 
lean_dec(v_k_118_);
v___x_120_ = lean_array_fswap(v_as_116_, v_i_117_, v_hi_114_);
v___x_121_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_121_, 0, v_i_117_);
lean_ctor_set(v___x_121_, 1, v___x_120_);
return v___x_121_;
}
else
{
lean_object* v___x_122_; lean_object* v_snd_123_; lean_object* v_snd_124_; uint8_t v___x_125_; 
v___x_122_ = lean_array_fget_borrowed(v_as_116_, v_k_118_);
v_snd_123_ = lean_ctor_get(v___x_122_, 1);
v_snd_124_ = lean_ctor_get(v_pivot_115_, 1);
v___x_125_ = lean_nat_dec_lt(v_snd_123_, v_snd_124_);
if (v___x_125_ == 0)
{
lean_object* v___x_126_; lean_object* v___x_127_; 
v___x_126_ = lean_unsigned_to_nat(1u);
v___x_127_ = lean_nat_add(v_k_118_, v___x_126_);
lean_dec(v_k_118_);
v_k_118_ = v___x_127_;
goto _start;
}
else
{
lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; lean_object* v___x_132_; 
v___x_129_ = lean_array_fswap(v_as_116_, v_i_117_, v_k_118_);
v___x_130_ = lean_unsigned_to_nat(1u);
v___x_131_ = lean_nat_add(v_i_117_, v___x_130_);
lean_dec(v_i_117_);
v___x_132_ = lean_nat_add(v_k_118_, v___x_130_);
lean_dec(v_k_118_);
v_as_116_ = v___x_129_;
v_i_117_ = v___x_131_;
v_k_118_ = v___x_132_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1_spec__1___redArg___boxed(lean_object* v_hi_134_, lean_object* v_pivot_135_, lean_object* v_as_136_, lean_object* v_i_137_, lean_object* v_k_138_){
_start:
{
lean_object* v_res_139_; 
v_res_139_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1_spec__1___redArg(v_hi_134_, v_pivot_135_, v_as_136_, v_i_137_, v_k_138_);
lean_dec_ref(v_pivot_135_);
lean_dec(v_hi_134_);
return v_res_139_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1___redArg___lam__0(lean_object* v_x1_140_, lean_object* v_x2_141_){
_start:
{
lean_object* v_snd_142_; lean_object* v_snd_143_; uint8_t v___x_144_; 
v_snd_142_ = lean_ctor_get(v_x1_140_, 1);
v_snd_143_ = lean_ctor_get(v_x2_141_, 1);
v___x_144_ = lean_nat_dec_lt(v_snd_142_, v_snd_143_);
return v___x_144_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1___redArg___lam__0___boxed(lean_object* v_x1_145_, lean_object* v_x2_146_){
_start:
{
uint8_t v_res_147_; lean_object* v_r_148_; 
v_res_147_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1___redArg___lam__0(v_x1_145_, v_x2_146_);
lean_dec_ref(v_x2_146_);
lean_dec_ref(v_x1_145_);
v_r_148_ = lean_box(v_res_147_);
return v_r_148_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1___redArg(lean_object* v_n_149_, lean_object* v_as_150_, lean_object* v_lo_151_, lean_object* v_hi_152_){
_start:
{
lean_object* v___y_154_; uint8_t v___x_164_; 
v___x_164_ = lean_nat_dec_lt(v_lo_151_, v_hi_152_);
if (v___x_164_ == 0)
{
lean_dec(v_lo_151_);
return v_as_150_;
}
else
{
lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v_mid_167_; lean_object* v___y_169_; lean_object* v___y_175_; lean_object* v___x_180_; lean_object* v___x_181_; uint8_t v___x_182_; 
v___x_165_ = lean_nat_add(v_lo_151_, v_hi_152_);
v___x_166_ = lean_unsigned_to_nat(1u);
v_mid_167_ = lean_nat_shiftr(v___x_165_, v___x_166_);
lean_dec(v___x_165_);
v___x_180_ = lean_array_fget_borrowed(v_as_150_, v_mid_167_);
v___x_181_ = lean_array_fget_borrowed(v_as_150_, v_lo_151_);
v___x_182_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1___redArg___lam__0(v___x_180_, v___x_181_);
if (v___x_182_ == 0)
{
v___y_175_ = v_as_150_;
goto v___jp_174_;
}
else
{
lean_object* v___x_183_; 
v___x_183_ = lean_array_fswap(v_as_150_, v_lo_151_, v_mid_167_);
v___y_175_ = v___x_183_;
goto v___jp_174_;
}
v___jp_168_:
{
lean_object* v___x_170_; lean_object* v___x_171_; uint8_t v___x_172_; 
v___x_170_ = lean_array_fget_borrowed(v___y_169_, v_mid_167_);
v___x_171_ = lean_array_fget_borrowed(v___y_169_, v_hi_152_);
v___x_172_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1___redArg___lam__0(v___x_170_, v___x_171_);
if (v___x_172_ == 0)
{
lean_dec(v_mid_167_);
v___y_154_ = v___y_169_;
goto v___jp_153_;
}
else
{
lean_object* v___x_173_; 
v___x_173_ = lean_array_fswap(v___y_169_, v_mid_167_, v_hi_152_);
lean_dec(v_mid_167_);
v___y_154_ = v___x_173_;
goto v___jp_153_;
}
}
v___jp_174_:
{
lean_object* v___x_176_; lean_object* v___x_177_; uint8_t v___x_178_; 
v___x_176_ = lean_array_fget_borrowed(v___y_175_, v_hi_152_);
v___x_177_ = lean_array_fget_borrowed(v___y_175_, v_lo_151_);
v___x_178_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1___redArg___lam__0(v___x_176_, v___x_177_);
if (v___x_178_ == 0)
{
v___y_169_ = v___y_175_;
goto v___jp_168_;
}
else
{
lean_object* v___x_179_; 
v___x_179_ = lean_array_fswap(v___y_175_, v_lo_151_, v_hi_152_);
v___y_169_ = v___x_179_;
goto v___jp_168_;
}
}
}
v___jp_153_:
{
lean_object* v_pivot_155_; lean_object* v___x_156_; lean_object* v_fst_157_; lean_object* v_snd_158_; uint8_t v___x_159_; 
v_pivot_155_ = lean_array_fget(v___y_154_, v_hi_152_);
lean_inc_n(v_lo_151_, 2);
v___x_156_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1_spec__1___redArg(v_hi_152_, v_pivot_155_, v___y_154_, v_lo_151_, v_lo_151_);
lean_dec(v_pivot_155_);
v_fst_157_ = lean_ctor_get(v___x_156_, 0);
lean_inc(v_fst_157_);
v_snd_158_ = lean_ctor_get(v___x_156_, 1);
lean_inc(v_snd_158_);
lean_dec_ref(v___x_156_);
v___x_159_ = lean_nat_dec_le(v_hi_152_, v_fst_157_);
if (v___x_159_ == 0)
{
lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; 
v___x_160_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1___redArg(v_n_149_, v_snd_158_, v_lo_151_, v_fst_157_);
v___x_161_ = lean_unsigned_to_nat(1u);
v___x_162_ = lean_nat_add(v_fst_157_, v___x_161_);
lean_dec(v_fst_157_);
v_as_150_ = v___x_160_;
v_lo_151_ = v___x_162_;
goto _start;
}
else
{
lean_dec(v_fst_157_);
lean_dec(v_lo_151_);
return v_snd_158_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1___redArg___boxed(lean_object* v_n_184_, lean_object* v_as_185_, lean_object* v_lo_186_, lean_object* v_hi_187_){
_start:
{
lean_object* v_res_188_; 
v_res_188_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1___redArg(v_n_184_, v_as_185_, v_lo_186_, v_hi_187_);
lean_dec(v_hi_187_);
lean_dec(v_n_184_);
return v_res_188_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Elab_Tactic_Omega_atoms_spec__2(lean_object* v_x_189_, lean_object* v_x_190_){
_start:
{
if (lean_obj_tag(v_x_190_) == 0)
{
return v_x_189_;
}
else
{
lean_object* v_key_191_; lean_object* v_value_192_; lean_object* v_tail_193_; lean_object* v___x_194_; lean_object* v___x_195_; 
v_key_191_ = lean_ctor_get(v_x_190_, 0);
v_value_192_ = lean_ctor_get(v_x_190_, 1);
v_tail_193_ = lean_ctor_get(v_x_190_, 2);
lean_inc(v_value_192_);
lean_inc(v_key_191_);
v___x_194_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_194_, 0, v_key_191_);
lean_ctor_set(v___x_194_, 1, v_value_192_);
v___x_195_ = lean_array_push(v_x_189_, v___x_194_);
v_x_189_ = v___x_195_;
v_x_190_ = v_tail_193_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Elab_Tactic_Omega_atoms_spec__2___boxed(lean_object* v_x_197_, lean_object* v_x_198_){
_start:
{
lean_object* v_res_199_; 
v_res_199_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Elab_Tactic_Omega_atoms_spec__2(v_x_197_, v_x_198_);
lean_dec(v_x_198_);
return v_res_199_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Omega_atoms_spec__3(lean_object* v_as_200_, size_t v_i_201_, size_t v_stop_202_, lean_object* v_b_203_){
_start:
{
uint8_t v___x_204_; 
v___x_204_ = lean_usize_dec_eq(v_i_201_, v_stop_202_);
if (v___x_204_ == 0)
{
lean_object* v___x_205_; lean_object* v___x_206_; size_t v___x_207_; size_t v___x_208_; 
v___x_205_ = lean_array_uget_borrowed(v_as_200_, v_i_201_);
v___x_206_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Elab_Tactic_Omega_atoms_spec__2(v_b_203_, v___x_205_);
v___x_207_ = ((size_t)1ULL);
v___x_208_ = lean_usize_add(v_i_201_, v___x_207_);
v_i_201_ = v___x_208_;
v_b_203_ = v___x_206_;
goto _start;
}
else
{
return v_b_203_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Omega_atoms_spec__3___boxed(lean_object* v_as_210_, lean_object* v_i_211_, lean_object* v_stop_212_, lean_object* v_b_213_){
_start:
{
size_t v_i_boxed_214_; size_t v_stop_boxed_215_; lean_object* v_res_216_; 
v_i_boxed_214_ = lean_unbox_usize(v_i_211_);
lean_dec(v_i_211_);
v_stop_boxed_215_ = lean_unbox_usize(v_stop_212_);
lean_dec(v_stop_212_);
v_res_216_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Omega_atoms_spec__3(v_as_210_, v_i_boxed_214_, v_stop_boxed_215_, v_b_213_);
lean_dec_ref(v_as_210_);
return v_res_216_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Omega_atoms_spec__0(size_t v_sz_217_, size_t v_i_218_, lean_object* v_bs_219_){
_start:
{
uint8_t v___x_220_; 
v___x_220_ = lean_usize_dec_lt(v_i_218_, v_sz_217_);
if (v___x_220_ == 0)
{
return v_bs_219_;
}
else
{
lean_object* v_v_221_; lean_object* v_fst_222_; lean_object* v___x_223_; lean_object* v_bs_x27_224_; size_t v___x_225_; size_t v___x_226_; lean_object* v___x_227_; 
v_v_221_ = lean_array_uget_borrowed(v_bs_219_, v_i_218_);
v_fst_222_ = lean_ctor_get(v_v_221_, 0);
lean_inc(v_fst_222_);
v___x_223_ = lean_unsigned_to_nat(0u);
v_bs_x27_224_ = lean_array_uset(v_bs_219_, v_i_218_, v___x_223_);
v___x_225_ = ((size_t)1ULL);
v___x_226_ = lean_usize_add(v_i_218_, v___x_225_);
v___x_227_ = lean_array_uset(v_bs_x27_224_, v_i_218_, v_fst_222_);
v_i_218_ = v___x_226_;
v_bs_219_ = v___x_227_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Omega_atoms_spec__0___boxed(lean_object* v_sz_229_, lean_object* v_i_230_, lean_object* v_bs_231_){
_start:
{
size_t v_sz_boxed_232_; size_t v_i_boxed_233_; lean_object* v_res_234_; 
v_sz_boxed_232_ = lean_unbox_usize(v_sz_229_);
lean_dec(v_sz_229_);
v_i_boxed_233_ = lean_unbox_usize(v_i_230_);
lean_dec(v_i_230_);
v_res_234_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Omega_atoms_spec__0(v_sz_boxed_232_, v_i_boxed_233_, v_bs_231_);
return v_res_234_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_atoms___redArg(lean_object* v_a_235_){
_start:
{
lean_object* v___x_237_; lean_object* v___y_239_; lean_object* v___y_245_; lean_object* v___y_246_; lean_object* v___y_247_; lean_object* v___y_248_; lean_object* v___y_251_; lean_object* v___y_252_; lean_object* v___y_253_; lean_object* v___y_254_; lean_object* v___y_257_; lean_object* v_size_264_; lean_object* v_buckets_265_; lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; uint8_t v___x_269_; 
v___x_237_ = lean_st_ref_get(v_a_235_);
v_size_264_ = lean_ctor_get(v___x_237_, 0);
lean_inc(v_size_264_);
v_buckets_265_ = lean_ctor_get(v___x_237_, 1);
lean_inc_ref(v_buckets_265_);
lean_dec(v___x_237_);
v___x_266_ = lean_mk_empty_array_with_capacity(v_size_264_);
lean_dec(v_size_264_);
v___x_267_ = lean_unsigned_to_nat(0u);
v___x_268_ = lean_array_get_size(v_buckets_265_);
v___x_269_ = lean_nat_dec_lt(v___x_267_, v___x_268_);
if (v___x_269_ == 0)
{
lean_dec_ref(v_buckets_265_);
v___y_257_ = v___x_266_;
goto v___jp_256_;
}
else
{
size_t v___x_270_; size_t v___x_271_; lean_object* v___x_272_; 
v___x_270_ = ((size_t)0ULL);
v___x_271_ = lean_usize_of_nat(v___x_268_);
v___x_272_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Omega_atoms_spec__3(v_buckets_265_, v___x_270_, v___x_271_, v___x_266_);
lean_dec_ref(v_buckets_265_);
v___y_257_ = v___x_272_;
goto v___jp_256_;
}
v___jp_238_:
{
size_t v_sz_240_; size_t v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; 
v_sz_240_ = lean_array_size(v___y_239_);
v___x_241_ = ((size_t)0ULL);
v___x_242_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Omega_atoms_spec__0(v_sz_240_, v___x_241_, v___y_239_);
v___x_243_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_243_, 0, v___x_242_);
return v___x_243_;
}
v___jp_244_:
{
lean_object* v___x_249_; 
v___x_249_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1___redArg(v___y_247_, v___y_245_, v___y_246_, v___y_248_);
lean_dec(v___y_248_);
lean_dec(v___y_247_);
v___y_239_ = v___x_249_;
goto v___jp_238_;
}
v___jp_250_:
{
uint8_t v___x_255_; 
v___x_255_ = lean_nat_dec_le(v___y_254_, v___y_251_);
if (v___x_255_ == 0)
{
lean_dec(v___y_251_);
lean_inc(v___y_254_);
v___y_245_ = v___y_252_;
v___y_246_ = v___y_254_;
v___y_247_ = v___y_253_;
v___y_248_ = v___y_254_;
goto v___jp_244_;
}
else
{
v___y_245_ = v___y_252_;
v___y_246_ = v___y_254_;
v___y_247_ = v___y_253_;
v___y_248_ = v___y_251_;
goto v___jp_244_;
}
}
v___jp_256_:
{
lean_object* v___x_258_; lean_object* v___x_259_; uint8_t v___x_260_; 
v___x_258_ = lean_array_get_size(v___y_257_);
v___x_259_ = lean_unsigned_to_nat(0u);
v___x_260_ = lean_nat_dec_eq(v___x_258_, v___x_259_);
if (v___x_260_ == 0)
{
lean_object* v___x_261_; lean_object* v___x_262_; uint8_t v___x_263_; 
v___x_261_ = lean_unsigned_to_nat(1u);
v___x_262_ = lean_nat_sub(v___x_258_, v___x_261_);
v___x_263_ = lean_nat_dec_le(v___x_259_, v___x_262_);
if (v___x_263_ == 0)
{
lean_inc(v___x_262_);
v___y_251_ = v___x_262_;
v___y_252_ = v___y_257_;
v___y_253_ = v___x_258_;
v___y_254_ = v___x_262_;
goto v___jp_250_;
}
else
{
v___y_251_ = v___x_262_;
v___y_252_ = v___y_257_;
v___y_253_ = v___x_258_;
v___y_254_ = v___x_259_;
goto v___jp_250_;
}
}
else
{
v___y_239_ = v___y_257_;
goto v___jp_238_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_atoms___redArg___boxed(lean_object* v_a_273_, lean_object* v_a_274_){
_start:
{
lean_object* v_res_275_; 
v_res_275_ = l_Lean_Elab_Tactic_Omega_atoms___redArg(v_a_273_);
lean_dec(v_a_273_);
return v_res_275_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_atoms(lean_object* v_a_276_, lean_object* v_a_277_, lean_object* v_a_278_, uint8_t v_a_279_, lean_object* v_a_280_, lean_object* v_a_281_, lean_object* v_a_282_, lean_object* v_a_283_, lean_object* v_a_284_){
_start:
{
lean_object* v___x_286_; 
v___x_286_ = l_Lean_Elab_Tactic_Omega_atoms___redArg(v_a_277_);
return v___x_286_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_atoms___boxed(lean_object* v_a_287_, lean_object* v_a_288_, lean_object* v_a_289_, lean_object* v_a_290_, lean_object* v_a_291_, lean_object* v_a_292_, lean_object* v_a_293_, lean_object* v_a_294_, lean_object* v_a_295_, lean_object* v_a_296_){
_start:
{
uint8_t v_a_boxed_297_; lean_object* v_res_298_; 
v_a_boxed_297_ = lean_unbox(v_a_290_);
v_res_298_ = l_Lean_Elab_Tactic_Omega_atoms(v_a_287_, v_a_288_, v_a_289_, v_a_boxed_297_, v_a_291_, v_a_292_, v_a_293_, v_a_294_, v_a_295_);
lean_dec(v_a_295_);
lean_dec_ref(v_a_294_);
lean_dec(v_a_293_);
lean_dec_ref(v_a_292_);
lean_dec(v_a_291_);
lean_dec_ref(v_a_289_);
lean_dec(v_a_288_);
lean_dec(v_a_287_);
return v_res_298_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1(lean_object* v_n_299_, lean_object* v_as_300_, lean_object* v_lo_301_, lean_object* v_hi_302_, lean_object* v_w_303_, lean_object* v_hlo_304_, lean_object* v_hhi_305_){
_start:
{
lean_object* v___x_306_; 
v___x_306_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1___redArg(v_n_299_, v_as_300_, v_lo_301_, v_hi_302_);
return v___x_306_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1___boxed(lean_object* v_n_307_, lean_object* v_as_308_, lean_object* v_lo_309_, lean_object* v_hi_310_, lean_object* v_w_311_, lean_object* v_hlo_312_, lean_object* v_hhi_313_){
_start:
{
lean_object* v_res_314_; 
v_res_314_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1(v_n_307_, v_as_308_, v_lo_309_, v_hi_310_, v_w_311_, v_hlo_312_, v_hhi_313_);
lean_dec(v_hi_310_);
lean_dec(v_n_307_);
return v_res_314_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1_spec__1(lean_object* v_n_315_, lean_object* v_lo_316_, lean_object* v_hi_317_, lean_object* v_hhi_318_, lean_object* v_pivot_319_, lean_object* v_as_320_, lean_object* v_i_321_, lean_object* v_k_322_, lean_object* v_ilo_323_, lean_object* v_ik_324_, lean_object* v_w_325_){
_start:
{
lean_object* v___x_326_; 
v___x_326_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1_spec__1___redArg(v_hi_317_, v_pivot_319_, v_as_320_, v_i_321_, v_k_322_);
return v___x_326_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1_spec__1___boxed(lean_object* v_n_327_, lean_object* v_lo_328_, lean_object* v_hi_329_, lean_object* v_hhi_330_, lean_object* v_pivot_331_, lean_object* v_as_332_, lean_object* v_i_333_, lean_object* v_k_334_, lean_object* v_ilo_335_, lean_object* v_ik_336_, lean_object* v_w_337_){
_start:
{
lean_object* v_res_338_; 
v_res_338_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1_spec__1(v_n_327_, v_lo_328_, v_hi_329_, v_hhi_330_, v_pivot_331_, v_as_332_, v_i_333_, v_k_334_, v_ilo_335_, v_ik_336_, v_w_337_);
lean_dec_ref(v_pivot_331_);
lean_dec(v_hi_329_);
lean_dec(v_lo_328_);
lean_dec(v_n_327_);
return v_res_338_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__2(void){
_start:
{
lean_object* v___x_342_; lean_object* v___x_343_; lean_object* v___x_344_; 
v___x_342_ = lean_box(0);
v___x_343_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__1));
v___x_344_ = l_Lean_Expr_const___override(v___x_343_, v___x_342_);
return v___x_344_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_atomsList___redArg(lean_object* v_a_345_, lean_object* v_a_346_, lean_object* v_a_347_, lean_object* v_a_348_, lean_object* v_a_349_){
_start:
{
lean_object* v___x_351_; lean_object* v_a_352_; lean_object* v___x_353_; lean_object* v___x_354_; lean_object* v___x_355_; 
v___x_351_ = l_Lean_Elab_Tactic_Omega_atoms___redArg(v_a_345_);
v_a_352_ = lean_ctor_get(v___x_351_, 0);
lean_inc(v_a_352_);
lean_dec_ref(v___x_351_);
v___x_353_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__2, &l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__2_once, _init_l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__2);
v___x_354_ = lean_array_to_list(v_a_352_);
v___x_355_ = l_Lean_Meta_mkListLit(v___x_353_, v___x_354_, v_a_346_, v_a_347_, v_a_348_, v_a_349_);
return v___x_355_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_atomsList___redArg___boxed(lean_object* v_a_356_, lean_object* v_a_357_, lean_object* v_a_358_, lean_object* v_a_359_, lean_object* v_a_360_, lean_object* v_a_361_){
_start:
{
lean_object* v_res_362_; 
v_res_362_ = l_Lean_Elab_Tactic_Omega_atomsList___redArg(v_a_356_, v_a_357_, v_a_358_, v_a_359_, v_a_360_);
lean_dec(v_a_360_);
lean_dec_ref(v_a_359_);
lean_dec(v_a_358_);
lean_dec_ref(v_a_357_);
lean_dec(v_a_356_);
return v_res_362_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_atomsList(lean_object* v_a_363_, lean_object* v_a_364_, lean_object* v_a_365_, uint8_t v_a_366_, lean_object* v_a_367_, lean_object* v_a_368_, lean_object* v_a_369_, lean_object* v_a_370_, lean_object* v_a_371_){
_start:
{
lean_object* v___x_373_; 
v___x_373_ = l_Lean_Elab_Tactic_Omega_atomsList___redArg(v_a_364_, v_a_368_, v_a_369_, v_a_370_, v_a_371_);
return v___x_373_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_atomsList___boxed(lean_object* v_a_374_, lean_object* v_a_375_, lean_object* v_a_376_, lean_object* v_a_377_, lean_object* v_a_378_, lean_object* v_a_379_, lean_object* v_a_380_, lean_object* v_a_381_, lean_object* v_a_382_, lean_object* v_a_383_){
_start:
{
uint8_t v_a_boxed_384_; lean_object* v_res_385_; 
v_a_boxed_384_ = lean_unbox(v_a_377_);
v_res_385_ = l_Lean_Elab_Tactic_Omega_atomsList(v_a_374_, v_a_375_, v_a_376_, v_a_boxed_384_, v_a_378_, v_a_379_, v_a_380_, v_a_381_, v_a_382_);
lean_dec(v_a_382_);
lean_dec_ref(v_a_381_);
lean_dec(v_a_380_);
lean_dec_ref(v_a_379_);
lean_dec(v_a_378_);
lean_dec_ref(v_a_376_);
lean_dec(v_a_375_);
lean_dec(v_a_374_);
return v_res_385_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__5(void){
_start:
{
lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___x_397_; 
v___x_395_ = lean_box(0);
v___x_396_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__4));
v___x_397_ = l_Lean_Expr_const___override(v___x_396_, v___x_395_);
return v___x_397_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg(lean_object* v_a_398_, lean_object* v_a_399_, lean_object* v_a_400_, lean_object* v_a_401_, lean_object* v_a_402_){
_start:
{
lean_object* v___x_404_; 
v___x_404_ = l_Lean_Elab_Tactic_Omega_atomsList___redArg(v_a_398_, v_a_399_, v_a_400_, v_a_401_, v_a_402_);
if (lean_obj_tag(v___x_404_) == 0)
{
lean_object* v_a_405_; lean_object* v___x_407_; uint8_t v_isShared_408_; uint8_t v_isSharedCheck_414_; 
v_a_405_ = lean_ctor_get(v___x_404_, 0);
v_isSharedCheck_414_ = !lean_is_exclusive(v___x_404_);
if (v_isSharedCheck_414_ == 0)
{
v___x_407_ = v___x_404_;
v_isShared_408_ = v_isSharedCheck_414_;
goto v_resetjp_406_;
}
else
{
lean_inc(v_a_405_);
lean_dec(v___x_404_);
v___x_407_ = lean_box(0);
v_isShared_408_ = v_isSharedCheck_414_;
goto v_resetjp_406_;
}
v_resetjp_406_:
{
lean_object* v___x_409_; lean_object* v___x_410_; lean_object* v___x_412_; 
v___x_409_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__5, &l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__5_once, _init_l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__5);
v___x_410_ = l_Lean_Expr_app___override(v___x_409_, v_a_405_);
if (v_isShared_408_ == 0)
{
lean_ctor_set(v___x_407_, 0, v___x_410_);
v___x_412_ = v___x_407_;
goto v_reusejp_411_;
}
else
{
lean_object* v_reuseFailAlloc_413_; 
v_reuseFailAlloc_413_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_413_, 0, v___x_410_);
v___x_412_ = v_reuseFailAlloc_413_;
goto v_reusejp_411_;
}
v_reusejp_411_:
{
return v___x_412_;
}
}
}
else
{
return v___x_404_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___boxed(lean_object* v_a_415_, lean_object* v_a_416_, lean_object* v_a_417_, lean_object* v_a_418_, lean_object* v_a_419_, lean_object* v_a_420_){
_start:
{
lean_object* v_res_421_; 
v_res_421_ = l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg(v_a_415_, v_a_416_, v_a_417_, v_a_418_, v_a_419_);
lean_dec(v_a_419_);
lean_dec_ref(v_a_418_);
lean_dec(v_a_417_);
lean_dec_ref(v_a_416_);
lean_dec(v_a_415_);
return v_res_421_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_atomsCoeffs(lean_object* v_a_422_, lean_object* v_a_423_, lean_object* v_a_424_, uint8_t v_a_425_, lean_object* v_a_426_, lean_object* v_a_427_, lean_object* v_a_428_, lean_object* v_a_429_, lean_object* v_a_430_){
_start:
{
lean_object* v___x_432_; 
v___x_432_ = l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg(v_a_423_, v_a_427_, v_a_428_, v_a_429_, v_a_430_);
return v___x_432_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_atomsCoeffs___boxed(lean_object* v_a_433_, lean_object* v_a_434_, lean_object* v_a_435_, lean_object* v_a_436_, lean_object* v_a_437_, lean_object* v_a_438_, lean_object* v_a_439_, lean_object* v_a_440_, lean_object* v_a_441_, lean_object* v_a_442_){
_start:
{
uint8_t v_a_boxed_443_; lean_object* v_res_444_; 
v_a_boxed_443_ = lean_unbox(v_a_436_);
v_res_444_ = l_Lean_Elab_Tactic_Omega_atomsCoeffs(v_a_433_, v_a_434_, v_a_435_, v_a_boxed_443_, v_a_437_, v_a_438_, v_a_439_, v_a_440_, v_a_441_);
lean_dec(v_a_441_);
lean_dec_ref(v_a_440_);
lean_dec(v_a_439_);
lean_dec_ref(v_a_438_);
lean_dec(v_a_437_);
lean_dec_ref(v_a_435_);
lean_dec(v_a_434_);
lean_dec(v_a_433_);
return v_res_444_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_commitWhen___redArg(lean_object* v_t_445_, lean_object* v_a_446_, lean_object* v_a_447_, lean_object* v_a_448_, uint8_t v_a_449_, lean_object* v_a_450_, lean_object* v_a_451_, lean_object* v_a_452_, lean_object* v_a_453_, lean_object* v_a_454_){
_start:
{
lean_object* v___x_456_; lean_object* v___x_457_; lean_object* v___x_458_; lean_object* v___x_459_; 
v___x_456_ = lean_st_ref_get(v_a_447_);
v___x_457_ = lean_st_ref_get(v_a_446_);
v___x_458_ = lean_box(v_a_449_);
lean_inc(v_a_454_);
lean_inc_ref(v_a_453_);
lean_inc(v_a_452_);
lean_inc_ref(v_a_451_);
lean_inc(v_a_450_);
lean_inc_ref(v_a_448_);
lean_inc(v_a_447_);
lean_inc(v_a_446_);
v___x_459_ = lean_apply_10(v_t_445_, v_a_446_, v_a_447_, v_a_448_, v___x_458_, v_a_450_, v_a_451_, v_a_452_, v_a_453_, v_a_454_, lean_box(0));
if (lean_obj_tag(v___x_459_) == 0)
{
lean_object* v_a_460_; lean_object* v___x_462_; uint8_t v_isShared_463_; uint8_t v_isSharedCheck_478_; 
v_a_460_ = lean_ctor_get(v___x_459_, 0);
v_isSharedCheck_478_ = !lean_is_exclusive(v___x_459_);
if (v_isSharedCheck_478_ == 0)
{
v___x_462_ = v___x_459_;
v_isShared_463_ = v_isSharedCheck_478_;
goto v_resetjp_461_;
}
else
{
lean_inc(v_a_460_);
lean_dec(v___x_459_);
v___x_462_ = lean_box(0);
v_isShared_463_ = v_isSharedCheck_478_;
goto v_resetjp_461_;
}
v_resetjp_461_:
{
lean_object* v_snd_464_; uint8_t v___x_465_; 
v_snd_464_ = lean_ctor_get(v_a_460_, 1);
v___x_465_ = lean_unbox(v_snd_464_);
if (v___x_465_ == 0)
{
lean_object* v_fst_466_; lean_object* v___x_467_; lean_object* v___x_468_; lean_object* v___x_469_; lean_object* v___x_470_; lean_object* v___x_472_; 
v_fst_466_ = lean_ctor_get(v_a_460_, 0);
lean_inc(v_fst_466_);
lean_dec(v_a_460_);
v___x_467_ = lean_st_ref_take(v_a_447_);
lean_dec(v___x_467_);
v___x_468_ = lean_st_ref_put(v_a_447_, v___x_456_);
v___x_469_ = lean_st_ref_take(v_a_446_);
lean_dec(v___x_469_);
v___x_470_ = lean_st_ref_put(v_a_446_, v___x_457_);
if (v_isShared_463_ == 0)
{
lean_ctor_set(v___x_462_, 0, v_fst_466_);
v___x_472_ = v___x_462_;
goto v_reusejp_471_;
}
else
{
lean_object* v_reuseFailAlloc_473_; 
v_reuseFailAlloc_473_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_473_, 0, v_fst_466_);
v___x_472_ = v_reuseFailAlloc_473_;
goto v_reusejp_471_;
}
v_reusejp_471_:
{
return v___x_472_;
}
}
else
{
lean_object* v_fst_474_; lean_object* v___x_476_; 
lean_dec(v___x_457_);
lean_dec(v___x_456_);
v_fst_474_ = lean_ctor_get(v_a_460_, 0);
lean_inc(v_fst_474_);
lean_dec(v_a_460_);
if (v_isShared_463_ == 0)
{
lean_ctor_set(v___x_462_, 0, v_fst_474_);
v___x_476_ = v___x_462_;
goto v_reusejp_475_;
}
else
{
lean_object* v_reuseFailAlloc_477_; 
v_reuseFailAlloc_477_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_477_, 0, v_fst_474_);
v___x_476_ = v_reuseFailAlloc_477_;
goto v_reusejp_475_;
}
v_reusejp_475_:
{
return v___x_476_;
}
}
}
}
else
{
lean_object* v_a_479_; lean_object* v___x_481_; uint8_t v_isShared_482_; uint8_t v_isSharedCheck_486_; 
lean_dec(v___x_457_);
lean_dec(v___x_456_);
v_a_479_ = lean_ctor_get(v___x_459_, 0);
v_isSharedCheck_486_ = !lean_is_exclusive(v___x_459_);
if (v_isSharedCheck_486_ == 0)
{
v___x_481_ = v___x_459_;
v_isShared_482_ = v_isSharedCheck_486_;
goto v_resetjp_480_;
}
else
{
lean_inc(v_a_479_);
lean_dec(v___x_459_);
v___x_481_ = lean_box(0);
v_isShared_482_ = v_isSharedCheck_486_;
goto v_resetjp_480_;
}
v_resetjp_480_:
{
lean_object* v___x_484_; 
if (v_isShared_482_ == 0)
{
v___x_484_ = v___x_481_;
goto v_reusejp_483_;
}
else
{
lean_object* v_reuseFailAlloc_485_; 
v_reuseFailAlloc_485_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_485_, 0, v_a_479_);
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
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_commitWhen___redArg___boxed(lean_object* v_t_487_, lean_object* v_a_488_, lean_object* v_a_489_, lean_object* v_a_490_, lean_object* v_a_491_, lean_object* v_a_492_, lean_object* v_a_493_, lean_object* v_a_494_, lean_object* v_a_495_, lean_object* v_a_496_, lean_object* v_a_497_){
_start:
{
uint8_t v_a_boxed_498_; lean_object* v_res_499_; 
v_a_boxed_498_ = lean_unbox(v_a_491_);
v_res_499_ = l_Lean_Elab_Tactic_Omega_commitWhen___redArg(v_t_487_, v_a_488_, v_a_489_, v_a_490_, v_a_boxed_498_, v_a_492_, v_a_493_, v_a_494_, v_a_495_, v_a_496_);
lean_dec(v_a_496_);
lean_dec_ref(v_a_495_);
lean_dec(v_a_494_);
lean_dec_ref(v_a_493_);
lean_dec(v_a_492_);
lean_dec_ref(v_a_490_);
lean_dec(v_a_489_);
lean_dec(v_a_488_);
return v_res_499_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_commitWhen(lean_object* v_00_u03b1_500_, lean_object* v_t_501_, lean_object* v_a_502_, lean_object* v_a_503_, lean_object* v_a_504_, uint8_t v_a_505_, lean_object* v_a_506_, lean_object* v_a_507_, lean_object* v_a_508_, lean_object* v_a_509_, lean_object* v_a_510_){
_start:
{
lean_object* v___x_512_; 
v___x_512_ = l_Lean_Elab_Tactic_Omega_commitWhen___redArg(v_t_501_, v_a_502_, v_a_503_, v_a_504_, v_a_505_, v_a_506_, v_a_507_, v_a_508_, v_a_509_, v_a_510_);
return v___x_512_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_commitWhen___boxed(lean_object* v_00_u03b1_513_, lean_object* v_t_514_, lean_object* v_a_515_, lean_object* v_a_516_, lean_object* v_a_517_, lean_object* v_a_518_, lean_object* v_a_519_, lean_object* v_a_520_, lean_object* v_a_521_, lean_object* v_a_522_, lean_object* v_a_523_, lean_object* v_a_524_){
_start:
{
uint8_t v_a_boxed_525_; lean_object* v_res_526_; 
v_a_boxed_525_ = lean_unbox(v_a_518_);
v_res_526_ = l_Lean_Elab_Tactic_Omega_commitWhen(v_00_u03b1_513_, v_t_514_, v_a_515_, v_a_516_, v_a_517_, v_a_boxed_525_, v_a_519_, v_a_520_, v_a_521_, v_a_522_, v_a_523_);
lean_dec(v_a_523_);
lean_dec_ref(v_a_522_);
lean_dec(v_a_521_);
lean_dec_ref(v_a_520_);
lean_dec(v_a_519_);
lean_dec_ref(v_a_517_);
lean_dec(v_a_516_);
lean_dec(v_a_515_);
return v_res_526_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_withoutModifyingState___redArg___lam__0(lean_object* v_t_527_, lean_object* v___y_528_, lean_object* v___y_529_, lean_object* v___y_530_, uint8_t v___y_531_, lean_object* v___y_532_, lean_object* v___y_533_, lean_object* v___y_534_, lean_object* v___y_535_, lean_object* v___y_536_){
_start:
{
lean_object* v___x_538_; lean_object* v___x_539_; 
v___x_538_ = lean_box(v___y_531_);
lean_inc(v___y_536_);
lean_inc_ref(v___y_535_);
lean_inc(v___y_534_);
lean_inc_ref(v___y_533_);
lean_inc(v___y_532_);
lean_inc_ref(v___y_530_);
lean_inc(v___y_529_);
lean_inc(v___y_528_);
v___x_539_ = lean_apply_10(v_t_527_, v___y_528_, v___y_529_, v___y_530_, v___x_538_, v___y_532_, v___y_533_, v___y_534_, v___y_535_, v___y_536_, lean_box(0));
if (lean_obj_tag(v___x_539_) == 0)
{
lean_object* v_a_540_; lean_object* v___x_542_; uint8_t v_isShared_543_; uint8_t v_isSharedCheck_550_; 
v_a_540_ = lean_ctor_get(v___x_539_, 0);
v_isSharedCheck_550_ = !lean_is_exclusive(v___x_539_);
if (v_isSharedCheck_550_ == 0)
{
v___x_542_ = v___x_539_;
v_isShared_543_ = v_isSharedCheck_550_;
goto v_resetjp_541_;
}
else
{
lean_inc(v_a_540_);
lean_dec(v___x_539_);
v___x_542_ = lean_box(0);
v_isShared_543_ = v_isSharedCheck_550_;
goto v_resetjp_541_;
}
v_resetjp_541_:
{
uint8_t v___x_544_; lean_object* v___x_545_; lean_object* v___x_546_; lean_object* v___x_548_; 
v___x_544_ = 0;
v___x_545_ = lean_box(v___x_544_);
v___x_546_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_546_, 0, v_a_540_);
lean_ctor_set(v___x_546_, 1, v___x_545_);
if (v_isShared_543_ == 0)
{
lean_ctor_set(v___x_542_, 0, v___x_546_);
v___x_548_ = v___x_542_;
goto v_reusejp_547_;
}
else
{
lean_object* v_reuseFailAlloc_549_; 
v_reuseFailAlloc_549_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_549_, 0, v___x_546_);
v___x_548_ = v_reuseFailAlloc_549_;
goto v_reusejp_547_;
}
v_reusejp_547_:
{
return v___x_548_;
}
}
}
else
{
lean_object* v_a_551_; lean_object* v___x_553_; uint8_t v_isShared_554_; uint8_t v_isSharedCheck_558_; 
v_a_551_ = lean_ctor_get(v___x_539_, 0);
v_isSharedCheck_558_ = !lean_is_exclusive(v___x_539_);
if (v_isSharedCheck_558_ == 0)
{
v___x_553_ = v___x_539_;
v_isShared_554_ = v_isSharedCheck_558_;
goto v_resetjp_552_;
}
else
{
lean_inc(v_a_551_);
lean_dec(v___x_539_);
v___x_553_ = lean_box(0);
v_isShared_554_ = v_isSharedCheck_558_;
goto v_resetjp_552_;
}
v_resetjp_552_:
{
lean_object* v___x_556_; 
if (v_isShared_554_ == 0)
{
v___x_556_ = v___x_553_;
goto v_reusejp_555_;
}
else
{
lean_object* v_reuseFailAlloc_557_; 
v_reuseFailAlloc_557_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_557_, 0, v_a_551_);
v___x_556_ = v_reuseFailAlloc_557_;
goto v_reusejp_555_;
}
v_reusejp_555_:
{
return v___x_556_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_withoutModifyingState___redArg___lam__0___boxed(lean_object* v_t_559_, lean_object* v___y_560_, lean_object* v___y_561_, lean_object* v___y_562_, lean_object* v___y_563_, lean_object* v___y_564_, lean_object* v___y_565_, lean_object* v___y_566_, lean_object* v___y_567_, lean_object* v___y_568_, lean_object* v___y_569_){
_start:
{
uint8_t v___y_673__boxed_570_; lean_object* v_res_571_; 
v___y_673__boxed_570_ = lean_unbox(v___y_563_);
v_res_571_ = l_Lean_Elab_Tactic_Omega_withoutModifyingState___redArg___lam__0(v_t_559_, v___y_560_, v___y_561_, v___y_562_, v___y_673__boxed_570_, v___y_564_, v___y_565_, v___y_566_, v___y_567_, v___y_568_);
lean_dec(v___y_568_);
lean_dec_ref(v___y_567_);
lean_dec(v___y_566_);
lean_dec_ref(v___y_565_);
lean_dec(v___y_564_);
lean_dec_ref(v___y_562_);
lean_dec(v___y_561_);
lean_dec(v___y_560_);
return v_res_571_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_withoutModifyingState___redArg(lean_object* v_t_572_, lean_object* v_a_573_, lean_object* v_a_574_, lean_object* v_a_575_, uint8_t v_a_576_, lean_object* v_a_577_, lean_object* v_a_578_, lean_object* v_a_579_, lean_object* v_a_580_, lean_object* v_a_581_){
_start:
{
lean_object* v___f_583_; lean_object* v___x_584_; 
v___f_583_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Omega_withoutModifyingState___redArg___lam__0___boxed), 11, 1);
lean_closure_set(v___f_583_, 0, v_t_572_);
v___x_584_ = l_Lean_Elab_Tactic_Omega_commitWhen___redArg(v___f_583_, v_a_573_, v_a_574_, v_a_575_, v_a_576_, v_a_577_, v_a_578_, v_a_579_, v_a_580_, v_a_581_);
return v___x_584_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_withoutModifyingState___redArg___boxed(lean_object* v_t_585_, lean_object* v_a_586_, lean_object* v_a_587_, lean_object* v_a_588_, lean_object* v_a_589_, lean_object* v_a_590_, lean_object* v_a_591_, lean_object* v_a_592_, lean_object* v_a_593_, lean_object* v_a_594_, lean_object* v_a_595_){
_start:
{
uint8_t v_a_boxed_596_; lean_object* v_res_597_; 
v_a_boxed_596_ = lean_unbox(v_a_589_);
v_res_597_ = l_Lean_Elab_Tactic_Omega_withoutModifyingState___redArg(v_t_585_, v_a_586_, v_a_587_, v_a_588_, v_a_boxed_596_, v_a_590_, v_a_591_, v_a_592_, v_a_593_, v_a_594_);
lean_dec(v_a_594_);
lean_dec_ref(v_a_593_);
lean_dec(v_a_592_);
lean_dec_ref(v_a_591_);
lean_dec(v_a_590_);
lean_dec_ref(v_a_588_);
lean_dec(v_a_587_);
lean_dec(v_a_586_);
return v_res_597_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_withoutModifyingState(lean_object* v_00_u03b1_598_, lean_object* v_t_599_, lean_object* v_a_600_, lean_object* v_a_601_, lean_object* v_a_602_, uint8_t v_a_603_, lean_object* v_a_604_, lean_object* v_a_605_, lean_object* v_a_606_, lean_object* v_a_607_, lean_object* v_a_608_){
_start:
{
lean_object* v___x_610_; 
v___x_610_ = l_Lean_Elab_Tactic_Omega_withoutModifyingState___redArg(v_t_599_, v_a_600_, v_a_601_, v_a_602_, v_a_603_, v_a_604_, v_a_605_, v_a_606_, v_a_607_, v_a_608_);
return v___x_610_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_withoutModifyingState___boxed(lean_object* v_00_u03b1_611_, lean_object* v_t_612_, lean_object* v_a_613_, lean_object* v_a_614_, lean_object* v_a_615_, lean_object* v_a_616_, lean_object* v_a_617_, lean_object* v_a_618_, lean_object* v_a_619_, lean_object* v_a_620_, lean_object* v_a_621_, lean_object* v_a_622_){
_start:
{
uint8_t v_a_boxed_623_; lean_object* v_res_624_; 
v_a_boxed_623_ = lean_unbox(v_a_616_);
v_res_624_ = l_Lean_Elab_Tactic_Omega_withoutModifyingState(v_00_u03b1_611_, v_t_612_, v_a_613_, v_a_614_, v_a_615_, v_a_boxed_623_, v_a_617_, v_a_618_, v_a_619_, v_a_620_, v_a_621_);
lean_dec(v_a_621_);
lean_dec_ref(v_a_620_);
lean_dec(v_a_619_);
lean_dec_ref(v_a_618_);
lean_dec(v_a_617_);
lean_dec_ref(v_a_615_);
lean_dec(v_a_614_);
lean_dec(v_a_613_);
return v_res_624_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_natCast_x3f(lean_object* v_n_627_){
_start:
{
lean_object* v___x_628_; lean_object* v_fst_629_; 
lean_inc_ref(v_n_627_);
v___x_628_ = l_Lean_Expr_getAppFnArgs(v_n_627_);
v_fst_629_ = lean_ctor_get(v___x_628_, 0);
lean_inc(v_fst_629_);
if (lean_obj_tag(v_fst_629_) == 1)
{
lean_object* v_pre_630_; 
v_pre_630_ = lean_ctor_get(v_fst_629_, 0);
lean_inc(v_pre_630_);
if (lean_obj_tag(v_pre_630_) == 1)
{
lean_object* v_pre_631_; 
v_pre_631_ = lean_ctor_get(v_pre_630_, 0);
if (lean_obj_tag(v_pre_631_) == 0)
{
lean_object* v_snd_632_; lean_object* v_str_633_; lean_object* v_str_634_; lean_object* v___x_635_; uint8_t v___x_636_; 
v_snd_632_ = lean_ctor_get(v___x_628_, 1);
lean_inc(v_snd_632_);
lean_dec_ref(v___x_628_);
v_str_633_ = lean_ctor_get(v_fst_629_, 1);
lean_inc_ref(v_str_633_);
lean_dec_ref_known(v_fst_629_, 2);
v_str_634_ = lean_ctor_get(v_pre_630_, 1);
lean_inc_ref(v_str_634_);
lean_dec_ref_known(v_pre_630_, 2);
v___x_635_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_natCast_x3f___closed__0));
v___x_636_ = lean_string_dec_eq(v_str_634_, v___x_635_);
lean_dec_ref(v_str_634_);
if (v___x_636_ == 0)
{
lean_object* v___x_637_; 
lean_dec_ref(v_str_633_);
lean_dec(v_snd_632_);
v___x_637_ = l_Lean_Expr_nat_x3f(v_n_627_);
lean_dec_ref(v_n_627_);
return v___x_637_;
}
else
{
lean_object* v___x_638_; uint8_t v___x_639_; 
v___x_638_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_natCast_x3f___closed__1));
v___x_639_ = lean_string_dec_eq(v_str_633_, v___x_638_);
lean_dec_ref(v_str_633_);
if (v___x_639_ == 0)
{
lean_object* v___x_640_; 
lean_dec(v_snd_632_);
v___x_640_ = l_Lean_Expr_nat_x3f(v_n_627_);
lean_dec_ref(v_n_627_);
return v___x_640_;
}
else
{
lean_object* v___x_641_; lean_object* v___x_642_; uint8_t v___x_643_; 
v___x_641_ = lean_array_get_size(v_snd_632_);
v___x_642_ = lean_unsigned_to_nat(3u);
v___x_643_ = lean_nat_dec_eq(v___x_641_, v___x_642_);
if (v___x_643_ == 0)
{
lean_object* v___x_644_; 
lean_dec(v_snd_632_);
v___x_644_ = l_Lean_Expr_nat_x3f(v_n_627_);
lean_dec_ref(v_n_627_);
return v___x_644_;
}
else
{
lean_object* v___x_645_; lean_object* v___x_646_; lean_object* v___x_647_; 
lean_dec_ref(v_n_627_);
v___x_645_ = lean_unsigned_to_nat(2u);
v___x_646_ = lean_array_fget(v_snd_632_, v___x_645_);
lean_dec(v_snd_632_);
v___x_647_ = l_Lean_Expr_nat_x3f(v___x_646_);
lean_dec(v___x_646_);
return v___x_647_;
}
}
}
}
else
{
lean_object* v___x_648_; 
lean_dec_ref_known(v_pre_630_, 2);
lean_dec_ref_known(v_fst_629_, 2);
lean_dec_ref(v___x_628_);
v___x_648_ = l_Lean_Expr_nat_x3f(v_n_627_);
lean_dec_ref(v_n_627_);
return v___x_648_;
}
}
else
{
lean_object* v___x_649_; 
lean_dec_ref_known(v_fst_629_, 2);
lean_dec(v_pre_630_);
lean_dec_ref(v___x_628_);
v___x_649_ = l_Lean_Expr_nat_x3f(v_n_627_);
lean_dec_ref(v_n_627_);
return v___x_649_;
}
}
else
{
lean_object* v___x_650_; 
lean_dec(v_fst_629_);
lean_dec_ref(v___x_628_);
v___x_650_ = l_Lean_Expr_nat_x3f(v_n_627_);
lean_dec_ref(v_n_627_);
return v___x_650_;
}
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_Elab_Tactic_Omega_intCast_x3f_spec__0(lean_object* v_a_651_){
_start:
{
lean_object* v___x_652_; 
v___x_652_ = lean_nat_to_int(v_a_651_);
return v___x_652_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_intCast_x3f(lean_object* v_n_653_){
_start:
{
lean_object* v___x_654_; lean_object* v_fst_655_; 
lean_inc_ref(v_n_653_);
v___x_654_ = l_Lean_Expr_getAppFnArgs(v_n_653_);
v_fst_655_ = lean_ctor_get(v___x_654_, 0);
lean_inc(v_fst_655_);
if (lean_obj_tag(v_fst_655_) == 1)
{
lean_object* v_pre_656_; 
v_pre_656_ = lean_ctor_get(v_fst_655_, 0);
lean_inc(v_pre_656_);
if (lean_obj_tag(v_pre_656_) == 1)
{
lean_object* v_pre_657_; 
v_pre_657_ = lean_ctor_get(v_pre_656_, 0);
if (lean_obj_tag(v_pre_657_) == 0)
{
lean_object* v_snd_658_; lean_object* v_str_659_; lean_object* v_str_660_; lean_object* v___x_661_; uint8_t v___x_662_; 
v_snd_658_ = lean_ctor_get(v___x_654_, 1);
lean_inc(v_snd_658_);
lean_dec_ref(v___x_654_);
v_str_659_ = lean_ctor_get(v_fst_655_, 1);
lean_inc_ref(v_str_659_);
lean_dec_ref_known(v_fst_655_, 2);
v_str_660_ = lean_ctor_get(v_pre_656_, 1);
lean_inc_ref(v_str_660_);
lean_dec_ref_known(v_pre_656_, 2);
v___x_661_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_natCast_x3f___closed__0));
v___x_662_ = lean_string_dec_eq(v_str_660_, v___x_661_);
lean_dec_ref(v_str_660_);
if (v___x_662_ == 0)
{
lean_object* v___x_663_; 
lean_dec_ref(v_str_659_);
lean_dec(v_snd_658_);
v___x_663_ = l_Lean_Expr_int_x3f(v_n_653_);
lean_dec_ref(v_n_653_);
return v___x_663_;
}
else
{
lean_object* v___x_664_; uint8_t v___x_665_; 
v___x_664_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_natCast_x3f___closed__1));
v___x_665_ = lean_string_dec_eq(v_str_659_, v___x_664_);
lean_dec_ref(v_str_659_);
if (v___x_665_ == 0)
{
lean_object* v___x_666_; 
lean_dec(v_snd_658_);
v___x_666_ = l_Lean_Expr_int_x3f(v_n_653_);
lean_dec_ref(v_n_653_);
return v___x_666_;
}
else
{
lean_object* v___x_667_; lean_object* v___x_668_; uint8_t v___x_669_; 
v___x_667_ = lean_array_get_size(v_snd_658_);
v___x_668_ = lean_unsigned_to_nat(3u);
v___x_669_ = lean_nat_dec_eq(v___x_667_, v___x_668_);
if (v___x_669_ == 0)
{
lean_object* v___x_670_; 
lean_dec(v_snd_658_);
v___x_670_ = l_Lean_Expr_int_x3f(v_n_653_);
lean_dec_ref(v_n_653_);
return v___x_670_;
}
else
{
lean_object* v___x_671_; lean_object* v___x_672_; lean_object* v___x_673_; 
lean_dec_ref(v_n_653_);
v___x_671_ = lean_unsigned_to_nat(2u);
v___x_672_ = lean_array_fget(v_snd_658_, v___x_671_);
lean_dec(v_snd_658_);
v___x_673_ = l_Lean_Expr_nat_x3f(v___x_672_);
lean_dec(v___x_672_);
if (lean_obj_tag(v___x_673_) == 0)
{
lean_object* v___x_674_; 
v___x_674_ = lean_box(0);
return v___x_674_;
}
else
{
lean_object* v_val_675_; lean_object* v___x_677_; uint8_t v_isShared_678_; uint8_t v_isSharedCheck_683_; 
v_val_675_ = lean_ctor_get(v___x_673_, 0);
v_isSharedCheck_683_ = !lean_is_exclusive(v___x_673_);
if (v_isSharedCheck_683_ == 0)
{
v___x_677_ = v___x_673_;
v_isShared_678_ = v_isSharedCheck_683_;
goto v_resetjp_676_;
}
else
{
lean_inc(v_val_675_);
lean_dec(v___x_673_);
v___x_677_ = lean_box(0);
v_isShared_678_ = v_isSharedCheck_683_;
goto v_resetjp_676_;
}
v_resetjp_676_:
{
lean_object* v___x_679_; lean_object* v___x_681_; 
v___x_679_ = lean_nat_to_int(v_val_675_);
if (v_isShared_678_ == 0)
{
lean_ctor_set(v___x_677_, 0, v___x_679_);
v___x_681_ = v___x_677_;
goto v_reusejp_680_;
}
else
{
lean_object* v_reuseFailAlloc_682_; 
v_reuseFailAlloc_682_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_682_, 0, v___x_679_);
v___x_681_ = v_reuseFailAlloc_682_;
goto v_reusejp_680_;
}
v_reusejp_680_:
{
return v___x_681_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_684_; 
lean_dec_ref_known(v_pre_656_, 2);
lean_dec_ref_known(v_fst_655_, 2);
lean_dec_ref(v___x_654_);
v___x_684_ = l_Lean_Expr_int_x3f(v_n_653_);
lean_dec_ref(v_n_653_);
return v___x_684_;
}
}
else
{
lean_object* v___x_685_; 
lean_dec(v_pre_656_);
lean_dec_ref_known(v_fst_655_, 2);
lean_dec_ref(v___x_654_);
v___x_685_ = l_Lean_Expr_int_x3f(v_n_653_);
lean_dec_ref(v_n_653_);
return v___x_685_;
}
}
else
{
lean_object* v___x_686_; 
lean_dec(v_fst_655_);
lean_dec_ref(v___x_654_);
v___x_686_ = l_Lean_Expr_int_x3f(v_n_653_);
lean_dec_ref(v_n_653_);
return v___x_686_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_groundNat_x3f(lean_object* v_e_702_){
_start:
{
lean_object* v___x_703_; lean_object* v_fst_704_; 
lean_inc_ref(v_e_702_);
v___x_703_ = l_Lean_Expr_getAppFnArgs(v_e_702_);
v_fst_704_ = lean_ctor_get(v___x_703_, 0);
lean_inc(v_fst_704_);
if (lean_obj_tag(v_fst_704_) == 1)
{
lean_object* v_pre_705_; 
v_pre_705_ = lean_ctor_get(v_fst_704_, 0);
lean_inc(v_pre_705_);
if (lean_obj_tag(v_pre_705_) == 1)
{
lean_object* v_pre_706_; 
v_pre_706_ = lean_ctor_get(v_pre_705_, 0);
if (lean_obj_tag(v_pre_706_) == 0)
{
lean_object* v_snd_707_; lean_object* v_str_708_; lean_object* v_str_709_; lean_object* v___x_710_; uint8_t v___x_711_; 
v_snd_707_ = lean_ctor_get(v___x_703_, 1);
lean_inc(v_snd_707_);
lean_dec_ref(v___x_703_);
v_str_708_ = lean_ctor_get(v_fst_704_, 1);
lean_inc_ref(v_str_708_);
lean_dec_ref_known(v_fst_704_, 2);
v_str_709_ = lean_ctor_get(v_pre_705_, 1);
lean_inc_ref(v_str_709_);
lean_dec_ref_known(v_pre_705_, 2);
v___x_710_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_natCast_x3f___closed__0));
v___x_711_ = lean_string_dec_eq(v_str_709_, v___x_710_);
if (v___x_711_ == 0)
{
lean_object* v___x_712_; uint8_t v___x_713_; 
v___x_712_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__0));
v___x_713_ = lean_string_dec_eq(v_str_709_, v___x_712_);
if (v___x_713_ == 0)
{
lean_object* v___x_714_; uint8_t v___x_715_; 
v___x_714_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__1));
v___x_715_ = lean_string_dec_eq(v_str_709_, v___x_714_);
if (v___x_715_ == 0)
{
lean_object* v___x_716_; uint8_t v___x_717_; 
v___x_716_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__2));
v___x_717_ = lean_string_dec_eq(v_str_709_, v___x_716_);
if (v___x_717_ == 0)
{
lean_object* v___x_718_; uint8_t v___x_719_; 
v___x_718_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__3));
v___x_719_ = lean_string_dec_eq(v_str_709_, v___x_718_);
if (v___x_719_ == 0)
{
lean_object* v___x_720_; uint8_t v___x_721_; 
v___x_720_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__4));
v___x_721_ = lean_string_dec_eq(v_str_709_, v___x_720_);
lean_dec_ref(v_str_709_);
if (v___x_721_ == 0)
{
lean_object* v___x_722_; 
lean_dec_ref(v_str_708_);
lean_dec(v_snd_707_);
v___x_722_ = l_Lean_Expr_nat_x3f(v_e_702_);
lean_dec_ref(v_e_702_);
return v___x_722_;
}
else
{
lean_object* v___x_723_; uint8_t v___x_724_; 
v___x_723_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__5));
v___x_724_ = lean_string_dec_eq(v_str_708_, v___x_723_);
lean_dec_ref(v_str_708_);
if (v___x_724_ == 0)
{
lean_object* v___x_725_; 
lean_dec(v_snd_707_);
v___x_725_ = l_Lean_Expr_nat_x3f(v_e_702_);
lean_dec_ref(v_e_702_);
return v___x_725_;
}
else
{
lean_object* v___x_726_; lean_object* v___x_727_; uint8_t v___x_728_; 
v___x_726_ = lean_array_get_size(v_snd_707_);
v___x_727_ = lean_unsigned_to_nat(6u);
v___x_728_ = lean_nat_dec_eq(v___x_726_, v___x_727_);
if (v___x_728_ == 0)
{
lean_object* v___x_729_; 
lean_dec(v_snd_707_);
v___x_729_ = l_Lean_Expr_nat_x3f(v_e_702_);
lean_dec_ref(v_e_702_);
return v___x_729_;
}
else
{
lean_object* v___f_730_; lean_object* v___x_731_; lean_object* v___x_732_; lean_object* v___x_733_; lean_object* v___x_734_; lean_object* v___x_735_; 
lean_dec_ref(v_e_702_);
v___f_730_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__6));
v___x_731_ = lean_unsigned_to_nat(4u);
v___x_732_ = lean_array_fget(v_snd_707_, v___x_731_);
v___x_733_ = lean_unsigned_to_nat(5u);
v___x_734_ = lean_array_fget(v_snd_707_, v___x_733_);
lean_dec(v_snd_707_);
v___x_735_ = l___private_Lean_Elab_Tactic_Omega_OmegaM_0__Lean_Elab_Tactic_Omega_groundNat_x3f_op(v___f_730_, v___x_732_, v___x_734_);
return v___x_735_;
}
}
}
}
else
{
lean_object* v___x_736_; uint8_t v___x_737_; 
lean_dec_ref(v_str_709_);
v___x_736_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__7));
v___x_737_ = lean_string_dec_eq(v_str_708_, v___x_736_);
lean_dec_ref(v_str_708_);
if (v___x_737_ == 0)
{
lean_object* v___x_738_; 
lean_dec(v_snd_707_);
v___x_738_ = l_Lean_Expr_nat_x3f(v_e_702_);
lean_dec_ref(v_e_702_);
return v___x_738_;
}
else
{
lean_object* v___x_739_; lean_object* v___x_740_; uint8_t v___x_741_; 
v___x_739_ = lean_array_get_size(v_snd_707_);
v___x_740_ = lean_unsigned_to_nat(6u);
v___x_741_ = lean_nat_dec_eq(v___x_739_, v___x_740_);
if (v___x_741_ == 0)
{
lean_object* v___x_742_; 
lean_dec(v_snd_707_);
v___x_742_ = l_Lean_Expr_nat_x3f(v_e_702_);
lean_dec_ref(v_e_702_);
return v___x_742_;
}
else
{
lean_object* v___f_743_; lean_object* v___x_744_; lean_object* v___x_745_; lean_object* v___x_746_; lean_object* v___x_747_; lean_object* v___x_748_; 
lean_dec_ref(v_e_702_);
v___f_743_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__8));
v___x_744_ = lean_unsigned_to_nat(4u);
v___x_745_ = lean_array_fget(v_snd_707_, v___x_744_);
v___x_746_ = lean_unsigned_to_nat(5u);
v___x_747_ = lean_array_fget(v_snd_707_, v___x_746_);
lean_dec(v_snd_707_);
v___x_748_ = l___private_Lean_Elab_Tactic_Omega_OmegaM_0__Lean_Elab_Tactic_Omega_groundNat_x3f_op(v___f_743_, v___x_745_, v___x_747_);
return v___x_748_;
}
}
}
}
else
{
lean_object* v___x_749_; uint8_t v___x_750_; 
lean_dec_ref(v_str_709_);
v___x_749_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__9));
v___x_750_ = lean_string_dec_eq(v_str_708_, v___x_749_);
lean_dec_ref(v_str_708_);
if (v___x_750_ == 0)
{
lean_object* v___x_751_; 
lean_dec(v_snd_707_);
v___x_751_ = l_Lean_Expr_nat_x3f(v_e_702_);
lean_dec_ref(v_e_702_);
return v___x_751_;
}
else
{
lean_object* v___x_752_; lean_object* v___x_753_; uint8_t v___x_754_; 
v___x_752_ = lean_array_get_size(v_snd_707_);
v___x_753_ = lean_unsigned_to_nat(6u);
v___x_754_ = lean_nat_dec_eq(v___x_752_, v___x_753_);
if (v___x_754_ == 0)
{
lean_object* v___x_755_; 
lean_dec(v_snd_707_);
v___x_755_ = l_Lean_Expr_nat_x3f(v_e_702_);
lean_dec_ref(v_e_702_);
return v___x_755_;
}
else
{
lean_object* v___f_756_; lean_object* v___x_757_; lean_object* v___x_758_; lean_object* v___x_759_; lean_object* v___x_760_; lean_object* v___x_761_; 
lean_dec_ref(v_e_702_);
v___f_756_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__10));
v___x_757_ = lean_unsigned_to_nat(4u);
v___x_758_ = lean_array_fget(v_snd_707_, v___x_757_);
v___x_759_ = lean_unsigned_to_nat(5u);
v___x_760_ = lean_array_fget(v_snd_707_, v___x_759_);
lean_dec(v_snd_707_);
v___x_761_ = l___private_Lean_Elab_Tactic_Omega_OmegaM_0__Lean_Elab_Tactic_Omega_groundNat_x3f_op(v___f_756_, v___x_758_, v___x_760_);
return v___x_761_;
}
}
}
}
else
{
lean_object* v___x_762_; uint8_t v___x_763_; 
lean_dec_ref(v_str_709_);
v___x_762_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__11));
v___x_763_ = lean_string_dec_eq(v_str_708_, v___x_762_);
lean_dec_ref(v_str_708_);
if (v___x_763_ == 0)
{
lean_object* v___x_764_; 
lean_dec(v_snd_707_);
v___x_764_ = l_Lean_Expr_nat_x3f(v_e_702_);
lean_dec_ref(v_e_702_);
return v___x_764_;
}
else
{
lean_object* v___x_765_; lean_object* v___x_766_; uint8_t v___x_767_; 
v___x_765_ = lean_array_get_size(v_snd_707_);
v___x_766_ = lean_unsigned_to_nat(6u);
v___x_767_ = lean_nat_dec_eq(v___x_765_, v___x_766_);
if (v___x_767_ == 0)
{
lean_object* v___x_768_; 
lean_dec(v_snd_707_);
v___x_768_ = l_Lean_Expr_nat_x3f(v_e_702_);
lean_dec_ref(v_e_702_);
return v___x_768_;
}
else
{
lean_object* v___f_769_; lean_object* v___x_770_; lean_object* v___x_771_; lean_object* v___x_772_; lean_object* v___x_773_; lean_object* v___x_774_; 
lean_dec_ref(v_e_702_);
v___f_769_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__12));
v___x_770_ = lean_unsigned_to_nat(4u);
v___x_771_ = lean_array_fget(v_snd_707_, v___x_770_);
v___x_772_ = lean_unsigned_to_nat(5u);
v___x_773_ = lean_array_fget(v_snd_707_, v___x_772_);
lean_dec(v_snd_707_);
v___x_774_ = l___private_Lean_Elab_Tactic_Omega_OmegaM_0__Lean_Elab_Tactic_Omega_groundNat_x3f_op(v___f_769_, v___x_771_, v___x_773_);
return v___x_774_;
}
}
}
}
else
{
lean_object* v___x_775_; uint8_t v___x_776_; 
lean_dec_ref(v_str_709_);
v___x_775_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__13));
v___x_776_ = lean_string_dec_eq(v_str_708_, v___x_775_);
lean_dec_ref(v_str_708_);
if (v___x_776_ == 0)
{
lean_object* v___x_777_; 
lean_dec(v_snd_707_);
v___x_777_ = l_Lean_Expr_nat_x3f(v_e_702_);
lean_dec_ref(v_e_702_);
return v___x_777_;
}
else
{
lean_object* v___x_778_; lean_object* v___x_779_; uint8_t v___x_780_; 
v___x_778_ = lean_array_get_size(v_snd_707_);
v___x_779_ = lean_unsigned_to_nat(6u);
v___x_780_ = lean_nat_dec_eq(v___x_778_, v___x_779_);
if (v___x_780_ == 0)
{
lean_object* v___x_781_; 
lean_dec(v_snd_707_);
v___x_781_ = l_Lean_Expr_nat_x3f(v_e_702_);
lean_dec_ref(v_e_702_);
return v___x_781_;
}
else
{
lean_object* v___f_782_; lean_object* v___x_783_; lean_object* v___x_784_; lean_object* v___x_785_; lean_object* v___x_786_; lean_object* v___x_787_; 
lean_dec_ref(v_e_702_);
v___f_782_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__14));
v___x_783_ = lean_unsigned_to_nat(4u);
v___x_784_ = lean_array_fget(v_snd_707_, v___x_783_);
v___x_785_ = lean_unsigned_to_nat(5u);
v___x_786_ = lean_array_fget(v_snd_707_, v___x_785_);
lean_dec(v_snd_707_);
v___x_787_ = l___private_Lean_Elab_Tactic_Omega_OmegaM_0__Lean_Elab_Tactic_Omega_groundNat_x3f_op(v___f_782_, v___x_784_, v___x_786_);
return v___x_787_;
}
}
}
}
else
{
lean_object* v___x_788_; uint8_t v___x_789_; 
lean_dec_ref(v_str_709_);
v___x_788_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_natCast_x3f___closed__1));
v___x_789_ = lean_string_dec_eq(v_str_708_, v___x_788_);
lean_dec_ref(v_str_708_);
if (v___x_789_ == 0)
{
lean_object* v___x_790_; 
lean_dec(v_snd_707_);
v___x_790_ = l_Lean_Expr_nat_x3f(v_e_702_);
lean_dec_ref(v_e_702_);
return v___x_790_;
}
else
{
lean_object* v___x_791_; lean_object* v___x_792_; uint8_t v___x_793_; 
v___x_791_ = lean_array_get_size(v_snd_707_);
v___x_792_ = lean_unsigned_to_nat(3u);
v___x_793_ = lean_nat_dec_eq(v___x_791_, v___x_792_);
if (v___x_793_ == 0)
{
lean_object* v___x_794_; 
lean_dec(v_snd_707_);
v___x_794_ = l_Lean_Expr_nat_x3f(v_e_702_);
lean_dec_ref(v_e_702_);
return v___x_794_;
}
else
{
lean_object* v___x_795_; lean_object* v___x_796_; 
lean_dec_ref(v_e_702_);
v___x_795_ = lean_unsigned_to_nat(2u);
v___x_796_ = lean_array_fget(v_snd_707_, v___x_795_);
lean_dec(v_snd_707_);
v_e_702_ = v___x_796_;
goto _start;
}
}
}
}
else
{
lean_object* v___x_798_; 
lean_dec_ref_known(v_pre_705_, 2);
lean_dec_ref_known(v_fst_704_, 2);
lean_dec_ref(v___x_703_);
v___x_798_ = l_Lean_Expr_nat_x3f(v_e_702_);
lean_dec_ref(v_e_702_);
return v___x_798_;
}
}
else
{
lean_object* v___x_799_; 
lean_dec(v_pre_705_);
lean_dec_ref_known(v_fst_704_, 2);
lean_dec_ref(v___x_703_);
v___x_799_ = l_Lean_Expr_nat_x3f(v_e_702_);
lean_dec_ref(v_e_702_);
return v___x_799_;
}
}
else
{
lean_object* v___x_800_; 
lean_dec(v_fst_704_);
lean_dec_ref(v___x_703_);
v___x_800_ = l_Lean_Expr_nat_x3f(v_e_702_);
lean_dec_ref(v_e_702_);
return v___x_800_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Omega_OmegaM_0__Lean_Elab_Tactic_Omega_groundNat_x3f_op(lean_object* v_f_801_, lean_object* v_x_802_, lean_object* v_y_803_){
_start:
{
lean_object* v___x_804_; 
v___x_804_ = l_Lean_Elab_Tactic_Omega_groundNat_x3f(v_x_802_);
if (lean_obj_tag(v___x_804_) == 1)
{
lean_object* v_val_805_; lean_object* v___x_806_; 
v_val_805_ = lean_ctor_get(v___x_804_, 0);
lean_inc(v_val_805_);
lean_dec_ref_known(v___x_804_, 1);
v___x_806_ = l_Lean_Elab_Tactic_Omega_groundNat_x3f(v_y_803_);
if (lean_obj_tag(v___x_806_) == 1)
{
lean_object* v_val_807_; lean_object* v___x_809_; uint8_t v_isShared_810_; uint8_t v_isSharedCheck_815_; 
v_val_807_ = lean_ctor_get(v___x_806_, 0);
v_isSharedCheck_815_ = !lean_is_exclusive(v___x_806_);
if (v_isSharedCheck_815_ == 0)
{
v___x_809_ = v___x_806_;
v_isShared_810_ = v_isSharedCheck_815_;
goto v_resetjp_808_;
}
else
{
lean_inc(v_val_807_);
lean_dec(v___x_806_);
v___x_809_ = lean_box(0);
v_isShared_810_ = v_isSharedCheck_815_;
goto v_resetjp_808_;
}
v_resetjp_808_:
{
lean_object* v___x_811_; lean_object* v___x_813_; 
v___x_811_ = lean_apply_2(v_f_801_, v_val_805_, v_val_807_);
if (v_isShared_810_ == 0)
{
lean_ctor_set(v___x_809_, 0, v___x_811_);
v___x_813_ = v___x_809_;
goto v_reusejp_812_;
}
else
{
lean_object* v_reuseFailAlloc_814_; 
v_reuseFailAlloc_814_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_814_, 0, v___x_811_);
v___x_813_ = v_reuseFailAlloc_814_;
goto v_reusejp_812_;
}
v_reusejp_812_:
{
return v___x_813_;
}
}
}
else
{
lean_object* v___x_816_; 
lean_dec(v___x_806_);
lean_dec(v_val_805_);
lean_dec_ref(v_f_801_);
v___x_816_ = lean_box(0);
return v___x_816_;
}
}
else
{
lean_object* v___x_817_; 
lean_dec(v___x_804_);
lean_dec_ref(v_y_803_);
lean_dec_ref(v_f_801_);
v___x_817_ = lean_box(0);
return v___x_817_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_groundInt_x3f(lean_object* v_e_822_){
_start:
{
lean_object* v___x_823_; lean_object* v_fst_824_; 
lean_inc_ref(v_e_822_);
v___x_823_ = l_Lean_Expr_getAppFnArgs(v_e_822_);
v_fst_824_ = lean_ctor_get(v___x_823_, 0);
lean_inc(v_fst_824_);
if (lean_obj_tag(v_fst_824_) == 1)
{
lean_object* v_pre_825_; 
v_pre_825_ = lean_ctor_get(v_fst_824_, 0);
lean_inc(v_pre_825_);
if (lean_obj_tag(v_pre_825_) == 1)
{
lean_object* v_pre_826_; 
v_pre_826_ = lean_ctor_get(v_pre_825_, 0);
if (lean_obj_tag(v_pre_826_) == 0)
{
lean_object* v_snd_827_; lean_object* v_str_828_; lean_object* v_str_829_; lean_object* v___x_830_; uint8_t v___x_831_; 
v_snd_827_ = lean_ctor_get(v___x_823_, 1);
lean_inc(v_snd_827_);
lean_dec_ref(v___x_823_);
v_str_828_ = lean_ctor_get(v_fst_824_, 1);
lean_inc_ref(v_str_828_);
lean_dec_ref_known(v_fst_824_, 2);
v_str_829_ = lean_ctor_get(v_pre_825_, 1);
lean_inc_ref(v_str_829_);
lean_dec_ref_known(v_pre_825_, 2);
v___x_830_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_natCast_x3f___closed__0));
v___x_831_ = lean_string_dec_eq(v_str_829_, v___x_830_);
if (v___x_831_ == 0)
{
lean_object* v___x_832_; uint8_t v___x_833_; 
v___x_832_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__0));
v___x_833_ = lean_string_dec_eq(v_str_829_, v___x_832_);
if (v___x_833_ == 0)
{
lean_object* v___x_834_; uint8_t v___x_835_; 
v___x_834_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__1));
v___x_835_ = lean_string_dec_eq(v_str_829_, v___x_834_);
if (v___x_835_ == 0)
{
lean_object* v___x_836_; uint8_t v___x_837_; 
v___x_836_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__2));
v___x_837_ = lean_string_dec_eq(v_str_829_, v___x_836_);
if (v___x_837_ == 0)
{
lean_object* v___x_838_; uint8_t v___x_839_; 
v___x_838_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__3));
v___x_839_ = lean_string_dec_eq(v_str_829_, v___x_838_);
if (v___x_839_ == 0)
{
lean_object* v___x_840_; uint8_t v___x_841_; 
v___x_840_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__4));
v___x_841_ = lean_string_dec_eq(v_str_829_, v___x_840_);
lean_dec_ref(v_str_829_);
if (v___x_841_ == 0)
{
lean_object* v___x_842_; 
lean_dec_ref(v_str_828_);
lean_dec(v_snd_827_);
v___x_842_ = l_Lean_Expr_int_x3f(v_e_822_);
lean_dec_ref(v_e_822_);
return v___x_842_;
}
else
{
lean_object* v___x_843_; uint8_t v___x_844_; 
v___x_843_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__5));
v___x_844_ = lean_string_dec_eq(v_str_828_, v___x_843_);
lean_dec_ref(v_str_828_);
if (v___x_844_ == 0)
{
lean_object* v___x_845_; 
lean_dec(v_snd_827_);
v___x_845_ = l_Lean_Expr_int_x3f(v_e_822_);
lean_dec_ref(v_e_822_);
return v___x_845_;
}
else
{
lean_object* v___x_846_; lean_object* v___x_847_; uint8_t v___x_848_; 
v___x_846_ = lean_array_get_size(v_snd_827_);
v___x_847_ = lean_unsigned_to_nat(6u);
v___x_848_ = lean_nat_dec_eq(v___x_846_, v___x_847_);
if (v___x_848_ == 0)
{
lean_object* v___x_849_; 
lean_dec(v_snd_827_);
v___x_849_ = l_Lean_Expr_int_x3f(v_e_822_);
lean_dec_ref(v_e_822_);
return v___x_849_;
}
else
{
lean_object* v___x_850_; lean_object* v___x_851_; lean_object* v___x_852_; 
lean_dec_ref(v_e_822_);
v___x_850_ = lean_unsigned_to_nat(4u);
v___x_851_ = lean_array_fget_borrowed(v_snd_827_, v___x_850_);
lean_inc(v___x_851_);
v___x_852_ = l_Lean_Elab_Tactic_Omega_groundInt_x3f(v___x_851_);
if (lean_obj_tag(v___x_852_) == 1)
{
lean_object* v_val_853_; lean_object* v___x_854_; lean_object* v___x_855_; lean_object* v___x_856_; 
v_val_853_ = lean_ctor_get(v___x_852_, 0);
lean_inc(v_val_853_);
lean_dec_ref_known(v___x_852_, 1);
v___x_854_ = lean_unsigned_to_nat(5u);
v___x_855_ = lean_array_fget(v_snd_827_, v___x_854_);
lean_dec(v_snd_827_);
v___x_856_ = l_Lean_Elab_Tactic_Omega_groundNat_x3f(v___x_855_);
if (lean_obj_tag(v___x_856_) == 1)
{
lean_object* v_val_857_; lean_object* v___x_859_; uint8_t v_isShared_860_; uint8_t v_isSharedCheck_865_; 
v_val_857_ = lean_ctor_get(v___x_856_, 0);
v_isSharedCheck_865_ = !lean_is_exclusive(v___x_856_);
if (v_isSharedCheck_865_ == 0)
{
v___x_859_ = v___x_856_;
v_isShared_860_ = v_isSharedCheck_865_;
goto v_resetjp_858_;
}
else
{
lean_inc(v_val_857_);
lean_dec(v___x_856_);
v___x_859_ = lean_box(0);
v_isShared_860_ = v_isSharedCheck_865_;
goto v_resetjp_858_;
}
v_resetjp_858_:
{
lean_object* v___x_861_; lean_object* v___x_863_; 
v___x_861_ = l_Int_pow(v_val_853_, v_val_857_);
lean_dec(v_val_857_);
lean_dec(v_val_853_);
if (v_isShared_860_ == 0)
{
lean_ctor_set(v___x_859_, 0, v___x_861_);
v___x_863_ = v___x_859_;
goto v_reusejp_862_;
}
else
{
lean_object* v_reuseFailAlloc_864_; 
v_reuseFailAlloc_864_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_864_, 0, v___x_861_);
v___x_863_ = v_reuseFailAlloc_864_;
goto v_reusejp_862_;
}
v_reusejp_862_:
{
return v___x_863_;
}
}
}
else
{
lean_object* v___x_866_; 
lean_dec(v___x_856_);
lean_dec(v_val_853_);
v___x_866_ = lean_box(0);
return v___x_866_;
}
}
else
{
lean_object* v___x_867_; 
lean_dec(v___x_852_);
lean_dec(v_snd_827_);
v___x_867_ = lean_box(0);
return v___x_867_;
}
}
}
}
}
else
{
lean_object* v___x_868_; uint8_t v___x_869_; 
lean_dec_ref(v_str_829_);
v___x_868_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__7));
v___x_869_ = lean_string_dec_eq(v_str_828_, v___x_868_);
lean_dec_ref(v_str_828_);
if (v___x_869_ == 0)
{
lean_object* v___x_870_; 
lean_dec(v_snd_827_);
v___x_870_ = l_Lean_Expr_int_x3f(v_e_822_);
lean_dec_ref(v_e_822_);
return v___x_870_;
}
else
{
lean_object* v___x_871_; lean_object* v___x_872_; uint8_t v___x_873_; 
v___x_871_ = lean_array_get_size(v_snd_827_);
v___x_872_ = lean_unsigned_to_nat(6u);
v___x_873_ = lean_nat_dec_eq(v___x_871_, v___x_872_);
if (v___x_873_ == 0)
{
lean_object* v___x_874_; 
lean_dec(v_snd_827_);
v___x_874_ = l_Lean_Expr_int_x3f(v_e_822_);
lean_dec_ref(v_e_822_);
return v___x_874_;
}
else
{
lean_object* v___f_875_; lean_object* v___x_876_; lean_object* v___x_877_; lean_object* v___x_878_; lean_object* v___x_879_; lean_object* v___x_880_; 
lean_dec_ref(v_e_822_);
v___f_875_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundInt_x3f___closed__0));
v___x_876_ = lean_unsigned_to_nat(4u);
v___x_877_ = lean_array_fget(v_snd_827_, v___x_876_);
v___x_878_ = lean_unsigned_to_nat(5u);
v___x_879_ = lean_array_fget(v_snd_827_, v___x_878_);
lean_dec(v_snd_827_);
v___x_880_ = l___private_Lean_Elab_Tactic_Omega_OmegaM_0__Lean_Elab_Tactic_Omega_groundInt_x3f_op(v___f_875_, v___x_877_, v___x_879_);
return v___x_880_;
}
}
}
}
else
{
lean_object* v___x_881_; uint8_t v___x_882_; 
lean_dec_ref(v_str_829_);
v___x_881_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__9));
v___x_882_ = lean_string_dec_eq(v_str_828_, v___x_881_);
lean_dec_ref(v_str_828_);
if (v___x_882_ == 0)
{
lean_object* v___x_883_; 
lean_dec(v_snd_827_);
v___x_883_ = l_Lean_Expr_int_x3f(v_e_822_);
lean_dec_ref(v_e_822_);
return v___x_883_;
}
else
{
lean_object* v___x_884_; lean_object* v___x_885_; uint8_t v___x_886_; 
v___x_884_ = lean_array_get_size(v_snd_827_);
v___x_885_ = lean_unsigned_to_nat(6u);
v___x_886_ = lean_nat_dec_eq(v___x_884_, v___x_885_);
if (v___x_886_ == 0)
{
lean_object* v___x_887_; 
lean_dec(v_snd_827_);
v___x_887_ = l_Lean_Expr_int_x3f(v_e_822_);
lean_dec_ref(v_e_822_);
return v___x_887_;
}
else
{
lean_object* v___f_888_; lean_object* v___x_889_; lean_object* v___x_890_; lean_object* v___x_891_; lean_object* v___x_892_; lean_object* v___x_893_; 
lean_dec_ref(v_e_822_);
v___f_888_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundInt_x3f___closed__1));
v___x_889_ = lean_unsigned_to_nat(4u);
v___x_890_ = lean_array_fget(v_snd_827_, v___x_889_);
v___x_891_ = lean_unsigned_to_nat(5u);
v___x_892_ = lean_array_fget(v_snd_827_, v___x_891_);
lean_dec(v_snd_827_);
v___x_893_ = l___private_Lean_Elab_Tactic_Omega_OmegaM_0__Lean_Elab_Tactic_Omega_groundInt_x3f_op(v___f_888_, v___x_890_, v___x_892_);
return v___x_893_;
}
}
}
}
else
{
lean_object* v___x_894_; uint8_t v___x_895_; 
lean_dec_ref(v_str_829_);
v___x_894_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__11));
v___x_895_ = lean_string_dec_eq(v_str_828_, v___x_894_);
lean_dec_ref(v_str_828_);
if (v___x_895_ == 0)
{
lean_object* v___x_896_; 
lean_dec(v_snd_827_);
v___x_896_ = l_Lean_Expr_int_x3f(v_e_822_);
lean_dec_ref(v_e_822_);
return v___x_896_;
}
else
{
lean_object* v___x_897_; lean_object* v___x_898_; uint8_t v___x_899_; 
v___x_897_ = lean_array_get_size(v_snd_827_);
v___x_898_ = lean_unsigned_to_nat(6u);
v___x_899_ = lean_nat_dec_eq(v___x_897_, v___x_898_);
if (v___x_899_ == 0)
{
lean_object* v___x_900_; 
lean_dec(v_snd_827_);
v___x_900_ = l_Lean_Expr_int_x3f(v_e_822_);
lean_dec_ref(v_e_822_);
return v___x_900_;
}
else
{
lean_object* v___f_901_; lean_object* v___x_902_; lean_object* v___x_903_; lean_object* v___x_904_; lean_object* v___x_905_; lean_object* v___x_906_; 
lean_dec_ref(v_e_822_);
v___f_901_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundInt_x3f___closed__2));
v___x_902_ = lean_unsigned_to_nat(4u);
v___x_903_ = lean_array_fget(v_snd_827_, v___x_902_);
v___x_904_ = lean_unsigned_to_nat(5u);
v___x_905_ = lean_array_fget(v_snd_827_, v___x_904_);
lean_dec(v_snd_827_);
v___x_906_ = l___private_Lean_Elab_Tactic_Omega_OmegaM_0__Lean_Elab_Tactic_Omega_groundInt_x3f_op(v___f_901_, v___x_903_, v___x_905_);
return v___x_906_;
}
}
}
}
else
{
lean_object* v___x_907_; uint8_t v___x_908_; 
lean_dec_ref(v_str_829_);
v___x_907_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__13));
v___x_908_ = lean_string_dec_eq(v_str_828_, v___x_907_);
lean_dec_ref(v_str_828_);
if (v___x_908_ == 0)
{
lean_object* v___x_909_; 
lean_dec(v_snd_827_);
v___x_909_ = l_Lean_Expr_int_x3f(v_e_822_);
lean_dec_ref(v_e_822_);
return v___x_909_;
}
else
{
lean_object* v___x_910_; lean_object* v___x_911_; uint8_t v___x_912_; 
v___x_910_ = lean_array_get_size(v_snd_827_);
v___x_911_ = lean_unsigned_to_nat(6u);
v___x_912_ = lean_nat_dec_eq(v___x_910_, v___x_911_);
if (v___x_912_ == 0)
{
lean_object* v___x_913_; 
lean_dec(v_snd_827_);
v___x_913_ = l_Lean_Expr_int_x3f(v_e_822_);
lean_dec_ref(v_e_822_);
return v___x_913_;
}
else
{
lean_object* v___f_914_; lean_object* v___x_915_; lean_object* v___x_916_; lean_object* v___x_917_; lean_object* v___x_918_; lean_object* v___x_919_; 
lean_dec_ref(v_e_822_);
v___f_914_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundInt_x3f___closed__3));
v___x_915_ = lean_unsigned_to_nat(4u);
v___x_916_ = lean_array_fget(v_snd_827_, v___x_915_);
v___x_917_ = lean_unsigned_to_nat(5u);
v___x_918_ = lean_array_fget(v_snd_827_, v___x_917_);
lean_dec(v_snd_827_);
v___x_919_ = l___private_Lean_Elab_Tactic_Omega_OmegaM_0__Lean_Elab_Tactic_Omega_groundInt_x3f_op(v___f_914_, v___x_916_, v___x_918_);
return v___x_919_;
}
}
}
}
else
{
lean_object* v___x_920_; uint8_t v___x_921_; 
lean_dec_ref(v_str_829_);
v___x_920_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_natCast_x3f___closed__1));
v___x_921_ = lean_string_dec_eq(v_str_828_, v___x_920_);
lean_dec_ref(v_str_828_);
if (v___x_921_ == 0)
{
lean_object* v___x_922_; 
lean_dec(v_snd_827_);
v___x_922_ = l_Lean_Expr_int_x3f(v_e_822_);
lean_dec_ref(v_e_822_);
return v___x_922_;
}
else
{
lean_object* v___x_923_; lean_object* v___x_924_; uint8_t v___x_925_; 
v___x_923_ = lean_array_get_size(v_snd_827_);
v___x_924_ = lean_unsigned_to_nat(3u);
v___x_925_ = lean_nat_dec_eq(v___x_923_, v___x_924_);
if (v___x_925_ == 0)
{
lean_object* v___x_926_; 
lean_dec(v_snd_827_);
v___x_926_ = l_Lean_Expr_int_x3f(v_e_822_);
lean_dec_ref(v_e_822_);
return v___x_926_;
}
else
{
lean_object* v___x_927_; lean_object* v___x_928_; lean_object* v___x_929_; 
lean_dec_ref(v_e_822_);
v___x_927_ = lean_unsigned_to_nat(2u);
v___x_928_ = lean_array_fget(v_snd_827_, v___x_927_);
lean_dec(v_snd_827_);
v___x_929_ = l_Lean_Elab_Tactic_Omega_groundNat_x3f(v___x_928_);
if (lean_obj_tag(v___x_929_) == 0)
{
lean_object* v___x_930_; 
v___x_930_ = lean_box(0);
return v___x_930_;
}
else
{
lean_object* v_val_931_; lean_object* v___x_933_; uint8_t v_isShared_934_; uint8_t v_isSharedCheck_939_; 
v_val_931_ = lean_ctor_get(v___x_929_, 0);
v_isSharedCheck_939_ = !lean_is_exclusive(v___x_929_);
if (v_isSharedCheck_939_ == 0)
{
v___x_933_ = v___x_929_;
v_isShared_934_ = v_isSharedCheck_939_;
goto v_resetjp_932_;
}
else
{
lean_inc(v_val_931_);
lean_dec(v___x_929_);
v___x_933_ = lean_box(0);
v_isShared_934_ = v_isSharedCheck_939_;
goto v_resetjp_932_;
}
v_resetjp_932_:
{
lean_object* v___x_935_; lean_object* v___x_937_; 
v___x_935_ = lean_nat_to_int(v_val_931_);
if (v_isShared_934_ == 0)
{
lean_ctor_set(v___x_933_, 0, v___x_935_);
v___x_937_ = v___x_933_;
goto v_reusejp_936_;
}
else
{
lean_object* v_reuseFailAlloc_938_; 
v_reuseFailAlloc_938_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_938_, 0, v___x_935_);
v___x_937_ = v_reuseFailAlloc_938_;
goto v_reusejp_936_;
}
v_reusejp_936_:
{
return v___x_937_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_940_; 
lean_dec_ref_known(v_pre_825_, 2);
lean_dec_ref_known(v_fst_824_, 2);
lean_dec_ref(v___x_823_);
v___x_940_ = l_Lean_Expr_int_x3f(v_e_822_);
lean_dec_ref(v_e_822_);
return v___x_940_;
}
}
else
{
lean_object* v___x_941_; 
lean_dec_ref_known(v_fst_824_, 2);
lean_dec(v_pre_825_);
lean_dec_ref(v___x_823_);
v___x_941_ = l_Lean_Expr_int_x3f(v_e_822_);
lean_dec_ref(v_e_822_);
return v___x_941_;
}
}
else
{
lean_object* v___x_942_; 
lean_dec(v_fst_824_);
lean_dec_ref(v___x_823_);
v___x_942_ = l_Lean_Expr_int_x3f(v_e_822_);
lean_dec_ref(v_e_822_);
return v___x_942_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Omega_OmegaM_0__Lean_Elab_Tactic_Omega_groundInt_x3f_op(lean_object* v_f_943_, lean_object* v_x_944_, lean_object* v_y_945_){
_start:
{
lean_object* v___x_946_; 
v___x_946_ = l_Lean_Elab_Tactic_Omega_groundInt_x3f(v_x_944_);
if (lean_obj_tag(v___x_946_) == 1)
{
lean_object* v_val_947_; lean_object* v___x_948_; 
v_val_947_ = lean_ctor_get(v___x_946_, 0);
lean_inc(v_val_947_);
lean_dec_ref_known(v___x_946_, 1);
v___x_948_ = l_Lean_Elab_Tactic_Omega_groundInt_x3f(v_y_945_);
if (lean_obj_tag(v___x_948_) == 1)
{
lean_object* v_val_949_; lean_object* v___x_951_; uint8_t v_isShared_952_; uint8_t v_isSharedCheck_957_; 
v_val_949_ = lean_ctor_get(v___x_948_, 0);
v_isSharedCheck_957_ = !lean_is_exclusive(v___x_948_);
if (v_isSharedCheck_957_ == 0)
{
v___x_951_ = v___x_948_;
v_isShared_952_ = v_isSharedCheck_957_;
goto v_resetjp_950_;
}
else
{
lean_inc(v_val_949_);
lean_dec(v___x_948_);
v___x_951_ = lean_box(0);
v_isShared_952_ = v_isSharedCheck_957_;
goto v_resetjp_950_;
}
v_resetjp_950_:
{
lean_object* v___x_953_; lean_object* v___x_955_; 
v___x_953_ = lean_apply_2(v_f_943_, v_val_947_, v_val_949_);
if (v_isShared_952_ == 0)
{
lean_ctor_set(v___x_951_, 0, v___x_953_);
v___x_955_ = v___x_951_;
goto v_reusejp_954_;
}
else
{
lean_object* v_reuseFailAlloc_956_; 
v_reuseFailAlloc_956_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_956_, 0, v___x_953_);
v___x_955_ = v_reuseFailAlloc_956_;
goto v_reusejp_954_;
}
v_reusejp_954_:
{
return v___x_955_;
}
}
}
else
{
lean_object* v___x_958_; 
lean_dec(v___x_948_);
lean_dec(v_val_947_);
lean_dec_ref(v_f_943_);
v___x_958_ = lean_box(0);
return v___x_958_;
}
}
else
{
lean_object* v___x_959_; 
lean_dec(v___x_946_);
lean_dec_ref(v_y_945_);
lean_dec_ref(v_f_943_);
v___x_959_ = lean_box(0);
return v___x_959_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_mkEqReflWithExpectedType(lean_object* v_a_960_, lean_object* v_b_961_, lean_object* v_a_962_, lean_object* v_a_963_, lean_object* v_a_964_, lean_object* v_a_965_){
_start:
{
lean_object* v___x_967_; 
lean_inc_ref(v_a_960_);
v___x_967_ = l_Lean_Meta_mkEqRefl(v_a_960_, v_a_962_, v_a_963_, v_a_964_, v_a_965_);
if (lean_obj_tag(v___x_967_) == 0)
{
lean_object* v_a_968_; lean_object* v___x_969_; 
v_a_968_ = lean_ctor_get(v___x_967_, 0);
lean_inc(v_a_968_);
lean_dec_ref_known(v___x_967_, 1);
v___x_969_ = l_Lean_Meta_mkEq(v_a_960_, v_b_961_, v_a_962_, v_a_963_, v_a_964_, v_a_965_);
if (lean_obj_tag(v___x_969_) == 0)
{
lean_object* v_a_970_; lean_object* v___x_972_; uint8_t v_isShared_973_; uint8_t v_isSharedCheck_978_; 
v_a_970_ = lean_ctor_get(v___x_969_, 0);
v_isSharedCheck_978_ = !lean_is_exclusive(v___x_969_);
if (v_isSharedCheck_978_ == 0)
{
v___x_972_ = v___x_969_;
v_isShared_973_ = v_isSharedCheck_978_;
goto v_resetjp_971_;
}
else
{
lean_inc(v_a_970_);
lean_dec(v___x_969_);
v___x_972_ = lean_box(0);
v_isShared_973_ = v_isSharedCheck_978_;
goto v_resetjp_971_;
}
v_resetjp_971_:
{
lean_object* v___x_974_; lean_object* v___x_976_; 
v___x_974_ = l_Lean_Meta_mkExpectedPropHint(v_a_968_, v_a_970_);
if (v_isShared_973_ == 0)
{
lean_ctor_set(v___x_972_, 0, v___x_974_);
v___x_976_ = v___x_972_;
goto v_reusejp_975_;
}
else
{
lean_object* v_reuseFailAlloc_977_; 
v_reuseFailAlloc_977_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_977_, 0, v___x_974_);
v___x_976_ = v_reuseFailAlloc_977_;
goto v_reusejp_975_;
}
v_reusejp_975_:
{
return v___x_976_;
}
}
}
else
{
lean_dec(v_a_968_);
return v___x_969_;
}
}
else
{
lean_dec_ref(v_b_961_);
lean_dec_ref(v_a_960_);
return v___x_967_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_mkEqReflWithExpectedType___boxed(lean_object* v_a_979_, lean_object* v_b_980_, lean_object* v_a_981_, lean_object* v_a_982_, lean_object* v_a_983_, lean_object* v_a_984_, lean_object* v_a_985_){
_start:
{
lean_object* v_res_986_; 
v_res_986_ = l_Lean_Elab_Tactic_Omega_mkEqReflWithExpectedType(v_a_979_, v_b_980_, v_a_981_, v_a_982_, v_a_983_, v_a_984_);
lean_dec(v_a_984_);
lean_dec_ref(v_a_983_);
lean_dec(v_a_982_);
lean_dec_ref(v_a_981_);
return v_res_986_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_conditionalFacts___lam__0(lean_object* v___x_987_, lean_object* v_k_988_, lean_object* v___x_989_, lean_object* v_00_u03b1_990_, lean_object* v_e_991_, uint8_t v___x_992_, uint8_t v___x_993_, lean_object* v_h_994_, lean_object* v___y_995_, lean_object* v___y_996_, lean_object* v___y_997_, lean_object* v___y_998_){
_start:
{
lean_object* v___x_1000_; lean_object* v___x_1001_; lean_object* v___x_1002_; lean_object* v___x_1003_; uint8_t v___x_1004_; lean_object* v___x_1005_; 
v___x_1000_ = lean_mk_empty_array_with_capacity(v___x_987_);
v___x_1001_ = lean_array_push(v___x_1000_, v_h_994_);
lean_inc_ref(v___x_1001_);
v___x_1002_ = l_Lean_Expr_beta(v_k_988_, v___x_1001_);
v___x_1003_ = l_Lean_mkApp3(v___x_989_, v_00_u03b1_990_, v_e_991_, v___x_1002_);
v___x_1004_ = 1;
v___x_1005_ = l_Lean_Meta_mkLambdaFVars(v___x_1001_, v___x_1003_, v___x_992_, v___x_993_, v___x_992_, v___x_993_, v___x_1004_, v___y_995_, v___y_996_, v___y_997_, v___y_998_);
lean_dec_ref(v___x_1001_);
return v___x_1005_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_conditionalFacts___lam__0___boxed(lean_object* v___x_1006_, lean_object* v_k_1007_, lean_object* v___x_1008_, lean_object* v_00_u03b1_1009_, lean_object* v_e_1010_, lean_object* v___x_1011_, lean_object* v___x_1012_, lean_object* v_h_1013_, lean_object* v___y_1014_, lean_object* v___y_1015_, lean_object* v___y_1016_, lean_object* v___y_1017_, lean_object* v___y_1018_){
_start:
{
uint8_t v___x_2280__boxed_1019_; uint8_t v___x_2281__boxed_1020_; lean_object* v_res_1021_; 
v___x_2280__boxed_1019_ = lean_unbox(v___x_1011_);
v___x_2281__boxed_1020_ = lean_unbox(v___x_1012_);
v_res_1021_ = l_Lean_Elab_Tactic_Omega_conditionalFacts___lam__0(v___x_1006_, v_k_1007_, v___x_1008_, v_00_u03b1_1009_, v_e_1010_, v___x_2280__boxed_1019_, v___x_2281__boxed_1020_, v_h_1013_, v___y_1014_, v___y_1015_, v___y_1016_, v___y_1017_);
lean_dec(v___y_1017_);
lean_dec_ref(v___y_1016_);
lean_dec(v___y_1015_);
lean_dec_ref(v___y_1014_);
lean_dec(v___x_1006_);
return v_res_1021_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Omega_conditionalFacts_spec__0_spec__0___redArg___lam__0(lean_object* v_k_1022_, lean_object* v_b_1023_, lean_object* v___y_1024_, lean_object* v___y_1025_, lean_object* v___y_1026_, lean_object* v___y_1027_){
_start:
{
lean_object* v___x_1029_; 
lean_inc(v___y_1027_);
lean_inc_ref(v___y_1026_);
lean_inc(v___y_1025_);
lean_inc_ref(v___y_1024_);
v___x_1029_ = lean_apply_6(v_k_1022_, v_b_1023_, v___y_1024_, v___y_1025_, v___y_1026_, v___y_1027_, lean_box(0));
return v___x_1029_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Omega_conditionalFacts_spec__0_spec__0___redArg___lam__0___boxed(lean_object* v_k_1030_, lean_object* v_b_1031_, lean_object* v___y_1032_, lean_object* v___y_1033_, lean_object* v___y_1034_, lean_object* v___y_1035_, lean_object* v___y_1036_){
_start:
{
lean_object* v_res_1037_; 
v_res_1037_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Omega_conditionalFacts_spec__0_spec__0___redArg___lam__0(v_k_1030_, v_b_1031_, v___y_1032_, v___y_1033_, v___y_1034_, v___y_1035_);
lean_dec(v___y_1035_);
lean_dec_ref(v___y_1034_);
lean_dec(v___y_1033_);
lean_dec_ref(v___y_1032_);
return v_res_1037_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Omega_conditionalFacts_spec__0_spec__0___redArg(lean_object* v_name_1038_, uint8_t v_bi_1039_, lean_object* v_type_1040_, lean_object* v_k_1041_, uint8_t v_kind_1042_, lean_object* v___y_1043_, lean_object* v___y_1044_, lean_object* v___y_1045_, lean_object* v___y_1046_){
_start:
{
lean_object* v___f_1048_; lean_object* v___x_1049_; 
v___f_1048_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Omega_conditionalFacts_spec__0_spec__0___redArg___lam__0___boxed), 7, 1);
lean_closure_set(v___f_1048_, 0, v_k_1041_);
v___x_1049_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_1038_, v_bi_1039_, v_type_1040_, v___f_1048_, v_kind_1042_, v___y_1043_, v___y_1044_, v___y_1045_, v___y_1046_);
if (lean_obj_tag(v___x_1049_) == 0)
{
lean_object* v_a_1050_; lean_object* v___x_1052_; uint8_t v_isShared_1053_; uint8_t v_isSharedCheck_1057_; 
v_a_1050_ = lean_ctor_get(v___x_1049_, 0);
v_isSharedCheck_1057_ = !lean_is_exclusive(v___x_1049_);
if (v_isSharedCheck_1057_ == 0)
{
v___x_1052_ = v___x_1049_;
v_isShared_1053_ = v_isSharedCheck_1057_;
goto v_resetjp_1051_;
}
else
{
lean_inc(v_a_1050_);
lean_dec(v___x_1049_);
v___x_1052_ = lean_box(0);
v_isShared_1053_ = v_isSharedCheck_1057_;
goto v_resetjp_1051_;
}
v_resetjp_1051_:
{
lean_object* v___x_1055_; 
if (v_isShared_1053_ == 0)
{
v___x_1055_ = v___x_1052_;
goto v_reusejp_1054_;
}
else
{
lean_object* v_reuseFailAlloc_1056_; 
v_reuseFailAlloc_1056_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1056_, 0, v_a_1050_);
v___x_1055_ = v_reuseFailAlloc_1056_;
goto v_reusejp_1054_;
}
v_reusejp_1054_:
{
return v___x_1055_;
}
}
}
else
{
lean_object* v_a_1058_; lean_object* v___x_1060_; uint8_t v_isShared_1061_; uint8_t v_isSharedCheck_1065_; 
v_a_1058_ = lean_ctor_get(v___x_1049_, 0);
v_isSharedCheck_1065_ = !lean_is_exclusive(v___x_1049_);
if (v_isSharedCheck_1065_ == 0)
{
v___x_1060_ = v___x_1049_;
v_isShared_1061_ = v_isSharedCheck_1065_;
goto v_resetjp_1059_;
}
else
{
lean_inc(v_a_1058_);
lean_dec(v___x_1049_);
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
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Omega_conditionalFacts_spec__0_spec__0___redArg___boxed(lean_object* v_name_1066_, lean_object* v_bi_1067_, lean_object* v_type_1068_, lean_object* v_k_1069_, lean_object* v_kind_1070_, lean_object* v___y_1071_, lean_object* v___y_1072_, lean_object* v___y_1073_, lean_object* v___y_1074_, lean_object* v___y_1075_){
_start:
{
uint8_t v_bi_boxed_1076_; uint8_t v_kind_boxed_1077_; lean_object* v_res_1078_; 
v_bi_boxed_1076_ = lean_unbox(v_bi_1067_);
v_kind_boxed_1077_ = lean_unbox(v_kind_1070_);
v_res_1078_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Omega_conditionalFacts_spec__0_spec__0___redArg(v_name_1066_, v_bi_boxed_1076_, v_type_1068_, v_k_1069_, v_kind_boxed_1077_, v___y_1071_, v___y_1072_, v___y_1073_, v___y_1074_);
lean_dec(v___y_1074_);
lean_dec_ref(v___y_1073_);
lean_dec(v___y_1072_);
lean_dec_ref(v___y_1071_);
return v_res_1078_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Omega_conditionalFacts_spec__0___redArg(lean_object* v_name_1079_, lean_object* v_type_1080_, lean_object* v_k_1081_, lean_object* v___y_1082_, lean_object* v___y_1083_, lean_object* v___y_1084_, lean_object* v___y_1085_){
_start:
{
uint8_t v___x_1087_; uint8_t v___x_1088_; lean_object* v___x_1089_; 
v___x_1087_ = 0;
v___x_1088_ = 0;
v___x_1089_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Omega_conditionalFacts_spec__0_spec__0___redArg(v_name_1079_, v___x_1087_, v_type_1080_, v_k_1081_, v___x_1088_, v___y_1082_, v___y_1083_, v___y_1084_, v___y_1085_);
return v___x_1089_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Omega_conditionalFacts_spec__0___redArg___boxed(lean_object* v_name_1090_, lean_object* v_type_1091_, lean_object* v_k_1092_, lean_object* v___y_1093_, lean_object* v___y_1094_, lean_object* v___y_1095_, lean_object* v___y_1096_, lean_object* v___y_1097_){
_start:
{
lean_object* v_res_1098_; 
v_res_1098_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Omega_conditionalFacts_spec__0___redArg(v_name_1090_, v_type_1091_, v_k_1092_, v___y_1093_, v___y_1094_, v___y_1095_, v___y_1096_);
lean_dec(v___y_1096_);
lean_dec_ref(v___y_1095_);
lean_dec(v___y_1094_);
lean_dec_ref(v___y_1093_);
return v_res_1098_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_conditionalFacts___lam__1(lean_object* v___x_1108_, lean_object* v___x_1109_, lean_object* v_00_u03b1_1110_, lean_object* v_e_1111_, uint8_t v___x_1112_, uint8_t v___x_1113_, lean_object* v___x_1114_, lean_object* v___x_1115_, lean_object* v___x_1116_, lean_object* v_v_1117_, lean_object* v_k_1118_, lean_object* v___y_1119_, lean_object* v___y_1120_, lean_object* v___y_1121_, lean_object* v___y_1122_){
_start:
{
lean_object* v___x_1124_; lean_object* v___x_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; lean_object* v___x_1128_; lean_object* v___x_1129_; lean_object* v___f_1130_; lean_object* v___x_1131_; lean_object* v___x_1132_; lean_object* v_hTy_1133_; lean_object* v___x_1134_; lean_object* v___x_1135_; 
v___x_1124_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_conditionalFacts___lam__1___closed__1));
v___x_1125_ = l_Lean_Level_ofNat(v___x_1108_);
lean_inc(v___x_1109_);
v___x_1126_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1126_, 0, v___x_1125_);
lean_ctor_set(v___x_1126_, 1, v___x_1109_);
v___x_1127_ = l_Lean_Expr_const___override(v___x_1124_, v___x_1126_);
v___x_1128_ = lean_box(v___x_1112_);
v___x_1129_ = lean_box(v___x_1113_);
lean_inc_ref(v___x_1127_);
v___f_1130_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Omega_conditionalFacts___lam__0___boxed), 13, 7);
lean_closure_set(v___f_1130_, 0, v___x_1108_);
lean_closure_set(v___f_1130_, 1, v_k_1118_);
lean_closure_set(v___f_1130_, 2, v___x_1127_);
lean_closure_set(v___f_1130_, 3, v_00_u03b1_1110_);
lean_closure_set(v___f_1130_, 4, v_e_1111_);
lean_closure_set(v___f_1130_, 5, v___x_1128_);
lean_closure_set(v___f_1130_, 6, v___x_1129_);
v___x_1131_ = l_Lean_Name_mkStr1(v___x_1114_);
v___x_1132_ = l_Lean_Expr_const___override(v___x_1131_, v___x_1109_);
v_hTy_1133_ = l_Lean_mkApp3(v___x_1127_, v___x_1132_, v___x_1115_, v_v_1117_);
v___x_1134_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_conditionalFacts___lam__1___closed__3));
lean_inc_ref(v_hTy_1133_);
v___x_1135_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Omega_conditionalFacts_spec__0___redArg(v___x_1134_, v_hTy_1133_, v___f_1130_, v___y_1119_, v___y_1120_, v___y_1121_, v___y_1122_);
if (lean_obj_tag(v___x_1135_) == 0)
{
lean_object* v_a_1136_; lean_object* v___x_1138_; uint8_t v_isShared_1139_; uint8_t v_isSharedCheck_1147_; 
v_a_1136_ = lean_ctor_get(v___x_1135_, 0);
v_isSharedCheck_1147_ = !lean_is_exclusive(v___x_1135_);
if (v_isSharedCheck_1147_ == 0)
{
v___x_1138_ = v___x_1135_;
v_isShared_1139_ = v_isSharedCheck_1147_;
goto v_resetjp_1137_;
}
else
{
lean_inc(v_a_1136_);
lean_dec(v___x_1135_);
v___x_1138_ = lean_box(0);
v_isShared_1139_ = v_isSharedCheck_1147_;
goto v_resetjp_1137_;
}
v_resetjp_1137_:
{
lean_object* v___x_1140_; lean_object* v___x_1141_; lean_object* v___x_1142_; lean_object* v___x_1143_; lean_object* v___x_1145_; 
v___x_1140_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_conditionalFacts___lam__1___closed__5));
v___x_1141_ = l_Lean_Expr_const___override(v___x_1140_, v___x_1116_);
lean_inc_ref(v_hTy_1133_);
v___x_1142_ = l_Lean_mkAppB(v___x_1141_, v_hTy_1133_, v_a_1136_);
v___x_1143_ = l_Lean_mkAnd(v_hTy_1133_, v___x_1142_);
if (v_isShared_1139_ == 0)
{
lean_ctor_set(v___x_1138_, 0, v___x_1143_);
v___x_1145_ = v___x_1138_;
goto v_reusejp_1144_;
}
else
{
lean_object* v_reuseFailAlloc_1146_; 
v_reuseFailAlloc_1146_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1146_, 0, v___x_1143_);
v___x_1145_ = v_reuseFailAlloc_1146_;
goto v_reusejp_1144_;
}
v_reusejp_1144_:
{
return v___x_1145_;
}
}
}
else
{
lean_dec_ref(v_hTy_1133_);
lean_dec(v___x_1116_);
return v___x_1135_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_conditionalFacts___lam__1___boxed(lean_object* v___x_1148_, lean_object* v___x_1149_, lean_object* v_00_u03b1_1150_, lean_object* v_e_1151_, lean_object* v___x_1152_, lean_object* v___x_1153_, lean_object* v___x_1154_, lean_object* v___x_1155_, lean_object* v___x_1156_, lean_object* v_v_1157_, lean_object* v_k_1158_, lean_object* v___y_1159_, lean_object* v___y_1160_, lean_object* v___y_1161_, lean_object* v___y_1162_, lean_object* v___y_1163_){
_start:
{
uint8_t v___x_2426__boxed_1164_; uint8_t v___x_2427__boxed_1165_; lean_object* v_res_1166_; 
v___x_2426__boxed_1164_ = lean_unbox(v___x_1152_);
v___x_2427__boxed_1165_ = lean_unbox(v___x_1153_);
v_res_1166_ = l_Lean_Elab_Tactic_Omega_conditionalFacts___lam__1(v___x_1148_, v___x_1149_, v_00_u03b1_1150_, v_e_1151_, v___x_2426__boxed_1164_, v___x_2427__boxed_1165_, v___x_1154_, v___x_1155_, v___x_1156_, v_v_1157_, v_k_1158_, v___y_1159_, v___y_1160_, v___y_1161_, v___y_1162_);
lean_dec(v___y_1162_);
lean_dec_ref(v___y_1161_);
lean_dec(v___y_1160_);
lean_dec_ref(v___y_1159_);
return v_res_1166_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__4(void){
_start:
{
lean_object* v___x_1174_; lean_object* v___x_1175_; 
v___x_1174_ = lean_unsigned_to_nat(0u);
v___x_1175_ = l_Lean_Level_ofNat(v___x_1174_);
return v___x_1175_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__5(void){
_start:
{
lean_object* v___x_1176_; lean_object* v___x_1177_; lean_object* v___x_1178_; 
v___x_1176_ = lean_box(0);
v___x_1177_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__4, &l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__4_once, _init_l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__4);
v___x_1178_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1178_, 0, v___x_1177_);
lean_ctor_set(v___x_1178_, 1, v___x_1176_);
return v___x_1178_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__6(void){
_start:
{
lean_object* v___x_1179_; lean_object* v___x_1180_; lean_object* v___x_1181_; 
v___x_1179_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__5, &l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__5_once, _init_l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__5);
v___x_1180_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__3));
v___x_1181_ = l_Lean_Expr_const___override(v___x_1180_, v___x_1179_);
return v___x_1181_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__9(void){
_start:
{
lean_object* v___x_1187_; lean_object* v___x_1188_; lean_object* v___x_1189_; 
v___x_1187_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__5, &l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__5_once, _init_l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__5);
v___x_1188_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__8));
v___x_1189_ = l_Lean_Expr_const___override(v___x_1188_, v___x_1187_);
return v___x_1189_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__15(void){
_start:
{
lean_object* v___x_1198_; lean_object* v___x_1199_; lean_object* v___x_1200_; 
v___x_1198_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__5, &l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__5_once, _init_l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__5);
v___x_1199_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__14));
v___x_1200_ = l_Lean_Expr_const___override(v___x_1199_, v___x_1198_);
return v___x_1200_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__18(void){
_start:
{
lean_object* v___x_1205_; lean_object* v___x_1206_; lean_object* v___x_1207_; 
v___x_1205_ = lean_box(0);
v___x_1206_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__17));
v___x_1207_ = l_Lean_Expr_const___override(v___x_1206_, v___x_1205_);
return v___x_1207_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__21(void){
_start:
{
lean_object* v___x_1212_; lean_object* v___x_1213_; lean_object* v___x_1214_; 
v___x_1212_ = lean_box(0);
v___x_1213_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__20));
v___x_1214_ = l_Lean_Expr_const___override(v___x_1213_, v___x_1212_);
return v___x_1214_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__24(void){
_start:
{
lean_object* v___x_1220_; lean_object* v___x_1221_; lean_object* v___x_1222_; 
v___x_1220_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__5, &l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__5_once, _init_l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__5);
v___x_1221_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__23));
v___x_1222_ = l_Lean_Expr_const___override(v___x_1221_, v___x_1220_);
return v___x_1222_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_conditionalFacts(lean_object* v_00_u03b1_1223_, lean_object* v_e_1224_, lean_object* v_a_1225_, lean_object* v_a_1226_, lean_object* v_a_1227_, lean_object* v_a_1228_){
_start:
{
lean_object* v___x_1233_; lean_object* v_fst_1234_; 
lean_inc_ref(v_e_1224_);
v___x_1233_ = l_Lean_Expr_getAppFnArgs(v_e_1224_);
v_fst_1234_ = lean_ctor_get(v___x_1233_, 0);
lean_inc(v_fst_1234_);
if (lean_obj_tag(v_fst_1234_) == 1)
{
lean_object* v_pre_1235_; 
v_pre_1235_ = lean_ctor_get(v_fst_1234_, 0);
switch(lean_obj_tag(v_pre_1235_))
{
case 0:
{
lean_object* v_snd_1236_; lean_object* v___x_1238_; uint8_t v_isShared_1239_; uint8_t v_isSharedCheck_1285_; 
lean_dec_ref(v_e_1224_);
v_snd_1236_ = lean_ctor_get(v___x_1233_, 1);
v_isSharedCheck_1285_ = !lean_is_exclusive(v___x_1233_);
if (v_isSharedCheck_1285_ == 0)
{
lean_object* v_unused_1286_; 
v_unused_1286_ = lean_ctor_get(v___x_1233_, 0);
lean_dec(v_unused_1286_);
v___x_1238_ = v___x_1233_;
v_isShared_1239_ = v_isSharedCheck_1285_;
goto v_resetjp_1237_;
}
else
{
lean_inc(v_snd_1236_);
lean_dec(v___x_1233_);
v___x_1238_ = lean_box(0);
v_isShared_1239_ = v_isSharedCheck_1285_;
goto v_resetjp_1237_;
}
v_resetjp_1237_:
{
lean_object* v_str_1240_; lean_object* v___x_1241_; uint8_t v___x_1242_; 
v_str_1240_ = lean_ctor_get(v_fst_1234_, 1);
lean_inc_ref(v_str_1240_);
lean_dec_ref_known(v_fst_1234_, 2);
v___x_1241_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__0));
v___x_1242_ = lean_string_dec_eq(v_str_1240_, v___x_1241_);
if (v___x_1242_ == 0)
{
lean_object* v___x_1243_; uint8_t v___x_1244_; 
v___x_1243_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__1));
v___x_1244_ = lean_string_dec_eq(v_str_1240_, v___x_1243_);
lean_dec_ref(v_str_1240_);
if (v___x_1244_ == 0)
{
lean_del_object(v___x_1238_);
lean_dec(v_snd_1236_);
lean_dec_ref(v_00_u03b1_1223_);
goto v___jp_1230_;
}
else
{
lean_object* v___x_1245_; lean_object* v___x_1246_; uint8_t v___x_1247_; 
v___x_1245_ = lean_array_get_size(v_snd_1236_);
v___x_1246_ = lean_unsigned_to_nat(4u);
v___x_1247_ = lean_nat_dec_eq(v___x_1245_, v___x_1246_);
if (v___x_1247_ == 0)
{
lean_del_object(v___x_1238_);
lean_dec(v_snd_1236_);
lean_dec_ref(v_00_u03b1_1223_);
goto v___jp_1230_;
}
else
{
lean_object* v___x_1248_; lean_object* v___x_1249_; uint8_t v___x_1250_; 
v___x_1248_ = lean_unsigned_to_nat(0u);
v___x_1249_ = lean_array_fget_borrowed(v_snd_1236_, v___x_1248_);
v___x_1250_ = lean_expr_eqv(v___x_1249_, v_00_u03b1_1223_);
if (v___x_1250_ == 0)
{
lean_del_object(v___x_1238_);
lean_dec(v_snd_1236_);
lean_dec_ref(v_00_u03b1_1223_);
goto v___jp_1230_;
}
else
{
lean_object* v___x_1251_; lean_object* v___x_1252_; lean_object* v___x_1253_; lean_object* v___x_1254_; lean_object* v___x_1255_; lean_object* v___x_1256_; lean_object* v___x_1257_; lean_object* v___x_1258_; lean_object* v___x_1259_; lean_object* v___x_1261_; 
v___x_1251_ = lean_unsigned_to_nat(1u);
v___x_1252_ = lean_array_fget(v_snd_1236_, v___x_1251_);
v___x_1253_ = lean_unsigned_to_nat(2u);
v___x_1254_ = lean_array_fget(v_snd_1236_, v___x_1253_);
v___x_1255_ = lean_unsigned_to_nat(3u);
v___x_1256_ = lean_array_fget(v_snd_1236_, v___x_1255_);
lean_dec(v_snd_1236_);
v___x_1257_ = lean_box(0);
v___x_1258_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__6, &l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__6_once, _init_l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__6);
v___x_1259_ = l_Lean_mkApp4(v___x_1258_, v_00_u03b1_1223_, v___x_1252_, v___x_1254_, v___x_1256_);
if (v_isShared_1239_ == 0)
{
lean_ctor_set_tag(v___x_1238_, 1);
lean_ctor_set(v___x_1238_, 1, v___x_1257_);
lean_ctor_set(v___x_1238_, 0, v___x_1259_);
v___x_1261_ = v___x_1238_;
goto v_reusejp_1260_;
}
else
{
lean_object* v_reuseFailAlloc_1263_; 
v_reuseFailAlloc_1263_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1263_, 0, v___x_1259_);
lean_ctor_set(v_reuseFailAlloc_1263_, 1, v___x_1257_);
v___x_1261_ = v_reuseFailAlloc_1263_;
goto v_reusejp_1260_;
}
v_reusejp_1260_:
{
lean_object* v___x_1262_; 
v___x_1262_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1262_, 0, v___x_1261_);
return v___x_1262_;
}
}
}
}
}
else
{
lean_object* v___x_1264_; lean_object* v___x_1265_; uint8_t v___x_1266_; 
lean_dec_ref(v_str_1240_);
v___x_1264_ = lean_array_get_size(v_snd_1236_);
v___x_1265_ = lean_unsigned_to_nat(5u);
v___x_1266_ = lean_nat_dec_eq(v___x_1264_, v___x_1265_);
if (v___x_1266_ == 0)
{
lean_del_object(v___x_1238_);
lean_dec(v_snd_1236_);
lean_dec_ref(v_00_u03b1_1223_);
goto v___jp_1230_;
}
else
{
lean_object* v___x_1267_; lean_object* v___x_1268_; uint8_t v___x_1269_; 
v___x_1267_ = lean_unsigned_to_nat(0u);
v___x_1268_ = lean_array_fget_borrowed(v_snd_1236_, v___x_1267_);
v___x_1269_ = lean_expr_eqv(v___x_1268_, v_00_u03b1_1223_);
if (v___x_1269_ == 0)
{
lean_del_object(v___x_1238_);
lean_dec(v_snd_1236_);
lean_dec_ref(v_00_u03b1_1223_);
goto v___jp_1230_;
}
else
{
lean_object* v___x_1270_; lean_object* v___x_1271_; lean_object* v___x_1272_; lean_object* v___x_1273_; lean_object* v___x_1274_; lean_object* v___x_1275_; lean_object* v___x_1276_; lean_object* v___x_1277_; lean_object* v___x_1278_; lean_object* v___x_1279_; lean_object* v___x_1280_; lean_object* v___x_1282_; 
v___x_1270_ = lean_unsigned_to_nat(1u);
v___x_1271_ = lean_array_fget(v_snd_1236_, v___x_1270_);
v___x_1272_ = lean_unsigned_to_nat(2u);
v___x_1273_ = lean_array_fget(v_snd_1236_, v___x_1272_);
v___x_1274_ = lean_unsigned_to_nat(3u);
v___x_1275_ = lean_array_fget(v_snd_1236_, v___x_1274_);
v___x_1276_ = lean_unsigned_to_nat(4u);
v___x_1277_ = lean_array_fget(v_snd_1236_, v___x_1276_);
lean_dec(v_snd_1236_);
v___x_1278_ = lean_box(0);
v___x_1279_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__9, &l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__9_once, _init_l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__9);
v___x_1280_ = l_Lean_mkApp5(v___x_1279_, v_00_u03b1_1223_, v___x_1271_, v___x_1273_, v___x_1275_, v___x_1277_);
if (v_isShared_1239_ == 0)
{
lean_ctor_set_tag(v___x_1238_, 1);
lean_ctor_set(v___x_1238_, 1, v___x_1278_);
lean_ctor_set(v___x_1238_, 0, v___x_1280_);
v___x_1282_ = v___x_1238_;
goto v_reusejp_1281_;
}
else
{
lean_object* v_reuseFailAlloc_1284_; 
v_reuseFailAlloc_1284_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1284_, 0, v___x_1280_);
lean_ctor_set(v_reuseFailAlloc_1284_, 1, v___x_1278_);
v___x_1282_ = v_reuseFailAlloc_1284_;
goto v_reusejp_1281_;
}
v_reusejp_1281_:
{
lean_object* v___x_1283_; 
v___x_1283_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1283_, 0, v___x_1282_);
return v___x_1283_;
}
}
}
}
}
}
case 1:
{
lean_object* v_pre_1287_; 
lean_inc_ref(v_pre_1235_);
v_pre_1287_ = lean_ctor_get(v_pre_1235_, 0);
if (lean_obj_tag(v_pre_1287_) == 0)
{
lean_object* v_snd_1288_; lean_object* v___x_1290_; uint8_t v_isShared_1291_; uint8_t v_isSharedCheck_1373_; 
v_snd_1288_ = lean_ctor_get(v___x_1233_, 1);
v_isSharedCheck_1373_ = !lean_is_exclusive(v___x_1233_);
if (v_isSharedCheck_1373_ == 0)
{
lean_object* v_unused_1374_; 
v_unused_1374_ = lean_ctor_get(v___x_1233_, 0);
lean_dec(v_unused_1374_);
v___x_1290_ = v___x_1233_;
v_isShared_1291_ = v_isSharedCheck_1373_;
goto v_resetjp_1289_;
}
else
{
lean_inc(v_snd_1288_);
lean_dec(v___x_1233_);
v___x_1290_ = lean_box(0);
v_isShared_1291_ = v_isSharedCheck_1373_;
goto v_resetjp_1289_;
}
v_resetjp_1289_:
{
lean_object* v_str_1292_; lean_object* v_str_1293_; lean_object* v___x_1294_; uint8_t v___x_1295_; 
v_str_1292_ = lean_ctor_get(v_fst_1234_, 1);
lean_inc_ref(v_str_1292_);
lean_dec_ref_known(v_fst_1234_, 2);
v_str_1293_ = lean_ctor_get(v_pre_1235_, 1);
lean_inc_ref(v_str_1293_);
lean_dec_ref_known(v_pre_1235_, 2);
v___x_1294_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__10));
v___x_1295_ = lean_string_dec_eq(v_str_1293_, v___x_1294_);
if (v___x_1295_ == 0)
{
lean_object* v___x_1296_; uint8_t v___x_1297_; 
v___x_1296_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__11));
v___x_1297_ = lean_string_dec_eq(v_str_1293_, v___x_1296_);
lean_dec_ref(v_str_1293_);
if (v___x_1297_ == 0)
{
lean_dec_ref(v_str_1292_);
lean_del_object(v___x_1290_);
lean_dec(v_snd_1288_);
lean_dec_ref(v_e_1224_);
lean_dec_ref(v_00_u03b1_1223_);
goto v___jp_1230_;
}
else
{
lean_object* v___x_1298_; uint8_t v___x_1299_; 
v___x_1298_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__12));
v___x_1299_ = lean_string_dec_eq(v_str_1292_, v___x_1298_);
lean_dec_ref(v_str_1292_);
if (v___x_1299_ == 0)
{
lean_del_object(v___x_1290_);
lean_dec(v_snd_1288_);
lean_dec_ref(v_e_1224_);
lean_dec_ref(v_00_u03b1_1223_);
goto v___jp_1230_;
}
else
{
lean_object* v___x_1300_; lean_object* v___x_1301_; uint8_t v___x_1302_; 
v___x_1300_ = lean_array_get_size(v_snd_1288_);
v___x_1301_ = lean_unsigned_to_nat(4u);
v___x_1302_ = lean_nat_dec_eq(v___x_1300_, v___x_1301_);
if (v___x_1302_ == 0)
{
lean_del_object(v___x_1290_);
lean_dec(v_snd_1288_);
lean_dec_ref(v_e_1224_);
lean_dec_ref(v_00_u03b1_1223_);
goto v___jp_1230_;
}
else
{
lean_object* v___x_1303_; lean_object* v___x_1304_; uint8_t v___x_1305_; 
v___x_1303_ = lean_unsigned_to_nat(0u);
v___x_1304_ = lean_array_fget_borrowed(v_snd_1288_, v___x_1303_);
v___x_1305_ = lean_expr_eqv(v___x_1304_, v_00_u03b1_1223_);
if (v___x_1305_ == 0)
{
lean_del_object(v___x_1290_);
lean_dec(v_snd_1288_);
lean_dec_ref(v_e_1224_);
lean_dec_ref(v_00_u03b1_1223_);
goto v___jp_1230_;
}
else
{
lean_object* v___x_1306_; lean_object* v___x_1307_; lean_object* v___x_1308_; lean_object* v___x_1309_; lean_object* v___x_1310_; lean_object* v___x_1311_; lean_object* v___x_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; lean_object* v_pf_1315_; lean_object* v___x_1316_; lean_object* v___x_1317_; 
v___x_1306_ = lean_unsigned_to_nat(1u);
v___x_1307_ = lean_array_fget(v_snd_1288_, v___x_1306_);
v___x_1308_ = lean_unsigned_to_nat(2u);
v___x_1309_ = lean_array_fget(v_snd_1288_, v___x_1308_);
v___x_1310_ = lean_unsigned_to_nat(3u);
v___x_1311_ = lean_array_fget(v_snd_1288_, v___x_1310_);
lean_dec(v_snd_1288_);
v___x_1312_ = lean_box(0);
v___x_1313_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__5, &l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__5_once, _init_l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__5);
v___x_1314_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__15, &l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__15_once, _init_l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__15);
lean_inc(v___x_1311_);
lean_inc(v___x_1309_);
lean_inc_n(v___x_1307_, 2);
lean_inc_ref_n(v_00_u03b1_1223_, 2);
v_pf_1315_ = l_Lean_mkApp4(v___x_1314_, v_00_u03b1_1223_, v___x_1307_, v___x_1309_, v___x_1311_);
v___x_1316_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__18, &l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__18_once, _init_l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__18);
lean_inc_ref(v_e_1224_);
v___x_1317_ = l_Lean_Elab_Tactic_Omega_conditionalFacts___lam__1(v___x_1306_, v___x_1312_, v_00_u03b1_1223_, v_e_1224_, v___x_1295_, v___x_1302_, v___x_1296_, v___x_1307_, v___x_1313_, v___x_1316_, v___x_1309_, v_a_1225_, v_a_1226_, v_a_1227_, v_a_1228_);
if (lean_obj_tag(v___x_1317_) == 0)
{
lean_object* v_a_1318_; lean_object* v___x_1319_; lean_object* v___x_1320_; 
v_a_1318_ = lean_ctor_get(v___x_1317_, 0);
lean_inc(v_a_1318_);
lean_dec_ref_known(v___x_1317_, 1);
v___x_1319_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__21, &l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__21_once, _init_l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__21);
v___x_1320_ = l_Lean_Elab_Tactic_Omega_conditionalFacts___lam__1(v___x_1306_, v___x_1312_, v_00_u03b1_1223_, v_e_1224_, v___x_1295_, v___x_1302_, v___x_1296_, v___x_1307_, v___x_1313_, v___x_1319_, v___x_1311_, v_a_1225_, v_a_1226_, v_a_1227_, v_a_1228_);
if (lean_obj_tag(v___x_1320_) == 0)
{
lean_object* v_a_1321_; lean_object* v___x_1323_; uint8_t v_isShared_1324_; uint8_t v_isSharedCheck_1333_; 
v_a_1321_ = lean_ctor_get(v___x_1320_, 0);
v_isSharedCheck_1333_ = !lean_is_exclusive(v___x_1320_);
if (v_isSharedCheck_1333_ == 0)
{
v___x_1323_ = v___x_1320_;
v_isShared_1324_ = v_isSharedCheck_1333_;
goto v_resetjp_1322_;
}
else
{
lean_inc(v_a_1321_);
lean_dec(v___x_1320_);
v___x_1323_ = lean_box(0);
v_isShared_1324_ = v_isSharedCheck_1333_;
goto v_resetjp_1322_;
}
v_resetjp_1322_:
{
lean_object* v___x_1325_; lean_object* v___x_1326_; lean_object* v___x_1328_; 
v___x_1325_ = l_Lean_mkOr(v_a_1318_, v_a_1321_);
v___x_1326_ = l_Lean_Meta_mkExpectedPropHint(v_pf_1315_, v___x_1325_);
if (v_isShared_1291_ == 0)
{
lean_ctor_set_tag(v___x_1290_, 1);
lean_ctor_set(v___x_1290_, 1, v___x_1312_);
lean_ctor_set(v___x_1290_, 0, v___x_1326_);
v___x_1328_ = v___x_1290_;
goto v_reusejp_1327_;
}
else
{
lean_object* v_reuseFailAlloc_1332_; 
v_reuseFailAlloc_1332_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1332_, 0, v___x_1326_);
lean_ctor_set(v_reuseFailAlloc_1332_, 1, v___x_1312_);
v___x_1328_ = v_reuseFailAlloc_1332_;
goto v_reusejp_1327_;
}
v_reusejp_1327_:
{
lean_object* v___x_1330_; 
if (v_isShared_1324_ == 0)
{
lean_ctor_set(v___x_1323_, 0, v___x_1328_);
v___x_1330_ = v___x_1323_;
goto v_reusejp_1329_;
}
else
{
lean_object* v_reuseFailAlloc_1331_; 
v_reuseFailAlloc_1331_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1331_, 0, v___x_1328_);
v___x_1330_ = v_reuseFailAlloc_1331_;
goto v_reusejp_1329_;
}
v_reusejp_1329_:
{
return v___x_1330_;
}
}
}
}
else
{
lean_object* v_a_1334_; lean_object* v___x_1336_; uint8_t v_isShared_1337_; uint8_t v_isSharedCheck_1341_; 
lean_dec(v_a_1318_);
lean_dec_ref(v_pf_1315_);
lean_del_object(v___x_1290_);
v_a_1334_ = lean_ctor_get(v___x_1320_, 0);
v_isSharedCheck_1341_ = !lean_is_exclusive(v___x_1320_);
if (v_isSharedCheck_1341_ == 0)
{
v___x_1336_ = v___x_1320_;
v_isShared_1337_ = v_isSharedCheck_1341_;
goto v_resetjp_1335_;
}
else
{
lean_inc(v_a_1334_);
lean_dec(v___x_1320_);
v___x_1336_ = lean_box(0);
v_isShared_1337_ = v_isSharedCheck_1341_;
goto v_resetjp_1335_;
}
v_resetjp_1335_:
{
lean_object* v___x_1339_; 
if (v_isShared_1337_ == 0)
{
v___x_1339_ = v___x_1336_;
goto v_reusejp_1338_;
}
else
{
lean_object* v_reuseFailAlloc_1340_; 
v_reuseFailAlloc_1340_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1340_, 0, v_a_1334_);
v___x_1339_ = v_reuseFailAlloc_1340_;
goto v_reusejp_1338_;
}
v_reusejp_1338_:
{
return v___x_1339_;
}
}
}
}
else
{
lean_object* v_a_1342_; lean_object* v___x_1344_; uint8_t v_isShared_1345_; uint8_t v_isSharedCheck_1349_; 
lean_dec_ref(v_pf_1315_);
lean_dec(v___x_1311_);
lean_dec(v___x_1307_);
lean_del_object(v___x_1290_);
lean_dec_ref(v_e_1224_);
lean_dec_ref(v_00_u03b1_1223_);
v_a_1342_ = lean_ctor_get(v___x_1317_, 0);
v_isSharedCheck_1349_ = !lean_is_exclusive(v___x_1317_);
if (v_isSharedCheck_1349_ == 0)
{
v___x_1344_ = v___x_1317_;
v_isShared_1345_ = v_isSharedCheck_1349_;
goto v_resetjp_1343_;
}
else
{
lean_inc(v_a_1342_);
lean_dec(v___x_1317_);
v___x_1344_ = lean_box(0);
v_isShared_1345_ = v_isSharedCheck_1349_;
goto v_resetjp_1343_;
}
v_resetjp_1343_:
{
lean_object* v___x_1347_; 
if (v_isShared_1345_ == 0)
{
v___x_1347_ = v___x_1344_;
goto v_reusejp_1346_;
}
else
{
lean_object* v_reuseFailAlloc_1348_; 
v_reuseFailAlloc_1348_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1348_, 0, v_a_1342_);
v___x_1347_ = v_reuseFailAlloc_1348_;
goto v_reusejp_1346_;
}
v_reusejp_1346_:
{
return v___x_1347_;
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
lean_object* v___x_1350_; uint8_t v___x_1351_; 
lean_dec_ref(v_str_1293_);
lean_dec_ref(v_e_1224_);
v___x_1350_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__0));
v___x_1351_ = lean_string_dec_eq(v_str_1292_, v___x_1350_);
lean_dec_ref(v_str_1292_);
if (v___x_1351_ == 0)
{
lean_del_object(v___x_1290_);
lean_dec(v_snd_1288_);
lean_dec_ref(v_00_u03b1_1223_);
goto v___jp_1230_;
}
else
{
lean_object* v___x_1352_; lean_object* v___x_1353_; uint8_t v___x_1354_; 
v___x_1352_ = lean_array_get_size(v_snd_1288_);
v___x_1353_ = lean_unsigned_to_nat(5u);
v___x_1354_ = lean_nat_dec_eq(v___x_1352_, v___x_1353_);
if (v___x_1354_ == 0)
{
lean_del_object(v___x_1290_);
lean_dec(v_snd_1288_);
lean_dec_ref(v_00_u03b1_1223_);
goto v___jp_1230_;
}
else
{
lean_object* v___x_1355_; lean_object* v___x_1356_; uint8_t v___x_1357_; 
v___x_1355_ = lean_unsigned_to_nat(0u);
v___x_1356_ = lean_array_fget_borrowed(v_snd_1288_, v___x_1355_);
v___x_1357_ = lean_expr_eqv(v___x_1356_, v_00_u03b1_1223_);
if (v___x_1357_ == 0)
{
lean_del_object(v___x_1290_);
lean_dec(v_snd_1288_);
lean_dec_ref(v_00_u03b1_1223_);
goto v___jp_1230_;
}
else
{
lean_object* v___x_1358_; lean_object* v___x_1359_; lean_object* v___x_1360_; lean_object* v___x_1361_; lean_object* v___x_1362_; lean_object* v___x_1363_; lean_object* v___x_1364_; lean_object* v___x_1365_; lean_object* v___x_1366_; lean_object* v___x_1367_; lean_object* v___x_1368_; lean_object* v___x_1370_; 
v___x_1358_ = lean_unsigned_to_nat(1u);
v___x_1359_ = lean_array_fget(v_snd_1288_, v___x_1358_);
v___x_1360_ = lean_unsigned_to_nat(2u);
v___x_1361_ = lean_array_fget(v_snd_1288_, v___x_1360_);
v___x_1362_ = lean_unsigned_to_nat(3u);
v___x_1363_ = lean_array_fget(v_snd_1288_, v___x_1362_);
v___x_1364_ = lean_unsigned_to_nat(4u);
v___x_1365_ = lean_array_fget(v_snd_1288_, v___x_1364_);
lean_dec(v_snd_1288_);
v___x_1366_ = lean_box(0);
v___x_1367_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__24, &l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__24_once, _init_l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__24);
v___x_1368_ = l_Lean_mkApp5(v___x_1367_, v_00_u03b1_1223_, v___x_1359_, v___x_1361_, v___x_1363_, v___x_1365_);
if (v_isShared_1291_ == 0)
{
lean_ctor_set_tag(v___x_1290_, 1);
lean_ctor_set(v___x_1290_, 1, v___x_1366_);
lean_ctor_set(v___x_1290_, 0, v___x_1368_);
v___x_1370_ = v___x_1290_;
goto v_reusejp_1369_;
}
else
{
lean_object* v_reuseFailAlloc_1372_; 
v_reuseFailAlloc_1372_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1372_, 0, v___x_1368_);
lean_ctor_set(v_reuseFailAlloc_1372_, 1, v___x_1366_);
v___x_1370_ = v_reuseFailAlloc_1372_;
goto v_reusejp_1369_;
}
v_reusejp_1369_:
{
lean_object* v___x_1371_; 
v___x_1371_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1371_, 0, v___x_1370_);
return v___x_1371_;
}
}
}
}
}
}
}
else
{
lean_dec_ref_known(v_pre_1235_, 2);
lean_dec_ref_known(v_fst_1234_, 2);
lean_dec_ref(v___x_1233_);
lean_dec_ref(v_e_1224_);
lean_dec_ref(v_00_u03b1_1223_);
goto v___jp_1230_;
}
}
default: 
{
lean_dec_ref_known(v_fst_1234_, 2);
lean_dec_ref(v___x_1233_);
lean_dec_ref(v_e_1224_);
lean_dec_ref(v_00_u03b1_1223_);
goto v___jp_1230_;
}
}
}
else
{
lean_dec(v_fst_1234_);
lean_dec_ref(v___x_1233_);
lean_dec_ref(v_e_1224_);
lean_dec_ref(v_00_u03b1_1223_);
goto v___jp_1230_;
}
v___jp_1230_:
{
lean_object* v___x_1231_; lean_object* v___x_1232_; 
v___x_1231_ = lean_box(0);
v___x_1232_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1232_, 0, v___x_1231_);
return v___x_1232_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_conditionalFacts___boxed(lean_object* v_00_u03b1_1375_, lean_object* v_e_1376_, lean_object* v_a_1377_, lean_object* v_a_1378_, lean_object* v_a_1379_, lean_object* v_a_1380_, lean_object* v_a_1381_){
_start:
{
lean_object* v_res_1382_; 
v_res_1382_ = l_Lean_Elab_Tactic_Omega_conditionalFacts(v_00_u03b1_1375_, v_e_1376_, v_a_1377_, v_a_1378_, v_a_1379_, v_a_1380_);
lean_dec(v_a_1380_);
lean_dec_ref(v_a_1379_);
lean_dec(v_a_1378_);
lean_dec_ref(v_a_1377_);
return v_res_1382_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Omega_conditionalFacts_spec__0_spec__0(lean_object* v_00_u03b1_1383_, lean_object* v_name_1384_, uint8_t v_bi_1385_, lean_object* v_type_1386_, lean_object* v_k_1387_, uint8_t v_kind_1388_, lean_object* v___y_1389_, lean_object* v___y_1390_, lean_object* v___y_1391_, lean_object* v___y_1392_){
_start:
{
lean_object* v___x_1394_; 
v___x_1394_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Omega_conditionalFacts_spec__0_spec__0___redArg(v_name_1384_, v_bi_1385_, v_type_1386_, v_k_1387_, v_kind_1388_, v___y_1389_, v___y_1390_, v___y_1391_, v___y_1392_);
return v___x_1394_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Omega_conditionalFacts_spec__0_spec__0___boxed(lean_object* v_00_u03b1_1395_, lean_object* v_name_1396_, lean_object* v_bi_1397_, lean_object* v_type_1398_, lean_object* v_k_1399_, lean_object* v_kind_1400_, lean_object* v___y_1401_, lean_object* v___y_1402_, lean_object* v___y_1403_, lean_object* v___y_1404_, lean_object* v___y_1405_){
_start:
{
uint8_t v_bi_boxed_1406_; uint8_t v_kind_boxed_1407_; lean_object* v_res_1408_; 
v_bi_boxed_1406_ = lean_unbox(v_bi_1397_);
v_kind_boxed_1407_ = lean_unbox(v_kind_1400_);
v_res_1408_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Omega_conditionalFacts_spec__0_spec__0(v_00_u03b1_1395_, v_name_1396_, v_bi_boxed_1406_, v_type_1398_, v_k_1399_, v_kind_boxed_1407_, v___y_1401_, v___y_1402_, v___y_1403_, v___y_1404_);
lean_dec(v___y_1404_);
lean_dec_ref(v___y_1403_);
lean_dec(v___y_1402_);
lean_dec_ref(v___y_1401_);
return v_res_1408_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Omega_conditionalFacts_spec__0(lean_object* v_00_u03b1_1409_, lean_object* v_name_1410_, lean_object* v_type_1411_, lean_object* v_k_1412_, lean_object* v___y_1413_, lean_object* v___y_1414_, lean_object* v___y_1415_, lean_object* v___y_1416_){
_start:
{
lean_object* v___x_1418_; 
v___x_1418_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Omega_conditionalFacts_spec__0___redArg(v_name_1410_, v_type_1411_, v_k_1412_, v___y_1413_, v___y_1414_, v___y_1415_, v___y_1416_);
return v___x_1418_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Omega_conditionalFacts_spec__0___boxed(lean_object* v_00_u03b1_1419_, lean_object* v_name_1420_, lean_object* v_type_1421_, lean_object* v_k_1422_, lean_object* v___y_1423_, lean_object* v___y_1424_, lean_object* v___y_1425_, lean_object* v___y_1426_, lean_object* v___y_1427_){
_start:
{
lean_object* v_res_1428_; 
v_res_1428_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Omega_conditionalFacts_spec__0(v_00_u03b1_1419_, v_name_1420_, v_type_1421_, v_k_1422_, v___y_1423_, v___y_1424_, v___y_1425_, v___y_1426_);
lean_dec(v___y_1426_);
lean_dec_ref(v___y_1425_);
lean_dec(v___y_1424_);
lean_dec_ref(v___y_1423_);
return v_res_1428_;
}
}
LEAN_EXPORT uint8_t l_List_elem___at___00Lean_Elab_Tactic_Omega_analyzeAtom_spec__0(lean_object* v_a_1429_, lean_object* v_x_1430_){
_start:
{
if (lean_obj_tag(v_x_1430_) == 0)
{
uint8_t v___x_1431_; 
v___x_1431_ = 0;
return v___x_1431_;
}
else
{
lean_object* v_head_1432_; lean_object* v_tail_1433_; uint8_t v___x_1434_; 
v_head_1432_ = lean_ctor_get(v_x_1430_, 0);
v_tail_1433_ = lean_ctor_get(v_x_1430_, 1);
v___x_1434_ = lean_expr_eqv(v_a_1429_, v_head_1432_);
if (v___x_1434_ == 0)
{
v_x_1430_ = v_tail_1433_;
goto _start;
}
else
{
return v___x_1434_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_elem___at___00Lean_Elab_Tactic_Omega_analyzeAtom_spec__0___boxed(lean_object* v_a_1436_, lean_object* v_x_1437_){
_start:
{
uint8_t v_res_1438_; lean_object* v_r_1439_; 
v_res_1438_ = l_List_elem___at___00Lean_Elab_Tactic_Omega_analyzeAtom_spec__0(v_a_1436_, v_x_1437_);
lean_dec(v_x_1437_);
lean_dec_ref(v_a_1436_);
v_r_1439_ = lean_box(v_res_1438_);
return v_r_1439_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__6(void){
_start:
{
lean_object* v___x_1448_; lean_object* v___x_1449_; lean_object* v___x_1450_; 
v___x_1448_ = lean_box(0);
v___x_1449_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__5));
v___x_1450_ = l_Lean_Expr_const___override(v___x_1449_, v___x_1448_);
return v___x_1450_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__9(void){
_start:
{
lean_object* v___x_1455_; lean_object* v___x_1456_; lean_object* v___x_1457_; 
v___x_1455_ = lean_box(0);
v___x_1456_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__8));
v___x_1457_ = l_Lean_Expr_const___override(v___x_1456_, v___x_1455_);
return v___x_1457_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__13(void){
_start:
{
lean_object* v___x_1463_; lean_object* v___x_1464_; lean_object* v___x_1465_; 
v___x_1463_ = lean_box(0);
v___x_1464_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__12));
v___x_1465_ = l_Lean_Expr_const___override(v___x_1464_, v___x_1463_);
return v___x_1465_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__16(void){
_start:
{
lean_object* v___x_1470_; lean_object* v___x_1471_; lean_object* v___x_1472_; 
v___x_1470_ = lean_box(0);
v___x_1471_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__15));
v___x_1472_ = l_Lean_Expr_const___override(v___x_1471_, v___x_1470_);
return v___x_1472_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__26(void){
_start:
{
lean_object* v___x_1490_; lean_object* v___x_1491_; 
v___x_1490_ = lean_unsigned_to_nat(0u);
v___x_1491_ = l_Lean_mkNatLit(v___x_1490_);
return v___x_1491_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__37(void){
_start:
{
lean_object* v___x_1514_; lean_object* v___x_1515_; 
v___x_1514_ = lean_unsigned_to_nat(0u);
v___x_1515_ = lean_nat_to_int(v___x_1514_);
return v___x_1515_;
}
}
static uint8_t _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__38(void){
_start:
{
lean_object* v___x_1516_; uint8_t v___x_1517_; 
v___x_1516_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__37, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__37_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__37);
v___x_1517_ = lean_int_dec_le(v___x_1516_, v___x_1516_);
return v___x_1517_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__44(void){
_start:
{
lean_object* v___x_1527_; lean_object* v___x_1528_; 
v___x_1527_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__37, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__37_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__37);
v___x_1528_ = lean_int_neg(v___x_1527_);
return v___x_1528_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__45(void){
_start:
{
lean_object* v___x_1529_; lean_object* v___x_1530_; 
v___x_1529_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__44, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__44_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__44);
v___x_1530_ = l_Int_toNat(v___x_1529_);
return v___x_1530_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__46(void){
_start:
{
lean_object* v___x_1531_; lean_object* v___x_1532_; 
v___x_1531_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__45, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__45_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__45);
v___x_1532_ = l_Lean_instToExprInt_mkNat(v___x_1531_);
return v___x_1532_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__47(void){
_start:
{
lean_object* v___x_1533_; lean_object* v___x_1534_; 
v___x_1533_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__37, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__37_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__37);
v___x_1534_ = l_Int_toNat(v___x_1533_);
return v___x_1534_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__48(void){
_start:
{
lean_object* v___x_1535_; lean_object* v___x_1536_; 
v___x_1535_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__47, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__47_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__47);
v___x_1536_ = l_Lean_instToExprInt_mkNat(v___x_1535_);
return v___x_1536_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__49(void){
_start:
{
lean_object* v___x_1537_; lean_object* v___x_1538_; lean_object* v___x_1539_; 
v___x_1537_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__5, &l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__5_once, _init_l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__5);
v___x_1538_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__22));
v___x_1539_ = l_Lean_Expr_const___override(v___x_1538_, v___x_1537_);
return v___x_1539_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__52(void){
_start:
{
lean_object* v___x_1544_; lean_object* v___x_1545_; lean_object* v___x_1546_; 
v___x_1544_ = lean_box(0);
v___x_1545_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__51));
v___x_1546_ = l_Lean_Expr_const___override(v___x_1545_, v___x_1544_);
return v___x_1546_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__55(void){
_start:
{
lean_object* v___x_1553_; lean_object* v___x_1554_; lean_object* v___x_1555_; 
v___x_1553_ = lean_box(0);
v___x_1554_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__54));
v___x_1555_ = l_Lean_Expr_const___override(v___x_1554_, v___x_1553_);
return v___x_1555_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__56(void){
_start:
{
lean_object* v___x_1556_; lean_object* v___x_1557_; lean_object* v___x_1558_; 
v___x_1556_ = lean_box(0);
v___x_1557_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__32));
v___x_1558_ = l_Lean_Expr_const___override(v___x_1557_, v___x_1556_);
return v___x_1558_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__57(void){
_start:
{
lean_object* v___x_1559_; lean_object* v___x_1560_; lean_object* v___x_1561_; 
v___x_1559_ = lean_box(0);
v___x_1560_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__34));
v___x_1561_ = l_Lean_Expr_const___override(v___x_1560_, v___x_1559_);
return v___x_1561_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__58(void){
_start:
{
lean_object* v___x_1562_; lean_object* v___x_1563_; lean_object* v___x_1564_; 
v___x_1562_ = lean_box(0);
v___x_1563_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__36));
v___x_1564_ = l_Lean_Expr_const___override(v___x_1563_, v___x_1562_);
return v___x_1564_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__59(void){
_start:
{
lean_object* v___x_1565_; lean_object* v___x_1566_; lean_object* v___x_1567_; 
v___x_1565_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__5, &l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__5_once, _init_l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__5);
v___x_1566_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__41));
v___x_1567_ = l_Lean_Expr_const___override(v___x_1566_, v___x_1565_);
return v___x_1567_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__60(void){
_start:
{
lean_object* v___x_1568_; lean_object* v___x_1569_; lean_object* v___x_1570_; 
v___x_1568_ = lean_box(0);
v___x_1569_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__43));
v___x_1570_ = l_Lean_Expr_const___override(v___x_1569_, v___x_1568_);
return v___x_1570_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__61(void){
_start:
{
lean_object* v___x_1571_; lean_object* v___x_1572_; lean_object* v___x_1573_; lean_object* v___x_1574_; lean_object* v___x_1575_; 
v___x_1571_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__46, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__46_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__46);
v___x_1572_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__60, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__60_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__60);
v___x_1573_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__2, &l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__2_once, _init_l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__2);
v___x_1574_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__59, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__59_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__59);
v___x_1575_ = l_Lean_mkApp3(v___x_1574_, v___x_1573_, v___x_1572_, v___x_1571_);
return v___x_1575_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__64(void){
_start:
{
lean_object* v___x_1579_; lean_object* v___x_1580_; 
v___x_1579_ = lean_unsigned_to_nat(1u);
v___x_1580_ = l_Lean_Level_ofNat(v___x_1579_);
return v___x_1580_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__65(void){
_start:
{
lean_object* v___x_1581_; lean_object* v___x_1582_; lean_object* v___x_1583_; 
v___x_1581_ = lean_box(0);
v___x_1582_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__64, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__64_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__64);
v___x_1583_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1583_, 0, v___x_1582_);
lean_ctor_set(v___x_1583_, 1, v___x_1581_);
return v___x_1583_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__66(void){
_start:
{
lean_object* v___x_1584_; lean_object* v___x_1585_; lean_object* v___x_1586_; 
v___x_1584_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__65, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__65_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__65);
v___x_1585_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__63));
v___x_1586_ = l_Lean_Expr_const___override(v___x_1585_, v___x_1584_);
return v___x_1586_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__69(void){
_start:
{
lean_object* v___x_1591_; lean_object* v___x_1592_; lean_object* v___x_1593_; 
v___x_1591_ = lean_box(0);
v___x_1592_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__68));
v___x_1593_ = l_Lean_Expr_const___override(v___x_1592_, v___x_1591_);
return v___x_1593_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__72(void){
_start:
{
lean_object* v___x_1598_; lean_object* v___x_1599_; lean_object* v___x_1600_; 
v___x_1598_ = lean_box(0);
v___x_1599_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__71));
v___x_1600_ = l_Lean_Expr_const___override(v___x_1599_, v___x_1598_);
return v___x_1600_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg(lean_object* v_e_1633_, lean_object* v_a_1634_, lean_object* v_a_1635_, lean_object* v_a_1636_, lean_object* v_a_1637_, lean_object* v_a_1638_){
_start:
{
lean_object* v___y_1650_; lean_object* v___y_1651_; lean_object* v___y_1652_; lean_object* v___y_1653_; lean_object* v___x_1662_; lean_object* v_fst_1663_; 
lean_inc_ref(v_e_1633_);
v___x_1662_ = l_Lean_Expr_getAppFnArgs(v_e_1633_);
v_fst_1663_ = lean_ctor_get(v___x_1662_, 0);
lean_inc(v_fst_1663_);
if (lean_obj_tag(v_fst_1663_) == 1)
{
lean_object* v_pre_1664_; 
v_pre_1664_ = lean_ctor_get(v_fst_1663_, 0);
lean_inc(v_pre_1664_);
if (lean_obj_tag(v_pre_1664_) == 1)
{
lean_object* v_pre_1665_; 
v_pre_1665_ = lean_ctor_get(v_pre_1664_, 0);
if (lean_obj_tag(v_pre_1665_) == 0)
{
lean_object* v_snd_1666_; lean_object* v___x_1668_; uint8_t v_isShared_1669_; uint8_t v_isSharedCheck_2167_; 
v_snd_1666_ = lean_ctor_get(v___x_1662_, 1);
v_isSharedCheck_2167_ = !lean_is_exclusive(v___x_1662_);
if (v_isSharedCheck_2167_ == 0)
{
lean_object* v_unused_2168_; 
v_unused_2168_ = lean_ctor_get(v___x_1662_, 0);
lean_dec(v_unused_2168_);
v___x_1668_ = v___x_1662_;
v_isShared_1669_ = v_isSharedCheck_2167_;
goto v_resetjp_1667_;
}
else
{
lean_inc(v_snd_1666_);
lean_dec(v___x_1662_);
v___x_1668_ = lean_box(0);
v_isShared_1669_ = v_isSharedCheck_2167_;
goto v_resetjp_1667_;
}
v_resetjp_1667_:
{
lean_object* v_str_1670_; lean_object* v_str_1671_; lean_object* v___x_1672_; uint8_t v___x_1673_; 
v_str_1670_ = lean_ctor_get(v_fst_1663_, 1);
lean_inc_ref(v_str_1670_);
lean_dec_ref_known(v_fst_1663_, 2);
v_str_1671_ = lean_ctor_get(v_pre_1664_, 1);
lean_inc_ref(v_str_1671_);
lean_dec_ref_known(v_pre_1664_, 2);
v___x_1672_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_natCast_x3f___closed__0));
v___x_1673_ = lean_string_dec_eq(v_str_1671_, v___x_1672_);
if (v___x_1673_ == 0)
{
lean_object* v___x_1674_; uint8_t v___x_1675_; 
v___x_1674_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__3));
v___x_1675_ = lean_string_dec_eq(v_str_1671_, v___x_1674_);
if (v___x_1675_ == 0)
{
lean_object* v___x_1676_; uint8_t v___x_1677_; 
v___x_1676_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__0));
v___x_1677_ = lean_string_dec_eq(v_str_1671_, v___x_1676_);
if (v___x_1677_ == 0)
{
lean_object* v___x_1678_; uint8_t v___x_1679_; 
v___x_1678_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__1));
v___x_1679_ = lean_string_dec_eq(v_str_1671_, v___x_1678_);
if (v___x_1679_ == 0)
{
lean_object* v___x_1680_; uint8_t v___x_1681_; 
v___x_1680_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__2));
v___x_1681_ = lean_string_dec_eq(v_str_1671_, v___x_1680_);
lean_dec_ref(v_str_1671_);
if (v___x_1681_ == 0)
{
lean_dec_ref(v_str_1670_);
lean_del_object(v___x_1668_);
lean_dec(v_snd_1666_);
v___y_1650_ = v_a_1635_;
v___y_1651_ = v_a_1636_;
v___y_1652_ = v_a_1637_;
v___y_1653_ = v_a_1638_;
goto v___jp_1649_;
}
else
{
lean_object* v___x_1682_; uint8_t v___x_1683_; 
v___x_1682_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__3));
v___x_1683_ = lean_string_dec_eq(v_str_1670_, v___x_1682_);
lean_dec_ref(v_str_1670_);
if (v___x_1683_ == 0)
{
lean_del_object(v___x_1668_);
lean_dec(v_snd_1666_);
v___y_1650_ = v_a_1635_;
v___y_1651_ = v_a_1636_;
v___y_1652_ = v_a_1637_;
v___y_1653_ = v_a_1638_;
goto v___jp_1649_;
}
else
{
lean_object* v___x_1684_; lean_object* v___x_1685_; uint8_t v___x_1686_; 
v___x_1684_ = lean_array_get_size(v_snd_1666_);
v___x_1685_ = lean_unsigned_to_nat(4u);
v___x_1686_ = lean_nat_dec_eq(v___x_1684_, v___x_1685_);
if (v___x_1686_ == 0)
{
lean_del_object(v___x_1668_);
lean_dec(v_snd_1666_);
v___y_1650_ = v_a_1635_;
v___y_1651_ = v_a_1636_;
v___y_1652_ = v_a_1637_;
v___y_1653_ = v_a_1638_;
goto v___jp_1649_;
}
else
{
lean_object* v___x_1687_; lean_object* v___x_1688_; lean_object* v___x_1689_; lean_object* v___x_1690_; lean_object* v___x_1691_; lean_object* v___x_1692_; lean_object* v___x_1693_; lean_object* v___x_1694_; lean_object* v___x_1695_; lean_object* v___x_1697_; 
lean_dec_ref(v_e_1633_);
v___x_1687_ = lean_unsigned_to_nat(2u);
v___x_1688_ = lean_array_fget(v_snd_1666_, v___x_1687_);
v___x_1689_ = lean_unsigned_to_nat(3u);
v___x_1690_ = lean_array_fget(v_snd_1666_, v___x_1689_);
lean_dec(v_snd_1666_);
v___x_1691_ = lean_box(0);
v___x_1692_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__6, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__6_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__6);
lean_inc(v___x_1690_);
lean_inc(v___x_1688_);
v___x_1693_ = l_Lean_mkAppB(v___x_1692_, v___x_1688_, v___x_1690_);
v___x_1694_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__9, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__9_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__9);
v___x_1695_ = l_Lean_mkAppB(v___x_1694_, v___x_1688_, v___x_1690_);
if (v_isShared_1669_ == 0)
{
lean_ctor_set_tag(v___x_1668_, 1);
lean_ctor_set(v___x_1668_, 1, v___x_1691_);
lean_ctor_set(v___x_1668_, 0, v___x_1695_);
v___x_1697_ = v___x_1668_;
goto v_reusejp_1696_;
}
else
{
lean_object* v_reuseFailAlloc_1700_; 
v_reuseFailAlloc_1700_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1700_, 0, v___x_1695_);
lean_ctor_set(v_reuseFailAlloc_1700_, 1, v___x_1691_);
v___x_1697_ = v_reuseFailAlloc_1700_;
goto v_reusejp_1696_;
}
v_reusejp_1696_:
{
lean_object* v___x_1698_; lean_object* v___x_1699_; 
v___x_1698_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1698_, 0, v___x_1693_);
lean_ctor_set(v___x_1698_, 1, v___x_1697_);
v___x_1699_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1699_, 0, v___x_1698_);
return v___x_1699_;
}
}
}
}
}
else
{
lean_object* v___x_1701_; uint8_t v___x_1702_; 
lean_dec_ref(v_str_1671_);
v___x_1701_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__10));
v___x_1702_ = lean_string_dec_eq(v_str_1670_, v___x_1701_);
lean_dec_ref(v_str_1670_);
if (v___x_1702_ == 0)
{
lean_del_object(v___x_1668_);
lean_dec(v_snd_1666_);
v___y_1650_ = v_a_1635_;
v___y_1651_ = v_a_1636_;
v___y_1652_ = v_a_1637_;
v___y_1653_ = v_a_1638_;
goto v___jp_1649_;
}
else
{
lean_object* v___x_1703_; lean_object* v___x_1704_; uint8_t v___x_1705_; 
v___x_1703_ = lean_array_get_size(v_snd_1666_);
v___x_1704_ = lean_unsigned_to_nat(4u);
v___x_1705_ = lean_nat_dec_eq(v___x_1703_, v___x_1704_);
if (v___x_1705_ == 0)
{
lean_del_object(v___x_1668_);
lean_dec(v_snd_1666_);
v___y_1650_ = v_a_1635_;
v___y_1651_ = v_a_1636_;
v___y_1652_ = v_a_1637_;
v___y_1653_ = v_a_1638_;
goto v___jp_1649_;
}
else
{
lean_object* v___x_1706_; lean_object* v___x_1707_; lean_object* v___x_1708_; lean_object* v___x_1709_; lean_object* v___x_1710_; lean_object* v___x_1711_; lean_object* v___x_1712_; lean_object* v___x_1713_; lean_object* v___x_1714_; lean_object* v___x_1716_; 
lean_dec_ref(v_e_1633_);
v___x_1706_ = lean_unsigned_to_nat(2u);
v___x_1707_ = lean_array_fget(v_snd_1666_, v___x_1706_);
v___x_1708_ = lean_unsigned_to_nat(3u);
v___x_1709_ = lean_array_fget(v_snd_1666_, v___x_1708_);
lean_dec(v_snd_1666_);
v___x_1710_ = lean_box(0);
v___x_1711_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__13, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__13_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__13);
lean_inc(v___x_1709_);
lean_inc(v___x_1707_);
v___x_1712_ = l_Lean_mkAppB(v___x_1711_, v___x_1707_, v___x_1709_);
v___x_1713_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__16, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__16_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__16);
v___x_1714_ = l_Lean_mkAppB(v___x_1713_, v___x_1707_, v___x_1709_);
if (v_isShared_1669_ == 0)
{
lean_ctor_set_tag(v___x_1668_, 1);
lean_ctor_set(v___x_1668_, 1, v___x_1710_);
lean_ctor_set(v___x_1668_, 0, v___x_1714_);
v___x_1716_ = v___x_1668_;
goto v_reusejp_1715_;
}
else
{
lean_object* v_reuseFailAlloc_1719_; 
v_reuseFailAlloc_1719_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1719_, 0, v___x_1714_);
lean_ctor_set(v_reuseFailAlloc_1719_, 1, v___x_1710_);
v___x_1716_ = v_reuseFailAlloc_1719_;
goto v_reusejp_1715_;
}
v_reusejp_1715_:
{
lean_object* v___x_1717_; lean_object* v___x_1718_; 
v___x_1717_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1717_, 0, v___x_1712_);
lean_ctor_set(v___x_1717_, 1, v___x_1716_);
v___x_1718_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1718_, 0, v___x_1717_);
return v___x_1718_;
}
}
}
}
}
else
{
lean_object* v___x_1720_; uint8_t v___x_1721_; 
lean_dec_ref(v_str_1671_);
v___x_1720_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__17));
v___x_1721_ = lean_string_dec_eq(v_str_1670_, v___x_1720_);
lean_dec_ref(v_str_1670_);
if (v___x_1721_ == 0)
{
lean_del_object(v___x_1668_);
lean_dec(v_snd_1666_);
v___y_1650_ = v_a_1635_;
v___y_1651_ = v_a_1636_;
v___y_1652_ = v_a_1637_;
v___y_1653_ = v_a_1638_;
goto v___jp_1649_;
}
else
{
lean_object* v___x_1722_; lean_object* v___x_1723_; uint8_t v___x_1724_; 
v___x_1722_ = lean_array_get_size(v_snd_1666_);
v___x_1723_ = lean_unsigned_to_nat(6u);
v___x_1724_ = lean_nat_dec_eq(v___x_1722_, v___x_1723_);
if (v___x_1724_ == 0)
{
lean_del_object(v___x_1668_);
lean_dec(v_snd_1666_);
v___y_1650_ = v_a_1635_;
v___y_1651_ = v_a_1636_;
v___y_1652_ = v_a_1637_;
v___y_1653_ = v_a_1638_;
goto v___jp_1649_;
}
else
{
lean_object* v___x_1725_; lean_object* v___x_1726_; lean_object* v___x_1727_; lean_object* v_fst_1728_; 
lean_dec_ref(v_e_1633_);
v___x_1725_ = lean_unsigned_to_nat(5u);
v___x_1726_ = lean_array_fget(v_snd_1666_, v___x_1725_);
lean_inc(v___x_1726_);
v___x_1727_ = l_Lean_Expr_getAppFnArgs(v___x_1726_);
v_fst_1728_ = lean_ctor_get(v___x_1727_, 0);
lean_inc(v_fst_1728_);
if (lean_obj_tag(v_fst_1728_) == 1)
{
lean_object* v_pre_1729_; 
v_pre_1729_ = lean_ctor_get(v_fst_1728_, 0);
lean_inc(v_pre_1729_);
if (lean_obj_tag(v_pre_1729_) == 1)
{
lean_object* v_pre_1730_; 
v_pre_1730_ = lean_ctor_get(v_pre_1729_, 0);
if (lean_obj_tag(v_pre_1730_) == 0)
{
lean_object* v_snd_1731_; lean_object* v___x_1733_; uint8_t v_isShared_1734_; uint8_t v_isSharedCheck_1930_; 
v_snd_1731_ = lean_ctor_get(v___x_1727_, 1);
v_isSharedCheck_1930_ = !lean_is_exclusive(v___x_1727_);
if (v_isSharedCheck_1930_ == 0)
{
lean_object* v_unused_1931_; 
v_unused_1931_ = lean_ctor_get(v___x_1727_, 0);
lean_dec(v_unused_1931_);
v___x_1733_ = v___x_1727_;
v_isShared_1734_ = v_isSharedCheck_1930_;
goto v_resetjp_1732_;
}
else
{
lean_inc(v_snd_1731_);
lean_dec(v___x_1727_);
v___x_1733_ = lean_box(0);
v_isShared_1734_ = v_isSharedCheck_1930_;
goto v_resetjp_1732_;
}
v_resetjp_1732_:
{
lean_object* v_str_1735_; lean_object* v_str_1736_; lean_object* v___x_1737_; lean_object* v___x_1738_; lean_object* v___x_1776_; uint8_t v___x_1777_; 
v_str_1735_ = lean_ctor_get(v_fst_1728_, 1);
lean_inc_ref(v_str_1735_);
lean_dec_ref_known(v_fst_1728_, 2);
v_str_1736_ = lean_ctor_get(v_pre_1729_, 1);
lean_inc_ref(v_str_1736_);
lean_dec_ref_known(v_pre_1729_, 2);
v___x_1737_ = lean_unsigned_to_nat(4u);
v___x_1738_ = lean_array_fget(v_snd_1666_, v___x_1737_);
lean_dec(v_snd_1666_);
v___x_1776_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__4));
v___x_1777_ = lean_string_dec_eq(v_str_1736_, v___x_1776_);
if (v___x_1777_ == 0)
{
uint8_t v___x_1778_; 
v___x_1778_ = lean_string_dec_eq(v_str_1736_, v___x_1672_);
lean_dec_ref(v_str_1736_);
if (v___x_1778_ == 0)
{
lean_dec(v___x_1738_);
lean_dec_ref(v_str_1735_);
lean_del_object(v___x_1733_);
lean_dec(v_snd_1731_);
lean_dec(v___x_1726_);
lean_del_object(v___x_1668_);
goto v___jp_1646_;
}
else
{
lean_object* v___x_1779_; uint8_t v___x_1780_; 
v___x_1779_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_natCast_x3f___closed__1));
v___x_1780_ = lean_string_dec_eq(v_str_1735_, v___x_1779_);
lean_dec_ref(v_str_1735_);
if (v___x_1780_ == 0)
{
lean_dec(v___x_1738_);
lean_del_object(v___x_1733_);
lean_dec(v_snd_1731_);
lean_dec(v___x_1726_);
lean_del_object(v___x_1668_);
goto v___jp_1646_;
}
else
{
lean_object* v___x_1781_; lean_object* v___x_1782_; uint8_t v___x_1783_; 
v___x_1781_ = lean_array_get_size(v_snd_1731_);
v___x_1782_ = lean_unsigned_to_nat(3u);
v___x_1783_ = lean_nat_dec_eq(v___x_1781_, v___x_1782_);
if (v___x_1783_ == 0)
{
lean_dec(v___x_1738_);
lean_del_object(v___x_1733_);
lean_dec(v_snd_1731_);
lean_dec(v___x_1726_);
lean_del_object(v___x_1668_);
goto v___jp_1646_;
}
else
{
lean_object* v___x_1784_; lean_object* v___x_1785_; 
v___x_1784_ = lean_unsigned_to_nat(0u);
v___x_1785_ = lean_array_fget_borrowed(v_snd_1731_, v___x_1784_);
if (lean_obj_tag(v___x_1785_) == 4)
{
lean_object* v_declName_1786_; 
v_declName_1786_ = lean_ctor_get(v___x_1785_, 0);
if (lean_obj_tag(v_declName_1786_) == 1)
{
lean_object* v_pre_1787_; 
v_pre_1787_ = lean_ctor_get(v_declName_1786_, 0);
if (lean_obj_tag(v_pre_1787_) == 0)
{
lean_object* v_us_1788_; lean_object* v_str_1789_; lean_object* v___x_1790_; uint8_t v___x_1791_; 
v_us_1788_ = lean_ctor_get(v___x_1785_, 1);
lean_inc(v_us_1788_);
v_str_1789_ = lean_ctor_get(v_declName_1786_, 1);
v___x_1790_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__0));
v___x_1791_ = lean_string_dec_eq(v_str_1789_, v___x_1790_);
if (v___x_1791_ == 0)
{
lean_dec(v_us_1788_);
lean_dec(v___x_1738_);
lean_del_object(v___x_1733_);
lean_dec(v_snd_1731_);
lean_dec(v___x_1726_);
lean_del_object(v___x_1668_);
goto v___jp_1646_;
}
else
{
if (lean_obj_tag(v_us_1788_) == 0)
{
lean_object* v___x_1792_; lean_object* v___x_1793_; lean_object* v___x_1794_; lean_object* v_fst_1795_; 
v___x_1792_ = lean_unsigned_to_nat(2u);
v___x_1793_ = lean_array_fget(v_snd_1731_, v___x_1792_);
lean_dec(v_snd_1731_);
lean_inc(v___x_1793_);
v___x_1794_ = l_Lean_Expr_getAppFnArgs(v___x_1793_);
v_fst_1795_ = lean_ctor_get(v___x_1794_, 0);
lean_inc(v_fst_1795_);
if (lean_obj_tag(v_fst_1795_) == 1)
{
lean_object* v_pre_1796_; 
v_pre_1796_ = lean_ctor_get(v_fst_1795_, 0);
lean_inc(v_pre_1796_);
if (lean_obj_tag(v_pre_1796_) == 1)
{
lean_object* v_pre_1797_; 
v_pre_1797_ = lean_ctor_get(v_pre_1796_, 0);
if (lean_obj_tag(v_pre_1797_) == 0)
{
lean_object* v_snd_1798_; lean_object* v___x_1800_; uint8_t v_isShared_1801_; uint8_t v_isSharedCheck_1877_; 
v_snd_1798_ = lean_ctor_get(v___x_1794_, 1);
v_isSharedCheck_1877_ = !lean_is_exclusive(v___x_1794_);
if (v_isSharedCheck_1877_ == 0)
{
lean_object* v_unused_1878_; 
v_unused_1878_ = lean_ctor_get(v___x_1794_, 0);
lean_dec(v_unused_1878_);
v___x_1800_ = v___x_1794_;
v_isShared_1801_ = v_isSharedCheck_1877_;
goto v_resetjp_1799_;
}
else
{
lean_inc(v_snd_1798_);
lean_dec(v___x_1794_);
v___x_1800_ = lean_box(0);
v_isShared_1801_ = v_isSharedCheck_1877_;
goto v_resetjp_1799_;
}
v_resetjp_1799_:
{
lean_object* v_str_1802_; lean_object* v_str_1803_; uint8_t v___x_1804_; 
v_str_1802_ = lean_ctor_get(v_fst_1795_, 1);
lean_inc_ref(v_str_1802_);
lean_dec_ref_known(v_fst_1795_, 2);
v_str_1803_ = lean_ctor_get(v_pre_1796_, 1);
lean_inc_ref(v_str_1803_);
lean_dec_ref_known(v_pre_1796_, 2);
v___x_1804_ = lean_string_dec_eq(v_str_1803_, v___x_1776_);
lean_dec_ref(v_str_1803_);
if (v___x_1804_ == 0)
{
lean_dec_ref(v_str_1802_);
lean_del_object(v___x_1800_);
lean_dec(v_snd_1798_);
lean_dec(v___x_1793_);
lean_del_object(v___x_1733_);
lean_del_object(v___x_1668_);
goto v___jp_1739_;
}
else
{
lean_object* v___x_1805_; uint8_t v___x_1806_; 
v___x_1805_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__5));
v___x_1806_ = lean_string_dec_eq(v_str_1802_, v___x_1805_);
lean_dec_ref(v_str_1802_);
if (v___x_1806_ == 0)
{
lean_del_object(v___x_1800_);
lean_dec(v_snd_1798_);
lean_dec(v___x_1793_);
lean_del_object(v___x_1733_);
lean_del_object(v___x_1668_);
goto v___jp_1739_;
}
else
{
lean_object* v___x_1807_; uint8_t v___x_1808_; 
v___x_1807_ = lean_array_get_size(v_snd_1798_);
v___x_1808_ = lean_nat_dec_eq(v___x_1807_, v___x_1723_);
if (v___x_1808_ == 0)
{
lean_del_object(v___x_1800_);
lean_dec(v_snd_1798_);
lean_dec(v___x_1793_);
lean_del_object(v___x_1733_);
lean_del_object(v___x_1668_);
goto v___jp_1739_;
}
else
{
lean_object* v___x_1809_; lean_object* v___x_1810_; 
v___x_1809_ = lean_array_fget(v_snd_1798_, v___x_1737_);
lean_inc(v___x_1809_);
v___x_1810_ = l_Lean_Elab_Tactic_Omega_natCast_x3f(v___x_1809_);
if (lean_obj_tag(v___x_1810_) == 0)
{
lean_dec(v___x_1809_);
lean_del_object(v___x_1800_);
lean_dec(v_snd_1798_);
lean_dec(v___x_1793_);
lean_dec(v___x_1738_);
lean_del_object(v___x_1733_);
lean_dec(v___x_1726_);
lean_del_object(v___x_1668_);
goto v___jp_1640_;
}
else
{
lean_object* v_val_1811_; uint8_t v___x_1812_; 
v_val_1811_ = lean_ctor_get(v___x_1810_, 0);
lean_inc(v_val_1811_);
lean_dec_ref_known(v___x_1810_, 1);
v___x_1812_ = lean_nat_dec_eq(v_val_1811_, v___x_1784_);
lean_dec(v_val_1811_);
if (v___x_1812_ == 0)
{
lean_object* v___x_1813_; lean_object* v___x_1814_; lean_object* v___x_1815_; lean_object* v___x_1817_; 
v___x_1813_ = lean_array_fget(v_snd_1798_, v___x_1725_);
lean_dec(v_snd_1798_);
v___x_1814_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__22));
v___x_1815_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__4, &l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__4_once, _init_l_Lean_Elab_Tactic_Omega_conditionalFacts___closed__4);
if (v_isShared_1801_ == 0)
{
lean_ctor_set_tag(v___x_1800_, 1);
lean_ctor_set(v___x_1800_, 1, v_us_1788_);
lean_ctor_set(v___x_1800_, 0, v___x_1815_);
v___x_1817_ = v___x_1800_;
goto v_reusejp_1816_;
}
else
{
lean_object* v_reuseFailAlloc_1876_; 
v_reuseFailAlloc_1876_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1876_, 0, v___x_1815_);
lean_ctor_set(v_reuseFailAlloc_1876_, 1, v_us_1788_);
v___x_1817_ = v_reuseFailAlloc_1876_;
goto v_reusejp_1816_;
}
v_reusejp_1816_:
{
lean_object* v___x_1818_; lean_object* v___x_1819_; lean_object* v___x_1820_; lean_object* v___x_1821_; lean_object* v___x_1822_; lean_object* v___x_1823_; lean_object* v_b__pos_1824_; lean_object* v___x_1825_; 
lean_inc_ref(v___x_1817_);
v___x_1818_ = l_Lean_Expr_const___override(v___x_1814_, v___x_1817_);
v___x_1819_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__23));
v___x_1820_ = l_Lean_Expr_const___override(v___x_1819_, v_us_1788_);
v___x_1821_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__25));
v___x_1822_ = l_Lean_Expr_const___override(v___x_1821_, v_us_1788_);
v___x_1823_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__26, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__26_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__26);
lean_inc(v___x_1809_);
v_b__pos_1824_ = l_Lean_mkApp4(v___x_1818_, v___x_1820_, v___x_1822_, v___x_1823_, v___x_1809_);
v___x_1825_ = l_Lean_Meta_mkDecideProof(v_b__pos_1824_, v_a_1635_, v_a_1636_, v_a_1637_, v_a_1638_);
if (lean_obj_tag(v___x_1825_) == 0)
{
lean_object* v_a_1826_; lean_object* v___x_1828_; uint8_t v_isShared_1829_; uint8_t v_isSharedCheck_1867_; 
v_a_1826_ = lean_ctor_get(v___x_1825_, 0);
v_isSharedCheck_1867_ = !lean_is_exclusive(v___x_1825_);
if (v_isSharedCheck_1867_ == 0)
{
v___x_1828_ = v___x_1825_;
v_isShared_1829_ = v_isSharedCheck_1867_;
goto v_resetjp_1827_;
}
else
{
lean_inc(v_a_1826_);
lean_dec(v___x_1825_);
v___x_1828_ = lean_box(0);
v_isShared_1829_ = v_isSharedCheck_1867_;
goto v_resetjp_1827_;
}
v_resetjp_1827_:
{
lean_object* v___x_1830_; lean_object* v___x_1831_; lean_object* v___x_1832_; lean_object* v___x_1833_; lean_object* v___x_1834_; lean_object* v___x_1835_; lean_object* v___x_1836_; lean_object* v___x_1837_; lean_object* v___x_1838_; lean_object* v___x_1839_; lean_object* v___y_1841_; uint8_t v___x_1857_; 
v___x_1830_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__28));
v___x_1831_ = l_Lean_Expr_const___override(v___x_1830_, v_us_1788_);
v___x_1832_ = l_Lean_mkApp3(v___x_1831_, v___x_1809_, v___x_1813_, v_a_1826_);
v___x_1833_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__30));
v___x_1834_ = l_Lean_Expr_const___override(v___x_1833_, v_us_1788_);
v___x_1835_ = l_Lean_mkAppB(v___x_1834_, v___x_1793_, v___x_1832_);
v___x_1836_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__32));
v___x_1837_ = l_Lean_Expr_const___override(v___x_1836_, v_us_1788_);
v___x_1838_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__34));
v___x_1839_ = l_Lean_Expr_const___override(v___x_1838_, v_us_1788_);
v___x_1857_ = lean_uint8_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__38, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__38_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__38);
if (v___x_1857_ == 0)
{
lean_object* v___x_1858_; lean_object* v___x_1859_; lean_object* v___x_1860_; lean_object* v___x_1861_; lean_object* v___x_1862_; lean_object* v___x_1863_; lean_object* v___x_1864_; lean_object* v___x_1865_; 
v___x_1858_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__41));
v___x_1859_ = l_Lean_Expr_const___override(v___x_1858_, v___x_1817_);
v___x_1860_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__1));
v___x_1861_ = l_Lean_Expr_const___override(v___x_1860_, v_us_1788_);
v___x_1862_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__43));
v___x_1863_ = l_Lean_Expr_const___override(v___x_1862_, v_us_1788_);
v___x_1864_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__46, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__46_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__46);
v___x_1865_ = l_Lean_mkApp3(v___x_1859_, v___x_1861_, v___x_1863_, v___x_1864_);
v___y_1841_ = v___x_1865_;
goto v___jp_1840_;
}
else
{
lean_object* v___x_1866_; 
lean_dec_ref(v___x_1817_);
v___x_1866_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__48, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__48_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__48);
v___y_1841_ = v___x_1866_;
goto v___jp_1840_;
}
v___jp_1840_:
{
lean_object* v___x_1842_; lean_object* v___x_1843_; lean_object* v___x_1844_; lean_object* v___x_1845_; lean_object* v___x_1846_; lean_object* v___x_1847_; lean_object* v___x_1849_; 
lean_inc_ref(v___x_1835_);
lean_inc_n(v___x_1726_, 2);
v___x_1842_ = l_Lean_mkApp3(v___x_1839_, v___x_1726_, v___y_1841_, v___x_1835_);
lean_inc(v___x_1738_);
v___x_1843_ = l_Lean_mkApp3(v___x_1837_, v___x_1738_, v___x_1726_, v___x_1842_);
v___x_1844_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__36));
v___x_1845_ = l_Lean_Expr_const___override(v___x_1844_, v_us_1788_);
v___x_1846_ = l_Lean_mkApp3(v___x_1845_, v___x_1738_, v___x_1726_, v___x_1835_);
v___x_1847_ = lean_box(0);
if (v_isShared_1734_ == 0)
{
lean_ctor_set_tag(v___x_1733_, 1);
lean_ctor_set(v___x_1733_, 1, v___x_1847_);
lean_ctor_set(v___x_1733_, 0, v___x_1846_);
v___x_1849_ = v___x_1733_;
goto v_reusejp_1848_;
}
else
{
lean_object* v_reuseFailAlloc_1856_; 
v_reuseFailAlloc_1856_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1856_, 0, v___x_1846_);
lean_ctor_set(v_reuseFailAlloc_1856_, 1, v___x_1847_);
v___x_1849_ = v_reuseFailAlloc_1856_;
goto v_reusejp_1848_;
}
v_reusejp_1848_:
{
lean_object* v___x_1851_; 
if (v_isShared_1669_ == 0)
{
lean_ctor_set_tag(v___x_1668_, 1);
lean_ctor_set(v___x_1668_, 1, v___x_1849_);
lean_ctor_set(v___x_1668_, 0, v___x_1843_);
v___x_1851_ = v___x_1668_;
goto v_reusejp_1850_;
}
else
{
lean_object* v_reuseFailAlloc_1855_; 
v_reuseFailAlloc_1855_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1855_, 0, v___x_1843_);
lean_ctor_set(v_reuseFailAlloc_1855_, 1, v___x_1849_);
v___x_1851_ = v_reuseFailAlloc_1855_;
goto v_reusejp_1850_;
}
v_reusejp_1850_:
{
lean_object* v___x_1853_; 
if (v_isShared_1829_ == 0)
{
lean_ctor_set(v___x_1828_, 0, v___x_1851_);
v___x_1853_ = v___x_1828_;
goto v_reusejp_1852_;
}
else
{
lean_object* v_reuseFailAlloc_1854_; 
v_reuseFailAlloc_1854_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1854_, 0, v___x_1851_);
v___x_1853_ = v_reuseFailAlloc_1854_;
goto v_reusejp_1852_;
}
v_reusejp_1852_:
{
return v___x_1853_;
}
}
}
}
}
}
else
{
lean_object* v_a_1868_; lean_object* v___x_1870_; uint8_t v_isShared_1871_; uint8_t v_isSharedCheck_1875_; 
lean_dec_ref(v___x_1817_);
lean_dec(v___x_1813_);
lean_dec(v___x_1809_);
lean_dec(v___x_1793_);
lean_dec(v___x_1738_);
lean_del_object(v___x_1733_);
lean_dec(v___x_1726_);
lean_del_object(v___x_1668_);
v_a_1868_ = lean_ctor_get(v___x_1825_, 0);
v_isSharedCheck_1875_ = !lean_is_exclusive(v___x_1825_);
if (v_isSharedCheck_1875_ == 0)
{
v___x_1870_ = v___x_1825_;
v_isShared_1871_ = v_isSharedCheck_1875_;
goto v_resetjp_1869_;
}
else
{
lean_inc(v_a_1868_);
lean_dec(v___x_1825_);
v___x_1870_ = lean_box(0);
v_isShared_1871_ = v_isSharedCheck_1875_;
goto v_resetjp_1869_;
}
v_resetjp_1869_:
{
lean_object* v___x_1873_; 
if (v_isShared_1871_ == 0)
{
v___x_1873_ = v___x_1870_;
goto v_reusejp_1872_;
}
else
{
lean_object* v_reuseFailAlloc_1874_; 
v_reuseFailAlloc_1874_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1874_, 0, v_a_1868_);
v___x_1873_ = v_reuseFailAlloc_1874_;
goto v_reusejp_1872_;
}
v_reusejp_1872_:
{
return v___x_1873_;
}
}
}
}
}
else
{
lean_dec(v___x_1809_);
lean_del_object(v___x_1800_);
lean_dec(v_snd_1798_);
lean_dec(v___x_1793_);
lean_dec(v___x_1738_);
lean_del_object(v___x_1733_);
lean_dec(v___x_1726_);
lean_del_object(v___x_1668_);
goto v___jp_1640_;
}
}
}
}
}
}
}
else
{
lean_dec_ref_known(v_pre_1796_, 2);
lean_dec_ref_known(v_fst_1795_, 2);
lean_dec_ref(v___x_1794_);
lean_dec(v___x_1793_);
lean_del_object(v___x_1733_);
lean_del_object(v___x_1668_);
goto v___jp_1739_;
}
}
else
{
lean_dec(v_pre_1796_);
lean_dec_ref_known(v_fst_1795_, 2);
lean_dec_ref(v___x_1794_);
lean_dec(v___x_1793_);
lean_del_object(v___x_1733_);
lean_del_object(v___x_1668_);
goto v___jp_1739_;
}
}
else
{
lean_dec(v_fst_1795_);
lean_dec_ref(v___x_1794_);
lean_dec(v___x_1793_);
lean_del_object(v___x_1733_);
lean_del_object(v___x_1668_);
goto v___jp_1739_;
}
}
else
{
lean_dec(v_us_1788_);
lean_dec(v___x_1738_);
lean_del_object(v___x_1733_);
lean_dec(v_snd_1731_);
lean_dec(v___x_1726_);
lean_del_object(v___x_1668_);
goto v___jp_1646_;
}
}
}
else
{
lean_dec(v___x_1738_);
lean_del_object(v___x_1733_);
lean_dec(v_snd_1731_);
lean_dec(v___x_1726_);
lean_del_object(v___x_1668_);
goto v___jp_1646_;
}
}
else
{
lean_dec(v___x_1738_);
lean_del_object(v___x_1733_);
lean_dec(v_snd_1731_);
lean_dec(v___x_1726_);
lean_del_object(v___x_1668_);
goto v___jp_1646_;
}
}
else
{
lean_dec(v___x_1738_);
lean_del_object(v___x_1733_);
lean_dec(v_snd_1731_);
lean_dec(v___x_1726_);
lean_del_object(v___x_1668_);
goto v___jp_1646_;
}
}
}
}
}
else
{
lean_object* v___x_1879_; uint8_t v___x_1880_; 
lean_dec_ref(v_str_1736_);
v___x_1879_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__5));
v___x_1880_ = lean_string_dec_eq(v_str_1735_, v___x_1879_);
lean_dec_ref(v_str_1735_);
if (v___x_1880_ == 0)
{
lean_dec(v___x_1738_);
lean_del_object(v___x_1733_);
lean_dec(v_snd_1731_);
lean_dec(v___x_1726_);
lean_del_object(v___x_1668_);
goto v___jp_1646_;
}
else
{
lean_object* v___x_1881_; uint8_t v___x_1882_; 
v___x_1881_ = lean_array_get_size(v_snd_1731_);
v___x_1882_ = lean_nat_dec_eq(v___x_1881_, v___x_1723_);
if (v___x_1882_ == 0)
{
lean_dec(v___x_1738_);
lean_del_object(v___x_1733_);
lean_dec(v_snd_1731_);
lean_dec(v___x_1726_);
lean_del_object(v___x_1668_);
goto v___jp_1646_;
}
else
{
lean_object* v___x_1883_; lean_object* v___x_1884_; 
v___x_1883_ = lean_array_fget(v_snd_1731_, v___x_1737_);
lean_inc(v___x_1883_);
v___x_1884_ = l_Lean_Elab_Tactic_Omega_natCast_x3f(v___x_1883_);
if (lean_obj_tag(v___x_1884_) == 0)
{
lean_dec(v___x_1883_);
lean_dec(v___x_1738_);
lean_del_object(v___x_1733_);
lean_dec(v_snd_1731_);
lean_dec(v___x_1726_);
lean_del_object(v___x_1668_);
goto v___jp_1656_;
}
else
{
lean_object* v_val_1885_; lean_object* v___x_1886_; uint8_t v___x_1887_; 
v_val_1885_ = lean_ctor_get(v___x_1884_, 0);
lean_inc(v_val_1885_);
lean_dec_ref_known(v___x_1884_, 1);
v___x_1886_ = lean_unsigned_to_nat(0u);
v___x_1887_ = lean_nat_dec_eq(v_val_1885_, v___x_1886_);
lean_dec(v_val_1885_);
if (v___x_1887_ == 0)
{
lean_object* v___x_1888_; lean_object* v___x_1889_; lean_object* v___x_1890_; lean_object* v___x_1891_; lean_object* v___x_1892_; lean_object* v___y_1894_; uint8_t v___x_1927_; 
v___x_1888_ = lean_array_fget(v_snd_1731_, v___x_1725_);
lean_dec(v_snd_1731_);
v___x_1889_ = lean_box(0);
v___x_1890_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__49, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__49_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__49);
v___x_1891_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__2, &l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__2_once, _init_l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__2);
v___x_1892_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__52, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__52_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__52);
v___x_1927_ = lean_uint8_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__38, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__38_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__38);
if (v___x_1927_ == 0)
{
lean_object* v___x_1928_; 
v___x_1928_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__61, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__61_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__61);
v___y_1894_ = v___x_1928_;
goto v___jp_1893_;
}
else
{
lean_object* v___x_1929_; 
v___x_1929_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__48, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__48_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__48);
v___y_1894_ = v___x_1929_;
goto v___jp_1893_;
}
v___jp_1893_:
{
lean_object* v_b__pos_1895_; lean_object* v___x_1896_; 
lean_inc(v___x_1883_);
lean_inc_ref(v___y_1894_);
v_b__pos_1895_ = l_Lean_mkApp4(v___x_1890_, v___x_1891_, v___x_1892_, v___y_1894_, v___x_1883_);
v___x_1896_ = l_Lean_Meta_mkDecideProof(v_b__pos_1895_, v_a_1635_, v_a_1636_, v_a_1637_, v_a_1638_);
if (lean_obj_tag(v___x_1896_) == 0)
{
lean_object* v_a_1897_; lean_object* v___x_1899_; uint8_t v_isShared_1900_; uint8_t v_isSharedCheck_1918_; 
v_a_1897_ = lean_ctor_get(v___x_1896_, 0);
v_isSharedCheck_1918_ = !lean_is_exclusive(v___x_1896_);
if (v_isSharedCheck_1918_ == 0)
{
v___x_1899_ = v___x_1896_;
v_isShared_1900_ = v_isSharedCheck_1918_;
goto v_resetjp_1898_;
}
else
{
lean_inc(v_a_1897_);
lean_dec(v___x_1896_);
v___x_1899_ = lean_box(0);
v_isShared_1900_ = v_isSharedCheck_1918_;
goto v_resetjp_1898_;
}
v_resetjp_1898_:
{
lean_object* v___x_1901_; lean_object* v___x_1902_; lean_object* v___x_1903_; lean_object* v___x_1904_; lean_object* v___x_1905_; lean_object* v___x_1906_; lean_object* v___x_1907_; lean_object* v___x_1908_; lean_object* v___x_1910_; 
v___x_1901_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__55, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__55_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__55);
v___x_1902_ = l_Lean_mkApp3(v___x_1901_, v___x_1883_, v___x_1888_, v_a_1897_);
v___x_1903_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__56, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__56_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__56);
v___x_1904_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__57, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__57_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__57);
lean_inc_ref(v___x_1902_);
lean_inc_ref(v___y_1894_);
lean_inc_n(v___x_1726_, 2);
v___x_1905_ = l_Lean_mkApp3(v___x_1904_, v___x_1726_, v___y_1894_, v___x_1902_);
lean_inc(v___x_1738_);
v___x_1906_ = l_Lean_mkApp3(v___x_1903_, v___x_1738_, v___x_1726_, v___x_1905_);
v___x_1907_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__58, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__58_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__58);
v___x_1908_ = l_Lean_mkApp3(v___x_1907_, v___x_1738_, v___x_1726_, v___x_1902_);
if (v_isShared_1734_ == 0)
{
lean_ctor_set_tag(v___x_1733_, 1);
lean_ctor_set(v___x_1733_, 1, v___x_1889_);
lean_ctor_set(v___x_1733_, 0, v___x_1908_);
v___x_1910_ = v___x_1733_;
goto v_reusejp_1909_;
}
else
{
lean_object* v_reuseFailAlloc_1917_; 
v_reuseFailAlloc_1917_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1917_, 0, v___x_1908_);
lean_ctor_set(v_reuseFailAlloc_1917_, 1, v___x_1889_);
v___x_1910_ = v_reuseFailAlloc_1917_;
goto v_reusejp_1909_;
}
v_reusejp_1909_:
{
lean_object* v___x_1912_; 
if (v_isShared_1669_ == 0)
{
lean_ctor_set_tag(v___x_1668_, 1);
lean_ctor_set(v___x_1668_, 1, v___x_1910_);
lean_ctor_set(v___x_1668_, 0, v___x_1906_);
v___x_1912_ = v___x_1668_;
goto v_reusejp_1911_;
}
else
{
lean_object* v_reuseFailAlloc_1916_; 
v_reuseFailAlloc_1916_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1916_, 0, v___x_1906_);
lean_ctor_set(v_reuseFailAlloc_1916_, 1, v___x_1910_);
v___x_1912_ = v_reuseFailAlloc_1916_;
goto v_reusejp_1911_;
}
v_reusejp_1911_:
{
lean_object* v___x_1914_; 
if (v_isShared_1900_ == 0)
{
lean_ctor_set(v___x_1899_, 0, v___x_1912_);
v___x_1914_ = v___x_1899_;
goto v_reusejp_1913_;
}
else
{
lean_object* v_reuseFailAlloc_1915_; 
v_reuseFailAlloc_1915_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1915_, 0, v___x_1912_);
v___x_1914_ = v_reuseFailAlloc_1915_;
goto v_reusejp_1913_;
}
v_reusejp_1913_:
{
return v___x_1914_;
}
}
}
}
}
else
{
lean_object* v_a_1919_; lean_object* v___x_1921_; uint8_t v_isShared_1922_; uint8_t v_isSharedCheck_1926_; 
lean_dec(v___x_1888_);
lean_dec(v___x_1883_);
lean_dec(v___x_1738_);
lean_del_object(v___x_1733_);
lean_dec(v___x_1726_);
lean_del_object(v___x_1668_);
v_a_1919_ = lean_ctor_get(v___x_1896_, 0);
v_isSharedCheck_1926_ = !lean_is_exclusive(v___x_1896_);
if (v_isSharedCheck_1926_ == 0)
{
v___x_1921_ = v___x_1896_;
v_isShared_1922_ = v_isSharedCheck_1926_;
goto v_resetjp_1920_;
}
else
{
lean_inc(v_a_1919_);
lean_dec(v___x_1896_);
v___x_1921_ = lean_box(0);
v_isShared_1922_ = v_isSharedCheck_1926_;
goto v_resetjp_1920_;
}
v_resetjp_1920_:
{
lean_object* v___x_1924_; 
if (v_isShared_1922_ == 0)
{
v___x_1924_ = v___x_1921_;
goto v_reusejp_1923_;
}
else
{
lean_object* v_reuseFailAlloc_1925_; 
v_reuseFailAlloc_1925_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1925_, 0, v_a_1919_);
v___x_1924_ = v_reuseFailAlloc_1925_;
goto v_reusejp_1923_;
}
v_reusejp_1923_:
{
return v___x_1924_;
}
}
}
}
}
else
{
lean_dec(v___x_1883_);
lean_dec(v___x_1738_);
lean_del_object(v___x_1733_);
lean_dec(v_snd_1731_);
lean_dec(v___x_1726_);
lean_del_object(v___x_1668_);
goto v___jp_1656_;
}
}
}
}
}
v___jp_1739_:
{
lean_object* v___x_1740_; lean_object* v_fst_1741_; 
v___x_1740_ = l_Lean_Expr_getAppFnArgs(v___x_1738_);
v_fst_1741_ = lean_ctor_get(v___x_1740_, 0);
lean_inc(v_fst_1741_);
if (lean_obj_tag(v_fst_1741_) == 1)
{
lean_object* v_pre_1742_; 
v_pre_1742_ = lean_ctor_get(v_fst_1741_, 0);
lean_inc(v_pre_1742_);
if (lean_obj_tag(v_pre_1742_) == 1)
{
lean_object* v_pre_1743_; 
v_pre_1743_ = lean_ctor_get(v_pre_1742_, 0);
if (lean_obj_tag(v_pre_1743_) == 0)
{
lean_object* v_snd_1744_; lean_object* v___x_1746_; uint8_t v_isShared_1747_; uint8_t v_isSharedCheck_1774_; 
v_snd_1744_ = lean_ctor_get(v___x_1740_, 1);
v_isSharedCheck_1774_ = !lean_is_exclusive(v___x_1740_);
if (v_isSharedCheck_1774_ == 0)
{
lean_object* v_unused_1775_; 
v_unused_1775_ = lean_ctor_get(v___x_1740_, 0);
lean_dec(v_unused_1775_);
v___x_1746_ = v___x_1740_;
v_isShared_1747_ = v_isSharedCheck_1774_;
goto v_resetjp_1745_;
}
else
{
lean_inc(v_snd_1744_);
lean_dec(v___x_1740_);
v___x_1746_ = lean_box(0);
v_isShared_1747_ = v_isSharedCheck_1774_;
goto v_resetjp_1745_;
}
v_resetjp_1745_:
{
lean_object* v_str_1748_; lean_object* v_str_1749_; uint8_t v___x_1750_; 
v_str_1748_ = lean_ctor_get(v_fst_1741_, 1);
lean_inc_ref(v_str_1748_);
lean_dec_ref_known(v_fst_1741_, 2);
v_str_1749_ = lean_ctor_get(v_pre_1742_, 1);
lean_inc_ref(v_str_1749_);
lean_dec_ref_known(v_pre_1742_, 2);
v___x_1750_ = lean_string_dec_eq(v_str_1749_, v___x_1672_);
lean_dec_ref(v_str_1749_);
if (v___x_1750_ == 0)
{
lean_dec_ref(v_str_1748_);
lean_del_object(v___x_1746_);
lean_dec(v_snd_1744_);
lean_dec(v___x_1726_);
goto v___jp_1643_;
}
else
{
lean_object* v___x_1751_; uint8_t v___x_1752_; 
v___x_1751_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_natCast_x3f___closed__1));
v___x_1752_ = lean_string_dec_eq(v_str_1748_, v___x_1751_);
lean_dec_ref(v_str_1748_);
if (v___x_1752_ == 0)
{
lean_del_object(v___x_1746_);
lean_dec(v_snd_1744_);
lean_dec(v___x_1726_);
goto v___jp_1643_;
}
else
{
lean_object* v___x_1753_; lean_object* v___x_1754_; uint8_t v___x_1755_; 
v___x_1753_ = lean_array_get_size(v_snd_1744_);
v___x_1754_ = lean_unsigned_to_nat(3u);
v___x_1755_ = lean_nat_dec_eq(v___x_1753_, v___x_1754_);
if (v___x_1755_ == 0)
{
lean_del_object(v___x_1746_);
lean_dec(v_snd_1744_);
lean_dec(v___x_1726_);
goto v___jp_1643_;
}
else
{
lean_object* v___x_1756_; lean_object* v___x_1757_; 
v___x_1756_ = lean_unsigned_to_nat(0u);
v___x_1757_ = lean_array_fget_borrowed(v_snd_1744_, v___x_1756_);
if (lean_obj_tag(v___x_1757_) == 4)
{
lean_object* v_declName_1758_; 
v_declName_1758_ = lean_ctor_get(v___x_1757_, 0);
if (lean_obj_tag(v_declName_1758_) == 1)
{
lean_object* v_pre_1759_; 
v_pre_1759_ = lean_ctor_get(v_declName_1758_, 0);
if (lean_obj_tag(v_pre_1759_) == 0)
{
lean_object* v_us_1760_; lean_object* v_str_1761_; lean_object* v___x_1762_; uint8_t v___x_1763_; 
v_us_1760_ = lean_ctor_get(v___x_1757_, 1);
lean_inc(v_us_1760_);
v_str_1761_ = lean_ctor_get(v_declName_1758_, 1);
v___x_1762_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__0));
v___x_1763_ = lean_string_dec_eq(v_str_1761_, v___x_1762_);
if (v___x_1763_ == 0)
{
lean_dec(v_us_1760_);
lean_del_object(v___x_1746_);
lean_dec(v_snd_1744_);
lean_dec(v___x_1726_);
goto v___jp_1643_;
}
else
{
if (lean_obj_tag(v_us_1760_) == 0)
{
lean_object* v___x_1764_; lean_object* v___x_1765_; lean_object* v___x_1766_; lean_object* v___x_1767_; lean_object* v___x_1768_; lean_object* v___x_1769_; lean_object* v___x_1771_; 
v___x_1764_ = lean_unsigned_to_nat(2u);
v___x_1765_ = lean_array_fget(v_snd_1744_, v___x_1764_);
lean_dec(v_snd_1744_);
v___x_1766_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__19));
v___x_1767_ = l_Lean_Expr_const___override(v___x_1766_, v_us_1760_);
v___x_1768_ = l_Lean_mkAppB(v___x_1767_, v___x_1765_, v___x_1726_);
v___x_1769_ = lean_box(0);
if (v_isShared_1747_ == 0)
{
lean_ctor_set_tag(v___x_1746_, 1);
lean_ctor_set(v___x_1746_, 1, v___x_1769_);
lean_ctor_set(v___x_1746_, 0, v___x_1768_);
v___x_1771_ = v___x_1746_;
goto v_reusejp_1770_;
}
else
{
lean_object* v_reuseFailAlloc_1773_; 
v_reuseFailAlloc_1773_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1773_, 0, v___x_1768_);
lean_ctor_set(v_reuseFailAlloc_1773_, 1, v___x_1769_);
v___x_1771_ = v_reuseFailAlloc_1773_;
goto v_reusejp_1770_;
}
v_reusejp_1770_:
{
lean_object* v___x_1772_; 
v___x_1772_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1772_, 0, v___x_1771_);
return v___x_1772_;
}
}
else
{
lean_dec(v_us_1760_);
lean_del_object(v___x_1746_);
lean_dec(v_snd_1744_);
lean_dec(v___x_1726_);
goto v___jp_1643_;
}
}
}
else
{
lean_del_object(v___x_1746_);
lean_dec(v_snd_1744_);
lean_dec(v___x_1726_);
goto v___jp_1643_;
}
}
else
{
lean_del_object(v___x_1746_);
lean_dec(v_snd_1744_);
lean_dec(v___x_1726_);
goto v___jp_1643_;
}
}
else
{
lean_del_object(v___x_1746_);
lean_dec(v_snd_1744_);
lean_dec(v___x_1726_);
goto v___jp_1643_;
}
}
}
}
}
}
else
{
lean_dec_ref_known(v_pre_1742_, 2);
lean_dec_ref_known(v_fst_1741_, 2);
lean_dec_ref(v___x_1740_);
lean_dec(v___x_1726_);
goto v___jp_1643_;
}
}
else
{
lean_dec_ref_known(v_fst_1741_, 2);
lean_dec(v_pre_1742_);
lean_dec_ref(v___x_1740_);
lean_dec(v___x_1726_);
goto v___jp_1643_;
}
}
else
{
lean_dec(v_fst_1741_);
lean_dec_ref(v___x_1740_);
lean_dec(v___x_1726_);
goto v___jp_1643_;
}
}
}
}
else
{
lean_dec_ref_known(v_pre_1729_, 2);
lean_dec_ref_known(v_fst_1728_, 2);
lean_dec_ref(v___x_1727_);
lean_dec(v___x_1726_);
lean_del_object(v___x_1668_);
lean_dec(v_snd_1666_);
goto v___jp_1646_;
}
}
else
{
lean_dec(v_pre_1729_);
lean_dec_ref_known(v_fst_1728_, 2);
lean_dec_ref(v___x_1727_);
lean_dec(v___x_1726_);
lean_del_object(v___x_1668_);
lean_dec(v_snd_1666_);
goto v___jp_1646_;
}
}
else
{
lean_dec(v_fst_1728_);
lean_dec_ref(v___x_1727_);
lean_dec(v___x_1726_);
lean_del_object(v___x_1668_);
lean_dec(v_snd_1666_);
goto v___jp_1646_;
}
}
}
}
}
else
{
lean_object* v___x_1932_; uint8_t v___x_1933_; 
lean_dec_ref(v_str_1671_);
v___x_1932_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__7));
v___x_1933_ = lean_string_dec_eq(v_str_1670_, v___x_1932_);
lean_dec_ref(v_str_1670_);
if (v___x_1933_ == 0)
{
lean_del_object(v___x_1668_);
lean_dec(v_snd_1666_);
v___y_1650_ = v_a_1635_;
v___y_1651_ = v_a_1636_;
v___y_1652_ = v_a_1637_;
v___y_1653_ = v_a_1638_;
goto v___jp_1649_;
}
else
{
lean_object* v___x_1934_; lean_object* v___x_1935_; uint8_t v___x_1936_; 
v___x_1934_ = lean_array_get_size(v_snd_1666_);
v___x_1935_ = lean_unsigned_to_nat(6u);
v___x_1936_ = lean_nat_dec_eq(v___x_1934_, v___x_1935_);
if (v___x_1936_ == 0)
{
lean_del_object(v___x_1668_);
lean_dec(v_snd_1666_);
v___y_1650_ = v_a_1635_;
v___y_1651_ = v_a_1636_;
v___y_1652_ = v_a_1637_;
v___y_1653_ = v_a_1638_;
goto v___jp_1649_;
}
else
{
lean_object* v___x_1937_; lean_object* v___x_1938_; lean_object* v___x_1939_; 
lean_dec_ref(v_e_1633_);
v___x_1937_ = lean_unsigned_to_nat(5u);
v___x_1938_ = lean_array_fget(v_snd_1666_, v___x_1937_);
lean_inc(v___x_1938_);
v___x_1939_ = l_Lean_Elab_Tactic_Omega_natCast_x3f(v___x_1938_);
if (lean_obj_tag(v___x_1939_) == 0)
{
lean_dec(v___x_1938_);
lean_del_object(v___x_1668_);
lean_dec(v_snd_1666_);
goto v___jp_1659_;
}
else
{
lean_object* v_val_1940_; lean_object* v___x_1941_; uint8_t v___x_1942_; 
v_val_1940_ = lean_ctor_get(v___x_1939_, 0);
lean_inc(v_val_1940_);
lean_dec_ref_known(v___x_1939_, 1);
v___x_1941_ = lean_unsigned_to_nat(0u);
v___x_1942_ = lean_nat_dec_eq(v_val_1940_, v___x_1941_);
lean_dec(v_val_1940_);
if (v___x_1942_ == 0)
{
lean_object* v___x_1943_; lean_object* v___x_1944_; lean_object* v___x_1945_; lean_object* v___x_1946_; lean_object* v___x_1947_; lean_object* v___y_1949_; uint8_t v___x_1989_; 
v___x_1943_ = lean_unsigned_to_nat(4u);
v___x_1944_ = lean_array_fget(v_snd_1666_, v___x_1943_);
lean_dec(v_snd_1666_);
v___x_1945_ = lean_box(0);
v___x_1946_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__66, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__66_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__66);
v___x_1947_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__2, &l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__2_once, _init_l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__2);
v___x_1989_ = lean_uint8_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__38, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__38_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__38);
if (v___x_1989_ == 0)
{
lean_object* v___x_1990_; 
v___x_1990_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__61, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__61_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__61);
v___y_1949_ = v___x_1990_;
goto v___jp_1948_;
}
else
{
lean_object* v___x_1991_; 
v___x_1991_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__48, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__48_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__48);
v___y_1949_ = v___x_1991_;
goto v___jp_1948_;
}
v___jp_1948_:
{
lean_object* v_ne__zero_1950_; lean_object* v___x_1951_; lean_object* v___x_1952_; lean_object* v_pos_1953_; lean_object* v___x_1954_; 
lean_inc_ref_n(v___y_1949_, 2);
lean_inc_n(v___x_1938_, 2);
v_ne__zero_1950_ = l_Lean_mkApp3(v___x_1946_, v___x_1947_, v___x_1938_, v___y_1949_);
v___x_1951_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__49, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__49_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__49);
v___x_1952_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__52, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__52_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__52);
v_pos_1953_ = l_Lean_mkApp4(v___x_1951_, v___x_1947_, v___x_1952_, v___y_1949_, v___x_1938_);
v___x_1954_ = l_Lean_Meta_mkDecideProof(v_ne__zero_1950_, v_a_1635_, v_a_1636_, v_a_1637_, v_a_1638_);
if (lean_obj_tag(v___x_1954_) == 0)
{
lean_object* v_a_1955_; lean_object* v___x_1956_; 
v_a_1955_ = lean_ctor_get(v___x_1954_, 0);
lean_inc(v_a_1955_);
lean_dec_ref_known(v___x_1954_, 1);
v___x_1956_ = l_Lean_Meta_mkDecideProof(v_pos_1953_, v_a_1635_, v_a_1636_, v_a_1637_, v_a_1638_);
if (lean_obj_tag(v___x_1956_) == 0)
{
lean_object* v_a_1957_; lean_object* v___x_1959_; uint8_t v_isShared_1960_; uint8_t v_isSharedCheck_1972_; 
v_a_1957_ = lean_ctor_get(v___x_1956_, 0);
v_isSharedCheck_1972_ = !lean_is_exclusive(v___x_1956_);
if (v_isSharedCheck_1972_ == 0)
{
v___x_1959_ = v___x_1956_;
v_isShared_1960_ = v_isSharedCheck_1972_;
goto v_resetjp_1958_;
}
else
{
lean_inc(v_a_1957_);
lean_dec(v___x_1956_);
v___x_1959_ = lean_box(0);
v_isShared_1960_ = v_isSharedCheck_1972_;
goto v_resetjp_1958_;
}
v_resetjp_1958_:
{
lean_object* v___x_1961_; lean_object* v___x_1962_; lean_object* v___x_1963_; lean_object* v___x_1964_; lean_object* v___x_1966_; 
v___x_1961_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__69, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__69_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__69);
lean_inc(v___x_1938_);
lean_inc(v___x_1944_);
v___x_1962_ = l_Lean_mkApp3(v___x_1961_, v___x_1944_, v___x_1938_, v_a_1955_);
v___x_1963_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__72, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__72_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__72);
v___x_1964_ = l_Lean_mkApp3(v___x_1963_, v___x_1944_, v___x_1938_, v_a_1957_);
if (v_isShared_1669_ == 0)
{
lean_ctor_set_tag(v___x_1668_, 1);
lean_ctor_set(v___x_1668_, 1, v___x_1945_);
lean_ctor_set(v___x_1668_, 0, v___x_1964_);
v___x_1966_ = v___x_1668_;
goto v_reusejp_1965_;
}
else
{
lean_object* v_reuseFailAlloc_1971_; 
v_reuseFailAlloc_1971_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1971_, 0, v___x_1964_);
lean_ctor_set(v_reuseFailAlloc_1971_, 1, v___x_1945_);
v___x_1966_ = v_reuseFailAlloc_1971_;
goto v_reusejp_1965_;
}
v_reusejp_1965_:
{
lean_object* v___x_1967_; lean_object* v___x_1969_; 
v___x_1967_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1967_, 0, v___x_1962_);
lean_ctor_set(v___x_1967_, 1, v___x_1966_);
if (v_isShared_1960_ == 0)
{
lean_ctor_set(v___x_1959_, 0, v___x_1967_);
v___x_1969_ = v___x_1959_;
goto v_reusejp_1968_;
}
else
{
lean_object* v_reuseFailAlloc_1970_; 
v_reuseFailAlloc_1970_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1970_, 0, v___x_1967_);
v___x_1969_ = v_reuseFailAlloc_1970_;
goto v_reusejp_1968_;
}
v_reusejp_1968_:
{
return v___x_1969_;
}
}
}
}
else
{
lean_object* v_a_1973_; lean_object* v___x_1975_; uint8_t v_isShared_1976_; uint8_t v_isSharedCheck_1980_; 
lean_dec(v_a_1955_);
lean_dec(v___x_1944_);
lean_dec(v___x_1938_);
lean_del_object(v___x_1668_);
v_a_1973_ = lean_ctor_get(v___x_1956_, 0);
v_isSharedCheck_1980_ = !lean_is_exclusive(v___x_1956_);
if (v_isSharedCheck_1980_ == 0)
{
v___x_1975_ = v___x_1956_;
v_isShared_1976_ = v_isSharedCheck_1980_;
goto v_resetjp_1974_;
}
else
{
lean_inc(v_a_1973_);
lean_dec(v___x_1956_);
v___x_1975_ = lean_box(0);
v_isShared_1976_ = v_isSharedCheck_1980_;
goto v_resetjp_1974_;
}
v_resetjp_1974_:
{
lean_object* v___x_1978_; 
if (v_isShared_1976_ == 0)
{
v___x_1978_ = v___x_1975_;
goto v_reusejp_1977_;
}
else
{
lean_object* v_reuseFailAlloc_1979_; 
v_reuseFailAlloc_1979_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1979_, 0, v_a_1973_);
v___x_1978_ = v_reuseFailAlloc_1979_;
goto v_reusejp_1977_;
}
v_reusejp_1977_:
{
return v___x_1978_;
}
}
}
}
else
{
lean_object* v_a_1981_; lean_object* v___x_1983_; uint8_t v_isShared_1984_; uint8_t v_isSharedCheck_1988_; 
lean_dec_ref(v_pos_1953_);
lean_dec(v___x_1944_);
lean_dec(v___x_1938_);
lean_del_object(v___x_1668_);
v_a_1981_ = lean_ctor_get(v___x_1954_, 0);
v_isSharedCheck_1988_ = !lean_is_exclusive(v___x_1954_);
if (v_isSharedCheck_1988_ == 0)
{
v___x_1983_ = v___x_1954_;
v_isShared_1984_ = v_isSharedCheck_1988_;
goto v_resetjp_1982_;
}
else
{
lean_inc(v_a_1981_);
lean_dec(v___x_1954_);
v___x_1983_ = lean_box(0);
v_isShared_1984_ = v_isSharedCheck_1988_;
goto v_resetjp_1982_;
}
v_resetjp_1982_:
{
lean_object* v___x_1986_; 
if (v_isShared_1984_ == 0)
{
v___x_1986_ = v___x_1983_;
goto v_reusejp_1985_;
}
else
{
lean_object* v_reuseFailAlloc_1987_; 
v_reuseFailAlloc_1987_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1987_, 0, v_a_1981_);
v___x_1986_ = v_reuseFailAlloc_1987_;
goto v_reusejp_1985_;
}
v_reusejp_1985_:
{
return v___x_1986_;
}
}
}
}
}
else
{
lean_dec(v___x_1938_);
lean_del_object(v___x_1668_);
lean_dec(v_snd_1666_);
goto v___jp_1659_;
}
}
}
}
}
}
else
{
lean_object* v___x_1992_; uint8_t v___x_1993_; 
lean_dec_ref(v_str_1671_);
v___x_1992_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_natCast_x3f___closed__1));
v___x_1993_ = lean_string_dec_eq(v_str_1670_, v___x_1992_);
lean_dec_ref(v_str_1670_);
if (v___x_1993_ == 0)
{
lean_del_object(v___x_1668_);
lean_dec(v_snd_1666_);
v___y_1650_ = v_a_1635_;
v___y_1651_ = v_a_1636_;
v___y_1652_ = v_a_1637_;
v___y_1653_ = v_a_1638_;
goto v___jp_1649_;
}
else
{
lean_object* v___x_1994_; lean_object* v___x_1995_; uint8_t v___x_1996_; 
v___x_1994_ = lean_array_get_size(v_snd_1666_);
v___x_1995_ = lean_unsigned_to_nat(3u);
v___x_1996_ = lean_nat_dec_eq(v___x_1994_, v___x_1995_);
if (v___x_1996_ == 0)
{
lean_del_object(v___x_1668_);
lean_dec(v_snd_1666_);
v___y_1650_ = v_a_1635_;
v___y_1651_ = v_a_1636_;
v___y_1652_ = v_a_1637_;
v___y_1653_ = v_a_1638_;
goto v___jp_1649_;
}
else
{
lean_object* v___x_1997_; lean_object* v___x_1998_; 
v___x_1997_ = lean_unsigned_to_nat(0u);
v___x_1998_ = lean_array_fget_borrowed(v_snd_1666_, v___x_1997_);
if (lean_obj_tag(v___x_1998_) == 4)
{
lean_object* v_declName_1999_; 
v_declName_1999_ = lean_ctor_get(v___x_1998_, 0);
if (lean_obj_tag(v_declName_1999_) == 1)
{
lean_object* v_pre_2000_; 
v_pre_2000_ = lean_ctor_get(v_declName_1999_, 0);
if (lean_obj_tag(v_pre_2000_) == 0)
{
lean_object* v_us_2001_; lean_object* v_str_2002_; lean_object* v___x_2003_; uint8_t v___x_2004_; 
v_us_2001_ = lean_ctor_get(v___x_1998_, 1);
lean_inc(v_us_2001_);
v_str_2002_ = lean_ctor_get(v_declName_1999_, 1);
v___x_2003_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__0));
v___x_2004_ = lean_string_dec_eq(v_str_2002_, v___x_2003_);
if (v___x_2004_ == 0)
{
lean_dec(v_us_2001_);
lean_del_object(v___x_1668_);
lean_dec(v_snd_1666_);
v___y_1650_ = v_a_1635_;
v___y_1651_ = v_a_1636_;
v___y_1652_ = v_a_1637_;
v___y_1653_ = v_a_1638_;
goto v___jp_1649_;
}
else
{
if (lean_obj_tag(v_us_2001_) == 0)
{
uint8_t v_splitNatSub_2005_; lean_object* v___x_2006_; lean_object* v___x_2007_; lean_object* v_r_2009_; lean_object* v___y_2010_; lean_object* v___y_2011_; lean_object* v___y_2012_; lean_object* v___y_2013_; lean_object* v___y_2027_; lean_object* v___y_2028_; lean_object* v___y_2029_; lean_object* v___y_2030_; lean_object* v___y_2031_; lean_object* v___y_2032_; lean_object* v___x_2040_; lean_object* v___x_2041_; lean_object* v___x_2042_; lean_object* v___x_2043_; lean_object* v_r_2044_; lean_object* v_x_2046_; lean_object* v___y_2047_; lean_object* v___y_2048_; lean_object* v___y_2049_; lean_object* v___y_2050_; lean_object* v_n_2057_; lean_object* v_i_2058_; lean_object* v___y_2059_; lean_object* v___y_2060_; lean_object* v___y_2061_; lean_object* v___y_2062_; lean_object* v_n_2069_; lean_object* v_x_2070_; lean_object* v___y_2071_; lean_object* v___y_2072_; lean_object* v___y_2073_; lean_object* v___y_2074_; 
lean_dec_ref(v_e_1633_);
v_splitNatSub_2005_ = lean_ctor_get_uint8(v_a_1634_, 1);
v___x_2006_ = lean_unsigned_to_nat(2u);
v___x_2007_ = lean_array_fget(v_snd_1666_, v___x_2006_);
lean_dec(v_snd_1666_);
v___x_2040_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__76));
v___x_2041_ = l_Lean_Expr_const___override(v___x_2040_, v_us_2001_);
lean_inc(v___x_2007_);
v___x_2042_ = l_Lean_Expr_app___override(v___x_2041_, v___x_2007_);
v___x_2043_ = lean_box(0);
v_r_2044_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_r_2044_, 0, v___x_2042_);
lean_ctor_set(v_r_2044_, 1, v___x_2043_);
if (v_splitNatSub_2005_ == 1)
{
lean_object* v___x_2080_; lean_object* v_fst_2081_; 
lean_inc(v___x_2007_);
v___x_2080_ = l_Lean_Expr_getAppFnArgs(v___x_2007_);
v_fst_2081_ = lean_ctor_get(v___x_2080_, 0);
lean_inc(v_fst_2081_);
if (lean_obj_tag(v_fst_2081_) == 1)
{
lean_object* v_pre_2082_; 
v_pre_2082_ = lean_ctor_get(v_fst_2081_, 0);
lean_inc(v_pre_2082_);
if (lean_obj_tag(v_pre_2082_) == 1)
{
lean_object* v_pre_2083_; 
v_pre_2083_ = lean_ctor_get(v_pre_2082_, 0);
if (lean_obj_tag(v_pre_2083_) == 0)
{
lean_object* v_snd_2084_; lean_object* v___x_2086_; uint8_t v_isShared_2087_; uint8_t v_isSharedCheck_2133_; 
v_snd_2084_ = lean_ctor_get(v___x_2080_, 1);
v_isSharedCheck_2133_ = !lean_is_exclusive(v___x_2080_);
if (v_isSharedCheck_2133_ == 0)
{
lean_object* v_unused_2134_; 
v_unused_2134_ = lean_ctor_get(v___x_2080_, 0);
lean_dec(v_unused_2134_);
v___x_2086_ = v___x_2080_;
v_isShared_2087_ = v_isSharedCheck_2133_;
goto v_resetjp_2085_;
}
else
{
lean_inc(v_snd_2084_);
lean_dec(v___x_2080_);
v___x_2086_ = lean_box(0);
v_isShared_2087_ = v_isSharedCheck_2133_;
goto v_resetjp_2085_;
}
v_resetjp_2085_:
{
lean_object* v_str_2088_; lean_object* v_str_2089_; lean_object* v___x_2090_; uint8_t v___x_2091_; 
v_str_2088_ = lean_ctor_get(v_fst_2081_, 1);
lean_inc_ref(v_str_2088_);
lean_dec_ref_known(v_fst_2081_, 2);
v_str_2089_ = lean_ctor_get(v_pre_2082_, 1);
lean_inc_ref(v_str_2089_);
lean_dec_ref_known(v_pre_2082_, 2);
v___x_2090_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__2));
v___x_2091_ = lean_string_dec_eq(v_str_2089_, v___x_2090_);
if (v___x_2091_ == 0)
{
uint8_t v___x_2092_; 
lean_del_object(v___x_2086_);
v___x_2092_ = lean_string_dec_eq(v_str_2089_, v___x_2003_);
if (v___x_2092_ == 0)
{
lean_object* v___x_2093_; uint8_t v___x_2094_; 
lean_del_object(v___x_1668_);
v___x_2093_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__79));
v___x_2094_ = lean_string_dec_eq(v_str_2089_, v___x_2093_);
if (v___x_2094_ == 0)
{
lean_object* v___x_2095_; uint8_t v___x_2096_; 
v___x_2095_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__82));
v___x_2096_ = lean_string_dec_eq(v_str_2089_, v___x_2095_);
lean_dec_ref(v_str_2089_);
if (v___x_2096_ == 0)
{
lean_dec_ref(v_str_2088_);
lean_dec(v_snd_2084_);
v_r_2009_ = v_r_2044_;
v___y_2010_ = v_a_1635_;
v___y_2011_ = v_a_1636_;
v___y_2012_ = v_a_1637_;
v___y_2013_ = v_a_1638_;
goto v___jp_2008_;
}
else
{
lean_object* v___x_2097_; uint8_t v___x_2098_; 
v___x_2097_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__84));
v___x_2098_ = lean_string_dec_eq(v_str_2088_, v___x_2097_);
lean_dec_ref(v_str_2088_);
if (v___x_2098_ == 0)
{
lean_dec(v_snd_2084_);
v_r_2009_ = v_r_2044_;
v___y_2010_ = v_a_1635_;
v___y_2011_ = v_a_1636_;
v___y_2012_ = v_a_1637_;
v___y_2013_ = v_a_1638_;
goto v___jp_2008_;
}
else
{
lean_object* v___x_2099_; uint8_t v___x_2100_; 
v___x_2099_ = lean_array_get_size(v_snd_2084_);
v___x_2100_ = lean_nat_dec_eq(v___x_2099_, v___x_2006_);
if (v___x_2100_ == 0)
{
lean_dec(v_snd_2084_);
v_r_2009_ = v_r_2044_;
v___y_2010_ = v_a_1635_;
v___y_2011_ = v_a_1636_;
v___y_2012_ = v_a_1637_;
v___y_2013_ = v_a_1638_;
goto v___jp_2008_;
}
else
{
lean_object* v___x_2101_; lean_object* v___x_2102_; lean_object* v___x_2103_; 
v___x_2101_ = lean_array_fget(v_snd_2084_, v___x_1997_);
v___x_2102_ = lean_unsigned_to_nat(1u);
v___x_2103_ = lean_array_fget(v_snd_2084_, v___x_2102_);
lean_dec(v_snd_2084_);
v_n_2069_ = v___x_2101_;
v_x_2070_ = v___x_2103_;
v___y_2071_ = v_a_1635_;
v___y_2072_ = v_a_1636_;
v___y_2073_ = v_a_1637_;
v___y_2074_ = v_a_1638_;
goto v___jp_2068_;
}
}
}
}
else
{
lean_object* v___x_2104_; uint8_t v___x_2105_; 
lean_dec_ref(v_str_2089_);
v___x_2104_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__85));
v___x_2105_ = lean_string_dec_eq(v_str_2088_, v___x_2104_);
lean_dec_ref(v_str_2088_);
if (v___x_2105_ == 0)
{
lean_dec(v_snd_2084_);
v_r_2009_ = v_r_2044_;
v___y_2010_ = v_a_1635_;
v___y_2011_ = v_a_1636_;
v___y_2012_ = v_a_1637_;
v___y_2013_ = v_a_1638_;
goto v___jp_2008_;
}
else
{
lean_object* v___x_2106_; uint8_t v___x_2107_; 
v___x_2106_ = lean_array_get_size(v_snd_2084_);
v___x_2107_ = lean_nat_dec_eq(v___x_2106_, v___x_2006_);
if (v___x_2107_ == 0)
{
lean_dec(v_snd_2084_);
v_r_2009_ = v_r_2044_;
v___y_2010_ = v_a_1635_;
v___y_2011_ = v_a_1636_;
v___y_2012_ = v_a_1637_;
v___y_2013_ = v_a_1638_;
goto v___jp_2008_;
}
else
{
lean_object* v___x_2108_; lean_object* v___x_2109_; lean_object* v___x_2110_; 
v___x_2108_ = lean_array_fget(v_snd_2084_, v___x_1997_);
v___x_2109_ = lean_unsigned_to_nat(1u);
v___x_2110_ = lean_array_fget(v_snd_2084_, v___x_2109_);
lean_dec(v_snd_2084_);
v_n_2057_ = v___x_2108_;
v_i_2058_ = v___x_2110_;
v___y_2059_ = v_a_1635_;
v___y_2060_ = v_a_1636_;
v___y_2061_ = v_a_1637_;
v___y_2062_ = v_a_1638_;
goto v___jp_2056_;
}
}
}
}
else
{
lean_object* v___x_2111_; uint8_t v___x_2112_; 
lean_dec_ref(v_str_2089_);
v___x_2111_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__86));
v___x_2112_ = lean_string_dec_eq(v_str_2088_, v___x_2111_);
lean_dec_ref(v_str_2088_);
if (v___x_2112_ == 0)
{
lean_dec(v_snd_2084_);
lean_del_object(v___x_1668_);
v_r_2009_ = v_r_2044_;
v___y_2010_ = v_a_1635_;
v___y_2011_ = v_a_1636_;
v___y_2012_ = v_a_1637_;
v___y_2013_ = v_a_1638_;
goto v___jp_2008_;
}
else
{
lean_object* v___x_2113_; lean_object* v___x_2114_; uint8_t v___x_2115_; 
v___x_2113_ = lean_array_get_size(v_snd_2084_);
v___x_2114_ = lean_unsigned_to_nat(1u);
v___x_2115_ = lean_nat_dec_eq(v___x_2113_, v___x_2114_);
if (v___x_2115_ == 0)
{
lean_dec(v_snd_2084_);
lean_del_object(v___x_1668_);
v_r_2009_ = v_r_2044_;
v___y_2010_ = v_a_1635_;
v___y_2011_ = v_a_1636_;
v___y_2012_ = v_a_1637_;
v___y_2013_ = v_a_1638_;
goto v___jp_2008_;
}
else
{
lean_object* v___x_2116_; 
v___x_2116_ = lean_array_fget(v_snd_2084_, v___x_1997_);
lean_dec(v_snd_2084_);
v_x_2046_ = v___x_2116_;
v___y_2047_ = v_a_1635_;
v___y_2048_ = v_a_1636_;
v___y_2049_ = v_a_1637_;
v___y_2050_ = v_a_1638_;
goto v___jp_2045_;
}
}
}
}
else
{
lean_object* v___x_2117_; uint8_t v___x_2118_; 
lean_dec_ref(v_str_2089_);
lean_del_object(v___x_1668_);
v___x_2117_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__9));
v___x_2118_ = lean_string_dec_eq(v_str_2088_, v___x_2117_);
lean_dec_ref(v_str_2088_);
if (v___x_2118_ == 0)
{
lean_del_object(v___x_2086_);
lean_dec(v_snd_2084_);
v_r_2009_ = v_r_2044_;
v___y_2010_ = v_a_1635_;
v___y_2011_ = v_a_1636_;
v___y_2012_ = v_a_1637_;
v___y_2013_ = v_a_1638_;
goto v___jp_2008_;
}
else
{
lean_object* v___x_2119_; lean_object* v___x_2120_; uint8_t v___x_2121_; 
v___x_2119_ = lean_array_get_size(v_snd_2084_);
v___x_2120_ = lean_unsigned_to_nat(6u);
v___x_2121_ = lean_nat_dec_eq(v___x_2119_, v___x_2120_);
if (v___x_2121_ == 0)
{
lean_del_object(v___x_2086_);
lean_dec(v_snd_2084_);
v_r_2009_ = v_r_2044_;
v___y_2010_ = v_a_1635_;
v___y_2011_ = v_a_1636_;
v___y_2012_ = v_a_1637_;
v___y_2013_ = v_a_1638_;
goto v___jp_2008_;
}
else
{
lean_object* v___x_2122_; lean_object* v___x_2123_; lean_object* v___x_2124_; lean_object* v___x_2125_; lean_object* v___x_2126_; lean_object* v___x_2127_; lean_object* v___x_2128_; uint8_t v___x_2129_; 
v___x_2122_ = lean_unsigned_to_nat(4u);
v___x_2123_ = lean_array_fget(v_snd_2084_, v___x_2122_);
v___x_2124_ = lean_unsigned_to_nat(5u);
v___x_2125_ = lean_array_fget(v_snd_2084_, v___x_2124_);
lean_dec(v_snd_2084_);
v___x_2126_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__88));
v___x_2127_ = l_Lean_Expr_const___override(v___x_2126_, v_us_2001_);
v___x_2128_ = l_Lean_mkAppB(v___x_2127_, v___x_2123_, v___x_2125_);
v___x_2129_ = l_List_elem___at___00Lean_Elab_Tactic_Omega_analyzeAtom_spec__0(v___x_2128_, v_r_2044_);
if (v___x_2129_ == 0)
{
lean_object* v___x_2131_; 
if (v_isShared_2087_ == 0)
{
lean_ctor_set_tag(v___x_2086_, 1);
lean_ctor_set(v___x_2086_, 1, v_r_2044_);
lean_ctor_set(v___x_2086_, 0, v___x_2128_);
v___x_2131_ = v___x_2086_;
goto v_reusejp_2130_;
}
else
{
lean_object* v_reuseFailAlloc_2132_; 
v_reuseFailAlloc_2132_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2132_, 0, v___x_2128_);
lean_ctor_set(v_reuseFailAlloc_2132_, 1, v_r_2044_);
v___x_2131_ = v_reuseFailAlloc_2132_;
goto v_reusejp_2130_;
}
v_reusejp_2130_:
{
v_r_2009_ = v___x_2131_;
v___y_2010_ = v_a_1635_;
v___y_2011_ = v_a_1636_;
v___y_2012_ = v_a_1637_;
v___y_2013_ = v_a_1638_;
goto v___jp_2008_;
}
}
else
{
lean_dec_ref(v___x_2128_);
lean_del_object(v___x_2086_);
v_r_2009_ = v_r_2044_;
v___y_2010_ = v_a_1635_;
v___y_2011_ = v_a_1636_;
v___y_2012_ = v_a_1637_;
v___y_2013_ = v_a_1638_;
goto v___jp_2008_;
}
}
}
}
}
}
else
{
lean_dec_ref_known(v_pre_2082_, 2);
lean_dec_ref_known(v_fst_2081_, 2);
lean_dec_ref(v___x_2080_);
lean_del_object(v___x_1668_);
v_r_2009_ = v_r_2044_;
v___y_2010_ = v_a_1635_;
v___y_2011_ = v_a_1636_;
v___y_2012_ = v_a_1637_;
v___y_2013_ = v_a_1638_;
goto v___jp_2008_;
}
}
else
{
lean_dec(v_pre_2082_);
lean_dec_ref_known(v_fst_2081_, 2);
lean_dec_ref(v___x_2080_);
lean_del_object(v___x_1668_);
v_r_2009_ = v_r_2044_;
v___y_2010_ = v_a_1635_;
v___y_2011_ = v_a_1636_;
v___y_2012_ = v_a_1637_;
v___y_2013_ = v_a_1638_;
goto v___jp_2008_;
}
}
else
{
lean_dec(v_fst_2081_);
lean_dec_ref(v___x_2080_);
lean_del_object(v___x_1668_);
v_r_2009_ = v_r_2044_;
v___y_2010_ = v_a_1635_;
v___y_2011_ = v_a_1636_;
v___y_2012_ = v_a_1637_;
v___y_2013_ = v_a_1638_;
goto v___jp_2008_;
}
}
else
{
lean_object* v___x_2135_; lean_object* v_fst_2136_; 
lean_inc(v___x_2007_);
v___x_2135_ = l_Lean_Expr_getAppFnArgs(v___x_2007_);
v_fst_2136_ = lean_ctor_get(v___x_2135_, 0);
lean_inc(v_fst_2136_);
if (lean_obj_tag(v_fst_2136_) == 1)
{
lean_object* v_pre_2137_; 
v_pre_2137_ = lean_ctor_get(v_fst_2136_, 0);
lean_inc(v_pre_2137_);
if (lean_obj_tag(v_pre_2137_) == 1)
{
lean_object* v_pre_2138_; 
v_pre_2138_ = lean_ctor_get(v_pre_2137_, 0);
if (lean_obj_tag(v_pre_2138_) == 0)
{
lean_object* v_snd_2139_; lean_object* v_str_2140_; lean_object* v_str_2141_; uint8_t v___x_2142_; 
v_snd_2139_ = lean_ctor_get(v___x_2135_, 1);
lean_inc(v_snd_2139_);
lean_dec_ref(v___x_2135_);
v_str_2140_ = lean_ctor_get(v_fst_2136_, 1);
lean_inc_ref(v_str_2140_);
lean_dec_ref_known(v_fst_2136_, 2);
v_str_2141_ = lean_ctor_get(v_pre_2137_, 1);
lean_inc_ref(v_str_2141_);
lean_dec_ref_known(v_pre_2137_, 2);
v___x_2142_ = lean_string_dec_eq(v_str_2141_, v___x_2003_);
if (v___x_2142_ == 0)
{
lean_object* v___x_2143_; uint8_t v___x_2144_; 
lean_del_object(v___x_1668_);
v___x_2143_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__79));
v___x_2144_ = lean_string_dec_eq(v_str_2141_, v___x_2143_);
if (v___x_2144_ == 0)
{
lean_object* v___x_2145_; uint8_t v___x_2146_; 
v___x_2145_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__82));
v___x_2146_ = lean_string_dec_eq(v_str_2141_, v___x_2145_);
lean_dec_ref(v_str_2141_);
if (v___x_2146_ == 0)
{
lean_dec_ref(v_str_2140_);
lean_dec(v_snd_2139_);
v_r_2009_ = v_r_2044_;
v___y_2010_ = v_a_1635_;
v___y_2011_ = v_a_1636_;
v___y_2012_ = v_a_1637_;
v___y_2013_ = v_a_1638_;
goto v___jp_2008_;
}
else
{
lean_object* v___x_2147_; uint8_t v___x_2148_; 
v___x_2147_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__84));
v___x_2148_ = lean_string_dec_eq(v_str_2140_, v___x_2147_);
lean_dec_ref(v_str_2140_);
if (v___x_2148_ == 0)
{
lean_dec(v_snd_2139_);
v_r_2009_ = v_r_2044_;
v___y_2010_ = v_a_1635_;
v___y_2011_ = v_a_1636_;
v___y_2012_ = v_a_1637_;
v___y_2013_ = v_a_1638_;
goto v___jp_2008_;
}
else
{
lean_object* v___x_2149_; uint8_t v___x_2150_; 
v___x_2149_ = lean_array_get_size(v_snd_2139_);
v___x_2150_ = lean_nat_dec_eq(v___x_2149_, v___x_2006_);
if (v___x_2150_ == 0)
{
lean_dec(v_snd_2139_);
v_r_2009_ = v_r_2044_;
v___y_2010_ = v_a_1635_;
v___y_2011_ = v_a_1636_;
v___y_2012_ = v_a_1637_;
v___y_2013_ = v_a_1638_;
goto v___jp_2008_;
}
else
{
lean_object* v___x_2151_; lean_object* v___x_2152_; lean_object* v___x_2153_; 
v___x_2151_ = lean_array_fget(v_snd_2139_, v___x_1997_);
v___x_2152_ = lean_unsigned_to_nat(1u);
v___x_2153_ = lean_array_fget(v_snd_2139_, v___x_2152_);
lean_dec(v_snd_2139_);
v_n_2069_ = v___x_2151_;
v_x_2070_ = v___x_2153_;
v___y_2071_ = v_a_1635_;
v___y_2072_ = v_a_1636_;
v___y_2073_ = v_a_1637_;
v___y_2074_ = v_a_1638_;
goto v___jp_2068_;
}
}
}
}
else
{
lean_object* v___x_2154_; uint8_t v___x_2155_; 
lean_dec_ref(v_str_2141_);
v___x_2154_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__85));
v___x_2155_ = lean_string_dec_eq(v_str_2140_, v___x_2154_);
lean_dec_ref(v_str_2140_);
if (v___x_2155_ == 0)
{
lean_dec(v_snd_2139_);
v_r_2009_ = v_r_2044_;
v___y_2010_ = v_a_1635_;
v___y_2011_ = v_a_1636_;
v___y_2012_ = v_a_1637_;
v___y_2013_ = v_a_1638_;
goto v___jp_2008_;
}
else
{
lean_object* v___x_2156_; uint8_t v___x_2157_; 
v___x_2156_ = lean_array_get_size(v_snd_2139_);
v___x_2157_ = lean_nat_dec_eq(v___x_2156_, v___x_2006_);
if (v___x_2157_ == 0)
{
lean_dec(v_snd_2139_);
v_r_2009_ = v_r_2044_;
v___y_2010_ = v_a_1635_;
v___y_2011_ = v_a_1636_;
v___y_2012_ = v_a_1637_;
v___y_2013_ = v_a_1638_;
goto v___jp_2008_;
}
else
{
lean_object* v___x_2158_; lean_object* v___x_2159_; lean_object* v___x_2160_; 
v___x_2158_ = lean_array_fget(v_snd_2139_, v___x_1997_);
v___x_2159_ = lean_unsigned_to_nat(1u);
v___x_2160_ = lean_array_fget(v_snd_2139_, v___x_2159_);
lean_dec(v_snd_2139_);
v_n_2057_ = v___x_2158_;
v_i_2058_ = v___x_2160_;
v___y_2059_ = v_a_1635_;
v___y_2060_ = v_a_1636_;
v___y_2061_ = v_a_1637_;
v___y_2062_ = v_a_1638_;
goto v___jp_2056_;
}
}
}
}
else
{
lean_object* v___x_2161_; uint8_t v___x_2162_; 
lean_dec_ref(v_str_2141_);
v___x_2161_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__86));
v___x_2162_ = lean_string_dec_eq(v_str_2140_, v___x_2161_);
lean_dec_ref(v_str_2140_);
if (v___x_2162_ == 0)
{
lean_dec(v_snd_2139_);
lean_del_object(v___x_1668_);
v_r_2009_ = v_r_2044_;
v___y_2010_ = v_a_1635_;
v___y_2011_ = v_a_1636_;
v___y_2012_ = v_a_1637_;
v___y_2013_ = v_a_1638_;
goto v___jp_2008_;
}
else
{
lean_object* v___x_2163_; lean_object* v___x_2164_; uint8_t v___x_2165_; 
v___x_2163_ = lean_array_get_size(v_snd_2139_);
v___x_2164_ = lean_unsigned_to_nat(1u);
v___x_2165_ = lean_nat_dec_eq(v___x_2163_, v___x_2164_);
if (v___x_2165_ == 0)
{
lean_dec(v_snd_2139_);
lean_del_object(v___x_1668_);
v_r_2009_ = v_r_2044_;
v___y_2010_ = v_a_1635_;
v___y_2011_ = v_a_1636_;
v___y_2012_ = v_a_1637_;
v___y_2013_ = v_a_1638_;
goto v___jp_2008_;
}
else
{
lean_object* v___x_2166_; 
v___x_2166_ = lean_array_fget(v_snd_2139_, v___x_1997_);
lean_dec(v_snd_2139_);
v_x_2046_ = v___x_2166_;
v___y_2047_ = v_a_1635_;
v___y_2048_ = v_a_1636_;
v___y_2049_ = v_a_1637_;
v___y_2050_ = v_a_1638_;
goto v___jp_2045_;
}
}
}
}
else
{
lean_dec_ref_known(v_pre_2137_, 2);
lean_dec_ref_known(v_fst_2136_, 2);
lean_dec_ref(v___x_2135_);
lean_del_object(v___x_1668_);
v_r_2009_ = v_r_2044_;
v___y_2010_ = v_a_1635_;
v___y_2011_ = v_a_1636_;
v___y_2012_ = v_a_1637_;
v___y_2013_ = v_a_1638_;
goto v___jp_2008_;
}
}
else
{
lean_dec_ref_known(v_fst_2136_, 2);
lean_dec(v_pre_2137_);
lean_dec_ref(v___x_2135_);
lean_del_object(v___x_1668_);
v_r_2009_ = v_r_2044_;
v___y_2010_ = v_a_1635_;
v___y_2011_ = v_a_1636_;
v___y_2012_ = v_a_1637_;
v___y_2013_ = v_a_1638_;
goto v___jp_2008_;
}
}
else
{
lean_dec(v_fst_2136_);
lean_dec_ref(v___x_2135_);
lean_del_object(v___x_1668_);
v_r_2009_ = v_r_2044_;
v___y_2010_ = v_a_1635_;
v___y_2011_ = v_a_1636_;
v___y_2012_ = v_a_1637_;
v___y_2013_ = v_a_1638_;
goto v___jp_2008_;
}
}
v___jp_2008_:
{
lean_object* v___x_2014_; lean_object* v___x_2015_; lean_object* v___x_2016_; 
v___x_2014_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__23));
v___x_2015_ = l_Lean_Expr_const___override(v___x_2014_, v_us_2001_);
v___x_2016_ = l_Lean_Elab_Tactic_Omega_conditionalFacts(v___x_2015_, v___x_2007_, v___y_2010_, v___y_2011_, v___y_2012_, v___y_2013_);
if (lean_obj_tag(v___x_2016_) == 0)
{
lean_object* v_a_2017_; lean_object* v___x_2019_; uint8_t v_isShared_2020_; uint8_t v_isSharedCheck_2025_; 
v_a_2017_ = lean_ctor_get(v___x_2016_, 0);
v_isSharedCheck_2025_ = !lean_is_exclusive(v___x_2016_);
if (v_isSharedCheck_2025_ == 0)
{
v___x_2019_ = v___x_2016_;
v_isShared_2020_ = v_isSharedCheck_2025_;
goto v_resetjp_2018_;
}
else
{
lean_inc(v_a_2017_);
lean_dec(v___x_2016_);
v___x_2019_ = lean_box(0);
v_isShared_2020_ = v_isSharedCheck_2025_;
goto v_resetjp_2018_;
}
v_resetjp_2018_:
{
lean_object* v___x_2021_; lean_object* v___x_2023_; 
v___x_2021_ = l_List_appendTR___redArg(v_r_2009_, v_a_2017_);
if (v_isShared_2020_ == 0)
{
lean_ctor_set(v___x_2019_, 0, v___x_2021_);
v___x_2023_ = v___x_2019_;
goto v_reusejp_2022_;
}
else
{
lean_object* v_reuseFailAlloc_2024_; 
v_reuseFailAlloc_2024_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2024_, 0, v___x_2021_);
v___x_2023_ = v_reuseFailAlloc_2024_;
goto v_reusejp_2022_;
}
v_reusejp_2022_:
{
return v___x_2023_;
}
}
}
else
{
lean_dec(v_r_2009_);
return v___x_2016_;
}
}
v___jp_2026_:
{
lean_object* v___x_2033_; lean_object* v___x_2034_; lean_object* v___x_2035_; uint8_t v___x_2036_; 
v___x_2033_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__74));
v___x_2034_ = l_Lean_Expr_const___override(v___x_2033_, v_us_2001_);
v___x_2035_ = l_Lean_Expr_app___override(v___x_2034_, v___y_2029_);
v___x_2036_ = l_List_elem___at___00Lean_Elab_Tactic_Omega_analyzeAtom_spec__0(v___x_2035_, v___y_2032_);
if (v___x_2036_ == 0)
{
lean_object* v___x_2038_; 
if (v_isShared_1669_ == 0)
{
lean_ctor_set_tag(v___x_1668_, 1);
lean_ctor_set(v___x_1668_, 1, v___y_2032_);
lean_ctor_set(v___x_1668_, 0, v___x_2035_);
v___x_2038_ = v___x_1668_;
goto v_reusejp_2037_;
}
else
{
lean_object* v_reuseFailAlloc_2039_; 
v_reuseFailAlloc_2039_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2039_, 0, v___x_2035_);
lean_ctor_set(v_reuseFailAlloc_2039_, 1, v___y_2032_);
v___x_2038_ = v_reuseFailAlloc_2039_;
goto v_reusejp_2037_;
}
v_reusejp_2037_:
{
v_r_2009_ = v___x_2038_;
v___y_2010_ = v___y_2028_;
v___y_2011_ = v___y_2027_;
v___y_2012_ = v___y_2031_;
v___y_2013_ = v___y_2030_;
goto v___jp_2008_;
}
}
else
{
lean_dec_ref(v___x_2035_);
lean_del_object(v___x_1668_);
v_r_2009_ = v___y_2032_;
v___y_2010_ = v___y_2028_;
v___y_2011_ = v___y_2027_;
v___y_2012_ = v___y_2031_;
v___y_2013_ = v___y_2030_;
goto v___jp_2008_;
}
}
v___jp_2045_:
{
lean_object* v___x_2051_; lean_object* v___x_2052_; lean_object* v___x_2053_; uint8_t v___x_2054_; 
v___x_2051_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__78));
v___x_2052_ = l_Lean_Expr_const___override(v___x_2051_, v_us_2001_);
lean_inc_ref(v_x_2046_);
v___x_2053_ = l_Lean_Expr_app___override(v___x_2052_, v_x_2046_);
v___x_2054_ = l_List_elem___at___00Lean_Elab_Tactic_Omega_analyzeAtom_spec__0(v___x_2053_, v_r_2044_);
if (v___x_2054_ == 0)
{
lean_object* v___x_2055_; 
v___x_2055_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2055_, 0, v___x_2053_);
lean_ctor_set(v___x_2055_, 1, v_r_2044_);
v___y_2027_ = v___y_2048_;
v___y_2028_ = v___y_2047_;
v___y_2029_ = v_x_2046_;
v___y_2030_ = v___y_2050_;
v___y_2031_ = v___y_2049_;
v___y_2032_ = v___x_2055_;
goto v___jp_2026_;
}
else
{
lean_dec_ref(v___x_2053_);
v___y_2027_ = v___y_2048_;
v___y_2028_ = v___y_2047_;
v___y_2029_ = v_x_2046_;
v___y_2030_ = v___y_2050_;
v___y_2031_ = v___y_2049_;
v___y_2032_ = v_r_2044_;
goto v___jp_2026_;
}
}
v___jp_2056_:
{
lean_object* v___x_2063_; lean_object* v___x_2064_; lean_object* v___x_2065_; uint8_t v___x_2066_; 
v___x_2063_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__81));
v___x_2064_ = l_Lean_Expr_const___override(v___x_2063_, v_us_2001_);
v___x_2065_ = l_Lean_mkAppB(v___x_2064_, v_n_2057_, v_i_2058_);
v___x_2066_ = l_List_elem___at___00Lean_Elab_Tactic_Omega_analyzeAtom_spec__0(v___x_2065_, v_r_2044_);
if (v___x_2066_ == 0)
{
lean_object* v___x_2067_; 
v___x_2067_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2067_, 0, v___x_2065_);
lean_ctor_set(v___x_2067_, 1, v_r_2044_);
v_r_2009_ = v___x_2067_;
v___y_2010_ = v___y_2059_;
v___y_2011_ = v___y_2060_;
v___y_2012_ = v___y_2061_;
v___y_2013_ = v___y_2062_;
goto v___jp_2008_;
}
else
{
lean_dec_ref(v___x_2065_);
v_r_2009_ = v_r_2044_;
v___y_2010_ = v___y_2059_;
v___y_2011_ = v___y_2060_;
v___y_2012_ = v___y_2061_;
v___y_2013_ = v___y_2062_;
goto v___jp_2008_;
}
}
v___jp_2068_:
{
lean_object* v___x_2075_; lean_object* v___x_2076_; lean_object* v___x_2077_; uint8_t v___x_2078_; 
v___x_2075_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__83));
v___x_2076_ = l_Lean_Expr_const___override(v___x_2075_, v_us_2001_);
v___x_2077_ = l_Lean_mkAppB(v___x_2076_, v_n_2069_, v_x_2070_);
v___x_2078_ = l_List_elem___at___00Lean_Elab_Tactic_Omega_analyzeAtom_spec__0(v___x_2077_, v_r_2044_);
if (v___x_2078_ == 0)
{
lean_object* v___x_2079_; 
v___x_2079_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2079_, 0, v___x_2077_);
lean_ctor_set(v___x_2079_, 1, v_r_2044_);
v_r_2009_ = v___x_2079_;
v___y_2010_ = v___y_2071_;
v___y_2011_ = v___y_2072_;
v___y_2012_ = v___y_2073_;
v___y_2013_ = v___y_2074_;
goto v___jp_2008_;
}
else
{
lean_dec_ref(v___x_2077_);
v_r_2009_ = v_r_2044_;
v___y_2010_ = v___y_2071_;
v___y_2011_ = v___y_2072_;
v___y_2012_ = v___y_2073_;
v___y_2013_ = v___y_2074_;
goto v___jp_2008_;
}
}
}
else
{
lean_dec(v_us_2001_);
lean_del_object(v___x_1668_);
lean_dec(v_snd_1666_);
v___y_1650_ = v_a_1635_;
v___y_1651_ = v_a_1636_;
v___y_1652_ = v_a_1637_;
v___y_1653_ = v_a_1638_;
goto v___jp_1649_;
}
}
}
else
{
lean_del_object(v___x_1668_);
lean_dec(v_snd_1666_);
v___y_1650_ = v_a_1635_;
v___y_1651_ = v_a_1636_;
v___y_1652_ = v_a_1637_;
v___y_1653_ = v_a_1638_;
goto v___jp_1649_;
}
}
else
{
lean_del_object(v___x_1668_);
lean_dec(v_snd_1666_);
v___y_1650_ = v_a_1635_;
v___y_1651_ = v_a_1636_;
v___y_1652_ = v_a_1637_;
v___y_1653_ = v_a_1638_;
goto v___jp_1649_;
}
}
else
{
lean_del_object(v___x_1668_);
lean_dec(v_snd_1666_);
v___y_1650_ = v_a_1635_;
v___y_1651_ = v_a_1636_;
v___y_1652_ = v_a_1637_;
v___y_1653_ = v_a_1638_;
goto v___jp_1649_;
}
}
}
}
}
}
else
{
lean_dec_ref_known(v_pre_1664_, 2);
lean_dec_ref_known(v_fst_1663_, 2);
lean_dec_ref(v___x_1662_);
v___y_1650_ = v_a_1635_;
v___y_1651_ = v_a_1636_;
v___y_1652_ = v_a_1637_;
v___y_1653_ = v_a_1638_;
goto v___jp_1649_;
}
}
else
{
lean_dec_ref_known(v_fst_1663_, 2);
lean_dec(v_pre_1664_);
lean_dec_ref(v___x_1662_);
v___y_1650_ = v_a_1635_;
v___y_1651_ = v_a_1636_;
v___y_1652_ = v_a_1637_;
v___y_1653_ = v_a_1638_;
goto v___jp_1649_;
}
}
else
{
lean_dec(v_fst_1663_);
lean_dec_ref(v___x_1662_);
v___y_1650_ = v_a_1635_;
v___y_1651_ = v_a_1636_;
v___y_1652_ = v_a_1637_;
v___y_1653_ = v_a_1638_;
goto v___jp_1649_;
}
v___jp_1640_:
{
lean_object* v___x_1641_; lean_object* v___x_1642_; 
v___x_1641_ = lean_box(0);
v___x_1642_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1642_, 0, v___x_1641_);
return v___x_1642_;
}
v___jp_1643_:
{
lean_object* v___x_1644_; lean_object* v___x_1645_; 
v___x_1644_ = lean_box(0);
v___x_1645_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1645_, 0, v___x_1644_);
return v___x_1645_;
}
v___jp_1646_:
{
lean_object* v___x_1647_; lean_object* v___x_1648_; 
v___x_1647_ = lean_box(0);
v___x_1648_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1648_, 0, v___x_1647_);
return v___x_1648_;
}
v___jp_1649_:
{
lean_object* v___x_1654_; lean_object* v___x_1655_; 
v___x_1654_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__2, &l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__2_once, _init_l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__2);
v___x_1655_ = l_Lean_Elab_Tactic_Omega_conditionalFacts(v___x_1654_, v_e_1633_, v___y_1650_, v___y_1651_, v___y_1652_, v___y_1653_);
return v___x_1655_;
}
v___jp_1656_:
{
lean_object* v___x_1657_; lean_object* v___x_1658_; 
v___x_1657_ = lean_box(0);
v___x_1658_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1658_, 0, v___x_1657_);
return v___x_1658_;
}
v___jp_1659_:
{
lean_object* v___x_1660_; lean_object* v___x_1661_; 
v___x_1660_ = lean_box(0);
v___x_1661_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1661_, 0, v___x_1660_);
return v___x_1661_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___boxed(lean_object* v_e_2169_, lean_object* v_a_2170_, lean_object* v_a_2171_, lean_object* v_a_2172_, lean_object* v_a_2173_, lean_object* v_a_2174_, lean_object* v_a_2175_){
_start:
{
lean_object* v_res_2176_; 
v_res_2176_ = l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg(v_e_2169_, v_a_2170_, v_a_2171_, v_a_2172_, v_a_2173_, v_a_2174_);
lean_dec(v_a_2174_);
lean_dec_ref(v_a_2173_);
lean_dec(v_a_2172_);
lean_dec_ref(v_a_2171_);
lean_dec_ref(v_a_2170_);
return v_res_2176_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom(lean_object* v_e_2177_, lean_object* v_a_2178_, lean_object* v_a_2179_, lean_object* v_a_2180_, uint8_t v_a_2181_, lean_object* v_a_2182_, lean_object* v_a_2183_, lean_object* v_a_2184_, lean_object* v_a_2185_, lean_object* v_a_2186_){
_start:
{
lean_object* v___x_2188_; 
v___x_2188_ = l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg(v_e_2177_, v_a_2180_, v_a_2183_, v_a_2184_, v_a_2185_, v_a_2186_);
return v___x_2188_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___boxed(lean_object* v_e_2189_, lean_object* v_a_2190_, lean_object* v_a_2191_, lean_object* v_a_2192_, lean_object* v_a_2193_, lean_object* v_a_2194_, lean_object* v_a_2195_, lean_object* v_a_2196_, lean_object* v_a_2197_, lean_object* v_a_2198_, lean_object* v_a_2199_){
_start:
{
uint8_t v_a_boxed_2200_; lean_object* v_res_2201_; 
v_a_boxed_2200_ = lean_unbox(v_a_2193_);
v_res_2201_ = l_Lean_Elab_Tactic_Omega_analyzeAtom(v_e_2189_, v_a_2190_, v_a_2191_, v_a_2192_, v_a_boxed_2200_, v_a_2194_, v_a_2195_, v_a_2196_, v_a_2197_, v_a_2198_);
lean_dec(v_a_2198_);
lean_dec_ref(v_a_2197_);
lean_dec(v_a_2196_);
lean_dec_ref(v_a_2195_);
lean_dec(v_a_2194_);
lean_dec_ref(v_a_2192_);
lean_dec(v_a_2191_);
lean_dec(v_a_2190_);
return v_res_2201_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_lookup_spec__0_spec__0___redArg(lean_object* v_a_2202_, lean_object* v_x_2203_){
_start:
{
if (lean_obj_tag(v_x_2203_) == 0)
{
lean_object* v___x_2204_; 
v___x_2204_ = lean_box(0);
return v___x_2204_;
}
else
{
lean_object* v_key_2205_; lean_object* v_value_2206_; lean_object* v_tail_2207_; uint8_t v___x_2208_; 
v_key_2205_ = lean_ctor_get(v_x_2203_, 0);
v_value_2206_ = lean_ctor_get(v_x_2203_, 1);
v_tail_2207_ = lean_ctor_get(v_x_2203_, 2);
v___x_2208_ = lean_expr_eqv(v_key_2205_, v_a_2202_);
if (v___x_2208_ == 0)
{
v_x_2203_ = v_tail_2207_;
goto _start;
}
else
{
lean_object* v___x_2210_; 
lean_inc(v_value_2206_);
v___x_2210_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2210_, 0, v_value_2206_);
return v___x_2210_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_lookup_spec__0_spec__0___redArg___boxed(lean_object* v_a_2211_, lean_object* v_x_2212_){
_start:
{
lean_object* v_res_2213_; 
v_res_2213_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_lookup_spec__0_spec__0___redArg(v_a_2211_, v_x_2212_);
lean_dec(v_x_2212_);
lean_dec_ref(v_a_2211_);
return v_res_2213_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_lookup_spec__0___redArg(lean_object* v_m_2214_, lean_object* v_a_2215_){
_start:
{
lean_object* v_buckets_2216_; lean_object* v___x_2217_; uint64_t v___x_2218_; uint64_t v___x_2219_; uint64_t v___x_2220_; uint64_t v_fold_2221_; uint64_t v___x_2222_; uint64_t v___x_2223_; uint64_t v___x_2224_; size_t v___x_2225_; size_t v___x_2226_; size_t v___x_2227_; size_t v___x_2228_; size_t v___x_2229_; lean_object* v___x_2230_; lean_object* v___x_2231_; 
v_buckets_2216_ = lean_ctor_get(v_m_2214_, 1);
v___x_2217_ = lean_array_get_size(v_buckets_2216_);
v___x_2218_ = l_Lean_Expr_hash(v_a_2215_);
v___x_2219_ = 32ULL;
v___x_2220_ = lean_uint64_shift_right(v___x_2218_, v___x_2219_);
v_fold_2221_ = lean_uint64_xor(v___x_2218_, v___x_2220_);
v___x_2222_ = 16ULL;
v___x_2223_ = lean_uint64_shift_right(v_fold_2221_, v___x_2222_);
v___x_2224_ = lean_uint64_xor(v_fold_2221_, v___x_2223_);
v___x_2225_ = lean_uint64_to_usize(v___x_2224_);
v___x_2226_ = lean_usize_of_nat(v___x_2217_);
v___x_2227_ = ((size_t)1ULL);
v___x_2228_ = lean_usize_sub(v___x_2226_, v___x_2227_);
v___x_2229_ = lean_usize_land(v___x_2225_, v___x_2228_);
v___x_2230_ = lean_array_uget_borrowed(v_buckets_2216_, v___x_2229_);
v___x_2231_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_lookup_spec__0_spec__0___redArg(v_a_2215_, v___x_2230_);
return v___x_2231_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_lookup_spec__0___redArg___boxed(lean_object* v_m_2232_, lean_object* v_a_2233_){
_start:
{
lean_object* v_res_2234_; 
v_res_2234_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_lookup_spec__0___redArg(v_m_2232_, v_a_2233_);
lean_dec_ref(v_a_2233_);
lean_dec_ref(v_m_2232_);
return v_res_2234_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__2___redArg(lean_object* v_a_2235_, lean_object* v_x_2236_){
_start:
{
if (lean_obj_tag(v_x_2236_) == 0)
{
uint8_t v___x_2237_; 
v___x_2237_ = 0;
return v___x_2237_;
}
else
{
lean_object* v_key_2238_; lean_object* v_tail_2239_; uint8_t v___x_2240_; 
v_key_2238_ = lean_ctor_get(v_x_2236_, 0);
v_tail_2239_ = lean_ctor_get(v_x_2236_, 2);
v___x_2240_ = lean_expr_eqv(v_key_2238_, v_a_2235_);
if (v___x_2240_ == 0)
{
v_x_2236_ = v_tail_2239_;
goto _start;
}
else
{
return v___x_2240_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__2___redArg___boxed(lean_object* v_a_2242_, lean_object* v_x_2243_){
_start:
{
uint8_t v_res_2244_; lean_object* v_r_2245_; 
v_res_2244_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__2___redArg(v_a_2242_, v_x_2243_);
lean_dec(v_x_2243_);
lean_dec_ref(v_a_2242_);
v_r_2245_ = lean_box(v_res_2244_);
return v_r_2245_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__3_spec__4_spec__9___redArg(lean_object* v_x_2246_, lean_object* v_x_2247_){
_start:
{
if (lean_obj_tag(v_x_2247_) == 0)
{
return v_x_2246_;
}
else
{
lean_object* v_key_2248_; lean_object* v_value_2249_; lean_object* v_tail_2250_; lean_object* v___x_2252_; uint8_t v_isShared_2253_; uint8_t v_isSharedCheck_2273_; 
v_key_2248_ = lean_ctor_get(v_x_2247_, 0);
v_value_2249_ = lean_ctor_get(v_x_2247_, 1);
v_tail_2250_ = lean_ctor_get(v_x_2247_, 2);
v_isSharedCheck_2273_ = !lean_is_exclusive(v_x_2247_);
if (v_isSharedCheck_2273_ == 0)
{
v___x_2252_ = v_x_2247_;
v_isShared_2253_ = v_isSharedCheck_2273_;
goto v_resetjp_2251_;
}
else
{
lean_inc(v_tail_2250_);
lean_inc(v_value_2249_);
lean_inc(v_key_2248_);
lean_dec(v_x_2247_);
v___x_2252_ = lean_box(0);
v_isShared_2253_ = v_isSharedCheck_2273_;
goto v_resetjp_2251_;
}
v_resetjp_2251_:
{
lean_object* v___x_2254_; uint64_t v___x_2255_; uint64_t v___x_2256_; uint64_t v___x_2257_; uint64_t v_fold_2258_; uint64_t v___x_2259_; uint64_t v___x_2260_; uint64_t v___x_2261_; size_t v___x_2262_; size_t v___x_2263_; size_t v___x_2264_; size_t v___x_2265_; size_t v___x_2266_; lean_object* v___x_2267_; lean_object* v___x_2269_; 
v___x_2254_ = lean_array_get_size(v_x_2246_);
v___x_2255_ = l_Lean_Expr_hash(v_key_2248_);
v___x_2256_ = 32ULL;
v___x_2257_ = lean_uint64_shift_right(v___x_2255_, v___x_2256_);
v_fold_2258_ = lean_uint64_xor(v___x_2255_, v___x_2257_);
v___x_2259_ = 16ULL;
v___x_2260_ = lean_uint64_shift_right(v_fold_2258_, v___x_2259_);
v___x_2261_ = lean_uint64_xor(v_fold_2258_, v___x_2260_);
v___x_2262_ = lean_uint64_to_usize(v___x_2261_);
v___x_2263_ = lean_usize_of_nat(v___x_2254_);
v___x_2264_ = ((size_t)1ULL);
v___x_2265_ = lean_usize_sub(v___x_2263_, v___x_2264_);
v___x_2266_ = lean_usize_land(v___x_2262_, v___x_2265_);
v___x_2267_ = lean_array_uget_borrowed(v_x_2246_, v___x_2266_);
lean_inc(v___x_2267_);
if (v_isShared_2253_ == 0)
{
lean_ctor_set(v___x_2252_, 2, v___x_2267_);
v___x_2269_ = v___x_2252_;
goto v_reusejp_2268_;
}
else
{
lean_object* v_reuseFailAlloc_2272_; 
v_reuseFailAlloc_2272_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2272_, 0, v_key_2248_);
lean_ctor_set(v_reuseFailAlloc_2272_, 1, v_value_2249_);
lean_ctor_set(v_reuseFailAlloc_2272_, 2, v___x_2267_);
v___x_2269_ = v_reuseFailAlloc_2272_;
goto v_reusejp_2268_;
}
v_reusejp_2268_:
{
lean_object* v___x_2270_; 
v___x_2270_ = lean_array_uset(v_x_2246_, v___x_2266_, v___x_2269_);
v_x_2246_ = v___x_2270_;
v_x_2247_ = v_tail_2250_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__3_spec__4___redArg(lean_object* v_i_2274_, lean_object* v_source_2275_, lean_object* v_target_2276_){
_start:
{
lean_object* v___x_2277_; uint8_t v___x_2278_; 
v___x_2277_ = lean_array_get_size(v_source_2275_);
v___x_2278_ = lean_nat_dec_lt(v_i_2274_, v___x_2277_);
if (v___x_2278_ == 0)
{
lean_dec_ref(v_source_2275_);
lean_dec(v_i_2274_);
return v_target_2276_;
}
else
{
lean_object* v_es_2279_; lean_object* v___x_2280_; lean_object* v_source_2281_; lean_object* v_target_2282_; lean_object* v___x_2283_; lean_object* v___x_2284_; 
v_es_2279_ = lean_array_fget(v_source_2275_, v_i_2274_);
v___x_2280_ = lean_box(0);
v_source_2281_ = lean_array_fset(v_source_2275_, v_i_2274_, v___x_2280_);
v_target_2282_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__3_spec__4_spec__9___redArg(v_target_2276_, v_es_2279_);
v___x_2283_ = lean_unsigned_to_nat(1u);
v___x_2284_ = lean_nat_add(v_i_2274_, v___x_2283_);
lean_dec(v_i_2274_);
v_i_2274_ = v___x_2284_;
v_source_2275_ = v_source_2281_;
v_target_2276_ = v_target_2282_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__3___redArg(lean_object* v_data_2286_){
_start:
{
lean_object* v___x_2287_; lean_object* v___x_2288_; lean_object* v_nbuckets_2289_; lean_object* v___x_2290_; lean_object* v___x_2291_; lean_object* v___x_2292_; lean_object* v___x_2293_; lean_object* v___x_2294_; 
v___x_2287_ = lean_array_get_size(v_data_2286_);
v___x_2288_ = lean_unsigned_to_nat(2u);
v_nbuckets_2289_ = lean_nat_mul(v___x_2287_, v___x_2288_);
v___x_2290_ = lean_unsigned_to_nat(0u);
v___x_2291_ = lean_box(0);
v___x_2292_ = lean_mk_array(v_nbuckets_2289_, v___x_2291_);
v___x_2293_ = lean_array_propagate_mark(v_data_2286_, v___x_2292_);
v___x_2294_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__3_spec__4___redArg(v___x_2290_, v_data_2286_, v___x_2293_);
return v___x_2294_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__4___redArg(lean_object* v_a_2295_, lean_object* v_b_2296_, lean_object* v_x_2297_){
_start:
{
if (lean_obj_tag(v_x_2297_) == 0)
{
lean_dec(v_b_2296_);
lean_dec_ref(v_a_2295_);
return v_x_2297_;
}
else
{
lean_object* v_key_2298_; lean_object* v_value_2299_; lean_object* v_tail_2300_; lean_object* v___x_2302_; uint8_t v_isShared_2303_; uint8_t v_isSharedCheck_2312_; 
v_key_2298_ = lean_ctor_get(v_x_2297_, 0);
v_value_2299_ = lean_ctor_get(v_x_2297_, 1);
v_tail_2300_ = lean_ctor_get(v_x_2297_, 2);
v_isSharedCheck_2312_ = !lean_is_exclusive(v_x_2297_);
if (v_isSharedCheck_2312_ == 0)
{
v___x_2302_ = v_x_2297_;
v_isShared_2303_ = v_isSharedCheck_2312_;
goto v_resetjp_2301_;
}
else
{
lean_inc(v_tail_2300_);
lean_inc(v_value_2299_);
lean_inc(v_key_2298_);
lean_dec(v_x_2297_);
v___x_2302_ = lean_box(0);
v_isShared_2303_ = v_isSharedCheck_2312_;
goto v_resetjp_2301_;
}
v_resetjp_2301_:
{
uint8_t v___x_2304_; 
v___x_2304_ = lean_expr_eqv(v_key_2298_, v_a_2295_);
if (v___x_2304_ == 0)
{
lean_object* v___x_2305_; lean_object* v___x_2307_; 
v___x_2305_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__4___redArg(v_a_2295_, v_b_2296_, v_tail_2300_);
if (v_isShared_2303_ == 0)
{
lean_ctor_set(v___x_2302_, 2, v___x_2305_);
v___x_2307_ = v___x_2302_;
goto v_reusejp_2306_;
}
else
{
lean_object* v_reuseFailAlloc_2308_; 
v_reuseFailAlloc_2308_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2308_, 0, v_key_2298_);
lean_ctor_set(v_reuseFailAlloc_2308_, 1, v_value_2299_);
lean_ctor_set(v_reuseFailAlloc_2308_, 2, v___x_2305_);
v___x_2307_ = v_reuseFailAlloc_2308_;
goto v_reusejp_2306_;
}
v_reusejp_2306_:
{
return v___x_2307_;
}
}
else
{
lean_object* v___x_2310_; 
lean_dec(v_value_2299_);
lean_dec(v_key_2298_);
if (v_isShared_2303_ == 0)
{
lean_ctor_set(v___x_2302_, 1, v_b_2296_);
lean_ctor_set(v___x_2302_, 0, v_a_2295_);
v___x_2310_ = v___x_2302_;
goto v_reusejp_2309_;
}
else
{
lean_object* v_reuseFailAlloc_2311_; 
v_reuseFailAlloc_2311_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2311_, 0, v_a_2295_);
lean_ctor_set(v_reuseFailAlloc_2311_, 1, v_b_2296_);
lean_ctor_set(v_reuseFailAlloc_2311_, 2, v_tail_2300_);
v___x_2310_ = v_reuseFailAlloc_2311_;
goto v_reusejp_2309_;
}
v_reusejp_2309_:
{
return v___x_2310_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1___redArg(lean_object* v_m_2313_, lean_object* v_a_2314_, lean_object* v_b_2315_){
_start:
{
lean_object* v_size_2316_; lean_object* v_buckets_2317_; lean_object* v___x_2319_; uint8_t v_isShared_2320_; uint8_t v_isSharedCheck_2360_; 
v_size_2316_ = lean_ctor_get(v_m_2313_, 0);
v_buckets_2317_ = lean_ctor_get(v_m_2313_, 1);
v_isSharedCheck_2360_ = !lean_is_exclusive(v_m_2313_);
if (v_isSharedCheck_2360_ == 0)
{
v___x_2319_ = v_m_2313_;
v_isShared_2320_ = v_isSharedCheck_2360_;
goto v_resetjp_2318_;
}
else
{
lean_inc(v_buckets_2317_);
lean_inc(v_size_2316_);
lean_dec(v_m_2313_);
v___x_2319_ = lean_box(0);
v_isShared_2320_ = v_isSharedCheck_2360_;
goto v_resetjp_2318_;
}
v_resetjp_2318_:
{
lean_object* v___x_2321_; uint64_t v___x_2322_; uint64_t v___x_2323_; uint64_t v___x_2324_; uint64_t v_fold_2325_; uint64_t v___x_2326_; uint64_t v___x_2327_; uint64_t v___x_2328_; size_t v___x_2329_; size_t v___x_2330_; size_t v___x_2331_; size_t v___x_2332_; size_t v___x_2333_; lean_object* v_bkt_2334_; uint8_t v___x_2335_; 
v___x_2321_ = lean_array_get_size(v_buckets_2317_);
v___x_2322_ = l_Lean_Expr_hash(v_a_2314_);
v___x_2323_ = 32ULL;
v___x_2324_ = lean_uint64_shift_right(v___x_2322_, v___x_2323_);
v_fold_2325_ = lean_uint64_xor(v___x_2322_, v___x_2324_);
v___x_2326_ = 16ULL;
v___x_2327_ = lean_uint64_shift_right(v_fold_2325_, v___x_2326_);
v___x_2328_ = lean_uint64_xor(v_fold_2325_, v___x_2327_);
v___x_2329_ = lean_uint64_to_usize(v___x_2328_);
v___x_2330_ = lean_usize_of_nat(v___x_2321_);
v___x_2331_ = ((size_t)1ULL);
v___x_2332_ = lean_usize_sub(v___x_2330_, v___x_2331_);
v___x_2333_ = lean_usize_land(v___x_2329_, v___x_2332_);
v_bkt_2334_ = lean_array_uget_borrowed(v_buckets_2317_, v___x_2333_);
v___x_2335_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__2___redArg(v_a_2314_, v_bkt_2334_);
if (v___x_2335_ == 0)
{
lean_object* v___x_2336_; lean_object* v_size_x27_2337_; lean_object* v___x_2338_; lean_object* v_buckets_x27_2339_; lean_object* v___x_2340_; lean_object* v___x_2341_; lean_object* v___x_2342_; lean_object* v___x_2343_; lean_object* v___x_2344_; uint8_t v___x_2345_; 
v___x_2336_ = lean_unsigned_to_nat(1u);
v_size_x27_2337_ = lean_nat_add(v_size_2316_, v___x_2336_);
lean_dec(v_size_2316_);
lean_inc(v_bkt_2334_);
v___x_2338_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2338_, 0, v_a_2314_);
lean_ctor_set(v___x_2338_, 1, v_b_2315_);
lean_ctor_set(v___x_2338_, 2, v_bkt_2334_);
v_buckets_x27_2339_ = lean_array_uset(v_buckets_2317_, v___x_2333_, v___x_2338_);
v___x_2340_ = lean_unsigned_to_nat(4u);
v___x_2341_ = lean_nat_mul(v_size_x27_2337_, v___x_2340_);
v___x_2342_ = lean_unsigned_to_nat(3u);
v___x_2343_ = lean_nat_div(v___x_2341_, v___x_2342_);
lean_dec(v___x_2341_);
v___x_2344_ = lean_array_get_size(v_buckets_x27_2339_);
v___x_2345_ = lean_nat_dec_le(v___x_2343_, v___x_2344_);
lean_dec(v___x_2343_);
if (v___x_2345_ == 0)
{
lean_object* v_val_2346_; lean_object* v___x_2348_; 
v_val_2346_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__3___redArg(v_buckets_x27_2339_);
if (v_isShared_2320_ == 0)
{
lean_ctor_set(v___x_2319_, 1, v_val_2346_);
lean_ctor_set(v___x_2319_, 0, v_size_x27_2337_);
v___x_2348_ = v___x_2319_;
goto v_reusejp_2347_;
}
else
{
lean_object* v_reuseFailAlloc_2349_; 
v_reuseFailAlloc_2349_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2349_, 0, v_size_x27_2337_);
lean_ctor_set(v_reuseFailAlloc_2349_, 1, v_val_2346_);
v___x_2348_ = v_reuseFailAlloc_2349_;
goto v_reusejp_2347_;
}
v_reusejp_2347_:
{
return v___x_2348_;
}
}
else
{
lean_object* v___x_2351_; 
if (v_isShared_2320_ == 0)
{
lean_ctor_set(v___x_2319_, 1, v_buckets_x27_2339_);
lean_ctor_set(v___x_2319_, 0, v_size_x27_2337_);
v___x_2351_ = v___x_2319_;
goto v_reusejp_2350_;
}
else
{
lean_object* v_reuseFailAlloc_2352_; 
v_reuseFailAlloc_2352_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2352_, 0, v_size_x27_2337_);
lean_ctor_set(v_reuseFailAlloc_2352_, 1, v_buckets_x27_2339_);
v___x_2351_ = v_reuseFailAlloc_2352_;
goto v_reusejp_2350_;
}
v_reusejp_2350_:
{
return v___x_2351_;
}
}
}
else
{
lean_object* v___x_2353_; lean_object* v_buckets_x27_2354_; lean_object* v___x_2355_; lean_object* v___x_2356_; lean_object* v___x_2358_; 
lean_inc(v_bkt_2334_);
v___x_2353_ = lean_box(0);
v_buckets_x27_2354_ = lean_array_uset(v_buckets_2317_, v___x_2333_, v___x_2353_);
v___x_2355_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__4___redArg(v_a_2314_, v_b_2315_, v_bkt_2334_);
v___x_2356_ = lean_array_uset(v_buckets_x27_2354_, v___x_2333_, v___x_2355_);
if (v_isShared_2320_ == 0)
{
lean_ctor_set(v___x_2319_, 1, v___x_2356_);
v___x_2358_ = v___x_2319_;
goto v_reusejp_2357_;
}
else
{
lean_object* v_reuseFailAlloc_2359_; 
v_reuseFailAlloc_2359_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2359_, 0, v_size_2316_);
lean_ctor_set(v_reuseFailAlloc_2359_, 1, v___x_2356_);
v___x_2358_ = v_reuseFailAlloc_2359_;
goto v_reusejp_2357_;
}
v_reusejp_2357_:
{
return v___x_2358_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4_spec__8(lean_object* v_msgData_2361_, lean_object* v___y_2362_, lean_object* v___y_2363_, lean_object* v___y_2364_, lean_object* v___y_2365_){
_start:
{
lean_object* v___x_2367_; lean_object* v_env_2368_; uint8_t v___x_2369_; lean_object* v_env_2370_; lean_object* v___x_2371_; lean_object* v_toCold_2372_; lean_object* v_mctx_2373_; lean_object* v_lctx_2374_; lean_object* v_options_2375_; lean_object* v___x_2376_; lean_object* v___x_2377_; lean_object* v___x_2378_; 
v___x_2367_ = lean_st_ref_get(v___y_2365_);
v_env_2368_ = lean_ctor_get(v___x_2367_, 0);
lean_inc_ref(v_env_2368_);
lean_dec(v___x_2367_);
v___x_2369_ = 0;
v_env_2370_ = l_Lean_Environment_setRecordingDeps(v_env_2368_, v___x_2369_);
v___x_2371_ = lean_st_ref_get(v___y_2363_);
v_toCold_2372_ = lean_ctor_get(v___y_2364_, 0);
v_mctx_2373_ = lean_ctor_get(v___x_2371_, 0);
lean_inc_ref(v_mctx_2373_);
lean_dec(v___x_2371_);
v_lctx_2374_ = lean_ctor_get(v___y_2362_, 2);
v_options_2375_ = lean_ctor_get(v_toCold_2372_, 2);
lean_inc_ref(v_options_2375_);
lean_inc_ref(v_lctx_2374_);
v___x_2376_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2376_, 0, v_env_2370_);
lean_ctor_set(v___x_2376_, 1, v_mctx_2373_);
lean_ctor_set(v___x_2376_, 2, v_lctx_2374_);
lean_ctor_set(v___x_2376_, 3, v_options_2375_);
v___x_2377_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_2377_, 0, v___x_2376_);
lean_ctor_set(v___x_2377_, 1, v_msgData_2361_);
v___x_2378_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2378_, 0, v___x_2377_);
return v___x_2378_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4_spec__8___boxed(lean_object* v_msgData_2379_, lean_object* v___y_2380_, lean_object* v___y_2381_, lean_object* v___y_2382_, lean_object* v___y_2383_, lean_object* v___y_2384_){
_start:
{
lean_object* v_res_2385_; 
v_res_2385_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4_spec__8(v_msgData_2379_, v___y_2380_, v___y_2381_, v___y_2382_, v___y_2383_);
lean_dec(v___y_2383_);
lean_dec_ref(v___y_2382_);
lean_dec(v___y_2381_);
lean_dec_ref(v___y_2380_);
return v_res_2385_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4___redArg___closed__0(void){
_start:
{
lean_object* v___x_2386_; double v___x_2387_; 
v___x_2386_ = lean_unsigned_to_nat(0u);
v___x_2387_ = lean_float_of_nat(v___x_2386_);
return v___x_2387_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4___redArg(lean_object* v_cls_2391_, lean_object* v_msg_2392_, lean_object* v___y_2393_, lean_object* v___y_2394_, lean_object* v___y_2395_, lean_object* v___y_2396_){
_start:
{
lean_object* v_ref_2398_; lean_object* v___x_2399_; lean_object* v_a_2400_; lean_object* v___x_2402_; uint8_t v_isShared_2403_; uint8_t v_isSharedCheck_2445_; 
v_ref_2398_ = lean_ctor_get(v___y_2395_, 2);
v___x_2399_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4_spec__8(v_msg_2392_, v___y_2393_, v___y_2394_, v___y_2395_, v___y_2396_);
v_a_2400_ = lean_ctor_get(v___x_2399_, 0);
v_isSharedCheck_2445_ = !lean_is_exclusive(v___x_2399_);
if (v_isSharedCheck_2445_ == 0)
{
v___x_2402_ = v___x_2399_;
v_isShared_2403_ = v_isSharedCheck_2445_;
goto v_resetjp_2401_;
}
else
{
lean_inc(v_a_2400_);
lean_dec(v___x_2399_);
v___x_2402_ = lean_box(0);
v_isShared_2403_ = v_isSharedCheck_2445_;
goto v_resetjp_2401_;
}
v_resetjp_2401_:
{
lean_object* v___x_2404_; lean_object* v_traceState_2405_; lean_object* v_env_2406_; lean_object* v_nextMacroScope_2407_; lean_object* v_ngen_2408_; lean_object* v_auxDeclNGen_2409_; lean_object* v_cache_2410_; lean_object* v_recordedDeps_2411_; lean_object* v_messages_2412_; lean_object* v_infoState_2413_; lean_object* v_snapshotTasks_2414_; lean_object* v___x_2416_; uint8_t v_isShared_2417_; uint8_t v_isSharedCheck_2444_; 
v___x_2404_ = lean_st_ref_take(v___y_2396_);
v_traceState_2405_ = lean_ctor_get(v___x_2404_, 4);
v_env_2406_ = lean_ctor_get(v___x_2404_, 0);
v_nextMacroScope_2407_ = lean_ctor_get(v___x_2404_, 1);
v_ngen_2408_ = lean_ctor_get(v___x_2404_, 2);
v_auxDeclNGen_2409_ = lean_ctor_get(v___x_2404_, 3);
v_cache_2410_ = lean_ctor_get(v___x_2404_, 5);
v_recordedDeps_2411_ = lean_ctor_get(v___x_2404_, 6);
v_messages_2412_ = lean_ctor_get(v___x_2404_, 7);
v_infoState_2413_ = lean_ctor_get(v___x_2404_, 8);
v_snapshotTasks_2414_ = lean_ctor_get(v___x_2404_, 9);
v_isSharedCheck_2444_ = !lean_is_exclusive(v___x_2404_);
if (v_isSharedCheck_2444_ == 0)
{
v___x_2416_ = v___x_2404_;
v_isShared_2417_ = v_isSharedCheck_2444_;
goto v_resetjp_2415_;
}
else
{
lean_inc(v_snapshotTasks_2414_);
lean_inc(v_infoState_2413_);
lean_inc(v_messages_2412_);
lean_inc(v_recordedDeps_2411_);
lean_inc(v_cache_2410_);
lean_inc(v_traceState_2405_);
lean_inc(v_auxDeclNGen_2409_);
lean_inc(v_ngen_2408_);
lean_inc(v_nextMacroScope_2407_);
lean_inc(v_env_2406_);
lean_dec(v___x_2404_);
v___x_2416_ = lean_box(0);
v_isShared_2417_ = v_isSharedCheck_2444_;
goto v_resetjp_2415_;
}
v_resetjp_2415_:
{
uint64_t v_tid_2418_; lean_object* v_traces_2419_; lean_object* v___x_2421_; uint8_t v_isShared_2422_; uint8_t v_isSharedCheck_2443_; 
v_tid_2418_ = lean_ctor_get_uint64(v_traceState_2405_, sizeof(void*)*1);
v_traces_2419_ = lean_ctor_get(v_traceState_2405_, 0);
v_isSharedCheck_2443_ = !lean_is_exclusive(v_traceState_2405_);
if (v_isSharedCheck_2443_ == 0)
{
v___x_2421_ = v_traceState_2405_;
v_isShared_2422_ = v_isSharedCheck_2443_;
goto v_resetjp_2420_;
}
else
{
lean_inc(v_traces_2419_);
lean_dec(v_traceState_2405_);
v___x_2421_ = lean_box(0);
v_isShared_2422_ = v_isSharedCheck_2443_;
goto v_resetjp_2420_;
}
v_resetjp_2420_:
{
lean_object* v___x_2423_; lean_object* v___x_2424_; double v___x_2425_; uint8_t v___x_2426_; lean_object* v___x_2427_; lean_object* v___x_2428_; lean_object* v___x_2429_; lean_object* v___x_2430_; lean_object* v___x_2431_; lean_object* v___x_2432_; lean_object* v___x_2434_; 
v___x_2423_ = lean_box(0);
v___x_2424_ = lean_box(0);
v___x_2425_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4___redArg___closed__0, &l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4___redArg___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4___redArg___closed__0);
v___x_2426_ = 0;
v___x_2427_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4___redArg___closed__1));
v___x_2428_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_2428_, 0, v_cls_2391_);
lean_ctor_set(v___x_2428_, 1, v___x_2424_);
lean_ctor_set(v___x_2428_, 2, v___x_2427_);
lean_ctor_set_float(v___x_2428_, sizeof(void*)*3, v___x_2425_);
lean_ctor_set_float(v___x_2428_, sizeof(void*)*3 + 8, v___x_2425_);
lean_ctor_set_uint8(v___x_2428_, sizeof(void*)*3 + 16, v___x_2426_);
v___x_2429_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4___redArg___closed__2));
v___x_2430_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_2430_, 0, v___x_2428_);
lean_ctor_set(v___x_2430_, 1, v_a_2400_);
lean_ctor_set(v___x_2430_, 2, v___x_2429_);
lean_inc(v_ref_2398_);
v___x_2431_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2431_, 0, v_ref_2398_);
lean_ctor_set(v___x_2431_, 1, v___x_2430_);
v___x_2432_ = l_Lean_PersistentArray_push___redArg(v_traces_2419_, v___x_2431_);
if (v_isShared_2422_ == 0)
{
lean_ctor_set(v___x_2421_, 0, v___x_2432_);
v___x_2434_ = v___x_2421_;
goto v_reusejp_2433_;
}
else
{
lean_object* v_reuseFailAlloc_2442_; 
v_reuseFailAlloc_2442_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2442_, 0, v___x_2432_);
lean_ctor_set_uint64(v_reuseFailAlloc_2442_, sizeof(void*)*1, v_tid_2418_);
v___x_2434_ = v_reuseFailAlloc_2442_;
goto v_reusejp_2433_;
}
v_reusejp_2433_:
{
lean_object* v___x_2436_; 
if (v_isShared_2417_ == 0)
{
lean_ctor_set(v___x_2416_, 4, v___x_2434_);
v___x_2436_ = v___x_2416_;
goto v_reusejp_2435_;
}
else
{
lean_object* v_reuseFailAlloc_2441_; 
v_reuseFailAlloc_2441_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_2441_, 0, v_env_2406_);
lean_ctor_set(v_reuseFailAlloc_2441_, 1, v_nextMacroScope_2407_);
lean_ctor_set(v_reuseFailAlloc_2441_, 2, v_ngen_2408_);
lean_ctor_set(v_reuseFailAlloc_2441_, 3, v_auxDeclNGen_2409_);
lean_ctor_set(v_reuseFailAlloc_2441_, 4, v___x_2434_);
lean_ctor_set(v_reuseFailAlloc_2441_, 5, v_cache_2410_);
lean_ctor_set(v_reuseFailAlloc_2441_, 6, v_recordedDeps_2411_);
lean_ctor_set(v_reuseFailAlloc_2441_, 7, v_messages_2412_);
lean_ctor_set(v_reuseFailAlloc_2441_, 8, v_infoState_2413_);
lean_ctor_set(v_reuseFailAlloc_2441_, 9, v_snapshotTasks_2414_);
v___x_2436_ = v_reuseFailAlloc_2441_;
goto v_reusejp_2435_;
}
v_reusejp_2435_:
{
lean_object* v___x_2437_; lean_object* v___x_2439_; 
v___x_2437_ = lean_st_ref_put(v___y_2396_, v___x_2436_);
if (v_isShared_2403_ == 0)
{
lean_ctor_set(v___x_2402_, 0, v___x_2423_);
v___x_2439_ = v___x_2402_;
goto v_reusejp_2438_;
}
else
{
lean_object* v_reuseFailAlloc_2440_; 
v_reuseFailAlloc_2440_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2440_, 0, v___x_2423_);
v___x_2439_ = v_reuseFailAlloc_2440_;
goto v_reusejp_2438_;
}
v_reusejp_2438_:
{
return v___x_2439_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4___redArg___boxed(lean_object* v_cls_2446_, lean_object* v_msg_2447_, lean_object* v___y_2448_, lean_object* v___y_2449_, lean_object* v___y_2450_, lean_object* v___y_2451_, lean_object* v___y_2452_){
_start:
{
lean_object* v_res_2453_; 
v_res_2453_ = l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4___redArg(v_cls_2446_, v_msg_2447_, v___y_2448_, v___y_2449_, v___y_2450_, v___y_2451_);
lean_dec(v___y_2451_);
lean_dec_ref(v___y_2450_);
lean_dec(v___y_2449_);
lean_dec_ref(v___y_2448_);
return v_res_2453_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_Omega_lookup_spec__2___redArg(lean_object* v_x_2454_, lean_object* v_x_2455_, lean_object* v___y_2456_, lean_object* v___y_2457_, lean_object* v___y_2458_, lean_object* v___y_2459_){
_start:
{
if (lean_obj_tag(v_x_2454_) == 0)
{
lean_object* v___x_2461_; lean_object* v___x_2462_; 
v___x_2461_ = l_List_reverse___redArg(v_x_2455_);
v___x_2462_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2462_, 0, v___x_2461_);
return v___x_2462_;
}
else
{
lean_object* v_head_2463_; lean_object* v_tail_2464_; lean_object* v___x_2466_; uint8_t v_isShared_2467_; uint8_t v_isSharedCheck_2482_; 
v_head_2463_ = lean_ctor_get(v_x_2454_, 0);
v_tail_2464_ = lean_ctor_get(v_x_2454_, 1);
v_isSharedCheck_2482_ = !lean_is_exclusive(v_x_2454_);
if (v_isSharedCheck_2482_ == 0)
{
v___x_2466_ = v_x_2454_;
v_isShared_2467_ = v_isSharedCheck_2482_;
goto v_resetjp_2465_;
}
else
{
lean_inc(v_tail_2464_);
lean_inc(v_head_2463_);
lean_dec(v_x_2454_);
v___x_2466_ = lean_box(0);
v_isShared_2467_ = v_isSharedCheck_2482_;
goto v_resetjp_2465_;
}
v_resetjp_2465_:
{
lean_object* v___x_2468_; 
lean_inc(v___y_2459_);
lean_inc_ref(v___y_2458_);
lean_inc(v___y_2457_);
lean_inc_ref(v___y_2456_);
v___x_2468_ = lean_infer_type(v_head_2463_, v___y_2456_, v___y_2457_, v___y_2458_, v___y_2459_);
if (lean_obj_tag(v___x_2468_) == 0)
{
lean_object* v_a_2469_; lean_object* v___x_2471_; 
v_a_2469_ = lean_ctor_get(v___x_2468_, 0);
lean_inc(v_a_2469_);
lean_dec_ref_known(v___x_2468_, 1);
if (v_isShared_2467_ == 0)
{
lean_ctor_set(v___x_2466_, 1, v_x_2455_);
lean_ctor_set(v___x_2466_, 0, v_a_2469_);
v___x_2471_ = v___x_2466_;
goto v_reusejp_2470_;
}
else
{
lean_object* v_reuseFailAlloc_2473_; 
v_reuseFailAlloc_2473_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2473_, 0, v_a_2469_);
lean_ctor_set(v_reuseFailAlloc_2473_, 1, v_x_2455_);
v___x_2471_ = v_reuseFailAlloc_2473_;
goto v_reusejp_2470_;
}
v_reusejp_2470_:
{
v_x_2454_ = v_tail_2464_;
v_x_2455_ = v___x_2471_;
goto _start;
}
}
else
{
lean_object* v_a_2474_; lean_object* v___x_2476_; uint8_t v_isShared_2477_; uint8_t v_isSharedCheck_2481_; 
lean_del_object(v___x_2466_);
lean_dec(v_tail_2464_);
lean_dec(v_x_2455_);
v_a_2474_ = lean_ctor_get(v___x_2468_, 0);
v_isSharedCheck_2481_ = !lean_is_exclusive(v___x_2468_);
if (v_isSharedCheck_2481_ == 0)
{
v___x_2476_ = v___x_2468_;
v_isShared_2477_ = v_isSharedCheck_2481_;
goto v_resetjp_2475_;
}
else
{
lean_inc(v_a_2474_);
lean_dec(v___x_2468_);
v___x_2476_ = lean_box(0);
v_isShared_2477_ = v_isSharedCheck_2481_;
goto v_resetjp_2475_;
}
v_resetjp_2475_:
{
lean_object* v___x_2479_; 
if (v_isShared_2477_ == 0)
{
v___x_2479_ = v___x_2476_;
goto v_reusejp_2478_;
}
else
{
lean_object* v_reuseFailAlloc_2480_; 
v_reuseFailAlloc_2480_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2480_, 0, v_a_2474_);
v___x_2479_ = v_reuseFailAlloc_2480_;
goto v_reusejp_2478_;
}
v_reusejp_2478_:
{
return v___x_2479_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_Omega_lookup_spec__2___redArg___boxed(lean_object* v_x_2483_, lean_object* v_x_2484_, lean_object* v___y_2485_, lean_object* v___y_2486_, lean_object* v___y_2487_, lean_object* v___y_2488_, lean_object* v___y_2489_){
_start:
{
lean_object* v_res_2490_; 
v_res_2490_ = l_List_mapM_loop___at___00Lean_Elab_Tactic_Omega_lookup_spec__2___redArg(v_x_2483_, v_x_2484_, v___y_2485_, v___y_2486_, v___y_2487_, v___y_2488_);
lean_dec(v___y_2488_);
lean_dec_ref(v___y_2487_);
lean_dec(v___y_2486_);
lean_dec_ref(v___y_2485_);
return v_res_2490_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_Tactic_Omega_lookup_spec__3(lean_object* v_a_2491_, lean_object* v_a_2492_){
_start:
{
if (lean_obj_tag(v_a_2491_) == 0)
{
lean_object* v___x_2493_; 
v___x_2493_ = l_List_reverse___redArg(v_a_2492_);
return v___x_2493_;
}
else
{
lean_object* v_head_2494_; lean_object* v_tail_2495_; lean_object* v___x_2497_; uint8_t v_isShared_2498_; uint8_t v_isSharedCheck_2504_; 
v_head_2494_ = lean_ctor_get(v_a_2491_, 0);
v_tail_2495_ = lean_ctor_get(v_a_2491_, 1);
v_isSharedCheck_2504_ = !lean_is_exclusive(v_a_2491_);
if (v_isSharedCheck_2504_ == 0)
{
v___x_2497_ = v_a_2491_;
v_isShared_2498_ = v_isSharedCheck_2504_;
goto v_resetjp_2496_;
}
else
{
lean_inc(v_tail_2495_);
lean_inc(v_head_2494_);
lean_dec(v_a_2491_);
v___x_2497_ = lean_box(0);
v_isShared_2498_ = v_isSharedCheck_2504_;
goto v_resetjp_2496_;
}
v_resetjp_2496_:
{
lean_object* v___x_2499_; lean_object* v___x_2501_; 
v___x_2499_ = l_Lean_MessageData_ofExpr(v_head_2494_);
if (v_isShared_2498_ == 0)
{
lean_ctor_set(v___x_2497_, 1, v_a_2492_);
lean_ctor_set(v___x_2497_, 0, v___x_2499_);
v___x_2501_ = v___x_2497_;
goto v_reusejp_2500_;
}
else
{
lean_object* v_reuseFailAlloc_2503_; 
v_reuseFailAlloc_2503_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2503_, 0, v___x_2499_);
lean_ctor_set(v_reuseFailAlloc_2503_, 1, v_a_2492_);
v___x_2501_ = v_reuseFailAlloc_2503_;
goto v_reusejp_2500_;
}
v_reusejp_2500_:
{
v_a_2491_ = v_tail_2495_;
v_a_2492_ = v___x_2501_;
goto _start;
}
}
}
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_lookup___closed__4(void){
_start:
{
lean_object* v___x_2511_; lean_object* v___x_2512_; lean_object* v___x_2513_; 
v___x_2511_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_lookup___closed__1));
v___x_2512_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_lookup___closed__3));
v___x_2513_ = l_Lean_Name_append(v___x_2512_, v___x_2511_);
return v___x_2513_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_lookup___closed__6(void){
_start:
{
lean_object* v___x_2515_; lean_object* v___x_2516_; 
v___x_2515_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_lookup___closed__5));
v___x_2516_ = l_Lean_stringToMessageData(v___x_2515_);
return v___x_2516_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_lookup___closed__8(void){
_start:
{
lean_object* v___x_2518_; lean_object* v___x_2519_; 
v___x_2518_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_lookup___closed__7));
v___x_2519_ = l_Lean_stringToMessageData(v___x_2518_);
return v___x_2519_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_lookup(lean_object* v_e_2520_, lean_object* v_a_2521_, lean_object* v_a_2522_, lean_object* v_a_2523_, uint8_t v_a_2524_, lean_object* v_a_2525_, lean_object* v_a_2526_, lean_object* v_a_2527_, lean_object* v_a_2528_, lean_object* v_a_2529_){
_start:
{
lean_object* v___x_2531_; lean_object* v___x_2532_; 
v___x_2531_ = lean_st_ref_get(v_a_2522_);
v___x_2532_ = l_Lean_Meta_Canonicalizer_canon(v_e_2520_, v_a_2524_, v_a_2525_, v_a_2526_, v_a_2527_, v_a_2528_, v_a_2529_);
if (lean_obj_tag(v___x_2532_) == 0)
{
lean_object* v_a_2533_; lean_object* v___x_2535_; uint8_t v_isShared_2536_; uint8_t v_isSharedCheck_2631_; 
v_a_2533_ = lean_ctor_get(v___x_2532_, 0);
v_isSharedCheck_2631_ = !lean_is_exclusive(v___x_2532_);
if (v_isSharedCheck_2631_ == 0)
{
v___x_2535_ = v___x_2532_;
v_isShared_2536_ = v_isSharedCheck_2631_;
goto v_resetjp_2534_;
}
else
{
lean_inc(v_a_2533_);
lean_dec(v___x_2532_);
v___x_2535_ = lean_box(0);
v_isShared_2536_ = v_isSharedCheck_2631_;
goto v_resetjp_2534_;
}
v_resetjp_2534_:
{
lean_object* v___y_2538_; lean_object* v___y_2539_; lean_object* v___x_2549_; 
v___x_2549_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_lookup_spec__0___redArg(v___x_2531_, v_a_2533_);
lean_dec(v___x_2531_);
if (lean_obj_tag(v___x_2549_) == 0)
{
lean_object* v_toCold_2550_; lean_object* v_options_2551_; lean_object* v_inheritedTraceOptions_2552_; uint8_t v_hasTrace_2553_; lean_object* v___x_2554_; lean_object* v___y_2556_; lean_object* v___y_2557_; lean_object* v___y_2558_; uint8_t v___y_2559_; lean_object* v___y_2560_; lean_object* v___y_2561_; lean_object* v___y_2562_; lean_object* v___y_2563_; lean_object* v___y_2564_; 
v_toCold_2550_ = lean_ctor_get(v_a_2528_, 0);
v_options_2551_ = lean_ctor_get(v_toCold_2550_, 2);
v_inheritedTraceOptions_2552_ = lean_ctor_get(v_toCold_2550_, 11);
v_hasTrace_2553_ = lean_ctor_get_uint8(v_options_2551_, sizeof(void*)*1);
v___x_2554_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_lookup___closed__1));
if (v_hasTrace_2553_ == 0)
{
v___y_2556_ = v_a_2521_;
v___y_2557_ = v_a_2522_;
v___y_2558_ = v_a_2523_;
v___y_2559_ = v_a_2524_;
v___y_2560_ = v_a_2525_;
v___y_2561_ = v_a_2526_;
v___y_2562_ = v_a_2527_;
v___y_2563_ = v_a_2528_;
v___y_2564_ = v_a_2529_;
goto v___jp_2555_;
}
else
{
lean_object* v___x_2607_; uint8_t v___x_2608_; 
v___x_2607_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_lookup___closed__4, &l_Lean_Elab_Tactic_Omega_lookup___closed__4_once, _init_l_Lean_Elab_Tactic_Omega_lookup___closed__4);
v___x_2608_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2552_, v_options_2551_, v___x_2607_);
if (v___x_2608_ == 0)
{
v___y_2556_ = v_a_2521_;
v___y_2557_ = v_a_2522_;
v___y_2558_ = v_a_2523_;
v___y_2559_ = v_a_2524_;
v___y_2560_ = v_a_2525_;
v___y_2561_ = v_a_2526_;
v___y_2562_ = v_a_2527_;
v___y_2563_ = v_a_2528_;
v___y_2564_ = v_a_2529_;
goto v___jp_2555_;
}
else
{
lean_object* v___x_2609_; lean_object* v___x_2610_; lean_object* v___x_2611_; lean_object* v___x_2612_; 
v___x_2609_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_lookup___closed__8, &l_Lean_Elab_Tactic_Omega_lookup___closed__8_once, _init_l_Lean_Elab_Tactic_Omega_lookup___closed__8);
lean_inc(v_a_2533_);
v___x_2610_ = l_Lean_MessageData_ofExpr(v_a_2533_);
v___x_2611_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2611_, 0, v___x_2609_);
lean_ctor_set(v___x_2611_, 1, v___x_2610_);
v___x_2612_ = l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4___redArg(v___x_2554_, v___x_2611_, v_a_2526_, v_a_2527_, v_a_2528_, v_a_2529_);
if (lean_obj_tag(v___x_2612_) == 0)
{
lean_dec_ref_known(v___x_2612_, 1);
v___y_2556_ = v_a_2521_;
v___y_2557_ = v_a_2522_;
v___y_2558_ = v_a_2523_;
v___y_2559_ = v_a_2524_;
v___y_2560_ = v_a_2525_;
v___y_2561_ = v_a_2526_;
v___y_2562_ = v_a_2527_;
v___y_2563_ = v_a_2528_;
v___y_2564_ = v_a_2529_;
goto v___jp_2555_;
}
else
{
lean_object* v_a_2613_; lean_object* v___x_2615_; uint8_t v_isShared_2616_; uint8_t v_isSharedCheck_2620_; 
lean_del_object(v___x_2535_);
lean_dec(v_a_2533_);
v_a_2613_ = lean_ctor_get(v___x_2612_, 0);
v_isSharedCheck_2620_ = !lean_is_exclusive(v___x_2612_);
if (v_isSharedCheck_2620_ == 0)
{
v___x_2615_ = v___x_2612_;
v_isShared_2616_ = v_isSharedCheck_2620_;
goto v_resetjp_2614_;
}
else
{
lean_inc(v_a_2613_);
lean_dec(v___x_2612_);
v___x_2615_ = lean_box(0);
v_isShared_2616_ = v_isSharedCheck_2620_;
goto v_resetjp_2614_;
}
v_resetjp_2614_:
{
lean_object* v___x_2618_; 
if (v_isShared_2616_ == 0)
{
v___x_2618_ = v___x_2615_;
goto v_reusejp_2617_;
}
else
{
lean_object* v_reuseFailAlloc_2619_; 
v_reuseFailAlloc_2619_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2619_, 0, v_a_2613_);
v___x_2618_ = v_reuseFailAlloc_2619_;
goto v_reusejp_2617_;
}
v_reusejp_2617_:
{
return v___x_2618_;
}
}
}
}
}
v___jp_2555_:
{
lean_object* v___x_2565_; 
lean_inc(v_a_2533_);
v___x_2565_ = l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg(v_a_2533_, v___y_2558_, v___y_2561_, v___y_2562_, v___y_2563_, v___y_2564_);
if (lean_obj_tag(v___x_2565_) == 0)
{
lean_object* v_toCold_2566_; lean_object* v_options_2567_; uint8_t v_hasTrace_2568_; 
v_toCold_2566_ = lean_ctor_get(v___y_2563_, 0);
v_options_2567_ = lean_ctor_get(v_toCold_2566_, 2);
v_hasTrace_2568_ = lean_ctor_get_uint8(v_options_2567_, sizeof(void*)*1);
if (v_hasTrace_2568_ == 0)
{
lean_object* v_a_2569_; 
v_a_2569_ = lean_ctor_get(v___x_2565_, 0);
lean_inc(v_a_2569_);
lean_dec_ref_known(v___x_2565_, 1);
v___y_2538_ = v_a_2569_;
v___y_2539_ = v___y_2557_;
goto v___jp_2537_;
}
else
{
lean_object* v_a_2570_; lean_object* v_inheritedTraceOptions_2571_; lean_object* v___x_2572_; uint8_t v___x_2573_; 
v_a_2570_ = lean_ctor_get(v___x_2565_, 0);
lean_inc(v_a_2570_);
lean_dec_ref_known(v___x_2565_, 1);
v_inheritedTraceOptions_2571_ = lean_ctor_get(v_toCold_2566_, 11);
v___x_2572_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_lookup___closed__4, &l_Lean_Elab_Tactic_Omega_lookup___closed__4_once, _init_l_Lean_Elab_Tactic_Omega_lookup___closed__4);
v___x_2573_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2571_, v_options_2567_, v___x_2572_);
if (v___x_2573_ == 0)
{
v___y_2538_ = v_a_2570_;
v___y_2539_ = v___y_2557_;
goto v___jp_2537_;
}
else
{
uint8_t v___x_2574_; 
v___x_2574_ = l_List_isEmpty___redArg(v_a_2570_);
if (v___x_2574_ == 0)
{
lean_object* v___x_2575_; lean_object* v___x_2576_; 
v___x_2575_ = lean_box(0);
lean_inc(v_a_2570_);
v___x_2576_ = l_List_mapM_loop___at___00Lean_Elab_Tactic_Omega_lookup_spec__2___redArg(v_a_2570_, v___x_2575_, v___y_2561_, v___y_2562_, v___y_2563_, v___y_2564_);
if (lean_obj_tag(v___x_2576_) == 0)
{
lean_object* v_a_2577_; lean_object* v___x_2578_; lean_object* v___x_2579_; lean_object* v___x_2580_; lean_object* v___x_2581_; lean_object* v___x_2582_; 
v_a_2577_ = lean_ctor_get(v___x_2576_, 0);
lean_inc(v_a_2577_);
lean_dec_ref_known(v___x_2576_, 1);
v___x_2578_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_lookup___closed__6, &l_Lean_Elab_Tactic_Omega_lookup___closed__6_once, _init_l_Lean_Elab_Tactic_Omega_lookup___closed__6);
v___x_2579_ = l_List_mapTR_loop___at___00Lean_Elab_Tactic_Omega_lookup_spec__3(v_a_2577_, v___x_2575_);
v___x_2580_ = l_Lean_MessageData_ofList(v___x_2579_);
v___x_2581_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2581_, 0, v___x_2578_);
lean_ctor_set(v___x_2581_, 1, v___x_2580_);
v___x_2582_ = l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4___redArg(v___x_2554_, v___x_2581_, v___y_2561_, v___y_2562_, v___y_2563_, v___y_2564_);
if (lean_obj_tag(v___x_2582_) == 0)
{
lean_dec_ref_known(v___x_2582_, 1);
v___y_2538_ = v_a_2570_;
v___y_2539_ = v___y_2557_;
goto v___jp_2537_;
}
else
{
lean_object* v_a_2583_; lean_object* v___x_2585_; uint8_t v_isShared_2586_; uint8_t v_isSharedCheck_2590_; 
lean_dec(v_a_2570_);
lean_del_object(v___x_2535_);
lean_dec(v_a_2533_);
v_a_2583_ = lean_ctor_get(v___x_2582_, 0);
v_isSharedCheck_2590_ = !lean_is_exclusive(v___x_2582_);
if (v_isSharedCheck_2590_ == 0)
{
v___x_2585_ = v___x_2582_;
v_isShared_2586_ = v_isSharedCheck_2590_;
goto v_resetjp_2584_;
}
else
{
lean_inc(v_a_2583_);
lean_dec(v___x_2582_);
v___x_2585_ = lean_box(0);
v_isShared_2586_ = v_isSharedCheck_2590_;
goto v_resetjp_2584_;
}
v_resetjp_2584_:
{
lean_object* v___x_2588_; 
if (v_isShared_2586_ == 0)
{
v___x_2588_ = v___x_2585_;
goto v_reusejp_2587_;
}
else
{
lean_object* v_reuseFailAlloc_2589_; 
v_reuseFailAlloc_2589_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2589_, 0, v_a_2583_);
v___x_2588_ = v_reuseFailAlloc_2589_;
goto v_reusejp_2587_;
}
v_reusejp_2587_:
{
return v___x_2588_;
}
}
}
}
else
{
lean_object* v_a_2591_; lean_object* v___x_2593_; uint8_t v_isShared_2594_; uint8_t v_isSharedCheck_2598_; 
lean_dec(v_a_2570_);
lean_del_object(v___x_2535_);
lean_dec(v_a_2533_);
v_a_2591_ = lean_ctor_get(v___x_2576_, 0);
v_isSharedCheck_2598_ = !lean_is_exclusive(v___x_2576_);
if (v_isSharedCheck_2598_ == 0)
{
v___x_2593_ = v___x_2576_;
v_isShared_2594_ = v_isSharedCheck_2598_;
goto v_resetjp_2592_;
}
else
{
lean_inc(v_a_2591_);
lean_dec(v___x_2576_);
v___x_2593_ = lean_box(0);
v_isShared_2594_ = v_isSharedCheck_2598_;
goto v_resetjp_2592_;
}
v_resetjp_2592_:
{
lean_object* v___x_2596_; 
if (v_isShared_2594_ == 0)
{
v___x_2596_ = v___x_2593_;
goto v_reusejp_2595_;
}
else
{
lean_object* v_reuseFailAlloc_2597_; 
v_reuseFailAlloc_2597_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2597_, 0, v_a_2591_);
v___x_2596_ = v_reuseFailAlloc_2597_;
goto v_reusejp_2595_;
}
v_reusejp_2595_:
{
return v___x_2596_;
}
}
}
}
else
{
v___y_2538_ = v_a_2570_;
v___y_2539_ = v___y_2557_;
goto v___jp_2537_;
}
}
}
}
else
{
lean_object* v_a_2599_; lean_object* v___x_2601_; uint8_t v_isShared_2602_; uint8_t v_isSharedCheck_2606_; 
lean_del_object(v___x_2535_);
lean_dec(v_a_2533_);
v_a_2599_ = lean_ctor_get(v___x_2565_, 0);
v_isSharedCheck_2606_ = !lean_is_exclusive(v___x_2565_);
if (v_isSharedCheck_2606_ == 0)
{
v___x_2601_ = v___x_2565_;
v_isShared_2602_ = v_isSharedCheck_2606_;
goto v_resetjp_2600_;
}
else
{
lean_inc(v_a_2599_);
lean_dec(v___x_2565_);
v___x_2601_ = lean_box(0);
v_isShared_2602_ = v_isSharedCheck_2606_;
goto v_resetjp_2600_;
}
v_resetjp_2600_:
{
lean_object* v___x_2604_; 
if (v_isShared_2602_ == 0)
{
v___x_2604_ = v___x_2601_;
goto v_reusejp_2603_;
}
else
{
lean_object* v_reuseFailAlloc_2605_; 
v_reuseFailAlloc_2605_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2605_, 0, v_a_2599_);
v___x_2604_ = v_reuseFailAlloc_2605_;
goto v_reusejp_2603_;
}
v_reusejp_2603_:
{
return v___x_2604_;
}
}
}
}
}
else
{
lean_object* v_val_2621_; lean_object* v___x_2623_; uint8_t v_isShared_2624_; uint8_t v_isSharedCheck_2630_; 
lean_del_object(v___x_2535_);
lean_dec(v_a_2533_);
v_val_2621_ = lean_ctor_get(v___x_2549_, 0);
v_isSharedCheck_2630_ = !lean_is_exclusive(v___x_2549_);
if (v_isSharedCheck_2630_ == 0)
{
v___x_2623_ = v___x_2549_;
v_isShared_2624_ = v_isSharedCheck_2630_;
goto v_resetjp_2622_;
}
else
{
lean_inc(v_val_2621_);
lean_dec(v___x_2549_);
v___x_2623_ = lean_box(0);
v_isShared_2624_ = v_isSharedCheck_2630_;
goto v_resetjp_2622_;
}
v_resetjp_2622_:
{
lean_object* v___x_2625_; lean_object* v___x_2626_; lean_object* v___x_2628_; 
v___x_2625_ = lean_box(0);
v___x_2626_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2626_, 0, v_val_2621_);
lean_ctor_set(v___x_2626_, 1, v___x_2625_);
if (v_isShared_2624_ == 0)
{
lean_ctor_set_tag(v___x_2623_, 0);
lean_ctor_set(v___x_2623_, 0, v___x_2626_);
v___x_2628_ = v___x_2623_;
goto v_reusejp_2627_;
}
else
{
lean_object* v_reuseFailAlloc_2629_; 
v_reuseFailAlloc_2629_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2629_, 0, v___x_2626_);
v___x_2628_ = v_reuseFailAlloc_2629_;
goto v_reusejp_2627_;
}
v_reusejp_2627_:
{
return v___x_2628_;
}
}
}
v___jp_2537_:
{
lean_object* v___x_2540_; lean_object* v_size_2541_; lean_object* v___x_2542_; lean_object* v___x_2543_; lean_object* v___x_2544_; lean_object* v___x_2545_; lean_object* v___x_2547_; 
v___x_2540_ = lean_st_ref_take(v___y_2539_);
v_size_2541_ = lean_ctor_get(v___x_2540_, 0);
lean_inc_n(v_size_2541_, 2);
v___x_2542_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1___redArg(v___x_2540_, v_a_2533_, v_size_2541_);
v___x_2543_ = lean_st_ref_put(v___y_2539_, v___x_2542_);
v___x_2544_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2544_, 0, v___y_2538_);
v___x_2545_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2545_, 0, v_size_2541_);
lean_ctor_set(v___x_2545_, 1, v___x_2544_);
if (v_isShared_2536_ == 0)
{
lean_ctor_set(v___x_2535_, 0, v___x_2545_);
v___x_2547_ = v___x_2535_;
goto v_reusejp_2546_;
}
else
{
lean_object* v_reuseFailAlloc_2548_; 
v_reuseFailAlloc_2548_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2548_, 0, v___x_2545_);
v___x_2547_ = v_reuseFailAlloc_2548_;
goto v_reusejp_2546_;
}
v_reusejp_2546_:
{
return v___x_2547_;
}
}
}
}
else
{
lean_object* v_a_2632_; lean_object* v___x_2634_; uint8_t v_isShared_2635_; uint8_t v_isSharedCheck_2639_; 
lean_dec(v___x_2531_);
v_a_2632_ = lean_ctor_get(v___x_2532_, 0);
v_isSharedCheck_2639_ = !lean_is_exclusive(v___x_2532_);
if (v_isSharedCheck_2639_ == 0)
{
v___x_2634_ = v___x_2532_;
v_isShared_2635_ = v_isSharedCheck_2639_;
goto v_resetjp_2633_;
}
else
{
lean_inc(v_a_2632_);
lean_dec(v___x_2532_);
v___x_2634_ = lean_box(0);
v_isShared_2635_ = v_isSharedCheck_2639_;
goto v_resetjp_2633_;
}
v_resetjp_2633_:
{
lean_object* v___x_2637_; 
if (v_isShared_2635_ == 0)
{
v___x_2637_ = v___x_2634_;
goto v_reusejp_2636_;
}
else
{
lean_object* v_reuseFailAlloc_2638_; 
v_reuseFailAlloc_2638_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2638_, 0, v_a_2632_);
v___x_2637_ = v_reuseFailAlloc_2638_;
goto v_reusejp_2636_;
}
v_reusejp_2636_:
{
return v___x_2637_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_lookup___boxed(lean_object* v_e_2640_, lean_object* v_a_2641_, lean_object* v_a_2642_, lean_object* v_a_2643_, lean_object* v_a_2644_, lean_object* v_a_2645_, lean_object* v_a_2646_, lean_object* v_a_2647_, lean_object* v_a_2648_, lean_object* v_a_2649_, lean_object* v_a_2650_){
_start:
{
uint8_t v_a_boxed_2651_; lean_object* v_res_2652_; 
v_a_boxed_2651_ = lean_unbox(v_a_2644_);
v_res_2652_ = l_Lean_Elab_Tactic_Omega_lookup(v_e_2640_, v_a_2641_, v_a_2642_, v_a_2643_, v_a_boxed_2651_, v_a_2645_, v_a_2646_, v_a_2647_, v_a_2648_, v_a_2649_);
lean_dec(v_a_2649_);
lean_dec_ref(v_a_2648_);
lean_dec(v_a_2647_);
lean_dec_ref(v_a_2646_);
lean_dec(v_a_2645_);
lean_dec_ref(v_a_2643_);
lean_dec(v_a_2642_);
lean_dec(v_a_2641_);
return v_res_2652_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_lookup_spec__0(lean_object* v_00_u03b2_2653_, lean_object* v_m_2654_, lean_object* v_a_2655_){
_start:
{
lean_object* v___x_2656_; 
v___x_2656_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_lookup_spec__0___redArg(v_m_2654_, v_a_2655_);
return v___x_2656_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_lookup_spec__0___boxed(lean_object* v_00_u03b2_2657_, lean_object* v_m_2658_, lean_object* v_a_2659_){
_start:
{
lean_object* v_res_2660_; 
v_res_2660_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_lookup_spec__0(v_00_u03b2_2657_, v_m_2658_, v_a_2659_);
lean_dec_ref(v_a_2659_);
lean_dec_ref(v_m_2658_);
return v_res_2660_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1(lean_object* v_00_u03b2_2661_, lean_object* v_m_2662_, lean_object* v_a_2663_, lean_object* v_b_2664_){
_start:
{
lean_object* v___x_2665_; 
v___x_2665_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1___redArg(v_m_2662_, v_a_2663_, v_b_2664_);
return v___x_2665_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_Omega_lookup_spec__2(lean_object* v_x_2666_, lean_object* v_x_2667_, lean_object* v___y_2668_, lean_object* v___y_2669_, lean_object* v___y_2670_, uint8_t v___y_2671_, lean_object* v___y_2672_, lean_object* v___y_2673_, lean_object* v___y_2674_, lean_object* v___y_2675_, lean_object* v___y_2676_){
_start:
{
lean_object* v___x_2678_; 
v___x_2678_ = l_List_mapM_loop___at___00Lean_Elab_Tactic_Omega_lookup_spec__2___redArg(v_x_2666_, v_x_2667_, v___y_2673_, v___y_2674_, v___y_2675_, v___y_2676_);
return v___x_2678_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_Omega_lookup_spec__2___boxed(lean_object* v_x_2679_, lean_object* v_x_2680_, lean_object* v___y_2681_, lean_object* v___y_2682_, lean_object* v___y_2683_, lean_object* v___y_2684_, lean_object* v___y_2685_, lean_object* v___y_2686_, lean_object* v___y_2687_, lean_object* v___y_2688_, lean_object* v___y_2689_, lean_object* v___y_2690_){
_start:
{
uint8_t v___y_34062__boxed_2691_; lean_object* v_res_2692_; 
v___y_34062__boxed_2691_ = lean_unbox(v___y_2684_);
v_res_2692_ = l_List_mapM_loop___at___00Lean_Elab_Tactic_Omega_lookup_spec__2(v_x_2679_, v_x_2680_, v___y_2681_, v___y_2682_, v___y_2683_, v___y_34062__boxed_2691_, v___y_2685_, v___y_2686_, v___y_2687_, v___y_2688_, v___y_2689_);
lean_dec(v___y_2689_);
lean_dec_ref(v___y_2688_);
lean_dec(v___y_2687_);
lean_dec_ref(v___y_2686_);
lean_dec(v___y_2685_);
lean_dec_ref(v___y_2683_);
lean_dec(v___y_2682_);
lean_dec(v___y_2681_);
return v_res_2692_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4(lean_object* v_cls_2693_, lean_object* v_msg_2694_, lean_object* v___y_2695_, lean_object* v___y_2696_, lean_object* v___y_2697_, uint8_t v___y_2698_, lean_object* v___y_2699_, lean_object* v___y_2700_, lean_object* v___y_2701_, lean_object* v___y_2702_, lean_object* v___y_2703_){
_start:
{
lean_object* v___x_2705_; 
v___x_2705_ = l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4___redArg(v_cls_2693_, v_msg_2694_, v___y_2700_, v___y_2701_, v___y_2702_, v___y_2703_);
return v___x_2705_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4___boxed(lean_object* v_cls_2706_, lean_object* v_msg_2707_, lean_object* v___y_2708_, lean_object* v___y_2709_, lean_object* v___y_2710_, lean_object* v___y_2711_, lean_object* v___y_2712_, lean_object* v___y_2713_, lean_object* v___y_2714_, lean_object* v___y_2715_, lean_object* v___y_2716_, lean_object* v___y_2717_){
_start:
{
uint8_t v___y_34098__boxed_2718_; lean_object* v_res_2719_; 
v___y_34098__boxed_2718_ = lean_unbox(v___y_2711_);
v_res_2719_ = l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4(v_cls_2706_, v_msg_2707_, v___y_2708_, v___y_2709_, v___y_2710_, v___y_34098__boxed_2718_, v___y_2712_, v___y_2713_, v___y_2714_, v___y_2715_, v___y_2716_);
lean_dec(v___y_2716_);
lean_dec_ref(v___y_2715_);
lean_dec(v___y_2714_);
lean_dec_ref(v___y_2713_);
lean_dec(v___y_2712_);
lean_dec_ref(v___y_2710_);
lean_dec(v___y_2709_);
lean_dec(v___y_2708_);
return v_res_2719_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_lookup_spec__0_spec__0(lean_object* v_00_u03b2_2720_, lean_object* v_a_2721_, lean_object* v_x_2722_){
_start:
{
lean_object* v___x_2723_; 
v___x_2723_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_lookup_spec__0_spec__0___redArg(v_a_2721_, v_x_2722_);
return v___x_2723_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_lookup_spec__0_spec__0___boxed(lean_object* v_00_u03b2_2724_, lean_object* v_a_2725_, lean_object* v_x_2726_){
_start:
{
lean_object* v_res_2727_; 
v_res_2727_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_lookup_spec__0_spec__0(v_00_u03b2_2724_, v_a_2725_, v_x_2726_);
lean_dec(v_x_2726_);
lean_dec_ref(v_a_2725_);
return v_res_2727_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__2(lean_object* v_00_u03b2_2728_, lean_object* v_a_2729_, lean_object* v_x_2730_){
_start:
{
uint8_t v___x_2731_; 
v___x_2731_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__2___redArg(v_a_2729_, v_x_2730_);
return v___x_2731_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__2___boxed(lean_object* v_00_u03b2_2732_, lean_object* v_a_2733_, lean_object* v_x_2734_){
_start:
{
uint8_t v_res_2735_; lean_object* v_r_2736_; 
v_res_2735_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__2(v_00_u03b2_2732_, v_a_2733_, v_x_2734_);
lean_dec(v_x_2734_);
lean_dec_ref(v_a_2733_);
v_r_2736_ = lean_box(v_res_2735_);
return v_r_2736_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__3(lean_object* v_00_u03b2_2737_, lean_object* v_data_2738_){
_start:
{
lean_object* v___x_2739_; 
v___x_2739_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__3___redArg(v_data_2738_);
return v___x_2739_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__4(lean_object* v_00_u03b2_2740_, lean_object* v_a_2741_, lean_object* v_b_2742_, lean_object* v_x_2743_){
_start:
{
lean_object* v___x_2744_; 
v___x_2744_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__4___redArg(v_a_2741_, v_b_2742_, v_x_2743_);
return v___x_2744_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__3_spec__4(lean_object* v_00_u03b2_2745_, lean_object* v_i_2746_, lean_object* v_source_2747_, lean_object* v_target_2748_){
_start:
{
lean_object* v___x_2749_; 
v___x_2749_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__3_spec__4___redArg(v_i_2746_, v_source_2747_, v_target_2748_);
return v___x_2749_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__3_spec__4_spec__9(lean_object* v_00_u03b2_2750_, lean_object* v_x_2751_, lean_object* v_x_2752_){
_start:
{
lean_object* v___x_2753_; 
v___x_2753_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__3_spec__4_spec__9___redArg(v_x_2751_, v_x_2752_);
return v___x_2753_;
}
}
lean_object* runtime_initialize_Lean_Meta_AppBuilder(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Canonicalizer(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_Omega_OmegaM(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Canonicalizer(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Tactic_Omega_OmegaM(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_AppBuilder(uint8_t builtin);
lean_object* initialize_Lean_Meta_Canonicalizer(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_Omega_OmegaM(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Canonicalizer(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Omega_OmegaM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Tactic_Omega_OmegaM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Tactic_Omega_OmegaM(builtin);
}
#ifdef __cplusplus
}
#endif
