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
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_lam___override(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_forallE___override(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_letE___override(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_proj___override(lean_object*, lean_object*, lean_object*);
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
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Expr_getAppFnArgs(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_nat_x3f(lean_object*);
lean_object* l_Lean_Level_ofNat(lean_object*);
lean_object* l_Lean_mkNatLit(lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkDecideProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
uint8_t lean_int_dec_le(lean_object*, lean_object*);
lean_object* lean_int_neg(lean_object*);
lean_object* l_Int_toNat(lean_object*);
lean_object* l_Lean_instToExprInt_mkNat(lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Array_qpartition___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
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
lean_object* l_Lean_Meta_mkExpectedPropHint(lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lean_Meta_Canonicalizer_CanonM_run_x27___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_stripMData(lean_object*);
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
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
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
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__23;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_natCast_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__24 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__24_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "instLTNat"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__25 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__25_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__25_value),LEAN_SCALAR_PTR_LITERAL(141, 27, 201, 217, 48, 203, 85, 203)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__26 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__26_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__27;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "pow_pos"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__28 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__28_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__29_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_natCast_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__29_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__28_value),LEAN_SCALAR_PTR_LITERAL(8, 188, 92, 81, 98, 125, 214, 195)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__29 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__29_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "ofNat_pos_of_pos"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__30 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__30_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__31_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__31_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__31_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(113, 76, 155, 247, 209, 92, 141, 248)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__31_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__31_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(127, 141, 7, 147, 89, 24, 200, 6)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__31_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__30_value),LEAN_SCALAR_PTR_LITERAL(40, 203, 156, 230, 39, 171, 106, 183)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__31 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__31_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "emod_nonneg"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__32 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__32_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__33_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__33_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__32_value),LEAN_SCALAR_PTR_LITERAL(61, 100, 115, 114, 207, 135, 28, 238)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__33 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__33_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "ne_of_gt"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__34 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__34_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__35_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__35_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__34_value),LEAN_SCALAR_PTR_LITERAL(124, 85, 105, 24, 138, 4, 9, 162)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__35 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__35_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "emod_lt_of_pos"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__36 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__36_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__37_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__37_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__36_value),LEAN_SCALAR_PTR_LITERAL(179, 253, 191, 46, 213, 199, 79, 210)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__37 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__37_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__38_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__38;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__39_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__39;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Neg"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__40 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__40_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "neg"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__41 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__41_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__42_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__40_value),LEAN_SCALAR_PTR_LITERAL(94, 4, 109, 108, 64, 81, 153, 133)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__42_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__41_value),LEAN_SCALAR_PTR_LITERAL(105, 26, 70, 221, 245, 238, 127, 238)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__42 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__42_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "instNegInt"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__43 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__43_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__44_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__44_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__43_value),LEAN_SCALAR_PTR_LITERAL(217, 109, 233, 1, 211, 122, 77, 88)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__44 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__44_value;
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
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__50_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__50;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__51_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__51;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "instLTInt"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__52 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__52_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__53_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__53_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__52_value),LEAN_SCALAR_PTR_LITERAL(174, 212, 102, 196, 69, 170, 149, 126)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__53 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__53_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__54_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__54;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__55_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "pos_pow_of_pos"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__55 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__55_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__56_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__56_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__56_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(113, 76, 155, 247, 209, 92, 141, 248)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__56_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__56_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(127, 141, 7, 147, 89, 24, 200, 6)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__56_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__56_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__55_value),LEAN_SCALAR_PTR_LITERAL(145, 25, 143, 59, 16, 211, 163, 116)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__56 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__56_value;
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
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__62_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__62;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__63_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__63;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__64_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Ne"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__64 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__64_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__65_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__64_value),LEAN_SCALAR_PTR_LITERAL(161, 247, 70, 70, 118, 145, 235, 92)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__65 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__65_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__66_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__66;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__67_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__67;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__68_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__68;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__69_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "mul_ediv_self_le"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__69 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__69_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__70_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__70_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__70_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__69_value),LEAN_SCALAR_PTR_LITERAL(252, 253, 214, 154, 97, 254, 157, 214)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__70 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__70_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__71_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__71;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__72_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "lt_mul_ediv_self_add"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__72 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__72_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__73_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__73_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__73_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__72_value),LEAN_SCALAR_PTR_LITERAL(94, 156, 157, 133, 195, 57, 68, 244)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__73 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__73_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__74_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__74;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__75_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "neg_le_natAbs"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__75 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__75_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__76_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__76_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__76_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(113, 76, 155, 247, 209, 92, 141, 248)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__76_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__76_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(127, 141, 7, 147, 89, 24, 200, 6)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__76_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__76_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__75_value),LEAN_SCALAR_PTR_LITERAL(217, 253, 117, 167, 254, 111, 180, 184)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__76 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__76_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__77_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "natCast_nonneg"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__77 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__77_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__78_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__78_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__78_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__77_value),LEAN_SCALAR_PTR_LITERAL(78, 189, 5, 123, 91, 219, 85, 246)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__78 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__78_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__79_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "BitVec"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__79 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__79_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__80_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "isLt"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__80 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__80_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__81_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__79_value),LEAN_SCALAR_PTR_LITERAL(108, 178, 58, 132, 143, 189, 222, 74)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__81_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__81_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__80_value),LEAN_SCALAR_PTR_LITERAL(196, 26, 231, 251, 226, 55, 19, 117)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__81 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__81_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__82_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Fin"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__82 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__82_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__83_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__82_value),LEAN_SCALAR_PTR_LITERAL(62, 91, 162, 2, 110, 238, 123, 219)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__83_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__83_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__80_value),LEAN_SCALAR_PTR_LITERAL(222, 150, 50, 101, 25, 222, 136, 68)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__83 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__83_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__84_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "le_natAbs"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__84 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__84_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__85_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__85_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__85_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__84_value),LEAN_SCALAR_PTR_LITERAL(90, 82, 63, 108, 86, 248, 24, 88)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__85 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__85_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__86_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "toNat"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__86 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__86_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__87_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "val"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__87 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__87_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__88_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "natAbs"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__88 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__88_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__89_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "ofNat_sub_dichotomy"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__89 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__89_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__90_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__90_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__90_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(113, 76, 155, 247, 209, 92, 141, 248)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__90_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__90_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(127, 141, 7, 147, 89, 24, 200, 6)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__90_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__90_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__89_value),LEAN_SCALAR_PTR_LITERAL(132, 176, 7, 204, 155, 0, 78, 60)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__90 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__90_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__91_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "ite"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__91 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__91_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__92_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "ite_disjunction"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__92 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__92_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__93_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__93_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__93_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(113, 76, 155, 247, 209, 92, 141, 248)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__93_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__93_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__92_value),LEAN_SCALAR_PTR_LITERAL(77, 139, 125, 42, 52, 100, 157, 106)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__93 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__93_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__94_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__94;
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
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_stripMData(lean_object* v_x_1_){
_start:
{
switch(lean_obj_tag(v_x_1_))
{
case 10:
{
lean_object* v_expr_2_; 
v_expr_2_ = lean_ctor_get(v_x_1_, 1);
lean_inc_ref(v_expr_2_);
lean_dec_ref(v_x_1_);
v_x_1_ = v_expr_2_;
goto _start;
}
case 5:
{
lean_object* v_fn_4_; lean_object* v_arg_5_; lean_object* v___x_6_; lean_object* v___x_7_; lean_object* v___x_8_; 
v_fn_4_ = lean_ctor_get(v_x_1_, 0);
lean_inc_ref(v_fn_4_);
v_arg_5_ = lean_ctor_get(v_x_1_, 1);
lean_inc_ref(v_arg_5_);
lean_dec_ref(v_x_1_);
v___x_6_ = l_Lean_Elab_Tactic_Omega_stripMData(v_fn_4_);
v___x_7_ = l_Lean_Elab_Tactic_Omega_stripMData(v_arg_5_);
v___x_8_ = l_Lean_Expr_app___override(v___x_6_, v___x_7_);
return v___x_8_;
}
case 6:
{
lean_object* v_binderName_9_; lean_object* v_binderType_10_; lean_object* v_body_11_; uint8_t v_binderInfo_12_; lean_object* v___x_13_; lean_object* v___x_14_; lean_object* v___x_15_; 
v_binderName_9_ = lean_ctor_get(v_x_1_, 0);
lean_inc(v_binderName_9_);
v_binderType_10_ = lean_ctor_get(v_x_1_, 1);
lean_inc_ref(v_binderType_10_);
v_body_11_ = lean_ctor_get(v_x_1_, 2);
lean_inc_ref(v_body_11_);
v_binderInfo_12_ = lean_ctor_get_uint8(v_x_1_, sizeof(void*)*3 + 8);
lean_dec_ref(v_x_1_);
v___x_13_ = l_Lean_Elab_Tactic_Omega_stripMData(v_binderType_10_);
v___x_14_ = l_Lean_Elab_Tactic_Omega_stripMData(v_body_11_);
v___x_15_ = l_Lean_Expr_lam___override(v_binderName_9_, v___x_13_, v___x_14_, v_binderInfo_12_);
return v___x_15_;
}
case 7:
{
lean_object* v_binderName_16_; lean_object* v_binderType_17_; lean_object* v_body_18_; uint8_t v_binderInfo_19_; lean_object* v___x_20_; lean_object* v___x_21_; lean_object* v___x_22_; 
v_binderName_16_ = lean_ctor_get(v_x_1_, 0);
lean_inc(v_binderName_16_);
v_binderType_17_ = lean_ctor_get(v_x_1_, 1);
lean_inc_ref(v_binderType_17_);
v_body_18_ = lean_ctor_get(v_x_1_, 2);
lean_inc_ref(v_body_18_);
v_binderInfo_19_ = lean_ctor_get_uint8(v_x_1_, sizeof(void*)*3 + 8);
lean_dec_ref(v_x_1_);
v___x_20_ = l_Lean_Elab_Tactic_Omega_stripMData(v_binderType_17_);
v___x_21_ = l_Lean_Elab_Tactic_Omega_stripMData(v_body_18_);
v___x_22_ = l_Lean_Expr_forallE___override(v_binderName_16_, v___x_20_, v___x_21_, v_binderInfo_19_);
return v___x_22_;
}
case 8:
{
lean_object* v_declName_23_; lean_object* v_type_24_; lean_object* v_value_25_; lean_object* v_body_26_; uint8_t v_nondep_27_; lean_object* v___x_28_; lean_object* v___x_29_; lean_object* v___x_30_; lean_object* v___x_31_; 
v_declName_23_ = lean_ctor_get(v_x_1_, 0);
lean_inc(v_declName_23_);
v_type_24_ = lean_ctor_get(v_x_1_, 1);
lean_inc_ref(v_type_24_);
v_value_25_ = lean_ctor_get(v_x_1_, 2);
lean_inc_ref(v_value_25_);
v_body_26_ = lean_ctor_get(v_x_1_, 3);
lean_inc_ref(v_body_26_);
v_nondep_27_ = lean_ctor_get_uint8(v_x_1_, sizeof(void*)*4 + 8);
lean_dec_ref(v_x_1_);
v___x_28_ = l_Lean_Elab_Tactic_Omega_stripMData(v_type_24_);
v___x_29_ = l_Lean_Elab_Tactic_Omega_stripMData(v_value_25_);
v___x_30_ = l_Lean_Elab_Tactic_Omega_stripMData(v_body_26_);
v___x_31_ = l_Lean_Expr_letE___override(v_declName_23_, v___x_28_, v___x_29_, v___x_30_, v_nondep_27_);
return v___x_31_;
}
case 11:
{
lean_object* v_typeName_32_; lean_object* v_idx_33_; lean_object* v_struct_34_; lean_object* v___x_35_; lean_object* v___x_36_; 
v_typeName_32_ = lean_ctor_get(v_x_1_, 0);
lean_inc(v_typeName_32_);
v_idx_33_ = lean_ctor_get(v_x_1_, 1);
lean_inc(v_idx_33_);
v_struct_34_ = lean_ctor_get(v_x_1_, 2);
lean_inc_ref(v_struct_34_);
lean_dec_ref(v_x_1_);
v___x_35_ = l_Lean_Elab_Tactic_Omega_stripMData(v_struct_34_);
v___x_36_ = l_Lean_Expr_proj___override(v_typeName_32_, v_idx_33_, v___x_35_);
return v___x_36_;
}
default: 
{
return v_x_1_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg___lam__0(lean_object* v___x_37_, lean_object* v___x_38_, lean_object* v_m_39_, lean_object* v_cfg_40_, uint8_t v___y_41_, lean_object* v___y_42_, lean_object* v___y_43_, lean_object* v___y_44_, lean_object* v___y_45_, lean_object* v___y_46_){
_start:
{
lean_object* v___x_48_; lean_object* v___x_49_; lean_object* v___x_50_; lean_object* v___x_51_; 
v___x_48_ = lean_st_mk_ref(v___x_37_);
v___x_49_ = lean_st_mk_ref(v___x_38_);
v___x_50_ = lean_box(v___y_41_);
lean_inc(v___y_46_);
lean_inc_ref(v___y_45_);
lean_inc(v___y_44_);
lean_inc_ref(v___y_43_);
lean_inc(v___y_42_);
lean_inc(v___x_48_);
lean_inc(v___x_49_);
v___x_51_ = lean_apply_10(v_m_39_, v___x_49_, v___x_48_, v_cfg_40_, v___x_50_, v___y_42_, v___y_43_, v___y_44_, v___y_45_, v___y_46_, lean_box(0));
if (lean_obj_tag(v___x_51_) == 0)
{
lean_object* v_a_52_; lean_object* v___x_54_; uint8_t v_isShared_55_; uint8_t v_isSharedCheck_61_; 
v_a_52_ = lean_ctor_get(v___x_51_, 0);
v_isSharedCheck_61_ = !lean_is_exclusive(v___x_51_);
if (v_isSharedCheck_61_ == 0)
{
v___x_54_ = v___x_51_;
v_isShared_55_ = v_isSharedCheck_61_;
goto v_resetjp_53_;
}
else
{
lean_inc(v_a_52_);
lean_dec(v___x_51_);
v___x_54_ = lean_box(0);
v_isShared_55_ = v_isSharedCheck_61_;
goto v_resetjp_53_;
}
v_resetjp_53_:
{
lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_59_; 
v___x_56_ = lean_st_ref_get(v___x_49_);
lean_dec(v___x_49_);
lean_dec(v___x_56_);
v___x_57_ = lean_st_ref_get(v___x_48_);
lean_dec(v___x_48_);
lean_dec(v___x_57_);
if (v_isShared_55_ == 0)
{
v___x_59_ = v___x_54_;
goto v_reusejp_58_;
}
else
{
lean_object* v_reuseFailAlloc_60_; 
v_reuseFailAlloc_60_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_60_, 0, v_a_52_);
v___x_59_ = v_reuseFailAlloc_60_;
goto v_reusejp_58_;
}
v_reusejp_58_:
{
return v___x_59_;
}
}
}
else
{
lean_dec(v___x_49_);
lean_dec(v___x_48_);
return v___x_51_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg___lam__0___boxed(lean_object* v___x_62_, lean_object* v___x_63_, lean_object* v_m_64_, lean_object* v_cfg_65_, lean_object* v___y_66_, lean_object* v___y_67_, lean_object* v___y_68_, lean_object* v___y_69_, lean_object* v___y_70_, lean_object* v___y_71_, lean_object* v___y_72_){
_start:
{
uint8_t v___y_4823__boxed_73_; lean_object* v_res_74_; 
v___y_4823__boxed_73_ = lean_unbox(v___y_66_);
v_res_74_ = l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg___lam__0(v___x_62_, v___x_63_, v_m_64_, v_cfg_65_, v___y_4823__boxed_73_, v___y_67_, v___y_68_, v___y_69_, v___y_70_, v___y_71_);
lean_dec(v___y_71_);
lean_dec_ref(v___y_70_);
lean_dec(v___y_69_);
lean_dec_ref(v___y_68_);
lean_dec(v___y_67_);
return v_res_74_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg___closed__0(void){
_start:
{
lean_object* v___x_75_; lean_object* v___x_76_; lean_object* v___x_77_; 
v___x_75_ = lean_box(0);
v___x_76_ = lean_unsigned_to_nat(16u);
v___x_77_ = lean_mk_array(v___x_76_, v___x_75_);
return v___x_77_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg___closed__1(void){
_start:
{
lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; 
v___x_78_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg___closed__0, &l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg___closed__0_once, _init_l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg___closed__0);
v___x_79_ = lean_unsigned_to_nat(0u);
v___x_80_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_80_, 0, v___x_79_);
lean_ctor_set(v___x_80_, 1, v___x_78_);
return v___x_80_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg___closed__2(void){
_start:
{
lean_object* v___x_81_; lean_object* v___x_82_; 
v___x_81_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg___closed__1, &l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg___closed__1_once, _init_l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg___closed__1);
v___x_82_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_82_, 0, v___x_81_);
lean_ctor_set(v___x_82_, 1, v___x_81_);
return v___x_82_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg(lean_object* v_m_83_, lean_object* v_cfg_84_, lean_object* v_a_85_, lean_object* v_a_86_, lean_object* v_a_87_, lean_object* v_a_88_){
_start:
{
lean_object* v___x_90_; lean_object* v___f_91_; uint8_t v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; 
v___x_90_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg___closed__1, &l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg___closed__1_once, _init_l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg___closed__1);
v___f_91_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg___lam__0___boxed), 11, 4);
lean_closure_set(v___f_91_, 0, v___x_90_);
lean_closure_set(v___f_91_, 1, v___x_90_);
lean_closure_set(v___f_91_, 2, v_m_83_);
lean_closure_set(v___f_91_, 3, v_cfg_84_);
v___x_92_ = 3;
v___x_93_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg___closed__2, &l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg___closed__2_once, _init_l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg___closed__2);
v___x_94_ = l_Lean_Meta_Canonicalizer_CanonM_run_x27___redArg(v___f_91_, v___x_92_, v___x_93_, v_a_85_, v_a_86_, v_a_87_, v_a_88_);
return v___x_94_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg___boxed(lean_object* v_m_95_, lean_object* v_cfg_96_, lean_object* v_a_97_, lean_object* v_a_98_, lean_object* v_a_99_, lean_object* v_a_100_, lean_object* v_a_101_){
_start:
{
lean_object* v_res_102_; 
v_res_102_ = l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg(v_m_95_, v_cfg_96_, v_a_97_, v_a_98_, v_a_99_, v_a_100_);
lean_dec(v_a_100_);
lean_dec_ref(v_a_99_);
lean_dec(v_a_98_);
lean_dec_ref(v_a_97_);
return v_res_102_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_OmegaM_run(lean_object* v_00_u03b1_103_, lean_object* v_m_104_, lean_object* v_cfg_105_, lean_object* v_a_106_, lean_object* v_a_107_, lean_object* v_a_108_, lean_object* v_a_109_){
_start:
{
lean_object* v___x_111_; 
v___x_111_ = l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg(v_m_104_, v_cfg_105_, v_a_106_, v_a_107_, v_a_108_, v_a_109_);
return v___x_111_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_OmegaM_run___boxed(lean_object* v_00_u03b1_112_, lean_object* v_m_113_, lean_object* v_cfg_114_, lean_object* v_a_115_, lean_object* v_a_116_, lean_object* v_a_117_, lean_object* v_a_118_, lean_object* v_a_119_){
_start:
{
lean_object* v_res_120_; 
v_res_120_ = l_Lean_Elab_Tactic_Omega_OmegaM_run(v_00_u03b1_112_, v_m_113_, v_cfg_114_, v_a_115_, v_a_116_, v_a_117_, v_a_118_);
lean_dec(v_a_118_);
lean_dec_ref(v_a_117_);
lean_dec(v_a_116_);
lean_dec_ref(v_a_115_);
return v_res_120_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_cfg___redArg(lean_object* v_a_121_){
_start:
{
lean_object* v___x_123_; 
lean_inc_ref(v_a_121_);
v___x_123_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_123_, 0, v_a_121_);
return v___x_123_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_cfg___redArg___boxed(lean_object* v_a_124_, lean_object* v_a_125_){
_start:
{
lean_object* v_res_126_; 
v_res_126_ = l_Lean_Elab_Tactic_Omega_cfg___redArg(v_a_124_);
lean_dec_ref(v_a_124_);
return v_res_126_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_cfg(lean_object* v_a_127_, lean_object* v_a_128_, lean_object* v_a_129_, uint8_t v_a_130_, lean_object* v_a_131_, lean_object* v_a_132_, lean_object* v_a_133_, lean_object* v_a_134_, lean_object* v_a_135_){
_start:
{
lean_object* v___x_137_; 
lean_inc_ref(v_a_129_);
v___x_137_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_137_, 0, v_a_129_);
return v___x_137_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_cfg___boxed(lean_object* v_a_138_, lean_object* v_a_139_, lean_object* v_a_140_, lean_object* v_a_141_, lean_object* v_a_142_, lean_object* v_a_143_, lean_object* v_a_144_, lean_object* v_a_145_, lean_object* v_a_146_, lean_object* v_a_147_){
_start:
{
uint8_t v_a_boxed_148_; lean_object* v_res_149_; 
v_a_boxed_148_ = lean_unbox(v_a_141_);
v_res_149_ = l_Lean_Elab_Tactic_Omega_cfg(v_a_138_, v_a_139_, v_a_140_, v_a_boxed_148_, v_a_142_, v_a_143_, v_a_144_, v_a_145_, v_a_146_);
lean_dec(v_a_146_);
lean_dec_ref(v_a_145_);
lean_dec(v_a_144_);
lean_dec_ref(v_a_143_);
lean_dec(v_a_142_);
lean_dec_ref(v_a_140_);
lean_dec(v_a_139_);
lean_dec(v_a_138_);
return v_res_149_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1___redArg___lam__0(lean_object* v_x1_150_, lean_object* v_x2_151_){
_start:
{
lean_object* v_snd_152_; lean_object* v_snd_153_; uint8_t v___x_154_; 
v_snd_152_ = lean_ctor_get(v_x1_150_, 1);
v_snd_153_ = lean_ctor_get(v_x2_151_, 1);
v___x_154_ = lean_nat_dec_lt(v_snd_152_, v_snd_153_);
return v___x_154_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1___redArg___lam__0___boxed(lean_object* v_x1_155_, lean_object* v_x2_156_){
_start:
{
uint8_t v_res_157_; lean_object* v_r_158_; 
v_res_157_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1___redArg___lam__0(v_x1_155_, v_x2_156_);
lean_dec_ref(v_x2_156_);
lean_dec_ref(v_x1_155_);
v_r_158_ = lean_box(v_res_157_);
return v_r_158_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1___redArg(lean_object* v_as_160_, lean_object* v_lo_161_, lean_object* v_hi_162_){
_start:
{
uint8_t v___x_163_; 
v___x_163_ = lean_nat_dec_lt(v_lo_161_, v_hi_162_);
if (v___x_163_ == 0)
{
lean_dec(v_lo_161_);
return v_as_160_;
}
else
{
lean_object* v___f_164_; lean_object* v___x_165_; lean_object* v_fst_166_; lean_object* v_snd_167_; uint8_t v___x_168_; 
v___f_164_ = ((lean_object*)(l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1___redArg___closed__0));
lean_inc(v_lo_161_);
v___x_165_ = l_Array_qpartition___redArg(v_as_160_, v___f_164_, v_lo_161_, v_hi_162_);
v_fst_166_ = lean_ctor_get(v___x_165_, 0);
lean_inc(v_fst_166_);
v_snd_167_ = lean_ctor_get(v___x_165_, 1);
lean_inc(v_snd_167_);
lean_dec_ref(v___x_165_);
v___x_168_ = lean_nat_dec_le(v_hi_162_, v_fst_166_);
if (v___x_168_ == 0)
{
lean_object* v___x_169_; lean_object* v___x_170_; lean_object* v___x_171_; 
v___x_169_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1___redArg(v_snd_167_, v_lo_161_, v_fst_166_);
v___x_170_ = lean_unsigned_to_nat(1u);
v___x_171_ = lean_nat_add(v_fst_166_, v___x_170_);
lean_dec(v_fst_166_);
v_as_160_ = v___x_169_;
v_lo_161_ = v___x_171_;
goto _start;
}
else
{
lean_dec(v_fst_166_);
lean_dec(v_lo_161_);
return v_snd_167_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1___redArg___boxed(lean_object* v_as_173_, lean_object* v_lo_174_, lean_object* v_hi_175_){
_start:
{
lean_object* v_res_176_; 
v_res_176_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1___redArg(v_as_173_, v_lo_174_, v_hi_175_);
lean_dec(v_hi_175_);
return v_res_176_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Elab_Tactic_Omega_atoms_spec__2(lean_object* v_x_177_, lean_object* v_x_178_){
_start:
{
if (lean_obj_tag(v_x_178_) == 0)
{
return v_x_177_;
}
else
{
lean_object* v_key_179_; lean_object* v_value_180_; lean_object* v_tail_181_; lean_object* v___x_182_; lean_object* v___x_183_; 
v_key_179_ = lean_ctor_get(v_x_178_, 0);
v_value_180_ = lean_ctor_get(v_x_178_, 1);
v_tail_181_ = lean_ctor_get(v_x_178_, 2);
lean_inc(v_value_180_);
lean_inc(v_key_179_);
v___x_182_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_182_, 0, v_key_179_);
lean_ctor_set(v___x_182_, 1, v_value_180_);
v___x_183_ = lean_array_push(v_x_177_, v___x_182_);
v_x_177_ = v___x_183_;
v_x_178_ = v_tail_181_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Elab_Tactic_Omega_atoms_spec__2___boxed(lean_object* v_x_185_, lean_object* v_x_186_){
_start:
{
lean_object* v_res_187_; 
v_res_187_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Elab_Tactic_Omega_atoms_spec__2(v_x_185_, v_x_186_);
lean_dec(v_x_186_);
return v_res_187_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Omega_atoms_spec__3(lean_object* v_as_188_, size_t v_i_189_, size_t v_stop_190_, lean_object* v_b_191_){
_start:
{
uint8_t v___x_192_; 
v___x_192_ = lean_usize_dec_eq(v_i_189_, v_stop_190_);
if (v___x_192_ == 0)
{
lean_object* v___x_193_; lean_object* v___x_194_; size_t v___x_195_; size_t v___x_196_; 
v___x_193_ = lean_array_uget_borrowed(v_as_188_, v_i_189_);
v___x_194_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Elab_Tactic_Omega_atoms_spec__2(v_b_191_, v___x_193_);
v___x_195_ = ((size_t)1ULL);
v___x_196_ = lean_usize_add(v_i_189_, v___x_195_);
v_i_189_ = v___x_196_;
v_b_191_ = v___x_194_;
goto _start;
}
else
{
return v_b_191_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Omega_atoms_spec__3___boxed(lean_object* v_as_198_, lean_object* v_i_199_, lean_object* v_stop_200_, lean_object* v_b_201_){
_start:
{
size_t v_i_boxed_202_; size_t v_stop_boxed_203_; lean_object* v_res_204_; 
v_i_boxed_202_ = lean_unbox_usize(v_i_199_);
lean_dec(v_i_199_);
v_stop_boxed_203_ = lean_unbox_usize(v_stop_200_);
lean_dec(v_stop_200_);
v_res_204_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Omega_atoms_spec__3(v_as_198_, v_i_boxed_202_, v_stop_boxed_203_, v_b_201_);
lean_dec_ref(v_as_198_);
return v_res_204_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Omega_atoms_spec__0(size_t v_sz_205_, size_t v_i_206_, lean_object* v_bs_207_){
_start:
{
uint8_t v___x_208_; 
v___x_208_ = lean_usize_dec_lt(v_i_206_, v_sz_205_);
if (v___x_208_ == 0)
{
return v_bs_207_;
}
else
{
lean_object* v_v_209_; lean_object* v_fst_210_; lean_object* v___x_211_; lean_object* v_bs_x27_212_; size_t v___x_213_; size_t v___x_214_; lean_object* v___x_215_; 
v_v_209_ = lean_array_uget_borrowed(v_bs_207_, v_i_206_);
v_fst_210_ = lean_ctor_get(v_v_209_, 0);
lean_inc(v_fst_210_);
v___x_211_ = lean_unsigned_to_nat(0u);
v_bs_x27_212_ = lean_array_uset(v_bs_207_, v_i_206_, v___x_211_);
v___x_213_ = ((size_t)1ULL);
v___x_214_ = lean_usize_add(v_i_206_, v___x_213_);
v___x_215_ = lean_array_uset(v_bs_x27_212_, v_i_206_, v_fst_210_);
v_i_206_ = v___x_214_;
v_bs_207_ = v___x_215_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Omega_atoms_spec__0___boxed(lean_object* v_sz_217_, lean_object* v_i_218_, lean_object* v_bs_219_){
_start:
{
size_t v_sz_boxed_220_; size_t v_i_boxed_221_; lean_object* v_res_222_; 
v_sz_boxed_220_ = lean_unbox_usize(v_sz_217_);
lean_dec(v_sz_217_);
v_i_boxed_221_ = lean_unbox_usize(v_i_218_);
lean_dec(v_i_218_);
v_res_222_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Omega_atoms_spec__0(v_sz_boxed_220_, v_i_boxed_221_, v_bs_219_);
return v_res_222_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_atoms___redArg(lean_object* v_a_223_){
_start:
{
lean_object* v___x_225_; lean_object* v___y_227_; lean_object* v___y_233_; lean_object* v___y_234_; lean_object* v___y_235_; lean_object* v___y_236_; lean_object* v___y_239_; lean_object* v___y_240_; lean_object* v___y_241_; lean_object* v___y_242_; lean_object* v___y_245_; lean_object* v_size_252_; lean_object* v_buckets_253_; lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; uint8_t v___x_257_; 
v___x_225_ = lean_st_ref_get(v_a_223_);
v_size_252_ = lean_ctor_get(v___x_225_, 0);
lean_inc(v_size_252_);
v_buckets_253_ = lean_ctor_get(v___x_225_, 1);
lean_inc_ref(v_buckets_253_);
lean_dec(v___x_225_);
v___x_254_ = lean_mk_empty_array_with_capacity(v_size_252_);
lean_dec(v_size_252_);
v___x_255_ = lean_unsigned_to_nat(0u);
v___x_256_ = lean_array_get_size(v_buckets_253_);
v___x_257_ = lean_nat_dec_lt(v___x_255_, v___x_256_);
if (v___x_257_ == 0)
{
lean_dec_ref(v_buckets_253_);
v___y_245_ = v___x_254_;
goto v___jp_244_;
}
else
{
uint8_t v___x_258_; 
v___x_258_ = lean_nat_dec_le(v___x_256_, v___x_256_);
if (v___x_258_ == 0)
{
if (v___x_257_ == 0)
{
lean_dec_ref(v_buckets_253_);
v___y_245_ = v___x_254_;
goto v___jp_244_;
}
else
{
size_t v___x_259_; size_t v___x_260_; lean_object* v___x_261_; 
v___x_259_ = ((size_t)0ULL);
v___x_260_ = lean_usize_of_nat(v___x_256_);
v___x_261_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Omega_atoms_spec__3(v_buckets_253_, v___x_259_, v___x_260_, v___x_254_);
lean_dec_ref(v_buckets_253_);
v___y_245_ = v___x_261_;
goto v___jp_244_;
}
}
else
{
size_t v___x_262_; size_t v___x_263_; lean_object* v___x_264_; 
v___x_262_ = ((size_t)0ULL);
v___x_263_ = lean_usize_of_nat(v___x_256_);
v___x_264_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Omega_atoms_spec__3(v_buckets_253_, v___x_262_, v___x_263_, v___x_254_);
lean_dec_ref(v_buckets_253_);
v___y_245_ = v___x_264_;
goto v___jp_244_;
}
}
v___jp_226_:
{
size_t v_sz_228_; size_t v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; 
v_sz_228_ = lean_array_size(v___y_227_);
v___x_229_ = ((size_t)0ULL);
v___x_230_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Omega_atoms_spec__0(v_sz_228_, v___x_229_, v___y_227_);
v___x_231_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_231_, 0, v___x_230_);
return v___x_231_;
}
v___jp_232_:
{
lean_object* v___x_237_; 
lean_dec(v___y_234_);
v___x_237_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1___redArg(v___y_235_, v___y_233_, v___y_236_);
lean_dec(v___y_236_);
v___y_227_ = v___x_237_;
goto v___jp_226_;
}
v___jp_238_:
{
uint8_t v___x_243_; 
v___x_243_ = lean_nat_dec_le(v___y_242_, v___y_239_);
if (v___x_243_ == 0)
{
lean_dec(v___y_239_);
lean_inc(v___y_242_);
v___y_233_ = v___y_242_;
v___y_234_ = v___y_240_;
v___y_235_ = v___y_241_;
v___y_236_ = v___y_242_;
goto v___jp_232_;
}
else
{
v___y_233_ = v___y_242_;
v___y_234_ = v___y_240_;
v___y_235_ = v___y_241_;
v___y_236_ = v___y_239_;
goto v___jp_232_;
}
}
v___jp_244_:
{
lean_object* v___x_246_; lean_object* v___x_247_; uint8_t v___x_248_; 
v___x_246_ = lean_array_get_size(v___y_245_);
v___x_247_ = lean_unsigned_to_nat(0u);
v___x_248_ = lean_nat_dec_eq(v___x_246_, v___x_247_);
if (v___x_248_ == 0)
{
lean_object* v___x_249_; lean_object* v___x_250_; uint8_t v___x_251_; 
v___x_249_ = lean_unsigned_to_nat(1u);
v___x_250_ = lean_nat_sub(v___x_246_, v___x_249_);
v___x_251_ = lean_nat_dec_le(v___x_247_, v___x_250_);
if (v___x_251_ == 0)
{
lean_inc(v___x_250_);
v___y_239_ = v___x_250_;
v___y_240_ = v___x_246_;
v___y_241_ = v___y_245_;
v___y_242_ = v___x_250_;
goto v___jp_238_;
}
else
{
v___y_239_ = v___x_250_;
v___y_240_ = v___x_246_;
v___y_241_ = v___y_245_;
v___y_242_ = v___x_247_;
goto v___jp_238_;
}
}
else
{
v___y_227_ = v___y_245_;
goto v___jp_226_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_atoms___redArg___boxed(lean_object* v_a_265_, lean_object* v_a_266_){
_start:
{
lean_object* v_res_267_; 
v_res_267_ = l_Lean_Elab_Tactic_Omega_atoms___redArg(v_a_265_);
lean_dec(v_a_265_);
return v_res_267_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_atoms(lean_object* v_a_268_, lean_object* v_a_269_, lean_object* v_a_270_, uint8_t v_a_271_, lean_object* v_a_272_, lean_object* v_a_273_, lean_object* v_a_274_, lean_object* v_a_275_, lean_object* v_a_276_){
_start:
{
lean_object* v___x_278_; 
v___x_278_ = l_Lean_Elab_Tactic_Omega_atoms___redArg(v_a_269_);
return v___x_278_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_atoms___boxed(lean_object* v_a_279_, lean_object* v_a_280_, lean_object* v_a_281_, lean_object* v_a_282_, lean_object* v_a_283_, lean_object* v_a_284_, lean_object* v_a_285_, lean_object* v_a_286_, lean_object* v_a_287_, lean_object* v_a_288_){
_start:
{
uint8_t v_a_boxed_289_; lean_object* v_res_290_; 
v_a_boxed_289_ = lean_unbox(v_a_282_);
v_res_290_ = l_Lean_Elab_Tactic_Omega_atoms(v_a_279_, v_a_280_, v_a_281_, v_a_boxed_289_, v_a_283_, v_a_284_, v_a_285_, v_a_286_, v_a_287_);
lean_dec(v_a_287_);
lean_dec_ref(v_a_286_);
lean_dec(v_a_285_);
lean_dec_ref(v_a_284_);
lean_dec(v_a_283_);
lean_dec_ref(v_a_281_);
lean_dec(v_a_280_);
lean_dec(v_a_279_);
return v_res_290_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1(lean_object* v_n_291_, lean_object* v_as_292_, lean_object* v_lo_293_, lean_object* v_hi_294_, lean_object* v_w_295_, lean_object* v_hlo_296_, lean_object* v_hhi_297_){
_start:
{
lean_object* v___x_298_; 
v___x_298_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1___redArg(v_as_292_, v_lo_293_, v_hi_294_);
return v___x_298_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1___boxed(lean_object* v_n_299_, lean_object* v_as_300_, lean_object* v_lo_301_, lean_object* v_hi_302_, lean_object* v_w_303_, lean_object* v_hlo_304_, lean_object* v_hhi_305_){
_start:
{
lean_object* v_res_306_; 
v_res_306_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1(v_n_299_, v_as_300_, v_lo_301_, v_hi_302_, v_w_303_, v_hlo_304_, v_hhi_305_);
lean_dec(v_hi_302_);
lean_dec(v_n_299_);
return v_res_306_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__2(void){
_start:
{
lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; 
v___x_310_ = lean_box(0);
v___x_311_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__1));
v___x_312_ = l_Lean_Expr_const___override(v___x_311_, v___x_310_);
return v___x_312_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_atomsList___redArg(lean_object* v_a_313_, lean_object* v_a_314_, lean_object* v_a_315_, lean_object* v_a_316_, lean_object* v_a_317_){
_start:
{
lean_object* v___x_319_; lean_object* v_a_320_; lean_object* v___x_321_; lean_object* v___x_322_; lean_object* v___x_323_; 
v___x_319_ = l_Lean_Elab_Tactic_Omega_atoms___redArg(v_a_313_);
v_a_320_ = lean_ctor_get(v___x_319_, 0);
lean_inc(v_a_320_);
lean_dec_ref(v___x_319_);
v___x_321_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__2, &l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__2_once, _init_l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__2);
v___x_322_ = lean_array_to_list(v_a_320_);
v___x_323_ = l_Lean_Meta_mkListLit(v___x_321_, v___x_322_, v_a_314_, v_a_315_, v_a_316_, v_a_317_);
return v___x_323_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_atomsList___redArg___boxed(lean_object* v_a_324_, lean_object* v_a_325_, lean_object* v_a_326_, lean_object* v_a_327_, lean_object* v_a_328_, lean_object* v_a_329_){
_start:
{
lean_object* v_res_330_; 
v_res_330_ = l_Lean_Elab_Tactic_Omega_atomsList___redArg(v_a_324_, v_a_325_, v_a_326_, v_a_327_, v_a_328_);
lean_dec(v_a_328_);
lean_dec_ref(v_a_327_);
lean_dec(v_a_326_);
lean_dec_ref(v_a_325_);
lean_dec(v_a_324_);
return v_res_330_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_atomsList(lean_object* v_a_331_, lean_object* v_a_332_, lean_object* v_a_333_, uint8_t v_a_334_, lean_object* v_a_335_, lean_object* v_a_336_, lean_object* v_a_337_, lean_object* v_a_338_, lean_object* v_a_339_){
_start:
{
lean_object* v___x_341_; 
v___x_341_ = l_Lean_Elab_Tactic_Omega_atomsList___redArg(v_a_332_, v_a_336_, v_a_337_, v_a_338_, v_a_339_);
return v___x_341_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_atomsList___boxed(lean_object* v_a_342_, lean_object* v_a_343_, lean_object* v_a_344_, lean_object* v_a_345_, lean_object* v_a_346_, lean_object* v_a_347_, lean_object* v_a_348_, lean_object* v_a_349_, lean_object* v_a_350_, lean_object* v_a_351_){
_start:
{
uint8_t v_a_boxed_352_; lean_object* v_res_353_; 
v_a_boxed_352_ = lean_unbox(v_a_345_);
v_res_353_ = l_Lean_Elab_Tactic_Omega_atomsList(v_a_342_, v_a_343_, v_a_344_, v_a_boxed_352_, v_a_346_, v_a_347_, v_a_348_, v_a_349_, v_a_350_);
lean_dec(v_a_350_);
lean_dec_ref(v_a_349_);
lean_dec(v_a_348_);
lean_dec_ref(v_a_347_);
lean_dec(v_a_346_);
lean_dec_ref(v_a_344_);
lean_dec(v_a_343_);
lean_dec(v_a_342_);
return v_res_353_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__5(void){
_start:
{
lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v___x_365_; 
v___x_363_ = lean_box(0);
v___x_364_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__4));
v___x_365_ = l_Lean_Expr_const___override(v___x_364_, v___x_363_);
return v___x_365_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg(lean_object* v_a_366_, lean_object* v_a_367_, lean_object* v_a_368_, lean_object* v_a_369_, lean_object* v_a_370_){
_start:
{
lean_object* v___x_372_; 
v___x_372_ = l_Lean_Elab_Tactic_Omega_atomsList___redArg(v_a_366_, v_a_367_, v_a_368_, v_a_369_, v_a_370_);
if (lean_obj_tag(v___x_372_) == 0)
{
lean_object* v_a_373_; lean_object* v___x_375_; uint8_t v_isShared_376_; uint8_t v_isSharedCheck_382_; 
v_a_373_ = lean_ctor_get(v___x_372_, 0);
v_isSharedCheck_382_ = !lean_is_exclusive(v___x_372_);
if (v_isSharedCheck_382_ == 0)
{
v___x_375_ = v___x_372_;
v_isShared_376_ = v_isSharedCheck_382_;
goto v_resetjp_374_;
}
else
{
lean_inc(v_a_373_);
lean_dec(v___x_372_);
v___x_375_ = lean_box(0);
v_isShared_376_ = v_isSharedCheck_382_;
goto v_resetjp_374_;
}
v_resetjp_374_:
{
lean_object* v___x_377_; lean_object* v___x_378_; lean_object* v___x_380_; 
v___x_377_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__5, &l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__5_once, _init_l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__5);
v___x_378_ = l_Lean_Expr_app___override(v___x_377_, v_a_373_);
if (v_isShared_376_ == 0)
{
lean_ctor_set(v___x_375_, 0, v___x_378_);
v___x_380_ = v___x_375_;
goto v_reusejp_379_;
}
else
{
lean_object* v_reuseFailAlloc_381_; 
v_reuseFailAlloc_381_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_381_, 0, v___x_378_);
v___x_380_ = v_reuseFailAlloc_381_;
goto v_reusejp_379_;
}
v_reusejp_379_:
{
return v___x_380_;
}
}
}
else
{
return v___x_372_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___boxed(lean_object* v_a_383_, lean_object* v_a_384_, lean_object* v_a_385_, lean_object* v_a_386_, lean_object* v_a_387_, lean_object* v_a_388_){
_start:
{
lean_object* v_res_389_; 
v_res_389_ = l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg(v_a_383_, v_a_384_, v_a_385_, v_a_386_, v_a_387_);
lean_dec(v_a_387_);
lean_dec_ref(v_a_386_);
lean_dec(v_a_385_);
lean_dec_ref(v_a_384_);
lean_dec(v_a_383_);
return v_res_389_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_atomsCoeffs(lean_object* v_a_390_, lean_object* v_a_391_, lean_object* v_a_392_, uint8_t v_a_393_, lean_object* v_a_394_, lean_object* v_a_395_, lean_object* v_a_396_, lean_object* v_a_397_, lean_object* v_a_398_){
_start:
{
lean_object* v___x_400_; 
v___x_400_ = l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg(v_a_391_, v_a_395_, v_a_396_, v_a_397_, v_a_398_);
return v___x_400_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_atomsCoeffs___boxed(lean_object* v_a_401_, lean_object* v_a_402_, lean_object* v_a_403_, lean_object* v_a_404_, lean_object* v_a_405_, lean_object* v_a_406_, lean_object* v_a_407_, lean_object* v_a_408_, lean_object* v_a_409_, lean_object* v_a_410_){
_start:
{
uint8_t v_a_boxed_411_; lean_object* v_res_412_; 
v_a_boxed_411_ = lean_unbox(v_a_404_);
v_res_412_ = l_Lean_Elab_Tactic_Omega_atomsCoeffs(v_a_401_, v_a_402_, v_a_403_, v_a_boxed_411_, v_a_405_, v_a_406_, v_a_407_, v_a_408_, v_a_409_);
lean_dec(v_a_409_);
lean_dec_ref(v_a_408_);
lean_dec(v_a_407_);
lean_dec_ref(v_a_406_);
lean_dec(v_a_405_);
lean_dec_ref(v_a_403_);
lean_dec(v_a_402_);
lean_dec(v_a_401_);
return v_res_412_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_commitWhen___redArg(lean_object* v_t_413_, lean_object* v_a_414_, lean_object* v_a_415_, lean_object* v_a_416_, uint8_t v_a_417_, lean_object* v_a_418_, lean_object* v_a_419_, lean_object* v_a_420_, lean_object* v_a_421_, lean_object* v_a_422_){
_start:
{
lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v___x_426_; lean_object* v___x_427_; 
v___x_424_ = lean_st_ref_get(v_a_415_);
v___x_425_ = lean_st_ref_get(v_a_414_);
v___x_426_ = lean_box(v_a_417_);
lean_inc(v_a_422_);
lean_inc_ref(v_a_421_);
lean_inc(v_a_420_);
lean_inc_ref(v_a_419_);
lean_inc(v_a_418_);
lean_inc_ref(v_a_416_);
lean_inc(v_a_415_);
lean_inc(v_a_414_);
v___x_427_ = lean_apply_10(v_t_413_, v_a_414_, v_a_415_, v_a_416_, v___x_426_, v_a_418_, v_a_419_, v_a_420_, v_a_421_, v_a_422_, lean_box(0));
if (lean_obj_tag(v___x_427_) == 0)
{
lean_object* v_a_428_; lean_object* v___x_430_; uint8_t v_isShared_431_; uint8_t v_isSharedCheck_446_; 
v_a_428_ = lean_ctor_get(v___x_427_, 0);
v_isSharedCheck_446_ = !lean_is_exclusive(v___x_427_);
if (v_isSharedCheck_446_ == 0)
{
v___x_430_ = v___x_427_;
v_isShared_431_ = v_isSharedCheck_446_;
goto v_resetjp_429_;
}
else
{
lean_inc(v_a_428_);
lean_dec(v___x_427_);
v___x_430_ = lean_box(0);
v_isShared_431_ = v_isSharedCheck_446_;
goto v_resetjp_429_;
}
v_resetjp_429_:
{
lean_object* v_snd_432_; uint8_t v___x_433_; 
v_snd_432_ = lean_ctor_get(v_a_428_, 1);
v___x_433_ = lean_unbox(v_snd_432_);
if (v___x_433_ == 0)
{
lean_object* v_fst_434_; lean_object* v___x_435_; lean_object* v___x_436_; lean_object* v___x_437_; lean_object* v___x_438_; lean_object* v___x_440_; 
v_fst_434_ = lean_ctor_get(v_a_428_, 0);
lean_inc(v_fst_434_);
lean_dec(v_a_428_);
v___x_435_ = lean_st_ref_take(v_a_415_);
lean_dec(v___x_435_);
v___x_436_ = lean_st_ref_set(v_a_415_, v___x_424_);
v___x_437_ = lean_st_ref_take(v_a_414_);
lean_dec(v___x_437_);
v___x_438_ = lean_st_ref_set(v_a_414_, v___x_425_);
if (v_isShared_431_ == 0)
{
lean_ctor_set(v___x_430_, 0, v_fst_434_);
v___x_440_ = v___x_430_;
goto v_reusejp_439_;
}
else
{
lean_object* v_reuseFailAlloc_441_; 
v_reuseFailAlloc_441_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_441_, 0, v_fst_434_);
v___x_440_ = v_reuseFailAlloc_441_;
goto v_reusejp_439_;
}
v_reusejp_439_:
{
return v___x_440_;
}
}
else
{
lean_object* v_fst_442_; lean_object* v___x_444_; 
lean_dec(v___x_425_);
lean_dec(v___x_424_);
v_fst_442_ = lean_ctor_get(v_a_428_, 0);
lean_inc(v_fst_442_);
lean_dec(v_a_428_);
if (v_isShared_431_ == 0)
{
lean_ctor_set(v___x_430_, 0, v_fst_442_);
v___x_444_ = v___x_430_;
goto v_reusejp_443_;
}
else
{
lean_object* v_reuseFailAlloc_445_; 
v_reuseFailAlloc_445_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_445_, 0, v_fst_442_);
v___x_444_ = v_reuseFailAlloc_445_;
goto v_reusejp_443_;
}
v_reusejp_443_:
{
return v___x_444_;
}
}
}
}
else
{
lean_object* v_a_447_; lean_object* v___x_449_; uint8_t v_isShared_450_; uint8_t v_isSharedCheck_454_; 
lean_dec(v___x_425_);
lean_dec(v___x_424_);
v_a_447_ = lean_ctor_get(v___x_427_, 0);
v_isSharedCheck_454_ = !lean_is_exclusive(v___x_427_);
if (v_isSharedCheck_454_ == 0)
{
v___x_449_ = v___x_427_;
v_isShared_450_ = v_isSharedCheck_454_;
goto v_resetjp_448_;
}
else
{
lean_inc(v_a_447_);
lean_dec(v___x_427_);
v___x_449_ = lean_box(0);
v_isShared_450_ = v_isSharedCheck_454_;
goto v_resetjp_448_;
}
v_resetjp_448_:
{
lean_object* v___x_452_; 
if (v_isShared_450_ == 0)
{
v___x_452_ = v___x_449_;
goto v_reusejp_451_;
}
else
{
lean_object* v_reuseFailAlloc_453_; 
v_reuseFailAlloc_453_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_453_, 0, v_a_447_);
v___x_452_ = v_reuseFailAlloc_453_;
goto v_reusejp_451_;
}
v_reusejp_451_:
{
return v___x_452_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_commitWhen___redArg___boxed(lean_object* v_t_455_, lean_object* v_a_456_, lean_object* v_a_457_, lean_object* v_a_458_, lean_object* v_a_459_, lean_object* v_a_460_, lean_object* v_a_461_, lean_object* v_a_462_, lean_object* v_a_463_, lean_object* v_a_464_, lean_object* v_a_465_){
_start:
{
uint8_t v_a_boxed_466_; lean_object* v_res_467_; 
v_a_boxed_466_ = lean_unbox(v_a_459_);
v_res_467_ = l_Lean_Elab_Tactic_Omega_commitWhen___redArg(v_t_455_, v_a_456_, v_a_457_, v_a_458_, v_a_boxed_466_, v_a_460_, v_a_461_, v_a_462_, v_a_463_, v_a_464_);
lean_dec(v_a_464_);
lean_dec_ref(v_a_463_);
lean_dec(v_a_462_);
lean_dec_ref(v_a_461_);
lean_dec(v_a_460_);
lean_dec_ref(v_a_458_);
lean_dec(v_a_457_);
lean_dec(v_a_456_);
return v_res_467_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_commitWhen(lean_object* v_00_u03b1_468_, lean_object* v_t_469_, lean_object* v_a_470_, lean_object* v_a_471_, lean_object* v_a_472_, uint8_t v_a_473_, lean_object* v_a_474_, lean_object* v_a_475_, lean_object* v_a_476_, lean_object* v_a_477_, lean_object* v_a_478_){
_start:
{
lean_object* v___x_480_; 
v___x_480_ = l_Lean_Elab_Tactic_Omega_commitWhen___redArg(v_t_469_, v_a_470_, v_a_471_, v_a_472_, v_a_473_, v_a_474_, v_a_475_, v_a_476_, v_a_477_, v_a_478_);
return v___x_480_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_commitWhen___boxed(lean_object* v_00_u03b1_481_, lean_object* v_t_482_, lean_object* v_a_483_, lean_object* v_a_484_, lean_object* v_a_485_, lean_object* v_a_486_, lean_object* v_a_487_, lean_object* v_a_488_, lean_object* v_a_489_, lean_object* v_a_490_, lean_object* v_a_491_, lean_object* v_a_492_){
_start:
{
uint8_t v_a_boxed_493_; lean_object* v_res_494_; 
v_a_boxed_493_ = lean_unbox(v_a_486_);
v_res_494_ = l_Lean_Elab_Tactic_Omega_commitWhen(v_00_u03b1_481_, v_t_482_, v_a_483_, v_a_484_, v_a_485_, v_a_boxed_493_, v_a_487_, v_a_488_, v_a_489_, v_a_490_, v_a_491_);
lean_dec(v_a_491_);
lean_dec_ref(v_a_490_);
lean_dec(v_a_489_);
lean_dec_ref(v_a_488_);
lean_dec(v_a_487_);
lean_dec_ref(v_a_485_);
lean_dec(v_a_484_);
lean_dec(v_a_483_);
return v_res_494_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_withoutModifyingState___redArg___lam__0(lean_object* v_t_495_, lean_object* v___y_496_, lean_object* v___y_497_, lean_object* v___y_498_, uint8_t v___y_499_, lean_object* v___y_500_, lean_object* v___y_501_, lean_object* v___y_502_, lean_object* v___y_503_, lean_object* v___y_504_){
_start:
{
lean_object* v___x_506_; lean_object* v___x_507_; 
v___x_506_ = lean_box(v___y_499_);
lean_inc(v___y_504_);
lean_inc_ref(v___y_503_);
lean_inc(v___y_502_);
lean_inc_ref(v___y_501_);
lean_inc(v___y_500_);
lean_inc_ref(v___y_498_);
lean_inc(v___y_497_);
lean_inc(v___y_496_);
v___x_507_ = lean_apply_10(v_t_495_, v___y_496_, v___y_497_, v___y_498_, v___x_506_, v___y_500_, v___y_501_, v___y_502_, v___y_503_, v___y_504_, lean_box(0));
if (lean_obj_tag(v___x_507_) == 0)
{
lean_object* v_a_508_; lean_object* v___x_510_; uint8_t v_isShared_511_; uint8_t v_isSharedCheck_518_; 
v_a_508_ = lean_ctor_get(v___x_507_, 0);
v_isSharedCheck_518_ = !lean_is_exclusive(v___x_507_);
if (v_isSharedCheck_518_ == 0)
{
v___x_510_ = v___x_507_;
v_isShared_511_ = v_isSharedCheck_518_;
goto v_resetjp_509_;
}
else
{
lean_inc(v_a_508_);
lean_dec(v___x_507_);
v___x_510_ = lean_box(0);
v_isShared_511_ = v_isSharedCheck_518_;
goto v_resetjp_509_;
}
v_resetjp_509_:
{
uint8_t v___x_512_; lean_object* v___x_513_; lean_object* v___x_514_; lean_object* v___x_516_; 
v___x_512_ = 0;
v___x_513_ = lean_box(v___x_512_);
v___x_514_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_514_, 0, v_a_508_);
lean_ctor_set(v___x_514_, 1, v___x_513_);
if (v_isShared_511_ == 0)
{
lean_ctor_set(v___x_510_, 0, v___x_514_);
v___x_516_ = v___x_510_;
goto v_reusejp_515_;
}
else
{
lean_object* v_reuseFailAlloc_517_; 
v_reuseFailAlloc_517_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_517_, 0, v___x_514_);
v___x_516_ = v_reuseFailAlloc_517_;
goto v_reusejp_515_;
}
v_reusejp_515_:
{
return v___x_516_;
}
}
}
else
{
lean_object* v_a_519_; lean_object* v___x_521_; uint8_t v_isShared_522_; uint8_t v_isSharedCheck_526_; 
v_a_519_ = lean_ctor_get(v___x_507_, 0);
v_isSharedCheck_526_ = !lean_is_exclusive(v___x_507_);
if (v_isSharedCheck_526_ == 0)
{
v___x_521_ = v___x_507_;
v_isShared_522_ = v_isSharedCheck_526_;
goto v_resetjp_520_;
}
else
{
lean_inc(v_a_519_);
lean_dec(v___x_507_);
v___x_521_ = lean_box(0);
v_isShared_522_ = v_isSharedCheck_526_;
goto v_resetjp_520_;
}
v_resetjp_520_:
{
lean_object* v___x_524_; 
if (v_isShared_522_ == 0)
{
v___x_524_ = v___x_521_;
goto v_reusejp_523_;
}
else
{
lean_object* v_reuseFailAlloc_525_; 
v_reuseFailAlloc_525_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_525_, 0, v_a_519_);
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
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_withoutModifyingState___redArg___lam__0___boxed(lean_object* v_t_527_, lean_object* v___y_528_, lean_object* v___y_529_, lean_object* v___y_530_, lean_object* v___y_531_, lean_object* v___y_532_, lean_object* v___y_533_, lean_object* v___y_534_, lean_object* v___y_535_, lean_object* v___y_536_, lean_object* v___y_537_){
_start:
{
uint8_t v___y_657__boxed_538_; lean_object* v_res_539_; 
v___y_657__boxed_538_ = lean_unbox(v___y_531_);
v_res_539_ = l_Lean_Elab_Tactic_Omega_withoutModifyingState___redArg___lam__0(v_t_527_, v___y_528_, v___y_529_, v___y_530_, v___y_657__boxed_538_, v___y_532_, v___y_533_, v___y_534_, v___y_535_, v___y_536_);
lean_dec(v___y_536_);
lean_dec_ref(v___y_535_);
lean_dec(v___y_534_);
lean_dec_ref(v___y_533_);
lean_dec(v___y_532_);
lean_dec_ref(v___y_530_);
lean_dec(v___y_529_);
lean_dec(v___y_528_);
return v_res_539_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_withoutModifyingState___redArg(lean_object* v_t_540_, lean_object* v_a_541_, lean_object* v_a_542_, lean_object* v_a_543_, uint8_t v_a_544_, lean_object* v_a_545_, lean_object* v_a_546_, lean_object* v_a_547_, lean_object* v_a_548_, lean_object* v_a_549_){
_start:
{
lean_object* v___f_551_; lean_object* v___x_552_; 
v___f_551_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Omega_withoutModifyingState___redArg___lam__0___boxed), 11, 1);
lean_closure_set(v___f_551_, 0, v_t_540_);
v___x_552_ = l_Lean_Elab_Tactic_Omega_commitWhen___redArg(v___f_551_, v_a_541_, v_a_542_, v_a_543_, v_a_544_, v_a_545_, v_a_546_, v_a_547_, v_a_548_, v_a_549_);
return v___x_552_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_withoutModifyingState___redArg___boxed(lean_object* v_t_553_, lean_object* v_a_554_, lean_object* v_a_555_, lean_object* v_a_556_, lean_object* v_a_557_, lean_object* v_a_558_, lean_object* v_a_559_, lean_object* v_a_560_, lean_object* v_a_561_, lean_object* v_a_562_, lean_object* v_a_563_){
_start:
{
uint8_t v_a_boxed_564_; lean_object* v_res_565_; 
v_a_boxed_564_ = lean_unbox(v_a_557_);
v_res_565_ = l_Lean_Elab_Tactic_Omega_withoutModifyingState___redArg(v_t_553_, v_a_554_, v_a_555_, v_a_556_, v_a_boxed_564_, v_a_558_, v_a_559_, v_a_560_, v_a_561_, v_a_562_);
lean_dec(v_a_562_);
lean_dec_ref(v_a_561_);
lean_dec(v_a_560_);
lean_dec_ref(v_a_559_);
lean_dec(v_a_558_);
lean_dec_ref(v_a_556_);
lean_dec(v_a_555_);
lean_dec(v_a_554_);
return v_res_565_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_withoutModifyingState(lean_object* v_00_u03b1_566_, lean_object* v_t_567_, lean_object* v_a_568_, lean_object* v_a_569_, lean_object* v_a_570_, uint8_t v_a_571_, lean_object* v_a_572_, lean_object* v_a_573_, lean_object* v_a_574_, lean_object* v_a_575_, lean_object* v_a_576_){
_start:
{
lean_object* v___x_578_; 
v___x_578_ = l_Lean_Elab_Tactic_Omega_withoutModifyingState___redArg(v_t_567_, v_a_568_, v_a_569_, v_a_570_, v_a_571_, v_a_572_, v_a_573_, v_a_574_, v_a_575_, v_a_576_);
return v___x_578_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_withoutModifyingState___boxed(lean_object* v_00_u03b1_579_, lean_object* v_t_580_, lean_object* v_a_581_, lean_object* v_a_582_, lean_object* v_a_583_, lean_object* v_a_584_, lean_object* v_a_585_, lean_object* v_a_586_, lean_object* v_a_587_, lean_object* v_a_588_, lean_object* v_a_589_, lean_object* v_a_590_){
_start:
{
uint8_t v_a_boxed_591_; lean_object* v_res_592_; 
v_a_boxed_591_ = lean_unbox(v_a_584_);
v_res_592_ = l_Lean_Elab_Tactic_Omega_withoutModifyingState(v_00_u03b1_579_, v_t_580_, v_a_581_, v_a_582_, v_a_583_, v_a_boxed_591_, v_a_585_, v_a_586_, v_a_587_, v_a_588_, v_a_589_);
lean_dec(v_a_589_);
lean_dec_ref(v_a_588_);
lean_dec(v_a_587_);
lean_dec_ref(v_a_586_);
lean_dec(v_a_585_);
lean_dec_ref(v_a_583_);
lean_dec(v_a_582_);
lean_dec(v_a_581_);
return v_res_592_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_natCast_x3f(lean_object* v_n_595_){
_start:
{
lean_object* v___x_596_; lean_object* v_fst_597_; 
lean_inc_ref(v_n_595_);
v___x_596_ = l_Lean_Expr_getAppFnArgs(v_n_595_);
v_fst_597_ = lean_ctor_get(v___x_596_, 0);
lean_inc(v_fst_597_);
if (lean_obj_tag(v_fst_597_) == 1)
{
lean_object* v_pre_598_; 
v_pre_598_ = lean_ctor_get(v_fst_597_, 0);
lean_inc(v_pre_598_);
if (lean_obj_tag(v_pre_598_) == 1)
{
lean_object* v_pre_599_; 
v_pre_599_ = lean_ctor_get(v_pre_598_, 0);
if (lean_obj_tag(v_pre_599_) == 0)
{
lean_object* v_snd_600_; lean_object* v_str_601_; lean_object* v_str_602_; lean_object* v___x_603_; uint8_t v___x_604_; 
v_snd_600_ = lean_ctor_get(v___x_596_, 1);
lean_inc(v_snd_600_);
lean_dec_ref(v___x_596_);
v_str_601_ = lean_ctor_get(v_fst_597_, 1);
lean_inc_ref(v_str_601_);
lean_dec_ref(v_fst_597_);
v_str_602_ = lean_ctor_get(v_pre_598_, 1);
lean_inc_ref(v_str_602_);
lean_dec_ref(v_pre_598_);
v___x_603_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_natCast_x3f___closed__0));
v___x_604_ = lean_string_dec_eq(v_str_602_, v___x_603_);
lean_dec_ref(v_str_602_);
if (v___x_604_ == 0)
{
lean_object* v___x_605_; 
lean_dec_ref(v_str_601_);
lean_dec(v_snd_600_);
v___x_605_ = l_Lean_Expr_nat_x3f(v_n_595_);
return v___x_605_;
}
else
{
lean_object* v___x_606_; uint8_t v___x_607_; 
v___x_606_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_natCast_x3f___closed__1));
v___x_607_ = lean_string_dec_eq(v_str_601_, v___x_606_);
lean_dec_ref(v_str_601_);
if (v___x_607_ == 0)
{
lean_object* v___x_608_; 
lean_dec(v_snd_600_);
v___x_608_ = l_Lean_Expr_nat_x3f(v_n_595_);
return v___x_608_;
}
else
{
lean_object* v___x_609_; lean_object* v___x_610_; uint8_t v___x_611_; 
v___x_609_ = lean_array_get_size(v_snd_600_);
v___x_610_ = lean_unsigned_to_nat(3u);
v___x_611_ = lean_nat_dec_eq(v___x_609_, v___x_610_);
if (v___x_611_ == 0)
{
lean_object* v___x_612_; 
lean_dec(v_snd_600_);
v___x_612_ = l_Lean_Expr_nat_x3f(v_n_595_);
return v___x_612_;
}
else
{
lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___x_615_; 
lean_dec_ref(v_n_595_);
v___x_613_ = lean_unsigned_to_nat(2u);
v___x_614_ = lean_array_fget(v_snd_600_, v___x_613_);
lean_dec(v_snd_600_);
v___x_615_ = l_Lean_Expr_nat_x3f(v___x_614_);
return v___x_615_;
}
}
}
}
else
{
lean_object* v___x_616_; 
lean_dec_ref(v_pre_598_);
lean_dec_ref(v_fst_597_);
lean_dec_ref(v___x_596_);
v___x_616_ = l_Lean_Expr_nat_x3f(v_n_595_);
return v___x_616_;
}
}
else
{
lean_object* v___x_617_; 
lean_dec_ref(v_fst_597_);
lean_dec(v_pre_598_);
lean_dec_ref(v___x_596_);
v___x_617_ = l_Lean_Expr_nat_x3f(v_n_595_);
return v___x_617_;
}
}
else
{
lean_object* v___x_618_; 
lean_dec(v_fst_597_);
lean_dec_ref(v___x_596_);
v___x_618_ = l_Lean_Expr_nat_x3f(v_n_595_);
return v___x_618_;
}
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_Elab_Tactic_Omega_intCast_x3f_spec__0(lean_object* v_a_619_){
_start:
{
lean_object* v___x_620_; 
v___x_620_ = lean_nat_to_int(v_a_619_);
return v___x_620_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_intCast_x3f(lean_object* v_n_621_){
_start:
{
lean_object* v___x_622_; lean_object* v_fst_623_; 
lean_inc_ref(v_n_621_);
v___x_622_ = l_Lean_Expr_getAppFnArgs(v_n_621_);
v_fst_623_ = lean_ctor_get(v___x_622_, 0);
lean_inc(v_fst_623_);
if (lean_obj_tag(v_fst_623_) == 1)
{
lean_object* v_pre_624_; 
v_pre_624_ = lean_ctor_get(v_fst_623_, 0);
lean_inc(v_pre_624_);
if (lean_obj_tag(v_pre_624_) == 1)
{
lean_object* v_pre_625_; 
v_pre_625_ = lean_ctor_get(v_pre_624_, 0);
if (lean_obj_tag(v_pre_625_) == 0)
{
lean_object* v_snd_626_; lean_object* v_str_627_; lean_object* v_str_628_; lean_object* v___x_629_; uint8_t v___x_630_; 
v_snd_626_ = lean_ctor_get(v___x_622_, 1);
lean_inc(v_snd_626_);
lean_dec_ref(v___x_622_);
v_str_627_ = lean_ctor_get(v_fst_623_, 1);
lean_inc_ref(v_str_627_);
lean_dec_ref(v_fst_623_);
v_str_628_ = lean_ctor_get(v_pre_624_, 1);
lean_inc_ref(v_str_628_);
lean_dec_ref(v_pre_624_);
v___x_629_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_natCast_x3f___closed__0));
v___x_630_ = lean_string_dec_eq(v_str_628_, v___x_629_);
lean_dec_ref(v_str_628_);
if (v___x_630_ == 0)
{
lean_object* v___x_631_; 
lean_dec_ref(v_str_627_);
lean_dec(v_snd_626_);
v___x_631_ = l_Lean_Expr_int_x3f(v_n_621_);
return v___x_631_;
}
else
{
lean_object* v___x_632_; uint8_t v___x_633_; 
v___x_632_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_natCast_x3f___closed__1));
v___x_633_ = lean_string_dec_eq(v_str_627_, v___x_632_);
lean_dec_ref(v_str_627_);
if (v___x_633_ == 0)
{
lean_object* v___x_634_; 
lean_dec(v_snd_626_);
v___x_634_ = l_Lean_Expr_int_x3f(v_n_621_);
return v___x_634_;
}
else
{
lean_object* v___x_635_; lean_object* v___x_636_; uint8_t v___x_637_; 
v___x_635_ = lean_array_get_size(v_snd_626_);
v___x_636_ = lean_unsigned_to_nat(3u);
v___x_637_ = lean_nat_dec_eq(v___x_635_, v___x_636_);
if (v___x_637_ == 0)
{
lean_object* v___x_638_; 
lean_dec(v_snd_626_);
v___x_638_ = l_Lean_Expr_int_x3f(v_n_621_);
return v___x_638_;
}
else
{
lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_641_; 
lean_dec_ref(v_n_621_);
v___x_639_ = lean_unsigned_to_nat(2u);
v___x_640_ = lean_array_fget(v_snd_626_, v___x_639_);
lean_dec(v_snd_626_);
v___x_641_ = l_Lean_Expr_nat_x3f(v___x_640_);
if (lean_obj_tag(v___x_641_) == 0)
{
lean_object* v___x_642_; 
v___x_642_ = lean_box(0);
return v___x_642_;
}
else
{
lean_object* v_val_643_; lean_object* v___x_645_; uint8_t v_isShared_646_; uint8_t v_isSharedCheck_651_; 
v_val_643_ = lean_ctor_get(v___x_641_, 0);
v_isSharedCheck_651_ = !lean_is_exclusive(v___x_641_);
if (v_isSharedCheck_651_ == 0)
{
v___x_645_ = v___x_641_;
v_isShared_646_ = v_isSharedCheck_651_;
goto v_resetjp_644_;
}
else
{
lean_inc(v_val_643_);
lean_dec(v___x_641_);
v___x_645_ = lean_box(0);
v_isShared_646_ = v_isSharedCheck_651_;
goto v_resetjp_644_;
}
v_resetjp_644_:
{
lean_object* v___x_647_; lean_object* v___x_649_; 
v___x_647_ = lean_nat_to_int(v_val_643_);
if (v_isShared_646_ == 0)
{
lean_ctor_set(v___x_645_, 0, v___x_647_);
v___x_649_ = v___x_645_;
goto v_reusejp_648_;
}
else
{
lean_object* v_reuseFailAlloc_650_; 
v_reuseFailAlloc_650_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_650_, 0, v___x_647_);
v___x_649_ = v_reuseFailAlloc_650_;
goto v_reusejp_648_;
}
v_reusejp_648_:
{
return v___x_649_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_652_; 
lean_dec_ref(v_pre_624_);
lean_dec_ref(v_fst_623_);
lean_dec_ref(v___x_622_);
v___x_652_ = l_Lean_Expr_int_x3f(v_n_621_);
return v___x_652_;
}
}
else
{
lean_object* v___x_653_; 
lean_dec(v_pre_624_);
lean_dec_ref(v_fst_623_);
lean_dec_ref(v___x_622_);
v___x_653_ = l_Lean_Expr_int_x3f(v_n_621_);
return v___x_653_;
}
}
else
{
lean_object* v___x_654_; 
lean_dec(v_fst_623_);
lean_dec_ref(v___x_622_);
v___x_654_ = l_Lean_Expr_int_x3f(v_n_621_);
return v___x_654_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_groundNat_x3f(lean_object* v_e_670_){
_start:
{
lean_object* v___x_671_; lean_object* v_fst_672_; 
lean_inc_ref(v_e_670_);
v___x_671_ = l_Lean_Expr_getAppFnArgs(v_e_670_);
v_fst_672_ = lean_ctor_get(v___x_671_, 0);
lean_inc(v_fst_672_);
if (lean_obj_tag(v_fst_672_) == 1)
{
lean_object* v_pre_673_; 
v_pre_673_ = lean_ctor_get(v_fst_672_, 0);
lean_inc(v_pre_673_);
if (lean_obj_tag(v_pre_673_) == 1)
{
lean_object* v_pre_674_; 
v_pre_674_ = lean_ctor_get(v_pre_673_, 0);
if (lean_obj_tag(v_pre_674_) == 0)
{
lean_object* v_snd_675_; lean_object* v_str_676_; lean_object* v_str_677_; lean_object* v___x_678_; uint8_t v___x_679_; 
v_snd_675_ = lean_ctor_get(v___x_671_, 1);
lean_inc(v_snd_675_);
lean_dec_ref(v___x_671_);
v_str_676_ = lean_ctor_get(v_fst_672_, 1);
lean_inc_ref(v_str_676_);
lean_dec_ref(v_fst_672_);
v_str_677_ = lean_ctor_get(v_pre_673_, 1);
lean_inc_ref(v_str_677_);
lean_dec_ref(v_pre_673_);
v___x_678_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_natCast_x3f___closed__0));
v___x_679_ = lean_string_dec_eq(v_str_677_, v___x_678_);
if (v___x_679_ == 0)
{
lean_object* v___x_680_; uint8_t v___x_681_; 
v___x_680_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__0));
v___x_681_ = lean_string_dec_eq(v_str_677_, v___x_680_);
if (v___x_681_ == 0)
{
lean_object* v___x_682_; uint8_t v___x_683_; 
v___x_682_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__1));
v___x_683_ = lean_string_dec_eq(v_str_677_, v___x_682_);
if (v___x_683_ == 0)
{
lean_object* v___x_684_; uint8_t v___x_685_; 
v___x_684_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__2));
v___x_685_ = lean_string_dec_eq(v_str_677_, v___x_684_);
if (v___x_685_ == 0)
{
lean_object* v___x_686_; uint8_t v___x_687_; 
v___x_686_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__3));
v___x_687_ = lean_string_dec_eq(v_str_677_, v___x_686_);
if (v___x_687_ == 0)
{
lean_object* v___x_688_; uint8_t v___x_689_; 
v___x_688_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__4));
v___x_689_ = lean_string_dec_eq(v_str_677_, v___x_688_);
lean_dec_ref(v_str_677_);
if (v___x_689_ == 0)
{
lean_object* v___x_690_; 
lean_dec_ref(v_str_676_);
lean_dec(v_snd_675_);
v___x_690_ = l_Lean_Expr_nat_x3f(v_e_670_);
return v___x_690_;
}
else
{
lean_object* v___x_691_; uint8_t v___x_692_; 
v___x_691_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__5));
v___x_692_ = lean_string_dec_eq(v_str_676_, v___x_691_);
lean_dec_ref(v_str_676_);
if (v___x_692_ == 0)
{
lean_object* v___x_693_; 
lean_dec(v_snd_675_);
v___x_693_ = l_Lean_Expr_nat_x3f(v_e_670_);
return v___x_693_;
}
else
{
lean_object* v___x_694_; lean_object* v___x_695_; uint8_t v___x_696_; 
v___x_694_ = lean_array_get_size(v_snd_675_);
v___x_695_ = lean_unsigned_to_nat(6u);
v___x_696_ = lean_nat_dec_eq(v___x_694_, v___x_695_);
if (v___x_696_ == 0)
{
lean_object* v___x_697_; 
lean_dec(v_snd_675_);
v___x_697_ = l_Lean_Expr_nat_x3f(v_e_670_);
return v___x_697_;
}
else
{
lean_object* v___f_698_; lean_object* v___x_699_; lean_object* v___x_700_; lean_object* v___x_701_; lean_object* v___x_702_; lean_object* v___x_703_; 
lean_dec_ref(v_e_670_);
v___f_698_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__6));
v___x_699_ = lean_unsigned_to_nat(4u);
v___x_700_ = lean_array_fget(v_snd_675_, v___x_699_);
v___x_701_ = lean_unsigned_to_nat(5u);
v___x_702_ = lean_array_fget(v_snd_675_, v___x_701_);
lean_dec(v_snd_675_);
v___x_703_ = l___private_Lean_Elab_Tactic_Omega_OmegaM_0__Lean_Elab_Tactic_Omega_groundNat_x3f_op(v___f_698_, v___x_700_, v___x_702_);
return v___x_703_;
}
}
}
}
else
{
lean_object* v___x_704_; uint8_t v___x_705_; 
lean_dec_ref(v_str_677_);
v___x_704_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__7));
v___x_705_ = lean_string_dec_eq(v_str_676_, v___x_704_);
lean_dec_ref(v_str_676_);
if (v___x_705_ == 0)
{
lean_object* v___x_706_; 
lean_dec(v_snd_675_);
v___x_706_ = l_Lean_Expr_nat_x3f(v_e_670_);
return v___x_706_;
}
else
{
lean_object* v___x_707_; lean_object* v___x_708_; uint8_t v___x_709_; 
v___x_707_ = lean_array_get_size(v_snd_675_);
v___x_708_ = lean_unsigned_to_nat(6u);
v___x_709_ = lean_nat_dec_eq(v___x_707_, v___x_708_);
if (v___x_709_ == 0)
{
lean_object* v___x_710_; 
lean_dec(v_snd_675_);
v___x_710_ = l_Lean_Expr_nat_x3f(v_e_670_);
return v___x_710_;
}
else
{
lean_object* v___f_711_; lean_object* v___x_712_; lean_object* v___x_713_; lean_object* v___x_714_; lean_object* v___x_715_; lean_object* v___x_716_; 
lean_dec_ref(v_e_670_);
v___f_711_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__8));
v___x_712_ = lean_unsigned_to_nat(4u);
v___x_713_ = lean_array_fget(v_snd_675_, v___x_712_);
v___x_714_ = lean_unsigned_to_nat(5u);
v___x_715_ = lean_array_fget(v_snd_675_, v___x_714_);
lean_dec(v_snd_675_);
v___x_716_ = l___private_Lean_Elab_Tactic_Omega_OmegaM_0__Lean_Elab_Tactic_Omega_groundNat_x3f_op(v___f_711_, v___x_713_, v___x_715_);
return v___x_716_;
}
}
}
}
else
{
lean_object* v___x_717_; uint8_t v___x_718_; 
lean_dec_ref(v_str_677_);
v___x_717_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__9));
v___x_718_ = lean_string_dec_eq(v_str_676_, v___x_717_);
lean_dec_ref(v_str_676_);
if (v___x_718_ == 0)
{
lean_object* v___x_719_; 
lean_dec(v_snd_675_);
v___x_719_ = l_Lean_Expr_nat_x3f(v_e_670_);
return v___x_719_;
}
else
{
lean_object* v___x_720_; lean_object* v___x_721_; uint8_t v___x_722_; 
v___x_720_ = lean_array_get_size(v_snd_675_);
v___x_721_ = lean_unsigned_to_nat(6u);
v___x_722_ = lean_nat_dec_eq(v___x_720_, v___x_721_);
if (v___x_722_ == 0)
{
lean_object* v___x_723_; 
lean_dec(v_snd_675_);
v___x_723_ = l_Lean_Expr_nat_x3f(v_e_670_);
return v___x_723_;
}
else
{
lean_object* v___f_724_; lean_object* v___x_725_; lean_object* v___x_726_; lean_object* v___x_727_; lean_object* v___x_728_; lean_object* v___x_729_; 
lean_dec_ref(v_e_670_);
v___f_724_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__10));
v___x_725_ = lean_unsigned_to_nat(4u);
v___x_726_ = lean_array_fget(v_snd_675_, v___x_725_);
v___x_727_ = lean_unsigned_to_nat(5u);
v___x_728_ = lean_array_fget(v_snd_675_, v___x_727_);
lean_dec(v_snd_675_);
v___x_729_ = l___private_Lean_Elab_Tactic_Omega_OmegaM_0__Lean_Elab_Tactic_Omega_groundNat_x3f_op(v___f_724_, v___x_726_, v___x_728_);
return v___x_729_;
}
}
}
}
else
{
lean_object* v___x_730_; uint8_t v___x_731_; 
lean_dec_ref(v_str_677_);
v___x_730_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__11));
v___x_731_ = lean_string_dec_eq(v_str_676_, v___x_730_);
lean_dec_ref(v_str_676_);
if (v___x_731_ == 0)
{
lean_object* v___x_732_; 
lean_dec(v_snd_675_);
v___x_732_ = l_Lean_Expr_nat_x3f(v_e_670_);
return v___x_732_;
}
else
{
lean_object* v___x_733_; lean_object* v___x_734_; uint8_t v___x_735_; 
v___x_733_ = lean_array_get_size(v_snd_675_);
v___x_734_ = lean_unsigned_to_nat(6u);
v___x_735_ = lean_nat_dec_eq(v___x_733_, v___x_734_);
if (v___x_735_ == 0)
{
lean_object* v___x_736_; 
lean_dec(v_snd_675_);
v___x_736_ = l_Lean_Expr_nat_x3f(v_e_670_);
return v___x_736_;
}
else
{
lean_object* v___f_737_; lean_object* v___x_738_; lean_object* v___x_739_; lean_object* v___x_740_; lean_object* v___x_741_; lean_object* v___x_742_; 
lean_dec_ref(v_e_670_);
v___f_737_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__12));
v___x_738_ = lean_unsigned_to_nat(4u);
v___x_739_ = lean_array_fget(v_snd_675_, v___x_738_);
v___x_740_ = lean_unsigned_to_nat(5u);
v___x_741_ = lean_array_fget(v_snd_675_, v___x_740_);
lean_dec(v_snd_675_);
v___x_742_ = l___private_Lean_Elab_Tactic_Omega_OmegaM_0__Lean_Elab_Tactic_Omega_groundNat_x3f_op(v___f_737_, v___x_739_, v___x_741_);
return v___x_742_;
}
}
}
}
else
{
lean_object* v___x_743_; uint8_t v___x_744_; 
lean_dec_ref(v_str_677_);
v___x_743_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__13));
v___x_744_ = lean_string_dec_eq(v_str_676_, v___x_743_);
lean_dec_ref(v_str_676_);
if (v___x_744_ == 0)
{
lean_object* v___x_745_; 
lean_dec(v_snd_675_);
v___x_745_ = l_Lean_Expr_nat_x3f(v_e_670_);
return v___x_745_;
}
else
{
lean_object* v___x_746_; lean_object* v___x_747_; uint8_t v___x_748_; 
v___x_746_ = lean_array_get_size(v_snd_675_);
v___x_747_ = lean_unsigned_to_nat(6u);
v___x_748_ = lean_nat_dec_eq(v___x_746_, v___x_747_);
if (v___x_748_ == 0)
{
lean_object* v___x_749_; 
lean_dec(v_snd_675_);
v___x_749_ = l_Lean_Expr_nat_x3f(v_e_670_);
return v___x_749_;
}
else
{
lean_object* v___f_750_; lean_object* v___x_751_; lean_object* v___x_752_; lean_object* v___x_753_; lean_object* v___x_754_; lean_object* v___x_755_; 
lean_dec_ref(v_e_670_);
v___f_750_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__14));
v___x_751_ = lean_unsigned_to_nat(4u);
v___x_752_ = lean_array_fget(v_snd_675_, v___x_751_);
v___x_753_ = lean_unsigned_to_nat(5u);
v___x_754_ = lean_array_fget(v_snd_675_, v___x_753_);
lean_dec(v_snd_675_);
v___x_755_ = l___private_Lean_Elab_Tactic_Omega_OmegaM_0__Lean_Elab_Tactic_Omega_groundNat_x3f_op(v___f_750_, v___x_752_, v___x_754_);
return v___x_755_;
}
}
}
}
else
{
lean_object* v___x_756_; uint8_t v___x_757_; 
lean_dec_ref(v_str_677_);
v___x_756_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_natCast_x3f___closed__1));
v___x_757_ = lean_string_dec_eq(v_str_676_, v___x_756_);
lean_dec_ref(v_str_676_);
if (v___x_757_ == 0)
{
lean_object* v___x_758_; 
lean_dec(v_snd_675_);
v___x_758_ = l_Lean_Expr_nat_x3f(v_e_670_);
return v___x_758_;
}
else
{
lean_object* v___x_759_; lean_object* v___x_760_; uint8_t v___x_761_; 
v___x_759_ = lean_array_get_size(v_snd_675_);
v___x_760_ = lean_unsigned_to_nat(3u);
v___x_761_ = lean_nat_dec_eq(v___x_759_, v___x_760_);
if (v___x_761_ == 0)
{
lean_object* v___x_762_; 
lean_dec(v_snd_675_);
v___x_762_ = l_Lean_Expr_nat_x3f(v_e_670_);
return v___x_762_;
}
else
{
lean_object* v___x_763_; lean_object* v___x_764_; 
lean_dec_ref(v_e_670_);
v___x_763_ = lean_unsigned_to_nat(2u);
v___x_764_ = lean_array_fget(v_snd_675_, v___x_763_);
lean_dec(v_snd_675_);
v_e_670_ = v___x_764_;
goto _start;
}
}
}
}
else
{
lean_object* v___x_766_; 
lean_dec_ref(v_pre_673_);
lean_dec_ref(v_fst_672_);
lean_dec_ref(v___x_671_);
v___x_766_ = l_Lean_Expr_nat_x3f(v_e_670_);
return v___x_766_;
}
}
else
{
lean_object* v___x_767_; 
lean_dec_ref(v_fst_672_);
lean_dec(v_pre_673_);
lean_dec_ref(v___x_671_);
v___x_767_ = l_Lean_Expr_nat_x3f(v_e_670_);
return v___x_767_;
}
}
else
{
lean_object* v___x_768_; 
lean_dec(v_fst_672_);
lean_dec_ref(v___x_671_);
v___x_768_ = l_Lean_Expr_nat_x3f(v_e_670_);
return v___x_768_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Omega_OmegaM_0__Lean_Elab_Tactic_Omega_groundNat_x3f_op(lean_object* v_f_769_, lean_object* v_x_770_, lean_object* v_y_771_){
_start:
{
lean_object* v___x_772_; 
v___x_772_ = l_Lean_Elab_Tactic_Omega_groundNat_x3f(v_x_770_);
if (lean_obj_tag(v___x_772_) == 1)
{
lean_object* v_val_773_; lean_object* v___x_774_; 
v_val_773_ = lean_ctor_get(v___x_772_, 0);
lean_inc(v_val_773_);
lean_dec_ref(v___x_772_);
v___x_774_ = l_Lean_Elab_Tactic_Omega_groundNat_x3f(v_y_771_);
if (lean_obj_tag(v___x_774_) == 1)
{
lean_object* v_val_775_; lean_object* v___x_777_; uint8_t v_isShared_778_; uint8_t v_isSharedCheck_783_; 
v_val_775_ = lean_ctor_get(v___x_774_, 0);
v_isSharedCheck_783_ = !lean_is_exclusive(v___x_774_);
if (v_isSharedCheck_783_ == 0)
{
v___x_777_ = v___x_774_;
v_isShared_778_ = v_isSharedCheck_783_;
goto v_resetjp_776_;
}
else
{
lean_inc(v_val_775_);
lean_dec(v___x_774_);
v___x_777_ = lean_box(0);
v_isShared_778_ = v_isSharedCheck_783_;
goto v_resetjp_776_;
}
v_resetjp_776_:
{
lean_object* v___x_779_; lean_object* v___x_781_; 
v___x_779_ = lean_apply_2(v_f_769_, v_val_773_, v_val_775_);
if (v_isShared_778_ == 0)
{
lean_ctor_set(v___x_777_, 0, v___x_779_);
v___x_781_ = v___x_777_;
goto v_reusejp_780_;
}
else
{
lean_object* v_reuseFailAlloc_782_; 
v_reuseFailAlloc_782_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_782_, 0, v___x_779_);
v___x_781_ = v_reuseFailAlloc_782_;
goto v_reusejp_780_;
}
v_reusejp_780_:
{
return v___x_781_;
}
}
}
else
{
lean_object* v___x_784_; 
lean_dec(v___x_774_);
lean_dec(v_val_773_);
lean_dec_ref(v_f_769_);
v___x_784_ = lean_box(0);
return v___x_784_;
}
}
else
{
lean_object* v___x_785_; 
lean_dec(v___x_772_);
lean_dec_ref(v_y_771_);
lean_dec_ref(v_f_769_);
v___x_785_ = lean_box(0);
return v___x_785_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_groundInt_x3f(lean_object* v_e_790_){
_start:
{
lean_object* v___x_791_; lean_object* v_fst_792_; 
lean_inc_ref(v_e_790_);
v___x_791_ = l_Lean_Expr_getAppFnArgs(v_e_790_);
v_fst_792_ = lean_ctor_get(v___x_791_, 0);
lean_inc(v_fst_792_);
if (lean_obj_tag(v_fst_792_) == 1)
{
lean_object* v_pre_793_; 
v_pre_793_ = lean_ctor_get(v_fst_792_, 0);
lean_inc(v_pre_793_);
if (lean_obj_tag(v_pre_793_) == 1)
{
lean_object* v_pre_794_; 
v_pre_794_ = lean_ctor_get(v_pre_793_, 0);
if (lean_obj_tag(v_pre_794_) == 0)
{
lean_object* v_snd_795_; lean_object* v_str_796_; lean_object* v_str_797_; lean_object* v___x_798_; uint8_t v___x_799_; 
v_snd_795_ = lean_ctor_get(v___x_791_, 1);
lean_inc(v_snd_795_);
lean_dec_ref(v___x_791_);
v_str_796_ = lean_ctor_get(v_fst_792_, 1);
lean_inc_ref(v_str_796_);
lean_dec_ref(v_fst_792_);
v_str_797_ = lean_ctor_get(v_pre_793_, 1);
lean_inc_ref(v_str_797_);
lean_dec_ref(v_pre_793_);
v___x_798_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_natCast_x3f___closed__0));
v___x_799_ = lean_string_dec_eq(v_str_797_, v___x_798_);
if (v___x_799_ == 0)
{
lean_object* v___x_800_; uint8_t v___x_801_; 
v___x_800_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__0));
v___x_801_ = lean_string_dec_eq(v_str_797_, v___x_800_);
if (v___x_801_ == 0)
{
lean_object* v___x_802_; uint8_t v___x_803_; 
v___x_802_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__1));
v___x_803_ = lean_string_dec_eq(v_str_797_, v___x_802_);
if (v___x_803_ == 0)
{
lean_object* v___x_804_; uint8_t v___x_805_; 
v___x_804_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__2));
v___x_805_ = lean_string_dec_eq(v_str_797_, v___x_804_);
if (v___x_805_ == 0)
{
lean_object* v___x_806_; uint8_t v___x_807_; 
v___x_806_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__3));
v___x_807_ = lean_string_dec_eq(v_str_797_, v___x_806_);
if (v___x_807_ == 0)
{
lean_object* v___x_808_; uint8_t v___x_809_; 
v___x_808_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__4));
v___x_809_ = lean_string_dec_eq(v_str_797_, v___x_808_);
lean_dec_ref(v_str_797_);
if (v___x_809_ == 0)
{
lean_object* v___x_810_; 
lean_dec_ref(v_str_796_);
lean_dec(v_snd_795_);
v___x_810_ = l_Lean_Expr_int_x3f(v_e_790_);
return v___x_810_;
}
else
{
lean_object* v___x_811_; uint8_t v___x_812_; 
v___x_811_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__5));
v___x_812_ = lean_string_dec_eq(v_str_796_, v___x_811_);
lean_dec_ref(v_str_796_);
if (v___x_812_ == 0)
{
lean_object* v___x_813_; 
lean_dec(v_snd_795_);
v___x_813_ = l_Lean_Expr_int_x3f(v_e_790_);
return v___x_813_;
}
else
{
lean_object* v___x_814_; lean_object* v___x_815_; uint8_t v___x_816_; 
v___x_814_ = lean_array_get_size(v_snd_795_);
v___x_815_ = lean_unsigned_to_nat(6u);
v___x_816_ = lean_nat_dec_eq(v___x_814_, v___x_815_);
if (v___x_816_ == 0)
{
lean_object* v___x_817_; 
lean_dec(v_snd_795_);
v___x_817_ = l_Lean_Expr_int_x3f(v_e_790_);
return v___x_817_;
}
else
{
lean_object* v___x_818_; lean_object* v___x_819_; lean_object* v___x_820_; 
lean_dec_ref(v_e_790_);
v___x_818_ = lean_unsigned_to_nat(4u);
v___x_819_ = lean_array_fget_borrowed(v_snd_795_, v___x_818_);
lean_inc(v___x_819_);
v___x_820_ = l_Lean_Elab_Tactic_Omega_groundInt_x3f(v___x_819_);
if (lean_obj_tag(v___x_820_) == 1)
{
lean_object* v_val_821_; lean_object* v___x_822_; lean_object* v___x_823_; lean_object* v___x_824_; 
v_val_821_ = lean_ctor_get(v___x_820_, 0);
lean_inc(v_val_821_);
lean_dec_ref(v___x_820_);
v___x_822_ = lean_unsigned_to_nat(5u);
v___x_823_ = lean_array_fget(v_snd_795_, v___x_822_);
lean_dec(v_snd_795_);
v___x_824_ = l_Lean_Elab_Tactic_Omega_groundNat_x3f(v___x_823_);
if (lean_obj_tag(v___x_824_) == 1)
{
lean_object* v_val_825_; lean_object* v___x_827_; uint8_t v_isShared_828_; uint8_t v_isSharedCheck_833_; 
v_val_825_ = lean_ctor_get(v___x_824_, 0);
v_isSharedCheck_833_ = !lean_is_exclusive(v___x_824_);
if (v_isSharedCheck_833_ == 0)
{
v___x_827_ = v___x_824_;
v_isShared_828_ = v_isSharedCheck_833_;
goto v_resetjp_826_;
}
else
{
lean_inc(v_val_825_);
lean_dec(v___x_824_);
v___x_827_ = lean_box(0);
v_isShared_828_ = v_isSharedCheck_833_;
goto v_resetjp_826_;
}
v_resetjp_826_:
{
lean_object* v___x_829_; lean_object* v___x_831_; 
v___x_829_ = l_Int_pow(v_val_821_, v_val_825_);
lean_dec(v_val_825_);
lean_dec(v_val_821_);
if (v_isShared_828_ == 0)
{
lean_ctor_set(v___x_827_, 0, v___x_829_);
v___x_831_ = v___x_827_;
goto v_reusejp_830_;
}
else
{
lean_object* v_reuseFailAlloc_832_; 
v_reuseFailAlloc_832_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_832_, 0, v___x_829_);
v___x_831_ = v_reuseFailAlloc_832_;
goto v_reusejp_830_;
}
v_reusejp_830_:
{
return v___x_831_;
}
}
}
else
{
lean_object* v___x_834_; 
lean_dec(v___x_824_);
lean_dec(v_val_821_);
v___x_834_ = lean_box(0);
return v___x_834_;
}
}
else
{
lean_object* v___x_835_; 
lean_dec(v___x_820_);
lean_dec(v_snd_795_);
v___x_835_ = lean_box(0);
return v___x_835_;
}
}
}
}
}
else
{
lean_object* v___x_836_; uint8_t v___x_837_; 
lean_dec_ref(v_str_797_);
v___x_836_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__7));
v___x_837_ = lean_string_dec_eq(v_str_796_, v___x_836_);
lean_dec_ref(v_str_796_);
if (v___x_837_ == 0)
{
lean_object* v___x_838_; 
lean_dec(v_snd_795_);
v___x_838_ = l_Lean_Expr_int_x3f(v_e_790_);
return v___x_838_;
}
else
{
lean_object* v___x_839_; lean_object* v___x_840_; uint8_t v___x_841_; 
v___x_839_ = lean_array_get_size(v_snd_795_);
v___x_840_ = lean_unsigned_to_nat(6u);
v___x_841_ = lean_nat_dec_eq(v___x_839_, v___x_840_);
if (v___x_841_ == 0)
{
lean_object* v___x_842_; 
lean_dec(v_snd_795_);
v___x_842_ = l_Lean_Expr_int_x3f(v_e_790_);
return v___x_842_;
}
else
{
lean_object* v___f_843_; lean_object* v___x_844_; lean_object* v___x_845_; lean_object* v___x_846_; lean_object* v___x_847_; lean_object* v___x_848_; 
lean_dec_ref(v_e_790_);
v___f_843_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundInt_x3f___closed__0));
v___x_844_ = lean_unsigned_to_nat(4u);
v___x_845_ = lean_array_fget(v_snd_795_, v___x_844_);
v___x_846_ = lean_unsigned_to_nat(5u);
v___x_847_ = lean_array_fget(v_snd_795_, v___x_846_);
lean_dec(v_snd_795_);
v___x_848_ = l___private_Lean_Elab_Tactic_Omega_OmegaM_0__Lean_Elab_Tactic_Omega_groundInt_x3f_op(v___f_843_, v___x_845_, v___x_847_);
return v___x_848_;
}
}
}
}
else
{
lean_object* v___x_849_; uint8_t v___x_850_; 
lean_dec_ref(v_str_797_);
v___x_849_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__9));
v___x_850_ = lean_string_dec_eq(v_str_796_, v___x_849_);
lean_dec_ref(v_str_796_);
if (v___x_850_ == 0)
{
lean_object* v___x_851_; 
lean_dec(v_snd_795_);
v___x_851_ = l_Lean_Expr_int_x3f(v_e_790_);
return v___x_851_;
}
else
{
lean_object* v___x_852_; lean_object* v___x_853_; uint8_t v___x_854_; 
v___x_852_ = lean_array_get_size(v_snd_795_);
v___x_853_ = lean_unsigned_to_nat(6u);
v___x_854_ = lean_nat_dec_eq(v___x_852_, v___x_853_);
if (v___x_854_ == 0)
{
lean_object* v___x_855_; 
lean_dec(v_snd_795_);
v___x_855_ = l_Lean_Expr_int_x3f(v_e_790_);
return v___x_855_;
}
else
{
lean_object* v___f_856_; lean_object* v___x_857_; lean_object* v___x_858_; lean_object* v___x_859_; lean_object* v___x_860_; lean_object* v___x_861_; 
lean_dec_ref(v_e_790_);
v___f_856_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundInt_x3f___closed__1));
v___x_857_ = lean_unsigned_to_nat(4u);
v___x_858_ = lean_array_fget(v_snd_795_, v___x_857_);
v___x_859_ = lean_unsigned_to_nat(5u);
v___x_860_ = lean_array_fget(v_snd_795_, v___x_859_);
lean_dec(v_snd_795_);
v___x_861_ = l___private_Lean_Elab_Tactic_Omega_OmegaM_0__Lean_Elab_Tactic_Omega_groundInt_x3f_op(v___f_856_, v___x_858_, v___x_860_);
return v___x_861_;
}
}
}
}
else
{
lean_object* v___x_862_; uint8_t v___x_863_; 
lean_dec_ref(v_str_797_);
v___x_862_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__11));
v___x_863_ = lean_string_dec_eq(v_str_796_, v___x_862_);
lean_dec_ref(v_str_796_);
if (v___x_863_ == 0)
{
lean_object* v___x_864_; 
lean_dec(v_snd_795_);
v___x_864_ = l_Lean_Expr_int_x3f(v_e_790_);
return v___x_864_;
}
else
{
lean_object* v___x_865_; lean_object* v___x_866_; uint8_t v___x_867_; 
v___x_865_ = lean_array_get_size(v_snd_795_);
v___x_866_ = lean_unsigned_to_nat(6u);
v___x_867_ = lean_nat_dec_eq(v___x_865_, v___x_866_);
if (v___x_867_ == 0)
{
lean_object* v___x_868_; 
lean_dec(v_snd_795_);
v___x_868_ = l_Lean_Expr_int_x3f(v_e_790_);
return v___x_868_;
}
else
{
lean_object* v___f_869_; lean_object* v___x_870_; lean_object* v___x_871_; lean_object* v___x_872_; lean_object* v___x_873_; lean_object* v___x_874_; 
lean_dec_ref(v_e_790_);
v___f_869_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundInt_x3f___closed__2));
v___x_870_ = lean_unsigned_to_nat(4u);
v___x_871_ = lean_array_fget(v_snd_795_, v___x_870_);
v___x_872_ = lean_unsigned_to_nat(5u);
v___x_873_ = lean_array_fget(v_snd_795_, v___x_872_);
lean_dec(v_snd_795_);
v___x_874_ = l___private_Lean_Elab_Tactic_Omega_OmegaM_0__Lean_Elab_Tactic_Omega_groundInt_x3f_op(v___f_869_, v___x_871_, v___x_873_);
return v___x_874_;
}
}
}
}
else
{
lean_object* v___x_875_; uint8_t v___x_876_; 
lean_dec_ref(v_str_797_);
v___x_875_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__13));
v___x_876_ = lean_string_dec_eq(v_str_796_, v___x_875_);
lean_dec_ref(v_str_796_);
if (v___x_876_ == 0)
{
lean_object* v___x_877_; 
lean_dec(v_snd_795_);
v___x_877_ = l_Lean_Expr_int_x3f(v_e_790_);
return v___x_877_;
}
else
{
lean_object* v___x_878_; lean_object* v___x_879_; uint8_t v___x_880_; 
v___x_878_ = lean_array_get_size(v_snd_795_);
v___x_879_ = lean_unsigned_to_nat(6u);
v___x_880_ = lean_nat_dec_eq(v___x_878_, v___x_879_);
if (v___x_880_ == 0)
{
lean_object* v___x_881_; 
lean_dec(v_snd_795_);
v___x_881_ = l_Lean_Expr_int_x3f(v_e_790_);
return v___x_881_;
}
else
{
lean_object* v___f_882_; lean_object* v___x_883_; lean_object* v___x_884_; lean_object* v___x_885_; lean_object* v___x_886_; lean_object* v___x_887_; 
lean_dec_ref(v_e_790_);
v___f_882_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundInt_x3f___closed__3));
v___x_883_ = lean_unsigned_to_nat(4u);
v___x_884_ = lean_array_fget(v_snd_795_, v___x_883_);
v___x_885_ = lean_unsigned_to_nat(5u);
v___x_886_ = lean_array_fget(v_snd_795_, v___x_885_);
lean_dec(v_snd_795_);
v___x_887_ = l___private_Lean_Elab_Tactic_Omega_OmegaM_0__Lean_Elab_Tactic_Omega_groundInt_x3f_op(v___f_882_, v___x_884_, v___x_886_);
return v___x_887_;
}
}
}
}
else
{
lean_object* v___x_888_; uint8_t v___x_889_; 
lean_dec_ref(v_str_797_);
v___x_888_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_natCast_x3f___closed__1));
v___x_889_ = lean_string_dec_eq(v_str_796_, v___x_888_);
lean_dec_ref(v_str_796_);
if (v___x_889_ == 0)
{
lean_object* v___x_890_; 
lean_dec(v_snd_795_);
v___x_890_ = l_Lean_Expr_int_x3f(v_e_790_);
return v___x_890_;
}
else
{
lean_object* v___x_891_; lean_object* v___x_892_; uint8_t v___x_893_; 
v___x_891_ = lean_array_get_size(v_snd_795_);
v___x_892_ = lean_unsigned_to_nat(3u);
v___x_893_ = lean_nat_dec_eq(v___x_891_, v___x_892_);
if (v___x_893_ == 0)
{
lean_object* v___x_894_; 
lean_dec(v_snd_795_);
v___x_894_ = l_Lean_Expr_int_x3f(v_e_790_);
return v___x_894_;
}
else
{
lean_object* v___x_895_; lean_object* v___x_896_; lean_object* v___x_897_; 
lean_dec_ref(v_e_790_);
v___x_895_ = lean_unsigned_to_nat(2u);
v___x_896_ = lean_array_fget(v_snd_795_, v___x_895_);
lean_dec(v_snd_795_);
v___x_897_ = l_Lean_Elab_Tactic_Omega_groundNat_x3f(v___x_896_);
if (lean_obj_tag(v___x_897_) == 0)
{
lean_object* v___x_898_; 
v___x_898_ = lean_box(0);
return v___x_898_;
}
else
{
lean_object* v_val_899_; lean_object* v___x_901_; uint8_t v_isShared_902_; uint8_t v_isSharedCheck_907_; 
v_val_899_ = lean_ctor_get(v___x_897_, 0);
v_isSharedCheck_907_ = !lean_is_exclusive(v___x_897_);
if (v_isSharedCheck_907_ == 0)
{
v___x_901_ = v___x_897_;
v_isShared_902_ = v_isSharedCheck_907_;
goto v_resetjp_900_;
}
else
{
lean_inc(v_val_899_);
lean_dec(v___x_897_);
v___x_901_ = lean_box(0);
v_isShared_902_ = v_isSharedCheck_907_;
goto v_resetjp_900_;
}
v_resetjp_900_:
{
lean_object* v___x_903_; lean_object* v___x_905_; 
v___x_903_ = lean_nat_to_int(v_val_899_);
if (v_isShared_902_ == 0)
{
lean_ctor_set(v___x_901_, 0, v___x_903_);
v___x_905_ = v___x_901_;
goto v_reusejp_904_;
}
else
{
lean_object* v_reuseFailAlloc_906_; 
v_reuseFailAlloc_906_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_906_, 0, v___x_903_);
v___x_905_ = v_reuseFailAlloc_906_;
goto v_reusejp_904_;
}
v_reusejp_904_:
{
return v___x_905_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_908_; 
lean_dec_ref(v_pre_793_);
lean_dec_ref(v_fst_792_);
lean_dec_ref(v___x_791_);
v___x_908_ = l_Lean_Expr_int_x3f(v_e_790_);
return v___x_908_;
}
}
else
{
lean_object* v___x_909_; 
lean_dec(v_pre_793_);
lean_dec_ref(v_fst_792_);
lean_dec_ref(v___x_791_);
v___x_909_ = l_Lean_Expr_int_x3f(v_e_790_);
return v___x_909_;
}
}
else
{
lean_object* v___x_910_; 
lean_dec(v_fst_792_);
lean_dec_ref(v___x_791_);
v___x_910_ = l_Lean_Expr_int_x3f(v_e_790_);
return v___x_910_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Omega_OmegaM_0__Lean_Elab_Tactic_Omega_groundInt_x3f_op(lean_object* v_f_911_, lean_object* v_x_912_, lean_object* v_y_913_){
_start:
{
lean_object* v___x_914_; 
v___x_914_ = l_Lean_Elab_Tactic_Omega_groundInt_x3f(v_x_912_);
if (lean_obj_tag(v___x_914_) == 1)
{
lean_object* v_val_915_; lean_object* v___x_916_; 
v_val_915_ = lean_ctor_get(v___x_914_, 0);
lean_inc(v_val_915_);
lean_dec_ref(v___x_914_);
v___x_916_ = l_Lean_Elab_Tactic_Omega_groundInt_x3f(v_y_913_);
if (lean_obj_tag(v___x_916_) == 1)
{
lean_object* v_val_917_; lean_object* v___x_919_; uint8_t v_isShared_920_; uint8_t v_isSharedCheck_925_; 
v_val_917_ = lean_ctor_get(v___x_916_, 0);
v_isSharedCheck_925_ = !lean_is_exclusive(v___x_916_);
if (v_isSharedCheck_925_ == 0)
{
v___x_919_ = v___x_916_;
v_isShared_920_ = v_isSharedCheck_925_;
goto v_resetjp_918_;
}
else
{
lean_inc(v_val_917_);
lean_dec(v___x_916_);
v___x_919_ = lean_box(0);
v_isShared_920_ = v_isSharedCheck_925_;
goto v_resetjp_918_;
}
v_resetjp_918_:
{
lean_object* v___x_921_; lean_object* v___x_923_; 
v___x_921_ = lean_apply_2(v_f_911_, v_val_915_, v_val_917_);
if (v_isShared_920_ == 0)
{
lean_ctor_set(v___x_919_, 0, v___x_921_);
v___x_923_ = v___x_919_;
goto v_reusejp_922_;
}
else
{
lean_object* v_reuseFailAlloc_924_; 
v_reuseFailAlloc_924_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_924_, 0, v___x_921_);
v___x_923_ = v_reuseFailAlloc_924_;
goto v_reusejp_922_;
}
v_reusejp_922_:
{
return v___x_923_;
}
}
}
else
{
lean_object* v___x_926_; 
lean_dec(v___x_916_);
lean_dec(v_val_915_);
lean_dec_ref(v_f_911_);
v___x_926_ = lean_box(0);
return v___x_926_;
}
}
else
{
lean_object* v___x_927_; 
lean_dec(v___x_914_);
lean_dec_ref(v_y_913_);
lean_dec_ref(v_f_911_);
v___x_927_ = lean_box(0);
return v___x_927_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_mkEqReflWithExpectedType(lean_object* v_a_928_, lean_object* v_b_929_, lean_object* v_a_930_, lean_object* v_a_931_, lean_object* v_a_932_, lean_object* v_a_933_){
_start:
{
lean_object* v___x_935_; 
lean_inc_ref(v_a_928_);
v___x_935_ = l_Lean_Meta_mkEqRefl(v_a_928_, v_a_930_, v_a_931_, v_a_932_, v_a_933_);
if (lean_obj_tag(v___x_935_) == 0)
{
lean_object* v_a_936_; lean_object* v___x_937_; 
v_a_936_ = lean_ctor_get(v___x_935_, 0);
lean_inc(v_a_936_);
lean_dec_ref(v___x_935_);
v___x_937_ = l_Lean_Meta_mkEq(v_a_928_, v_b_929_, v_a_930_, v_a_931_, v_a_932_, v_a_933_);
if (lean_obj_tag(v___x_937_) == 0)
{
lean_object* v_a_938_; lean_object* v___x_940_; uint8_t v_isShared_941_; uint8_t v_isSharedCheck_946_; 
v_a_938_ = lean_ctor_get(v___x_937_, 0);
v_isSharedCheck_946_ = !lean_is_exclusive(v___x_937_);
if (v_isSharedCheck_946_ == 0)
{
v___x_940_ = v___x_937_;
v_isShared_941_ = v_isSharedCheck_946_;
goto v_resetjp_939_;
}
else
{
lean_inc(v_a_938_);
lean_dec(v___x_937_);
v___x_940_ = lean_box(0);
v_isShared_941_ = v_isSharedCheck_946_;
goto v_resetjp_939_;
}
v_resetjp_939_:
{
lean_object* v___x_942_; lean_object* v___x_944_; 
v___x_942_ = l_Lean_Meta_mkExpectedPropHint(v_a_936_, v_a_938_);
if (v_isShared_941_ == 0)
{
lean_ctor_set(v___x_940_, 0, v___x_942_);
v___x_944_ = v___x_940_;
goto v_reusejp_943_;
}
else
{
lean_object* v_reuseFailAlloc_945_; 
v_reuseFailAlloc_945_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_945_, 0, v___x_942_);
v___x_944_ = v_reuseFailAlloc_945_;
goto v_reusejp_943_;
}
v_reusejp_943_:
{
return v___x_944_;
}
}
}
else
{
lean_dec(v_a_936_);
return v___x_937_;
}
}
else
{
lean_dec_ref(v_b_929_);
lean_dec_ref(v_a_928_);
return v___x_935_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_mkEqReflWithExpectedType___boxed(lean_object* v_a_947_, lean_object* v_b_948_, lean_object* v_a_949_, lean_object* v_a_950_, lean_object* v_a_951_, lean_object* v_a_952_, lean_object* v_a_953_){
_start:
{
lean_object* v_res_954_; 
v_res_954_ = l_Lean_Elab_Tactic_Omega_mkEqReflWithExpectedType(v_a_947_, v_b_948_, v_a_949_, v_a_950_, v_a_951_, v_a_952_);
lean_dec(v_a_952_);
lean_dec_ref(v_a_951_);
lean_dec(v_a_950_);
lean_dec_ref(v_a_949_);
return v_res_954_;
}
}
LEAN_EXPORT uint8_t l_List_elem___at___00Lean_Elab_Tactic_Omega_analyzeAtom_spec__0(lean_object* v_a_955_, lean_object* v_x_956_){
_start:
{
if (lean_obj_tag(v_x_956_) == 0)
{
uint8_t v___x_957_; 
v___x_957_ = 0;
return v___x_957_;
}
else
{
lean_object* v_head_958_; lean_object* v_tail_959_; uint8_t v___x_960_; 
v_head_958_ = lean_ctor_get(v_x_956_, 0);
v_tail_959_ = lean_ctor_get(v_x_956_, 1);
v___x_960_ = lean_expr_eqv(v_a_955_, v_head_958_);
if (v___x_960_ == 0)
{
v_x_956_ = v_tail_959_;
goto _start;
}
else
{
return v___x_960_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_elem___at___00Lean_Elab_Tactic_Omega_analyzeAtom_spec__0___boxed(lean_object* v_a_962_, lean_object* v_x_963_){
_start:
{
uint8_t v_res_964_; lean_object* v_r_965_; 
v_res_964_ = l_List_elem___at___00Lean_Elab_Tactic_Omega_analyzeAtom_spec__0(v_a_962_, v_x_963_);
lean_dec(v_x_963_);
lean_dec_ref(v_a_962_);
v_r_965_ = lean_box(v_res_964_);
return v_r_965_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__6(void){
_start:
{
lean_object* v___x_974_; lean_object* v___x_975_; lean_object* v___x_976_; 
v___x_974_ = lean_box(0);
v___x_975_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__5));
v___x_976_ = l_Lean_Expr_const___override(v___x_975_, v___x_974_);
return v___x_976_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__9(void){
_start:
{
lean_object* v___x_981_; lean_object* v___x_982_; lean_object* v___x_983_; 
v___x_981_ = lean_box(0);
v___x_982_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__8));
v___x_983_ = l_Lean_Expr_const___override(v___x_982_, v___x_981_);
return v___x_983_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__13(void){
_start:
{
lean_object* v___x_989_; lean_object* v___x_990_; lean_object* v___x_991_; 
v___x_989_ = lean_box(0);
v___x_990_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__12));
v___x_991_ = l_Lean_Expr_const___override(v___x_990_, v___x_989_);
return v___x_991_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__16(void){
_start:
{
lean_object* v___x_996_; lean_object* v___x_997_; lean_object* v___x_998_; 
v___x_996_ = lean_box(0);
v___x_997_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__15));
v___x_998_ = l_Lean_Expr_const___override(v___x_997_, v___x_996_);
return v___x_998_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__23(void){
_start:
{
lean_object* v___x_1011_; lean_object* v___x_1012_; 
v___x_1011_ = lean_unsigned_to_nat(0u);
v___x_1012_ = l_Lean_Level_ofNat(v___x_1011_);
return v___x_1012_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__27(void){
_start:
{
lean_object* v___x_1018_; lean_object* v___x_1019_; 
v___x_1018_ = lean_unsigned_to_nat(0u);
v___x_1019_ = l_Lean_mkNatLit(v___x_1018_);
return v___x_1019_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__38(void){
_start:
{
lean_object* v___x_1042_; lean_object* v___x_1043_; 
v___x_1042_ = lean_unsigned_to_nat(0u);
v___x_1043_ = lean_nat_to_int(v___x_1042_);
return v___x_1043_;
}
}
static uint8_t _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__39(void){
_start:
{
lean_object* v___x_1044_; uint8_t v___x_1045_; 
v___x_1044_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__38, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__38_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__38);
v___x_1045_ = lean_int_dec_le(v___x_1044_, v___x_1044_);
return v___x_1045_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__45(void){
_start:
{
lean_object* v___x_1055_; lean_object* v___x_1056_; 
v___x_1055_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__38, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__38_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__38);
v___x_1056_ = lean_int_neg(v___x_1055_);
return v___x_1056_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__46(void){
_start:
{
lean_object* v___x_1057_; lean_object* v___x_1058_; 
v___x_1057_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__45, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__45_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__45);
v___x_1058_ = l_Int_toNat(v___x_1057_);
return v___x_1058_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__47(void){
_start:
{
lean_object* v___x_1059_; lean_object* v___x_1060_; 
v___x_1059_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__46, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__46_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__46);
v___x_1060_ = l_Lean_instToExprInt_mkNat(v___x_1059_);
return v___x_1060_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__48(void){
_start:
{
lean_object* v___x_1061_; lean_object* v___x_1062_; 
v___x_1061_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__38, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__38_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__38);
v___x_1062_ = l_Int_toNat(v___x_1061_);
return v___x_1062_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__49(void){
_start:
{
lean_object* v___x_1063_; lean_object* v___x_1064_; 
v___x_1063_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__48, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__48_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__48);
v___x_1064_ = l_Lean_instToExprInt_mkNat(v___x_1063_);
return v___x_1064_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__50(void){
_start:
{
lean_object* v___x_1065_; lean_object* v___x_1066_; lean_object* v___x_1067_; 
v___x_1065_ = lean_box(0);
v___x_1066_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__23, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__23_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__23);
v___x_1067_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1067_, 0, v___x_1066_);
lean_ctor_set(v___x_1067_, 1, v___x_1065_);
return v___x_1067_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__51(void){
_start:
{
lean_object* v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; 
v___x_1068_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__50, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__50_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__50);
v___x_1069_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__22));
v___x_1070_ = l_Lean_Expr_const___override(v___x_1069_, v___x_1068_);
return v___x_1070_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__54(void){
_start:
{
lean_object* v___x_1075_; lean_object* v___x_1076_; lean_object* v___x_1077_; 
v___x_1075_ = lean_box(0);
v___x_1076_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__53));
v___x_1077_ = l_Lean_Expr_const___override(v___x_1076_, v___x_1075_);
return v___x_1077_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__57(void){
_start:
{
lean_object* v___x_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; 
v___x_1084_ = lean_box(0);
v___x_1085_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__56));
v___x_1086_ = l_Lean_Expr_const___override(v___x_1085_, v___x_1084_);
return v___x_1086_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__58(void){
_start:
{
lean_object* v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; 
v___x_1087_ = lean_box(0);
v___x_1088_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__33));
v___x_1089_ = l_Lean_Expr_const___override(v___x_1088_, v___x_1087_);
return v___x_1089_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__59(void){
_start:
{
lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; 
v___x_1090_ = lean_box(0);
v___x_1091_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__35));
v___x_1092_ = l_Lean_Expr_const___override(v___x_1091_, v___x_1090_);
return v___x_1092_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__60(void){
_start:
{
lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; 
v___x_1093_ = lean_box(0);
v___x_1094_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__37));
v___x_1095_ = l_Lean_Expr_const___override(v___x_1094_, v___x_1093_);
return v___x_1095_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__61(void){
_start:
{
lean_object* v___x_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; 
v___x_1096_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__50, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__50_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__50);
v___x_1097_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__42));
v___x_1098_ = l_Lean_Expr_const___override(v___x_1097_, v___x_1096_);
return v___x_1098_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__62(void){
_start:
{
lean_object* v___x_1099_; lean_object* v___x_1100_; lean_object* v___x_1101_; 
v___x_1099_ = lean_box(0);
v___x_1100_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__44));
v___x_1101_ = l_Lean_Expr_const___override(v___x_1100_, v___x_1099_);
return v___x_1101_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__63(void){
_start:
{
lean_object* v___x_1102_; lean_object* v___x_1103_; lean_object* v___x_1104_; lean_object* v___x_1105_; lean_object* v___x_1106_; 
v___x_1102_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__47, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__47_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__47);
v___x_1103_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__62, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__62_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__62);
v___x_1104_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__2, &l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__2_once, _init_l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__2);
v___x_1105_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__61, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__61_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__61);
v___x_1106_ = l_Lean_mkApp3(v___x_1105_, v___x_1104_, v___x_1103_, v___x_1102_);
return v___x_1106_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__66(void){
_start:
{
lean_object* v___x_1110_; lean_object* v___x_1111_; 
v___x_1110_ = lean_unsigned_to_nat(1u);
v___x_1111_ = l_Lean_Level_ofNat(v___x_1110_);
return v___x_1111_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__67(void){
_start:
{
lean_object* v___x_1112_; lean_object* v___x_1113_; lean_object* v___x_1114_; 
v___x_1112_ = lean_box(0);
v___x_1113_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__66, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__66_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__66);
v___x_1114_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1114_, 0, v___x_1113_);
lean_ctor_set(v___x_1114_, 1, v___x_1112_);
return v___x_1114_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__68(void){
_start:
{
lean_object* v___x_1115_; lean_object* v___x_1116_; lean_object* v___x_1117_; 
v___x_1115_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__67, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__67_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__67);
v___x_1116_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__65));
v___x_1117_ = l_Lean_Expr_const___override(v___x_1116_, v___x_1115_);
return v___x_1117_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__71(void){
_start:
{
lean_object* v___x_1122_; lean_object* v___x_1123_; lean_object* v___x_1124_; 
v___x_1122_ = lean_box(0);
v___x_1123_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__70));
v___x_1124_ = l_Lean_Expr_const___override(v___x_1123_, v___x_1122_);
return v___x_1124_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__74(void){
_start:
{
lean_object* v___x_1129_; lean_object* v___x_1130_; lean_object* v___x_1131_; 
v___x_1129_ = lean_box(0);
v___x_1130_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__73));
v___x_1131_ = l_Lean_Expr_const___override(v___x_1130_, v___x_1129_);
return v___x_1131_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__94(void){
_start:
{
lean_object* v___x_1170_; lean_object* v___x_1171_; lean_object* v___x_1172_; 
v___x_1170_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__50, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__50_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__50);
v___x_1171_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__93));
v___x_1172_ = l_Lean_Expr_const___override(v___x_1171_, v___x_1170_);
return v___x_1172_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg(lean_object* v_e_1173_, lean_object* v_a_1174_, lean_object* v_a_1175_, lean_object* v_a_1176_, lean_object* v_a_1177_, lean_object* v_a_1178_){
_start:
{
lean_object* v___x_1198_; lean_object* v_fst_1199_; 
v___x_1198_ = l_Lean_Expr_getAppFnArgs(v_e_1173_);
v_fst_1199_ = lean_ctor_get(v___x_1198_, 0);
lean_inc(v_fst_1199_);
if (lean_obj_tag(v_fst_1199_) == 1)
{
lean_object* v_pre_1200_; 
v_pre_1200_ = lean_ctor_get(v_fst_1199_, 0);
switch(lean_obj_tag(v_pre_1200_))
{
case 1:
{
lean_object* v_pre_1201_; 
lean_inc_ref(v_pre_1200_);
v_pre_1201_ = lean_ctor_get(v_pre_1200_, 0);
if (lean_obj_tag(v_pre_1201_) == 0)
{
lean_object* v_snd_1202_; lean_object* v___x_1204_; uint8_t v_isShared_1205_; uint8_t v_isSharedCheck_1699_; 
v_snd_1202_ = lean_ctor_get(v___x_1198_, 1);
v_isSharedCheck_1699_ = !lean_is_exclusive(v___x_1198_);
if (v_isSharedCheck_1699_ == 0)
{
lean_object* v_unused_1700_; 
v_unused_1700_ = lean_ctor_get(v___x_1198_, 0);
lean_dec(v_unused_1700_);
v___x_1204_ = v___x_1198_;
v_isShared_1205_ = v_isSharedCheck_1699_;
goto v_resetjp_1203_;
}
else
{
lean_inc(v_snd_1202_);
lean_dec(v___x_1198_);
v___x_1204_ = lean_box(0);
v_isShared_1205_ = v_isSharedCheck_1699_;
goto v_resetjp_1203_;
}
v_resetjp_1203_:
{
lean_object* v_str_1206_; lean_object* v_str_1207_; lean_object* v___x_1208_; uint8_t v___x_1209_; 
v_str_1206_ = lean_ctor_get(v_fst_1199_, 1);
lean_inc_ref(v_str_1206_);
lean_dec_ref(v_fst_1199_);
v_str_1207_ = lean_ctor_get(v_pre_1200_, 1);
lean_inc_ref(v_str_1207_);
lean_dec_ref(v_pre_1200_);
v___x_1208_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_natCast_x3f___closed__0));
v___x_1209_ = lean_string_dec_eq(v_str_1207_, v___x_1208_);
if (v___x_1209_ == 0)
{
lean_object* v___x_1210_; uint8_t v___x_1211_; 
v___x_1210_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__3));
v___x_1211_ = lean_string_dec_eq(v_str_1207_, v___x_1210_);
if (v___x_1211_ == 0)
{
lean_object* v___x_1212_; uint8_t v___x_1213_; 
v___x_1212_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__0));
v___x_1213_ = lean_string_dec_eq(v_str_1207_, v___x_1212_);
if (v___x_1213_ == 0)
{
lean_object* v___x_1214_; uint8_t v___x_1215_; 
v___x_1214_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__1));
v___x_1215_ = lean_string_dec_eq(v_str_1207_, v___x_1214_);
if (v___x_1215_ == 0)
{
lean_object* v___x_1216_; uint8_t v___x_1217_; 
v___x_1216_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__2));
v___x_1217_ = lean_string_dec_eq(v_str_1207_, v___x_1216_);
lean_dec_ref(v_str_1207_);
if (v___x_1217_ == 0)
{
lean_dec_ref(v_str_1206_);
lean_del_object(v___x_1204_);
lean_dec(v_snd_1202_);
goto v___jp_1186_;
}
else
{
lean_object* v___x_1218_; uint8_t v___x_1219_; 
v___x_1218_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__3));
v___x_1219_ = lean_string_dec_eq(v_str_1206_, v___x_1218_);
lean_dec_ref(v_str_1206_);
if (v___x_1219_ == 0)
{
lean_del_object(v___x_1204_);
lean_dec(v_snd_1202_);
goto v___jp_1186_;
}
else
{
lean_object* v___x_1220_; lean_object* v___x_1221_; uint8_t v___x_1222_; 
v___x_1220_ = lean_array_get_size(v_snd_1202_);
v___x_1221_ = lean_unsigned_to_nat(4u);
v___x_1222_ = lean_nat_dec_eq(v___x_1220_, v___x_1221_);
if (v___x_1222_ == 0)
{
lean_del_object(v___x_1204_);
lean_dec(v_snd_1202_);
goto v___jp_1186_;
}
else
{
lean_object* v___x_1223_; lean_object* v___x_1224_; lean_object* v___x_1225_; lean_object* v___x_1226_; lean_object* v___x_1227_; lean_object* v___x_1228_; lean_object* v___x_1229_; lean_object* v___x_1230_; lean_object* v___x_1231_; lean_object* v___x_1233_; 
v___x_1223_ = lean_unsigned_to_nat(2u);
v___x_1224_ = lean_array_fget(v_snd_1202_, v___x_1223_);
v___x_1225_ = lean_unsigned_to_nat(3u);
v___x_1226_ = lean_array_fget(v_snd_1202_, v___x_1225_);
lean_dec(v_snd_1202_);
v___x_1227_ = lean_box(0);
v___x_1228_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__6, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__6_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__6);
lean_inc(v___x_1226_);
lean_inc(v___x_1224_);
v___x_1229_ = l_Lean_mkAppB(v___x_1228_, v___x_1224_, v___x_1226_);
v___x_1230_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__9, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__9_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__9);
v___x_1231_ = l_Lean_mkAppB(v___x_1230_, v___x_1224_, v___x_1226_);
if (v_isShared_1205_ == 0)
{
lean_ctor_set_tag(v___x_1204_, 1);
lean_ctor_set(v___x_1204_, 1, v___x_1227_);
lean_ctor_set(v___x_1204_, 0, v___x_1231_);
v___x_1233_ = v___x_1204_;
goto v_reusejp_1232_;
}
else
{
lean_object* v_reuseFailAlloc_1236_; 
v_reuseFailAlloc_1236_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1236_, 0, v___x_1231_);
lean_ctor_set(v_reuseFailAlloc_1236_, 1, v___x_1227_);
v___x_1233_ = v_reuseFailAlloc_1236_;
goto v_reusejp_1232_;
}
v_reusejp_1232_:
{
lean_object* v___x_1234_; lean_object* v___x_1235_; 
v___x_1234_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1234_, 0, v___x_1229_);
lean_ctor_set(v___x_1234_, 1, v___x_1233_);
v___x_1235_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1235_, 0, v___x_1234_);
return v___x_1235_;
}
}
}
}
}
else
{
lean_object* v___x_1237_; uint8_t v___x_1238_; 
lean_dec_ref(v_str_1207_);
v___x_1237_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__10));
v___x_1238_ = lean_string_dec_eq(v_str_1206_, v___x_1237_);
lean_dec_ref(v_str_1206_);
if (v___x_1238_ == 0)
{
lean_del_object(v___x_1204_);
lean_dec(v_snd_1202_);
goto v___jp_1186_;
}
else
{
lean_object* v___x_1239_; lean_object* v___x_1240_; uint8_t v___x_1241_; 
v___x_1239_ = lean_array_get_size(v_snd_1202_);
v___x_1240_ = lean_unsigned_to_nat(4u);
v___x_1241_ = lean_nat_dec_eq(v___x_1239_, v___x_1240_);
if (v___x_1241_ == 0)
{
lean_del_object(v___x_1204_);
lean_dec(v_snd_1202_);
goto v___jp_1186_;
}
else
{
lean_object* v___x_1242_; lean_object* v___x_1243_; lean_object* v___x_1244_; lean_object* v___x_1245_; lean_object* v___x_1246_; lean_object* v___x_1247_; lean_object* v___x_1248_; lean_object* v___x_1249_; lean_object* v___x_1250_; lean_object* v___x_1252_; 
v___x_1242_ = lean_unsigned_to_nat(2u);
v___x_1243_ = lean_array_fget(v_snd_1202_, v___x_1242_);
v___x_1244_ = lean_unsigned_to_nat(3u);
v___x_1245_ = lean_array_fget(v_snd_1202_, v___x_1244_);
lean_dec(v_snd_1202_);
v___x_1246_ = lean_box(0);
v___x_1247_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__13, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__13_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__13);
lean_inc(v___x_1245_);
lean_inc(v___x_1243_);
v___x_1248_ = l_Lean_mkAppB(v___x_1247_, v___x_1243_, v___x_1245_);
v___x_1249_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__16, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__16_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__16);
v___x_1250_ = l_Lean_mkAppB(v___x_1249_, v___x_1243_, v___x_1245_);
if (v_isShared_1205_ == 0)
{
lean_ctor_set_tag(v___x_1204_, 1);
lean_ctor_set(v___x_1204_, 1, v___x_1246_);
lean_ctor_set(v___x_1204_, 0, v___x_1250_);
v___x_1252_ = v___x_1204_;
goto v_reusejp_1251_;
}
else
{
lean_object* v_reuseFailAlloc_1255_; 
v_reuseFailAlloc_1255_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1255_, 0, v___x_1250_);
lean_ctor_set(v_reuseFailAlloc_1255_, 1, v___x_1246_);
v___x_1252_ = v_reuseFailAlloc_1255_;
goto v_reusejp_1251_;
}
v_reusejp_1251_:
{
lean_object* v___x_1253_; lean_object* v___x_1254_; 
v___x_1253_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1253_, 0, v___x_1248_);
lean_ctor_set(v___x_1253_, 1, v___x_1252_);
v___x_1254_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1254_, 0, v___x_1253_);
return v___x_1254_;
}
}
}
}
}
else
{
lean_object* v___x_1256_; uint8_t v___x_1257_; 
lean_dec_ref(v_str_1207_);
v___x_1256_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__17));
v___x_1257_ = lean_string_dec_eq(v_str_1206_, v___x_1256_);
lean_dec_ref(v_str_1206_);
if (v___x_1257_ == 0)
{
lean_del_object(v___x_1204_);
lean_dec(v_snd_1202_);
goto v___jp_1186_;
}
else
{
lean_object* v___x_1258_; lean_object* v___x_1259_; uint8_t v___x_1260_; 
v___x_1258_ = lean_array_get_size(v_snd_1202_);
v___x_1259_ = lean_unsigned_to_nat(6u);
v___x_1260_ = lean_nat_dec_eq(v___x_1258_, v___x_1259_);
if (v___x_1260_ == 0)
{
lean_del_object(v___x_1204_);
lean_dec(v_snd_1202_);
goto v___jp_1186_;
}
else
{
lean_object* v___x_1261_; lean_object* v___x_1262_; lean_object* v___x_1263_; lean_object* v_fst_1264_; 
v___x_1261_ = lean_unsigned_to_nat(5u);
v___x_1262_ = lean_array_fget(v_snd_1202_, v___x_1261_);
lean_inc(v___x_1262_);
v___x_1263_ = l_Lean_Expr_getAppFnArgs(v___x_1262_);
v_fst_1264_ = lean_ctor_get(v___x_1263_, 0);
lean_inc(v_fst_1264_);
if (lean_obj_tag(v_fst_1264_) == 1)
{
lean_object* v_pre_1265_; 
v_pre_1265_ = lean_ctor_get(v_fst_1264_, 0);
lean_inc(v_pre_1265_);
if (lean_obj_tag(v_pre_1265_) == 1)
{
lean_object* v_pre_1266_; 
v_pre_1266_ = lean_ctor_get(v_pre_1265_, 0);
if (lean_obj_tag(v_pre_1266_) == 0)
{
lean_object* v_snd_1267_; lean_object* v___x_1269_; uint8_t v_isShared_1270_; uint8_t v_isSharedCheck_1466_; 
v_snd_1267_ = lean_ctor_get(v___x_1263_, 1);
v_isSharedCheck_1466_ = !lean_is_exclusive(v___x_1263_);
if (v_isSharedCheck_1466_ == 0)
{
lean_object* v_unused_1467_; 
v_unused_1467_ = lean_ctor_get(v___x_1263_, 0);
lean_dec(v_unused_1467_);
v___x_1269_ = v___x_1263_;
v_isShared_1270_ = v_isSharedCheck_1466_;
goto v_resetjp_1268_;
}
else
{
lean_inc(v_snd_1267_);
lean_dec(v___x_1263_);
v___x_1269_ = lean_box(0);
v_isShared_1270_ = v_isSharedCheck_1466_;
goto v_resetjp_1268_;
}
v_resetjp_1268_:
{
lean_object* v_str_1271_; lean_object* v_str_1272_; lean_object* v___x_1273_; lean_object* v___x_1274_; lean_object* v___x_1312_; uint8_t v___x_1313_; 
v_str_1271_ = lean_ctor_get(v_fst_1264_, 1);
lean_inc_ref(v_str_1271_);
lean_dec_ref(v_fst_1264_);
v_str_1272_ = lean_ctor_get(v_pre_1265_, 1);
lean_inc_ref(v_str_1272_);
lean_dec_ref(v_pre_1265_);
v___x_1273_ = lean_unsigned_to_nat(4u);
v___x_1274_ = lean_array_fget(v_snd_1202_, v___x_1273_);
lean_dec(v_snd_1202_);
v___x_1312_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__4));
v___x_1313_ = lean_string_dec_eq(v_str_1272_, v___x_1312_);
if (v___x_1313_ == 0)
{
uint8_t v___x_1314_; 
v___x_1314_ = lean_string_dec_eq(v_str_1272_, v___x_1208_);
lean_dec_ref(v_str_1272_);
if (v___x_1314_ == 0)
{
lean_dec(v___x_1274_);
lean_dec_ref(v_str_1271_);
lean_del_object(v___x_1269_);
lean_dec(v_snd_1267_);
lean_dec(v___x_1262_);
lean_del_object(v___x_1204_);
goto v___jp_1189_;
}
else
{
lean_object* v___x_1315_; uint8_t v___x_1316_; 
v___x_1315_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_natCast_x3f___closed__1));
v___x_1316_ = lean_string_dec_eq(v_str_1271_, v___x_1315_);
lean_dec_ref(v_str_1271_);
if (v___x_1316_ == 0)
{
lean_dec(v___x_1274_);
lean_del_object(v___x_1269_);
lean_dec(v_snd_1267_);
lean_dec(v___x_1262_);
lean_del_object(v___x_1204_);
goto v___jp_1189_;
}
else
{
lean_object* v___x_1317_; lean_object* v___x_1318_; uint8_t v___x_1319_; 
v___x_1317_ = lean_array_get_size(v_snd_1267_);
v___x_1318_ = lean_unsigned_to_nat(3u);
v___x_1319_ = lean_nat_dec_eq(v___x_1317_, v___x_1318_);
if (v___x_1319_ == 0)
{
lean_dec(v___x_1274_);
lean_del_object(v___x_1269_);
lean_dec(v_snd_1267_);
lean_dec(v___x_1262_);
lean_del_object(v___x_1204_);
goto v___jp_1189_;
}
else
{
lean_object* v___x_1320_; lean_object* v___x_1321_; 
v___x_1320_ = lean_unsigned_to_nat(0u);
v___x_1321_ = lean_array_fget_borrowed(v_snd_1267_, v___x_1320_);
if (lean_obj_tag(v___x_1321_) == 4)
{
lean_object* v_declName_1322_; 
v_declName_1322_ = lean_ctor_get(v___x_1321_, 0);
if (lean_obj_tag(v_declName_1322_) == 1)
{
lean_object* v_pre_1323_; 
v_pre_1323_ = lean_ctor_get(v_declName_1322_, 0);
if (lean_obj_tag(v_pre_1323_) == 0)
{
lean_object* v_us_1324_; lean_object* v_str_1325_; lean_object* v___x_1326_; uint8_t v___x_1327_; 
v_us_1324_ = lean_ctor_get(v___x_1321_, 1);
lean_inc(v_us_1324_);
v_str_1325_ = lean_ctor_get(v_declName_1322_, 1);
v___x_1326_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__0));
v___x_1327_ = lean_string_dec_eq(v_str_1325_, v___x_1326_);
if (v___x_1327_ == 0)
{
lean_dec(v_us_1324_);
lean_dec(v___x_1274_);
lean_del_object(v___x_1269_);
lean_dec(v_snd_1267_);
lean_dec(v___x_1262_);
lean_del_object(v___x_1204_);
goto v___jp_1189_;
}
else
{
if (lean_obj_tag(v_us_1324_) == 0)
{
lean_object* v___x_1328_; lean_object* v___x_1329_; lean_object* v___x_1330_; lean_object* v_fst_1331_; 
v___x_1328_ = lean_unsigned_to_nat(2u);
v___x_1329_ = lean_array_fget(v_snd_1267_, v___x_1328_);
lean_dec(v_snd_1267_);
lean_inc(v___x_1329_);
v___x_1330_ = l_Lean_Expr_getAppFnArgs(v___x_1329_);
v_fst_1331_ = lean_ctor_get(v___x_1330_, 0);
lean_inc(v_fst_1331_);
if (lean_obj_tag(v_fst_1331_) == 1)
{
lean_object* v_pre_1332_; 
v_pre_1332_ = lean_ctor_get(v_fst_1331_, 0);
lean_inc(v_pre_1332_);
if (lean_obj_tag(v_pre_1332_) == 1)
{
lean_object* v_pre_1333_; 
v_pre_1333_ = lean_ctor_get(v_pre_1332_, 0);
if (lean_obj_tag(v_pre_1333_) == 0)
{
lean_object* v_snd_1334_; lean_object* v___x_1336_; uint8_t v_isShared_1337_; uint8_t v_isSharedCheck_1413_; 
v_snd_1334_ = lean_ctor_get(v___x_1330_, 1);
v_isSharedCheck_1413_ = !lean_is_exclusive(v___x_1330_);
if (v_isSharedCheck_1413_ == 0)
{
lean_object* v_unused_1414_; 
v_unused_1414_ = lean_ctor_get(v___x_1330_, 0);
lean_dec(v_unused_1414_);
v___x_1336_ = v___x_1330_;
v_isShared_1337_ = v_isSharedCheck_1413_;
goto v_resetjp_1335_;
}
else
{
lean_inc(v_snd_1334_);
lean_dec(v___x_1330_);
v___x_1336_ = lean_box(0);
v_isShared_1337_ = v_isSharedCheck_1413_;
goto v_resetjp_1335_;
}
v_resetjp_1335_:
{
lean_object* v_str_1338_; lean_object* v_str_1339_; uint8_t v___x_1340_; 
v_str_1338_ = lean_ctor_get(v_fst_1331_, 1);
lean_inc_ref(v_str_1338_);
lean_dec_ref(v_fst_1331_);
v_str_1339_ = lean_ctor_get(v_pre_1332_, 1);
lean_inc_ref(v_str_1339_);
lean_dec_ref(v_pre_1332_);
v___x_1340_ = lean_string_dec_eq(v_str_1339_, v___x_1312_);
lean_dec_ref(v_str_1339_);
if (v___x_1340_ == 0)
{
lean_dec_ref(v_str_1338_);
lean_del_object(v___x_1336_);
lean_dec(v_snd_1334_);
lean_dec(v___x_1329_);
lean_del_object(v___x_1269_);
lean_del_object(v___x_1204_);
goto v___jp_1275_;
}
else
{
lean_object* v___x_1341_; uint8_t v___x_1342_; 
v___x_1341_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__5));
v___x_1342_ = lean_string_dec_eq(v_str_1338_, v___x_1341_);
lean_dec_ref(v_str_1338_);
if (v___x_1342_ == 0)
{
lean_del_object(v___x_1336_);
lean_dec(v_snd_1334_);
lean_dec(v___x_1329_);
lean_del_object(v___x_1269_);
lean_del_object(v___x_1204_);
goto v___jp_1275_;
}
else
{
lean_object* v___x_1343_; uint8_t v___x_1344_; 
v___x_1343_ = lean_array_get_size(v_snd_1334_);
v___x_1344_ = lean_nat_dec_eq(v___x_1343_, v___x_1259_);
if (v___x_1344_ == 0)
{
lean_del_object(v___x_1336_);
lean_dec(v_snd_1334_);
lean_dec(v___x_1329_);
lean_del_object(v___x_1269_);
lean_del_object(v___x_1204_);
goto v___jp_1275_;
}
else
{
lean_object* v___x_1345_; lean_object* v___x_1346_; 
v___x_1345_ = lean_array_fget(v_snd_1334_, v___x_1273_);
lean_inc(v___x_1345_);
v___x_1346_ = l_Lean_Elab_Tactic_Omega_natCast_x3f(v___x_1345_);
if (lean_obj_tag(v___x_1346_) == 0)
{
lean_dec(v___x_1345_);
lean_del_object(v___x_1336_);
lean_dec(v_snd_1334_);
lean_dec(v___x_1329_);
lean_dec(v___x_1274_);
lean_del_object(v___x_1269_);
lean_dec(v___x_1262_);
lean_del_object(v___x_1204_);
goto v___jp_1195_;
}
else
{
lean_object* v_val_1347_; uint8_t v___x_1348_; 
v_val_1347_ = lean_ctor_get(v___x_1346_, 0);
lean_inc(v_val_1347_);
lean_dec_ref(v___x_1346_);
v___x_1348_ = lean_nat_dec_eq(v_val_1347_, v___x_1320_);
lean_dec(v_val_1347_);
if (v___x_1348_ == 0)
{
lean_object* v___x_1349_; lean_object* v___x_1350_; lean_object* v___x_1352_; 
v___x_1349_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__22));
v___x_1350_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__23, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__23_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__23);
if (v_isShared_1337_ == 0)
{
lean_ctor_set_tag(v___x_1336_, 1);
lean_ctor_set(v___x_1336_, 1, v_us_1324_);
lean_ctor_set(v___x_1336_, 0, v___x_1350_);
v___x_1352_ = v___x_1336_;
goto v_reusejp_1351_;
}
else
{
lean_object* v_reuseFailAlloc_1412_; 
v_reuseFailAlloc_1412_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1412_, 0, v___x_1350_);
lean_ctor_set(v_reuseFailAlloc_1412_, 1, v_us_1324_);
v___x_1352_ = v_reuseFailAlloc_1412_;
goto v_reusejp_1351_;
}
v_reusejp_1351_:
{
lean_object* v___x_1353_; lean_object* v___x_1354_; lean_object* v___x_1355_; lean_object* v___x_1356_; lean_object* v___x_1357_; lean_object* v___x_1358_; lean_object* v_b__pos_1359_; lean_object* v___x_1360_; 
lean_inc_ref(v___x_1352_);
v___x_1353_ = l_Lean_Expr_const___override(v___x_1349_, v___x_1352_);
v___x_1354_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__24));
v___x_1355_ = l_Lean_Expr_const___override(v___x_1354_, v_us_1324_);
v___x_1356_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__26));
v___x_1357_ = l_Lean_Expr_const___override(v___x_1356_, v_us_1324_);
v___x_1358_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__27, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__27_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__27);
lean_inc(v___x_1345_);
v_b__pos_1359_ = l_Lean_mkApp4(v___x_1353_, v___x_1355_, v___x_1357_, v___x_1358_, v___x_1345_);
v___x_1360_ = l_Lean_Meta_mkDecideProof(v_b__pos_1359_, v_a_1175_, v_a_1176_, v_a_1177_, v_a_1178_);
if (lean_obj_tag(v___x_1360_) == 0)
{
lean_object* v_a_1361_; lean_object* v___x_1363_; uint8_t v_isShared_1364_; uint8_t v_isSharedCheck_1403_; 
v_a_1361_ = lean_ctor_get(v___x_1360_, 0);
v_isSharedCheck_1403_ = !lean_is_exclusive(v___x_1360_);
if (v_isSharedCheck_1403_ == 0)
{
v___x_1363_ = v___x_1360_;
v_isShared_1364_ = v_isSharedCheck_1403_;
goto v_resetjp_1362_;
}
else
{
lean_inc(v_a_1361_);
lean_dec(v___x_1360_);
v___x_1363_ = lean_box(0);
v_isShared_1364_ = v_isSharedCheck_1403_;
goto v_resetjp_1362_;
}
v_resetjp_1362_:
{
lean_object* v___x_1365_; lean_object* v___x_1366_; lean_object* v___x_1367_; lean_object* v___x_1368_; lean_object* v___x_1369_; lean_object* v___x_1370_; lean_object* v___x_1371_; lean_object* v___x_1372_; lean_object* v___x_1373_; lean_object* v___x_1374_; lean_object* v___x_1375_; lean_object* v___y_1377_; uint8_t v___x_1393_; 
v___x_1365_ = lean_array_fget(v_snd_1334_, v___x_1261_);
lean_dec(v_snd_1334_);
v___x_1366_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__29));
v___x_1367_ = l_Lean_Expr_const___override(v___x_1366_, v_us_1324_);
v___x_1368_ = l_Lean_mkApp3(v___x_1367_, v___x_1345_, v___x_1365_, v_a_1361_);
v___x_1369_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__31));
v___x_1370_ = l_Lean_Expr_const___override(v___x_1369_, v_us_1324_);
v___x_1371_ = l_Lean_mkAppB(v___x_1370_, v___x_1329_, v___x_1368_);
v___x_1372_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__33));
v___x_1373_ = l_Lean_Expr_const___override(v___x_1372_, v_us_1324_);
v___x_1374_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__35));
v___x_1375_ = l_Lean_Expr_const___override(v___x_1374_, v_us_1324_);
v___x_1393_ = lean_uint8_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__39, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__39_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__39);
if (v___x_1393_ == 0)
{
lean_object* v___x_1394_; lean_object* v___x_1395_; lean_object* v___x_1396_; lean_object* v___x_1397_; lean_object* v___x_1398_; lean_object* v___x_1399_; lean_object* v___x_1400_; lean_object* v___x_1401_; 
v___x_1394_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__42));
v___x_1395_ = l_Lean_Expr_const___override(v___x_1394_, v___x_1352_);
v___x_1396_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__1));
v___x_1397_ = l_Lean_Expr_const___override(v___x_1396_, v_us_1324_);
v___x_1398_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__44));
v___x_1399_ = l_Lean_Expr_const___override(v___x_1398_, v_us_1324_);
v___x_1400_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__47, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__47_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__47);
v___x_1401_ = l_Lean_mkApp3(v___x_1395_, v___x_1397_, v___x_1399_, v___x_1400_);
v___y_1377_ = v___x_1401_;
goto v___jp_1376_;
}
else
{
lean_object* v___x_1402_; 
lean_dec_ref(v___x_1352_);
v___x_1402_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__49, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__49_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__49);
v___y_1377_ = v___x_1402_;
goto v___jp_1376_;
}
v___jp_1376_:
{
lean_object* v___x_1378_; lean_object* v___x_1379_; lean_object* v___x_1380_; lean_object* v___x_1381_; lean_object* v___x_1382_; lean_object* v___x_1383_; lean_object* v___x_1385_; 
lean_inc_ref(v___x_1371_);
lean_inc_n(v___x_1262_, 2);
v___x_1378_ = l_Lean_mkApp3(v___x_1375_, v___x_1262_, v___y_1377_, v___x_1371_);
lean_inc(v___x_1274_);
v___x_1379_ = l_Lean_mkApp3(v___x_1373_, v___x_1274_, v___x_1262_, v___x_1378_);
v___x_1380_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__37));
v___x_1381_ = l_Lean_Expr_const___override(v___x_1380_, v_us_1324_);
v___x_1382_ = l_Lean_mkApp3(v___x_1381_, v___x_1274_, v___x_1262_, v___x_1371_);
v___x_1383_ = lean_box(0);
if (v_isShared_1270_ == 0)
{
lean_ctor_set_tag(v___x_1269_, 1);
lean_ctor_set(v___x_1269_, 1, v___x_1383_);
lean_ctor_set(v___x_1269_, 0, v___x_1382_);
v___x_1385_ = v___x_1269_;
goto v_reusejp_1384_;
}
else
{
lean_object* v_reuseFailAlloc_1392_; 
v_reuseFailAlloc_1392_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1392_, 0, v___x_1382_);
lean_ctor_set(v_reuseFailAlloc_1392_, 1, v___x_1383_);
v___x_1385_ = v_reuseFailAlloc_1392_;
goto v_reusejp_1384_;
}
v_reusejp_1384_:
{
lean_object* v___x_1387_; 
if (v_isShared_1205_ == 0)
{
lean_ctor_set_tag(v___x_1204_, 1);
lean_ctor_set(v___x_1204_, 1, v___x_1385_);
lean_ctor_set(v___x_1204_, 0, v___x_1379_);
v___x_1387_ = v___x_1204_;
goto v_reusejp_1386_;
}
else
{
lean_object* v_reuseFailAlloc_1391_; 
v_reuseFailAlloc_1391_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1391_, 0, v___x_1379_);
lean_ctor_set(v_reuseFailAlloc_1391_, 1, v___x_1385_);
v___x_1387_ = v_reuseFailAlloc_1391_;
goto v_reusejp_1386_;
}
v_reusejp_1386_:
{
lean_object* v___x_1389_; 
if (v_isShared_1364_ == 0)
{
lean_ctor_set(v___x_1363_, 0, v___x_1387_);
v___x_1389_ = v___x_1363_;
goto v_reusejp_1388_;
}
else
{
lean_object* v_reuseFailAlloc_1390_; 
v_reuseFailAlloc_1390_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1390_, 0, v___x_1387_);
v___x_1389_ = v_reuseFailAlloc_1390_;
goto v_reusejp_1388_;
}
v_reusejp_1388_:
{
return v___x_1389_;
}
}
}
}
}
}
else
{
lean_object* v_a_1404_; lean_object* v___x_1406_; uint8_t v_isShared_1407_; uint8_t v_isSharedCheck_1411_; 
lean_dec_ref(v___x_1352_);
lean_dec(v___x_1345_);
lean_dec(v_snd_1334_);
lean_dec(v___x_1329_);
lean_dec(v___x_1274_);
lean_del_object(v___x_1269_);
lean_dec(v___x_1262_);
lean_del_object(v___x_1204_);
v_a_1404_ = lean_ctor_get(v___x_1360_, 0);
v_isSharedCheck_1411_ = !lean_is_exclusive(v___x_1360_);
if (v_isSharedCheck_1411_ == 0)
{
v___x_1406_ = v___x_1360_;
v_isShared_1407_ = v_isSharedCheck_1411_;
goto v_resetjp_1405_;
}
else
{
lean_inc(v_a_1404_);
lean_dec(v___x_1360_);
v___x_1406_ = lean_box(0);
v_isShared_1407_ = v_isSharedCheck_1411_;
goto v_resetjp_1405_;
}
v_resetjp_1405_:
{
lean_object* v___x_1409_; 
if (v_isShared_1407_ == 0)
{
v___x_1409_ = v___x_1406_;
goto v_reusejp_1408_;
}
else
{
lean_object* v_reuseFailAlloc_1410_; 
v_reuseFailAlloc_1410_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1410_, 0, v_a_1404_);
v___x_1409_ = v_reuseFailAlloc_1410_;
goto v_reusejp_1408_;
}
v_reusejp_1408_:
{
return v___x_1409_;
}
}
}
}
}
else
{
lean_dec(v___x_1345_);
lean_del_object(v___x_1336_);
lean_dec(v_snd_1334_);
lean_dec(v___x_1329_);
lean_dec(v___x_1274_);
lean_del_object(v___x_1269_);
lean_dec(v___x_1262_);
lean_del_object(v___x_1204_);
goto v___jp_1195_;
}
}
}
}
}
}
}
else
{
lean_dec_ref(v_pre_1332_);
lean_dec_ref(v_fst_1331_);
lean_dec_ref(v___x_1330_);
lean_dec(v___x_1329_);
lean_del_object(v___x_1269_);
lean_del_object(v___x_1204_);
goto v___jp_1275_;
}
}
else
{
lean_dec(v_pre_1332_);
lean_dec_ref(v_fst_1331_);
lean_dec_ref(v___x_1330_);
lean_dec(v___x_1329_);
lean_del_object(v___x_1269_);
lean_del_object(v___x_1204_);
goto v___jp_1275_;
}
}
else
{
lean_dec(v_fst_1331_);
lean_dec_ref(v___x_1330_);
lean_dec(v___x_1329_);
lean_del_object(v___x_1269_);
lean_del_object(v___x_1204_);
goto v___jp_1275_;
}
}
else
{
lean_dec(v_us_1324_);
lean_dec(v___x_1274_);
lean_del_object(v___x_1269_);
lean_dec(v_snd_1267_);
lean_dec(v___x_1262_);
lean_del_object(v___x_1204_);
goto v___jp_1189_;
}
}
}
else
{
lean_dec(v___x_1274_);
lean_del_object(v___x_1269_);
lean_dec(v_snd_1267_);
lean_dec(v___x_1262_);
lean_del_object(v___x_1204_);
goto v___jp_1189_;
}
}
else
{
lean_dec(v___x_1274_);
lean_del_object(v___x_1269_);
lean_dec(v_snd_1267_);
lean_dec(v___x_1262_);
lean_del_object(v___x_1204_);
goto v___jp_1189_;
}
}
else
{
lean_dec(v___x_1274_);
lean_del_object(v___x_1269_);
lean_dec(v_snd_1267_);
lean_dec(v___x_1262_);
lean_del_object(v___x_1204_);
goto v___jp_1189_;
}
}
}
}
}
else
{
lean_object* v___x_1415_; uint8_t v___x_1416_; 
lean_dec_ref(v_str_1272_);
v___x_1415_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__5));
v___x_1416_ = lean_string_dec_eq(v_str_1271_, v___x_1415_);
lean_dec_ref(v_str_1271_);
if (v___x_1416_ == 0)
{
lean_dec(v___x_1274_);
lean_del_object(v___x_1269_);
lean_dec(v_snd_1267_);
lean_dec(v___x_1262_);
lean_del_object(v___x_1204_);
goto v___jp_1189_;
}
else
{
lean_object* v___x_1417_; uint8_t v___x_1418_; 
v___x_1417_ = lean_array_get_size(v_snd_1267_);
v___x_1418_ = lean_nat_dec_eq(v___x_1417_, v___x_1259_);
if (v___x_1418_ == 0)
{
lean_dec(v___x_1274_);
lean_del_object(v___x_1269_);
lean_dec(v_snd_1267_);
lean_dec(v___x_1262_);
lean_del_object(v___x_1204_);
goto v___jp_1189_;
}
else
{
lean_object* v___x_1419_; lean_object* v___x_1420_; 
v___x_1419_ = lean_array_fget(v_snd_1267_, v___x_1273_);
lean_inc(v___x_1419_);
v___x_1420_ = l_Lean_Elab_Tactic_Omega_natCast_x3f(v___x_1419_);
if (lean_obj_tag(v___x_1420_) == 0)
{
lean_dec(v___x_1419_);
lean_dec(v___x_1274_);
lean_del_object(v___x_1269_);
lean_dec(v_snd_1267_);
lean_dec(v___x_1262_);
lean_del_object(v___x_1204_);
goto v___jp_1183_;
}
else
{
lean_object* v_val_1421_; lean_object* v___x_1422_; uint8_t v___x_1423_; 
v_val_1421_ = lean_ctor_get(v___x_1420_, 0);
lean_inc(v_val_1421_);
lean_dec_ref(v___x_1420_);
v___x_1422_ = lean_unsigned_to_nat(0u);
v___x_1423_ = lean_nat_dec_eq(v_val_1421_, v___x_1422_);
lean_dec(v_val_1421_);
if (v___x_1423_ == 0)
{
lean_object* v___x_1424_; lean_object* v___x_1425_; lean_object* v___x_1426_; lean_object* v___x_1427_; lean_object* v___x_1428_; lean_object* v___y_1430_; uint8_t v___x_1463_; 
v___x_1424_ = lean_array_fget(v_snd_1267_, v___x_1261_);
lean_dec(v_snd_1267_);
v___x_1425_ = lean_box(0);
v___x_1426_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__51, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__51_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__51);
v___x_1427_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__2, &l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__2_once, _init_l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__2);
v___x_1428_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__54, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__54_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__54);
v___x_1463_ = lean_uint8_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__39, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__39_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__39);
if (v___x_1463_ == 0)
{
lean_object* v___x_1464_; 
v___x_1464_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__63, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__63_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__63);
v___y_1430_ = v___x_1464_;
goto v___jp_1429_;
}
else
{
lean_object* v___x_1465_; 
v___x_1465_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__49, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__49_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__49);
v___y_1430_ = v___x_1465_;
goto v___jp_1429_;
}
v___jp_1429_:
{
lean_object* v_b__pos_1431_; lean_object* v___x_1432_; 
lean_inc(v___x_1419_);
lean_inc_ref(v___y_1430_);
v_b__pos_1431_ = l_Lean_mkApp4(v___x_1426_, v___x_1427_, v___x_1428_, v___y_1430_, v___x_1419_);
v___x_1432_ = l_Lean_Meta_mkDecideProof(v_b__pos_1431_, v_a_1175_, v_a_1176_, v_a_1177_, v_a_1178_);
if (lean_obj_tag(v___x_1432_) == 0)
{
lean_object* v_a_1433_; lean_object* v___x_1435_; uint8_t v_isShared_1436_; uint8_t v_isSharedCheck_1454_; 
v_a_1433_ = lean_ctor_get(v___x_1432_, 0);
v_isSharedCheck_1454_ = !lean_is_exclusive(v___x_1432_);
if (v_isSharedCheck_1454_ == 0)
{
v___x_1435_ = v___x_1432_;
v_isShared_1436_ = v_isSharedCheck_1454_;
goto v_resetjp_1434_;
}
else
{
lean_inc(v_a_1433_);
lean_dec(v___x_1432_);
v___x_1435_ = lean_box(0);
v_isShared_1436_ = v_isSharedCheck_1454_;
goto v_resetjp_1434_;
}
v_resetjp_1434_:
{
lean_object* v___x_1437_; lean_object* v___x_1438_; lean_object* v___x_1439_; lean_object* v___x_1440_; lean_object* v___x_1441_; lean_object* v___x_1442_; lean_object* v___x_1443_; lean_object* v___x_1444_; lean_object* v___x_1446_; 
v___x_1437_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__57, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__57_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__57);
v___x_1438_ = l_Lean_mkApp3(v___x_1437_, v___x_1419_, v___x_1424_, v_a_1433_);
v___x_1439_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__58, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__58_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__58);
v___x_1440_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__59, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__59_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__59);
lean_inc_ref(v___x_1438_);
lean_inc_ref(v___y_1430_);
lean_inc_n(v___x_1262_, 2);
v___x_1441_ = l_Lean_mkApp3(v___x_1440_, v___x_1262_, v___y_1430_, v___x_1438_);
lean_inc(v___x_1274_);
v___x_1442_ = l_Lean_mkApp3(v___x_1439_, v___x_1274_, v___x_1262_, v___x_1441_);
v___x_1443_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__60, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__60_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__60);
v___x_1444_ = l_Lean_mkApp3(v___x_1443_, v___x_1274_, v___x_1262_, v___x_1438_);
if (v_isShared_1270_ == 0)
{
lean_ctor_set_tag(v___x_1269_, 1);
lean_ctor_set(v___x_1269_, 1, v___x_1425_);
lean_ctor_set(v___x_1269_, 0, v___x_1444_);
v___x_1446_ = v___x_1269_;
goto v_reusejp_1445_;
}
else
{
lean_object* v_reuseFailAlloc_1453_; 
v_reuseFailAlloc_1453_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1453_, 0, v___x_1444_);
lean_ctor_set(v_reuseFailAlloc_1453_, 1, v___x_1425_);
v___x_1446_ = v_reuseFailAlloc_1453_;
goto v_reusejp_1445_;
}
v_reusejp_1445_:
{
lean_object* v___x_1448_; 
if (v_isShared_1205_ == 0)
{
lean_ctor_set_tag(v___x_1204_, 1);
lean_ctor_set(v___x_1204_, 1, v___x_1446_);
lean_ctor_set(v___x_1204_, 0, v___x_1442_);
v___x_1448_ = v___x_1204_;
goto v_reusejp_1447_;
}
else
{
lean_object* v_reuseFailAlloc_1452_; 
v_reuseFailAlloc_1452_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1452_, 0, v___x_1442_);
lean_ctor_set(v_reuseFailAlloc_1452_, 1, v___x_1446_);
v___x_1448_ = v_reuseFailAlloc_1452_;
goto v_reusejp_1447_;
}
v_reusejp_1447_:
{
lean_object* v___x_1450_; 
if (v_isShared_1436_ == 0)
{
lean_ctor_set(v___x_1435_, 0, v___x_1448_);
v___x_1450_ = v___x_1435_;
goto v_reusejp_1449_;
}
else
{
lean_object* v_reuseFailAlloc_1451_; 
v_reuseFailAlloc_1451_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1451_, 0, v___x_1448_);
v___x_1450_ = v_reuseFailAlloc_1451_;
goto v_reusejp_1449_;
}
v_reusejp_1449_:
{
return v___x_1450_;
}
}
}
}
}
else
{
lean_object* v_a_1455_; lean_object* v___x_1457_; uint8_t v_isShared_1458_; uint8_t v_isSharedCheck_1462_; 
lean_dec(v___x_1424_);
lean_dec(v___x_1419_);
lean_dec(v___x_1274_);
lean_del_object(v___x_1269_);
lean_dec(v___x_1262_);
lean_del_object(v___x_1204_);
v_a_1455_ = lean_ctor_get(v___x_1432_, 0);
v_isSharedCheck_1462_ = !lean_is_exclusive(v___x_1432_);
if (v_isSharedCheck_1462_ == 0)
{
v___x_1457_ = v___x_1432_;
v_isShared_1458_ = v_isSharedCheck_1462_;
goto v_resetjp_1456_;
}
else
{
lean_inc(v_a_1455_);
lean_dec(v___x_1432_);
v___x_1457_ = lean_box(0);
v_isShared_1458_ = v_isSharedCheck_1462_;
goto v_resetjp_1456_;
}
v_resetjp_1456_:
{
lean_object* v___x_1460_; 
if (v_isShared_1458_ == 0)
{
v___x_1460_ = v___x_1457_;
goto v_reusejp_1459_;
}
else
{
lean_object* v_reuseFailAlloc_1461_; 
v_reuseFailAlloc_1461_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1461_, 0, v_a_1455_);
v___x_1460_ = v_reuseFailAlloc_1461_;
goto v_reusejp_1459_;
}
v_reusejp_1459_:
{
return v___x_1460_;
}
}
}
}
}
else
{
lean_dec(v___x_1419_);
lean_dec(v___x_1274_);
lean_del_object(v___x_1269_);
lean_dec(v_snd_1267_);
lean_dec(v___x_1262_);
lean_del_object(v___x_1204_);
goto v___jp_1183_;
}
}
}
}
}
v___jp_1275_:
{
lean_object* v___x_1276_; lean_object* v_fst_1277_; 
v___x_1276_ = l_Lean_Expr_getAppFnArgs(v___x_1274_);
v_fst_1277_ = lean_ctor_get(v___x_1276_, 0);
lean_inc(v_fst_1277_);
if (lean_obj_tag(v_fst_1277_) == 1)
{
lean_object* v_pre_1278_; 
v_pre_1278_ = lean_ctor_get(v_fst_1277_, 0);
lean_inc(v_pre_1278_);
if (lean_obj_tag(v_pre_1278_) == 1)
{
lean_object* v_pre_1279_; 
v_pre_1279_ = lean_ctor_get(v_pre_1278_, 0);
if (lean_obj_tag(v_pre_1279_) == 0)
{
lean_object* v_snd_1280_; lean_object* v___x_1282_; uint8_t v_isShared_1283_; uint8_t v_isSharedCheck_1310_; 
v_snd_1280_ = lean_ctor_get(v___x_1276_, 1);
v_isSharedCheck_1310_ = !lean_is_exclusive(v___x_1276_);
if (v_isSharedCheck_1310_ == 0)
{
lean_object* v_unused_1311_; 
v_unused_1311_ = lean_ctor_get(v___x_1276_, 0);
lean_dec(v_unused_1311_);
v___x_1282_ = v___x_1276_;
v_isShared_1283_ = v_isSharedCheck_1310_;
goto v_resetjp_1281_;
}
else
{
lean_inc(v_snd_1280_);
lean_dec(v___x_1276_);
v___x_1282_ = lean_box(0);
v_isShared_1283_ = v_isSharedCheck_1310_;
goto v_resetjp_1281_;
}
v_resetjp_1281_:
{
lean_object* v_str_1284_; lean_object* v_str_1285_; uint8_t v___x_1286_; 
v_str_1284_ = lean_ctor_get(v_fst_1277_, 1);
lean_inc_ref(v_str_1284_);
lean_dec_ref(v_fst_1277_);
v_str_1285_ = lean_ctor_get(v_pre_1278_, 1);
lean_inc_ref(v_str_1285_);
lean_dec_ref(v_pre_1278_);
v___x_1286_ = lean_string_dec_eq(v_str_1285_, v___x_1208_);
lean_dec_ref(v_str_1285_);
if (v___x_1286_ == 0)
{
lean_dec_ref(v_str_1284_);
lean_del_object(v___x_1282_);
lean_dec(v_snd_1280_);
lean_dec(v___x_1262_);
goto v___jp_1192_;
}
else
{
lean_object* v___x_1287_; uint8_t v___x_1288_; 
v___x_1287_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_natCast_x3f___closed__1));
v___x_1288_ = lean_string_dec_eq(v_str_1284_, v___x_1287_);
lean_dec_ref(v_str_1284_);
if (v___x_1288_ == 0)
{
lean_del_object(v___x_1282_);
lean_dec(v_snd_1280_);
lean_dec(v___x_1262_);
goto v___jp_1192_;
}
else
{
lean_object* v___x_1289_; lean_object* v___x_1290_; uint8_t v___x_1291_; 
v___x_1289_ = lean_array_get_size(v_snd_1280_);
v___x_1290_ = lean_unsigned_to_nat(3u);
v___x_1291_ = lean_nat_dec_eq(v___x_1289_, v___x_1290_);
if (v___x_1291_ == 0)
{
lean_del_object(v___x_1282_);
lean_dec(v_snd_1280_);
lean_dec(v___x_1262_);
goto v___jp_1192_;
}
else
{
lean_object* v___x_1292_; lean_object* v___x_1293_; 
v___x_1292_ = lean_unsigned_to_nat(0u);
v___x_1293_ = lean_array_fget_borrowed(v_snd_1280_, v___x_1292_);
if (lean_obj_tag(v___x_1293_) == 4)
{
lean_object* v_declName_1294_; 
v_declName_1294_ = lean_ctor_get(v___x_1293_, 0);
if (lean_obj_tag(v_declName_1294_) == 1)
{
lean_object* v_pre_1295_; 
v_pre_1295_ = lean_ctor_get(v_declName_1294_, 0);
if (lean_obj_tag(v_pre_1295_) == 0)
{
lean_object* v_us_1296_; lean_object* v_str_1297_; lean_object* v___x_1298_; uint8_t v___x_1299_; 
v_us_1296_ = lean_ctor_get(v___x_1293_, 1);
lean_inc(v_us_1296_);
v_str_1297_ = lean_ctor_get(v_declName_1294_, 1);
v___x_1298_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__0));
v___x_1299_ = lean_string_dec_eq(v_str_1297_, v___x_1298_);
if (v___x_1299_ == 0)
{
lean_dec(v_us_1296_);
lean_del_object(v___x_1282_);
lean_dec(v_snd_1280_);
lean_dec(v___x_1262_);
goto v___jp_1192_;
}
else
{
if (lean_obj_tag(v_us_1296_) == 0)
{
lean_object* v___x_1300_; lean_object* v___x_1301_; lean_object* v___x_1302_; lean_object* v___x_1303_; lean_object* v___x_1304_; lean_object* v___x_1305_; lean_object* v___x_1307_; 
v___x_1300_ = lean_unsigned_to_nat(2u);
v___x_1301_ = lean_array_fget(v_snd_1280_, v___x_1300_);
lean_dec(v_snd_1280_);
v___x_1302_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__19));
v___x_1303_ = l_Lean_Expr_const___override(v___x_1302_, v_us_1296_);
v___x_1304_ = l_Lean_mkAppB(v___x_1303_, v___x_1301_, v___x_1262_);
v___x_1305_ = lean_box(0);
if (v_isShared_1283_ == 0)
{
lean_ctor_set_tag(v___x_1282_, 1);
lean_ctor_set(v___x_1282_, 1, v___x_1305_);
lean_ctor_set(v___x_1282_, 0, v___x_1304_);
v___x_1307_ = v___x_1282_;
goto v_reusejp_1306_;
}
else
{
lean_object* v_reuseFailAlloc_1309_; 
v_reuseFailAlloc_1309_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1309_, 0, v___x_1304_);
lean_ctor_set(v_reuseFailAlloc_1309_, 1, v___x_1305_);
v___x_1307_ = v_reuseFailAlloc_1309_;
goto v_reusejp_1306_;
}
v_reusejp_1306_:
{
lean_object* v___x_1308_; 
v___x_1308_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1308_, 0, v___x_1307_);
return v___x_1308_;
}
}
else
{
lean_dec(v_us_1296_);
lean_del_object(v___x_1282_);
lean_dec(v_snd_1280_);
lean_dec(v___x_1262_);
goto v___jp_1192_;
}
}
}
else
{
lean_del_object(v___x_1282_);
lean_dec(v_snd_1280_);
lean_dec(v___x_1262_);
goto v___jp_1192_;
}
}
else
{
lean_del_object(v___x_1282_);
lean_dec(v_snd_1280_);
lean_dec(v___x_1262_);
goto v___jp_1192_;
}
}
else
{
lean_del_object(v___x_1282_);
lean_dec(v_snd_1280_);
lean_dec(v___x_1262_);
goto v___jp_1192_;
}
}
}
}
}
}
else
{
lean_dec_ref(v_pre_1278_);
lean_dec_ref(v_fst_1277_);
lean_dec_ref(v___x_1276_);
lean_dec(v___x_1262_);
goto v___jp_1192_;
}
}
else
{
lean_dec(v_pre_1278_);
lean_dec_ref(v_fst_1277_);
lean_dec_ref(v___x_1276_);
lean_dec(v___x_1262_);
goto v___jp_1192_;
}
}
else
{
lean_dec(v_fst_1277_);
lean_dec_ref(v___x_1276_);
lean_dec(v___x_1262_);
goto v___jp_1192_;
}
}
}
}
else
{
lean_dec_ref(v_pre_1265_);
lean_dec_ref(v_fst_1264_);
lean_dec_ref(v___x_1263_);
lean_dec(v___x_1262_);
lean_del_object(v___x_1204_);
lean_dec(v_snd_1202_);
goto v___jp_1189_;
}
}
else
{
lean_dec(v_pre_1265_);
lean_dec_ref(v_fst_1264_);
lean_dec_ref(v___x_1263_);
lean_dec(v___x_1262_);
lean_del_object(v___x_1204_);
lean_dec(v_snd_1202_);
goto v___jp_1189_;
}
}
else
{
lean_dec(v_fst_1264_);
lean_dec_ref(v___x_1263_);
lean_dec(v___x_1262_);
lean_del_object(v___x_1204_);
lean_dec(v_snd_1202_);
goto v___jp_1189_;
}
}
}
}
}
else
{
lean_object* v___x_1468_; uint8_t v___x_1469_; 
lean_dec_ref(v_str_1207_);
v___x_1468_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__7));
v___x_1469_ = lean_string_dec_eq(v_str_1206_, v___x_1468_);
lean_dec_ref(v_str_1206_);
if (v___x_1469_ == 0)
{
lean_del_object(v___x_1204_);
lean_dec(v_snd_1202_);
goto v___jp_1186_;
}
else
{
lean_object* v___x_1470_; lean_object* v___x_1471_; uint8_t v___x_1472_; 
v___x_1470_ = lean_array_get_size(v_snd_1202_);
v___x_1471_ = lean_unsigned_to_nat(6u);
v___x_1472_ = lean_nat_dec_eq(v___x_1470_, v___x_1471_);
if (v___x_1472_ == 0)
{
lean_del_object(v___x_1204_);
lean_dec(v_snd_1202_);
goto v___jp_1186_;
}
else
{
lean_object* v___x_1473_; lean_object* v___x_1474_; lean_object* v___x_1475_; 
v___x_1473_ = lean_unsigned_to_nat(5u);
v___x_1474_ = lean_array_fget(v_snd_1202_, v___x_1473_);
lean_inc(v___x_1474_);
v___x_1475_ = l_Lean_Elab_Tactic_Omega_natCast_x3f(v___x_1474_);
if (lean_obj_tag(v___x_1475_) == 0)
{
lean_dec(v___x_1474_);
lean_del_object(v___x_1204_);
lean_dec(v_snd_1202_);
goto v___jp_1180_;
}
else
{
lean_object* v_val_1476_; lean_object* v___x_1477_; uint8_t v___x_1478_; 
v_val_1476_ = lean_ctor_get(v___x_1475_, 0);
lean_inc(v_val_1476_);
lean_dec_ref(v___x_1475_);
v___x_1477_ = lean_unsigned_to_nat(0u);
v___x_1478_ = lean_nat_dec_eq(v_val_1476_, v___x_1477_);
lean_dec(v_val_1476_);
if (v___x_1478_ == 0)
{
lean_object* v___x_1479_; lean_object* v___x_1480_; lean_object* v___x_1481_; lean_object* v___x_1482_; lean_object* v___x_1483_; lean_object* v___y_1485_; uint8_t v___x_1525_; 
v___x_1479_ = lean_unsigned_to_nat(4u);
v___x_1480_ = lean_array_fget(v_snd_1202_, v___x_1479_);
lean_dec(v_snd_1202_);
v___x_1481_ = lean_box(0);
v___x_1482_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__68, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__68_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__68);
v___x_1483_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__2, &l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__2_once, _init_l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__2);
v___x_1525_ = lean_uint8_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__39, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__39_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__39);
if (v___x_1525_ == 0)
{
lean_object* v___x_1526_; 
v___x_1526_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__63, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__63_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__63);
v___y_1485_ = v___x_1526_;
goto v___jp_1484_;
}
else
{
lean_object* v___x_1527_; 
v___x_1527_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__49, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__49_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__49);
v___y_1485_ = v___x_1527_;
goto v___jp_1484_;
}
v___jp_1484_:
{
lean_object* v_ne__zero_1486_; lean_object* v___x_1487_; 
lean_inc_ref(v___y_1485_);
lean_inc(v___x_1474_);
v_ne__zero_1486_ = l_Lean_mkApp3(v___x_1482_, v___x_1483_, v___x_1474_, v___y_1485_);
v___x_1487_ = l_Lean_Meta_mkDecideProof(v_ne__zero_1486_, v_a_1175_, v_a_1176_, v_a_1177_, v_a_1178_);
if (lean_obj_tag(v___x_1487_) == 0)
{
lean_object* v_a_1488_; lean_object* v___x_1489_; lean_object* v___x_1490_; lean_object* v_pos_1491_; lean_object* v___x_1492_; 
v_a_1488_ = lean_ctor_get(v___x_1487_, 0);
lean_inc(v_a_1488_);
lean_dec_ref(v___x_1487_);
v___x_1489_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__51, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__51_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__51);
v___x_1490_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__54, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__54_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__54);
lean_inc(v___x_1474_);
lean_inc_ref(v___y_1485_);
v_pos_1491_ = l_Lean_mkApp4(v___x_1489_, v___x_1483_, v___x_1490_, v___y_1485_, v___x_1474_);
v___x_1492_ = l_Lean_Meta_mkDecideProof(v_pos_1491_, v_a_1175_, v_a_1176_, v_a_1177_, v_a_1178_);
if (lean_obj_tag(v___x_1492_) == 0)
{
lean_object* v_a_1493_; lean_object* v___x_1495_; uint8_t v_isShared_1496_; uint8_t v_isSharedCheck_1508_; 
v_a_1493_ = lean_ctor_get(v___x_1492_, 0);
v_isSharedCheck_1508_ = !lean_is_exclusive(v___x_1492_);
if (v_isSharedCheck_1508_ == 0)
{
v___x_1495_ = v___x_1492_;
v_isShared_1496_ = v_isSharedCheck_1508_;
goto v_resetjp_1494_;
}
else
{
lean_inc(v_a_1493_);
lean_dec(v___x_1492_);
v___x_1495_ = lean_box(0);
v_isShared_1496_ = v_isSharedCheck_1508_;
goto v_resetjp_1494_;
}
v_resetjp_1494_:
{
lean_object* v___x_1497_; lean_object* v___x_1498_; lean_object* v___x_1499_; lean_object* v___x_1500_; lean_object* v___x_1502_; 
v___x_1497_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__71, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__71_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__71);
lean_inc(v___x_1474_);
lean_inc(v___x_1480_);
v___x_1498_ = l_Lean_mkApp3(v___x_1497_, v___x_1480_, v___x_1474_, v_a_1488_);
v___x_1499_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__74, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__74_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__74);
v___x_1500_ = l_Lean_mkApp3(v___x_1499_, v___x_1480_, v___x_1474_, v_a_1493_);
if (v_isShared_1205_ == 0)
{
lean_ctor_set_tag(v___x_1204_, 1);
lean_ctor_set(v___x_1204_, 1, v___x_1481_);
lean_ctor_set(v___x_1204_, 0, v___x_1500_);
v___x_1502_ = v___x_1204_;
goto v_reusejp_1501_;
}
else
{
lean_object* v_reuseFailAlloc_1507_; 
v_reuseFailAlloc_1507_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1507_, 0, v___x_1500_);
lean_ctor_set(v_reuseFailAlloc_1507_, 1, v___x_1481_);
v___x_1502_ = v_reuseFailAlloc_1507_;
goto v_reusejp_1501_;
}
v_reusejp_1501_:
{
lean_object* v___x_1503_; lean_object* v___x_1505_; 
v___x_1503_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1503_, 0, v___x_1498_);
lean_ctor_set(v___x_1503_, 1, v___x_1502_);
if (v_isShared_1496_ == 0)
{
lean_ctor_set(v___x_1495_, 0, v___x_1503_);
v___x_1505_ = v___x_1495_;
goto v_reusejp_1504_;
}
else
{
lean_object* v_reuseFailAlloc_1506_; 
v_reuseFailAlloc_1506_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1506_, 0, v___x_1503_);
v___x_1505_ = v_reuseFailAlloc_1506_;
goto v_reusejp_1504_;
}
v_reusejp_1504_:
{
return v___x_1505_;
}
}
}
}
else
{
lean_object* v_a_1509_; lean_object* v___x_1511_; uint8_t v_isShared_1512_; uint8_t v_isSharedCheck_1516_; 
lean_dec(v_a_1488_);
lean_dec(v___x_1480_);
lean_dec(v___x_1474_);
lean_del_object(v___x_1204_);
v_a_1509_ = lean_ctor_get(v___x_1492_, 0);
v_isSharedCheck_1516_ = !lean_is_exclusive(v___x_1492_);
if (v_isSharedCheck_1516_ == 0)
{
v___x_1511_ = v___x_1492_;
v_isShared_1512_ = v_isSharedCheck_1516_;
goto v_resetjp_1510_;
}
else
{
lean_inc(v_a_1509_);
lean_dec(v___x_1492_);
v___x_1511_ = lean_box(0);
v_isShared_1512_ = v_isSharedCheck_1516_;
goto v_resetjp_1510_;
}
v_resetjp_1510_:
{
lean_object* v___x_1514_; 
if (v_isShared_1512_ == 0)
{
v___x_1514_ = v___x_1511_;
goto v_reusejp_1513_;
}
else
{
lean_object* v_reuseFailAlloc_1515_; 
v_reuseFailAlloc_1515_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1515_, 0, v_a_1509_);
v___x_1514_ = v_reuseFailAlloc_1515_;
goto v_reusejp_1513_;
}
v_reusejp_1513_:
{
return v___x_1514_;
}
}
}
}
else
{
lean_object* v_a_1517_; lean_object* v___x_1519_; uint8_t v_isShared_1520_; uint8_t v_isSharedCheck_1524_; 
lean_dec(v___x_1480_);
lean_dec(v___x_1474_);
lean_del_object(v___x_1204_);
v_a_1517_ = lean_ctor_get(v___x_1487_, 0);
v_isSharedCheck_1524_ = !lean_is_exclusive(v___x_1487_);
if (v_isSharedCheck_1524_ == 0)
{
v___x_1519_ = v___x_1487_;
v_isShared_1520_ = v_isSharedCheck_1524_;
goto v_resetjp_1518_;
}
else
{
lean_inc(v_a_1517_);
lean_dec(v___x_1487_);
v___x_1519_ = lean_box(0);
v_isShared_1520_ = v_isSharedCheck_1524_;
goto v_resetjp_1518_;
}
v_resetjp_1518_:
{
lean_object* v___x_1522_; 
if (v_isShared_1520_ == 0)
{
v___x_1522_ = v___x_1519_;
goto v_reusejp_1521_;
}
else
{
lean_object* v_reuseFailAlloc_1523_; 
v_reuseFailAlloc_1523_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1523_, 0, v_a_1517_);
v___x_1522_ = v_reuseFailAlloc_1523_;
goto v_reusejp_1521_;
}
v_reusejp_1521_:
{
return v___x_1522_;
}
}
}
}
}
else
{
lean_dec(v___x_1474_);
lean_del_object(v___x_1204_);
lean_dec(v_snd_1202_);
goto v___jp_1180_;
}
}
}
}
}
}
else
{
lean_object* v___x_1528_; uint8_t v___x_1529_; 
lean_dec_ref(v_str_1207_);
v___x_1528_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_natCast_x3f___closed__1));
v___x_1529_ = lean_string_dec_eq(v_str_1206_, v___x_1528_);
lean_dec_ref(v_str_1206_);
if (v___x_1529_ == 0)
{
lean_del_object(v___x_1204_);
lean_dec(v_snd_1202_);
goto v___jp_1186_;
}
else
{
lean_object* v___x_1530_; lean_object* v___x_1531_; uint8_t v___x_1532_; 
v___x_1530_ = lean_array_get_size(v_snd_1202_);
v___x_1531_ = lean_unsigned_to_nat(3u);
v___x_1532_ = lean_nat_dec_eq(v___x_1530_, v___x_1531_);
if (v___x_1532_ == 0)
{
lean_del_object(v___x_1204_);
lean_dec(v_snd_1202_);
goto v___jp_1186_;
}
else
{
lean_object* v___x_1533_; lean_object* v___x_1534_; 
v___x_1533_ = lean_unsigned_to_nat(0u);
v___x_1534_ = lean_array_fget_borrowed(v_snd_1202_, v___x_1533_);
if (lean_obj_tag(v___x_1534_) == 4)
{
lean_object* v_declName_1535_; 
v_declName_1535_ = lean_ctor_get(v___x_1534_, 0);
if (lean_obj_tag(v_declName_1535_) == 1)
{
lean_object* v_pre_1536_; 
v_pre_1536_ = lean_ctor_get(v_declName_1535_, 0);
if (lean_obj_tag(v_pre_1536_) == 0)
{
lean_object* v_us_1537_; lean_object* v_str_1538_; lean_object* v___x_1539_; lean_object* v___y_1541_; lean_object* v___y_1542_; uint8_t v___x_1552_; 
v_us_1537_ = lean_ctor_get(v___x_1534_, 1);
lean_inc(v_us_1537_);
v_str_1538_ = lean_ctor_get(v_declName_1535_, 1);
v___x_1539_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__0));
v___x_1552_ = lean_string_dec_eq(v_str_1538_, v___x_1539_);
if (v___x_1552_ == 0)
{
lean_dec(v_us_1537_);
lean_del_object(v___x_1204_);
lean_dec(v_snd_1202_);
goto v___jp_1186_;
}
else
{
if (lean_obj_tag(v_us_1537_) == 0)
{
uint8_t v_splitNatSub_1553_; lean_object* v___x_1554_; lean_object* v___x_1555_; lean_object* v___x_1556_; lean_object* v___x_1557_; lean_object* v___x_1558_; lean_object* v___x_1559_; lean_object* v_r_1560_; lean_object* v_n_1562_; lean_object* v_x_1563_; lean_object* v_n_1572_; lean_object* v_i_1573_; lean_object* v_x_1582_; 
v_splitNatSub_1553_ = lean_ctor_get_uint8(v_a_1174_, 1);
v___x_1554_ = lean_unsigned_to_nat(2u);
v___x_1555_ = lean_array_fget(v_snd_1202_, v___x_1554_);
lean_dec(v_snd_1202_);
v___x_1556_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__78));
v___x_1557_ = l_Lean_Expr_const___override(v___x_1556_, v_us_1537_);
lean_inc(v___x_1555_);
v___x_1558_ = l_Lean_Expr_app___override(v___x_1557_, v___x_1555_);
v___x_1559_ = lean_box(0);
v_r_1560_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_r_1560_, 0, v___x_1558_);
lean_ctor_set(v_r_1560_, 1, v___x_1559_);
if (v_splitNatSub_1553_ == 1)
{
lean_object* v___x_1588_; lean_object* v_fst_1589_; 
v___x_1588_ = l_Lean_Expr_getAppFnArgs(v___x_1555_);
v_fst_1589_ = lean_ctor_get(v___x_1588_, 0);
lean_inc(v_fst_1589_);
if (lean_obj_tag(v_fst_1589_) == 1)
{
lean_object* v_pre_1590_; 
v_pre_1590_ = lean_ctor_get(v_fst_1589_, 0);
lean_inc(v_pre_1590_);
if (lean_obj_tag(v_pre_1590_) == 1)
{
lean_object* v_pre_1591_; 
v_pre_1591_ = lean_ctor_get(v_pre_1590_, 0);
if (lean_obj_tag(v_pre_1591_) == 0)
{
lean_object* v_snd_1592_; lean_object* v___x_1594_; uint8_t v_isShared_1595_; uint8_t v_isSharedCheck_1652_; 
v_snd_1592_ = lean_ctor_get(v___x_1588_, 1);
v_isSharedCheck_1652_ = !lean_is_exclusive(v___x_1588_);
if (v_isSharedCheck_1652_ == 0)
{
lean_object* v_unused_1653_; 
v_unused_1653_ = lean_ctor_get(v___x_1588_, 0);
lean_dec(v_unused_1653_);
v___x_1594_ = v___x_1588_;
v_isShared_1595_ = v_isSharedCheck_1652_;
goto v_resetjp_1593_;
}
else
{
lean_inc(v_snd_1592_);
lean_dec(v___x_1588_);
v___x_1594_ = lean_box(0);
v_isShared_1595_ = v_isSharedCheck_1652_;
goto v_resetjp_1593_;
}
v_resetjp_1593_:
{
lean_object* v_str_1596_; lean_object* v_str_1597_; lean_object* v___x_1598_; uint8_t v___x_1599_; 
v_str_1596_ = lean_ctor_get(v_fst_1589_, 1);
lean_inc_ref(v_str_1596_);
lean_dec_ref(v_fst_1589_);
v_str_1597_ = lean_ctor_get(v_pre_1590_, 1);
lean_inc_ref(v_str_1597_);
lean_dec_ref(v_pre_1590_);
v___x_1598_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__2));
v___x_1599_ = lean_string_dec_eq(v_str_1597_, v___x_1598_);
if (v___x_1599_ == 0)
{
uint8_t v___x_1600_; 
lean_del_object(v___x_1594_);
v___x_1600_ = lean_string_dec_eq(v_str_1597_, v___x_1539_);
if (v___x_1600_ == 0)
{
lean_object* v___x_1601_; uint8_t v___x_1602_; 
lean_del_object(v___x_1204_);
v___x_1601_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__82));
v___x_1602_ = lean_string_dec_eq(v_str_1597_, v___x_1601_);
if (v___x_1602_ == 0)
{
lean_object* v___x_1603_; uint8_t v___x_1604_; 
v___x_1603_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__79));
v___x_1604_ = lean_string_dec_eq(v_str_1597_, v___x_1603_);
lean_dec_ref(v_str_1597_);
if (v___x_1604_ == 0)
{
lean_object* v___x_1605_; 
lean_dec_ref(v_str_1596_);
lean_dec(v_snd_1592_);
v___x_1605_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1605_, 0, v_r_1560_);
return v___x_1605_;
}
else
{
lean_object* v___x_1606_; uint8_t v___x_1607_; 
v___x_1606_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__86));
v___x_1607_ = lean_string_dec_eq(v_str_1596_, v___x_1606_);
lean_dec_ref(v_str_1596_);
if (v___x_1607_ == 0)
{
lean_object* v___x_1608_; 
lean_dec(v_snd_1592_);
v___x_1608_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1608_, 0, v_r_1560_);
return v___x_1608_;
}
else
{
lean_object* v___x_1609_; uint8_t v___x_1610_; 
v___x_1609_ = lean_array_get_size(v_snd_1592_);
v___x_1610_ = lean_nat_dec_eq(v___x_1609_, v___x_1554_);
if (v___x_1610_ == 0)
{
lean_object* v___x_1611_; 
lean_dec(v_snd_1592_);
v___x_1611_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1611_, 0, v_r_1560_);
return v___x_1611_;
}
else
{
lean_object* v___x_1612_; lean_object* v___x_1613_; lean_object* v___x_1614_; 
v___x_1612_ = lean_array_fget(v_snd_1592_, v___x_1533_);
v___x_1613_ = lean_unsigned_to_nat(1u);
v___x_1614_ = lean_array_fget(v_snd_1592_, v___x_1613_);
lean_dec(v_snd_1592_);
v_n_1562_ = v___x_1612_;
v_x_1563_ = v___x_1614_;
goto v___jp_1561_;
}
}
}
}
else
{
lean_object* v___x_1615_; uint8_t v___x_1616_; 
lean_dec_ref(v_str_1597_);
v___x_1615_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__87));
v___x_1616_ = lean_string_dec_eq(v_str_1596_, v___x_1615_);
lean_dec_ref(v_str_1596_);
if (v___x_1616_ == 0)
{
lean_object* v___x_1617_; 
lean_dec(v_snd_1592_);
v___x_1617_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1617_, 0, v_r_1560_);
return v___x_1617_;
}
else
{
lean_object* v___x_1618_; uint8_t v___x_1619_; 
v___x_1618_ = lean_array_get_size(v_snd_1592_);
v___x_1619_ = lean_nat_dec_eq(v___x_1618_, v___x_1554_);
if (v___x_1619_ == 0)
{
lean_object* v___x_1620_; 
lean_dec(v_snd_1592_);
v___x_1620_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1620_, 0, v_r_1560_);
return v___x_1620_;
}
else
{
lean_object* v___x_1621_; lean_object* v___x_1622_; lean_object* v___x_1623_; 
v___x_1621_ = lean_array_fget(v_snd_1592_, v___x_1533_);
v___x_1622_ = lean_unsigned_to_nat(1u);
v___x_1623_ = lean_array_fget(v_snd_1592_, v___x_1622_);
lean_dec(v_snd_1592_);
v_n_1572_ = v___x_1621_;
v_i_1573_ = v___x_1623_;
goto v___jp_1571_;
}
}
}
}
else
{
lean_object* v___x_1624_; uint8_t v___x_1625_; 
lean_dec_ref(v_str_1597_);
v___x_1624_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__88));
v___x_1625_ = lean_string_dec_eq(v_str_1596_, v___x_1624_);
lean_dec_ref(v_str_1596_);
if (v___x_1625_ == 0)
{
lean_object* v___x_1626_; 
lean_dec(v_snd_1592_);
lean_del_object(v___x_1204_);
v___x_1626_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1626_, 0, v_r_1560_);
return v___x_1626_;
}
else
{
lean_object* v___x_1627_; lean_object* v___x_1628_; uint8_t v___x_1629_; 
v___x_1627_ = lean_array_get_size(v_snd_1592_);
v___x_1628_ = lean_unsigned_to_nat(1u);
v___x_1629_ = lean_nat_dec_eq(v___x_1627_, v___x_1628_);
if (v___x_1629_ == 0)
{
lean_object* v___x_1630_; 
lean_dec(v_snd_1592_);
lean_del_object(v___x_1204_);
v___x_1630_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1630_, 0, v_r_1560_);
return v___x_1630_;
}
else
{
lean_object* v___x_1631_; 
v___x_1631_ = lean_array_fget(v_snd_1592_, v___x_1533_);
lean_dec(v_snd_1592_);
v_x_1582_ = v___x_1631_;
goto v___jp_1581_;
}
}
}
}
else
{
lean_object* v___x_1632_; uint8_t v___x_1633_; 
lean_dec_ref(v_str_1597_);
lean_del_object(v___x_1204_);
v___x_1632_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__9));
v___x_1633_ = lean_string_dec_eq(v_str_1596_, v___x_1632_);
lean_dec_ref(v_str_1596_);
if (v___x_1633_ == 0)
{
lean_object* v___x_1634_; 
lean_del_object(v___x_1594_);
lean_dec(v_snd_1592_);
v___x_1634_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1634_, 0, v_r_1560_);
return v___x_1634_;
}
else
{
lean_object* v___x_1635_; lean_object* v___x_1636_; uint8_t v___x_1637_; 
v___x_1635_ = lean_array_get_size(v_snd_1592_);
v___x_1636_ = lean_unsigned_to_nat(6u);
v___x_1637_ = lean_nat_dec_eq(v___x_1635_, v___x_1636_);
if (v___x_1637_ == 0)
{
lean_object* v___x_1638_; 
lean_del_object(v___x_1594_);
lean_dec(v_snd_1592_);
v___x_1638_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1638_, 0, v_r_1560_);
return v___x_1638_;
}
else
{
lean_object* v___x_1639_; lean_object* v___x_1640_; lean_object* v___x_1641_; lean_object* v___x_1642_; lean_object* v___x_1643_; lean_object* v___x_1644_; lean_object* v___x_1645_; uint8_t v___x_1646_; 
v___x_1639_ = lean_unsigned_to_nat(4u);
v___x_1640_ = lean_array_fget(v_snd_1592_, v___x_1639_);
v___x_1641_ = lean_unsigned_to_nat(5u);
v___x_1642_ = lean_array_fget(v_snd_1592_, v___x_1641_);
lean_dec(v_snd_1592_);
v___x_1643_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__90));
v___x_1644_ = l_Lean_Expr_const___override(v___x_1643_, v_us_1537_);
v___x_1645_ = l_Lean_mkAppB(v___x_1644_, v___x_1640_, v___x_1642_);
v___x_1646_ = l_List_elem___at___00Lean_Elab_Tactic_Omega_analyzeAtom_spec__0(v___x_1645_, v_r_1560_);
if (v___x_1646_ == 0)
{
lean_object* v___x_1648_; 
if (v_isShared_1595_ == 0)
{
lean_ctor_set_tag(v___x_1594_, 1);
lean_ctor_set(v___x_1594_, 1, v_r_1560_);
lean_ctor_set(v___x_1594_, 0, v___x_1645_);
v___x_1648_ = v___x_1594_;
goto v_reusejp_1647_;
}
else
{
lean_object* v_reuseFailAlloc_1650_; 
v_reuseFailAlloc_1650_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1650_, 0, v___x_1645_);
lean_ctor_set(v_reuseFailAlloc_1650_, 1, v_r_1560_);
v___x_1648_ = v_reuseFailAlloc_1650_;
goto v_reusejp_1647_;
}
v_reusejp_1647_:
{
lean_object* v___x_1649_; 
v___x_1649_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1649_, 0, v___x_1648_);
return v___x_1649_;
}
}
else
{
lean_object* v___x_1651_; 
lean_dec_ref(v___x_1645_);
lean_del_object(v___x_1594_);
v___x_1651_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1651_, 0, v_r_1560_);
return v___x_1651_;
}
}
}
}
}
}
else
{
lean_object* v___x_1654_; 
lean_dec_ref(v_pre_1590_);
lean_dec_ref(v_fst_1589_);
lean_dec_ref(v___x_1588_);
lean_del_object(v___x_1204_);
v___x_1654_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1654_, 0, v_r_1560_);
return v___x_1654_;
}
}
else
{
lean_object* v___x_1655_; 
lean_dec_ref(v_fst_1589_);
lean_dec(v_pre_1590_);
lean_dec_ref(v___x_1588_);
lean_del_object(v___x_1204_);
v___x_1655_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1655_, 0, v_r_1560_);
return v___x_1655_;
}
}
else
{
lean_object* v___x_1656_; 
lean_dec(v_fst_1589_);
lean_dec_ref(v___x_1588_);
lean_del_object(v___x_1204_);
v___x_1656_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1656_, 0, v_r_1560_);
return v___x_1656_;
}
}
else
{
lean_object* v___x_1657_; lean_object* v_fst_1658_; 
v___x_1657_ = l_Lean_Expr_getAppFnArgs(v___x_1555_);
v_fst_1658_ = lean_ctor_get(v___x_1657_, 0);
lean_inc(v_fst_1658_);
if (lean_obj_tag(v_fst_1658_) == 1)
{
lean_object* v_pre_1659_; 
v_pre_1659_ = lean_ctor_get(v_fst_1658_, 0);
lean_inc(v_pre_1659_);
if (lean_obj_tag(v_pre_1659_) == 1)
{
lean_object* v_pre_1660_; 
v_pre_1660_ = lean_ctor_get(v_pre_1659_, 0);
if (lean_obj_tag(v_pre_1660_) == 0)
{
lean_object* v_snd_1661_; lean_object* v_str_1662_; lean_object* v_str_1663_; uint8_t v___x_1664_; 
v_snd_1661_ = lean_ctor_get(v___x_1657_, 1);
lean_inc(v_snd_1661_);
lean_dec_ref(v___x_1657_);
v_str_1662_ = lean_ctor_get(v_fst_1658_, 1);
lean_inc_ref(v_str_1662_);
lean_dec_ref(v_fst_1658_);
v_str_1663_ = lean_ctor_get(v_pre_1659_, 1);
lean_inc_ref(v_str_1663_);
lean_dec_ref(v_pre_1659_);
v___x_1664_ = lean_string_dec_eq(v_str_1663_, v___x_1539_);
if (v___x_1664_ == 0)
{
lean_object* v___x_1665_; uint8_t v___x_1666_; 
lean_del_object(v___x_1204_);
v___x_1665_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__82));
v___x_1666_ = lean_string_dec_eq(v_str_1663_, v___x_1665_);
if (v___x_1666_ == 0)
{
lean_object* v___x_1667_; uint8_t v___x_1668_; 
v___x_1667_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__79));
v___x_1668_ = lean_string_dec_eq(v_str_1663_, v___x_1667_);
lean_dec_ref(v_str_1663_);
if (v___x_1668_ == 0)
{
lean_object* v___x_1669_; 
lean_dec_ref(v_str_1662_);
lean_dec(v_snd_1661_);
v___x_1669_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1669_, 0, v_r_1560_);
return v___x_1669_;
}
else
{
lean_object* v___x_1670_; uint8_t v___x_1671_; 
v___x_1670_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__86));
v___x_1671_ = lean_string_dec_eq(v_str_1662_, v___x_1670_);
lean_dec_ref(v_str_1662_);
if (v___x_1671_ == 0)
{
lean_object* v___x_1672_; 
lean_dec(v_snd_1661_);
v___x_1672_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1672_, 0, v_r_1560_);
return v___x_1672_;
}
else
{
lean_object* v___x_1673_; uint8_t v___x_1674_; 
v___x_1673_ = lean_array_get_size(v_snd_1661_);
v___x_1674_ = lean_nat_dec_eq(v___x_1673_, v___x_1554_);
if (v___x_1674_ == 0)
{
lean_object* v___x_1675_; 
lean_dec(v_snd_1661_);
v___x_1675_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1675_, 0, v_r_1560_);
return v___x_1675_;
}
else
{
lean_object* v___x_1676_; lean_object* v___x_1677_; lean_object* v___x_1678_; 
v___x_1676_ = lean_array_fget(v_snd_1661_, v___x_1533_);
v___x_1677_ = lean_unsigned_to_nat(1u);
v___x_1678_ = lean_array_fget(v_snd_1661_, v___x_1677_);
lean_dec(v_snd_1661_);
v_n_1562_ = v___x_1676_;
v_x_1563_ = v___x_1678_;
goto v___jp_1561_;
}
}
}
}
else
{
lean_object* v___x_1679_; uint8_t v___x_1680_; 
lean_dec_ref(v_str_1663_);
v___x_1679_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__87));
v___x_1680_ = lean_string_dec_eq(v_str_1662_, v___x_1679_);
lean_dec_ref(v_str_1662_);
if (v___x_1680_ == 0)
{
lean_object* v___x_1681_; 
lean_dec(v_snd_1661_);
v___x_1681_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1681_, 0, v_r_1560_);
return v___x_1681_;
}
else
{
lean_object* v___x_1682_; uint8_t v___x_1683_; 
v___x_1682_ = lean_array_get_size(v_snd_1661_);
v___x_1683_ = lean_nat_dec_eq(v___x_1682_, v___x_1554_);
if (v___x_1683_ == 0)
{
lean_object* v___x_1684_; 
lean_dec(v_snd_1661_);
v___x_1684_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1684_, 0, v_r_1560_);
return v___x_1684_;
}
else
{
lean_object* v___x_1685_; lean_object* v___x_1686_; lean_object* v___x_1687_; 
v___x_1685_ = lean_array_fget(v_snd_1661_, v___x_1533_);
v___x_1686_ = lean_unsigned_to_nat(1u);
v___x_1687_ = lean_array_fget(v_snd_1661_, v___x_1686_);
lean_dec(v_snd_1661_);
v_n_1572_ = v___x_1685_;
v_i_1573_ = v___x_1687_;
goto v___jp_1571_;
}
}
}
}
else
{
lean_object* v___x_1688_; uint8_t v___x_1689_; 
lean_dec_ref(v_str_1663_);
v___x_1688_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__88));
v___x_1689_ = lean_string_dec_eq(v_str_1662_, v___x_1688_);
lean_dec_ref(v_str_1662_);
if (v___x_1689_ == 0)
{
lean_object* v___x_1690_; 
lean_dec(v_snd_1661_);
lean_del_object(v___x_1204_);
v___x_1690_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1690_, 0, v_r_1560_);
return v___x_1690_;
}
else
{
lean_object* v___x_1691_; lean_object* v___x_1692_; uint8_t v___x_1693_; 
v___x_1691_ = lean_array_get_size(v_snd_1661_);
v___x_1692_ = lean_unsigned_to_nat(1u);
v___x_1693_ = lean_nat_dec_eq(v___x_1691_, v___x_1692_);
if (v___x_1693_ == 0)
{
lean_object* v___x_1694_; 
lean_dec(v_snd_1661_);
lean_del_object(v___x_1204_);
v___x_1694_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1694_, 0, v_r_1560_);
return v___x_1694_;
}
else
{
lean_object* v___x_1695_; 
v___x_1695_ = lean_array_fget(v_snd_1661_, v___x_1533_);
lean_dec(v_snd_1661_);
v_x_1582_ = v___x_1695_;
goto v___jp_1581_;
}
}
}
}
else
{
lean_object* v___x_1696_; 
lean_dec_ref(v_pre_1659_);
lean_dec_ref(v_fst_1658_);
lean_dec_ref(v___x_1657_);
lean_del_object(v___x_1204_);
v___x_1696_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1696_, 0, v_r_1560_);
return v___x_1696_;
}
}
else
{
lean_object* v___x_1697_; 
lean_dec_ref(v_fst_1658_);
lean_dec(v_pre_1659_);
lean_dec_ref(v___x_1657_);
lean_del_object(v___x_1204_);
v___x_1697_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1697_, 0, v_r_1560_);
return v___x_1697_;
}
}
else
{
lean_object* v___x_1698_; 
lean_dec(v_fst_1658_);
lean_dec_ref(v___x_1657_);
lean_del_object(v___x_1204_);
v___x_1698_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1698_, 0, v_r_1560_);
return v___x_1698_;
}
}
v___jp_1561_:
{
lean_object* v___x_1564_; lean_object* v___x_1565_; lean_object* v___x_1566_; uint8_t v___x_1567_; 
v___x_1564_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__81));
v___x_1565_ = l_Lean_Expr_const___override(v___x_1564_, v_us_1537_);
v___x_1566_ = l_Lean_mkAppB(v___x_1565_, v_n_1562_, v_x_1563_);
v___x_1567_ = l_List_elem___at___00Lean_Elab_Tactic_Omega_analyzeAtom_spec__0(v___x_1566_, v_r_1560_);
if (v___x_1567_ == 0)
{
lean_object* v___x_1568_; lean_object* v___x_1569_; 
v___x_1568_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1568_, 0, v___x_1566_);
lean_ctor_set(v___x_1568_, 1, v_r_1560_);
v___x_1569_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1569_, 0, v___x_1568_);
return v___x_1569_;
}
else
{
lean_object* v___x_1570_; 
lean_dec_ref(v___x_1566_);
v___x_1570_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1570_, 0, v_r_1560_);
return v___x_1570_;
}
}
v___jp_1571_:
{
lean_object* v___x_1574_; lean_object* v___x_1575_; lean_object* v___x_1576_; uint8_t v___x_1577_; 
v___x_1574_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__83));
v___x_1575_ = l_Lean_Expr_const___override(v___x_1574_, v_us_1537_);
v___x_1576_ = l_Lean_mkAppB(v___x_1575_, v_n_1572_, v_i_1573_);
v___x_1577_ = l_List_elem___at___00Lean_Elab_Tactic_Omega_analyzeAtom_spec__0(v___x_1576_, v_r_1560_);
if (v___x_1577_ == 0)
{
lean_object* v___x_1578_; lean_object* v___x_1579_; 
v___x_1578_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1578_, 0, v___x_1576_);
lean_ctor_set(v___x_1578_, 1, v_r_1560_);
v___x_1579_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1579_, 0, v___x_1578_);
return v___x_1579_;
}
else
{
lean_object* v___x_1580_; 
lean_dec_ref(v___x_1576_);
v___x_1580_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1580_, 0, v_r_1560_);
return v___x_1580_;
}
}
v___jp_1581_:
{
lean_object* v___x_1583_; lean_object* v___x_1584_; lean_object* v___x_1585_; uint8_t v___x_1586_; 
v___x_1583_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__85));
v___x_1584_ = l_Lean_Expr_const___override(v___x_1583_, v_us_1537_);
lean_inc_ref(v_x_1582_);
v___x_1585_ = l_Lean_Expr_app___override(v___x_1584_, v_x_1582_);
v___x_1586_ = l_List_elem___at___00Lean_Elab_Tactic_Omega_analyzeAtom_spec__0(v___x_1585_, v_r_1560_);
if (v___x_1586_ == 0)
{
lean_object* v___x_1587_; 
v___x_1587_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1587_, 0, v___x_1585_);
lean_ctor_set(v___x_1587_, 1, v_r_1560_);
v___y_1541_ = v_x_1582_;
v___y_1542_ = v___x_1587_;
goto v___jp_1540_;
}
else
{
lean_dec_ref(v___x_1585_);
v___y_1541_ = v_x_1582_;
v___y_1542_ = v_r_1560_;
goto v___jp_1540_;
}
}
}
else
{
lean_dec(v_us_1537_);
lean_del_object(v___x_1204_);
lean_dec(v_snd_1202_);
goto v___jp_1186_;
}
}
v___jp_1540_:
{
lean_object* v___x_1543_; lean_object* v___x_1544_; lean_object* v___x_1545_; uint8_t v___x_1546_; 
v___x_1543_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__76));
v___x_1544_ = l_Lean_Expr_const___override(v___x_1543_, v_us_1537_);
v___x_1545_ = l_Lean_Expr_app___override(v___x_1544_, v___y_1541_);
v___x_1546_ = l_List_elem___at___00Lean_Elab_Tactic_Omega_analyzeAtom_spec__0(v___x_1545_, v___y_1542_);
if (v___x_1546_ == 0)
{
lean_object* v___x_1548_; 
if (v_isShared_1205_ == 0)
{
lean_ctor_set_tag(v___x_1204_, 1);
lean_ctor_set(v___x_1204_, 1, v___y_1542_);
lean_ctor_set(v___x_1204_, 0, v___x_1545_);
v___x_1548_ = v___x_1204_;
goto v_reusejp_1547_;
}
else
{
lean_object* v_reuseFailAlloc_1550_; 
v_reuseFailAlloc_1550_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1550_, 0, v___x_1545_);
lean_ctor_set(v_reuseFailAlloc_1550_, 1, v___y_1542_);
v___x_1548_ = v_reuseFailAlloc_1550_;
goto v_reusejp_1547_;
}
v_reusejp_1547_:
{
lean_object* v___x_1549_; 
v___x_1549_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1549_, 0, v___x_1548_);
return v___x_1549_;
}
}
else
{
lean_object* v___x_1551_; 
lean_dec_ref(v___x_1545_);
lean_del_object(v___x_1204_);
v___x_1551_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1551_, 0, v___y_1542_);
return v___x_1551_;
}
}
}
else
{
lean_del_object(v___x_1204_);
lean_dec(v_snd_1202_);
goto v___jp_1186_;
}
}
else
{
lean_del_object(v___x_1204_);
lean_dec(v_snd_1202_);
goto v___jp_1186_;
}
}
else
{
lean_del_object(v___x_1204_);
lean_dec(v_snd_1202_);
goto v___jp_1186_;
}
}
}
}
}
}
else
{
lean_dec_ref(v_pre_1200_);
lean_dec_ref(v_fst_1199_);
lean_dec_ref(v___x_1198_);
goto v___jp_1186_;
}
}
case 0:
{
lean_object* v_snd_1701_; lean_object* v___x_1703_; uint8_t v_isShared_1704_; uint8_t v_isSharedCheck_1731_; 
v_snd_1701_ = lean_ctor_get(v___x_1198_, 1);
v_isSharedCheck_1731_ = !lean_is_exclusive(v___x_1198_);
if (v_isSharedCheck_1731_ == 0)
{
lean_object* v_unused_1732_; 
v_unused_1732_ = lean_ctor_get(v___x_1198_, 0);
lean_dec(v_unused_1732_);
v___x_1703_ = v___x_1198_;
v_isShared_1704_ = v_isSharedCheck_1731_;
goto v_resetjp_1702_;
}
else
{
lean_inc(v_snd_1701_);
lean_dec(v___x_1198_);
v___x_1703_ = lean_box(0);
v_isShared_1704_ = v_isSharedCheck_1731_;
goto v_resetjp_1702_;
}
v_resetjp_1702_:
{
lean_object* v_str_1705_; lean_object* v___x_1706_; uint8_t v___x_1707_; 
v_str_1705_ = lean_ctor_get(v_fst_1199_, 1);
lean_inc_ref(v_str_1705_);
lean_dec_ref(v_fst_1199_);
v___x_1706_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__91));
v___x_1707_ = lean_string_dec_eq(v_str_1705_, v___x_1706_);
lean_dec_ref(v_str_1705_);
if (v___x_1707_ == 0)
{
lean_del_object(v___x_1703_);
lean_dec(v_snd_1701_);
goto v___jp_1186_;
}
else
{
lean_object* v___x_1708_; lean_object* v___x_1709_; uint8_t v___x_1710_; 
v___x_1708_ = lean_array_get_size(v_snd_1701_);
v___x_1709_ = lean_unsigned_to_nat(5u);
v___x_1710_ = lean_nat_dec_eq(v___x_1708_, v___x_1709_);
if (v___x_1710_ == 0)
{
lean_del_object(v___x_1703_);
lean_dec(v_snd_1701_);
goto v___jp_1186_;
}
else
{
lean_object* v___x_1711_; lean_object* v___x_1712_; lean_object* v___x_1713_; lean_object* v___x_1714_; uint8_t v___x_1715_; 
v___x_1711_ = lean_unsigned_to_nat(0u);
v___x_1712_ = lean_array_fget(v_snd_1701_, v___x_1711_);
v___x_1713_ = lean_box(0);
v___x_1714_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__2, &l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__2_once, _init_l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__2);
v___x_1715_ = lean_expr_eqv(v___x_1712_, v___x_1714_);
if (v___x_1715_ == 0)
{
lean_object* v___x_1716_; 
lean_dec(v___x_1712_);
lean_del_object(v___x_1703_);
lean_dec(v_snd_1701_);
v___x_1716_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1716_, 0, v___x_1713_);
return v___x_1716_;
}
else
{
lean_object* v___x_1717_; lean_object* v___x_1718_; lean_object* v___x_1719_; lean_object* v___x_1720_; lean_object* v___x_1721_; lean_object* v___x_1722_; lean_object* v___x_1723_; lean_object* v___x_1724_; lean_object* v___x_1725_; lean_object* v___x_1726_; lean_object* v___x_1728_; 
v___x_1717_ = lean_unsigned_to_nat(1u);
v___x_1718_ = lean_array_fget(v_snd_1701_, v___x_1717_);
v___x_1719_ = lean_unsigned_to_nat(2u);
v___x_1720_ = lean_array_fget(v_snd_1701_, v___x_1719_);
v___x_1721_ = lean_unsigned_to_nat(3u);
v___x_1722_ = lean_array_fget(v_snd_1701_, v___x_1721_);
v___x_1723_ = lean_unsigned_to_nat(4u);
v___x_1724_ = lean_array_fget(v_snd_1701_, v___x_1723_);
lean_dec(v_snd_1701_);
v___x_1725_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__94, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__94_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__94);
v___x_1726_ = l_Lean_mkApp5(v___x_1725_, v___x_1712_, v___x_1718_, v___x_1720_, v___x_1722_, v___x_1724_);
if (v_isShared_1704_ == 0)
{
lean_ctor_set_tag(v___x_1703_, 1);
lean_ctor_set(v___x_1703_, 1, v___x_1713_);
lean_ctor_set(v___x_1703_, 0, v___x_1726_);
v___x_1728_ = v___x_1703_;
goto v_reusejp_1727_;
}
else
{
lean_object* v_reuseFailAlloc_1730_; 
v_reuseFailAlloc_1730_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1730_, 0, v___x_1726_);
lean_ctor_set(v_reuseFailAlloc_1730_, 1, v___x_1713_);
v___x_1728_ = v_reuseFailAlloc_1730_;
goto v_reusejp_1727_;
}
v_reusejp_1727_:
{
lean_object* v___x_1729_; 
v___x_1729_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1729_, 0, v___x_1728_);
return v___x_1729_;
}
}
}
}
}
}
default: 
{
lean_dec_ref(v_fst_1199_);
lean_dec_ref(v___x_1198_);
goto v___jp_1186_;
}
}
}
else
{
lean_dec(v_fst_1199_);
lean_dec_ref(v___x_1198_);
goto v___jp_1186_;
}
v___jp_1180_:
{
lean_object* v___x_1181_; lean_object* v___x_1182_; 
v___x_1181_ = lean_box(0);
v___x_1182_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1182_, 0, v___x_1181_);
return v___x_1182_;
}
v___jp_1183_:
{
lean_object* v___x_1184_; lean_object* v___x_1185_; 
v___x_1184_ = lean_box(0);
v___x_1185_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1185_, 0, v___x_1184_);
return v___x_1185_;
}
v___jp_1186_:
{
lean_object* v___x_1187_; lean_object* v___x_1188_; 
v___x_1187_ = lean_box(0);
v___x_1188_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1188_, 0, v___x_1187_);
return v___x_1188_;
}
v___jp_1189_:
{
lean_object* v___x_1190_; lean_object* v___x_1191_; 
v___x_1190_ = lean_box(0);
v___x_1191_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1191_, 0, v___x_1190_);
return v___x_1191_;
}
v___jp_1192_:
{
lean_object* v___x_1193_; lean_object* v___x_1194_; 
v___x_1193_ = lean_box(0);
v___x_1194_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1194_, 0, v___x_1193_);
return v___x_1194_;
}
v___jp_1195_:
{
lean_object* v___x_1196_; lean_object* v___x_1197_; 
v___x_1196_ = lean_box(0);
v___x_1197_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1197_, 0, v___x_1196_);
return v___x_1197_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___boxed(lean_object* v_e_1733_, lean_object* v_a_1734_, lean_object* v_a_1735_, lean_object* v_a_1736_, lean_object* v_a_1737_, lean_object* v_a_1738_, lean_object* v_a_1739_){
_start:
{
lean_object* v_res_1740_; 
v_res_1740_ = l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg(v_e_1733_, v_a_1734_, v_a_1735_, v_a_1736_, v_a_1737_, v_a_1738_);
lean_dec(v_a_1738_);
lean_dec_ref(v_a_1737_);
lean_dec(v_a_1736_);
lean_dec_ref(v_a_1735_);
lean_dec_ref(v_a_1734_);
return v_res_1740_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom(lean_object* v_e_1741_, lean_object* v_a_1742_, lean_object* v_a_1743_, lean_object* v_a_1744_, uint8_t v_a_1745_, lean_object* v_a_1746_, lean_object* v_a_1747_, lean_object* v_a_1748_, lean_object* v_a_1749_, lean_object* v_a_1750_){
_start:
{
lean_object* v___x_1752_; 
v___x_1752_ = l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg(v_e_1741_, v_a_1744_, v_a_1747_, v_a_1748_, v_a_1749_, v_a_1750_);
return v___x_1752_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___boxed(lean_object* v_e_1753_, lean_object* v_a_1754_, lean_object* v_a_1755_, lean_object* v_a_1756_, lean_object* v_a_1757_, lean_object* v_a_1758_, lean_object* v_a_1759_, lean_object* v_a_1760_, lean_object* v_a_1761_, lean_object* v_a_1762_, lean_object* v_a_1763_){
_start:
{
uint8_t v_a_boxed_1764_; lean_object* v_res_1765_; 
v_a_boxed_1764_ = lean_unbox(v_a_1757_);
v_res_1765_ = l_Lean_Elab_Tactic_Omega_analyzeAtom(v_e_1753_, v_a_1754_, v_a_1755_, v_a_1756_, v_a_boxed_1764_, v_a_1758_, v_a_1759_, v_a_1760_, v_a_1761_, v_a_1762_);
lean_dec(v_a_1762_);
lean_dec_ref(v_a_1761_);
lean_dec(v_a_1760_);
lean_dec_ref(v_a_1759_);
lean_dec(v_a_1758_);
lean_dec_ref(v_a_1756_);
lean_dec(v_a_1755_);
lean_dec(v_a_1754_);
return v_res_1765_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_lookup_spec__0_spec__0___redArg(lean_object* v_a_1766_, lean_object* v_x_1767_){
_start:
{
if (lean_obj_tag(v_x_1767_) == 0)
{
lean_object* v___x_1768_; 
v___x_1768_ = lean_box(0);
return v___x_1768_;
}
else
{
lean_object* v_key_1769_; lean_object* v_value_1770_; lean_object* v_tail_1771_; uint8_t v___x_1772_; 
v_key_1769_ = lean_ctor_get(v_x_1767_, 0);
v_value_1770_ = lean_ctor_get(v_x_1767_, 1);
v_tail_1771_ = lean_ctor_get(v_x_1767_, 2);
v___x_1772_ = lean_expr_eqv(v_key_1769_, v_a_1766_);
if (v___x_1772_ == 0)
{
v_x_1767_ = v_tail_1771_;
goto _start;
}
else
{
lean_object* v___x_1774_; 
lean_inc(v_value_1770_);
v___x_1774_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1774_, 0, v_value_1770_);
return v___x_1774_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_lookup_spec__0_spec__0___redArg___boxed(lean_object* v_a_1775_, lean_object* v_x_1776_){
_start:
{
lean_object* v_res_1777_; 
v_res_1777_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_lookup_spec__0_spec__0___redArg(v_a_1775_, v_x_1776_);
lean_dec(v_x_1776_);
lean_dec_ref(v_a_1775_);
return v_res_1777_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_lookup_spec__0___redArg(lean_object* v_m_1778_, lean_object* v_a_1779_){
_start:
{
lean_object* v_buckets_1780_; lean_object* v___x_1781_; uint64_t v___x_1782_; uint64_t v___x_1783_; uint64_t v___x_1784_; uint64_t v_fold_1785_; uint64_t v___x_1786_; uint64_t v___x_1787_; uint64_t v___x_1788_; size_t v___x_1789_; size_t v___x_1790_; size_t v___x_1791_; size_t v___x_1792_; size_t v___x_1793_; lean_object* v___x_1794_; lean_object* v___x_1795_; 
v_buckets_1780_ = lean_ctor_get(v_m_1778_, 1);
v___x_1781_ = lean_array_get_size(v_buckets_1780_);
v___x_1782_ = l_Lean_Expr_hash(v_a_1779_);
v___x_1783_ = 32ULL;
v___x_1784_ = lean_uint64_shift_right(v___x_1782_, v___x_1783_);
v_fold_1785_ = lean_uint64_xor(v___x_1782_, v___x_1784_);
v___x_1786_ = 16ULL;
v___x_1787_ = lean_uint64_shift_right(v_fold_1785_, v___x_1786_);
v___x_1788_ = lean_uint64_xor(v_fold_1785_, v___x_1787_);
v___x_1789_ = lean_uint64_to_usize(v___x_1788_);
v___x_1790_ = lean_usize_of_nat(v___x_1781_);
v___x_1791_ = ((size_t)1ULL);
v___x_1792_ = lean_usize_sub(v___x_1790_, v___x_1791_);
v___x_1793_ = lean_usize_land(v___x_1789_, v___x_1792_);
v___x_1794_ = lean_array_uget_borrowed(v_buckets_1780_, v___x_1793_);
v___x_1795_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_lookup_spec__0_spec__0___redArg(v_a_1779_, v___x_1794_);
return v___x_1795_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_lookup_spec__0___redArg___boxed(lean_object* v_m_1796_, lean_object* v_a_1797_){
_start:
{
lean_object* v_res_1798_; 
v_res_1798_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_lookup_spec__0___redArg(v_m_1796_, v_a_1797_);
lean_dec_ref(v_a_1797_);
lean_dec_ref(v_m_1796_);
return v_res_1798_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__2___redArg(lean_object* v_a_1799_, lean_object* v_x_1800_){
_start:
{
if (lean_obj_tag(v_x_1800_) == 0)
{
uint8_t v___x_1801_; 
v___x_1801_ = 0;
return v___x_1801_;
}
else
{
lean_object* v_key_1802_; lean_object* v_tail_1803_; uint8_t v___x_1804_; 
v_key_1802_ = lean_ctor_get(v_x_1800_, 0);
v_tail_1803_ = lean_ctor_get(v_x_1800_, 2);
v___x_1804_ = lean_expr_eqv(v_key_1802_, v_a_1799_);
if (v___x_1804_ == 0)
{
v_x_1800_ = v_tail_1803_;
goto _start;
}
else
{
return v___x_1804_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__2___redArg___boxed(lean_object* v_a_1806_, lean_object* v_x_1807_){
_start:
{
uint8_t v_res_1808_; lean_object* v_r_1809_; 
v_res_1808_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__2___redArg(v_a_1806_, v_x_1807_);
lean_dec(v_x_1807_);
lean_dec_ref(v_a_1806_);
v_r_1809_ = lean_box(v_res_1808_);
return v_r_1809_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__3_spec__4_spec__9___redArg(lean_object* v_x_1810_, lean_object* v_x_1811_){
_start:
{
if (lean_obj_tag(v_x_1811_) == 0)
{
return v_x_1810_;
}
else
{
lean_object* v_key_1812_; lean_object* v_value_1813_; lean_object* v_tail_1814_; lean_object* v___x_1816_; uint8_t v_isShared_1817_; uint8_t v_isSharedCheck_1837_; 
v_key_1812_ = lean_ctor_get(v_x_1811_, 0);
v_value_1813_ = lean_ctor_get(v_x_1811_, 1);
v_tail_1814_ = lean_ctor_get(v_x_1811_, 2);
v_isSharedCheck_1837_ = !lean_is_exclusive(v_x_1811_);
if (v_isSharedCheck_1837_ == 0)
{
v___x_1816_ = v_x_1811_;
v_isShared_1817_ = v_isSharedCheck_1837_;
goto v_resetjp_1815_;
}
else
{
lean_inc(v_tail_1814_);
lean_inc(v_value_1813_);
lean_inc(v_key_1812_);
lean_dec(v_x_1811_);
v___x_1816_ = lean_box(0);
v_isShared_1817_ = v_isSharedCheck_1837_;
goto v_resetjp_1815_;
}
v_resetjp_1815_:
{
lean_object* v___x_1818_; uint64_t v___x_1819_; uint64_t v___x_1820_; uint64_t v___x_1821_; uint64_t v_fold_1822_; uint64_t v___x_1823_; uint64_t v___x_1824_; uint64_t v___x_1825_; size_t v___x_1826_; size_t v___x_1827_; size_t v___x_1828_; size_t v___x_1829_; size_t v___x_1830_; lean_object* v___x_1831_; lean_object* v___x_1833_; 
v___x_1818_ = lean_array_get_size(v_x_1810_);
v___x_1819_ = l_Lean_Expr_hash(v_key_1812_);
v___x_1820_ = 32ULL;
v___x_1821_ = lean_uint64_shift_right(v___x_1819_, v___x_1820_);
v_fold_1822_ = lean_uint64_xor(v___x_1819_, v___x_1821_);
v___x_1823_ = 16ULL;
v___x_1824_ = lean_uint64_shift_right(v_fold_1822_, v___x_1823_);
v___x_1825_ = lean_uint64_xor(v_fold_1822_, v___x_1824_);
v___x_1826_ = lean_uint64_to_usize(v___x_1825_);
v___x_1827_ = lean_usize_of_nat(v___x_1818_);
v___x_1828_ = ((size_t)1ULL);
v___x_1829_ = lean_usize_sub(v___x_1827_, v___x_1828_);
v___x_1830_ = lean_usize_land(v___x_1826_, v___x_1829_);
v___x_1831_ = lean_array_uget_borrowed(v_x_1810_, v___x_1830_);
lean_inc(v___x_1831_);
if (v_isShared_1817_ == 0)
{
lean_ctor_set(v___x_1816_, 2, v___x_1831_);
v___x_1833_ = v___x_1816_;
goto v_reusejp_1832_;
}
else
{
lean_object* v_reuseFailAlloc_1836_; 
v_reuseFailAlloc_1836_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1836_, 0, v_key_1812_);
lean_ctor_set(v_reuseFailAlloc_1836_, 1, v_value_1813_);
lean_ctor_set(v_reuseFailAlloc_1836_, 2, v___x_1831_);
v___x_1833_ = v_reuseFailAlloc_1836_;
goto v_reusejp_1832_;
}
v_reusejp_1832_:
{
lean_object* v___x_1834_; 
v___x_1834_ = lean_array_uset(v_x_1810_, v___x_1830_, v___x_1833_);
v_x_1810_ = v___x_1834_;
v_x_1811_ = v_tail_1814_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__3_spec__4___redArg(lean_object* v_i_1838_, lean_object* v_source_1839_, lean_object* v_target_1840_){
_start:
{
lean_object* v___x_1841_; uint8_t v___x_1842_; 
v___x_1841_ = lean_array_get_size(v_source_1839_);
v___x_1842_ = lean_nat_dec_lt(v_i_1838_, v___x_1841_);
if (v___x_1842_ == 0)
{
lean_dec_ref(v_source_1839_);
lean_dec(v_i_1838_);
return v_target_1840_;
}
else
{
lean_object* v_es_1843_; lean_object* v___x_1844_; lean_object* v_source_1845_; lean_object* v_target_1846_; lean_object* v___x_1847_; lean_object* v___x_1848_; 
v_es_1843_ = lean_array_fget(v_source_1839_, v_i_1838_);
v___x_1844_ = lean_box(0);
v_source_1845_ = lean_array_fset(v_source_1839_, v_i_1838_, v___x_1844_);
v_target_1846_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__3_spec__4_spec__9___redArg(v_target_1840_, v_es_1843_);
v___x_1847_ = lean_unsigned_to_nat(1u);
v___x_1848_ = lean_nat_add(v_i_1838_, v___x_1847_);
lean_dec(v_i_1838_);
v_i_1838_ = v___x_1848_;
v_source_1839_ = v_source_1845_;
v_target_1840_ = v_target_1846_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__3___redArg(lean_object* v_data_1850_){
_start:
{
lean_object* v___x_1851_; lean_object* v___x_1852_; lean_object* v_nbuckets_1853_; lean_object* v___x_1854_; lean_object* v___x_1855_; lean_object* v___x_1856_; lean_object* v___x_1857_; 
v___x_1851_ = lean_array_get_size(v_data_1850_);
v___x_1852_ = lean_unsigned_to_nat(2u);
v_nbuckets_1853_ = lean_nat_mul(v___x_1851_, v___x_1852_);
v___x_1854_ = lean_unsigned_to_nat(0u);
v___x_1855_ = lean_box(0);
v___x_1856_ = lean_mk_array(v_nbuckets_1853_, v___x_1855_);
v___x_1857_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__3_spec__4___redArg(v___x_1854_, v_data_1850_, v___x_1856_);
return v___x_1857_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__4___redArg(lean_object* v_a_1858_, lean_object* v_b_1859_, lean_object* v_x_1860_){
_start:
{
if (lean_obj_tag(v_x_1860_) == 0)
{
lean_dec(v_b_1859_);
lean_dec_ref(v_a_1858_);
return v_x_1860_;
}
else
{
lean_object* v_key_1861_; lean_object* v_value_1862_; lean_object* v_tail_1863_; lean_object* v___x_1865_; uint8_t v_isShared_1866_; uint8_t v_isSharedCheck_1875_; 
v_key_1861_ = lean_ctor_get(v_x_1860_, 0);
v_value_1862_ = lean_ctor_get(v_x_1860_, 1);
v_tail_1863_ = lean_ctor_get(v_x_1860_, 2);
v_isSharedCheck_1875_ = !lean_is_exclusive(v_x_1860_);
if (v_isSharedCheck_1875_ == 0)
{
v___x_1865_ = v_x_1860_;
v_isShared_1866_ = v_isSharedCheck_1875_;
goto v_resetjp_1864_;
}
else
{
lean_inc(v_tail_1863_);
lean_inc(v_value_1862_);
lean_inc(v_key_1861_);
lean_dec(v_x_1860_);
v___x_1865_ = lean_box(0);
v_isShared_1866_ = v_isSharedCheck_1875_;
goto v_resetjp_1864_;
}
v_resetjp_1864_:
{
uint8_t v___x_1867_; 
v___x_1867_ = lean_expr_eqv(v_key_1861_, v_a_1858_);
if (v___x_1867_ == 0)
{
lean_object* v___x_1868_; lean_object* v___x_1870_; 
v___x_1868_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__4___redArg(v_a_1858_, v_b_1859_, v_tail_1863_);
if (v_isShared_1866_ == 0)
{
lean_ctor_set(v___x_1865_, 2, v___x_1868_);
v___x_1870_ = v___x_1865_;
goto v_reusejp_1869_;
}
else
{
lean_object* v_reuseFailAlloc_1871_; 
v_reuseFailAlloc_1871_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1871_, 0, v_key_1861_);
lean_ctor_set(v_reuseFailAlloc_1871_, 1, v_value_1862_);
lean_ctor_set(v_reuseFailAlloc_1871_, 2, v___x_1868_);
v___x_1870_ = v_reuseFailAlloc_1871_;
goto v_reusejp_1869_;
}
v_reusejp_1869_:
{
return v___x_1870_;
}
}
else
{
lean_object* v___x_1873_; 
lean_dec(v_value_1862_);
lean_dec(v_key_1861_);
if (v_isShared_1866_ == 0)
{
lean_ctor_set(v___x_1865_, 1, v_b_1859_);
lean_ctor_set(v___x_1865_, 0, v_a_1858_);
v___x_1873_ = v___x_1865_;
goto v_reusejp_1872_;
}
else
{
lean_object* v_reuseFailAlloc_1874_; 
v_reuseFailAlloc_1874_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1874_, 0, v_a_1858_);
lean_ctor_set(v_reuseFailAlloc_1874_, 1, v_b_1859_);
lean_ctor_set(v_reuseFailAlloc_1874_, 2, v_tail_1863_);
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
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1___redArg(lean_object* v_m_1876_, lean_object* v_a_1877_, lean_object* v_b_1878_){
_start:
{
lean_object* v_size_1879_; lean_object* v_buckets_1880_; lean_object* v___x_1882_; uint8_t v_isShared_1883_; uint8_t v_isSharedCheck_1923_; 
v_size_1879_ = lean_ctor_get(v_m_1876_, 0);
v_buckets_1880_ = lean_ctor_get(v_m_1876_, 1);
v_isSharedCheck_1923_ = !lean_is_exclusive(v_m_1876_);
if (v_isSharedCheck_1923_ == 0)
{
v___x_1882_ = v_m_1876_;
v_isShared_1883_ = v_isSharedCheck_1923_;
goto v_resetjp_1881_;
}
else
{
lean_inc(v_buckets_1880_);
lean_inc(v_size_1879_);
lean_dec(v_m_1876_);
v___x_1882_ = lean_box(0);
v_isShared_1883_ = v_isSharedCheck_1923_;
goto v_resetjp_1881_;
}
v_resetjp_1881_:
{
lean_object* v___x_1884_; uint64_t v___x_1885_; uint64_t v___x_1886_; uint64_t v___x_1887_; uint64_t v_fold_1888_; uint64_t v___x_1889_; uint64_t v___x_1890_; uint64_t v___x_1891_; size_t v___x_1892_; size_t v___x_1893_; size_t v___x_1894_; size_t v___x_1895_; size_t v___x_1896_; lean_object* v_bkt_1897_; uint8_t v___x_1898_; 
v___x_1884_ = lean_array_get_size(v_buckets_1880_);
v___x_1885_ = l_Lean_Expr_hash(v_a_1877_);
v___x_1886_ = 32ULL;
v___x_1887_ = lean_uint64_shift_right(v___x_1885_, v___x_1886_);
v_fold_1888_ = lean_uint64_xor(v___x_1885_, v___x_1887_);
v___x_1889_ = 16ULL;
v___x_1890_ = lean_uint64_shift_right(v_fold_1888_, v___x_1889_);
v___x_1891_ = lean_uint64_xor(v_fold_1888_, v___x_1890_);
v___x_1892_ = lean_uint64_to_usize(v___x_1891_);
v___x_1893_ = lean_usize_of_nat(v___x_1884_);
v___x_1894_ = ((size_t)1ULL);
v___x_1895_ = lean_usize_sub(v___x_1893_, v___x_1894_);
v___x_1896_ = lean_usize_land(v___x_1892_, v___x_1895_);
v_bkt_1897_ = lean_array_uget_borrowed(v_buckets_1880_, v___x_1896_);
v___x_1898_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__2___redArg(v_a_1877_, v_bkt_1897_);
if (v___x_1898_ == 0)
{
lean_object* v___x_1899_; lean_object* v_size_x27_1900_; lean_object* v___x_1901_; lean_object* v_buckets_x27_1902_; lean_object* v___x_1903_; lean_object* v___x_1904_; lean_object* v___x_1905_; lean_object* v___x_1906_; lean_object* v___x_1907_; uint8_t v___x_1908_; 
v___x_1899_ = lean_unsigned_to_nat(1u);
v_size_x27_1900_ = lean_nat_add(v_size_1879_, v___x_1899_);
lean_dec(v_size_1879_);
lean_inc(v_bkt_1897_);
v___x_1901_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1901_, 0, v_a_1877_);
lean_ctor_set(v___x_1901_, 1, v_b_1878_);
lean_ctor_set(v___x_1901_, 2, v_bkt_1897_);
v_buckets_x27_1902_ = lean_array_uset(v_buckets_1880_, v___x_1896_, v___x_1901_);
v___x_1903_ = lean_unsigned_to_nat(4u);
v___x_1904_ = lean_nat_mul(v_size_x27_1900_, v___x_1903_);
v___x_1905_ = lean_unsigned_to_nat(3u);
v___x_1906_ = lean_nat_div(v___x_1904_, v___x_1905_);
lean_dec(v___x_1904_);
v___x_1907_ = lean_array_get_size(v_buckets_x27_1902_);
v___x_1908_ = lean_nat_dec_le(v___x_1906_, v___x_1907_);
lean_dec(v___x_1906_);
if (v___x_1908_ == 0)
{
lean_object* v_val_1909_; lean_object* v___x_1911_; 
v_val_1909_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__3___redArg(v_buckets_x27_1902_);
if (v_isShared_1883_ == 0)
{
lean_ctor_set(v___x_1882_, 1, v_val_1909_);
lean_ctor_set(v___x_1882_, 0, v_size_x27_1900_);
v___x_1911_ = v___x_1882_;
goto v_reusejp_1910_;
}
else
{
lean_object* v_reuseFailAlloc_1912_; 
v_reuseFailAlloc_1912_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1912_, 0, v_size_x27_1900_);
lean_ctor_set(v_reuseFailAlloc_1912_, 1, v_val_1909_);
v___x_1911_ = v_reuseFailAlloc_1912_;
goto v_reusejp_1910_;
}
v_reusejp_1910_:
{
return v___x_1911_;
}
}
else
{
lean_object* v___x_1914_; 
if (v_isShared_1883_ == 0)
{
lean_ctor_set(v___x_1882_, 1, v_buckets_x27_1902_);
lean_ctor_set(v___x_1882_, 0, v_size_x27_1900_);
v___x_1914_ = v___x_1882_;
goto v_reusejp_1913_;
}
else
{
lean_object* v_reuseFailAlloc_1915_; 
v_reuseFailAlloc_1915_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1915_, 0, v_size_x27_1900_);
lean_ctor_set(v_reuseFailAlloc_1915_, 1, v_buckets_x27_1902_);
v___x_1914_ = v_reuseFailAlloc_1915_;
goto v_reusejp_1913_;
}
v_reusejp_1913_:
{
return v___x_1914_;
}
}
}
else
{
lean_object* v___x_1916_; lean_object* v_buckets_x27_1917_; lean_object* v___x_1918_; lean_object* v___x_1919_; lean_object* v___x_1921_; 
lean_inc(v_bkt_1897_);
v___x_1916_ = lean_box(0);
v_buckets_x27_1917_ = lean_array_uset(v_buckets_1880_, v___x_1896_, v___x_1916_);
v___x_1918_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__4___redArg(v_a_1877_, v_b_1878_, v_bkt_1897_);
v___x_1919_ = lean_array_uset(v_buckets_x27_1917_, v___x_1896_, v___x_1918_);
if (v_isShared_1883_ == 0)
{
lean_ctor_set(v___x_1882_, 1, v___x_1919_);
v___x_1921_ = v___x_1882_;
goto v_reusejp_1920_;
}
else
{
lean_object* v_reuseFailAlloc_1922_; 
v_reuseFailAlloc_1922_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1922_, 0, v_size_1879_);
lean_ctor_set(v_reuseFailAlloc_1922_, 1, v___x_1919_);
v___x_1921_ = v_reuseFailAlloc_1922_;
goto v_reusejp_1920_;
}
v_reusejp_1920_:
{
return v___x_1921_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4_spec__8(lean_object* v_msgData_1924_, lean_object* v___y_1925_, lean_object* v___y_1926_, lean_object* v___y_1927_, lean_object* v___y_1928_){
_start:
{
lean_object* v___x_1930_; lean_object* v_env_1931_; lean_object* v___x_1932_; lean_object* v_mctx_1933_; lean_object* v_lctx_1934_; lean_object* v_options_1935_; lean_object* v___x_1936_; lean_object* v___x_1937_; lean_object* v___x_1938_; 
v___x_1930_ = lean_st_ref_get(v___y_1928_);
v_env_1931_ = lean_ctor_get(v___x_1930_, 0);
lean_inc_ref(v_env_1931_);
lean_dec(v___x_1930_);
v___x_1932_ = lean_st_ref_get(v___y_1926_);
v_mctx_1933_ = lean_ctor_get(v___x_1932_, 0);
lean_inc_ref(v_mctx_1933_);
lean_dec(v___x_1932_);
v_lctx_1934_ = lean_ctor_get(v___y_1925_, 2);
v_options_1935_ = lean_ctor_get(v___y_1927_, 2);
lean_inc_ref(v_options_1935_);
lean_inc_ref(v_lctx_1934_);
v___x_1936_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1936_, 0, v_env_1931_);
lean_ctor_set(v___x_1936_, 1, v_mctx_1933_);
lean_ctor_set(v___x_1936_, 2, v_lctx_1934_);
lean_ctor_set(v___x_1936_, 3, v_options_1935_);
v___x_1937_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1937_, 0, v___x_1936_);
lean_ctor_set(v___x_1937_, 1, v_msgData_1924_);
v___x_1938_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1938_, 0, v___x_1937_);
return v___x_1938_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4_spec__8___boxed(lean_object* v_msgData_1939_, lean_object* v___y_1940_, lean_object* v___y_1941_, lean_object* v___y_1942_, lean_object* v___y_1943_, lean_object* v___y_1944_){
_start:
{
lean_object* v_res_1945_; 
v_res_1945_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4_spec__8(v_msgData_1939_, v___y_1940_, v___y_1941_, v___y_1942_, v___y_1943_);
lean_dec(v___y_1943_);
lean_dec_ref(v___y_1942_);
lean_dec(v___y_1941_);
lean_dec_ref(v___y_1940_);
return v_res_1945_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4___redArg___closed__0(void){
_start:
{
lean_object* v___x_1946_; double v___x_1947_; 
v___x_1946_ = lean_unsigned_to_nat(0u);
v___x_1947_ = lean_float_of_nat(v___x_1946_);
return v___x_1947_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4___redArg(lean_object* v_cls_1951_, lean_object* v_msg_1952_, lean_object* v___y_1953_, lean_object* v___y_1954_, lean_object* v___y_1955_, lean_object* v___y_1956_){
_start:
{
lean_object* v_ref_1958_; lean_object* v___x_1959_; lean_object* v_a_1960_; lean_object* v___x_1962_; uint8_t v_isShared_1963_; uint8_t v_isSharedCheck_2004_; 
v_ref_1958_ = lean_ctor_get(v___y_1955_, 5);
v___x_1959_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4_spec__8(v_msg_1952_, v___y_1953_, v___y_1954_, v___y_1955_, v___y_1956_);
v_a_1960_ = lean_ctor_get(v___x_1959_, 0);
v_isSharedCheck_2004_ = !lean_is_exclusive(v___x_1959_);
if (v_isSharedCheck_2004_ == 0)
{
v___x_1962_ = v___x_1959_;
v_isShared_1963_ = v_isSharedCheck_2004_;
goto v_resetjp_1961_;
}
else
{
lean_inc(v_a_1960_);
lean_dec(v___x_1959_);
v___x_1962_ = lean_box(0);
v_isShared_1963_ = v_isSharedCheck_2004_;
goto v_resetjp_1961_;
}
v_resetjp_1961_:
{
lean_object* v___x_1964_; lean_object* v_traceState_1965_; lean_object* v_env_1966_; lean_object* v_nextMacroScope_1967_; lean_object* v_ngen_1968_; lean_object* v_auxDeclNGen_1969_; lean_object* v_cache_1970_; lean_object* v_messages_1971_; lean_object* v_infoState_1972_; lean_object* v_snapshotTasks_1973_; lean_object* v___x_1975_; uint8_t v_isShared_1976_; uint8_t v_isSharedCheck_2003_; 
v___x_1964_ = lean_st_ref_take(v___y_1956_);
v_traceState_1965_ = lean_ctor_get(v___x_1964_, 4);
v_env_1966_ = lean_ctor_get(v___x_1964_, 0);
v_nextMacroScope_1967_ = lean_ctor_get(v___x_1964_, 1);
v_ngen_1968_ = lean_ctor_get(v___x_1964_, 2);
v_auxDeclNGen_1969_ = lean_ctor_get(v___x_1964_, 3);
v_cache_1970_ = lean_ctor_get(v___x_1964_, 5);
v_messages_1971_ = lean_ctor_get(v___x_1964_, 6);
v_infoState_1972_ = lean_ctor_get(v___x_1964_, 7);
v_snapshotTasks_1973_ = lean_ctor_get(v___x_1964_, 8);
v_isSharedCheck_2003_ = !lean_is_exclusive(v___x_1964_);
if (v_isSharedCheck_2003_ == 0)
{
v___x_1975_ = v___x_1964_;
v_isShared_1976_ = v_isSharedCheck_2003_;
goto v_resetjp_1974_;
}
else
{
lean_inc(v_snapshotTasks_1973_);
lean_inc(v_infoState_1972_);
lean_inc(v_messages_1971_);
lean_inc(v_cache_1970_);
lean_inc(v_traceState_1965_);
lean_inc(v_auxDeclNGen_1969_);
lean_inc(v_ngen_1968_);
lean_inc(v_nextMacroScope_1967_);
lean_inc(v_env_1966_);
lean_dec(v___x_1964_);
v___x_1975_ = lean_box(0);
v_isShared_1976_ = v_isSharedCheck_2003_;
goto v_resetjp_1974_;
}
v_resetjp_1974_:
{
uint64_t v_tid_1977_; lean_object* v_traces_1978_; lean_object* v___x_1980_; uint8_t v_isShared_1981_; uint8_t v_isSharedCheck_2002_; 
v_tid_1977_ = lean_ctor_get_uint64(v_traceState_1965_, sizeof(void*)*1);
v_traces_1978_ = lean_ctor_get(v_traceState_1965_, 0);
v_isSharedCheck_2002_ = !lean_is_exclusive(v_traceState_1965_);
if (v_isSharedCheck_2002_ == 0)
{
v___x_1980_ = v_traceState_1965_;
v_isShared_1981_ = v_isSharedCheck_2002_;
goto v_resetjp_1979_;
}
else
{
lean_inc(v_traces_1978_);
lean_dec(v_traceState_1965_);
v___x_1980_ = lean_box(0);
v_isShared_1981_ = v_isSharedCheck_2002_;
goto v_resetjp_1979_;
}
v_resetjp_1979_:
{
lean_object* v___x_1982_; double v___x_1983_; uint8_t v___x_1984_; lean_object* v___x_1985_; lean_object* v___x_1986_; lean_object* v___x_1987_; lean_object* v___x_1988_; lean_object* v___x_1989_; lean_object* v___x_1990_; lean_object* v___x_1992_; 
v___x_1982_ = lean_box(0);
v___x_1983_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4___redArg___closed__0, &l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4___redArg___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4___redArg___closed__0);
v___x_1984_ = 0;
v___x_1985_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4___redArg___closed__1));
v___x_1986_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_1986_, 0, v_cls_1951_);
lean_ctor_set(v___x_1986_, 1, v___x_1982_);
lean_ctor_set(v___x_1986_, 2, v___x_1985_);
lean_ctor_set_float(v___x_1986_, sizeof(void*)*3, v___x_1983_);
lean_ctor_set_float(v___x_1986_, sizeof(void*)*3 + 8, v___x_1983_);
lean_ctor_set_uint8(v___x_1986_, sizeof(void*)*3 + 16, v___x_1984_);
v___x_1987_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4___redArg___closed__2));
v___x_1988_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_1988_, 0, v___x_1986_);
lean_ctor_set(v___x_1988_, 1, v_a_1960_);
lean_ctor_set(v___x_1988_, 2, v___x_1987_);
lean_inc(v_ref_1958_);
v___x_1989_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1989_, 0, v_ref_1958_);
lean_ctor_set(v___x_1989_, 1, v___x_1988_);
v___x_1990_ = l_Lean_PersistentArray_push___redArg(v_traces_1978_, v___x_1989_);
if (v_isShared_1981_ == 0)
{
lean_ctor_set(v___x_1980_, 0, v___x_1990_);
v___x_1992_ = v___x_1980_;
goto v_reusejp_1991_;
}
else
{
lean_object* v_reuseFailAlloc_2001_; 
v_reuseFailAlloc_2001_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2001_, 0, v___x_1990_);
lean_ctor_set_uint64(v_reuseFailAlloc_2001_, sizeof(void*)*1, v_tid_1977_);
v___x_1992_ = v_reuseFailAlloc_2001_;
goto v_reusejp_1991_;
}
v_reusejp_1991_:
{
lean_object* v___x_1994_; 
if (v_isShared_1976_ == 0)
{
lean_ctor_set(v___x_1975_, 4, v___x_1992_);
v___x_1994_ = v___x_1975_;
goto v_reusejp_1993_;
}
else
{
lean_object* v_reuseFailAlloc_2000_; 
v_reuseFailAlloc_2000_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2000_, 0, v_env_1966_);
lean_ctor_set(v_reuseFailAlloc_2000_, 1, v_nextMacroScope_1967_);
lean_ctor_set(v_reuseFailAlloc_2000_, 2, v_ngen_1968_);
lean_ctor_set(v_reuseFailAlloc_2000_, 3, v_auxDeclNGen_1969_);
lean_ctor_set(v_reuseFailAlloc_2000_, 4, v___x_1992_);
lean_ctor_set(v_reuseFailAlloc_2000_, 5, v_cache_1970_);
lean_ctor_set(v_reuseFailAlloc_2000_, 6, v_messages_1971_);
lean_ctor_set(v_reuseFailAlloc_2000_, 7, v_infoState_1972_);
lean_ctor_set(v_reuseFailAlloc_2000_, 8, v_snapshotTasks_1973_);
v___x_1994_ = v_reuseFailAlloc_2000_;
goto v_reusejp_1993_;
}
v_reusejp_1993_:
{
lean_object* v___x_1995_; lean_object* v___x_1996_; lean_object* v___x_1998_; 
v___x_1995_ = lean_st_ref_set(v___y_1956_, v___x_1994_);
v___x_1996_ = lean_box(0);
if (v_isShared_1963_ == 0)
{
lean_ctor_set(v___x_1962_, 0, v___x_1996_);
v___x_1998_ = v___x_1962_;
goto v_reusejp_1997_;
}
else
{
lean_object* v_reuseFailAlloc_1999_; 
v_reuseFailAlloc_1999_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1999_, 0, v___x_1996_);
v___x_1998_ = v_reuseFailAlloc_1999_;
goto v_reusejp_1997_;
}
v_reusejp_1997_:
{
return v___x_1998_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4___redArg___boxed(lean_object* v_cls_2005_, lean_object* v_msg_2006_, lean_object* v___y_2007_, lean_object* v___y_2008_, lean_object* v___y_2009_, lean_object* v___y_2010_, lean_object* v___y_2011_){
_start:
{
lean_object* v_res_2012_; 
v_res_2012_ = l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4___redArg(v_cls_2005_, v_msg_2006_, v___y_2007_, v___y_2008_, v___y_2009_, v___y_2010_);
lean_dec(v___y_2010_);
lean_dec_ref(v___y_2009_);
lean_dec(v___y_2008_);
lean_dec_ref(v___y_2007_);
return v_res_2012_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_Omega_lookup_spec__2___redArg(lean_object* v_x_2013_, lean_object* v_x_2014_, lean_object* v___y_2015_, lean_object* v___y_2016_, lean_object* v___y_2017_, lean_object* v___y_2018_){
_start:
{
if (lean_obj_tag(v_x_2013_) == 0)
{
lean_object* v___x_2020_; lean_object* v___x_2021_; 
v___x_2020_ = l_List_reverse___redArg(v_x_2014_);
v___x_2021_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2021_, 0, v___x_2020_);
return v___x_2021_;
}
else
{
lean_object* v_head_2022_; lean_object* v_tail_2023_; lean_object* v___x_2025_; uint8_t v_isShared_2026_; uint8_t v_isSharedCheck_2041_; 
v_head_2022_ = lean_ctor_get(v_x_2013_, 0);
v_tail_2023_ = lean_ctor_get(v_x_2013_, 1);
v_isSharedCheck_2041_ = !lean_is_exclusive(v_x_2013_);
if (v_isSharedCheck_2041_ == 0)
{
v___x_2025_ = v_x_2013_;
v_isShared_2026_ = v_isSharedCheck_2041_;
goto v_resetjp_2024_;
}
else
{
lean_inc(v_tail_2023_);
lean_inc(v_head_2022_);
lean_dec(v_x_2013_);
v___x_2025_ = lean_box(0);
v_isShared_2026_ = v_isSharedCheck_2041_;
goto v_resetjp_2024_;
}
v_resetjp_2024_:
{
lean_object* v___x_2027_; 
lean_inc(v___y_2018_);
lean_inc_ref(v___y_2017_);
lean_inc(v___y_2016_);
lean_inc_ref(v___y_2015_);
v___x_2027_ = lean_infer_type(v_head_2022_, v___y_2015_, v___y_2016_, v___y_2017_, v___y_2018_);
if (lean_obj_tag(v___x_2027_) == 0)
{
lean_object* v_a_2028_; lean_object* v___x_2030_; 
v_a_2028_ = lean_ctor_get(v___x_2027_, 0);
lean_inc(v_a_2028_);
lean_dec_ref(v___x_2027_);
if (v_isShared_2026_ == 0)
{
lean_ctor_set(v___x_2025_, 1, v_x_2014_);
lean_ctor_set(v___x_2025_, 0, v_a_2028_);
v___x_2030_ = v___x_2025_;
goto v_reusejp_2029_;
}
else
{
lean_object* v_reuseFailAlloc_2032_; 
v_reuseFailAlloc_2032_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2032_, 0, v_a_2028_);
lean_ctor_set(v_reuseFailAlloc_2032_, 1, v_x_2014_);
v___x_2030_ = v_reuseFailAlloc_2032_;
goto v_reusejp_2029_;
}
v_reusejp_2029_:
{
v_x_2013_ = v_tail_2023_;
v_x_2014_ = v___x_2030_;
goto _start;
}
}
else
{
lean_object* v_a_2033_; lean_object* v___x_2035_; uint8_t v_isShared_2036_; uint8_t v_isSharedCheck_2040_; 
lean_del_object(v___x_2025_);
lean_dec(v_tail_2023_);
lean_dec(v_x_2014_);
v_a_2033_ = lean_ctor_get(v___x_2027_, 0);
v_isSharedCheck_2040_ = !lean_is_exclusive(v___x_2027_);
if (v_isSharedCheck_2040_ == 0)
{
v___x_2035_ = v___x_2027_;
v_isShared_2036_ = v_isSharedCheck_2040_;
goto v_resetjp_2034_;
}
else
{
lean_inc(v_a_2033_);
lean_dec(v___x_2027_);
v___x_2035_ = lean_box(0);
v_isShared_2036_ = v_isSharedCheck_2040_;
goto v_resetjp_2034_;
}
v_resetjp_2034_:
{
lean_object* v___x_2038_; 
if (v_isShared_2036_ == 0)
{
v___x_2038_ = v___x_2035_;
goto v_reusejp_2037_;
}
else
{
lean_object* v_reuseFailAlloc_2039_; 
v_reuseFailAlloc_2039_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2039_, 0, v_a_2033_);
v___x_2038_ = v_reuseFailAlloc_2039_;
goto v_reusejp_2037_;
}
v_reusejp_2037_:
{
return v___x_2038_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_Omega_lookup_spec__2___redArg___boxed(lean_object* v_x_2042_, lean_object* v_x_2043_, lean_object* v___y_2044_, lean_object* v___y_2045_, lean_object* v___y_2046_, lean_object* v___y_2047_, lean_object* v___y_2048_){
_start:
{
lean_object* v_res_2049_; 
v_res_2049_ = l_List_mapM_loop___at___00Lean_Elab_Tactic_Omega_lookup_spec__2___redArg(v_x_2042_, v_x_2043_, v___y_2044_, v___y_2045_, v___y_2046_, v___y_2047_);
lean_dec(v___y_2047_);
lean_dec_ref(v___y_2046_);
lean_dec(v___y_2045_);
lean_dec_ref(v___y_2044_);
return v_res_2049_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_Tactic_Omega_lookup_spec__3(lean_object* v_a_2050_, lean_object* v_a_2051_){
_start:
{
if (lean_obj_tag(v_a_2050_) == 0)
{
lean_object* v___x_2052_; 
v___x_2052_ = l_List_reverse___redArg(v_a_2051_);
return v___x_2052_;
}
else
{
lean_object* v_head_2053_; lean_object* v_tail_2054_; lean_object* v___x_2056_; uint8_t v_isShared_2057_; uint8_t v_isSharedCheck_2063_; 
v_head_2053_ = lean_ctor_get(v_a_2050_, 0);
v_tail_2054_ = lean_ctor_get(v_a_2050_, 1);
v_isSharedCheck_2063_ = !lean_is_exclusive(v_a_2050_);
if (v_isSharedCheck_2063_ == 0)
{
v___x_2056_ = v_a_2050_;
v_isShared_2057_ = v_isSharedCheck_2063_;
goto v_resetjp_2055_;
}
else
{
lean_inc(v_tail_2054_);
lean_inc(v_head_2053_);
lean_dec(v_a_2050_);
v___x_2056_ = lean_box(0);
v_isShared_2057_ = v_isSharedCheck_2063_;
goto v_resetjp_2055_;
}
v_resetjp_2055_:
{
lean_object* v___x_2058_; lean_object* v___x_2060_; 
v___x_2058_ = l_Lean_MessageData_ofExpr(v_head_2053_);
if (v_isShared_2057_ == 0)
{
lean_ctor_set(v___x_2056_, 1, v_a_2051_);
lean_ctor_set(v___x_2056_, 0, v___x_2058_);
v___x_2060_ = v___x_2056_;
goto v_reusejp_2059_;
}
else
{
lean_object* v_reuseFailAlloc_2062_; 
v_reuseFailAlloc_2062_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2062_, 0, v___x_2058_);
lean_ctor_set(v_reuseFailAlloc_2062_, 1, v_a_2051_);
v___x_2060_ = v_reuseFailAlloc_2062_;
goto v_reusejp_2059_;
}
v_reusejp_2059_:
{
v_a_2050_ = v_tail_2054_;
v_a_2051_ = v___x_2060_;
goto _start;
}
}
}
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_lookup___closed__4(void){
_start:
{
lean_object* v___x_2070_; lean_object* v___x_2071_; lean_object* v___x_2072_; 
v___x_2070_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_lookup___closed__1));
v___x_2071_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_lookup___closed__3));
v___x_2072_ = l_Lean_Name_append(v___x_2071_, v___x_2070_);
return v___x_2072_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_lookup___closed__6(void){
_start:
{
lean_object* v___x_2074_; lean_object* v___x_2075_; 
v___x_2074_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_lookup___closed__5));
v___x_2075_ = l_Lean_stringToMessageData(v___x_2074_);
return v___x_2075_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_lookup___closed__8(void){
_start:
{
lean_object* v___x_2077_; lean_object* v___x_2078_; 
v___x_2077_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_lookup___closed__7));
v___x_2078_ = l_Lean_stringToMessageData(v___x_2077_);
return v___x_2078_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_lookup(lean_object* v_e_2079_, lean_object* v_a_2080_, lean_object* v_a_2081_, lean_object* v_a_2082_, uint8_t v_a_2083_, lean_object* v_a_2084_, lean_object* v_a_2085_, lean_object* v_a_2086_, lean_object* v_a_2087_, lean_object* v_a_2088_){
_start:
{
lean_object* v___x_2090_; lean_object* v_e_2091_; lean_object* v___x_2092_; 
v___x_2090_ = lean_st_ref_get(v_a_2081_);
v_e_2091_ = l_Lean_Elab_Tactic_Omega_stripMData(v_e_2079_);
v___x_2092_ = l_Lean_Meta_Canonicalizer_canon(v_e_2091_, v_a_2083_, v_a_2084_, v_a_2085_, v_a_2086_, v_a_2087_, v_a_2088_);
if (lean_obj_tag(v___x_2092_) == 0)
{
lean_object* v_a_2093_; lean_object* v___x_2095_; uint8_t v_isShared_2096_; uint8_t v_isSharedCheck_2189_; 
v_a_2093_ = lean_ctor_get(v___x_2092_, 0);
v_isSharedCheck_2189_ = !lean_is_exclusive(v___x_2092_);
if (v_isSharedCheck_2189_ == 0)
{
v___x_2095_ = v___x_2092_;
v_isShared_2096_ = v_isSharedCheck_2189_;
goto v_resetjp_2094_;
}
else
{
lean_inc(v_a_2093_);
lean_dec(v___x_2092_);
v___x_2095_ = lean_box(0);
v_isShared_2096_ = v_isSharedCheck_2189_;
goto v_resetjp_2094_;
}
v_resetjp_2094_:
{
lean_object* v___y_2098_; lean_object* v___y_2099_; lean_object* v___x_2109_; 
v___x_2109_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_lookup_spec__0___redArg(v___x_2090_, v_a_2093_);
lean_dec(v___x_2090_);
if (lean_obj_tag(v___x_2109_) == 0)
{
lean_object* v_options_2110_; lean_object* v_inheritedTraceOptions_2111_; uint8_t v_hasTrace_2112_; lean_object* v___x_2113_; lean_object* v___y_2115_; lean_object* v___y_2116_; lean_object* v___y_2117_; uint8_t v___y_2118_; lean_object* v___y_2119_; lean_object* v___y_2120_; lean_object* v___y_2121_; lean_object* v___y_2122_; lean_object* v___y_2123_; 
v_options_2110_ = lean_ctor_get(v_a_2087_, 2);
v_inheritedTraceOptions_2111_ = lean_ctor_get(v_a_2087_, 13);
v_hasTrace_2112_ = lean_ctor_get_uint8(v_options_2110_, sizeof(void*)*1);
v___x_2113_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_lookup___closed__1));
if (v_hasTrace_2112_ == 0)
{
v___y_2115_ = v_a_2080_;
v___y_2116_ = v_a_2081_;
v___y_2117_ = v_a_2082_;
v___y_2118_ = v_a_2083_;
v___y_2119_ = v_a_2084_;
v___y_2120_ = v_a_2085_;
v___y_2121_ = v_a_2086_;
v___y_2122_ = v_a_2087_;
v___y_2123_ = v_a_2088_;
goto v___jp_2114_;
}
else
{
lean_object* v___x_2165_; uint8_t v___x_2166_; 
v___x_2165_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_lookup___closed__4, &l_Lean_Elab_Tactic_Omega_lookup___closed__4_once, _init_l_Lean_Elab_Tactic_Omega_lookup___closed__4);
v___x_2166_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2111_, v_options_2110_, v___x_2165_);
if (v___x_2166_ == 0)
{
v___y_2115_ = v_a_2080_;
v___y_2116_ = v_a_2081_;
v___y_2117_ = v_a_2082_;
v___y_2118_ = v_a_2083_;
v___y_2119_ = v_a_2084_;
v___y_2120_ = v_a_2085_;
v___y_2121_ = v_a_2086_;
v___y_2122_ = v_a_2087_;
v___y_2123_ = v_a_2088_;
goto v___jp_2114_;
}
else
{
lean_object* v___x_2167_; lean_object* v___x_2168_; lean_object* v___x_2169_; lean_object* v___x_2170_; 
v___x_2167_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_lookup___closed__8, &l_Lean_Elab_Tactic_Omega_lookup___closed__8_once, _init_l_Lean_Elab_Tactic_Omega_lookup___closed__8);
lean_inc(v_a_2093_);
v___x_2168_ = l_Lean_MessageData_ofExpr(v_a_2093_);
v___x_2169_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2169_, 0, v___x_2167_);
lean_ctor_set(v___x_2169_, 1, v___x_2168_);
v___x_2170_ = l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4___redArg(v___x_2113_, v___x_2169_, v_a_2085_, v_a_2086_, v_a_2087_, v_a_2088_);
if (lean_obj_tag(v___x_2170_) == 0)
{
lean_dec_ref(v___x_2170_);
v___y_2115_ = v_a_2080_;
v___y_2116_ = v_a_2081_;
v___y_2117_ = v_a_2082_;
v___y_2118_ = v_a_2083_;
v___y_2119_ = v_a_2084_;
v___y_2120_ = v_a_2085_;
v___y_2121_ = v_a_2086_;
v___y_2122_ = v_a_2087_;
v___y_2123_ = v_a_2088_;
goto v___jp_2114_;
}
else
{
lean_object* v_a_2171_; lean_object* v___x_2173_; uint8_t v_isShared_2174_; uint8_t v_isSharedCheck_2178_; 
lean_del_object(v___x_2095_);
lean_dec(v_a_2093_);
v_a_2171_ = lean_ctor_get(v___x_2170_, 0);
v_isSharedCheck_2178_ = !lean_is_exclusive(v___x_2170_);
if (v_isSharedCheck_2178_ == 0)
{
v___x_2173_ = v___x_2170_;
v_isShared_2174_ = v_isSharedCheck_2178_;
goto v_resetjp_2172_;
}
else
{
lean_inc(v_a_2171_);
lean_dec(v___x_2170_);
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
v___jp_2114_:
{
lean_object* v___x_2124_; 
lean_inc(v_a_2093_);
v___x_2124_ = l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg(v_a_2093_, v___y_2117_, v___y_2120_, v___y_2121_, v___y_2122_, v___y_2123_);
if (lean_obj_tag(v___x_2124_) == 0)
{
lean_object* v_options_2125_; uint8_t v_hasTrace_2126_; 
v_options_2125_ = lean_ctor_get(v___y_2122_, 2);
v_hasTrace_2126_ = lean_ctor_get_uint8(v_options_2125_, sizeof(void*)*1);
if (v_hasTrace_2126_ == 0)
{
lean_object* v_a_2127_; 
v_a_2127_ = lean_ctor_get(v___x_2124_, 0);
lean_inc(v_a_2127_);
lean_dec_ref(v___x_2124_);
v___y_2098_ = v_a_2127_;
v___y_2099_ = v___y_2116_;
goto v___jp_2097_;
}
else
{
lean_object* v_a_2128_; lean_object* v_inheritedTraceOptions_2129_; lean_object* v___x_2130_; uint8_t v___x_2131_; 
v_a_2128_ = lean_ctor_get(v___x_2124_, 0);
lean_inc(v_a_2128_);
lean_dec_ref(v___x_2124_);
v_inheritedTraceOptions_2129_ = lean_ctor_get(v___y_2122_, 13);
v___x_2130_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_lookup___closed__4, &l_Lean_Elab_Tactic_Omega_lookup___closed__4_once, _init_l_Lean_Elab_Tactic_Omega_lookup___closed__4);
v___x_2131_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2129_, v_options_2125_, v___x_2130_);
if (v___x_2131_ == 0)
{
v___y_2098_ = v_a_2128_;
v___y_2099_ = v___y_2116_;
goto v___jp_2097_;
}
else
{
uint8_t v___x_2132_; 
v___x_2132_ = l_List_isEmpty___redArg(v_a_2128_);
if (v___x_2132_ == 0)
{
if (v___x_2131_ == 0)
{
v___y_2098_ = v_a_2128_;
v___y_2099_ = v___y_2116_;
goto v___jp_2097_;
}
else
{
lean_object* v___x_2133_; lean_object* v___x_2134_; 
v___x_2133_ = lean_box(0);
lean_inc(v_a_2128_);
v___x_2134_ = l_List_mapM_loop___at___00Lean_Elab_Tactic_Omega_lookup_spec__2___redArg(v_a_2128_, v___x_2133_, v___y_2120_, v___y_2121_, v___y_2122_, v___y_2123_);
if (lean_obj_tag(v___x_2134_) == 0)
{
lean_object* v_a_2135_; lean_object* v___x_2136_; lean_object* v___x_2137_; lean_object* v___x_2138_; lean_object* v___x_2139_; lean_object* v___x_2140_; 
v_a_2135_ = lean_ctor_get(v___x_2134_, 0);
lean_inc(v_a_2135_);
lean_dec_ref(v___x_2134_);
v___x_2136_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_lookup___closed__6, &l_Lean_Elab_Tactic_Omega_lookup___closed__6_once, _init_l_Lean_Elab_Tactic_Omega_lookup___closed__6);
v___x_2137_ = l_List_mapTR_loop___at___00Lean_Elab_Tactic_Omega_lookup_spec__3(v_a_2135_, v___x_2133_);
v___x_2138_ = l_Lean_MessageData_ofList(v___x_2137_);
v___x_2139_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2139_, 0, v___x_2136_);
lean_ctor_set(v___x_2139_, 1, v___x_2138_);
v___x_2140_ = l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4___redArg(v___x_2113_, v___x_2139_, v___y_2120_, v___y_2121_, v___y_2122_, v___y_2123_);
if (lean_obj_tag(v___x_2140_) == 0)
{
lean_dec_ref(v___x_2140_);
v___y_2098_ = v_a_2128_;
v___y_2099_ = v___y_2116_;
goto v___jp_2097_;
}
else
{
lean_object* v_a_2141_; lean_object* v___x_2143_; uint8_t v_isShared_2144_; uint8_t v_isSharedCheck_2148_; 
lean_dec(v_a_2128_);
lean_del_object(v___x_2095_);
lean_dec(v_a_2093_);
v_a_2141_ = lean_ctor_get(v___x_2140_, 0);
v_isSharedCheck_2148_ = !lean_is_exclusive(v___x_2140_);
if (v_isSharedCheck_2148_ == 0)
{
v___x_2143_ = v___x_2140_;
v_isShared_2144_ = v_isSharedCheck_2148_;
goto v_resetjp_2142_;
}
else
{
lean_inc(v_a_2141_);
lean_dec(v___x_2140_);
v___x_2143_ = lean_box(0);
v_isShared_2144_ = v_isSharedCheck_2148_;
goto v_resetjp_2142_;
}
v_resetjp_2142_:
{
lean_object* v___x_2146_; 
if (v_isShared_2144_ == 0)
{
v___x_2146_ = v___x_2143_;
goto v_reusejp_2145_;
}
else
{
lean_object* v_reuseFailAlloc_2147_; 
v_reuseFailAlloc_2147_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2147_, 0, v_a_2141_);
v___x_2146_ = v_reuseFailAlloc_2147_;
goto v_reusejp_2145_;
}
v_reusejp_2145_:
{
return v___x_2146_;
}
}
}
}
else
{
lean_object* v_a_2149_; lean_object* v___x_2151_; uint8_t v_isShared_2152_; uint8_t v_isSharedCheck_2156_; 
lean_dec(v_a_2128_);
lean_del_object(v___x_2095_);
lean_dec(v_a_2093_);
v_a_2149_ = lean_ctor_get(v___x_2134_, 0);
v_isSharedCheck_2156_ = !lean_is_exclusive(v___x_2134_);
if (v_isSharedCheck_2156_ == 0)
{
v___x_2151_ = v___x_2134_;
v_isShared_2152_ = v_isSharedCheck_2156_;
goto v_resetjp_2150_;
}
else
{
lean_inc(v_a_2149_);
lean_dec(v___x_2134_);
v___x_2151_ = lean_box(0);
v_isShared_2152_ = v_isSharedCheck_2156_;
goto v_resetjp_2150_;
}
v_resetjp_2150_:
{
lean_object* v___x_2154_; 
if (v_isShared_2152_ == 0)
{
v___x_2154_ = v___x_2151_;
goto v_reusejp_2153_;
}
else
{
lean_object* v_reuseFailAlloc_2155_; 
v_reuseFailAlloc_2155_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2155_, 0, v_a_2149_);
v___x_2154_ = v_reuseFailAlloc_2155_;
goto v_reusejp_2153_;
}
v_reusejp_2153_:
{
return v___x_2154_;
}
}
}
}
}
else
{
v___y_2098_ = v_a_2128_;
v___y_2099_ = v___y_2116_;
goto v___jp_2097_;
}
}
}
}
else
{
lean_object* v_a_2157_; lean_object* v___x_2159_; uint8_t v_isShared_2160_; uint8_t v_isSharedCheck_2164_; 
lean_del_object(v___x_2095_);
lean_dec(v_a_2093_);
v_a_2157_ = lean_ctor_get(v___x_2124_, 0);
v_isSharedCheck_2164_ = !lean_is_exclusive(v___x_2124_);
if (v_isSharedCheck_2164_ == 0)
{
v___x_2159_ = v___x_2124_;
v_isShared_2160_ = v_isSharedCheck_2164_;
goto v_resetjp_2158_;
}
else
{
lean_inc(v_a_2157_);
lean_dec(v___x_2124_);
v___x_2159_ = lean_box(0);
v_isShared_2160_ = v_isSharedCheck_2164_;
goto v_resetjp_2158_;
}
v_resetjp_2158_:
{
lean_object* v___x_2162_; 
if (v_isShared_2160_ == 0)
{
v___x_2162_ = v___x_2159_;
goto v_reusejp_2161_;
}
else
{
lean_object* v_reuseFailAlloc_2163_; 
v_reuseFailAlloc_2163_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2163_, 0, v_a_2157_);
v___x_2162_ = v_reuseFailAlloc_2163_;
goto v_reusejp_2161_;
}
v_reusejp_2161_:
{
return v___x_2162_;
}
}
}
}
}
else
{
lean_object* v_val_2179_; lean_object* v___x_2181_; uint8_t v_isShared_2182_; uint8_t v_isSharedCheck_2188_; 
lean_del_object(v___x_2095_);
lean_dec(v_a_2093_);
v_val_2179_ = lean_ctor_get(v___x_2109_, 0);
v_isSharedCheck_2188_ = !lean_is_exclusive(v___x_2109_);
if (v_isSharedCheck_2188_ == 0)
{
v___x_2181_ = v___x_2109_;
v_isShared_2182_ = v_isSharedCheck_2188_;
goto v_resetjp_2180_;
}
else
{
lean_inc(v_val_2179_);
lean_dec(v___x_2109_);
v___x_2181_ = lean_box(0);
v_isShared_2182_ = v_isSharedCheck_2188_;
goto v_resetjp_2180_;
}
v_resetjp_2180_:
{
lean_object* v___x_2183_; lean_object* v___x_2184_; lean_object* v___x_2186_; 
v___x_2183_ = lean_box(0);
v___x_2184_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2184_, 0, v_val_2179_);
lean_ctor_set(v___x_2184_, 1, v___x_2183_);
if (v_isShared_2182_ == 0)
{
lean_ctor_set_tag(v___x_2181_, 0);
lean_ctor_set(v___x_2181_, 0, v___x_2184_);
v___x_2186_ = v___x_2181_;
goto v_reusejp_2185_;
}
else
{
lean_object* v_reuseFailAlloc_2187_; 
v_reuseFailAlloc_2187_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2187_, 0, v___x_2184_);
v___x_2186_ = v_reuseFailAlloc_2187_;
goto v_reusejp_2185_;
}
v_reusejp_2185_:
{
return v___x_2186_;
}
}
}
v___jp_2097_:
{
lean_object* v___x_2100_; lean_object* v_size_2101_; lean_object* v___x_2102_; lean_object* v___x_2103_; lean_object* v___x_2104_; lean_object* v___x_2105_; lean_object* v___x_2107_; 
v___x_2100_ = lean_st_ref_take(v___y_2099_);
v_size_2101_ = lean_ctor_get(v___x_2100_, 0);
lean_inc_n(v_size_2101_, 2);
v___x_2102_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1___redArg(v___x_2100_, v_a_2093_, v_size_2101_);
v___x_2103_ = lean_st_ref_set(v___y_2099_, v___x_2102_);
v___x_2104_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2104_, 0, v___y_2098_);
v___x_2105_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2105_, 0, v_size_2101_);
lean_ctor_set(v___x_2105_, 1, v___x_2104_);
if (v_isShared_2096_ == 0)
{
lean_ctor_set(v___x_2095_, 0, v___x_2105_);
v___x_2107_ = v___x_2095_;
goto v_reusejp_2106_;
}
else
{
lean_object* v_reuseFailAlloc_2108_; 
v_reuseFailAlloc_2108_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2108_, 0, v___x_2105_);
v___x_2107_ = v_reuseFailAlloc_2108_;
goto v_reusejp_2106_;
}
v_reusejp_2106_:
{
return v___x_2107_;
}
}
}
}
else
{
lean_object* v_a_2190_; lean_object* v___x_2192_; uint8_t v_isShared_2193_; uint8_t v_isSharedCheck_2197_; 
lean_dec(v___x_2090_);
v_a_2190_ = lean_ctor_get(v___x_2092_, 0);
v_isSharedCheck_2197_ = !lean_is_exclusive(v___x_2092_);
if (v_isSharedCheck_2197_ == 0)
{
v___x_2192_ = v___x_2092_;
v_isShared_2193_ = v_isSharedCheck_2197_;
goto v_resetjp_2191_;
}
else
{
lean_inc(v_a_2190_);
lean_dec(v___x_2092_);
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
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_lookup___boxed(lean_object* v_e_2198_, lean_object* v_a_2199_, lean_object* v_a_2200_, lean_object* v_a_2201_, lean_object* v_a_2202_, lean_object* v_a_2203_, lean_object* v_a_2204_, lean_object* v_a_2205_, lean_object* v_a_2206_, lean_object* v_a_2207_, lean_object* v_a_2208_){
_start:
{
uint8_t v_a_boxed_2209_; lean_object* v_res_2210_; 
v_a_boxed_2209_ = lean_unbox(v_a_2202_);
v_res_2210_ = l_Lean_Elab_Tactic_Omega_lookup(v_e_2198_, v_a_2199_, v_a_2200_, v_a_2201_, v_a_boxed_2209_, v_a_2203_, v_a_2204_, v_a_2205_, v_a_2206_, v_a_2207_);
lean_dec(v_a_2207_);
lean_dec_ref(v_a_2206_);
lean_dec(v_a_2205_);
lean_dec_ref(v_a_2204_);
lean_dec(v_a_2203_);
lean_dec_ref(v_a_2201_);
lean_dec(v_a_2200_);
lean_dec(v_a_2199_);
return v_res_2210_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_lookup_spec__0(lean_object* v_00_u03b2_2211_, lean_object* v_m_2212_, lean_object* v_a_2213_){
_start:
{
lean_object* v___x_2214_; 
v___x_2214_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_lookup_spec__0___redArg(v_m_2212_, v_a_2213_);
return v___x_2214_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_lookup_spec__0___boxed(lean_object* v_00_u03b2_2215_, lean_object* v_m_2216_, lean_object* v_a_2217_){
_start:
{
lean_object* v_res_2218_; 
v_res_2218_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_lookup_spec__0(v_00_u03b2_2215_, v_m_2216_, v_a_2217_);
lean_dec_ref(v_a_2217_);
lean_dec_ref(v_m_2216_);
return v_res_2218_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1(lean_object* v_00_u03b2_2219_, lean_object* v_m_2220_, lean_object* v_a_2221_, lean_object* v_b_2222_){
_start:
{
lean_object* v___x_2223_; 
v___x_2223_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1___redArg(v_m_2220_, v_a_2221_, v_b_2222_);
return v___x_2223_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_Omega_lookup_spec__2(lean_object* v_x_2224_, lean_object* v_x_2225_, lean_object* v___y_2226_, lean_object* v___y_2227_, lean_object* v___y_2228_, uint8_t v___y_2229_, lean_object* v___y_2230_, lean_object* v___y_2231_, lean_object* v___y_2232_, lean_object* v___y_2233_, lean_object* v___y_2234_){
_start:
{
lean_object* v___x_2236_; 
v___x_2236_ = l_List_mapM_loop___at___00Lean_Elab_Tactic_Omega_lookup_spec__2___redArg(v_x_2224_, v_x_2225_, v___y_2231_, v___y_2232_, v___y_2233_, v___y_2234_);
return v___x_2236_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_Omega_lookup_spec__2___boxed(lean_object* v_x_2237_, lean_object* v_x_2238_, lean_object* v___y_2239_, lean_object* v___y_2240_, lean_object* v___y_2241_, lean_object* v___y_2242_, lean_object* v___y_2243_, lean_object* v___y_2244_, lean_object* v___y_2245_, lean_object* v___y_2246_, lean_object* v___y_2247_, lean_object* v___y_2248_){
_start:
{
uint8_t v___y_42930__boxed_2249_; lean_object* v_res_2250_; 
v___y_42930__boxed_2249_ = lean_unbox(v___y_2242_);
v_res_2250_ = l_List_mapM_loop___at___00Lean_Elab_Tactic_Omega_lookup_spec__2(v_x_2237_, v_x_2238_, v___y_2239_, v___y_2240_, v___y_2241_, v___y_42930__boxed_2249_, v___y_2243_, v___y_2244_, v___y_2245_, v___y_2246_, v___y_2247_);
lean_dec(v___y_2247_);
lean_dec_ref(v___y_2246_);
lean_dec(v___y_2245_);
lean_dec_ref(v___y_2244_);
lean_dec(v___y_2243_);
lean_dec_ref(v___y_2241_);
lean_dec(v___y_2240_);
lean_dec(v___y_2239_);
return v_res_2250_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4(lean_object* v_cls_2251_, lean_object* v_msg_2252_, lean_object* v___y_2253_, lean_object* v___y_2254_, lean_object* v___y_2255_, uint8_t v___y_2256_, lean_object* v___y_2257_, lean_object* v___y_2258_, lean_object* v___y_2259_, lean_object* v___y_2260_, lean_object* v___y_2261_){
_start:
{
lean_object* v___x_2263_; 
v___x_2263_ = l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4___redArg(v_cls_2251_, v_msg_2252_, v___y_2258_, v___y_2259_, v___y_2260_, v___y_2261_);
return v___x_2263_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4___boxed(lean_object* v_cls_2264_, lean_object* v_msg_2265_, lean_object* v___y_2266_, lean_object* v___y_2267_, lean_object* v___y_2268_, lean_object* v___y_2269_, lean_object* v___y_2270_, lean_object* v___y_2271_, lean_object* v___y_2272_, lean_object* v___y_2273_, lean_object* v___y_2274_, lean_object* v___y_2275_){
_start:
{
uint8_t v___y_42966__boxed_2276_; lean_object* v_res_2277_; 
v___y_42966__boxed_2276_ = lean_unbox(v___y_2269_);
v_res_2277_ = l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4(v_cls_2264_, v_msg_2265_, v___y_2266_, v___y_2267_, v___y_2268_, v___y_42966__boxed_2276_, v___y_2270_, v___y_2271_, v___y_2272_, v___y_2273_, v___y_2274_);
lean_dec(v___y_2274_);
lean_dec_ref(v___y_2273_);
lean_dec(v___y_2272_);
lean_dec_ref(v___y_2271_);
lean_dec(v___y_2270_);
lean_dec_ref(v___y_2268_);
lean_dec(v___y_2267_);
lean_dec(v___y_2266_);
return v_res_2277_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_lookup_spec__0_spec__0(lean_object* v_00_u03b2_2278_, lean_object* v_a_2279_, lean_object* v_x_2280_){
_start:
{
lean_object* v___x_2281_; 
v___x_2281_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_lookup_spec__0_spec__0___redArg(v_a_2279_, v_x_2280_);
return v___x_2281_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_lookup_spec__0_spec__0___boxed(lean_object* v_00_u03b2_2282_, lean_object* v_a_2283_, lean_object* v_x_2284_){
_start:
{
lean_object* v_res_2285_; 
v_res_2285_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_lookup_spec__0_spec__0(v_00_u03b2_2282_, v_a_2283_, v_x_2284_);
lean_dec(v_x_2284_);
lean_dec_ref(v_a_2283_);
return v_res_2285_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__2(lean_object* v_00_u03b2_2286_, lean_object* v_a_2287_, lean_object* v_x_2288_){
_start:
{
uint8_t v___x_2289_; 
v___x_2289_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__2___redArg(v_a_2287_, v_x_2288_);
return v___x_2289_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__2___boxed(lean_object* v_00_u03b2_2290_, lean_object* v_a_2291_, lean_object* v_x_2292_){
_start:
{
uint8_t v_res_2293_; lean_object* v_r_2294_; 
v_res_2293_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__2(v_00_u03b2_2290_, v_a_2291_, v_x_2292_);
lean_dec(v_x_2292_);
lean_dec_ref(v_a_2291_);
v_r_2294_ = lean_box(v_res_2293_);
return v_r_2294_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__3(lean_object* v_00_u03b2_2295_, lean_object* v_data_2296_){
_start:
{
lean_object* v___x_2297_; 
v___x_2297_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__3___redArg(v_data_2296_);
return v___x_2297_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__4(lean_object* v_00_u03b2_2298_, lean_object* v_a_2299_, lean_object* v_b_2300_, lean_object* v_x_2301_){
_start:
{
lean_object* v___x_2302_; 
v___x_2302_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__4___redArg(v_a_2299_, v_b_2300_, v_x_2301_);
return v___x_2302_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__3_spec__4(lean_object* v_00_u03b2_2303_, lean_object* v_i_2304_, lean_object* v_source_2305_, lean_object* v_target_2306_){
_start:
{
lean_object* v___x_2307_; 
v___x_2307_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__3_spec__4___redArg(v_i_2304_, v_source_2305_, v_target_2306_);
return v___x_2307_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__3_spec__4_spec__9(lean_object* v_00_u03b2_2308_, lean_object* v_x_2309_, lean_object* v_x_2310_){
_start:
{
lean_object* v___x_2311_; 
v___x_2311_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__3_spec__4_spec__9___redArg(v_x_2309_, v_x_2310_);
return v___x_2311_;
}
}
lean_object* runtime_initialize_Lean_Meta_AppBuilder(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Canonicalizer(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_Omega_OmegaM(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
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
