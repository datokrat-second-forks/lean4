// Lean compiler output
// Module: Lean.Elab.Tactic.Omega.Core
// Imports: public import Lean.Elab.Tactic.Omega.OmegaM public import Lean.Elab.Tactic.Omega.MinNatAbs
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
lean_object* lean_array_mk(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Omega_IntList_get(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
uint8_t lean_int_dec_eq(lean_object*, lean_object*);
lean_object* lean_int_neg(lean_object*);
lean_object* lean_int_mul(lean_object*, lean_object*);
lean_object* l_List_zipWithAll___at___00Lean_Omega_IntList_combo_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Omega_Constraint_combo(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Omega_Constraint_scale(lean_object*, lean_object*);
lean_object* lean_nat_abs(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkNatLit(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
uint8_t lean_int_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Level_ofNat(lean_object*);
lean_object* l_Int_toNat(lean_object*);
lean_object* l_Lean_instToExprInt_mkNat(lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkDecideProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Omega_mkEqReflWithExpectedType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Omega_tidy_x3f(lean_object*);
lean_object* l_Lean_Omega_tidy(lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
uint8_t l_Lean_Omega_Constraint_isImpossible(lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
uint8_t l_Lean_Omega_Constraint_isExact(lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* l_Int_repr(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_string_push(lean_object*, uint32_t);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_String_Slice_Pattern_ForwardSliceSearcher_buildTable(lean_object*);
lean_object* l_String_Slice_slice_x21(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_extract_fast(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_String_Slice_pos_x21(lean_object*, lean_object*);
uint8_t lean_string_get_byte_fast(lean_object*, lean_object*);
uint8_t lean_uint8_dec_eq(uint8_t, uint8_t);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_String_Slice_posGE___redArg(lean_object*, lean_object*);
uint8_t l_Lean_Omega_instBEqConstraint_beq(lean_object*, lean_object*);
lean_object* l_Lean_Omega_Constraint_exact(lean_object*);
lean_object* l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__4___boxed(lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonad___redArg(lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_thunk(lean_object*);
lean_object* l_Int_instDecidableEq___boxed(lean_object*, lean_object*);
uint8_t l_instDecidableEqList___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Omega_Constraint_combine(lean_object*, lean_object*);
uint8_t l_Lean_Omega_instDecidableEqConstraint_decEq(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Elab_Tactic_Omega_List_minNatAbs(lean_object*);
lean_object* l_Lean_Elab_Tactic_Omega_List_maxNatAbs(lean_object*);
lean_object* l_Lean_Elab_Tactic_Omega_lookup(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Omega_bmod__coeffs(lean_object*, lean_object*, lean_object*);
lean_object* l_Int_bmod(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* l_Int_sign(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_List_range(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_MessageData_paren(lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
lean_object* l_String_intercalate(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprMVar(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkSorry(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_toString___redArg(lean_object*, lean_object*);
lean_object* l_Lean_mkAtom(lean_object*);
lean_object* l_Int_repr___boxed(lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_mapTR_loop___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_AssocList_foldrM___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
extern lean_object* l_Lean_instToExprInt;
lean_object* l___private_Lean_ToExpr_0__Lean_List_toExprAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instToStringString___lam__0___boxed(lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__0_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "omega"};
static const lean_object* l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__0_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__0_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__1_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__0_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(107, 155, 144, 136, 132, 122, 189, 157)}};
static const lean_object* l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__1_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__1_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__2_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__2_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__2_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__3_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__2_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__3_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__3_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__4_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__4_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__4_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__5_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__3_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__4_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__5_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__5_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__6_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__6_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__6_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__7_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__5_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__6_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(216, 59, 67, 7, 118, 215, 141, 75)}};
static const lean_object* l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__7_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__7_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__8_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__8_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__8_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__9_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__7_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__8_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(133, 58, 227, 168, 195, 28, 19, 75)}};
static const lean_object* l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__9_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__9_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__10_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Omega"};
static const lean_object* l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__10_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__10_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__11_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__9_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__10_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 2, 97, 20, 0, 190, 151, 121)}};
static const lean_object* l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__11_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__11_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__12_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Core"};
static const lean_object* l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__12_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__12_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__13_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__11_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__12_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(194, 127, 112, 137, 173, 73, 6, 123)}};
static const lean_object* l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__13_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__13_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__14_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__13_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(163, 175, 232, 83, 151, 83, 109, 118)}};
static const lean_object* l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__14_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__14_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__15_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__14_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__4_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(238, 106, 137, 58, 220, 39, 120, 132)}};
static const lean_object* l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__15_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__15_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__16_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__15_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__6_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(188, 56, 156, 139, 49, 21, 86, 208)}};
static const lean_object* l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__16_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__16_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__17_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__16_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__8_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(121, 168, 28, 9, 214, 33, 222, 145)}};
static const lean_object* l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__17_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__17_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__18_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__17_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__10_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(186, 182, 253, 204, 178, 225, 195, 63)}};
static const lean_object* l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__18_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__18_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__19_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__19_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__19_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__20_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__18_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__19_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(31, 195, 243, 156, 202, 148, 124, 21)}};
static const lean_object* l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__20_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__20_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__21_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__21_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__21_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__22_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__20_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__21_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(42, 37, 81, 161, 75, 125, 164, 210)}};
static const lean_object* l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__22_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__22_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__23_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__22_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__4_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(171, 132, 243, 134, 151, 208, 115, 86)}};
static const lean_object* l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__23_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__23_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__24_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__23_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__6_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(189, 16, 5, 112, 31, 217, 215, 56)}};
static const lean_object* l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__24_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__24_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__25_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__24_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__8_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(228, 198, 87, 252, 181, 197, 254, 4)}};
static const lean_object* l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__25_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__25_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__26_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__25_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__10_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(123, 202, 173, 43, 15, 49, 145, 122)}};
static const lean_object* l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__26_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__26_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__27_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__26_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__12_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(19, 223, 148, 224, 253, 48, 85, 158)}};
static const lean_object* l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__27_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__27_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__28_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__28_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__29_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__29_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__29_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__30_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__30_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__31_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__31_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__31_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__32_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__32_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__33_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__33_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2____boxed(lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "LinearCombo"};
static const lean_object* l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "mk"};
static const lean_object* l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__1_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__4_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__10_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(113, 76, 155, 247, 209, 92, 141, 248)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__2_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(157, 132, 214, 18, 187, 72, 22, 121)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__2_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(105, 33, 22, 173, 105, 76, 89, 153)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__2_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__3;
static const lean_string_object l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Int"};
static const lean_object* l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__4_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__4_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__5_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__6;
static const lean_string_object l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "List"};
static const lean_object* l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__7 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__7_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "nil"};
static const lean_object* l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__8 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__8_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__7_value),LEAN_SCALAR_PTR_LITERAL(245, 188, 225, 225, 165, 5, 251, 132)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__9_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__8_value),LEAN_SCALAR_PTR_LITERAL(90, 150, 134, 113, 145, 38, 173, 251)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__9 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__9_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__10 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__10_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__11;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__12;
static const lean_string_object l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "cons"};
static const lean_object* l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__13 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__13_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__14_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__7_value),LEAN_SCALAR_PTR_LITERAL(245, 188, 225, 225, 165, 5, 251, 132)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__14_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__13_value),LEAN_SCALAR_PTR_LITERAL(98, 170, 59, 223, 79, 132, 139, 119)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__14 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__14_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__15;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__16;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17;
static const lean_string_object l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Neg"};
static const lean_object* l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "neg"};
static const lean_object* l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__19 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__19_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__20_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18_value),LEAN_SCALAR_PTR_LITERAL(94, 4, 109, 108, 64, 81, 153, 133)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__20_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__19_value),LEAN_SCALAR_PTR_LITERAL(105, 26, 70, 221, 245, 238, 127, 238)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__20 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__20_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__21;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__22;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__23;
static const lean_string_object l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "instNegInt"};
static const lean_object* l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__24 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__24_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__25_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__4_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__25_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__24_value),LEAN_SCALAR_PTR_LITERAL(217, 109, 233, 1, 211, 122, 77, 88)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__25 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__25_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__26;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___closed__0;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__4_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__10_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(113, 76, 155, 247, 209, 92, 141, 248)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(157, 132, 214, 18, 187, 72, 22, 121)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___closed__1_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___closed__2;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_instToExprLinearCombo;
static const lean_string_object l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "Constraint"};
static const lean_object* l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__4_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__10_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(113, 76, 155, 247, 209, 92, 141, 248)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(28, 192, 152, 239, 193, 179, 196, 197)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(84, 129, 254, 203, 24, 254, 72, 35)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__1_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__2;
static const lean_string_object l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Option"};
static const lean_object* l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__3_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "none"};
static const lean_object* l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__4_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(95, 234, 177, 188, 3, 226, 91, 252)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__5_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__4_value),LEAN_SCALAR_PTR_LITERAL(149, 114, 34, 228, 75, 195, 143, 131)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__5_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__6;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__7;
static const lean_string_object l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "some"};
static const lean_object* l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__8 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__8_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(95, 234, 177, 188, 3, 226, 91, 252)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__9_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__8_value),LEAN_SCALAR_PTR_LITERAL(89, 148, 40, 55, 221, 242, 231, 67)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__9 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__9_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__10;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_Elab_Tactic_Omega_instToExprConstraint___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Omega_instToExprConstraint___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprConstraint___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_instToExprConstraint___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__4_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_instToExprConstraint___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprConstraint___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__10_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(113, 76, 155, 247, 209, 92, 141, 248)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_instToExprConstraint___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprConstraint___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(28, 192, 152, 239, 193, 179, 196, 197)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_instToExprConstraint___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprConstraint___closed__1_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_instToExprConstraint___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_instToExprConstraint___closed__2;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_instToExprConstraint___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_instToExprConstraint___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_instToExprConstraint;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_ctorIdx___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_ctorIdx___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_ctorIdx(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_ctorIdx___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_assumption_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_assumption_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_assumption_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_tidy_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_tidy_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_tidy_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_combine_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_combine_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_combine_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_combo_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_combo_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_combo_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_bmod_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_bmod_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_bmod_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_tidy_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\n"};
static const lean_object* l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__0 = (const lean_object*)&l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__0_value;
static const lean_string_object l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__1 = (const lean_object*)&l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__1_value;
static lean_once_cell_t l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__2;
static lean_once_cell_t l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__3;
static lean_once_cell_t l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__4;
static lean_once_cell_t l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__5;
static lean_once_cell_t l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__6;
static const lean_ctor_object l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__7 = (const lean_object*)&l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__7_value;
LEAN_EXPORT lean_object* l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 2, .m_data = "• "};
static const lean_object* l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "\n  "};
static const lean_object* l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_foldl___at___00List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ", "};
static const lean_object* l_List_foldl___at___00List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0_spec__0___closed__0 = (const lean_object*)&l_List_foldl___at___00List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_List_foldl___at___00List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "[]"};
static const lean_object* l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0___closed__0 = (const lean_object*)&l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0___closed__0_value;
static const lean_string_object l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0___closed__1 = (const lean_object*)&l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0___closed__1_value;
static const lean_string_object l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0___closed__2 = (const lean_object*)&l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0___closed__2_value;
LEAN_EXPORT lean_object* l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0___boxed(lean_object*);
LEAN_EXPORT uint8_t l_List_beq___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_beq___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__1___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Omega_Justification_toString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 3, .m_data = " ∈ "};
static const lean_object* l_Lean_Elab_Tactic_Omega_Justification_toString___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_toString___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_Justification_toString___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = ": assumption "};
static const lean_object* l_Lean_Elab_Tactic_Omega_Justification_toString___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_toString___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_Justification_toString___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 7, .m_data = "(-∞, ∞)"};
static const lean_object* l_Lean_Elab_Tactic_Omega_Justification_toString___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_toString___closed__2_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_Justification_toString___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 5, .m_data = "(-∞, "};
static const lean_object* l_Lean_Elab_Tactic_Omega_Justification_toString___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_toString___closed__3_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_Justification_toString___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "-"};
static const lean_object* l_Lean_Elab_Tactic_Omega_Justification_toString___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_toString___closed__4_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_Justification_toString___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 4, .m_data = ", ∞)"};
static const lean_object* l_Lean_Elab_Tactic_Omega_Justification_toString___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_toString___closed__5_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_Justification_toString___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "{"};
static const lean_object* l_Lean_Elab_Tactic_Omega_Justification_toString___closed__6 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_toString___closed__6_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_Justification_toString___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "}"};
static const lean_object* l_Lean_Elab_Tactic_Omega_Justification_toString___closed__7 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_toString___closed__7_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_Justification_toString___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "∅"};
static const lean_object* l_Lean_Elab_Tactic_Omega_Justification_toString___closed__8 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_toString___closed__8_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_Justification_toString___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = ": tidying up:\n"};
static const lean_object* l_Lean_Elab_Tactic_Omega_Justification_toString___closed__9 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_toString___closed__9_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_Justification_toString___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = ": combination of:\n"};
static const lean_object* l_Lean_Elab_Tactic_Omega_Justification_toString___closed__10 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_toString___closed__10_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_Justification_toString___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l_Lean_Elab_Tactic_Omega_Justification_toString___closed__11 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_toString___closed__11_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_Justification_toString___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = " * x + "};
static const lean_object* l_Lean_Elab_Tactic_Omega_Justification_toString___closed__12 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_toString___closed__12_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_Justification_toString___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = " * y combo of:\n"};
static const lean_object* l_Lean_Elab_Tactic_Omega_Justification_toString___closed__13 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_toString___closed__13_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_Justification_toString___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = ": bmod with m="};
static const lean_object* l_Lean_Elab_Tactic_Omega_Justification_toString___closed__14 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_toString___closed__14_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_Justification_toString___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = " and i="};
static const lean_object* l_Lean_Elab_Tactic_Omega_Justification_toString___closed__15 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_toString___closed__15_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_Justification_toString___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = " of:\n"};
static const lean_object* l_Lean_Elab_Tactic_Omega_Justification_toString___closed__16 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_toString___closed__16_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_toString(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_instToString(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lean_Elab_Tactic_Omega_Justification_tidyProof_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lean_Elab_Tactic_Omega_Justification_tidyProof_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Omega_Justification_tidyProof___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "tidy_sat"};
static const lean_object* l_Lean_Elab_Tactic_Omega_Justification_tidyProof___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_tidyProof___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Justification_tidyProof___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__4_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Justification_tidyProof___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_tidyProof___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__10_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(113, 76, 155, 247, 209, 92, 141, 248)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Justification_tidyProof___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_tidyProof___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_tidyProof___closed__0_value),LEAN_SCALAR_PTR_LITERAL(28, 191, 70, 188, 16, 136, 82, 137)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_Justification_tidyProof___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_tidyProof___closed__1_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_Justification_tidyProof___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_Justification_tidyProof___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_tidyProof(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_tidyProof___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Omega_Justification_combineProof___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "combine_sat'"};
static const lean_object* l_Lean_Elab_Tactic_Omega_Justification_combineProof___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_combineProof___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Justification_combineProof___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__4_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Justification_combineProof___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_combineProof___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__10_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(113, 76, 155, 247, 209, 92, 141, 248)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Justification_combineProof___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_combineProof___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(28, 192, 152, 239, 193, 179, 196, 197)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Justification_combineProof___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_combineProof___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_combineProof___closed__0_value),LEAN_SCALAR_PTR_LITERAL(243, 94, 145, 248, 63, 179, 150, 35)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_Justification_combineProof___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_combineProof___closed__1_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_Justification_combineProof___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_Justification_combineProof___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_combineProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_combineProof___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Omega_Justification_comboProof___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "combo_sat'"};
static const lean_object* l_Lean_Elab_Tactic_Omega_Justification_comboProof___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_comboProof___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Justification_comboProof___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__4_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Justification_comboProof___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_comboProof___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__10_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(113, 76, 155, 247, 209, 92, 141, 248)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Justification_comboProof___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_comboProof___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_comboProof___closed__0_value),LEAN_SCALAR_PTR_LITERAL(174, 91, 1, 2, 53, 174, 185, 82)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_Justification_comboProof___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_comboProof___closed__1_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_Justification_comboProof___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_Justification_comboProof___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_comboProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_comboProof___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "LE"};
static const lean_object* l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "le"};
static const lean_object* l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__1_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__0_value),LEAN_SCALAR_PTR_LITERAL(216, 149, 183, 186, 191, 145, 216, 115)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__2_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__1_value),LEAN_SCALAR_PTR_LITERAL(109, 14, 90, 172, 72, 170, 136, 101)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__2_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__3;
static const lean_string_object l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Nat"};
static const lean_object* l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__4_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__4_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__5_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__6;
static const lean_string_object l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "instLENat"};
static const lean_object* l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__7 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__7_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__7_value),LEAN_SCALAR_PTR_LITERAL(211, 47, 64, 46, 87, 101, 57, 105)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__8 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__8_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__9;
static const lean_string_object l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Coeffs"};
static const lean_object* l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__10 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__10_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "length"};
static const lean_object* l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__11 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__11_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__4_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__12_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__12_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__10_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(113, 76, 155, 247, 209, 92, 141, 248)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__12_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__12_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__10_value),LEAN_SCALAR_PTR_LITERAL(200, 12, 56, 206, 160, 32, 217, 148)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__12_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__11_value),LEAN_SCALAR_PTR_LITERAL(170, 70, 58, 212, 39, 249, 136, 90)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__12 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__12_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__13;
static const lean_string_object l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "get"};
static const lean_object* l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__14 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__14_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__15_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__4_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__15_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__15_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__10_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(113, 76, 155, 247, 209, 92, 141, 248)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__15_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__15_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__10_value),LEAN_SCALAR_PTR_LITERAL(200, 12, 56, 206, 160, 32, 217, 148)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__15_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__14_value),LEAN_SCALAR_PTR_LITERAL(90, 92, 99, 234, 53, 138, 153, 24)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__15 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__15_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__16;
static const lean_string_object l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "bmod_div_term"};
static const lean_object* l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__17 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__17_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__18_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__4_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__18_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__18_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__10_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(113, 76, 155, 247, 209, 92, 141, 248)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__18_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__17_value),LEAN_SCALAR_PTR_LITERAL(146, 160, 30, 167, 226, 78, 110, 197)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__18 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__18_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__19;
static const lean_string_object l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "bmod_sat"};
static const lean_object* l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__20 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__20_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__21_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__4_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__21_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__21_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__10_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(113, 76, 155, 247, 209, 92, 141, 248)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__21_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__20_value),LEAN_SCALAR_PTR_LITERAL(53, 80, 238, 64, 134, 240, 94, 90)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__21 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__21_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__22;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_bmodProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_bmodProof___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Tactic_Omega_Justification_proof___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Omega_Justification_proof___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_proof___redArg___closed__0_value;
static const lean_closure_object l_Lean_Elab_Tactic_Omega_Justification_proof___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__1___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Omega_Justification_proof___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_proof___redArg___closed__1_value;
static const lean_closure_object l_Lean_Elab_Tactic_Omega_Justification_proof___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__2___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Omega_Justification_proof___redArg___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_proof___redArg___closed__2_value;
static const lean_closure_object l_Lean_Elab_Tactic_Omega_Justification_proof___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__3___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Omega_Justification_proof___redArg___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_proof___redArg___closed__3_value;
static const lean_closure_object l_Lean_Elab_Tactic_Omega_Justification_proof___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__4___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Omega_Justification_proof___redArg___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_proof___redArg___closed__4_value;
static const lean_closure_object l_Lean_Elab_Tactic_Omega_Justification_proof___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__6___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_proof___redArg___closed__4_value),((lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_proof___redArg___closed__3_value)} };
static const lean_object* l_Lean_Elab_Tactic_Omega_Justification_proof___redArg___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_proof___redArg___closed__5_value;
static const lean_closure_object l_Lean_Elab_Tactic_Omega_Justification_proof___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__9___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_proof___redArg___closed__3_value)} };
static const lean_object* l_Lean_Elab_Tactic_Omega_Justification_proof___redArg___closed__6 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_proof___redArg___closed__6_value;
static const lean_closure_object l_Lean_Elab_Tactic_Omega_Justification_proof___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__10___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Omega_Justification_proof___redArg___closed__7 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_proof___redArg___closed__7_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Justification_proof___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_proof___redArg___closed__0_value),((lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_proof___redArg___closed__1_value)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_Justification_proof___redArg___closed__8 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_proof___redArg___closed__8_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Justification_proof___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_proof___redArg___closed__8_value),((lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_proof___redArg___closed__2_value),((lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_proof___redArg___closed__5_value),((lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_proof___redArg___closed__6_value),((lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_proof___redArg___closed__7_value)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_Justification_proof___redArg___closed__9 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_proof___redArg___closed__9_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Justification_proof___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_proof___redArg___closed__9_value),((lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_proof___redArg___closed__3_value)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_Justification_proof___redArg___closed__10 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_proof___redArg___closed__10_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_Justification_proof___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_Justification_proof___redArg___closed__11;
static const lean_closure_object l_Lean_Elab_Tactic_Omega_Justification_proof___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Omega_Justification_proof___redArg___closed__12 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_proof___redArg___closed__12_value;
static const lean_closure_object l_Lean_Elab_Tactic_Omega_Justification_proof___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Omega_Justification_proof___redArg___closed__13 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_proof___redArg___closed__13_value;
static const lean_closure_object l_Lean_Elab_Tactic_Omega_Justification_proof___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Omega_Justification_proof___redArg___closed__14 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_proof___redArg___closed__14_value;
static const lean_closure_object l_Lean_Elab_Tactic_Omega_Justification_proof___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Omega_Justification_proof___redArg___closed__15 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_proof___redArg___closed__15_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_proof___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_proof___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_proof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_proof___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Fact_instToString___lam__0(lean_object*);
static const lean_closure_object l_Lean_Elab_Tactic_Omega_Fact_instToString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Omega_Fact_instToString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Omega_Fact_instToString___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Fact_instToString___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_Tactic_Omega_Fact_instToString = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Fact_instToString___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Fact_tidy(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Fact_combo(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "tacticSeq"};
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__1_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__4_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__2_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__2_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__8_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__2_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(212, 140, 85, 215, 241, 69, 7, 118)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__2_value;
static const lean_array_object l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__3_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "tacticSeq1Indented"};
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__4_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__4_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__5_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__5_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__8_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__5_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__4_value),LEAN_SCALAR_PTR_LITERAL(223, 90, 160, 238, 133, 180, 23, 239)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__5_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__6 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__6_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__6_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__7 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__7_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "tacticRfl"};
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__8 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__8_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__4_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__9_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__9_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__9_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__8_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__9_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__8_value),LEAN_SCALAR_PTR_LITERAL(201, 188, 173, 198, 169, 252, 183, 45)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__9 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__9_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "rfl"};
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__10 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__10_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__11;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__12;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__13;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__14;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__15;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__16;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__17;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__18;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__19;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam;
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_Omega_Problem_isEmpty(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_isEmpty___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "impossible"};
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__3___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__3___closed__0_value;
static const lean_closure_object l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__3___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__3___closed__1_value;
static const lean_closure_object l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__3___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__3___closed__2_value;
static const lean_closure_object l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__3___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__3___closed__3_value;
static const lean_closure_object l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__3___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__3___closed__4_value;
static const lean_closure_object l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__3___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__3___closed__5_value;
static const lean_closure_object l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__3___closed__6 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__3___closed__6_value;
static const lean_closure_object l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__3___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__3___closed__7 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__3___closed__7_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__3___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__3___closed__1_value),((lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__3___closed__2_value)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__3___closed__8 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__3___closed__8_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__3___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__3___closed__8_value),((lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__3___closed__3_value),((lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__3___closed__4_value),((lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__3___closed__5_value),((lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__3___closed__6_value)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__3___closed__9 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__3___closed__9_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__3___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__3___closed__9_value),((lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__3___closed__7_value)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__3___closed__10 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__3___closed__10_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__3___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "trivial"};
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__3___closed__11 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__3___closed__11_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__3(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Tactic_Omega_Problem_instToString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__0, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_instToString___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_instToString___closed__0_value;
static const lean_closure_object l_Lean_Elab_Tactic_Omega_Problem_instToString___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Int_repr___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_instToString___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_instToString___closed__1_value;
static const lean_closure_object l_Lean_Elab_Tactic_Omega_Problem_instToString___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__1, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_instToString___closed__1_value)} };
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_instToString___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_instToString___closed__2_value;
static const lean_closure_object l_Lean_Elab_Tactic_Omega_Problem_instToString___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__3, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_instToString___closed__2_value),((lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_instToString___closed__0_value)} };
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_instToString___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_instToString___closed__3_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_Tactic_Omega_Problem_instToString = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_instToString___closed__3_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "isImpossible"};
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__4_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__10_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(113, 76, 155, 247, 209, 92, 141, 248)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(28, 192, 152, 239, 193, 179, 196, 197)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__0_value),LEAN_SCALAR_PTR_LITERAL(102, 130, 136, 130, 117, 192, 112, 247)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__1_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__2;
static const lean_string_object l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Bool"};
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__3_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__4_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__3_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__5_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__4_value),LEAN_SCALAR_PTR_LITERAL(22, 245, 194, 28, 184, 9, 113, 128)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__5_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__6;
static const lean_string_object l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "not_sat'_of_isImpossible"};
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__7 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__7_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__4_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__8_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__10_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(113, 76, 155, 247, 209, 92, 141, 248)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__8_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(28, 192, 152, 239, 193, 179, 196, 197)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__8_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__7_value),LEAN_SCALAR_PTR_LITERAL(98, 38, 67, 93, 24, 197, 229, 14)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__8 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__8_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__9;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_proveFalse(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_proveFalse___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_insertConstraint___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__0_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint64_t l_List_foldl___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__0_spec__0(uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__0_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__0_spec__2_spec__3_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__0_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__0_spec__2___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__0_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_insertConstraint(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__0_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__0_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__0_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__0_spec__2_spec__3_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_Problem_addConstraint_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_Problem_addConstraint_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_Problem_addConstraint_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_Problem_addConstraint_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_addConstraint(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_Problem_addConstraint_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_Problem_addConstraint_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_Problem_addConstraint_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_Problem_addConstraint_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Elab_Tactic_Omega_Problem_selectEquality_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Omega_Problem_selectEquality_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Omega_Problem_selectEquality_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_selectEquality(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_selectEquality___boxed(lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lean_Elab_Tactic_Omega_Problem_replayEliminations_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lean_Elab_Tactic_Omega_Problem_replayEliminations_spec__0_spec__0___closed__0;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lean_Elab_Tactic_Omega_Problem_replayEliminations_spec__0_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lean_Elab_Tactic_Omega_Problem_replayEliminations_spec__0_spec__0___closed__1;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lean_Elab_Tactic_Omega_Problem_replayEliminations_spec__0_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lean_Elab_Tactic_Omega_Problem_replayEliminations_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldrTR___at___00Lean_Elab_Tactic_Omega_Problem_replayEliminations_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_replayEliminations(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_solveEasyEquality___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Elab_Tactic_Omega_Problem_solveEasyEquality_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Elab_Tactic_Omega_Problem_solveEasyEquality_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Omega_Problem_solveEasyEquality_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Omega_Problem_solveEasyEquality_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_findIdx_x3f_go___at___00Lean_Elab_Tactic_Omega_Problem_solveEasyEquality_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_findIdx_x3f_go___at___00Lean_Elab_Tactic_Omega_Problem_solveEasyEquality_spec__2___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Tactic_Omega_Problem_solveEasyEquality___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Omega_Problem_solveEasyEquality___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_solveEasyEquality___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_solveEasyEquality___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_Problem_solveEasyEquality___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_Problem_solveEasyEquality___closed__1;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_Problem_solveEasyEquality___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_Problem_solveEasyEquality___closed__2;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_Problem_solveEasyEquality___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_Problem_solveEasyEquality___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_solveEasyEquality(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_solveEasyEquality___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "Invalid constraint, expected an equation."};
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality___closed__1;
static const lean_string_object l_Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 59, .m_capacity = 59, .m_length = 58, .m_data = "When solving hard equality, new atom had been seen before!"};
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality___closed__2_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality___closed__3;
static const lean_string_object l_Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 61, .m_capacity = 61, .m_length = 60, .m_data = "When solving hard equality, there were unexpected new facts!"};
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality___closed__4_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality___closed__5;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_solveEquality(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_solveEquality___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_solveEqualities(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_solveEqualities___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Omega_Problem_addInequality__proof___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "addInequality_sat"};
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_addInequality__proof___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_addInequality__proof___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Problem_addInequality__proof___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__4_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Problem_addInequality__proof___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_addInequality__proof___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__10_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(113, 76, 155, 247, 209, 92, 141, 248)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Problem_addInequality__proof___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_addInequality__proof___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(28, 192, 152, 239, 193, 179, 196, 197)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Problem_addInequality__proof___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_addInequality__proof___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_addInequality__proof___closed__0_value),LEAN_SCALAR_PTR_LITERAL(83, 20, 9, 160, 52, 15, 198, 221)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_addInequality__proof___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_addInequality__proof___closed__1_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_Problem_addInequality__proof___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_Problem_addInequality__proof___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_addInequality__proof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_addInequality__proof___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Omega_Problem_addEquality__proof___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "addEquality_sat"};
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_addEquality__proof___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_addEquality__proof___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Problem_addEquality__proof___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__4_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Problem_addEquality__proof___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_addEquality__proof___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__10_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(113, 76, 155, 247, 209, 92, 141, 248)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Problem_addEquality__proof___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_addEquality__proof___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(28, 192, 152, 239, 193, 179, 196, 197)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Problem_addEquality__proof___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_addEquality__proof___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_addEquality__proof___closed__0_value),LEAN_SCALAR_PTR_LITERAL(88, 42, 95, 243, 198, 248, 249, 159)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_addEquality__proof___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_addEquality__proof___closed__1_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_Problem_addEquality__proof___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_Problem_addEquality__proof___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_addEquality__proof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_addEquality__proof___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_addInequality___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_addInequality___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_addInequality(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_addEquality(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_Tactic_Omega_Problem_addInequalities_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_addInequalities(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_Tactic_Omega_Problem_addEqualities_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_addEqualities(lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Problem_instInhabitedFourierMotzkinData_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 1, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_instInhabitedFourierMotzkinData_default___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_instInhabitedFourierMotzkinData_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_Tactic_Omega_Problem_instInhabitedFourierMotzkinData_default = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_instInhabitedFourierMotzkinData_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_Tactic_Omega_Problem_instInhabitedFourierMotzkinData = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_instInhabitedFourierMotzkinData_default___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_instToStringFourierMotzkinData___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_instToStringFourierMotzkinData___lam__1(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Omega_Problem_instToStringFourierMotzkinData___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "Fourier-Motzkin elimination data for variable "};
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_instToStringFourierMotzkinData___lam__2___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_instToStringFourierMotzkinData___lam__2___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_Problem_instToStringFourierMotzkinData___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 14, .m_data = "• irrelevant: "};
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_instToStringFourierMotzkinData___lam__2___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_instToStringFourierMotzkinData___lam__2___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_Problem_instToStringFourierMotzkinData___lam__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 15, .m_data = "• lowerBounds: "};
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_instToStringFourierMotzkinData___lam__2___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_instToStringFourierMotzkinData___lam__2___closed__2_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_Problem_instToStringFourierMotzkinData___lam__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 15, .m_data = "• upperBounds: "};
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_instToStringFourierMotzkinData___lam__2___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_instToStringFourierMotzkinData___lam__2___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_instToStringFourierMotzkinData___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Tactic_Omega_Problem_instToStringFourierMotzkinData___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Omega_Problem_instToStringFourierMotzkinData___lam__0, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_instToString___closed__1_value)} };
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_instToStringFourierMotzkinData___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_instToStringFourierMotzkinData___closed__0_value;
static const lean_closure_object l_Lean_Elab_Tactic_Omega_Problem_instToStringFourierMotzkinData___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Omega_Problem_instToStringFourierMotzkinData___lam__1, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_instToString___closed__1_value)} };
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_instToStringFourierMotzkinData___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_instToStringFourierMotzkinData___closed__1_value;
static const lean_closure_object l_Lean_Elab_Tactic_Omega_Problem_instToStringFourierMotzkinData___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instToStringString___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_instToStringFourierMotzkinData___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_instToStringFourierMotzkinData___closed__2_value;
static const lean_closure_object l_Lean_Elab_Tactic_Omega_Problem_instToStringFourierMotzkinData___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Omega_Problem_instToStringFourierMotzkinData___lam__2, .m_arity = 4, .m_num_fixed = 3, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_instToStringFourierMotzkinData___closed__0_value),((lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_instToStringFourierMotzkinData___closed__1_value),((lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_instToStringFourierMotzkinData___closed__2_value)} };
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_instToStringFourierMotzkinData___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_instToStringFourierMotzkinData___closed__3_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_Tactic_Omega_Problem_instToStringFourierMotzkinData = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_instToStringFourierMotzkinData___closed__3_value;
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_Omega_Problem_FourierMotzkinData_isEmpty(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_FourierMotzkinData_isEmpty___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_FourierMotzkinData_size(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_FourierMotzkinData_size___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_Omega_Problem_FourierMotzkinData_exact(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_FourierMotzkinData_exact___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinData_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinData_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinData_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinData_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinData_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinData_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinData_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinData_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinData_spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinData_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinData___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinData___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinData___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinData(lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinData_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinData_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect___lam__0___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__0___closed__0;
static const lean_array_object l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__0___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__1___redArg___closed__0;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Selected variable "};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__1___redArg___closed__1 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__1___redArg___closed__1_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__1___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__1___redArg___closed__2;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__4(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_mapTR_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_List_mapTR_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__3___closed__0 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__3___closed__0_value;
static const lean_ctor_object l_List_mapTR_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__3___closed__0_value)}};
static const lean_object* l_List_mapTR_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__3___closed__1 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__3___closed__1_value;
static lean_once_cell_t l_List_mapTR_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__3___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_mapTR_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__3___closed__2;
static lean_once_cell_t l_List_mapTR_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_mapTR_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__3___closed__3;
static const lean_string_object l_List_mapTR_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l_List_mapTR_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__3___closed__4 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__3___closed__4_value;
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__2(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__2___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect___closed__1;
static const lean_closure_object l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect___lam__0___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__1_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value)} };
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect___closed__2_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 66, .m_capacity = 66, .m_length = 65, .m_data = "Selecting variable to eliminate from (idx, size, exact) triples:\n"};
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect___closed__3_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect___closed__4;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkin_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkin_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkin_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkin_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkin_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkin_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkin(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkin___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkin_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkin_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkin_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkin_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkin_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkin_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldrM___at___00Lean_Elab_Tactic_Omega_Problem_runOmega_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldrM___at___00Lean_Elab_Tactic_Omega_Problem_runOmega_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Omega_Problem_runOmega_spec__3(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Omega_Problem_runOmega_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_Tactic_Omega_Problem_runOmega_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_Problem_runOmega_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_Problem_runOmega_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Omega_Problem_elimination___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "Running Fourier-Motzkin elimination on:\n"};
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_elimination___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_elimination___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_Problem_elimination___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_Problem_elimination___closed__1;
static const lean_string_object l_Lean_Elab_Tactic_Omega_Problem_runOmega___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Running omega on:\n"};
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_runOmega___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_runOmega___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_Problem_runOmega___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_Problem_runOmega___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_runOmega(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_elimination(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_elimination___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_runOmega___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_Problem_runOmega_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_Problem_runOmega_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__28_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v___x_68_; 
v___x_66_ = lean_unsigned_to_nat(3193685152u);
v___x_67_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__27_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_));
v___x_68_ = l_Lean_Name_num___override(v___x_67_, v___x_66_);
return v___x_68_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__30_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; 
v___x_70_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__29_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_));
v___x_71_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__28_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_, &l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__28_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__28_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_);
v___x_72_ = l_Lean_Name_str___override(v___x_71_, v___x_70_);
return v___x_72_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__32_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_74_; lean_object* v___x_75_; lean_object* v___x_76_; 
v___x_74_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__31_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_));
v___x_75_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__30_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_, &l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__30_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__30_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_);
v___x_76_ = l_Lean_Name_str___override(v___x_75_, v___x_74_);
return v___x_76_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__33_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; 
v___x_77_ = lean_unsigned_to_nat(2u);
v___x_78_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__32_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_, &l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__32_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__32_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_);
v___x_79_ = l_Lean_Name_num___override(v___x_78_, v___x_77_);
return v___x_79_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_81_; uint8_t v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; 
v___x_81_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__1_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_));
v___x_82_ = 0;
v___x_83_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__33_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_, &l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__33_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__33_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_);
v___x_84_ = l_Lean_registerTraceClass(v___x_81_, v___x_82_, v___x_83_);
return v___x_84_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2____boxed(lean_object* v___y_85_){
_start:
{
lean_object* v_res_86_; 
v_res_86_ = l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_();
return v_res_86_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__3(void){
_start:
{
lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; 
v___x_94_ = lean_box(0);
v___x_95_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__2));
v___x_96_ = l_Lean_Expr_const___override(v___x_95_, v___x_94_);
return v___x_96_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__6(void){
_start:
{
lean_object* v___x_100_; lean_object* v___x_101_; lean_object* v_type_102_; 
v___x_100_ = lean_box(0);
v___x_101_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__5));
v_type_102_ = l_Lean_Expr_const___override(v___x_101_, v___x_100_);
return v_type_102_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__11(void){
_start:
{
lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; 
v___x_111_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__10));
v___x_112_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__9));
v___x_113_ = l_Lean_mkConst(v___x_112_, v___x_111_);
return v___x_113_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__12(void){
_start:
{
lean_object* v_type_114_; lean_object* v___x_115_; lean_object* v_nil_116_; 
v_type_114_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__6, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__6_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__6);
v___x_115_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__11, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__11_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__11);
v_nil_116_ = l_Lean_Expr_app___override(v___x_115_, v_type_114_);
return v_nil_116_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__15(void){
_start:
{
lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; 
v___x_121_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__10));
v___x_122_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__14));
v___x_123_ = l_Lean_mkConst(v___x_122_, v___x_121_);
return v___x_123_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__16(void){
_start:
{
lean_object* v_type_124_; lean_object* v___x_125_; lean_object* v_cons_126_; 
v_type_124_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__6, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__6_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__6);
v___x_125_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__15, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__15_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__15);
v_cons_126_ = l_Lean_Expr_app___override(v___x_125_, v_type_124_);
return v_cons_126_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17(void){
_start:
{
lean_object* v___x_127_; lean_object* v___x_128_; 
v___x_127_ = lean_unsigned_to_nat(0u);
v___x_128_ = lean_nat_to_int(v___x_127_);
return v___x_128_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__21(void){
_start:
{
lean_object* v___x_134_; lean_object* v___x_135_; 
v___x_134_ = lean_unsigned_to_nat(0u);
v___x_135_ = l_Lean_Level_ofNat(v___x_134_);
return v___x_135_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__22(void){
_start:
{
lean_object* v___x_136_; lean_object* v___x_137_; lean_object* v___x_138_; 
v___x_136_ = lean_box(0);
v___x_137_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__21, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__21_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__21);
v___x_138_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_138_, 0, v___x_137_);
lean_ctor_set(v___x_138_, 1, v___x_136_);
return v___x_138_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__23(void){
_start:
{
lean_object* v___x_139_; lean_object* v___x_140_; lean_object* v___x_141_; 
v___x_139_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__22, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__22_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__22);
v___x_140_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__20));
v___x_141_ = l_Lean_Expr_const___override(v___x_140_, v___x_139_);
return v___x_141_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__26(void){
_start:
{
lean_object* v___x_146_; lean_object* v___x_147_; lean_object* v___x_148_; 
v___x_146_ = lean_box(0);
v___x_147_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__25));
v___x_148_ = l_Lean_Expr_const___override(v___x_147_, v___x_146_);
return v___x_148_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0(lean_object* v___x_149_, lean_object* v_lc_150_){
_start:
{
lean_object* v_const_151_; lean_object* v_coeffs_152_; lean_object* v___x_153_; lean_object* v___y_155_; lean_object* v___x_161_; uint8_t v___x_162_; 
v_const_151_ = lean_ctor_get(v_lc_150_, 0);
lean_inc(v_const_151_);
v_coeffs_152_ = lean_ctor_get(v_lc_150_, 1);
lean_inc(v_coeffs_152_);
lean_dec_ref(v_lc_150_);
v___x_153_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__3, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__3_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__3);
v___x_161_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17);
v___x_162_ = lean_int_dec_le(v___x_161_, v_const_151_);
if (v___x_162_ == 0)
{
lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v___x_169_; 
v___x_163_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__23, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__23_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__23);
v___x_164_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__6, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__6_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__6);
v___x_165_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__26, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__26_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__26);
v___x_166_ = lean_int_neg(v_const_151_);
lean_dec(v_const_151_);
v___x_167_ = l_Int_toNat(v___x_166_);
lean_dec(v___x_166_);
v___x_168_ = l_Lean_instToExprInt_mkNat(v___x_167_);
v___x_169_ = l_Lean_mkApp3(v___x_163_, v___x_164_, v___x_165_, v___x_168_);
v___y_155_ = v___x_169_;
goto v___jp_154_;
}
else
{
lean_object* v___x_170_; lean_object* v___x_171_; 
v___x_170_ = l_Int_toNat(v_const_151_);
lean_dec(v_const_151_);
v___x_171_ = l_Lean_instToExprInt_mkNat(v___x_170_);
v___y_155_ = v___x_171_;
goto v___jp_154_;
}
v___jp_154_:
{
lean_object* v_nil_156_; lean_object* v___x_157_; lean_object* v_cons_158_; lean_object* v___x_159_; lean_object* v___x_160_; 
v_nil_156_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__12, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__12_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__12);
v___x_157_ = l_Lean_Expr_app___override(v___x_153_, v___y_155_);
v_cons_158_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__16, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__16_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__16);
v___x_159_ = l___private_Lean_ToExpr_0__Lean_List_toExprAux(lean_box(0), v___x_149_, v_nil_156_, v_cons_158_, v_coeffs_152_);
v___x_160_ = l_Lean_Expr_app___override(v___x_157_, v___x_159_);
return v___x_160_;
}
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___closed__0(void){
_start:
{
lean_object* v___x_172_; lean_object* v___f_173_; 
v___x_172_ = l_Lean_instToExprInt;
v___f_173_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0), 2, 1);
lean_closure_set(v___f_173_, 0, v___x_172_);
return v___f_173_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___closed__2(void){
_start:
{
lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_180_; 
v___x_178_ = lean_box(0);
v___x_179_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___closed__1));
v___x_180_ = l_Lean_Expr_const___override(v___x_179_, v___x_178_);
return v___x_180_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___closed__3(void){
_start:
{
lean_object* v___x_181_; lean_object* v___f_182_; lean_object* v___x_183_; 
v___x_181_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___closed__2, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___closed__2_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___closed__2);
v___f_182_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___closed__0, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___closed__0_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___closed__0);
v___x_183_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_183_, 0, v___f_182_);
lean_ctor_set(v___x_183_, 1, v___x_181_);
return v___x_183_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo(void){
_start:
{
lean_object* v___x_184_; 
v___x_184_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___closed__3, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___closed__3_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___closed__3);
return v___x_184_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__2(void){
_start:
{
lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v___x_193_; 
v___x_191_ = lean_box(0);
v___x_192_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__1));
v___x_193_ = l_Lean_Expr_const___override(v___x_192_, v___x_191_);
return v___x_193_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__6(void){
_start:
{
lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; 
v___x_199_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__10));
v___x_200_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__5));
v___x_201_ = l_Lean_mkConst(v___x_200_, v___x_199_);
return v___x_201_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__7(void){
_start:
{
lean_object* v_type_202_; lean_object* v___x_203_; lean_object* v___x_204_; 
v_type_202_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__6, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__6_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__6);
v___x_203_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__6, &l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__6_once, _init_l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__6);
v___x_204_ = l_Lean_Expr_app___override(v___x_203_, v_type_202_);
return v___x_204_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__10(void){
_start:
{
lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; 
v___x_209_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__10));
v___x_210_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__9));
v___x_211_ = l_Lean_mkConst(v___x_210_, v___x_209_);
return v___x_211_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0(lean_object* v_s_212_){
_start:
{
lean_object* v_lowerBound_213_; lean_object* v_upperBound_214_; lean_object* v___x_215_; lean_object* v_type_216_; lean_object* v___y_218_; lean_object* v___y_219_; lean_object* v___y_220_; lean_object* v___y_224_; 
v_lowerBound_213_ = lean_ctor_get(v_s_212_, 0);
v_upperBound_214_ = lean_ctor_get(v_s_212_, 1);
v___x_215_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__2, &l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__2_once, _init_l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__2);
v_type_216_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__6, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__6_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__6);
if (lean_obj_tag(v_lowerBound_213_) == 0)
{
lean_object* v___x_240_; 
v___x_240_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__7, &l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__7_once, _init_l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__7);
v___y_224_ = v___x_240_;
goto v___jp_223_;
}
else
{
lean_object* v_val_241_; lean_object* v___x_242_; lean_object* v___y_244_; lean_object* v___x_246_; uint8_t v___x_247_; 
v_val_241_ = lean_ctor_get(v_lowerBound_213_, 0);
v___x_242_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__10, &l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__10_once, _init_l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__10);
v___x_246_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17);
v___x_247_ = lean_int_dec_le(v___x_246_, v_val_241_);
if (v___x_247_ == 0)
{
lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; 
v___x_248_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__23, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__23_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__23);
v___x_249_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__26, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__26_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__26);
v___x_250_ = lean_int_neg(v_val_241_);
v___x_251_ = l_Int_toNat(v___x_250_);
lean_dec(v___x_250_);
v___x_252_ = l_Lean_instToExprInt_mkNat(v___x_251_);
v___x_253_ = l_Lean_mkApp3(v___x_248_, v_type_216_, v___x_249_, v___x_252_);
v___y_244_ = v___x_253_;
goto v___jp_243_;
}
else
{
lean_object* v___x_254_; lean_object* v___x_255_; 
v___x_254_ = l_Int_toNat(v_val_241_);
v___x_255_ = l_Lean_instToExprInt_mkNat(v___x_254_);
v___y_244_ = v___x_255_;
goto v___jp_243_;
}
v___jp_243_:
{
lean_object* v___x_245_; 
v___x_245_ = l_Lean_mkAppB(v___x_242_, v_type_216_, v___y_244_);
v___y_224_ = v___x_245_;
goto v___jp_223_;
}
}
v___jp_217_:
{
lean_object* v___x_221_; lean_object* v___x_222_; 
lean_inc_ref(v___y_219_);
v___x_221_ = l_Lean_mkAppB(v___y_219_, v_type_216_, v___y_220_);
v___x_222_ = l_Lean_Expr_app___override(v___y_218_, v___x_221_);
return v___x_222_;
}
v___jp_223_:
{
lean_object* v___x_225_; 
v___x_225_ = l_Lean_Expr_app___override(v___x_215_, v___y_224_);
if (lean_obj_tag(v_upperBound_214_) == 0)
{
lean_object* v___x_226_; lean_object* v___x_227_; 
v___x_226_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__7, &l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__7_once, _init_l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__7);
v___x_227_ = l_Lean_Expr_app___override(v___x_225_, v___x_226_);
return v___x_227_;
}
else
{
lean_object* v_val_228_; lean_object* v___x_229_; lean_object* v___x_230_; uint8_t v___x_231_; 
v_val_228_ = lean_ctor_get(v_upperBound_214_, 0);
v___x_229_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__10, &l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__10_once, _init_l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__10);
v___x_230_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17);
v___x_231_ = lean_int_dec_le(v___x_230_, v_val_228_);
if (v___x_231_ == 0)
{
lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; 
v___x_232_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__23, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__23_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__23);
v___x_233_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__26, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__26_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__26);
v___x_234_ = lean_int_neg(v_val_228_);
v___x_235_ = l_Int_toNat(v___x_234_);
lean_dec(v___x_234_);
v___x_236_ = l_Lean_instToExprInt_mkNat(v___x_235_);
v___x_237_ = l_Lean_mkApp3(v___x_232_, v_type_216_, v___x_233_, v___x_236_);
v___y_218_ = v___x_225_;
v___y_219_ = v___x_229_;
v___y_220_ = v___x_237_;
goto v___jp_217_;
}
else
{
lean_object* v___x_238_; lean_object* v___x_239_; 
v___x_238_ = l_Int_toNat(v_val_228_);
v___x_239_ = l_Lean_instToExprInt_mkNat(v___x_238_);
v___y_218_ = v___x_225_;
v___y_219_ = v___x_229_;
v___y_220_ = v___x_239_;
goto v___jp_217_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___boxed(lean_object* v_s_256_){
_start:
{
lean_object* v_res_257_; 
v_res_257_ = l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0(v_s_256_);
lean_dec_ref(v_s_256_);
return v_res_257_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_instToExprConstraint___closed__2(void){
_start:
{
lean_object* v___x_263_; lean_object* v___x_264_; lean_object* v___x_265_; 
v___x_263_ = lean_box(0);
v___x_264_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_instToExprConstraint___closed__1));
v___x_265_ = l_Lean_Expr_const___override(v___x_264_, v___x_263_);
return v___x_265_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_instToExprConstraint___closed__3(void){
_start:
{
lean_object* v___x_266_; lean_object* v___f_267_; lean_object* v___x_268_; 
v___x_266_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprConstraint___closed__2, &l_Lean_Elab_Tactic_Omega_instToExprConstraint___closed__2_once, _init_l_Lean_Elab_Tactic_Omega_instToExprConstraint___closed__2);
v___f_267_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_instToExprConstraint___closed__0));
v___x_268_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_268_, 0, v___f_267_);
lean_ctor_set(v___x_268_, 1, v___x_266_);
return v___x_268_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_instToExprConstraint(void){
_start:
{
lean_object* v___x_269_; 
v___x_269_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprConstraint___closed__3, &l_Lean_Elab_Tactic_Omega_instToExprConstraint___closed__3_once, _init_l_Lean_Elab_Tactic_Omega_instToExprConstraint___closed__3);
return v___x_269_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_ctorIdx___redArg(lean_object* v_x_270_){
_start:
{
switch(lean_obj_tag(v_x_270_))
{
case 0:
{
lean_object* v___x_271_; 
v___x_271_ = lean_unsigned_to_nat(0u);
return v___x_271_;
}
case 1:
{
lean_object* v___x_272_; 
v___x_272_ = lean_unsigned_to_nat(1u);
return v___x_272_;
}
case 2:
{
lean_object* v___x_273_; 
v___x_273_ = lean_unsigned_to_nat(2u);
return v___x_273_;
}
case 3:
{
lean_object* v___x_274_; 
v___x_274_ = lean_unsigned_to_nat(3u);
return v___x_274_;
}
default: 
{
lean_object* v___x_275_; 
v___x_275_ = lean_unsigned_to_nat(4u);
return v___x_275_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_ctorIdx___redArg___boxed(lean_object* v_x_276_){
_start:
{
lean_object* v_res_277_; 
v_res_277_ = l_Lean_Elab_Tactic_Omega_Justification_ctorIdx___redArg(v_x_276_);
lean_dec_ref(v_x_276_);
return v_res_277_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_ctorIdx(lean_object* v_a_278_, lean_object* v_a_279_, lean_object* v_x_280_){
_start:
{
lean_object* v___x_281_; 
v___x_281_ = l_Lean_Elab_Tactic_Omega_Justification_ctorIdx___redArg(v_x_280_);
return v___x_281_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_ctorIdx___boxed(lean_object* v_a_282_, lean_object* v_a_283_, lean_object* v_x_284_){
_start:
{
lean_object* v_res_285_; 
v_res_285_ = l_Lean_Elab_Tactic_Omega_Justification_ctorIdx(v_a_282_, v_a_283_, v_x_284_);
lean_dec_ref(v_x_284_);
lean_dec(v_a_283_);
lean_dec_ref(v_a_282_);
return v_res_285_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_ctorElim___redArg(lean_object* v_t_286_, lean_object* v_k_287_){
_start:
{
switch(lean_obj_tag(v_t_286_))
{
case 0:
{
lean_object* v_s_288_; lean_object* v_x_289_; lean_object* v_i_290_; lean_object* v___x_291_; 
v_s_288_ = lean_ctor_get(v_t_286_, 0);
lean_inc_ref(v_s_288_);
v_x_289_ = lean_ctor_get(v_t_286_, 1);
lean_inc(v_x_289_);
v_i_290_ = lean_ctor_get(v_t_286_, 2);
lean_inc(v_i_290_);
lean_dec_ref_known(v_t_286_, 3);
v___x_291_ = lean_apply_3(v_k_287_, v_s_288_, v_x_289_, v_i_290_);
return v___x_291_;
}
case 1:
{
lean_object* v_s_292_; lean_object* v_c_293_; lean_object* v_j_294_; lean_object* v___x_295_; 
v_s_292_ = lean_ctor_get(v_t_286_, 0);
lean_inc_ref(v_s_292_);
v_c_293_ = lean_ctor_get(v_t_286_, 1);
lean_inc(v_c_293_);
v_j_294_ = lean_ctor_get(v_t_286_, 2);
lean_inc_ref(v_j_294_);
lean_dec_ref_known(v_t_286_, 3);
v___x_295_ = lean_apply_3(v_k_287_, v_s_292_, v_c_293_, v_j_294_);
return v___x_295_;
}
case 2:
{
lean_object* v_s_296_; lean_object* v_t_297_; lean_object* v_c_298_; lean_object* v_j_299_; lean_object* v_k_300_; lean_object* v___x_301_; 
v_s_296_ = lean_ctor_get(v_t_286_, 0);
lean_inc_ref(v_s_296_);
v_t_297_ = lean_ctor_get(v_t_286_, 1);
lean_inc_ref(v_t_297_);
v_c_298_ = lean_ctor_get(v_t_286_, 2);
lean_inc(v_c_298_);
v_j_299_ = lean_ctor_get(v_t_286_, 3);
lean_inc_ref(v_j_299_);
v_k_300_ = lean_ctor_get(v_t_286_, 4);
lean_inc_ref(v_k_300_);
lean_dec_ref_known(v_t_286_, 5);
v___x_301_ = lean_apply_5(v_k_287_, v_s_296_, v_t_297_, v_c_298_, v_j_299_, v_k_300_);
return v___x_301_;
}
case 3:
{
lean_object* v_s_302_; lean_object* v_t_303_; lean_object* v_x_304_; lean_object* v_y_305_; lean_object* v_a_306_; lean_object* v_j_307_; lean_object* v_b_308_; lean_object* v_k_309_; lean_object* v___x_310_; 
v_s_302_ = lean_ctor_get(v_t_286_, 0);
lean_inc_ref(v_s_302_);
v_t_303_ = lean_ctor_get(v_t_286_, 1);
lean_inc_ref(v_t_303_);
v_x_304_ = lean_ctor_get(v_t_286_, 2);
lean_inc(v_x_304_);
v_y_305_ = lean_ctor_get(v_t_286_, 3);
lean_inc(v_y_305_);
v_a_306_ = lean_ctor_get(v_t_286_, 4);
lean_inc(v_a_306_);
v_j_307_ = lean_ctor_get(v_t_286_, 5);
lean_inc_ref(v_j_307_);
v_b_308_ = lean_ctor_get(v_t_286_, 6);
lean_inc(v_b_308_);
v_k_309_ = lean_ctor_get(v_t_286_, 7);
lean_inc_ref(v_k_309_);
lean_dec_ref_known(v_t_286_, 8);
v___x_310_ = lean_apply_8(v_k_287_, v_s_302_, v_t_303_, v_x_304_, v_y_305_, v_a_306_, v_j_307_, v_b_308_, v_k_309_);
return v___x_310_;
}
default: 
{
lean_object* v_m_311_; lean_object* v_r_312_; lean_object* v_i_313_; lean_object* v_x_314_; lean_object* v_j_315_; lean_object* v___x_316_; 
v_m_311_ = lean_ctor_get(v_t_286_, 0);
lean_inc(v_m_311_);
v_r_312_ = lean_ctor_get(v_t_286_, 1);
lean_inc(v_r_312_);
v_i_313_ = lean_ctor_get(v_t_286_, 2);
lean_inc(v_i_313_);
v_x_314_ = lean_ctor_get(v_t_286_, 3);
lean_inc(v_x_314_);
v_j_315_ = lean_ctor_get(v_t_286_, 4);
lean_inc_ref(v_j_315_);
lean_dec_ref_known(v_t_286_, 5);
v___x_316_ = lean_apply_5(v_k_287_, v_m_311_, v_r_312_, v_i_313_, v_x_314_, v_j_315_);
return v___x_316_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_ctorElim(lean_object* v_motive_317_, lean_object* v_ctorIdx_318_, lean_object* v_a_319_, lean_object* v_a_320_, lean_object* v_t_321_, lean_object* v_h_322_, lean_object* v_k_323_){
_start:
{
lean_object* v___x_324_; 
v___x_324_ = l_Lean_Elab_Tactic_Omega_Justification_ctorElim___redArg(v_t_321_, v_k_323_);
return v___x_324_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_ctorElim___boxed(lean_object* v_motive_325_, lean_object* v_ctorIdx_326_, lean_object* v_a_327_, lean_object* v_a_328_, lean_object* v_t_329_, lean_object* v_h_330_, lean_object* v_k_331_){
_start:
{
lean_object* v_res_332_; 
v_res_332_ = l_Lean_Elab_Tactic_Omega_Justification_ctorElim(v_motive_325_, v_ctorIdx_326_, v_a_327_, v_a_328_, v_t_329_, v_h_330_, v_k_331_);
lean_dec(v_a_328_);
lean_dec_ref(v_a_327_);
lean_dec(v_ctorIdx_326_);
return v_res_332_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_assumption_elim___redArg(lean_object* v_t_333_, lean_object* v_assumption_334_){
_start:
{
lean_object* v___x_335_; 
v___x_335_ = l_Lean_Elab_Tactic_Omega_Justification_ctorElim___redArg(v_t_333_, v_assumption_334_);
return v___x_335_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_assumption_elim(lean_object* v_motive_336_, lean_object* v_a_337_, lean_object* v_a_338_, lean_object* v_t_339_, lean_object* v_h_340_, lean_object* v_assumption_341_){
_start:
{
lean_object* v___x_342_; 
v___x_342_ = l_Lean_Elab_Tactic_Omega_Justification_ctorElim___redArg(v_t_339_, v_assumption_341_);
return v___x_342_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_assumption_elim___boxed(lean_object* v_motive_343_, lean_object* v_a_344_, lean_object* v_a_345_, lean_object* v_t_346_, lean_object* v_h_347_, lean_object* v_assumption_348_){
_start:
{
lean_object* v_res_349_; 
v_res_349_ = l_Lean_Elab_Tactic_Omega_Justification_assumption_elim(v_motive_343_, v_a_344_, v_a_345_, v_t_346_, v_h_347_, v_assumption_348_);
lean_dec(v_a_345_);
lean_dec_ref(v_a_344_);
return v_res_349_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_tidy_elim___redArg(lean_object* v_t_350_, lean_object* v_tidy_351_){
_start:
{
lean_object* v___x_352_; 
v___x_352_ = l_Lean_Elab_Tactic_Omega_Justification_ctorElim___redArg(v_t_350_, v_tidy_351_);
return v___x_352_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_tidy_elim(lean_object* v_motive_353_, lean_object* v_a_354_, lean_object* v_a_355_, lean_object* v_t_356_, lean_object* v_h_357_, lean_object* v_tidy_358_){
_start:
{
lean_object* v___x_359_; 
v___x_359_ = l_Lean_Elab_Tactic_Omega_Justification_ctorElim___redArg(v_t_356_, v_tidy_358_);
return v___x_359_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_tidy_elim___boxed(lean_object* v_motive_360_, lean_object* v_a_361_, lean_object* v_a_362_, lean_object* v_t_363_, lean_object* v_h_364_, lean_object* v_tidy_365_){
_start:
{
lean_object* v_res_366_; 
v_res_366_ = l_Lean_Elab_Tactic_Omega_Justification_tidy_elim(v_motive_360_, v_a_361_, v_a_362_, v_t_363_, v_h_364_, v_tidy_365_);
lean_dec(v_a_362_);
lean_dec_ref(v_a_361_);
return v_res_366_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_combine_elim___redArg(lean_object* v_t_367_, lean_object* v_combine_368_){
_start:
{
lean_object* v___x_369_; 
v___x_369_ = l_Lean_Elab_Tactic_Omega_Justification_ctorElim___redArg(v_t_367_, v_combine_368_);
return v___x_369_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_combine_elim(lean_object* v_motive_370_, lean_object* v_a_371_, lean_object* v_a_372_, lean_object* v_t_373_, lean_object* v_h_374_, lean_object* v_combine_375_){
_start:
{
lean_object* v___x_376_; 
v___x_376_ = l_Lean_Elab_Tactic_Omega_Justification_ctorElim___redArg(v_t_373_, v_combine_375_);
return v___x_376_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_combine_elim___boxed(lean_object* v_motive_377_, lean_object* v_a_378_, lean_object* v_a_379_, lean_object* v_t_380_, lean_object* v_h_381_, lean_object* v_combine_382_){
_start:
{
lean_object* v_res_383_; 
v_res_383_ = l_Lean_Elab_Tactic_Omega_Justification_combine_elim(v_motive_377_, v_a_378_, v_a_379_, v_t_380_, v_h_381_, v_combine_382_);
lean_dec(v_a_379_);
lean_dec_ref(v_a_378_);
return v_res_383_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_combo_elim___redArg(lean_object* v_t_384_, lean_object* v_combo_385_){
_start:
{
lean_object* v___x_386_; 
v___x_386_ = l_Lean_Elab_Tactic_Omega_Justification_ctorElim___redArg(v_t_384_, v_combo_385_);
return v___x_386_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_combo_elim(lean_object* v_motive_387_, lean_object* v_a_388_, lean_object* v_a_389_, lean_object* v_t_390_, lean_object* v_h_391_, lean_object* v_combo_392_){
_start:
{
lean_object* v___x_393_; 
v___x_393_ = l_Lean_Elab_Tactic_Omega_Justification_ctorElim___redArg(v_t_390_, v_combo_392_);
return v___x_393_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_combo_elim___boxed(lean_object* v_motive_394_, lean_object* v_a_395_, lean_object* v_a_396_, lean_object* v_t_397_, lean_object* v_h_398_, lean_object* v_combo_399_){
_start:
{
lean_object* v_res_400_; 
v_res_400_ = l_Lean_Elab_Tactic_Omega_Justification_combo_elim(v_motive_394_, v_a_395_, v_a_396_, v_t_397_, v_h_398_, v_combo_399_);
lean_dec(v_a_396_);
lean_dec_ref(v_a_395_);
return v_res_400_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_bmod_elim___redArg(lean_object* v_t_401_, lean_object* v_bmod_402_){
_start:
{
lean_object* v___x_403_; 
v___x_403_ = l_Lean_Elab_Tactic_Omega_Justification_ctorElim___redArg(v_t_401_, v_bmod_402_);
return v___x_403_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_bmod_elim(lean_object* v_motive_404_, lean_object* v_a_405_, lean_object* v_a_406_, lean_object* v_t_407_, lean_object* v_h_408_, lean_object* v_bmod_409_){
_start:
{
lean_object* v___x_410_; 
v___x_410_ = l_Lean_Elab_Tactic_Omega_Justification_ctorElim___redArg(v_t_407_, v_bmod_409_);
return v___x_410_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_bmod_elim___boxed(lean_object* v_motive_411_, lean_object* v_a_412_, lean_object* v_a_413_, lean_object* v_t_414_, lean_object* v_h_415_, lean_object* v_bmod_416_){
_start:
{
lean_object* v_res_417_; 
v_res_417_ = l_Lean_Elab_Tactic_Omega_Justification_bmod_elim(v_motive_411_, v_a_412_, v_a_413_, v_t_414_, v_h_415_, v_bmod_416_);
lean_dec(v_a_413_);
lean_dec_ref(v_a_412_);
return v_res_417_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_tidy_x3f(lean_object* v_s_418_, lean_object* v_c_419_, lean_object* v_j_420_){
_start:
{
lean_object* v___x_421_; lean_object* v___x_422_; 
lean_inc(v_c_419_);
lean_inc_ref(v_s_418_);
v___x_421_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_421_, 0, v_s_418_);
lean_ctor_set(v___x_421_, 1, v_c_419_);
lean_inc_ref(v___x_421_);
v___x_422_ = l_Lean_Omega_tidy_x3f(v___x_421_);
if (lean_obj_tag(v___x_422_) == 0)
{
lean_object* v___x_423_; 
lean_dec_ref_known(v___x_421_, 2);
lean_dec_ref(v_j_420_);
lean_dec(v_c_419_);
lean_dec_ref(v_s_418_);
v___x_423_ = lean_box(0);
return v___x_423_;
}
else
{
lean_object* v___x_425_; uint8_t v_isShared_426_; uint8_t v_isSharedCheck_442_; 
v_isSharedCheck_442_ = !lean_is_exclusive(v___x_422_);
if (v_isSharedCheck_442_ == 0)
{
lean_object* v_unused_443_; 
v_unused_443_ = lean_ctor_get(v___x_422_, 0);
lean_dec(v_unused_443_);
v___x_425_ = v___x_422_;
v_isShared_426_ = v_isSharedCheck_442_;
goto v_resetjp_424_;
}
else
{
lean_dec(v___x_422_);
v___x_425_ = lean_box(0);
v_isShared_426_ = v_isSharedCheck_442_;
goto v_resetjp_424_;
}
v_resetjp_424_:
{
lean_object* v___x_427_; lean_object* v_fst_428_; lean_object* v_snd_429_; lean_object* v___x_431_; uint8_t v_isShared_432_; uint8_t v_isSharedCheck_441_; 
v___x_427_ = l_Lean_Omega_tidy(v___x_421_);
v_fst_428_ = lean_ctor_get(v___x_427_, 0);
v_snd_429_ = lean_ctor_get(v___x_427_, 1);
v_isSharedCheck_441_ = !lean_is_exclusive(v___x_427_);
if (v_isSharedCheck_441_ == 0)
{
v___x_431_ = v___x_427_;
v_isShared_432_ = v_isSharedCheck_441_;
goto v_resetjp_430_;
}
else
{
lean_inc(v_snd_429_);
lean_inc(v_fst_428_);
lean_dec(v___x_427_);
v___x_431_ = lean_box(0);
v_isShared_432_ = v_isSharedCheck_441_;
goto v_resetjp_430_;
}
v_resetjp_430_:
{
lean_object* v___x_433_; lean_object* v___x_435_; 
v___x_433_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_433_, 0, v_s_418_);
lean_ctor_set(v___x_433_, 1, v_c_419_);
lean_ctor_set(v___x_433_, 2, v_j_420_);
if (v_isShared_432_ == 0)
{
lean_ctor_set(v___x_431_, 1, v___x_433_);
lean_ctor_set(v___x_431_, 0, v_snd_429_);
v___x_435_ = v___x_431_;
goto v_reusejp_434_;
}
else
{
lean_object* v_reuseFailAlloc_440_; 
v_reuseFailAlloc_440_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_440_, 0, v_snd_429_);
lean_ctor_set(v_reuseFailAlloc_440_, 1, v___x_433_);
v___x_435_ = v_reuseFailAlloc_440_;
goto v_reusejp_434_;
}
v_reusejp_434_:
{
lean_object* v___x_436_; lean_object* v___x_438_; 
v___x_436_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_436_, 0, v_fst_428_);
lean_ctor_set(v___x_436_, 1, v___x_435_);
if (v_isShared_426_ == 0)
{
lean_ctor_set(v___x_425_, 0, v___x_436_);
v___x_438_ = v___x_425_;
goto v_reusejp_437_;
}
else
{
lean_object* v_reuseFailAlloc_439_; 
v_reuseFailAlloc_439_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_439_, 0, v___x_436_);
v___x_438_ = v_reuseFailAlloc_439_;
goto v_reusejp_437_;
}
v_reusejp_437_:
{
return v___x_438_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0_spec__0___redArg(lean_object* v_s_444_, lean_object* v_replacement_445_, lean_object* v_a_446_, lean_object* v_b_447_){
_start:
{
lean_object* v_it_449_; lean_object* v_startPos_450_; lean_object* v_endPos_451_; lean_object* v_it_460_; 
switch(lean_obj_tag(v_a_446_))
{
case 0:
{
lean_object* v_pos_466_; lean_object* v___x_468_; uint8_t v_isShared_469_; uint8_t v_isSharedCheck_478_; 
v_pos_466_ = lean_ctor_get(v_a_446_, 0);
v_isSharedCheck_478_ = !lean_is_exclusive(v_a_446_);
if (v_isSharedCheck_478_ == 0)
{
v___x_468_ = v_a_446_;
v_isShared_469_ = v_isSharedCheck_478_;
goto v_resetjp_467_;
}
else
{
lean_inc(v_pos_466_);
lean_dec(v_a_446_);
v___x_468_ = lean_box(0);
v_isShared_469_ = v_isSharedCheck_478_;
goto v_resetjp_467_;
}
v_resetjp_467_:
{
lean_object* v_startInclusive_470_; lean_object* v_endExclusive_471_; lean_object* v___x_472_; uint8_t v_decide_473_; 
v_startInclusive_470_ = lean_ctor_get(v_s_444_, 1);
v_endExclusive_471_ = lean_ctor_get(v_s_444_, 2);
v___x_472_ = lean_nat_sub(v_endExclusive_471_, v_startInclusive_470_);
v_decide_473_ = lean_nat_dec_eq(v_pos_466_, v___x_472_);
lean_dec(v___x_472_);
if (v_decide_473_ == 0)
{
lean_object* v___x_475_; 
if (v_isShared_469_ == 0)
{
lean_ctor_set_tag(v___x_468_, 1);
v___x_475_ = v___x_468_;
goto v_reusejp_474_;
}
else
{
lean_object* v_reuseFailAlloc_476_; 
v_reuseFailAlloc_476_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_476_, 0, v_pos_466_);
v___x_475_ = v_reuseFailAlloc_476_;
goto v_reusejp_474_;
}
v_reusejp_474_:
{
v_it_460_ = v___x_475_;
goto v___jp_459_;
}
}
else
{
lean_object* v___x_477_; 
lean_del_object(v___x_468_);
lean_dec(v_pos_466_);
v___x_477_ = lean_box(3);
v_it_460_ = v___x_477_;
goto v___jp_459_;
}
}
}
case 1:
{
lean_object* v_pos_479_; lean_object* v___x_481_; uint8_t v_isShared_482_; uint8_t v_isSharedCheck_491_; 
v_pos_479_ = lean_ctor_get(v_a_446_, 0);
v_isSharedCheck_491_ = !lean_is_exclusive(v_a_446_);
if (v_isSharedCheck_491_ == 0)
{
v___x_481_ = v_a_446_;
v_isShared_482_ = v_isSharedCheck_491_;
goto v_resetjp_480_;
}
else
{
lean_inc(v_pos_479_);
lean_dec(v_a_446_);
v___x_481_ = lean_box(0);
v_isShared_482_ = v_isSharedCheck_491_;
goto v_resetjp_480_;
}
v_resetjp_480_:
{
lean_object* v_str_483_; lean_object* v_startInclusive_484_; lean_object* v___x_485_; lean_object* v___x_486_; lean_object* v___x_487_; lean_object* v___x_489_; 
v_str_483_ = lean_ctor_get(v_s_444_, 0);
v_startInclusive_484_ = lean_ctor_get(v_s_444_, 1);
v___x_485_ = lean_nat_add(v_startInclusive_484_, v_pos_479_);
v___x_486_ = lean_string_utf8_next_fast(v_str_483_, v___x_485_);
lean_dec(v___x_485_);
v___x_487_ = lean_nat_sub(v___x_486_, v_startInclusive_484_);
lean_inc(v___x_487_);
if (v_isShared_482_ == 0)
{
lean_ctor_set_tag(v___x_481_, 0);
lean_ctor_set(v___x_481_, 0, v___x_487_);
v___x_489_ = v___x_481_;
goto v_reusejp_488_;
}
else
{
lean_object* v_reuseFailAlloc_490_; 
v_reuseFailAlloc_490_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_490_, 0, v___x_487_);
v___x_489_ = v_reuseFailAlloc_490_;
goto v_reusejp_488_;
}
v_reusejp_488_:
{
v_it_449_ = v___x_489_;
v_startPos_450_ = v_pos_479_;
v_endPos_451_ = v___x_487_;
goto v___jp_448_;
}
}
}
case 2:
{
lean_object* v_needle_492_; lean_object* v_table_493_; lean_object* v_stackPos_494_; lean_object* v_needlePos_495_; lean_object* v___x_497_; uint8_t v_isShared_498_; uint8_t v_isSharedCheck_556_; 
v_needle_492_ = lean_ctor_get(v_a_446_, 0);
v_table_493_ = lean_ctor_get(v_a_446_, 1);
v_stackPos_494_ = lean_ctor_get(v_a_446_, 2);
v_needlePos_495_ = lean_ctor_get(v_a_446_, 3);
v_isSharedCheck_556_ = !lean_is_exclusive(v_a_446_);
if (v_isSharedCheck_556_ == 0)
{
v___x_497_ = v_a_446_;
v_isShared_498_ = v_isSharedCheck_556_;
goto v_resetjp_496_;
}
else
{
lean_inc(v_needlePos_495_);
lean_inc(v_stackPos_494_);
lean_inc(v_table_493_);
lean_inc(v_needle_492_);
lean_dec(v_a_446_);
v___x_497_ = lean_box(0);
v_isShared_498_ = v_isSharedCheck_556_;
goto v_resetjp_496_;
}
v_resetjp_496_:
{
lean_object* v_str_499_; lean_object* v_startInclusive_500_; lean_object* v_endExclusive_501_; lean_object* v_str_502_; lean_object* v_startInclusive_503_; lean_object* v_endExclusive_504_; lean_object* v_basePos_505_; lean_object* v___x_506_; lean_object* v___x_507_; lean_object* v___x_508_; uint8_t v___x_509_; 
v_str_499_ = lean_ctor_get(v_needle_492_, 0);
v_startInclusive_500_ = lean_ctor_get(v_needle_492_, 1);
v_endExclusive_501_ = lean_ctor_get(v_needle_492_, 2);
v_str_502_ = lean_ctor_get(v_s_444_, 0);
v_startInclusive_503_ = lean_ctor_get(v_s_444_, 1);
v_endExclusive_504_ = lean_ctor_get(v_s_444_, 2);
v_basePos_505_ = lean_nat_sub(v_stackPos_494_, v_needlePos_495_);
v___x_506_ = lean_nat_sub(v_endExclusive_501_, v_startInclusive_500_);
v___x_507_ = lean_nat_add(v_basePos_505_, v___x_506_);
v___x_508_ = lean_nat_sub(v_endExclusive_504_, v_startInclusive_503_);
v___x_509_ = lean_nat_dec_le(v___x_507_, v___x_508_);
lean_dec(v___x_507_);
if (v___x_509_ == 0)
{
lean_object* v___x_510_; lean_object* v___x_511_; uint8_t v___x_512_; 
lean_dec(v___x_506_);
lean_del_object(v___x_497_);
lean_dec(v_needlePos_495_);
lean_dec(v_stackPos_494_);
lean_dec_ref(v_table_493_);
lean_dec_ref(v_needle_492_);
v___x_510_ = lean_unsigned_to_nat(1u);
v___x_511_ = lean_nat_add(v_basePos_505_, v___x_510_);
v___x_512_ = lean_nat_dec_le(v___x_511_, v___x_508_);
lean_dec(v___x_511_);
if (v___x_512_ == 0)
{
lean_dec(v___x_508_);
lean_dec(v_basePos_505_);
lean_dec_ref(v_s_444_);
return v_b_447_;
}
else
{
lean_object* v___x_513_; lean_object* v___x_514_; 
v___x_513_ = l_String_Slice_pos_x21(v_s_444_, v_basePos_505_);
lean_dec(v_basePos_505_);
v___x_514_ = lean_box(3);
v_it_449_ = v___x_514_;
v_startPos_450_ = v___x_513_;
v_endPos_451_ = v___x_508_;
goto v___jp_448_;
}
}
else
{
lean_object* v___x_515_; uint8_t v_stackByte_516_; lean_object* v___x_517_; uint8_t v_patByte_518_; uint8_t v___x_519_; 
lean_dec(v___x_508_);
v___x_515_ = lean_nat_add(v_startInclusive_503_, v_stackPos_494_);
v_stackByte_516_ = lean_string_get_byte_fast(v_str_502_, v___x_515_);
v___x_517_ = lean_nat_add(v_startInclusive_500_, v_needlePos_495_);
v_patByte_518_ = lean_string_get_byte_fast(v_str_499_, v___x_517_);
v___x_519_ = lean_uint8_dec_eq(v_stackByte_516_, v_patByte_518_);
if (v___x_519_ == 0)
{
lean_object* v___x_520_; uint8_t v_decide_521_; 
lean_dec(v___x_506_);
v___x_520_ = lean_unsigned_to_nat(0u);
v_decide_521_ = lean_nat_dec_eq(v_needlePos_495_, v___x_520_);
if (v_decide_521_ == 0)
{
lean_object* v___x_522_; lean_object* v___x_523_; lean_object* v_newNeedlePos_524_; uint8_t v___x_525_; 
v___x_522_ = lean_unsigned_to_nat(1u);
v___x_523_ = lean_nat_sub(v_needlePos_495_, v___x_522_);
lean_dec(v_needlePos_495_);
v_newNeedlePos_524_ = lean_array_fget_borrowed(v_table_493_, v___x_523_);
lean_dec(v___x_523_);
v___x_525_ = lean_nat_dec_eq(v_newNeedlePos_524_, v___x_520_);
if (v___x_525_ == 0)
{
lean_object* v_oldBasePos_526_; lean_object* v___x_527_; lean_object* v_newBasePos_528_; lean_object* v___x_530_; 
lean_inc(v_newNeedlePos_524_);
v_oldBasePos_526_ = l_String_Slice_pos_x21(v_s_444_, v_basePos_505_);
lean_dec(v_basePos_505_);
v___x_527_ = lean_nat_sub(v_stackPos_494_, v_newNeedlePos_524_);
v_newBasePos_528_ = l_String_Slice_pos_x21(v_s_444_, v___x_527_);
lean_dec(v___x_527_);
if (v_isShared_498_ == 0)
{
lean_ctor_set(v___x_497_, 3, v_newNeedlePos_524_);
v___x_530_ = v___x_497_;
goto v_reusejp_529_;
}
else
{
lean_object* v_reuseFailAlloc_531_; 
v_reuseFailAlloc_531_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v_reuseFailAlloc_531_, 0, v_needle_492_);
lean_ctor_set(v_reuseFailAlloc_531_, 1, v_table_493_);
lean_ctor_set(v_reuseFailAlloc_531_, 2, v_stackPos_494_);
lean_ctor_set(v_reuseFailAlloc_531_, 3, v_newNeedlePos_524_);
v___x_530_ = v_reuseFailAlloc_531_;
goto v_reusejp_529_;
}
v_reusejp_529_:
{
v_it_449_ = v___x_530_;
v_startPos_450_ = v_oldBasePos_526_;
v_endPos_451_ = v_newBasePos_528_;
goto v___jp_448_;
}
}
else
{
lean_object* v_basePos_532_; lean_object* v_nextStackPos_533_; lean_object* v___x_535_; 
v_basePos_532_ = l_String_Slice_pos_x21(v_s_444_, v_basePos_505_);
lean_dec(v_basePos_505_);
v_nextStackPos_533_ = l_String_Slice_posGE___redArg(v_s_444_, v_stackPos_494_);
lean_inc(v_nextStackPos_533_);
if (v_isShared_498_ == 0)
{
lean_ctor_set(v___x_497_, 3, v___x_520_);
lean_ctor_set(v___x_497_, 2, v_nextStackPos_533_);
v___x_535_ = v___x_497_;
goto v_reusejp_534_;
}
else
{
lean_object* v_reuseFailAlloc_536_; 
v_reuseFailAlloc_536_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v_reuseFailAlloc_536_, 0, v_needle_492_);
lean_ctor_set(v_reuseFailAlloc_536_, 1, v_table_493_);
lean_ctor_set(v_reuseFailAlloc_536_, 2, v_nextStackPos_533_);
lean_ctor_set(v_reuseFailAlloc_536_, 3, v___x_520_);
v___x_535_ = v_reuseFailAlloc_536_;
goto v_reusejp_534_;
}
v_reusejp_534_:
{
v_it_449_ = v___x_535_;
v_startPos_450_ = v_basePos_532_;
v_endPos_451_ = v_nextStackPos_533_;
goto v___jp_448_;
}
}
}
else
{
lean_object* v_basePos_537_; lean_object* v___x_538_; lean_object* v___x_539_; lean_object* v_nextStackPos_540_; lean_object* v___x_542_; 
lean_dec(v_basePos_505_);
lean_dec(v_needlePos_495_);
v_basePos_537_ = l_String_Slice_pos_x21(v_s_444_, v_stackPos_494_);
v___x_538_ = lean_unsigned_to_nat(1u);
v___x_539_ = lean_nat_add(v_stackPos_494_, v___x_538_);
lean_dec(v_stackPos_494_);
v_nextStackPos_540_ = l_String_Slice_posGE___redArg(v_s_444_, v___x_539_);
lean_inc(v_nextStackPos_540_);
if (v_isShared_498_ == 0)
{
lean_ctor_set(v___x_497_, 3, v___x_520_);
lean_ctor_set(v___x_497_, 2, v_nextStackPos_540_);
v___x_542_ = v___x_497_;
goto v_reusejp_541_;
}
else
{
lean_object* v_reuseFailAlloc_543_; 
v_reuseFailAlloc_543_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v_reuseFailAlloc_543_, 0, v_needle_492_);
lean_ctor_set(v_reuseFailAlloc_543_, 1, v_table_493_);
lean_ctor_set(v_reuseFailAlloc_543_, 2, v_nextStackPos_540_);
lean_ctor_set(v_reuseFailAlloc_543_, 3, v___x_520_);
v___x_542_ = v_reuseFailAlloc_543_;
goto v_reusejp_541_;
}
v_reusejp_541_:
{
v_it_449_ = v___x_542_;
v_startPos_450_ = v_basePos_537_;
v_endPos_451_ = v_nextStackPos_540_;
goto v___jp_448_;
}
}
}
else
{
lean_object* v___x_544_; lean_object* v_nextStackPos_545_; lean_object* v_nextNeedlePos_546_; uint8_t v_decide_547_; 
lean_dec(v_basePos_505_);
v___x_544_ = lean_unsigned_to_nat(1u);
v_nextStackPos_545_ = lean_nat_add(v_stackPos_494_, v___x_544_);
lean_dec(v_stackPos_494_);
v_nextNeedlePos_546_ = lean_nat_add(v_needlePos_495_, v___x_544_);
lean_dec(v_needlePos_495_);
v_decide_547_ = lean_nat_dec_eq(v_nextNeedlePos_546_, v___x_506_);
lean_dec(v___x_506_);
if (v_decide_547_ == 0)
{
lean_object* v___x_549_; 
if (v_isShared_498_ == 0)
{
lean_ctor_set(v___x_497_, 3, v_nextNeedlePos_546_);
lean_ctor_set(v___x_497_, 2, v_nextStackPos_545_);
v___x_549_ = v___x_497_;
goto v_reusejp_548_;
}
else
{
lean_object* v_reuseFailAlloc_551_; 
v_reuseFailAlloc_551_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v_reuseFailAlloc_551_, 0, v_needle_492_);
lean_ctor_set(v_reuseFailAlloc_551_, 1, v_table_493_);
lean_ctor_set(v_reuseFailAlloc_551_, 2, v_nextStackPos_545_);
lean_ctor_set(v_reuseFailAlloc_551_, 3, v_nextNeedlePos_546_);
v___x_549_ = v_reuseFailAlloc_551_;
goto v_reusejp_548_;
}
v_reusejp_548_:
{
v_a_446_ = v___x_549_;
goto _start;
}
}
else
{
lean_object* v___x_552_; lean_object* v___x_554_; 
lean_dec(v_nextNeedlePos_546_);
v___x_552_ = lean_unsigned_to_nat(0u);
if (v_isShared_498_ == 0)
{
lean_ctor_set(v___x_497_, 3, v___x_552_);
lean_ctor_set(v___x_497_, 2, v_nextStackPos_545_);
v___x_554_ = v___x_497_;
goto v_reusejp_553_;
}
else
{
lean_object* v_reuseFailAlloc_555_; 
v_reuseFailAlloc_555_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v_reuseFailAlloc_555_, 0, v_needle_492_);
lean_ctor_set(v_reuseFailAlloc_555_, 1, v_table_493_);
lean_ctor_set(v_reuseFailAlloc_555_, 2, v_nextStackPos_545_);
lean_ctor_set(v_reuseFailAlloc_555_, 3, v___x_552_);
v___x_554_ = v_reuseFailAlloc_555_;
goto v_reusejp_553_;
}
v_reusejp_553_:
{
v_it_460_ = v___x_554_;
goto v___jp_459_;
}
}
}
}
}
}
default: 
{
lean_dec_ref(v_s_444_);
return v_b_447_;
}
}
v___jp_448_:
{
lean_object* v___x_452_; lean_object* v_str_453_; lean_object* v_startInclusive_454_; lean_object* v_endExclusive_455_; lean_object* v___x_456_; lean_object* v___x_457_; 
lean_inc_ref(v_s_444_);
v___x_452_ = l_String_Slice_slice_x21(v_s_444_, v_startPos_450_, v_endPos_451_);
lean_dec(v_endPos_451_);
lean_dec(v_startPos_450_);
v_str_453_ = lean_ctor_get(v___x_452_, 0);
lean_inc_ref(v_str_453_);
v_startInclusive_454_ = lean_ctor_get(v___x_452_, 1);
lean_inc(v_startInclusive_454_);
v_endExclusive_455_ = lean_ctor_get(v___x_452_, 2);
lean_inc(v_endExclusive_455_);
lean_dec_ref(v___x_452_);
v___x_456_ = lean_string_utf8_extract_fast(v_str_453_, v_startInclusive_454_, v_endExclusive_455_);
lean_dec(v_endExclusive_455_);
lean_dec(v_startInclusive_454_);
lean_dec_ref(v_str_453_);
v___x_457_ = lean_string_append(v_b_447_, v___x_456_);
lean_dec_ref(v___x_456_);
v_a_446_ = v_it_449_;
v_b_447_ = v___x_457_;
goto _start;
}
v___jp_459_:
{
lean_object* v___x_461_; lean_object* v___x_462_; lean_object* v___x_463_; lean_object* v___x_464_; 
v___x_461_ = lean_unsigned_to_nat(0u);
v___x_462_ = lean_string_utf8_byte_size(v_replacement_445_);
v___x_463_ = lean_string_utf8_extract_fast(v_replacement_445_, v___x_461_, v___x_462_);
v___x_464_ = lean_string_append(v_b_447_, v___x_463_);
lean_dec_ref(v___x_463_);
v_a_446_ = v_it_460_;
v_b_447_ = v___x_464_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0_spec__0___redArg___boxed(lean_object* v_s_557_, lean_object* v_replacement_558_, lean_object* v_a_559_, lean_object* v_b_560_){
_start:
{
lean_object* v_res_561_; 
v_res_561_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0_spec__0___redArg(v_s_557_, v_replacement_558_, v_a_559_, v_b_560_);
lean_dec_ref(v_replacement_558_);
return v_res_561_;
}
}
static lean_object* _init_l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__2(void){
_start:
{
lean_object* v___x_564_; lean_object* v___x_565_; 
v___x_564_ = ((lean_object*)(l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__0));
v___x_565_ = lean_string_utf8_byte_size(v___x_564_);
return v___x_565_;
}
}
static uint8_t _init_l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__3(void){
_start:
{
lean_object* v___x_566_; lean_object* v___x_567_; uint8_t v___x_568_; 
v___x_566_ = lean_unsigned_to_nat(0u);
v___x_567_ = lean_obj_once(&l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__2, &l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__2_once, _init_l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__2);
v___x_568_ = lean_nat_dec_eq(v___x_567_, v___x_566_);
return v___x_568_;
}
}
static lean_object* _init_l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__4(void){
_start:
{
lean_object* v___x_569_; lean_object* v___x_570_; lean_object* v___x_571_; lean_object* v___x_572_; 
v___x_569_ = lean_obj_once(&l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__2, &l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__2_once, _init_l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__2);
v___x_570_ = lean_unsigned_to_nat(0u);
v___x_571_ = ((lean_object*)(l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__0));
v___x_572_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_572_, 0, v___x_571_);
lean_ctor_set(v___x_572_, 1, v___x_570_);
lean_ctor_set(v___x_572_, 2, v___x_569_);
return v___x_572_;
}
}
static lean_object* _init_l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__5(void){
_start:
{
lean_object* v___x_573_; lean_object* v___x_574_; 
v___x_573_ = lean_obj_once(&l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__4, &l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__4_once, _init_l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__4);
v___x_574_ = l_String_Slice_Pattern_ForwardSliceSearcher_buildTable(v___x_573_);
return v___x_574_;
}
}
static lean_object* _init_l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__6(void){
_start:
{
lean_object* v___x_575_; lean_object* v___x_576_; lean_object* v___x_577_; lean_object* v___x_578_; 
v___x_575_ = lean_unsigned_to_nat(0u);
v___x_576_ = lean_obj_once(&l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__5, &l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__5_once, _init_l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__5);
v___x_577_ = lean_obj_once(&l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__4, &l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__4_once, _init_l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__4);
v___x_578_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v___x_578_, 0, v___x_577_);
lean_ctor_set(v___x_578_, 1, v___x_576_);
lean_ctor_set(v___x_578_, 2, v___x_575_);
lean_ctor_set(v___x_578_, 3, v___x_575_);
return v___x_578_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg(lean_object* v_s_581_, lean_object* v_replacement_582_){
_start:
{
lean_object* v___x_583_; uint8_t v___x_584_; 
v___x_583_ = ((lean_object*)(l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__1));
v___x_584_ = lean_uint8_once(&l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__3, &l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__3_once, _init_l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__3);
if (v___x_584_ == 0)
{
lean_object* v___x_585_; lean_object* v___x_586_; 
v___x_585_ = lean_obj_once(&l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__6, &l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__6_once, _init_l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__6);
v___x_586_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0_spec__0___redArg(v_s_581_, v_replacement_582_, v___x_585_, v___x_583_);
return v___x_586_;
}
else
{
lean_object* v___x_587_; lean_object* v___x_588_; 
v___x_587_ = ((lean_object*)(l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__7));
v___x_588_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0_spec__0___redArg(v_s_581_, v_replacement_582_, v___x_587_, v___x_583_);
return v___x_588_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___boxed(lean_object* v_s_589_, lean_object* v_replacement_590_){
_start:
{
lean_object* v_res_591_; 
v_res_591_ = l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg(v_s_589_, v_replacement_590_);
lean_dec_ref(v_replacement_590_);
return v_res_591_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet(lean_object* v_s_594_){
_start:
{
lean_object* v___x_595_; lean_object* v___x_596_; lean_object* v___x_597_; lean_object* v___x_598_; lean_object* v___x_599_; lean_object* v___x_600_; lean_object* v___x_601_; 
v___x_595_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet___closed__0));
v___x_596_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet___closed__1));
v___x_597_ = lean_unsigned_to_nat(0u);
v___x_598_ = lean_string_utf8_byte_size(v_s_594_);
v___x_599_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_599_, 0, v_s_594_);
lean_ctor_set(v___x_599_, 1, v___x_597_);
lean_ctor_set(v___x_599_, 2, v___x_598_);
v___x_600_ = l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg(v___x_599_, v___x_596_);
v___x_601_ = lean_string_append(v___x_595_, v___x_600_);
lean_dec_ref(v___x_600_);
return v___x_601_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0(lean_object* v_s_602_, lean_object* v_pattern_603_, lean_object* v_replacement_604_){
_start:
{
lean_object* v___x_605_; 
v___x_605_ = l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg(v_s_602_, v_replacement_604_);
return v___x_605_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___boxed(lean_object* v_s_606_, lean_object* v_pattern_607_, lean_object* v_replacement_608_){
_start:
{
lean_object* v_res_609_; 
v_res_609_ = l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0(v_s_606_, v_pattern_607_, v_replacement_608_);
lean_dec_ref(v_replacement_608_);
lean_dec_ref(v_pattern_607_);
return v_res_609_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0_spec__0(lean_object* v_s_610_, lean_object* v_replacement_611_, lean_object* v_inst_612_, lean_object* v_R_613_, lean_object* v_a_614_, lean_object* v_b_615_, lean_object* v_c_616_){
_start:
{
lean_object* v___x_617_; 
v___x_617_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0_spec__0___redArg(v_s_610_, v_replacement_611_, v_a_614_, v_b_615_);
return v___x_617_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0_spec__0___boxed(lean_object* v_s_618_, lean_object* v_replacement_619_, lean_object* v_inst_620_, lean_object* v_R_621_, lean_object* v_a_622_, lean_object* v_b_623_, lean_object* v_c_624_){
_start:
{
lean_object* v_res_625_; 
v_res_625_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0_spec__0(v_s_618_, v_replacement_619_, v_inst_620_, v_R_621_, v_a_622_, v_b_623_, v_c_624_);
lean_dec_ref(v_replacement_619_);
return v_res_625_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0_spec__0(lean_object* v_x_627_, lean_object* v_x_628_){
_start:
{
if (lean_obj_tag(v_x_628_) == 0)
{
return v_x_627_;
}
else
{
lean_object* v_head_629_; lean_object* v_tail_630_; lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; lean_object* v___x_634_; 
v_head_629_ = lean_ctor_get(v_x_628_, 0);
v_tail_630_ = lean_ctor_get(v_x_628_, 1);
v___x_631_ = ((lean_object*)(l_List_foldl___at___00List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0_spec__0___closed__0));
v___x_632_ = lean_string_append(v_x_627_, v___x_631_);
v___x_633_ = l_Int_repr(v_head_629_);
v___x_634_ = lean_string_append(v___x_632_, v___x_633_);
lean_dec_ref(v___x_633_);
v_x_627_ = v___x_634_;
v_x_628_ = v_tail_630_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0_spec__0___boxed(lean_object* v_x_636_, lean_object* v_x_637_){
_start:
{
lean_object* v_res_638_; 
v_res_638_ = l_List_foldl___at___00List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0_spec__0(v_x_636_, v_x_637_);
lean_dec(v_x_637_);
return v_res_638_;
}
}
LEAN_EXPORT lean_object* l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0(lean_object* v_x_642_){
_start:
{
if (lean_obj_tag(v_x_642_) == 0)
{
lean_object* v___x_643_; 
v___x_643_ = ((lean_object*)(l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0___closed__0));
return v___x_643_;
}
else
{
lean_object* v_tail_644_; 
v_tail_644_ = lean_ctor_get(v_x_642_, 1);
if (lean_obj_tag(v_tail_644_) == 0)
{
lean_object* v_head_645_; lean_object* v___x_646_; lean_object* v___x_647_; lean_object* v___x_648_; lean_object* v___x_649_; lean_object* v___x_650_; 
v_head_645_ = lean_ctor_get(v_x_642_, 0);
v___x_646_ = ((lean_object*)(l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0___closed__1));
v___x_647_ = l_Int_repr(v_head_645_);
v___x_648_ = lean_string_append(v___x_646_, v___x_647_);
lean_dec_ref(v___x_647_);
v___x_649_ = ((lean_object*)(l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0___closed__2));
v___x_650_ = lean_string_append(v___x_648_, v___x_649_);
return v___x_650_;
}
else
{
lean_object* v_head_651_; lean_object* v___x_652_; lean_object* v___x_653_; lean_object* v___x_654_; lean_object* v___x_655_; uint32_t v___x_656_; lean_object* v___x_657_; 
v_head_651_ = lean_ctor_get(v_x_642_, 0);
v___x_652_ = ((lean_object*)(l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0___closed__1));
v___x_653_ = l_Int_repr(v_head_651_);
v___x_654_ = lean_string_append(v___x_652_, v___x_653_);
lean_dec_ref(v___x_653_);
v___x_655_ = l_List_foldl___at___00List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0_spec__0(v___x_654_, v_tail_644_);
v___x_656_ = 93;
v___x_657_ = lean_string_push(v___x_655_, v___x_656_);
return v___x_657_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0___boxed(lean_object* v_x_658_){
_start:
{
lean_object* v_res_659_; 
v_res_659_ = l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0(v_x_658_);
lean_dec(v_x_658_);
return v_res_659_;
}
}
LEAN_EXPORT uint8_t l_List_beq___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__1(lean_object* v_x_660_, lean_object* v_x_661_){
_start:
{
if (lean_obj_tag(v_x_660_) == 0)
{
if (lean_obj_tag(v_x_661_) == 0)
{
uint8_t v___x_662_; 
v___x_662_ = 1;
return v___x_662_;
}
else
{
uint8_t v___x_663_; 
v___x_663_ = 0;
return v___x_663_;
}
}
else
{
if (lean_obj_tag(v_x_661_) == 0)
{
uint8_t v___x_664_; 
v___x_664_ = 0;
return v___x_664_;
}
else
{
lean_object* v_head_665_; lean_object* v_tail_666_; lean_object* v_head_667_; lean_object* v_tail_668_; uint8_t v___x_669_; 
v_head_665_ = lean_ctor_get(v_x_660_, 0);
v_tail_666_ = lean_ctor_get(v_x_660_, 1);
v_head_667_ = lean_ctor_get(v_x_661_, 0);
v_tail_668_ = lean_ctor_get(v_x_661_, 1);
v___x_669_ = lean_int_dec_eq(v_head_665_, v_head_667_);
if (v___x_669_ == 0)
{
return v___x_669_;
}
else
{
v_x_660_ = v_tail_666_;
v_x_661_ = v_tail_668_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_beq___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__1___boxed(lean_object* v_x_671_, lean_object* v_x_672_){
_start:
{
uint8_t v_res_673_; lean_object* v_r_674_; 
v_res_673_ = l_List_beq___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__1(v_x_671_, v_x_672_);
lean_dec(v_x_672_);
lean_dec(v_x_671_);
v_r_674_ = lean_box(v_res_673_);
return v_r_674_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_toString(lean_object* v_s_692_, lean_object* v_x_693_, lean_object* v_x_694_){
_start:
{
switch(lean_obj_tag(v_x_694_))
{
case 0:
{
lean_object* v_i_695_; lean_object* v_lowerBound_696_; lean_object* v_upperBound_697_; lean_object* v___x_698_; lean_object* v___x_699_; lean_object* v___x_700_; lean_object* v___y_702_; lean_object* v___y_709_; lean_object* v___y_710_; 
v_i_695_ = lean_ctor_get(v_x_694_, 2);
lean_inc(v_i_695_);
lean_dec_ref_known(v_x_694_, 3);
v_lowerBound_696_ = lean_ctor_get(v_s_692_, 0);
lean_inc(v_lowerBound_696_);
v_upperBound_697_ = lean_ctor_get(v_s_692_, 1);
lean_inc(v_upperBound_697_);
lean_dec_ref(v_s_692_);
v___x_698_ = l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0(v_x_693_);
lean_dec(v_x_693_);
v___x_699_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__0));
v___x_700_ = lean_string_append(v___x_698_, v___x_699_);
if (lean_obj_tag(v_lowerBound_696_) == 0)
{
if (lean_obj_tag(v_upperBound_697_) == 0)
{
lean_object* v___x_714_; 
v___x_714_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__2));
v___y_702_ = v___x_714_;
goto v___jp_701_;
}
else
{
lean_object* v_val_715_; lean_object* v___x_716_; lean_object* v___y_718_; lean_object* v_intZero_722_; uint8_t v_isNeg_723_; 
v_val_715_ = lean_ctor_get(v_upperBound_697_, 0);
lean_inc(v_val_715_);
lean_dec_ref_known(v_upperBound_697_, 1);
v___x_716_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__3));
v_intZero_722_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17);
v_isNeg_723_ = lean_int_dec_lt(v_val_715_, v_intZero_722_);
if (v_isNeg_723_ == 0)
{
lean_object* v_a_724_; lean_object* v___x_725_; 
v_a_724_ = lean_nat_abs(v_val_715_);
lean_dec(v_val_715_);
v___x_725_ = l_Nat_reprFast(v_a_724_);
v___y_718_ = v___x_725_;
goto v___jp_717_;
}
else
{
lean_object* v_abs_726_; lean_object* v_one_727_; lean_object* v_a_728_; lean_object* v___x_729_; lean_object* v___x_730_; lean_object* v___x_731_; lean_object* v___x_732_; 
v_abs_726_ = lean_nat_abs(v_val_715_);
lean_dec(v_val_715_);
v_one_727_ = lean_unsigned_to_nat(1u);
v_a_728_ = lean_nat_sub(v_abs_726_, v_one_727_);
lean_dec(v_abs_726_);
v___x_729_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__4));
v___x_730_ = lean_nat_add(v_a_728_, v_one_727_);
lean_dec(v_a_728_);
v___x_731_ = l_Nat_reprFast(v___x_730_);
v___x_732_ = lean_string_append(v___x_729_, v___x_731_);
lean_dec_ref(v___x_731_);
v___y_718_ = v___x_732_;
goto v___jp_717_;
}
v___jp_717_:
{
lean_object* v___x_719_; lean_object* v___x_720_; lean_object* v___x_721_; 
v___x_719_ = lean_string_append(v___x_716_, v___y_718_);
lean_dec_ref(v___y_718_);
v___x_720_ = ((lean_object*)(l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0___closed__2));
v___x_721_ = lean_string_append(v___x_719_, v___x_720_);
v___y_702_ = v___x_721_;
goto v___jp_701_;
}
}
}
else
{
if (lean_obj_tag(v_upperBound_697_) == 0)
{
lean_object* v_val_733_; lean_object* v___x_734_; lean_object* v___y_736_; lean_object* v_intZero_740_; uint8_t v_isNeg_741_; 
v_val_733_ = lean_ctor_get(v_lowerBound_696_, 0);
lean_inc(v_val_733_);
lean_dec_ref_known(v_lowerBound_696_, 1);
v___x_734_ = ((lean_object*)(l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0___closed__1));
v_intZero_740_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17);
v_isNeg_741_ = lean_int_dec_lt(v_val_733_, v_intZero_740_);
if (v_isNeg_741_ == 0)
{
lean_object* v_a_742_; lean_object* v___x_743_; 
v_a_742_ = lean_nat_abs(v_val_733_);
lean_dec(v_val_733_);
v___x_743_ = l_Nat_reprFast(v_a_742_);
v___y_736_ = v___x_743_;
goto v___jp_735_;
}
else
{
lean_object* v_abs_744_; lean_object* v_one_745_; lean_object* v_a_746_; lean_object* v___x_747_; lean_object* v___x_748_; lean_object* v___x_749_; lean_object* v___x_750_; 
v_abs_744_ = lean_nat_abs(v_val_733_);
lean_dec(v_val_733_);
v_one_745_ = lean_unsigned_to_nat(1u);
v_a_746_ = lean_nat_sub(v_abs_744_, v_one_745_);
lean_dec(v_abs_744_);
v___x_747_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__4));
v___x_748_ = lean_nat_add(v_a_746_, v_one_745_);
lean_dec(v_a_746_);
v___x_749_ = l_Nat_reprFast(v___x_748_);
v___x_750_ = lean_string_append(v___x_747_, v___x_749_);
lean_dec_ref(v___x_749_);
v___y_736_ = v___x_750_;
goto v___jp_735_;
}
v___jp_735_:
{
lean_object* v___x_737_; lean_object* v___x_738_; lean_object* v___x_739_; 
v___x_737_ = lean_string_append(v___x_734_, v___y_736_);
lean_dec_ref(v___y_736_);
v___x_738_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__5));
v___x_739_ = lean_string_append(v___x_737_, v___x_738_);
v___y_702_ = v___x_739_;
goto v___jp_701_;
}
}
else
{
lean_object* v_val_751_; lean_object* v_val_752_; uint8_t v___x_753_; 
v_val_751_ = lean_ctor_get(v_lowerBound_696_, 0);
lean_inc(v_val_751_);
lean_dec_ref_known(v_lowerBound_696_, 1);
v_val_752_ = lean_ctor_get(v_upperBound_697_, 0);
lean_inc(v_val_752_);
lean_dec_ref_known(v_upperBound_697_, 1);
v___x_753_ = lean_int_dec_lt(v_val_752_, v_val_751_);
if (v___x_753_ == 0)
{
uint8_t v___x_754_; 
v___x_754_ = lean_int_dec_eq(v_val_751_, v_val_752_);
if (v___x_754_ == 0)
{
lean_object* v___x_755_; lean_object* v___y_757_; lean_object* v_intZero_772_; uint8_t v_isNeg_773_; 
v___x_755_ = ((lean_object*)(l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0___closed__1));
v_intZero_772_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17);
v_isNeg_773_ = lean_int_dec_lt(v_val_751_, v_intZero_772_);
if (v_isNeg_773_ == 0)
{
lean_object* v_a_774_; lean_object* v___x_775_; 
v_a_774_ = lean_nat_abs(v_val_751_);
lean_dec(v_val_751_);
v___x_775_ = l_Nat_reprFast(v_a_774_);
v___y_757_ = v___x_775_;
goto v___jp_756_;
}
else
{
lean_object* v_abs_776_; lean_object* v_one_777_; lean_object* v_a_778_; lean_object* v___x_779_; lean_object* v___x_780_; lean_object* v___x_781_; lean_object* v___x_782_; 
v_abs_776_ = lean_nat_abs(v_val_751_);
lean_dec(v_val_751_);
v_one_777_ = lean_unsigned_to_nat(1u);
v_a_778_ = lean_nat_sub(v_abs_776_, v_one_777_);
lean_dec(v_abs_776_);
v___x_779_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__4));
v___x_780_ = lean_nat_add(v_a_778_, v_one_777_);
lean_dec(v_a_778_);
v___x_781_ = l_Nat_reprFast(v___x_780_);
v___x_782_ = lean_string_append(v___x_779_, v___x_781_);
lean_dec_ref(v___x_781_);
v___y_757_ = v___x_782_;
goto v___jp_756_;
}
v___jp_756_:
{
lean_object* v___x_758_; lean_object* v___x_759_; lean_object* v___x_760_; lean_object* v_intZero_761_; uint8_t v_isNeg_762_; 
v___x_758_ = lean_string_append(v___x_755_, v___y_757_);
lean_dec_ref(v___y_757_);
v___x_759_ = ((lean_object*)(l_List_foldl___at___00List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0_spec__0___closed__0));
v___x_760_ = lean_string_append(v___x_758_, v___x_759_);
v_intZero_761_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17);
v_isNeg_762_ = lean_int_dec_lt(v_val_752_, v_intZero_761_);
if (v_isNeg_762_ == 0)
{
lean_object* v_a_763_; lean_object* v___x_764_; 
v_a_763_ = lean_nat_abs(v_val_752_);
lean_dec(v_val_752_);
v___x_764_ = l_Nat_reprFast(v_a_763_);
v___y_709_ = v___x_760_;
v___y_710_ = v___x_764_;
goto v___jp_708_;
}
else
{
lean_object* v_abs_765_; lean_object* v_one_766_; lean_object* v_a_767_; lean_object* v___x_768_; lean_object* v___x_769_; lean_object* v___x_770_; lean_object* v___x_771_; 
v_abs_765_ = lean_nat_abs(v_val_752_);
lean_dec(v_val_752_);
v_one_766_ = lean_unsigned_to_nat(1u);
v_a_767_ = lean_nat_sub(v_abs_765_, v_one_766_);
lean_dec(v_abs_765_);
v___x_768_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__4));
v___x_769_ = lean_nat_add(v_a_767_, v_one_766_);
lean_dec(v_a_767_);
v___x_770_ = l_Nat_reprFast(v___x_769_);
v___x_771_ = lean_string_append(v___x_768_, v___x_770_);
lean_dec_ref(v___x_770_);
v___y_709_ = v___x_760_;
v___y_710_ = v___x_771_;
goto v___jp_708_;
}
}
}
else
{
lean_object* v___x_783_; lean_object* v___y_785_; lean_object* v_intZero_789_; uint8_t v_isNeg_790_; 
lean_dec(v_val_752_);
v___x_783_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__6));
v_intZero_789_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17);
v_isNeg_790_ = lean_int_dec_lt(v_val_751_, v_intZero_789_);
if (v_isNeg_790_ == 0)
{
lean_object* v_a_791_; lean_object* v___x_792_; 
v_a_791_ = lean_nat_abs(v_val_751_);
lean_dec(v_val_751_);
v___x_792_ = l_Nat_reprFast(v_a_791_);
v___y_785_ = v___x_792_;
goto v___jp_784_;
}
else
{
lean_object* v_abs_793_; lean_object* v_one_794_; lean_object* v_a_795_; lean_object* v___x_796_; lean_object* v___x_797_; lean_object* v___x_798_; lean_object* v___x_799_; 
v_abs_793_ = lean_nat_abs(v_val_751_);
lean_dec(v_val_751_);
v_one_794_ = lean_unsigned_to_nat(1u);
v_a_795_ = lean_nat_sub(v_abs_793_, v_one_794_);
lean_dec(v_abs_793_);
v___x_796_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__4));
v___x_797_ = lean_nat_add(v_a_795_, v_one_794_);
lean_dec(v_a_795_);
v___x_798_ = l_Nat_reprFast(v___x_797_);
v___x_799_ = lean_string_append(v___x_796_, v___x_798_);
lean_dec_ref(v___x_798_);
v___y_785_ = v___x_799_;
goto v___jp_784_;
}
v___jp_784_:
{
lean_object* v___x_786_; lean_object* v___x_787_; lean_object* v___x_788_; 
v___x_786_ = lean_string_append(v___x_783_, v___y_785_);
lean_dec_ref(v___y_785_);
v___x_787_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__7));
v___x_788_ = lean_string_append(v___x_786_, v___x_787_);
v___y_702_ = v___x_788_;
goto v___jp_701_;
}
}
}
else
{
lean_object* v___x_800_; 
lean_dec(v_val_752_);
lean_dec(v_val_751_);
v___x_800_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__8));
v___y_702_ = v___x_800_;
goto v___jp_701_;
}
}
}
v___jp_701_:
{
lean_object* v___x_703_; lean_object* v___x_704_; lean_object* v___x_705_; lean_object* v___x_706_; lean_object* v___x_707_; 
v___x_703_ = lean_string_append(v___x_700_, v___y_702_);
lean_dec_ref(v___y_702_);
v___x_704_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__1));
v___x_705_ = lean_string_append(v___x_703_, v___x_704_);
v___x_706_ = l_Nat_reprFast(v_i_695_);
v___x_707_ = lean_string_append(v___x_705_, v___x_706_);
lean_dec_ref(v___x_706_);
return v___x_707_;
}
v___jp_708_:
{
lean_object* v___x_711_; lean_object* v___x_712_; lean_object* v___x_713_; 
v___x_711_ = lean_string_append(v___y_709_, v___y_710_);
lean_dec_ref(v___y_710_);
v___x_712_ = ((lean_object*)(l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0___closed__2));
v___x_713_ = lean_string_append(v___x_711_, v___x_712_);
v___y_702_ = v___x_713_;
goto v___jp_701_;
}
}
case 1:
{
lean_object* v_s_801_; lean_object* v_c_802_; lean_object* v_j_803_; lean_object* v___y_805_; lean_object* v___y_806_; lean_object* v___y_814_; lean_object* v___y_815_; lean_object* v___y_816_; lean_object* v___y_821_; lean_object* v___y_822_; lean_object* v___y_823_; lean_object* v___y_828_; lean_object* v___y_829_; lean_object* v___y_830_; lean_object* v___y_835_; lean_object* v___y_836_; lean_object* v___y_837_; lean_object* v___y_838_; lean_object* v___y_854_; lean_object* v___y_855_; lean_object* v___y_856_; uint8_t v___y_861_; uint8_t v___x_924_; 
v_s_801_ = lean_ctor_get(v_x_694_, 0);
lean_inc_ref(v_s_801_);
v_c_802_ = lean_ctor_get(v_x_694_, 1);
lean_inc(v_c_802_);
v_j_803_ = lean_ctor_get(v_x_694_, 2);
lean_inc_ref(v_j_803_);
lean_dec_ref_known(v_x_694_, 3);
v___x_924_ = l_Lean_Omega_instBEqConstraint_beq(v_s_692_, v_s_801_);
if (v___x_924_ == 0)
{
v___y_861_ = v___x_924_;
goto v___jp_860_;
}
else
{
uint8_t v___x_925_; 
v___x_925_ = l_List_beq___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__1(v_x_693_, v_c_802_);
v___y_861_ = v___x_925_;
goto v___jp_860_;
}
v___jp_804_:
{
lean_object* v___x_807_; lean_object* v___x_808_; lean_object* v___x_809_; lean_object* v___x_810_; lean_object* v___x_811_; lean_object* v___x_812_; 
v___x_807_ = lean_string_append(v___y_805_, v___y_806_);
lean_dec_ref(v___y_806_);
v___x_808_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__9));
v___x_809_ = lean_string_append(v___x_807_, v___x_808_);
v___x_810_ = l_Lean_Elab_Tactic_Omega_Justification_toString(v_s_801_, v_c_802_, v_j_803_);
v___x_811_ = l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet(v___x_810_);
v___x_812_ = lean_string_append(v___x_809_, v___x_811_);
lean_dec_ref(v___x_811_);
return v___x_812_;
}
v___jp_813_:
{
lean_object* v___x_817_; lean_object* v___x_818_; lean_object* v___x_819_; 
lean_inc_ref(v___y_815_);
v___x_817_ = lean_string_append(v___y_815_, v___y_816_);
lean_dec_ref(v___y_816_);
v___x_818_ = ((lean_object*)(l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0___closed__2));
v___x_819_ = lean_string_append(v___x_817_, v___x_818_);
v___y_805_ = v___y_814_;
v___y_806_ = v___x_819_;
goto v___jp_804_;
}
v___jp_820_:
{
lean_object* v___x_824_; lean_object* v___x_825_; lean_object* v___x_826_; 
lean_inc_ref(v___y_822_);
v___x_824_ = lean_string_append(v___y_822_, v___y_823_);
lean_dec_ref(v___y_823_);
v___x_825_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__5));
v___x_826_ = lean_string_append(v___x_824_, v___x_825_);
v___y_805_ = v___y_821_;
v___y_806_ = v___x_826_;
goto v___jp_804_;
}
v___jp_827_:
{
lean_object* v___x_831_; lean_object* v___x_832_; lean_object* v___x_833_; 
v___x_831_ = lean_string_append(v___y_828_, v___y_830_);
lean_dec_ref(v___y_830_);
v___x_832_ = ((lean_object*)(l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0___closed__2));
v___x_833_ = lean_string_append(v___x_831_, v___x_832_);
v___y_805_ = v___y_829_;
v___y_806_ = v___x_833_;
goto v___jp_804_;
}
v___jp_834_:
{
lean_object* v___x_839_; lean_object* v___x_840_; lean_object* v___x_841_; lean_object* v_intZero_842_; uint8_t v_isNeg_843_; 
lean_inc_ref(v___y_837_);
v___x_839_ = lean_string_append(v___y_837_, v___y_838_);
lean_dec_ref(v___y_838_);
v___x_840_ = ((lean_object*)(l_List_foldl___at___00List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0_spec__0___closed__0));
v___x_841_ = lean_string_append(v___x_839_, v___x_840_);
v_intZero_842_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17);
v_isNeg_843_ = lean_int_dec_lt(v___y_835_, v_intZero_842_);
if (v_isNeg_843_ == 0)
{
lean_object* v_a_844_; lean_object* v___x_845_; 
v_a_844_ = lean_nat_abs(v___y_835_);
lean_dec(v___y_835_);
v___x_845_ = l_Nat_reprFast(v_a_844_);
v___y_828_ = v___x_841_;
v___y_829_ = v___y_836_;
v___y_830_ = v___x_845_;
goto v___jp_827_;
}
else
{
lean_object* v_abs_846_; lean_object* v_one_847_; lean_object* v_a_848_; lean_object* v___x_849_; lean_object* v___x_850_; lean_object* v___x_851_; lean_object* v___x_852_; 
v_abs_846_ = lean_nat_abs(v___y_835_);
lean_dec(v___y_835_);
v_one_847_ = lean_unsigned_to_nat(1u);
v_a_848_ = lean_nat_sub(v_abs_846_, v_one_847_);
lean_dec(v_abs_846_);
v___x_849_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__4));
v___x_850_ = lean_nat_add(v_a_848_, v_one_847_);
lean_dec(v_a_848_);
v___x_851_ = l_Nat_reprFast(v___x_850_);
v___x_852_ = lean_string_append(v___x_849_, v___x_851_);
lean_dec_ref(v___x_851_);
v___y_828_ = v___x_841_;
v___y_829_ = v___y_836_;
v___y_830_ = v___x_852_;
goto v___jp_827_;
}
}
v___jp_853_:
{
lean_object* v___x_857_; lean_object* v___x_858_; lean_object* v___x_859_; 
lean_inc_ref(v___y_855_);
v___x_857_ = lean_string_append(v___y_855_, v___y_856_);
lean_dec_ref(v___y_856_);
v___x_858_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__7));
v___x_859_ = lean_string_append(v___x_857_, v___x_858_);
v___y_805_ = v___y_854_;
v___y_806_ = v___x_859_;
goto v___jp_804_;
}
v___jp_860_:
{
if (v___y_861_ == 0)
{
lean_object* v_lowerBound_862_; lean_object* v_upperBound_863_; lean_object* v___x_864_; lean_object* v___x_865_; lean_object* v___x_866_; 
v_lowerBound_862_ = lean_ctor_get(v_s_692_, 0);
lean_inc(v_lowerBound_862_);
v_upperBound_863_ = lean_ctor_get(v_s_692_, 1);
lean_inc(v_upperBound_863_);
lean_dec_ref(v_s_692_);
v___x_864_ = l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0(v_x_693_);
lean_dec(v_x_693_);
v___x_865_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__0));
v___x_866_ = lean_string_append(v___x_864_, v___x_865_);
if (lean_obj_tag(v_lowerBound_862_) == 0)
{
if (lean_obj_tag(v_upperBound_863_) == 0)
{
lean_object* v___x_867_; 
v___x_867_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__2));
v___y_805_ = v___x_866_;
v___y_806_ = v___x_867_;
goto v___jp_804_;
}
else
{
lean_object* v_val_868_; lean_object* v___x_869_; lean_object* v_intZero_870_; uint8_t v_isNeg_871_; 
v_val_868_ = lean_ctor_get(v_upperBound_863_, 0);
lean_inc(v_val_868_);
lean_dec_ref_known(v_upperBound_863_, 1);
v___x_869_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__3));
v_intZero_870_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17);
v_isNeg_871_ = lean_int_dec_lt(v_val_868_, v_intZero_870_);
if (v_isNeg_871_ == 0)
{
lean_object* v_a_872_; lean_object* v___x_873_; 
v_a_872_ = lean_nat_abs(v_val_868_);
lean_dec(v_val_868_);
v___x_873_ = l_Nat_reprFast(v_a_872_);
v___y_814_ = v___x_866_;
v___y_815_ = v___x_869_;
v___y_816_ = v___x_873_;
goto v___jp_813_;
}
else
{
lean_object* v_abs_874_; lean_object* v_one_875_; lean_object* v_a_876_; lean_object* v___x_877_; lean_object* v___x_878_; lean_object* v___x_879_; lean_object* v___x_880_; 
v_abs_874_ = lean_nat_abs(v_val_868_);
lean_dec(v_val_868_);
v_one_875_ = lean_unsigned_to_nat(1u);
v_a_876_ = lean_nat_sub(v_abs_874_, v_one_875_);
lean_dec(v_abs_874_);
v___x_877_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__4));
v___x_878_ = lean_nat_add(v_a_876_, v_one_875_);
lean_dec(v_a_876_);
v___x_879_ = l_Nat_reprFast(v___x_878_);
v___x_880_ = lean_string_append(v___x_877_, v___x_879_);
lean_dec_ref(v___x_879_);
v___y_814_ = v___x_866_;
v___y_815_ = v___x_869_;
v___y_816_ = v___x_880_;
goto v___jp_813_;
}
}
}
else
{
if (lean_obj_tag(v_upperBound_863_) == 0)
{
lean_object* v_val_881_; lean_object* v___x_882_; lean_object* v_intZero_883_; uint8_t v_isNeg_884_; 
v_val_881_ = lean_ctor_get(v_lowerBound_862_, 0);
lean_inc(v_val_881_);
lean_dec_ref_known(v_lowerBound_862_, 1);
v___x_882_ = ((lean_object*)(l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0___closed__1));
v_intZero_883_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17);
v_isNeg_884_ = lean_int_dec_lt(v_val_881_, v_intZero_883_);
if (v_isNeg_884_ == 0)
{
lean_object* v_a_885_; lean_object* v___x_886_; 
v_a_885_ = lean_nat_abs(v_val_881_);
lean_dec(v_val_881_);
v___x_886_ = l_Nat_reprFast(v_a_885_);
v___y_821_ = v___x_866_;
v___y_822_ = v___x_882_;
v___y_823_ = v___x_886_;
goto v___jp_820_;
}
else
{
lean_object* v_abs_887_; lean_object* v_one_888_; lean_object* v_a_889_; lean_object* v___x_890_; lean_object* v___x_891_; lean_object* v___x_892_; lean_object* v___x_893_; 
v_abs_887_ = lean_nat_abs(v_val_881_);
lean_dec(v_val_881_);
v_one_888_ = lean_unsigned_to_nat(1u);
v_a_889_ = lean_nat_sub(v_abs_887_, v_one_888_);
lean_dec(v_abs_887_);
v___x_890_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__4));
v___x_891_ = lean_nat_add(v_a_889_, v_one_888_);
lean_dec(v_a_889_);
v___x_892_ = l_Nat_reprFast(v___x_891_);
v___x_893_ = lean_string_append(v___x_890_, v___x_892_);
lean_dec_ref(v___x_892_);
v___y_821_ = v___x_866_;
v___y_822_ = v___x_882_;
v___y_823_ = v___x_893_;
goto v___jp_820_;
}
}
else
{
lean_object* v_val_894_; lean_object* v_val_895_; uint8_t v___x_896_; 
v_val_894_ = lean_ctor_get(v_lowerBound_862_, 0);
lean_inc(v_val_894_);
lean_dec_ref_known(v_lowerBound_862_, 1);
v_val_895_ = lean_ctor_get(v_upperBound_863_, 0);
lean_inc(v_val_895_);
lean_dec_ref_known(v_upperBound_863_, 1);
v___x_896_ = lean_int_dec_lt(v_val_895_, v_val_894_);
if (v___x_896_ == 0)
{
uint8_t v___x_897_; 
v___x_897_ = lean_int_dec_eq(v_val_894_, v_val_895_);
if (v___x_897_ == 0)
{
lean_object* v___x_898_; lean_object* v_intZero_899_; uint8_t v_isNeg_900_; 
v___x_898_ = ((lean_object*)(l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0___closed__1));
v_intZero_899_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17);
v_isNeg_900_ = lean_int_dec_lt(v_val_894_, v_intZero_899_);
if (v_isNeg_900_ == 0)
{
lean_object* v_a_901_; lean_object* v___x_902_; 
v_a_901_ = lean_nat_abs(v_val_894_);
lean_dec(v_val_894_);
v___x_902_ = l_Nat_reprFast(v_a_901_);
v___y_835_ = v_val_895_;
v___y_836_ = v___x_866_;
v___y_837_ = v___x_898_;
v___y_838_ = v___x_902_;
goto v___jp_834_;
}
else
{
lean_object* v_abs_903_; lean_object* v_one_904_; lean_object* v_a_905_; lean_object* v___x_906_; lean_object* v___x_907_; lean_object* v___x_908_; lean_object* v___x_909_; 
v_abs_903_ = lean_nat_abs(v_val_894_);
lean_dec(v_val_894_);
v_one_904_ = lean_unsigned_to_nat(1u);
v_a_905_ = lean_nat_sub(v_abs_903_, v_one_904_);
lean_dec(v_abs_903_);
v___x_906_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__4));
v___x_907_ = lean_nat_add(v_a_905_, v_one_904_);
lean_dec(v_a_905_);
v___x_908_ = l_Nat_reprFast(v___x_907_);
v___x_909_ = lean_string_append(v___x_906_, v___x_908_);
lean_dec_ref(v___x_908_);
v___y_835_ = v_val_895_;
v___y_836_ = v___x_866_;
v___y_837_ = v___x_898_;
v___y_838_ = v___x_909_;
goto v___jp_834_;
}
}
else
{
lean_object* v___x_910_; lean_object* v_intZero_911_; uint8_t v_isNeg_912_; 
lean_dec(v_val_895_);
v___x_910_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__6));
v_intZero_911_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17);
v_isNeg_912_ = lean_int_dec_lt(v_val_894_, v_intZero_911_);
if (v_isNeg_912_ == 0)
{
lean_object* v_a_913_; lean_object* v___x_914_; 
v_a_913_ = lean_nat_abs(v_val_894_);
lean_dec(v_val_894_);
v___x_914_ = l_Nat_reprFast(v_a_913_);
v___y_854_ = v___x_866_;
v___y_855_ = v___x_910_;
v___y_856_ = v___x_914_;
goto v___jp_853_;
}
else
{
lean_object* v_abs_915_; lean_object* v_one_916_; lean_object* v_a_917_; lean_object* v___x_918_; lean_object* v___x_919_; lean_object* v___x_920_; lean_object* v___x_921_; 
v_abs_915_ = lean_nat_abs(v_val_894_);
lean_dec(v_val_894_);
v_one_916_ = lean_unsigned_to_nat(1u);
v_a_917_ = lean_nat_sub(v_abs_915_, v_one_916_);
lean_dec(v_abs_915_);
v___x_918_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__4));
v___x_919_ = lean_nat_add(v_a_917_, v_one_916_);
lean_dec(v_a_917_);
v___x_920_ = l_Nat_reprFast(v___x_919_);
v___x_921_ = lean_string_append(v___x_918_, v___x_920_);
lean_dec_ref(v___x_920_);
v___y_854_ = v___x_866_;
v___y_855_ = v___x_910_;
v___y_856_ = v___x_921_;
goto v___jp_853_;
}
}
}
else
{
lean_object* v___x_922_; 
lean_dec(v_val_895_);
lean_dec(v_val_894_);
v___x_922_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__8));
v___y_805_ = v___x_866_;
v___y_806_ = v___x_922_;
goto v___jp_804_;
}
}
}
}
else
{
lean_dec(v_x_693_);
lean_dec_ref(v_s_692_);
v_s_692_ = v_s_801_;
v_x_693_ = v_c_802_;
v_x_694_ = v_j_803_;
goto _start;
}
}
}
case 2:
{
lean_object* v_s_926_; lean_object* v_t_927_; lean_object* v_j_928_; lean_object* v_k_929_; lean_object* v_lowerBound_930_; lean_object* v_upperBound_931_; lean_object* v___x_932_; lean_object* v___x_933_; lean_object* v___x_934_; lean_object* v___y_936_; lean_object* v___y_949_; lean_object* v___y_950_; 
v_s_926_ = lean_ctor_get(v_x_694_, 0);
lean_inc_ref(v_s_926_);
v_t_927_ = lean_ctor_get(v_x_694_, 1);
lean_inc_ref(v_t_927_);
v_j_928_ = lean_ctor_get(v_x_694_, 3);
lean_inc_ref(v_j_928_);
v_k_929_ = lean_ctor_get(v_x_694_, 4);
lean_inc_ref(v_k_929_);
lean_dec_ref_known(v_x_694_, 5);
v_lowerBound_930_ = lean_ctor_get(v_s_692_, 0);
lean_inc(v_lowerBound_930_);
v_upperBound_931_ = lean_ctor_get(v_s_692_, 1);
lean_inc(v_upperBound_931_);
lean_dec_ref(v_s_692_);
v___x_932_ = l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0(v_x_693_);
v___x_933_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__0));
v___x_934_ = lean_string_append(v___x_932_, v___x_933_);
if (lean_obj_tag(v_lowerBound_930_) == 0)
{
if (lean_obj_tag(v_upperBound_931_) == 0)
{
lean_object* v___x_954_; 
v___x_954_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__2));
v___y_936_ = v___x_954_;
goto v___jp_935_;
}
else
{
lean_object* v_val_955_; lean_object* v___x_956_; lean_object* v___y_958_; lean_object* v_intZero_962_; uint8_t v_isNeg_963_; 
v_val_955_ = lean_ctor_get(v_upperBound_931_, 0);
lean_inc(v_val_955_);
lean_dec_ref_known(v_upperBound_931_, 1);
v___x_956_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__3));
v_intZero_962_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17);
v_isNeg_963_ = lean_int_dec_lt(v_val_955_, v_intZero_962_);
if (v_isNeg_963_ == 0)
{
lean_object* v_a_964_; lean_object* v___x_965_; 
v_a_964_ = lean_nat_abs(v_val_955_);
lean_dec(v_val_955_);
v___x_965_ = l_Nat_reprFast(v_a_964_);
v___y_958_ = v___x_965_;
goto v___jp_957_;
}
else
{
lean_object* v_abs_966_; lean_object* v_one_967_; lean_object* v_a_968_; lean_object* v___x_969_; lean_object* v___x_970_; lean_object* v___x_971_; lean_object* v___x_972_; 
v_abs_966_ = lean_nat_abs(v_val_955_);
lean_dec(v_val_955_);
v_one_967_ = lean_unsigned_to_nat(1u);
v_a_968_ = lean_nat_sub(v_abs_966_, v_one_967_);
lean_dec(v_abs_966_);
v___x_969_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__4));
v___x_970_ = lean_nat_add(v_a_968_, v_one_967_);
lean_dec(v_a_968_);
v___x_971_ = l_Nat_reprFast(v___x_970_);
v___x_972_ = lean_string_append(v___x_969_, v___x_971_);
lean_dec_ref(v___x_971_);
v___y_958_ = v___x_972_;
goto v___jp_957_;
}
v___jp_957_:
{
lean_object* v___x_959_; lean_object* v___x_960_; lean_object* v___x_961_; 
v___x_959_ = lean_string_append(v___x_956_, v___y_958_);
lean_dec_ref(v___y_958_);
v___x_960_ = ((lean_object*)(l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0___closed__2));
v___x_961_ = lean_string_append(v___x_959_, v___x_960_);
v___y_936_ = v___x_961_;
goto v___jp_935_;
}
}
}
else
{
if (lean_obj_tag(v_upperBound_931_) == 0)
{
lean_object* v_val_973_; lean_object* v___x_974_; lean_object* v___y_976_; lean_object* v_intZero_980_; uint8_t v_isNeg_981_; 
v_val_973_ = lean_ctor_get(v_lowerBound_930_, 0);
lean_inc(v_val_973_);
lean_dec_ref_known(v_lowerBound_930_, 1);
v___x_974_ = ((lean_object*)(l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0___closed__1));
v_intZero_980_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17);
v_isNeg_981_ = lean_int_dec_lt(v_val_973_, v_intZero_980_);
if (v_isNeg_981_ == 0)
{
lean_object* v_a_982_; lean_object* v___x_983_; 
v_a_982_ = lean_nat_abs(v_val_973_);
lean_dec(v_val_973_);
v___x_983_ = l_Nat_reprFast(v_a_982_);
v___y_976_ = v___x_983_;
goto v___jp_975_;
}
else
{
lean_object* v_abs_984_; lean_object* v_one_985_; lean_object* v_a_986_; lean_object* v___x_987_; lean_object* v___x_988_; lean_object* v___x_989_; lean_object* v___x_990_; 
v_abs_984_ = lean_nat_abs(v_val_973_);
lean_dec(v_val_973_);
v_one_985_ = lean_unsigned_to_nat(1u);
v_a_986_ = lean_nat_sub(v_abs_984_, v_one_985_);
lean_dec(v_abs_984_);
v___x_987_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__4));
v___x_988_ = lean_nat_add(v_a_986_, v_one_985_);
lean_dec(v_a_986_);
v___x_989_ = l_Nat_reprFast(v___x_988_);
v___x_990_ = lean_string_append(v___x_987_, v___x_989_);
lean_dec_ref(v___x_989_);
v___y_976_ = v___x_990_;
goto v___jp_975_;
}
v___jp_975_:
{
lean_object* v___x_977_; lean_object* v___x_978_; lean_object* v___x_979_; 
v___x_977_ = lean_string_append(v___x_974_, v___y_976_);
lean_dec_ref(v___y_976_);
v___x_978_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__5));
v___x_979_ = lean_string_append(v___x_977_, v___x_978_);
v___y_936_ = v___x_979_;
goto v___jp_935_;
}
}
else
{
lean_object* v_val_991_; lean_object* v_val_992_; uint8_t v___x_993_; 
v_val_991_ = lean_ctor_get(v_lowerBound_930_, 0);
lean_inc(v_val_991_);
lean_dec_ref_known(v_lowerBound_930_, 1);
v_val_992_ = lean_ctor_get(v_upperBound_931_, 0);
lean_inc(v_val_992_);
lean_dec_ref_known(v_upperBound_931_, 1);
v___x_993_ = lean_int_dec_lt(v_val_992_, v_val_991_);
if (v___x_993_ == 0)
{
uint8_t v___x_994_; 
v___x_994_ = lean_int_dec_eq(v_val_991_, v_val_992_);
if (v___x_994_ == 0)
{
lean_object* v___x_995_; lean_object* v___y_997_; lean_object* v_intZero_1012_; uint8_t v_isNeg_1013_; 
v___x_995_ = ((lean_object*)(l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0___closed__1));
v_intZero_1012_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17);
v_isNeg_1013_ = lean_int_dec_lt(v_val_991_, v_intZero_1012_);
if (v_isNeg_1013_ == 0)
{
lean_object* v_a_1014_; lean_object* v___x_1015_; 
v_a_1014_ = lean_nat_abs(v_val_991_);
lean_dec(v_val_991_);
v___x_1015_ = l_Nat_reprFast(v_a_1014_);
v___y_997_ = v___x_1015_;
goto v___jp_996_;
}
else
{
lean_object* v_abs_1016_; lean_object* v_one_1017_; lean_object* v_a_1018_; lean_object* v___x_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; lean_object* v___x_1022_; 
v_abs_1016_ = lean_nat_abs(v_val_991_);
lean_dec(v_val_991_);
v_one_1017_ = lean_unsigned_to_nat(1u);
v_a_1018_ = lean_nat_sub(v_abs_1016_, v_one_1017_);
lean_dec(v_abs_1016_);
v___x_1019_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__4));
v___x_1020_ = lean_nat_add(v_a_1018_, v_one_1017_);
lean_dec(v_a_1018_);
v___x_1021_ = l_Nat_reprFast(v___x_1020_);
v___x_1022_ = lean_string_append(v___x_1019_, v___x_1021_);
lean_dec_ref(v___x_1021_);
v___y_997_ = v___x_1022_;
goto v___jp_996_;
}
v___jp_996_:
{
lean_object* v___x_998_; lean_object* v___x_999_; lean_object* v___x_1000_; lean_object* v_intZero_1001_; uint8_t v_isNeg_1002_; 
v___x_998_ = lean_string_append(v___x_995_, v___y_997_);
lean_dec_ref(v___y_997_);
v___x_999_ = ((lean_object*)(l_List_foldl___at___00List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0_spec__0___closed__0));
v___x_1000_ = lean_string_append(v___x_998_, v___x_999_);
v_intZero_1001_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17);
v_isNeg_1002_ = lean_int_dec_lt(v_val_992_, v_intZero_1001_);
if (v_isNeg_1002_ == 0)
{
lean_object* v_a_1003_; lean_object* v___x_1004_; 
v_a_1003_ = lean_nat_abs(v_val_992_);
lean_dec(v_val_992_);
v___x_1004_ = l_Nat_reprFast(v_a_1003_);
v___y_949_ = v___x_1000_;
v___y_950_ = v___x_1004_;
goto v___jp_948_;
}
else
{
lean_object* v_abs_1005_; lean_object* v_one_1006_; lean_object* v_a_1007_; lean_object* v___x_1008_; lean_object* v___x_1009_; lean_object* v___x_1010_; lean_object* v___x_1011_; 
v_abs_1005_ = lean_nat_abs(v_val_992_);
lean_dec(v_val_992_);
v_one_1006_ = lean_unsigned_to_nat(1u);
v_a_1007_ = lean_nat_sub(v_abs_1005_, v_one_1006_);
lean_dec(v_abs_1005_);
v___x_1008_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__4));
v___x_1009_ = lean_nat_add(v_a_1007_, v_one_1006_);
lean_dec(v_a_1007_);
v___x_1010_ = l_Nat_reprFast(v___x_1009_);
v___x_1011_ = lean_string_append(v___x_1008_, v___x_1010_);
lean_dec_ref(v___x_1010_);
v___y_949_ = v___x_1000_;
v___y_950_ = v___x_1011_;
goto v___jp_948_;
}
}
}
else
{
lean_object* v___x_1023_; lean_object* v___y_1025_; lean_object* v_intZero_1029_; uint8_t v_isNeg_1030_; 
lean_dec(v_val_992_);
v___x_1023_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__6));
v_intZero_1029_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17);
v_isNeg_1030_ = lean_int_dec_lt(v_val_991_, v_intZero_1029_);
if (v_isNeg_1030_ == 0)
{
lean_object* v_a_1031_; lean_object* v___x_1032_; 
v_a_1031_ = lean_nat_abs(v_val_991_);
lean_dec(v_val_991_);
v___x_1032_ = l_Nat_reprFast(v_a_1031_);
v___y_1025_ = v___x_1032_;
goto v___jp_1024_;
}
else
{
lean_object* v_abs_1033_; lean_object* v_one_1034_; lean_object* v_a_1035_; lean_object* v___x_1036_; lean_object* v___x_1037_; lean_object* v___x_1038_; lean_object* v___x_1039_; 
v_abs_1033_ = lean_nat_abs(v_val_991_);
lean_dec(v_val_991_);
v_one_1034_ = lean_unsigned_to_nat(1u);
v_a_1035_ = lean_nat_sub(v_abs_1033_, v_one_1034_);
lean_dec(v_abs_1033_);
v___x_1036_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__4));
v___x_1037_ = lean_nat_add(v_a_1035_, v_one_1034_);
lean_dec(v_a_1035_);
v___x_1038_ = l_Nat_reprFast(v___x_1037_);
v___x_1039_ = lean_string_append(v___x_1036_, v___x_1038_);
lean_dec_ref(v___x_1038_);
v___y_1025_ = v___x_1039_;
goto v___jp_1024_;
}
v___jp_1024_:
{
lean_object* v___x_1026_; lean_object* v___x_1027_; lean_object* v___x_1028_; 
v___x_1026_ = lean_string_append(v___x_1023_, v___y_1025_);
lean_dec_ref(v___y_1025_);
v___x_1027_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__7));
v___x_1028_ = lean_string_append(v___x_1026_, v___x_1027_);
v___y_936_ = v___x_1028_;
goto v___jp_935_;
}
}
}
else
{
lean_object* v___x_1040_; 
lean_dec(v_val_992_);
lean_dec(v_val_991_);
v___x_1040_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__8));
v___y_936_ = v___x_1040_;
goto v___jp_935_;
}
}
}
v___jp_935_:
{
lean_object* v___x_937_; lean_object* v___x_938_; lean_object* v___x_939_; lean_object* v___x_940_; lean_object* v___x_941_; lean_object* v___x_942_; lean_object* v___x_943_; lean_object* v___x_944_; lean_object* v___x_945_; lean_object* v___x_946_; lean_object* v___x_947_; 
v___x_937_ = lean_string_append(v___x_934_, v___y_936_);
lean_dec_ref(v___y_936_);
v___x_938_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__10));
v___x_939_ = lean_string_append(v___x_937_, v___x_938_);
lean_inc(v_x_693_);
v___x_940_ = l_Lean_Elab_Tactic_Omega_Justification_toString(v_s_926_, v_x_693_, v_j_928_);
v___x_941_ = l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet(v___x_940_);
v___x_942_ = lean_string_append(v___x_939_, v___x_941_);
lean_dec_ref(v___x_941_);
v___x_943_ = ((lean_object*)(l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__0));
v___x_944_ = lean_string_append(v___x_942_, v___x_943_);
v___x_945_ = l_Lean_Elab_Tactic_Omega_Justification_toString(v_t_927_, v_x_693_, v_k_929_);
v___x_946_ = l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet(v___x_945_);
v___x_947_ = lean_string_append(v___x_944_, v___x_946_);
lean_dec_ref(v___x_946_);
return v___x_947_;
}
v___jp_948_:
{
lean_object* v___x_951_; lean_object* v___x_952_; lean_object* v___x_953_; 
v___x_951_ = lean_string_append(v___y_949_, v___y_950_);
lean_dec_ref(v___y_950_);
v___x_952_ = ((lean_object*)(l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0___closed__2));
v___x_953_ = lean_string_append(v___x_951_, v___x_952_);
v___y_936_ = v___x_953_;
goto v___jp_935_;
}
}
case 3:
{
lean_object* v_s_1041_; lean_object* v_t_1042_; lean_object* v_x_1043_; lean_object* v_y_1044_; lean_object* v_a_1045_; lean_object* v_j_1046_; lean_object* v_b_1047_; lean_object* v_k_1048_; lean_object* v_lowerBound_1049_; lean_object* v_upperBound_1050_; lean_object* v___x_1051_; lean_object* v___x_1052_; lean_object* v___x_1053_; lean_object* v___y_1055_; lean_object* v___y_1076_; lean_object* v___y_1077_; 
v_s_1041_ = lean_ctor_get(v_x_694_, 0);
lean_inc_ref(v_s_1041_);
v_t_1042_ = lean_ctor_get(v_x_694_, 1);
lean_inc_ref(v_t_1042_);
v_x_1043_ = lean_ctor_get(v_x_694_, 2);
lean_inc(v_x_1043_);
v_y_1044_ = lean_ctor_get(v_x_694_, 3);
lean_inc(v_y_1044_);
v_a_1045_ = lean_ctor_get(v_x_694_, 4);
lean_inc(v_a_1045_);
v_j_1046_ = lean_ctor_get(v_x_694_, 5);
lean_inc_ref(v_j_1046_);
v_b_1047_ = lean_ctor_get(v_x_694_, 6);
lean_inc(v_b_1047_);
v_k_1048_ = lean_ctor_get(v_x_694_, 7);
lean_inc_ref(v_k_1048_);
lean_dec_ref_known(v_x_694_, 8);
v_lowerBound_1049_ = lean_ctor_get(v_s_692_, 0);
lean_inc(v_lowerBound_1049_);
v_upperBound_1050_ = lean_ctor_get(v_s_692_, 1);
lean_inc(v_upperBound_1050_);
lean_dec_ref(v_s_692_);
v___x_1051_ = l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0(v_x_693_);
lean_dec(v_x_693_);
v___x_1052_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__0));
v___x_1053_ = lean_string_append(v___x_1051_, v___x_1052_);
if (lean_obj_tag(v_lowerBound_1049_) == 0)
{
if (lean_obj_tag(v_upperBound_1050_) == 0)
{
lean_object* v___x_1081_; 
v___x_1081_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__2));
v___y_1055_ = v___x_1081_;
goto v___jp_1054_;
}
else
{
lean_object* v_val_1082_; lean_object* v___x_1083_; lean_object* v___y_1085_; lean_object* v_intZero_1089_; uint8_t v_isNeg_1090_; 
v_val_1082_ = lean_ctor_get(v_upperBound_1050_, 0);
lean_inc(v_val_1082_);
lean_dec_ref_known(v_upperBound_1050_, 1);
v___x_1083_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__3));
v_intZero_1089_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17);
v_isNeg_1090_ = lean_int_dec_lt(v_val_1082_, v_intZero_1089_);
if (v_isNeg_1090_ == 0)
{
lean_object* v_a_1091_; lean_object* v___x_1092_; 
v_a_1091_ = lean_nat_abs(v_val_1082_);
lean_dec(v_val_1082_);
v___x_1092_ = l_Nat_reprFast(v_a_1091_);
v___y_1085_ = v___x_1092_;
goto v___jp_1084_;
}
else
{
lean_object* v_abs_1093_; lean_object* v_one_1094_; lean_object* v_a_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; 
v_abs_1093_ = lean_nat_abs(v_val_1082_);
lean_dec(v_val_1082_);
v_one_1094_ = lean_unsigned_to_nat(1u);
v_a_1095_ = lean_nat_sub(v_abs_1093_, v_one_1094_);
lean_dec(v_abs_1093_);
v___x_1096_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__4));
v___x_1097_ = lean_nat_add(v_a_1095_, v_one_1094_);
lean_dec(v_a_1095_);
v___x_1098_ = l_Nat_reprFast(v___x_1097_);
v___x_1099_ = lean_string_append(v___x_1096_, v___x_1098_);
lean_dec_ref(v___x_1098_);
v___y_1085_ = v___x_1099_;
goto v___jp_1084_;
}
v___jp_1084_:
{
lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; 
v___x_1086_ = lean_string_append(v___x_1083_, v___y_1085_);
lean_dec_ref(v___y_1085_);
v___x_1087_ = ((lean_object*)(l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0___closed__2));
v___x_1088_ = lean_string_append(v___x_1086_, v___x_1087_);
v___y_1055_ = v___x_1088_;
goto v___jp_1054_;
}
}
}
else
{
if (lean_obj_tag(v_upperBound_1050_) == 0)
{
lean_object* v_val_1100_; lean_object* v___x_1101_; lean_object* v___y_1103_; lean_object* v_intZero_1107_; uint8_t v_isNeg_1108_; 
v_val_1100_ = lean_ctor_get(v_lowerBound_1049_, 0);
lean_inc(v_val_1100_);
lean_dec_ref_known(v_lowerBound_1049_, 1);
v___x_1101_ = ((lean_object*)(l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0___closed__1));
v_intZero_1107_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17);
v_isNeg_1108_ = lean_int_dec_lt(v_val_1100_, v_intZero_1107_);
if (v_isNeg_1108_ == 0)
{
lean_object* v_a_1109_; lean_object* v___x_1110_; 
v_a_1109_ = lean_nat_abs(v_val_1100_);
lean_dec(v_val_1100_);
v___x_1110_ = l_Nat_reprFast(v_a_1109_);
v___y_1103_ = v___x_1110_;
goto v___jp_1102_;
}
else
{
lean_object* v_abs_1111_; lean_object* v_one_1112_; lean_object* v_a_1113_; lean_object* v___x_1114_; lean_object* v___x_1115_; lean_object* v___x_1116_; lean_object* v___x_1117_; 
v_abs_1111_ = lean_nat_abs(v_val_1100_);
lean_dec(v_val_1100_);
v_one_1112_ = lean_unsigned_to_nat(1u);
v_a_1113_ = lean_nat_sub(v_abs_1111_, v_one_1112_);
lean_dec(v_abs_1111_);
v___x_1114_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__4));
v___x_1115_ = lean_nat_add(v_a_1113_, v_one_1112_);
lean_dec(v_a_1113_);
v___x_1116_ = l_Nat_reprFast(v___x_1115_);
v___x_1117_ = lean_string_append(v___x_1114_, v___x_1116_);
lean_dec_ref(v___x_1116_);
v___y_1103_ = v___x_1117_;
goto v___jp_1102_;
}
v___jp_1102_:
{
lean_object* v___x_1104_; lean_object* v___x_1105_; lean_object* v___x_1106_; 
v___x_1104_ = lean_string_append(v___x_1101_, v___y_1103_);
lean_dec_ref(v___y_1103_);
v___x_1105_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__5));
v___x_1106_ = lean_string_append(v___x_1104_, v___x_1105_);
v___y_1055_ = v___x_1106_;
goto v___jp_1054_;
}
}
else
{
lean_object* v_val_1118_; lean_object* v_val_1119_; uint8_t v___x_1120_; 
v_val_1118_ = lean_ctor_get(v_lowerBound_1049_, 0);
lean_inc(v_val_1118_);
lean_dec_ref_known(v_lowerBound_1049_, 1);
v_val_1119_ = lean_ctor_get(v_upperBound_1050_, 0);
lean_inc(v_val_1119_);
lean_dec_ref_known(v_upperBound_1050_, 1);
v___x_1120_ = lean_int_dec_lt(v_val_1119_, v_val_1118_);
if (v___x_1120_ == 0)
{
uint8_t v___x_1121_; 
v___x_1121_ = lean_int_dec_eq(v_val_1118_, v_val_1119_);
if (v___x_1121_ == 0)
{
lean_object* v___x_1122_; lean_object* v___y_1124_; lean_object* v_intZero_1139_; uint8_t v_isNeg_1140_; 
v___x_1122_ = ((lean_object*)(l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0___closed__1));
v_intZero_1139_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17);
v_isNeg_1140_ = lean_int_dec_lt(v_val_1118_, v_intZero_1139_);
if (v_isNeg_1140_ == 0)
{
lean_object* v_a_1141_; lean_object* v___x_1142_; 
v_a_1141_ = lean_nat_abs(v_val_1118_);
lean_dec(v_val_1118_);
v___x_1142_ = l_Nat_reprFast(v_a_1141_);
v___y_1124_ = v___x_1142_;
goto v___jp_1123_;
}
else
{
lean_object* v_abs_1143_; lean_object* v_one_1144_; lean_object* v_a_1145_; lean_object* v___x_1146_; lean_object* v___x_1147_; lean_object* v___x_1148_; lean_object* v___x_1149_; 
v_abs_1143_ = lean_nat_abs(v_val_1118_);
lean_dec(v_val_1118_);
v_one_1144_ = lean_unsigned_to_nat(1u);
v_a_1145_ = lean_nat_sub(v_abs_1143_, v_one_1144_);
lean_dec(v_abs_1143_);
v___x_1146_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__4));
v___x_1147_ = lean_nat_add(v_a_1145_, v_one_1144_);
lean_dec(v_a_1145_);
v___x_1148_ = l_Nat_reprFast(v___x_1147_);
v___x_1149_ = lean_string_append(v___x_1146_, v___x_1148_);
lean_dec_ref(v___x_1148_);
v___y_1124_ = v___x_1149_;
goto v___jp_1123_;
}
v___jp_1123_:
{
lean_object* v___x_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; lean_object* v_intZero_1128_; uint8_t v_isNeg_1129_; 
v___x_1125_ = lean_string_append(v___x_1122_, v___y_1124_);
lean_dec_ref(v___y_1124_);
v___x_1126_ = ((lean_object*)(l_List_foldl___at___00List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0_spec__0___closed__0));
v___x_1127_ = lean_string_append(v___x_1125_, v___x_1126_);
v_intZero_1128_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17);
v_isNeg_1129_ = lean_int_dec_lt(v_val_1119_, v_intZero_1128_);
if (v_isNeg_1129_ == 0)
{
lean_object* v_a_1130_; lean_object* v___x_1131_; 
v_a_1130_ = lean_nat_abs(v_val_1119_);
lean_dec(v_val_1119_);
v___x_1131_ = l_Nat_reprFast(v_a_1130_);
v___y_1076_ = v___x_1127_;
v___y_1077_ = v___x_1131_;
goto v___jp_1075_;
}
else
{
lean_object* v_abs_1132_; lean_object* v_one_1133_; lean_object* v_a_1134_; lean_object* v___x_1135_; lean_object* v___x_1136_; lean_object* v___x_1137_; lean_object* v___x_1138_; 
v_abs_1132_ = lean_nat_abs(v_val_1119_);
lean_dec(v_val_1119_);
v_one_1133_ = lean_unsigned_to_nat(1u);
v_a_1134_ = lean_nat_sub(v_abs_1132_, v_one_1133_);
lean_dec(v_abs_1132_);
v___x_1135_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__4));
v___x_1136_ = lean_nat_add(v_a_1134_, v_one_1133_);
lean_dec(v_a_1134_);
v___x_1137_ = l_Nat_reprFast(v___x_1136_);
v___x_1138_ = lean_string_append(v___x_1135_, v___x_1137_);
lean_dec_ref(v___x_1137_);
v___y_1076_ = v___x_1127_;
v___y_1077_ = v___x_1138_;
goto v___jp_1075_;
}
}
}
else
{
lean_object* v___x_1150_; lean_object* v___y_1152_; lean_object* v_intZero_1156_; uint8_t v_isNeg_1157_; 
lean_dec(v_val_1119_);
v___x_1150_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__6));
v_intZero_1156_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17);
v_isNeg_1157_ = lean_int_dec_lt(v_val_1118_, v_intZero_1156_);
if (v_isNeg_1157_ == 0)
{
lean_object* v_a_1158_; lean_object* v___x_1159_; 
v_a_1158_ = lean_nat_abs(v_val_1118_);
lean_dec(v_val_1118_);
v___x_1159_ = l_Nat_reprFast(v_a_1158_);
v___y_1152_ = v___x_1159_;
goto v___jp_1151_;
}
else
{
lean_object* v_abs_1160_; lean_object* v_one_1161_; lean_object* v_a_1162_; lean_object* v___x_1163_; lean_object* v___x_1164_; lean_object* v___x_1165_; lean_object* v___x_1166_; 
v_abs_1160_ = lean_nat_abs(v_val_1118_);
lean_dec(v_val_1118_);
v_one_1161_ = lean_unsigned_to_nat(1u);
v_a_1162_ = lean_nat_sub(v_abs_1160_, v_one_1161_);
lean_dec(v_abs_1160_);
v___x_1163_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__4));
v___x_1164_ = lean_nat_add(v_a_1162_, v_one_1161_);
lean_dec(v_a_1162_);
v___x_1165_ = l_Nat_reprFast(v___x_1164_);
v___x_1166_ = lean_string_append(v___x_1163_, v___x_1165_);
lean_dec_ref(v___x_1165_);
v___y_1152_ = v___x_1166_;
goto v___jp_1151_;
}
v___jp_1151_:
{
lean_object* v___x_1153_; lean_object* v___x_1154_; lean_object* v___x_1155_; 
v___x_1153_ = lean_string_append(v___x_1150_, v___y_1152_);
lean_dec_ref(v___y_1152_);
v___x_1154_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__7));
v___x_1155_ = lean_string_append(v___x_1153_, v___x_1154_);
v___y_1055_ = v___x_1155_;
goto v___jp_1054_;
}
}
}
else
{
lean_object* v___x_1167_; 
lean_dec(v_val_1119_);
lean_dec(v_val_1118_);
v___x_1167_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__8));
v___y_1055_ = v___x_1167_;
goto v___jp_1054_;
}
}
}
v___jp_1054_:
{
lean_object* v___x_1056_; lean_object* v___x_1057_; lean_object* v___x_1058_; lean_object* v___x_1059_; lean_object* v___x_1060_; lean_object* v___x_1061_; lean_object* v___x_1062_; lean_object* v___x_1063_; lean_object* v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; lean_object* v___x_1067_; lean_object* v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; 
v___x_1056_ = lean_string_append(v___x_1053_, v___y_1055_);
lean_dec_ref(v___y_1055_);
v___x_1057_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__11));
v___x_1058_ = lean_string_append(v___x_1056_, v___x_1057_);
v___x_1059_ = l_Int_repr(v_a_1045_);
lean_dec(v_a_1045_);
v___x_1060_ = lean_string_append(v___x_1058_, v___x_1059_);
lean_dec_ref(v___x_1059_);
v___x_1061_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__12));
v___x_1062_ = lean_string_append(v___x_1060_, v___x_1061_);
v___x_1063_ = l_Int_repr(v_b_1047_);
lean_dec(v_b_1047_);
v___x_1064_ = lean_string_append(v___x_1062_, v___x_1063_);
lean_dec_ref(v___x_1063_);
v___x_1065_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__13));
v___x_1066_ = lean_string_append(v___x_1064_, v___x_1065_);
v___x_1067_ = l_Lean_Elab_Tactic_Omega_Justification_toString(v_s_1041_, v_x_1043_, v_j_1046_);
v___x_1068_ = l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet(v___x_1067_);
v___x_1069_ = lean_string_append(v___x_1066_, v___x_1068_);
lean_dec_ref(v___x_1068_);
v___x_1070_ = ((lean_object*)(l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__0));
v___x_1071_ = lean_string_append(v___x_1069_, v___x_1070_);
v___x_1072_ = l_Lean_Elab_Tactic_Omega_Justification_toString(v_t_1042_, v_y_1044_, v_k_1048_);
v___x_1073_ = l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet(v___x_1072_);
v___x_1074_ = lean_string_append(v___x_1071_, v___x_1073_);
lean_dec_ref(v___x_1073_);
return v___x_1074_;
}
v___jp_1075_:
{
lean_object* v___x_1078_; lean_object* v___x_1079_; lean_object* v___x_1080_; 
v___x_1078_ = lean_string_append(v___y_1076_, v___y_1077_);
lean_dec_ref(v___y_1077_);
v___x_1079_ = ((lean_object*)(l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0___closed__2));
v___x_1080_ = lean_string_append(v___x_1078_, v___x_1079_);
v___y_1055_ = v___x_1080_;
goto v___jp_1054_;
}
}
default: 
{
lean_object* v_m_1168_; lean_object* v_r_1169_; lean_object* v_i_1170_; lean_object* v_x_1171_; lean_object* v_j_1172_; lean_object* v_lowerBound_1173_; lean_object* v_upperBound_1174_; lean_object* v___x_1175_; lean_object* v___x_1176_; lean_object* v___x_1177_; lean_object* v___y_1179_; lean_object* v___y_1196_; lean_object* v___y_1197_; 
v_m_1168_ = lean_ctor_get(v_x_694_, 0);
lean_inc(v_m_1168_);
v_r_1169_ = lean_ctor_get(v_x_694_, 1);
lean_inc(v_r_1169_);
v_i_1170_ = lean_ctor_get(v_x_694_, 2);
lean_inc(v_i_1170_);
v_x_1171_ = lean_ctor_get(v_x_694_, 3);
lean_inc(v_x_1171_);
v_j_1172_ = lean_ctor_get(v_x_694_, 4);
lean_inc_ref(v_j_1172_);
lean_dec_ref_known(v_x_694_, 5);
v_lowerBound_1173_ = lean_ctor_get(v_s_692_, 0);
lean_inc(v_lowerBound_1173_);
v_upperBound_1174_ = lean_ctor_get(v_s_692_, 1);
lean_inc(v_upperBound_1174_);
lean_dec_ref(v_s_692_);
v___x_1175_ = l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0(v_x_693_);
lean_dec(v_x_693_);
v___x_1176_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__0));
v___x_1177_ = lean_string_append(v___x_1175_, v___x_1176_);
if (lean_obj_tag(v_lowerBound_1173_) == 0)
{
if (lean_obj_tag(v_upperBound_1174_) == 0)
{
lean_object* v___x_1201_; 
v___x_1201_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__2));
v___y_1179_ = v___x_1201_;
goto v___jp_1178_;
}
else
{
lean_object* v_val_1202_; lean_object* v___x_1203_; lean_object* v___y_1205_; lean_object* v_intZero_1209_; uint8_t v_isNeg_1210_; 
v_val_1202_ = lean_ctor_get(v_upperBound_1174_, 0);
lean_inc(v_val_1202_);
lean_dec_ref_known(v_upperBound_1174_, 1);
v___x_1203_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__3));
v_intZero_1209_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17);
v_isNeg_1210_ = lean_int_dec_lt(v_val_1202_, v_intZero_1209_);
if (v_isNeg_1210_ == 0)
{
lean_object* v_a_1211_; lean_object* v___x_1212_; 
v_a_1211_ = lean_nat_abs(v_val_1202_);
lean_dec(v_val_1202_);
v___x_1212_ = l_Nat_reprFast(v_a_1211_);
v___y_1205_ = v___x_1212_;
goto v___jp_1204_;
}
else
{
lean_object* v_abs_1213_; lean_object* v_one_1214_; lean_object* v_a_1215_; lean_object* v___x_1216_; lean_object* v___x_1217_; lean_object* v___x_1218_; lean_object* v___x_1219_; 
v_abs_1213_ = lean_nat_abs(v_val_1202_);
lean_dec(v_val_1202_);
v_one_1214_ = lean_unsigned_to_nat(1u);
v_a_1215_ = lean_nat_sub(v_abs_1213_, v_one_1214_);
lean_dec(v_abs_1213_);
v___x_1216_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__4));
v___x_1217_ = lean_nat_add(v_a_1215_, v_one_1214_);
lean_dec(v_a_1215_);
v___x_1218_ = l_Nat_reprFast(v___x_1217_);
v___x_1219_ = lean_string_append(v___x_1216_, v___x_1218_);
lean_dec_ref(v___x_1218_);
v___y_1205_ = v___x_1219_;
goto v___jp_1204_;
}
v___jp_1204_:
{
lean_object* v___x_1206_; lean_object* v___x_1207_; lean_object* v___x_1208_; 
v___x_1206_ = lean_string_append(v___x_1203_, v___y_1205_);
lean_dec_ref(v___y_1205_);
v___x_1207_ = ((lean_object*)(l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0___closed__2));
v___x_1208_ = lean_string_append(v___x_1206_, v___x_1207_);
v___y_1179_ = v___x_1208_;
goto v___jp_1178_;
}
}
}
else
{
if (lean_obj_tag(v_upperBound_1174_) == 0)
{
lean_object* v_val_1220_; lean_object* v___x_1221_; lean_object* v___y_1223_; lean_object* v_intZero_1227_; uint8_t v_isNeg_1228_; 
v_val_1220_ = lean_ctor_get(v_lowerBound_1173_, 0);
lean_inc(v_val_1220_);
lean_dec_ref_known(v_lowerBound_1173_, 1);
v___x_1221_ = ((lean_object*)(l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0___closed__1));
v_intZero_1227_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17);
v_isNeg_1228_ = lean_int_dec_lt(v_val_1220_, v_intZero_1227_);
if (v_isNeg_1228_ == 0)
{
lean_object* v_a_1229_; lean_object* v___x_1230_; 
v_a_1229_ = lean_nat_abs(v_val_1220_);
lean_dec(v_val_1220_);
v___x_1230_ = l_Nat_reprFast(v_a_1229_);
v___y_1223_ = v___x_1230_;
goto v___jp_1222_;
}
else
{
lean_object* v_abs_1231_; lean_object* v_one_1232_; lean_object* v_a_1233_; lean_object* v___x_1234_; lean_object* v___x_1235_; lean_object* v___x_1236_; lean_object* v___x_1237_; 
v_abs_1231_ = lean_nat_abs(v_val_1220_);
lean_dec(v_val_1220_);
v_one_1232_ = lean_unsigned_to_nat(1u);
v_a_1233_ = lean_nat_sub(v_abs_1231_, v_one_1232_);
lean_dec(v_abs_1231_);
v___x_1234_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__4));
v___x_1235_ = lean_nat_add(v_a_1233_, v_one_1232_);
lean_dec(v_a_1233_);
v___x_1236_ = l_Nat_reprFast(v___x_1235_);
v___x_1237_ = lean_string_append(v___x_1234_, v___x_1236_);
lean_dec_ref(v___x_1236_);
v___y_1223_ = v___x_1237_;
goto v___jp_1222_;
}
v___jp_1222_:
{
lean_object* v___x_1224_; lean_object* v___x_1225_; lean_object* v___x_1226_; 
v___x_1224_ = lean_string_append(v___x_1221_, v___y_1223_);
lean_dec_ref(v___y_1223_);
v___x_1225_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__5));
v___x_1226_ = lean_string_append(v___x_1224_, v___x_1225_);
v___y_1179_ = v___x_1226_;
goto v___jp_1178_;
}
}
else
{
lean_object* v_val_1238_; lean_object* v_val_1239_; uint8_t v___x_1240_; 
v_val_1238_ = lean_ctor_get(v_lowerBound_1173_, 0);
lean_inc(v_val_1238_);
lean_dec_ref_known(v_lowerBound_1173_, 1);
v_val_1239_ = lean_ctor_get(v_upperBound_1174_, 0);
lean_inc(v_val_1239_);
lean_dec_ref_known(v_upperBound_1174_, 1);
v___x_1240_ = lean_int_dec_lt(v_val_1239_, v_val_1238_);
if (v___x_1240_ == 0)
{
uint8_t v___x_1241_; 
v___x_1241_ = lean_int_dec_eq(v_val_1238_, v_val_1239_);
if (v___x_1241_ == 0)
{
lean_object* v___x_1242_; lean_object* v___y_1244_; lean_object* v_intZero_1259_; uint8_t v_isNeg_1260_; 
v___x_1242_ = ((lean_object*)(l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0___closed__1));
v_intZero_1259_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17);
v_isNeg_1260_ = lean_int_dec_lt(v_val_1238_, v_intZero_1259_);
if (v_isNeg_1260_ == 0)
{
lean_object* v_a_1261_; lean_object* v___x_1262_; 
v_a_1261_ = lean_nat_abs(v_val_1238_);
lean_dec(v_val_1238_);
v___x_1262_ = l_Nat_reprFast(v_a_1261_);
v___y_1244_ = v___x_1262_;
goto v___jp_1243_;
}
else
{
lean_object* v_abs_1263_; lean_object* v_one_1264_; lean_object* v_a_1265_; lean_object* v___x_1266_; lean_object* v___x_1267_; lean_object* v___x_1268_; lean_object* v___x_1269_; 
v_abs_1263_ = lean_nat_abs(v_val_1238_);
lean_dec(v_val_1238_);
v_one_1264_ = lean_unsigned_to_nat(1u);
v_a_1265_ = lean_nat_sub(v_abs_1263_, v_one_1264_);
lean_dec(v_abs_1263_);
v___x_1266_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__4));
v___x_1267_ = lean_nat_add(v_a_1265_, v_one_1264_);
lean_dec(v_a_1265_);
v___x_1268_ = l_Nat_reprFast(v___x_1267_);
v___x_1269_ = lean_string_append(v___x_1266_, v___x_1268_);
lean_dec_ref(v___x_1268_);
v___y_1244_ = v___x_1269_;
goto v___jp_1243_;
}
v___jp_1243_:
{
lean_object* v___x_1245_; lean_object* v___x_1246_; lean_object* v___x_1247_; lean_object* v_intZero_1248_; uint8_t v_isNeg_1249_; 
v___x_1245_ = lean_string_append(v___x_1242_, v___y_1244_);
lean_dec_ref(v___y_1244_);
v___x_1246_ = ((lean_object*)(l_List_foldl___at___00List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0_spec__0___closed__0));
v___x_1247_ = lean_string_append(v___x_1245_, v___x_1246_);
v_intZero_1248_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17);
v_isNeg_1249_ = lean_int_dec_lt(v_val_1239_, v_intZero_1248_);
if (v_isNeg_1249_ == 0)
{
lean_object* v_a_1250_; lean_object* v___x_1251_; 
v_a_1250_ = lean_nat_abs(v_val_1239_);
lean_dec(v_val_1239_);
v___x_1251_ = l_Nat_reprFast(v_a_1250_);
v___y_1196_ = v___x_1247_;
v___y_1197_ = v___x_1251_;
goto v___jp_1195_;
}
else
{
lean_object* v_abs_1252_; lean_object* v_one_1253_; lean_object* v_a_1254_; lean_object* v___x_1255_; lean_object* v___x_1256_; lean_object* v___x_1257_; lean_object* v___x_1258_; 
v_abs_1252_ = lean_nat_abs(v_val_1239_);
lean_dec(v_val_1239_);
v_one_1253_ = lean_unsigned_to_nat(1u);
v_a_1254_ = lean_nat_sub(v_abs_1252_, v_one_1253_);
lean_dec(v_abs_1252_);
v___x_1255_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__4));
v___x_1256_ = lean_nat_add(v_a_1254_, v_one_1253_);
lean_dec(v_a_1254_);
v___x_1257_ = l_Nat_reprFast(v___x_1256_);
v___x_1258_ = lean_string_append(v___x_1255_, v___x_1257_);
lean_dec_ref(v___x_1257_);
v___y_1196_ = v___x_1247_;
v___y_1197_ = v___x_1258_;
goto v___jp_1195_;
}
}
}
else
{
lean_object* v___x_1270_; lean_object* v___y_1272_; lean_object* v_intZero_1276_; uint8_t v_isNeg_1277_; 
lean_dec(v_val_1239_);
v___x_1270_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__6));
v_intZero_1276_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17);
v_isNeg_1277_ = lean_int_dec_lt(v_val_1238_, v_intZero_1276_);
if (v_isNeg_1277_ == 0)
{
lean_object* v_a_1278_; lean_object* v___x_1279_; 
v_a_1278_ = lean_nat_abs(v_val_1238_);
lean_dec(v_val_1238_);
v___x_1279_ = l_Nat_reprFast(v_a_1278_);
v___y_1272_ = v___x_1279_;
goto v___jp_1271_;
}
else
{
lean_object* v_abs_1280_; lean_object* v_one_1281_; lean_object* v_a_1282_; lean_object* v___x_1283_; lean_object* v___x_1284_; lean_object* v___x_1285_; lean_object* v___x_1286_; 
v_abs_1280_ = lean_nat_abs(v_val_1238_);
lean_dec(v_val_1238_);
v_one_1281_ = lean_unsigned_to_nat(1u);
v_a_1282_ = lean_nat_sub(v_abs_1280_, v_one_1281_);
lean_dec(v_abs_1280_);
v___x_1283_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__4));
v___x_1284_ = lean_nat_add(v_a_1282_, v_one_1281_);
lean_dec(v_a_1282_);
v___x_1285_ = l_Nat_reprFast(v___x_1284_);
v___x_1286_ = lean_string_append(v___x_1283_, v___x_1285_);
lean_dec_ref(v___x_1285_);
v___y_1272_ = v___x_1286_;
goto v___jp_1271_;
}
v___jp_1271_:
{
lean_object* v___x_1273_; lean_object* v___x_1274_; lean_object* v___x_1275_; 
v___x_1273_ = lean_string_append(v___x_1270_, v___y_1272_);
lean_dec_ref(v___y_1272_);
v___x_1274_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__7));
v___x_1275_ = lean_string_append(v___x_1273_, v___x_1274_);
v___y_1179_ = v___x_1275_;
goto v___jp_1178_;
}
}
}
else
{
lean_object* v___x_1287_; 
lean_dec(v_val_1239_);
lean_dec(v_val_1238_);
v___x_1287_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__8));
v___y_1179_ = v___x_1287_;
goto v___jp_1178_;
}
}
}
v___jp_1178_:
{
lean_object* v___x_1180_; lean_object* v___x_1181_; lean_object* v___x_1182_; lean_object* v___x_1183_; lean_object* v___x_1184_; lean_object* v___x_1185_; lean_object* v___x_1186_; lean_object* v___x_1187_; lean_object* v___x_1188_; lean_object* v___x_1189_; lean_object* v___x_1190_; lean_object* v___x_1191_; lean_object* v___x_1192_; lean_object* v___x_1193_; lean_object* v___x_1194_; 
v___x_1180_ = lean_string_append(v___x_1177_, v___y_1179_);
lean_dec_ref(v___y_1179_);
v___x_1181_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__14));
v___x_1182_ = lean_string_append(v___x_1180_, v___x_1181_);
v___x_1183_ = l_Nat_reprFast(v_m_1168_);
v___x_1184_ = lean_string_append(v___x_1182_, v___x_1183_);
lean_dec_ref(v___x_1183_);
v___x_1185_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__15));
v___x_1186_ = lean_string_append(v___x_1184_, v___x_1185_);
v___x_1187_ = l_Nat_reprFast(v_i_1170_);
v___x_1188_ = lean_string_append(v___x_1186_, v___x_1187_);
lean_dec_ref(v___x_1187_);
v___x_1189_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__16));
v___x_1190_ = lean_string_append(v___x_1188_, v___x_1189_);
v___x_1191_ = l_Lean_Omega_Constraint_exact(v_r_1169_);
v___x_1192_ = l_Lean_Elab_Tactic_Omega_Justification_toString(v___x_1191_, v_x_1171_, v_j_1172_);
v___x_1193_ = l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet(v___x_1192_);
v___x_1194_ = lean_string_append(v___x_1190_, v___x_1193_);
lean_dec_ref(v___x_1193_);
return v___x_1194_;
}
v___jp_1195_:
{
lean_object* v___x_1198_; lean_object* v___x_1199_; lean_object* v___x_1200_; 
v___x_1198_ = lean_string_append(v___y_1196_, v___y_1197_);
lean_dec_ref(v___y_1197_);
v___x_1199_ = ((lean_object*)(l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0___closed__2));
v___x_1200_ = lean_string_append(v___x_1198_, v___x_1199_);
v___y_1179_ = v___x_1200_;
goto v___jp_1178_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_instToString(lean_object* v_s_1288_, lean_object* v_x_1289_){
_start:
{
lean_object* v___x_1290_; 
v___x_1290_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Omega_Justification_toString), 3, 2);
lean_closure_set(v___x_1290_, 0, v_s_1288_);
lean_closure_set(v___x_1290_, 1, v_x_1289_);
return v___x_1290_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lean_Elab_Tactic_Omega_Justification_tidyProof_spec__0(lean_object* v_nilFn_1291_, lean_object* v_consFn_1292_, lean_object* v_x_1293_){
_start:
{
if (lean_obj_tag(v_x_1293_) == 0)
{
lean_dec_ref(v_consFn_1292_);
lean_inc_ref(v_nilFn_1291_);
return v_nilFn_1291_;
}
else
{
lean_object* v_head_1294_; lean_object* v_tail_1295_; lean_object* v___y_1297_; lean_object* v___x_1300_; uint8_t v___x_1301_; 
v_head_1294_ = lean_ctor_get(v_x_1293_, 0);
v_tail_1295_ = lean_ctor_get(v_x_1293_, 1);
v___x_1300_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17);
v___x_1301_ = lean_int_dec_le(v___x_1300_, v_head_1294_);
if (v___x_1301_ == 0)
{
lean_object* v___x_1302_; lean_object* v___x_1303_; lean_object* v___x_1304_; lean_object* v___x_1305_; lean_object* v___x_1306_; lean_object* v___x_1307_; lean_object* v___x_1308_; 
v___x_1302_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__23, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__23_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__23);
v___x_1303_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__6, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__6_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__6);
v___x_1304_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__26, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__26_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__26);
v___x_1305_ = lean_int_neg(v_head_1294_);
v___x_1306_ = l_Int_toNat(v___x_1305_);
lean_dec(v___x_1305_);
v___x_1307_ = l_Lean_instToExprInt_mkNat(v___x_1306_);
v___x_1308_ = l_Lean_mkApp3(v___x_1302_, v___x_1303_, v___x_1304_, v___x_1307_);
v___y_1297_ = v___x_1308_;
goto v___jp_1296_;
}
else
{
lean_object* v___x_1309_; lean_object* v___x_1310_; 
v___x_1309_ = l_Int_toNat(v_head_1294_);
v___x_1310_ = l_Lean_instToExprInt_mkNat(v___x_1309_);
v___y_1297_ = v___x_1310_;
goto v___jp_1296_;
}
v___jp_1296_:
{
lean_object* v___x_1298_; lean_object* v___x_1299_; 
lean_inc_ref(v_consFn_1292_);
v___x_1298_ = l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lean_Elab_Tactic_Omega_Justification_tidyProof_spec__0(v_nilFn_1291_, v_consFn_1292_, v_tail_1295_);
v___x_1299_ = l_Lean_mkAppB(v_consFn_1292_, v___y_1297_, v___x_1298_);
return v___x_1299_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lean_Elab_Tactic_Omega_Justification_tidyProof_spec__0___boxed(lean_object* v_nilFn_1311_, lean_object* v_consFn_1312_, lean_object* v_x_1313_){
_start:
{
lean_object* v_res_1314_; 
v_res_1314_ = l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lean_Elab_Tactic_Omega_Justification_tidyProof_spec__0(v_nilFn_1311_, v_consFn_1312_, v_x_1313_);
lean_dec(v_x_1313_);
lean_dec_ref(v_nilFn_1311_);
return v_res_1314_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_Justification_tidyProof___closed__2(void){
_start:
{
lean_object* v___x_1320_; lean_object* v___x_1321_; lean_object* v___x_1322_; 
v___x_1320_ = lean_box(0);
v___x_1321_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_tidyProof___closed__1));
v___x_1322_ = l_Lean_Expr_const___override(v___x_1321_, v___x_1320_);
return v___x_1322_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_tidyProof(lean_object* v_s_1323_, lean_object* v_x_1324_, lean_object* v_v_1325_, lean_object* v_prf_1326_){
_start:
{
lean_object* v___x_1327_; lean_object* v___y_1329_; lean_object* v_lowerBound_1334_; lean_object* v_upperBound_1335_; lean_object* v___x_1336_; lean_object* v_type_1337_; lean_object* v___y_1339_; lean_object* v___y_1340_; lean_object* v___y_1341_; lean_object* v___y_1345_; 
v___x_1327_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_Justification_tidyProof___closed__2, &l_Lean_Elab_Tactic_Omega_Justification_tidyProof___closed__2_once, _init_l_Lean_Elab_Tactic_Omega_Justification_tidyProof___closed__2);
v_lowerBound_1334_ = lean_ctor_get(v_s_1323_, 0);
v_upperBound_1335_ = lean_ctor_get(v_s_1323_, 1);
v___x_1336_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__2, &l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__2_once, _init_l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__2);
v_type_1337_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__6, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__6_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__6);
if (lean_obj_tag(v_lowerBound_1334_) == 0)
{
lean_object* v___x_1361_; 
v___x_1361_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__7, &l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__7_once, _init_l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__7);
v___y_1345_ = v___x_1361_;
goto v___jp_1344_;
}
else
{
lean_object* v_val_1362_; lean_object* v___x_1363_; lean_object* v___y_1365_; lean_object* v___x_1367_; uint8_t v___x_1368_; 
v_val_1362_ = lean_ctor_get(v_lowerBound_1334_, 0);
v___x_1363_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__10, &l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__10_once, _init_l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__10);
v___x_1367_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17);
v___x_1368_ = lean_int_dec_le(v___x_1367_, v_val_1362_);
if (v___x_1368_ == 0)
{
lean_object* v___x_1369_; lean_object* v___x_1370_; lean_object* v___x_1371_; lean_object* v___x_1372_; lean_object* v___x_1373_; lean_object* v___x_1374_; 
v___x_1369_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__23, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__23_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__23);
v___x_1370_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__26, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__26_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__26);
v___x_1371_ = lean_int_neg(v_val_1362_);
v___x_1372_ = l_Int_toNat(v___x_1371_);
lean_dec(v___x_1371_);
v___x_1373_ = l_Lean_instToExprInt_mkNat(v___x_1372_);
v___x_1374_ = l_Lean_mkApp3(v___x_1369_, v_type_1337_, v___x_1370_, v___x_1373_);
v___y_1365_ = v___x_1374_;
goto v___jp_1364_;
}
else
{
lean_object* v___x_1375_; lean_object* v___x_1376_; 
v___x_1375_ = l_Int_toNat(v_val_1362_);
v___x_1376_ = l_Lean_instToExprInt_mkNat(v___x_1375_);
v___y_1365_ = v___x_1376_;
goto v___jp_1364_;
}
v___jp_1364_:
{
lean_object* v___x_1366_; 
v___x_1366_ = l_Lean_mkAppB(v___x_1363_, v_type_1337_, v___y_1365_);
v___y_1345_ = v___x_1366_;
goto v___jp_1344_;
}
}
v___jp_1328_:
{
lean_object* v_nil_1330_; lean_object* v_cons_1331_; lean_object* v___x_1332_; lean_object* v___x_1333_; 
v_nil_1330_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__12, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__12_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__12);
v_cons_1331_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__16, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__16_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__16);
v___x_1332_ = l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lean_Elab_Tactic_Omega_Justification_tidyProof_spec__0(v_nil_1330_, v_cons_1331_, v_x_1324_);
v___x_1333_ = l_Lean_mkApp4(v___x_1327_, v___y_1329_, v___x_1332_, v_v_1325_, v_prf_1326_);
return v___x_1333_;
}
v___jp_1338_:
{
lean_object* v___x_1342_; lean_object* v___x_1343_; 
lean_inc_ref(v___y_1340_);
v___x_1342_ = l_Lean_mkAppB(v___y_1340_, v_type_1337_, v___y_1341_);
v___x_1343_ = l_Lean_Expr_app___override(v___y_1339_, v___x_1342_);
v___y_1329_ = v___x_1343_;
goto v___jp_1328_;
}
v___jp_1344_:
{
lean_object* v___x_1346_; 
v___x_1346_ = l_Lean_Expr_app___override(v___x_1336_, v___y_1345_);
if (lean_obj_tag(v_upperBound_1335_) == 0)
{
lean_object* v___x_1347_; lean_object* v___x_1348_; 
v___x_1347_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__7, &l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__7_once, _init_l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__7);
v___x_1348_ = l_Lean_Expr_app___override(v___x_1346_, v___x_1347_);
v___y_1329_ = v___x_1348_;
goto v___jp_1328_;
}
else
{
lean_object* v_val_1349_; lean_object* v___x_1350_; lean_object* v___x_1351_; uint8_t v___x_1352_; 
v_val_1349_ = lean_ctor_get(v_upperBound_1335_, 0);
v___x_1350_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__10, &l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__10_once, _init_l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__10);
v___x_1351_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17);
v___x_1352_ = lean_int_dec_le(v___x_1351_, v_val_1349_);
if (v___x_1352_ == 0)
{
lean_object* v___x_1353_; lean_object* v___x_1354_; lean_object* v___x_1355_; lean_object* v___x_1356_; lean_object* v___x_1357_; lean_object* v___x_1358_; 
v___x_1353_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__23, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__23_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__23);
v___x_1354_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__26, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__26_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__26);
v___x_1355_ = lean_int_neg(v_val_1349_);
v___x_1356_ = l_Int_toNat(v___x_1355_);
lean_dec(v___x_1355_);
v___x_1357_ = l_Lean_instToExprInt_mkNat(v___x_1356_);
v___x_1358_ = l_Lean_mkApp3(v___x_1353_, v_type_1337_, v___x_1354_, v___x_1357_);
v___y_1339_ = v___x_1346_;
v___y_1340_ = v___x_1350_;
v___y_1341_ = v___x_1358_;
goto v___jp_1338_;
}
else
{
lean_object* v___x_1359_; lean_object* v___x_1360_; 
v___x_1359_ = l_Int_toNat(v_val_1349_);
v___x_1360_ = l_Lean_instToExprInt_mkNat(v___x_1359_);
v___y_1339_ = v___x_1346_;
v___y_1340_ = v___x_1350_;
v___y_1341_ = v___x_1360_;
goto v___jp_1338_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_tidyProof___boxed(lean_object* v_s_1377_, lean_object* v_x_1378_, lean_object* v_v_1379_, lean_object* v_prf_1380_){
_start:
{
lean_object* v_res_1381_; 
v_res_1381_ = l_Lean_Elab_Tactic_Omega_Justification_tidyProof(v_s_1377_, v_x_1378_, v_v_1379_, v_prf_1380_);
lean_dec(v_x_1378_);
lean_dec_ref(v_s_1377_);
return v_res_1381_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_Justification_combineProof___closed__2(void){
_start:
{
lean_object* v___x_1388_; lean_object* v___x_1389_; lean_object* v___x_1390_; 
v___x_1388_ = lean_box(0);
v___x_1389_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_combineProof___closed__1));
v___x_1390_ = l_Lean_Expr_const___override(v___x_1389_, v___x_1388_);
return v___x_1390_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_combineProof(lean_object* v_s_1391_, lean_object* v_t_1392_, lean_object* v_x_1393_, lean_object* v_v_1394_, lean_object* v_ps_1395_, lean_object* v_pt_1396_){
_start:
{
lean_object* v___x_1397_; lean_object* v___x_1398_; lean_object* v___y_1400_; lean_object* v___y_1401_; lean_object* v___y_1407_; lean_object* v___y_1408_; lean_object* v___y_1409_; lean_object* v___y_1410_; lean_object* v___y_1411_; lean_object* v___y_1415_; lean_object* v___y_1416_; lean_object* v___y_1417_; lean_object* v___y_1418_; lean_object* v___y_1419_; lean_object* v___y_1440_; lean_object* v___y_1441_; lean_object* v___y_1442_; lean_object* v___y_1443_; lean_object* v___y_1444_; lean_object* v___y_1445_; lean_object* v___y_1448_; lean_object* v_lowerBound_1466_; lean_object* v_upperBound_1467_; lean_object* v___x_1468_; lean_object* v_type_1469_; lean_object* v___y_1471_; lean_object* v___y_1472_; lean_object* v___y_1473_; lean_object* v___y_1477_; 
v___x_1397_ = lean_box(0);
v___x_1398_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_Justification_combineProof___closed__2, &l_Lean_Elab_Tactic_Omega_Justification_combineProof___closed__2_once, _init_l_Lean_Elab_Tactic_Omega_Justification_combineProof___closed__2);
v_lowerBound_1466_ = lean_ctor_get(v_s_1391_, 0);
v_upperBound_1467_ = lean_ctor_get(v_s_1391_, 1);
v___x_1468_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__2, &l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__2_once, _init_l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__2);
v_type_1469_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__6, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__6_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__6);
if (lean_obj_tag(v_lowerBound_1466_) == 0)
{
lean_object* v___x_1493_; 
v___x_1493_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__7, &l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__7_once, _init_l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__7);
v___y_1477_ = v___x_1493_;
goto v___jp_1476_;
}
else
{
lean_object* v_val_1494_; lean_object* v___x_1495_; lean_object* v___y_1497_; lean_object* v___x_1499_; uint8_t v___x_1500_; 
v_val_1494_ = lean_ctor_get(v_lowerBound_1466_, 0);
v___x_1495_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__10, &l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__10_once, _init_l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__10);
v___x_1499_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17);
v___x_1500_ = lean_int_dec_le(v___x_1499_, v_val_1494_);
if (v___x_1500_ == 0)
{
lean_object* v___x_1501_; lean_object* v___x_1502_; lean_object* v___x_1503_; lean_object* v___x_1504_; lean_object* v___x_1505_; lean_object* v___x_1506_; 
v___x_1501_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__23, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__23_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__23);
v___x_1502_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__26, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__26_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__26);
v___x_1503_ = lean_int_neg(v_val_1494_);
v___x_1504_ = l_Int_toNat(v___x_1503_);
lean_dec(v___x_1503_);
v___x_1505_ = l_Lean_instToExprInt_mkNat(v___x_1504_);
v___x_1506_ = l_Lean_mkApp3(v___x_1501_, v_type_1469_, v___x_1502_, v___x_1505_);
v___y_1497_ = v___x_1506_;
goto v___jp_1496_;
}
else
{
lean_object* v___x_1507_; lean_object* v___x_1508_; 
v___x_1507_ = l_Int_toNat(v_val_1494_);
v___x_1508_ = l_Lean_instToExprInt_mkNat(v___x_1507_);
v___y_1497_ = v___x_1508_;
goto v___jp_1496_;
}
v___jp_1496_:
{
lean_object* v___x_1498_; 
v___x_1498_ = l_Lean_mkAppB(v___x_1495_, v_type_1469_, v___y_1497_);
v___y_1477_ = v___x_1498_;
goto v___jp_1476_;
}
}
v___jp_1399_:
{
lean_object* v_nil_1402_; lean_object* v_cons_1403_; lean_object* v___x_1404_; lean_object* v___x_1405_; 
v_nil_1402_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__12, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__12_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__12);
v_cons_1403_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__16, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__16_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__16);
v___x_1404_ = l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lean_Elab_Tactic_Omega_Justification_tidyProof_spec__0(v_nil_1402_, v_cons_1403_, v_x_1393_);
v___x_1405_ = l_Lean_mkApp6(v___x_1398_, v___y_1400_, v___y_1401_, v___x_1404_, v_v_1394_, v_ps_1395_, v_pt_1396_);
return v___x_1405_;
}
v___jp_1406_:
{
lean_object* v___x_1412_; lean_object* v___x_1413_; 
lean_inc_ref(v___y_1407_);
v___x_1412_ = l_Lean_mkAppB(v___y_1407_, v___y_1409_, v___y_1411_);
v___x_1413_ = l_Lean_Expr_app___override(v___y_1408_, v___x_1412_);
v___y_1400_ = v___y_1410_;
v___y_1401_ = v___x_1413_;
goto v___jp_1399_;
}
v___jp_1414_:
{
lean_object* v_upperBound_1420_; lean_object* v___x_1421_; 
v_upperBound_1420_ = lean_ctor_get(v_t_1392_, 1);
lean_inc_ref(v___y_1416_);
v___x_1421_ = l_Lean_Expr_app___override(v___y_1416_, v___y_1419_);
if (lean_obj_tag(v_upperBound_1420_) == 0)
{
lean_object* v___x_1422_; lean_object* v___x_1423_; lean_object* v___x_1424_; 
v___x_1422_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__6, &l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__6_once, _init_l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__6);
v___x_1423_ = l_Lean_Expr_app___override(v___x_1422_, v___y_1417_);
v___x_1424_ = l_Lean_Expr_app___override(v___x_1421_, v___x_1423_);
v___y_1400_ = v___y_1418_;
v___y_1401_ = v___x_1424_;
goto v___jp_1399_;
}
else
{
lean_object* v_val_1425_; lean_object* v___x_1426_; lean_object* v___x_1427_; uint8_t v___x_1428_; 
v_val_1425_ = lean_ctor_get(v_upperBound_1420_, 0);
v___x_1426_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__10, &l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__10_once, _init_l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__10);
v___x_1427_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17);
v___x_1428_ = lean_int_dec_le(v___x_1427_, v_val_1425_);
if (v___x_1428_ == 0)
{
lean_object* v___x_1429_; lean_object* v___x_1430_; lean_object* v___x_1431_; lean_object* v___x_1432_; lean_object* v___x_1433_; lean_object* v___x_1434_; lean_object* v___x_1435_; lean_object* v___x_1436_; 
v___x_1429_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__23, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__23_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__23);
v___x_1430_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__24));
lean_inc_ref(v___y_1415_);
v___x_1431_ = l_Lean_Name_mkStr2(v___y_1415_, v___x_1430_);
v___x_1432_ = l_Lean_Expr_const___override(v___x_1431_, v___x_1397_);
v___x_1433_ = lean_int_neg(v_val_1425_);
v___x_1434_ = l_Int_toNat(v___x_1433_);
lean_dec(v___x_1433_);
v___x_1435_ = l_Lean_instToExprInt_mkNat(v___x_1434_);
lean_inc_ref(v___y_1417_);
v___x_1436_ = l_Lean_mkApp3(v___x_1429_, v___y_1417_, v___x_1432_, v___x_1435_);
v___y_1407_ = v___x_1426_;
v___y_1408_ = v___x_1421_;
v___y_1409_ = v___y_1417_;
v___y_1410_ = v___y_1418_;
v___y_1411_ = v___x_1436_;
goto v___jp_1406_;
}
else
{
lean_object* v___x_1437_; lean_object* v___x_1438_; 
v___x_1437_ = l_Int_toNat(v_val_1425_);
v___x_1438_ = l_Lean_instToExprInt_mkNat(v___x_1437_);
v___y_1407_ = v___x_1426_;
v___y_1408_ = v___x_1421_;
v___y_1409_ = v___y_1417_;
v___y_1410_ = v___y_1418_;
v___y_1411_ = v___x_1438_;
goto v___jp_1406_;
}
}
}
v___jp_1439_:
{
lean_object* v___x_1446_; 
lean_inc_ref(v___y_1443_);
lean_inc_ref(v___y_1441_);
v___x_1446_ = l_Lean_mkAppB(v___y_1441_, v___y_1443_, v___y_1445_);
v___y_1415_ = v___y_1440_;
v___y_1416_ = v___y_1442_;
v___y_1417_ = v___y_1443_;
v___y_1418_ = v___y_1444_;
v___y_1419_ = v___x_1446_;
goto v___jp_1414_;
}
v___jp_1447_:
{
lean_object* v_lowerBound_1449_; lean_object* v___x_1450_; lean_object* v___x_1451_; lean_object* v_type_1452_; 
v_lowerBound_1449_ = lean_ctor_get(v_t_1392_, 0);
v___x_1450_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__2, &l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__2_once, _init_l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__2);
v___x_1451_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__4));
v_type_1452_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__6, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__6_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__6);
if (lean_obj_tag(v_lowerBound_1449_) == 0)
{
lean_object* v___x_1453_; 
v___x_1453_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__7, &l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__7_once, _init_l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__7);
v___y_1415_ = v___x_1451_;
v___y_1416_ = v___x_1450_;
v___y_1417_ = v_type_1452_;
v___y_1418_ = v___y_1448_;
v___y_1419_ = v___x_1453_;
goto v___jp_1414_;
}
else
{
lean_object* v_val_1454_; lean_object* v___x_1455_; lean_object* v___x_1456_; uint8_t v___x_1457_; 
v_val_1454_ = lean_ctor_get(v_lowerBound_1449_, 0);
v___x_1455_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__10, &l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__10_once, _init_l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__10);
v___x_1456_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17);
v___x_1457_ = lean_int_dec_le(v___x_1456_, v_val_1454_);
if (v___x_1457_ == 0)
{
lean_object* v___x_1458_; lean_object* v___x_1459_; lean_object* v___x_1460_; lean_object* v___x_1461_; lean_object* v___x_1462_; lean_object* v___x_1463_; 
v___x_1458_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__23, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__23_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__23);
v___x_1459_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__26, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__26_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__26);
v___x_1460_ = lean_int_neg(v_val_1454_);
v___x_1461_ = l_Int_toNat(v___x_1460_);
lean_dec(v___x_1460_);
v___x_1462_ = l_Lean_instToExprInt_mkNat(v___x_1461_);
v___x_1463_ = l_Lean_mkApp3(v___x_1458_, v_type_1452_, v___x_1459_, v___x_1462_);
v___y_1440_ = v___x_1451_;
v___y_1441_ = v___x_1455_;
v___y_1442_ = v___x_1450_;
v___y_1443_ = v_type_1452_;
v___y_1444_ = v___y_1448_;
v___y_1445_ = v___x_1463_;
goto v___jp_1439_;
}
else
{
lean_object* v___x_1464_; lean_object* v___x_1465_; 
v___x_1464_ = l_Int_toNat(v_val_1454_);
v___x_1465_ = l_Lean_instToExprInt_mkNat(v___x_1464_);
v___y_1440_ = v___x_1451_;
v___y_1441_ = v___x_1455_;
v___y_1442_ = v___x_1450_;
v___y_1443_ = v_type_1452_;
v___y_1444_ = v___y_1448_;
v___y_1445_ = v___x_1465_;
goto v___jp_1439_;
}
}
}
v___jp_1470_:
{
lean_object* v___x_1474_; lean_object* v___x_1475_; 
lean_inc_ref(v___y_1471_);
v___x_1474_ = l_Lean_mkAppB(v___y_1471_, v_type_1469_, v___y_1473_);
v___x_1475_ = l_Lean_Expr_app___override(v___y_1472_, v___x_1474_);
v___y_1448_ = v___x_1475_;
goto v___jp_1447_;
}
v___jp_1476_:
{
lean_object* v___x_1478_; 
v___x_1478_ = l_Lean_Expr_app___override(v___x_1468_, v___y_1477_);
if (lean_obj_tag(v_upperBound_1467_) == 0)
{
lean_object* v___x_1479_; lean_object* v___x_1480_; 
v___x_1479_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__7, &l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__7_once, _init_l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__7);
v___x_1480_ = l_Lean_Expr_app___override(v___x_1478_, v___x_1479_);
v___y_1448_ = v___x_1480_;
goto v___jp_1447_;
}
else
{
lean_object* v_val_1481_; lean_object* v___x_1482_; lean_object* v___x_1483_; uint8_t v___x_1484_; 
v_val_1481_ = lean_ctor_get(v_upperBound_1467_, 0);
v___x_1482_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__10, &l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__10_once, _init_l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__10);
v___x_1483_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17);
v___x_1484_ = lean_int_dec_le(v___x_1483_, v_val_1481_);
if (v___x_1484_ == 0)
{
lean_object* v___x_1485_; lean_object* v___x_1486_; lean_object* v___x_1487_; lean_object* v___x_1488_; lean_object* v___x_1489_; lean_object* v___x_1490_; 
v___x_1485_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__23, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__23_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__23);
v___x_1486_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__26, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__26_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__26);
v___x_1487_ = lean_int_neg(v_val_1481_);
v___x_1488_ = l_Int_toNat(v___x_1487_);
lean_dec(v___x_1487_);
v___x_1489_ = l_Lean_instToExprInt_mkNat(v___x_1488_);
v___x_1490_ = l_Lean_mkApp3(v___x_1485_, v_type_1469_, v___x_1486_, v___x_1489_);
v___y_1471_ = v___x_1482_;
v___y_1472_ = v___x_1478_;
v___y_1473_ = v___x_1490_;
goto v___jp_1470_;
}
else
{
lean_object* v___x_1491_; lean_object* v___x_1492_; 
v___x_1491_ = l_Int_toNat(v_val_1481_);
v___x_1492_ = l_Lean_instToExprInt_mkNat(v___x_1491_);
v___y_1471_ = v___x_1482_;
v___y_1472_ = v___x_1478_;
v___y_1473_ = v___x_1492_;
goto v___jp_1470_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_combineProof___boxed(lean_object* v_s_1509_, lean_object* v_t_1510_, lean_object* v_x_1511_, lean_object* v_v_1512_, lean_object* v_ps_1513_, lean_object* v_pt_1514_){
_start:
{
lean_object* v_res_1515_; 
v_res_1515_ = l_Lean_Elab_Tactic_Omega_Justification_combineProof(v_s_1509_, v_t_1510_, v_x_1511_, v_v_1512_, v_ps_1513_, v_pt_1514_);
lean_dec(v_x_1511_);
lean_dec_ref(v_t_1510_);
lean_dec_ref(v_s_1509_);
return v_res_1515_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_Justification_comboProof___closed__2(void){
_start:
{
lean_object* v___x_1521_; lean_object* v___x_1522_; lean_object* v___x_1523_; 
v___x_1521_ = lean_box(0);
v___x_1522_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_comboProof___closed__1));
v___x_1523_ = l_Lean_Expr_const___override(v___x_1522_, v___x_1521_);
return v___x_1523_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_comboProof(lean_object* v_s_1524_, lean_object* v_t_1525_, lean_object* v_a_1526_, lean_object* v_x_1527_, lean_object* v_b_1528_, lean_object* v_y_1529_, lean_object* v_v_1530_, lean_object* v_px_1531_, lean_object* v_py_1532_){
_start:
{
lean_object* v___x_1533_; lean_object* v___x_1534_; lean_object* v___y_1536_; lean_object* v___y_1537_; lean_object* v___y_1538_; lean_object* v___y_1539_; lean_object* v___y_1540_; lean_object* v___y_1541_; lean_object* v___y_1542_; lean_object* v___y_1546_; lean_object* v___y_1547_; lean_object* v___y_1548_; lean_object* v___y_1564_; lean_object* v___y_1565_; lean_object* v___y_1578_; lean_object* v___y_1579_; lean_object* v___y_1580_; lean_object* v___y_1581_; lean_object* v___y_1582_; lean_object* v___y_1586_; lean_object* v___y_1587_; lean_object* v___y_1588_; lean_object* v___y_1589_; lean_object* v___y_1590_; lean_object* v___y_1611_; lean_object* v___y_1612_; lean_object* v___y_1613_; lean_object* v___y_1614_; lean_object* v___y_1615_; lean_object* v___y_1616_; lean_object* v___y_1619_; lean_object* v_lowerBound_1637_; lean_object* v_upperBound_1638_; lean_object* v___x_1639_; lean_object* v_type_1640_; lean_object* v___y_1642_; lean_object* v___y_1643_; lean_object* v___y_1644_; lean_object* v___y_1648_; 
v___x_1533_ = lean_box(0);
v___x_1534_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_Justification_comboProof___closed__2, &l_Lean_Elab_Tactic_Omega_Justification_comboProof___closed__2_once, _init_l_Lean_Elab_Tactic_Omega_Justification_comboProof___closed__2);
v_lowerBound_1637_ = lean_ctor_get(v_s_1524_, 0);
v_upperBound_1638_ = lean_ctor_get(v_s_1524_, 1);
v___x_1639_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__2, &l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__2_once, _init_l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__2);
v_type_1640_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__6, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__6_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__6);
if (lean_obj_tag(v_lowerBound_1637_) == 0)
{
lean_object* v___x_1664_; 
v___x_1664_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__7, &l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__7_once, _init_l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__7);
v___y_1648_ = v___x_1664_;
goto v___jp_1647_;
}
else
{
lean_object* v_val_1665_; lean_object* v___x_1666_; lean_object* v___y_1668_; lean_object* v___x_1670_; uint8_t v___x_1671_; 
v_val_1665_ = lean_ctor_get(v_lowerBound_1637_, 0);
v___x_1666_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__10, &l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__10_once, _init_l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__10);
v___x_1670_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17);
v___x_1671_ = lean_int_dec_le(v___x_1670_, v_val_1665_);
if (v___x_1671_ == 0)
{
lean_object* v___x_1672_; lean_object* v___x_1673_; lean_object* v___x_1674_; lean_object* v___x_1675_; lean_object* v___x_1676_; lean_object* v___x_1677_; 
v___x_1672_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__23, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__23_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__23);
v___x_1673_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__26, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__26_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__26);
v___x_1674_ = lean_int_neg(v_val_1665_);
v___x_1675_ = l_Int_toNat(v___x_1674_);
lean_dec(v___x_1674_);
v___x_1676_ = l_Lean_instToExprInt_mkNat(v___x_1675_);
v___x_1677_ = l_Lean_mkApp3(v___x_1672_, v_type_1640_, v___x_1673_, v___x_1676_);
v___y_1668_ = v___x_1677_;
goto v___jp_1667_;
}
else
{
lean_object* v___x_1678_; lean_object* v___x_1679_; 
v___x_1678_ = l_Int_toNat(v_val_1665_);
v___x_1679_ = l_Lean_instToExprInt_mkNat(v___x_1678_);
v___y_1668_ = v___x_1679_;
goto v___jp_1667_;
}
v___jp_1667_:
{
lean_object* v___x_1669_; 
v___x_1669_ = l_Lean_mkAppB(v___x_1666_, v_type_1640_, v___y_1668_);
v___y_1648_ = v___x_1669_;
goto v___jp_1647_;
}
}
v___jp_1535_:
{
lean_object* v___x_1543_; lean_object* v___x_1544_; 
v___x_1543_ = l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lean_Elab_Tactic_Omega_Justification_tidyProof_spec__0(v___y_1538_, v___y_1541_, v_y_1529_);
v___x_1544_ = l_Lean_mkApp9(v___x_1534_, v___y_1537_, v___y_1540_, v___y_1539_, v___y_1536_, v___y_1542_, v___x_1543_, v_v_1530_, v_px_1531_, v_py_1532_);
return v___x_1544_;
}
v___jp_1545_:
{
lean_object* v_type_1549_; lean_object* v_nil_1550_; lean_object* v_cons_1551_; lean_object* v___x_1552_; lean_object* v___x_1553_; uint8_t v___x_1554_; 
v_type_1549_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__6, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__6_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__6);
v_nil_1550_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__12, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__12_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__12);
v_cons_1551_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__16, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__16_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__16);
v___x_1552_ = l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lean_Elab_Tactic_Omega_Justification_tidyProof_spec__0(v_nil_1550_, v_cons_1551_, v_x_1527_);
v___x_1553_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17);
v___x_1554_ = lean_int_dec_le(v___x_1553_, v_b_1528_);
if (v___x_1554_ == 0)
{
lean_object* v___x_1555_; lean_object* v___x_1556_; lean_object* v___x_1557_; lean_object* v___x_1558_; lean_object* v___x_1559_; lean_object* v___x_1560_; 
v___x_1555_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__23, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__23_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__23);
v___x_1556_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__26, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__26_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__26);
v___x_1557_ = lean_int_neg(v_b_1528_);
v___x_1558_ = l_Int_toNat(v___x_1557_);
lean_dec(v___x_1557_);
v___x_1559_ = l_Lean_instToExprInt_mkNat(v___x_1558_);
v___x_1560_ = l_Lean_mkApp3(v___x_1555_, v_type_1549_, v___x_1556_, v___x_1559_);
v___y_1536_ = v___x_1552_;
v___y_1537_ = v___y_1546_;
v___y_1538_ = v_nil_1550_;
v___y_1539_ = v___y_1548_;
v___y_1540_ = v___y_1547_;
v___y_1541_ = v_cons_1551_;
v___y_1542_ = v___x_1560_;
goto v___jp_1535_;
}
else
{
lean_object* v___x_1561_; lean_object* v___x_1562_; 
v___x_1561_ = l_Int_toNat(v_b_1528_);
v___x_1562_ = l_Lean_instToExprInt_mkNat(v___x_1561_);
v___y_1536_ = v___x_1552_;
v___y_1537_ = v___y_1546_;
v___y_1538_ = v_nil_1550_;
v___y_1539_ = v___y_1548_;
v___y_1540_ = v___y_1547_;
v___y_1541_ = v_cons_1551_;
v___y_1542_ = v___x_1562_;
goto v___jp_1535_;
}
}
v___jp_1563_:
{
lean_object* v___x_1566_; uint8_t v___x_1567_; 
v___x_1566_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17);
v___x_1567_ = lean_int_dec_le(v___x_1566_, v_a_1526_);
if (v___x_1567_ == 0)
{
lean_object* v___x_1568_; lean_object* v___x_1569_; lean_object* v___x_1570_; lean_object* v___x_1571_; lean_object* v___x_1572_; lean_object* v___x_1573_; lean_object* v___x_1574_; 
v___x_1568_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__23, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__23_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__23);
v___x_1569_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__6, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__6_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__6);
v___x_1570_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__26, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__26_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__26);
v___x_1571_ = lean_int_neg(v_a_1526_);
v___x_1572_ = l_Int_toNat(v___x_1571_);
lean_dec(v___x_1571_);
v___x_1573_ = l_Lean_instToExprInt_mkNat(v___x_1572_);
v___x_1574_ = l_Lean_mkApp3(v___x_1568_, v___x_1569_, v___x_1570_, v___x_1573_);
v___y_1546_ = v___y_1564_;
v___y_1547_ = v___y_1565_;
v___y_1548_ = v___x_1574_;
goto v___jp_1545_;
}
else
{
lean_object* v___x_1575_; lean_object* v___x_1576_; 
v___x_1575_ = l_Int_toNat(v_a_1526_);
v___x_1576_ = l_Lean_instToExprInt_mkNat(v___x_1575_);
v___y_1546_ = v___y_1564_;
v___y_1547_ = v___y_1565_;
v___y_1548_ = v___x_1576_;
goto v___jp_1545_;
}
}
v___jp_1577_:
{
lean_object* v___x_1583_; lean_object* v___x_1584_; 
lean_inc_ref(v___y_1581_);
v___x_1583_ = l_Lean_mkAppB(v___y_1581_, v___y_1578_, v___y_1582_);
v___x_1584_ = l_Lean_Expr_app___override(v___y_1580_, v___x_1583_);
v___y_1564_ = v___y_1579_;
v___y_1565_ = v___x_1584_;
goto v___jp_1563_;
}
v___jp_1585_:
{
lean_object* v_upperBound_1591_; lean_object* v___x_1592_; 
v_upperBound_1591_ = lean_ctor_get(v_t_1525_, 1);
lean_inc_ref(v___y_1589_);
v___x_1592_ = l_Lean_Expr_app___override(v___y_1589_, v___y_1590_);
if (lean_obj_tag(v_upperBound_1591_) == 0)
{
lean_object* v___x_1593_; lean_object* v___x_1594_; lean_object* v___x_1595_; 
v___x_1593_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__6, &l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__6_once, _init_l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__6);
v___x_1594_ = l_Lean_Expr_app___override(v___x_1593_, v___y_1586_);
v___x_1595_ = l_Lean_Expr_app___override(v___x_1592_, v___x_1594_);
v___y_1564_ = v___y_1587_;
v___y_1565_ = v___x_1595_;
goto v___jp_1563_;
}
else
{
lean_object* v_val_1596_; lean_object* v___x_1597_; lean_object* v___x_1598_; uint8_t v___x_1599_; 
v_val_1596_ = lean_ctor_get(v_upperBound_1591_, 0);
v___x_1597_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__10, &l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__10_once, _init_l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__10);
v___x_1598_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17);
v___x_1599_ = lean_int_dec_le(v___x_1598_, v_val_1596_);
if (v___x_1599_ == 0)
{
lean_object* v___x_1600_; lean_object* v___x_1601_; lean_object* v___x_1602_; lean_object* v___x_1603_; lean_object* v___x_1604_; lean_object* v___x_1605_; lean_object* v___x_1606_; lean_object* v___x_1607_; 
v___x_1600_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__23, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__23_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__23);
v___x_1601_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__24));
lean_inc_ref(v___y_1588_);
v___x_1602_ = l_Lean_Name_mkStr2(v___y_1588_, v___x_1601_);
v___x_1603_ = l_Lean_Expr_const___override(v___x_1602_, v___x_1533_);
v___x_1604_ = lean_int_neg(v_val_1596_);
v___x_1605_ = l_Int_toNat(v___x_1604_);
lean_dec(v___x_1604_);
v___x_1606_ = l_Lean_instToExprInt_mkNat(v___x_1605_);
lean_inc_ref(v___y_1586_);
v___x_1607_ = l_Lean_mkApp3(v___x_1600_, v___y_1586_, v___x_1603_, v___x_1606_);
v___y_1578_ = v___y_1586_;
v___y_1579_ = v___y_1587_;
v___y_1580_ = v___x_1592_;
v___y_1581_ = v___x_1597_;
v___y_1582_ = v___x_1607_;
goto v___jp_1577_;
}
else
{
lean_object* v___x_1608_; lean_object* v___x_1609_; 
v___x_1608_ = l_Int_toNat(v_val_1596_);
v___x_1609_ = l_Lean_instToExprInt_mkNat(v___x_1608_);
v___y_1578_ = v___y_1586_;
v___y_1579_ = v___y_1587_;
v___y_1580_ = v___x_1592_;
v___y_1581_ = v___x_1597_;
v___y_1582_ = v___x_1609_;
goto v___jp_1577_;
}
}
}
v___jp_1610_:
{
lean_object* v___x_1617_; 
lean_inc_ref(v___y_1611_);
lean_inc_ref(v___y_1613_);
v___x_1617_ = l_Lean_mkAppB(v___y_1613_, v___y_1611_, v___y_1616_);
v___y_1586_ = v___y_1611_;
v___y_1587_ = v___y_1612_;
v___y_1588_ = v___y_1614_;
v___y_1589_ = v___y_1615_;
v___y_1590_ = v___x_1617_;
goto v___jp_1585_;
}
v___jp_1618_:
{
lean_object* v_lowerBound_1620_; lean_object* v___x_1621_; lean_object* v___x_1622_; lean_object* v_type_1623_; 
v_lowerBound_1620_ = lean_ctor_get(v_t_1525_, 0);
v___x_1621_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__2, &l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__2_once, _init_l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__2);
v___x_1622_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__4));
v_type_1623_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__6, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__6_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__6);
if (lean_obj_tag(v_lowerBound_1620_) == 0)
{
lean_object* v___x_1624_; 
v___x_1624_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__7, &l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__7_once, _init_l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__7);
v___y_1586_ = v_type_1623_;
v___y_1587_ = v___y_1619_;
v___y_1588_ = v___x_1622_;
v___y_1589_ = v___x_1621_;
v___y_1590_ = v___x_1624_;
goto v___jp_1585_;
}
else
{
lean_object* v_val_1625_; lean_object* v___x_1626_; lean_object* v___x_1627_; uint8_t v___x_1628_; 
v_val_1625_ = lean_ctor_get(v_lowerBound_1620_, 0);
v___x_1626_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__10, &l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__10_once, _init_l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__10);
v___x_1627_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17);
v___x_1628_ = lean_int_dec_le(v___x_1627_, v_val_1625_);
if (v___x_1628_ == 0)
{
lean_object* v___x_1629_; lean_object* v___x_1630_; lean_object* v___x_1631_; lean_object* v___x_1632_; lean_object* v___x_1633_; lean_object* v___x_1634_; 
v___x_1629_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__23, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__23_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__23);
v___x_1630_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__26, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__26_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__26);
v___x_1631_ = lean_int_neg(v_val_1625_);
v___x_1632_ = l_Int_toNat(v___x_1631_);
lean_dec(v___x_1631_);
v___x_1633_ = l_Lean_instToExprInt_mkNat(v___x_1632_);
v___x_1634_ = l_Lean_mkApp3(v___x_1629_, v_type_1623_, v___x_1630_, v___x_1633_);
v___y_1611_ = v_type_1623_;
v___y_1612_ = v___y_1619_;
v___y_1613_ = v___x_1626_;
v___y_1614_ = v___x_1622_;
v___y_1615_ = v___x_1621_;
v___y_1616_ = v___x_1634_;
goto v___jp_1610_;
}
else
{
lean_object* v___x_1635_; lean_object* v___x_1636_; 
v___x_1635_ = l_Int_toNat(v_val_1625_);
v___x_1636_ = l_Lean_instToExprInt_mkNat(v___x_1635_);
v___y_1611_ = v_type_1623_;
v___y_1612_ = v___y_1619_;
v___y_1613_ = v___x_1626_;
v___y_1614_ = v___x_1622_;
v___y_1615_ = v___x_1621_;
v___y_1616_ = v___x_1636_;
goto v___jp_1610_;
}
}
}
v___jp_1641_:
{
lean_object* v___x_1645_; lean_object* v___x_1646_; 
lean_inc_ref(v___y_1642_);
v___x_1645_ = l_Lean_mkAppB(v___y_1642_, v_type_1640_, v___y_1644_);
v___x_1646_ = l_Lean_Expr_app___override(v___y_1643_, v___x_1645_);
v___y_1619_ = v___x_1646_;
goto v___jp_1618_;
}
v___jp_1647_:
{
lean_object* v___x_1649_; 
v___x_1649_ = l_Lean_Expr_app___override(v___x_1639_, v___y_1648_);
if (lean_obj_tag(v_upperBound_1638_) == 0)
{
lean_object* v___x_1650_; lean_object* v___x_1651_; 
v___x_1650_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__7, &l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__7_once, _init_l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__7);
v___x_1651_ = l_Lean_Expr_app___override(v___x_1649_, v___x_1650_);
v___y_1619_ = v___x_1651_;
goto v___jp_1618_;
}
else
{
lean_object* v_val_1652_; lean_object* v___x_1653_; lean_object* v___x_1654_; uint8_t v___x_1655_; 
v_val_1652_ = lean_ctor_get(v_upperBound_1638_, 0);
v___x_1653_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__10, &l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__10_once, _init_l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__10);
v___x_1654_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17);
v___x_1655_ = lean_int_dec_le(v___x_1654_, v_val_1652_);
if (v___x_1655_ == 0)
{
lean_object* v___x_1656_; lean_object* v___x_1657_; lean_object* v___x_1658_; lean_object* v___x_1659_; lean_object* v___x_1660_; lean_object* v___x_1661_; 
v___x_1656_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__23, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__23_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__23);
v___x_1657_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__26, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__26_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__26);
v___x_1658_ = lean_int_neg(v_val_1652_);
v___x_1659_ = l_Int_toNat(v___x_1658_);
lean_dec(v___x_1658_);
v___x_1660_ = l_Lean_instToExprInt_mkNat(v___x_1659_);
v___x_1661_ = l_Lean_mkApp3(v___x_1656_, v_type_1640_, v___x_1657_, v___x_1660_);
v___y_1642_ = v___x_1653_;
v___y_1643_ = v___x_1649_;
v___y_1644_ = v___x_1661_;
goto v___jp_1641_;
}
else
{
lean_object* v___x_1662_; lean_object* v___x_1663_; 
v___x_1662_ = l_Int_toNat(v_val_1652_);
v___x_1663_ = l_Lean_instToExprInt_mkNat(v___x_1662_);
v___y_1642_ = v___x_1653_;
v___y_1643_ = v___x_1649_;
v___y_1644_ = v___x_1663_;
goto v___jp_1641_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_comboProof___boxed(lean_object* v_s_1680_, lean_object* v_t_1681_, lean_object* v_a_1682_, lean_object* v_x_1683_, lean_object* v_b_1684_, lean_object* v_y_1685_, lean_object* v_v_1686_, lean_object* v_px_1687_, lean_object* v_py_1688_){
_start:
{
lean_object* v_res_1689_; 
v_res_1689_ = l_Lean_Elab_Tactic_Omega_Justification_comboProof(v_s_1680_, v_t_1681_, v_a_1682_, v_x_1683_, v_b_1684_, v_y_1685_, v_v_1686_, v_px_1687_, v_py_1688_);
lean_dec(v_y_1685_);
lean_dec(v_b_1684_);
lean_dec(v_x_1683_);
lean_dec(v_a_1682_);
lean_dec_ref(v_t_1681_);
lean_dec_ref(v_s_1680_);
return v_res_1689_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__3(void){
_start:
{
lean_object* v___x_1695_; lean_object* v___x_1696_; lean_object* v___x_1697_; 
v___x_1695_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__10));
v___x_1696_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__2));
v___x_1697_ = l_Lean_Expr_const___override(v___x_1696_, v___x_1695_);
return v___x_1697_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__6(void){
_start:
{
lean_object* v___x_1701_; lean_object* v___x_1702_; lean_object* v___x_1703_; 
v___x_1701_ = lean_box(0);
v___x_1702_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__5));
v___x_1703_ = l_Lean_Expr_const___override(v___x_1702_, v___x_1701_);
return v___x_1703_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__9(void){
_start:
{
lean_object* v___x_1707_; lean_object* v___x_1708_; lean_object* v___x_1709_; 
v___x_1707_ = lean_box(0);
v___x_1708_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__8));
v___x_1709_ = l_Lean_Expr_const___override(v___x_1708_, v___x_1707_);
return v___x_1709_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__13(void){
_start:
{
lean_object* v___x_1717_; lean_object* v___x_1718_; lean_object* v___x_1719_; 
v___x_1717_ = lean_box(0);
v___x_1718_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__12));
v___x_1719_ = l_Lean_Expr_const___override(v___x_1718_, v___x_1717_);
return v___x_1719_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__16(void){
_start:
{
lean_object* v___x_1726_; lean_object* v___x_1727_; lean_object* v___x_1728_; 
v___x_1726_ = lean_box(0);
v___x_1727_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__15));
v___x_1728_ = l_Lean_Expr_const___override(v___x_1727_, v___x_1726_);
return v___x_1728_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__19(void){
_start:
{
lean_object* v___x_1734_; lean_object* v___x_1735_; lean_object* v___x_1736_; 
v___x_1734_ = lean_box(0);
v___x_1735_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__18));
v___x_1736_ = l_Lean_Expr_const___override(v___x_1735_, v___x_1734_);
return v___x_1736_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__22(void){
_start:
{
lean_object* v___x_1742_; lean_object* v___x_1743_; lean_object* v___x_1744_; 
v___x_1742_ = lean_box(0);
v___x_1743_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__21));
v___x_1744_ = l_Lean_Expr_const___override(v___x_1743_, v___x_1742_);
return v___x_1744_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_bmodProof(lean_object* v_m_1745_, lean_object* v_r_1746_, lean_object* v_i_1747_, lean_object* v_x_1748_, lean_object* v_v_1749_, lean_object* v_w_1750_, lean_object* v___y_1751_, lean_object* v___y_1752_, lean_object* v___y_1753_, lean_object* v___y_1754_){
_start:
{
lean_object* v_m_1756_; lean_object* v___y_1758_; lean_object* v___x_1786_; uint8_t v___x_1787_; 
v_m_1756_ = l_Lean_mkNatLit(v_m_1745_);
v___x_1786_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17);
v___x_1787_ = lean_int_dec_le(v___x_1786_, v_r_1746_);
if (v___x_1787_ == 0)
{
lean_object* v___x_1788_; lean_object* v___x_1789_; lean_object* v___x_1790_; lean_object* v___x_1791_; lean_object* v___x_1792_; lean_object* v___x_1793_; lean_object* v___x_1794_; 
v___x_1788_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__23, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__23_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__23);
v___x_1789_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__6, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__6_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__6);
v___x_1790_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__26, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__26_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__26);
v___x_1791_ = lean_int_neg(v_r_1746_);
v___x_1792_ = l_Int_toNat(v___x_1791_);
lean_dec(v___x_1791_);
v___x_1793_ = l_Lean_instToExprInt_mkNat(v___x_1792_);
v___x_1794_ = l_Lean_mkApp3(v___x_1788_, v___x_1789_, v___x_1790_, v___x_1793_);
v___y_1758_ = v___x_1794_;
goto v___jp_1757_;
}
else
{
lean_object* v___x_1795_; lean_object* v___x_1796_; 
v___x_1795_ = l_Int_toNat(v_r_1746_);
v___x_1796_ = l_Lean_instToExprInt_mkNat(v___x_1795_);
v___y_1758_ = v___x_1796_;
goto v___jp_1757_;
}
v___jp_1757_:
{
lean_object* v_i_1759_; lean_object* v_nil_1760_; lean_object* v_cons_1761_; lean_object* v_x_1762_; lean_object* v___x_1763_; lean_object* v___x_1764_; lean_object* v___x_1765_; lean_object* v___x_1766_; lean_object* v___x_1767_; lean_object* v___x_1768_; lean_object* v___x_1769_; 
v_i_1759_ = l_Lean_mkNatLit(v_i_1747_);
v_nil_1760_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__12, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__12_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__12);
v_cons_1761_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__16, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__16_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__16);
v_x_1762_ = l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lean_Elab_Tactic_Omega_Justification_tidyProof_spec__0(v_nil_1760_, v_cons_1761_, v_x_1748_);
v___x_1763_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__3, &l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__3_once, _init_l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__3);
v___x_1764_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__6, &l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__6_once, _init_l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__6);
v___x_1765_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__9, &l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__9_once, _init_l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__9);
v___x_1766_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__13, &l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__13_once, _init_l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__13);
lean_inc_ref(v_x_1762_);
v___x_1767_ = l_Lean_Expr_app___override(v___x_1766_, v_x_1762_);
lean_inc_ref(v_i_1759_);
v___x_1768_ = l_Lean_mkApp4(v___x_1763_, v___x_1764_, v___x_1765_, v___x_1767_, v_i_1759_);
v___x_1769_ = l_Lean_Meta_mkDecideProof(v___x_1768_, v___y_1751_, v___y_1752_, v___y_1753_, v___y_1754_);
if (lean_obj_tag(v___x_1769_) == 0)
{
lean_object* v_a_1770_; lean_object* v___x_1771_; lean_object* v___x_1772_; lean_object* v___x_1773_; lean_object* v___x_1774_; lean_object* v___x_1775_; 
v_a_1770_ = lean_ctor_get(v___x_1769_, 0);
lean_inc(v_a_1770_);
lean_dec_ref_known(v___x_1769_, 1);
v___x_1771_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__16, &l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__16_once, _init_l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__16);
lean_inc_ref(v_i_1759_);
lean_inc_ref_n(v_v_1749_, 2);
v___x_1772_ = l_Lean_mkAppB(v___x_1771_, v_v_1749_, v_i_1759_);
v___x_1773_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__19, &l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__19_once, _init_l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__19);
lean_inc_ref(v_x_1762_);
lean_inc_ref(v_m_1756_);
v___x_1774_ = l_Lean_mkApp3(v___x_1773_, v_m_1756_, v_x_1762_, v_v_1749_);
v___x_1775_ = l_Lean_Elab_Tactic_Omega_mkEqReflWithExpectedType(v___x_1772_, v___x_1774_, v___y_1751_, v___y_1752_, v___y_1753_, v___y_1754_);
if (lean_obj_tag(v___x_1775_) == 0)
{
lean_object* v_a_1776_; lean_object* v___x_1778_; uint8_t v_isShared_1779_; uint8_t v_isSharedCheck_1785_; 
v_a_1776_ = lean_ctor_get(v___x_1775_, 0);
v_isSharedCheck_1785_ = !lean_is_exclusive(v___x_1775_);
if (v_isSharedCheck_1785_ == 0)
{
v___x_1778_ = v___x_1775_;
v_isShared_1779_ = v_isSharedCheck_1785_;
goto v_resetjp_1777_;
}
else
{
lean_inc(v_a_1776_);
lean_dec(v___x_1775_);
v___x_1778_ = lean_box(0);
v_isShared_1779_ = v_isSharedCheck_1785_;
goto v_resetjp_1777_;
}
v_resetjp_1777_:
{
lean_object* v___x_1780_; lean_object* v___x_1781_; lean_object* v___x_1783_; 
v___x_1780_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__22, &l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__22_once, _init_l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__22);
v___x_1781_ = l_Lean_mkApp8(v___x_1780_, v_m_1756_, v___y_1758_, v_i_1759_, v_x_1762_, v_v_1749_, v_a_1770_, v_a_1776_, v_w_1750_);
if (v_isShared_1779_ == 0)
{
lean_ctor_set(v___x_1778_, 0, v___x_1781_);
v___x_1783_ = v___x_1778_;
goto v_reusejp_1782_;
}
else
{
lean_object* v_reuseFailAlloc_1784_; 
v_reuseFailAlloc_1784_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1784_, 0, v___x_1781_);
v___x_1783_ = v_reuseFailAlloc_1784_;
goto v_reusejp_1782_;
}
v_reusejp_1782_:
{
return v___x_1783_;
}
}
}
else
{
lean_dec(v_a_1770_);
lean_dec_ref(v_x_1762_);
lean_dec_ref(v_i_1759_);
lean_dec_ref(v___y_1758_);
lean_dec_ref(v_m_1756_);
lean_dec_ref(v_w_1750_);
lean_dec_ref(v_v_1749_);
return v___x_1775_;
}
}
else
{
lean_dec_ref(v_x_1762_);
lean_dec_ref(v_i_1759_);
lean_dec_ref(v___y_1758_);
lean_dec_ref(v_m_1756_);
lean_dec_ref(v_w_1750_);
lean_dec_ref(v_v_1749_);
return v___x_1769_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_bmodProof___boxed(lean_object* v_m_1797_, lean_object* v_r_1798_, lean_object* v_i_1799_, lean_object* v_x_1800_, lean_object* v_v_1801_, lean_object* v_w_1802_, lean_object* v___y_1803_, lean_object* v___y_1804_, lean_object* v___y_1805_, lean_object* v___y_1806_, lean_object* v___y_1807_){
_start:
{
lean_object* v_res_1808_; 
v_res_1808_ = l_Lean_Elab_Tactic_Omega_Justification_bmodProof(v_m_1797_, v_r_1798_, v_i_1799_, v_x_1800_, v_v_1801_, v_w_1802_, v___y_1803_, v___y_1804_, v___y_1805_, v___y_1806_);
lean_dec(v___y_1806_);
lean_dec_ref(v___y_1805_);
lean_dec(v___y_1804_);
lean_dec_ref(v___y_1803_);
lean_dec(v_x_1800_);
lean_dec(v_r_1798_);
return v_res_1808_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_Justification_proof___redArg___closed__11(void){
_start:
{
lean_object* v___x_1832_; lean_object* v___x_1833_; 
v___x_1832_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_proof___redArg___closed__10));
v___x_1833_ = l_StateRefT_x27_instMonad___redArg(v___x_1832_);
return v___x_1833_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_proof___redArg(lean_object* v_c_1838_, lean_object* v_v_1839_, lean_object* v_assumptions_1840_, lean_object* v_x_1841_, lean_object* v___y_1842_, lean_object* v___y_1843_, lean_object* v___y_1844_, uint8_t v___y_1845_, lean_object* v___y_1846_, lean_object* v___y_1847_, lean_object* v___y_1848_, lean_object* v___y_1849_, lean_object* v___y_1850_){
_start:
{
lean_object* v___x_1852_; lean_object* v_toApplicative_1853_; lean_object* v_toFunctor_1854_; lean_object* v_toSeq_1855_; lean_object* v_toSeqLeft_1856_; lean_object* v_toSeqRight_1857_; lean_object* v___f_1858_; lean_object* v___f_1859_; lean_object* v___f_1860_; lean_object* v___f_1861_; lean_object* v___x_1862_; lean_object* v___f_1863_; lean_object* v___f_1864_; lean_object* v___f_1865_; lean_object* v___x_1866_; lean_object* v___x_1867_; lean_object* v___x_1868_; lean_object* v_toApplicative_1869_; lean_object* v___x_1871_; uint8_t v_isShared_1872_; uint8_t v_isSharedCheck_1964_; 
v___x_1852_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_Justification_proof___redArg___closed__11, &l_Lean_Elab_Tactic_Omega_Justification_proof___redArg___closed__11_once, _init_l_Lean_Elab_Tactic_Omega_Justification_proof___redArg___closed__11);
v_toApplicative_1853_ = lean_ctor_get(v___x_1852_, 0);
v_toFunctor_1854_ = lean_ctor_get(v_toApplicative_1853_, 0);
v_toSeq_1855_ = lean_ctor_get(v_toApplicative_1853_, 2);
v_toSeqLeft_1856_ = lean_ctor_get(v_toApplicative_1853_, 3);
v_toSeqRight_1857_ = lean_ctor_get(v_toApplicative_1853_, 4);
v___f_1858_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_proof___redArg___closed__12));
v___f_1859_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_proof___redArg___closed__13));
lean_inc_ref_n(v_toFunctor_1854_, 2);
v___f_1860_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_1860_, 0, v_toFunctor_1854_);
v___f_1861_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1861_, 0, v_toFunctor_1854_);
v___x_1862_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1862_, 0, v___f_1860_);
lean_ctor_set(v___x_1862_, 1, v___f_1861_);
lean_inc(v_toSeqRight_1857_);
v___f_1863_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1863_, 0, v_toSeqRight_1857_);
lean_inc(v_toSeqLeft_1856_);
v___f_1864_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_1864_, 0, v_toSeqLeft_1856_);
lean_inc(v_toSeq_1855_);
v___f_1865_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_1865_, 0, v_toSeq_1855_);
v___x_1866_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1866_, 0, v___x_1862_);
lean_ctor_set(v___x_1866_, 1, v___f_1858_);
lean_ctor_set(v___x_1866_, 2, v___f_1865_);
lean_ctor_set(v___x_1866_, 3, v___f_1864_);
lean_ctor_set(v___x_1866_, 4, v___f_1863_);
v___x_1867_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1867_, 0, v___x_1866_);
lean_ctor_set(v___x_1867_, 1, v___f_1859_);
v___x_1868_ = l_StateRefT_x27_instMonad___redArg(v___x_1867_);
v_toApplicative_1869_ = lean_ctor_get(v___x_1868_, 0);
v_isSharedCheck_1964_ = !lean_is_exclusive(v___x_1868_);
if (v_isSharedCheck_1964_ == 0)
{
lean_object* v_unused_1965_; 
v_unused_1965_ = lean_ctor_get(v___x_1868_, 1);
lean_dec(v_unused_1965_);
v___x_1871_ = v___x_1868_;
v_isShared_1872_ = v_isSharedCheck_1964_;
goto v_resetjp_1870_;
}
else
{
lean_inc(v_toApplicative_1869_);
lean_dec(v___x_1868_);
v___x_1871_ = lean_box(0);
v_isShared_1872_ = v_isSharedCheck_1964_;
goto v_resetjp_1870_;
}
v_resetjp_1870_:
{
lean_object* v_toFunctor_1873_; lean_object* v_toSeq_1874_; lean_object* v_toSeqLeft_1875_; lean_object* v_toSeqRight_1876_; lean_object* v___x_1878_; uint8_t v_isShared_1879_; uint8_t v_isSharedCheck_1962_; 
v_toFunctor_1873_ = lean_ctor_get(v_toApplicative_1869_, 0);
v_toSeq_1874_ = lean_ctor_get(v_toApplicative_1869_, 2);
v_toSeqLeft_1875_ = lean_ctor_get(v_toApplicative_1869_, 3);
v_toSeqRight_1876_ = lean_ctor_get(v_toApplicative_1869_, 4);
v_isSharedCheck_1962_ = !lean_is_exclusive(v_toApplicative_1869_);
if (v_isSharedCheck_1962_ == 0)
{
lean_object* v_unused_1963_; 
v_unused_1963_ = lean_ctor_get(v_toApplicative_1869_, 1);
lean_dec(v_unused_1963_);
v___x_1878_ = v_toApplicative_1869_;
v_isShared_1879_ = v_isSharedCheck_1962_;
goto v_resetjp_1877_;
}
else
{
lean_inc(v_toSeqRight_1876_);
lean_inc(v_toSeqLeft_1875_);
lean_inc(v_toSeq_1874_);
lean_inc(v_toFunctor_1873_);
lean_dec(v_toApplicative_1869_);
v___x_1878_ = lean_box(0);
v_isShared_1879_ = v_isSharedCheck_1962_;
goto v_resetjp_1877_;
}
v_resetjp_1877_:
{
lean_object* v___f_1880_; lean_object* v___f_1881_; lean_object* v___f_1882_; lean_object* v___f_1883_; lean_object* v___x_1884_; lean_object* v___f_1885_; lean_object* v___f_1886_; lean_object* v___f_1887_; lean_object* v___x_1889_; 
v___f_1880_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_proof___redArg___closed__14));
v___f_1881_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_proof___redArg___closed__15));
lean_inc_ref(v_toFunctor_1873_);
v___f_1882_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_1882_, 0, v_toFunctor_1873_);
v___f_1883_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1883_, 0, v_toFunctor_1873_);
v___x_1884_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1884_, 0, v___f_1882_);
lean_ctor_set(v___x_1884_, 1, v___f_1883_);
v___f_1885_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1885_, 0, v_toSeqRight_1876_);
v___f_1886_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_1886_, 0, v_toSeqLeft_1875_);
v___f_1887_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_1887_, 0, v_toSeq_1874_);
if (v_isShared_1879_ == 0)
{
lean_ctor_set(v___x_1878_, 4, v___f_1885_);
lean_ctor_set(v___x_1878_, 3, v___f_1886_);
lean_ctor_set(v___x_1878_, 2, v___f_1887_);
lean_ctor_set(v___x_1878_, 1, v___f_1880_);
lean_ctor_set(v___x_1878_, 0, v___x_1884_);
v___x_1889_ = v___x_1878_;
goto v_reusejp_1888_;
}
else
{
lean_object* v_reuseFailAlloc_1961_; 
v_reuseFailAlloc_1961_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1961_, 0, v___x_1884_);
lean_ctor_set(v_reuseFailAlloc_1961_, 1, v___f_1880_);
lean_ctor_set(v_reuseFailAlloc_1961_, 2, v___f_1887_);
lean_ctor_set(v_reuseFailAlloc_1961_, 3, v___f_1886_);
lean_ctor_set(v_reuseFailAlloc_1961_, 4, v___f_1885_);
v___x_1889_ = v_reuseFailAlloc_1961_;
goto v_reusejp_1888_;
}
v_reusejp_1888_:
{
lean_object* v___x_1891_; 
if (v_isShared_1872_ == 0)
{
lean_ctor_set(v___x_1871_, 1, v___f_1881_);
lean_ctor_set(v___x_1871_, 0, v___x_1889_);
v___x_1891_ = v___x_1871_;
goto v_reusejp_1890_;
}
else
{
lean_object* v_reuseFailAlloc_1960_; 
v_reuseFailAlloc_1960_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1960_, 0, v___x_1889_);
lean_ctor_set(v_reuseFailAlloc_1960_, 1, v___f_1881_);
v___x_1891_ = v_reuseFailAlloc_1960_;
goto v_reusejp_1890_;
}
v_reusejp_1890_:
{
lean_object* v___x_1892_; lean_object* v___x_1893_; lean_object* v___x_1894_; lean_object* v___x_1895_; lean_object* v___x_1896_; 
v___x_1892_ = l_StateRefT_x27_instMonad___redArg(v___x_1891_);
v___x_1893_ = l_ReaderT_instMonad___redArg(v___x_1892_);
v___x_1894_ = l_ReaderT_instMonad___redArg(v___x_1893_);
v___x_1895_ = l_StateRefT_x27_instMonad___redArg(v___x_1894_);
v___x_1896_ = l_StateRefT_x27_instMonad___redArg(v___x_1895_);
switch(lean_obj_tag(v_x_1841_))
{
case 0:
{
lean_object* v_i_1897_; lean_object* v___x_1898_; lean_object* v___x_1899_; lean_object* v___x_4583__overap_1900_; lean_object* v___x_1901_; lean_object* v___x_1902_; 
lean_dec_ref(v_v_1839_);
v_i_1897_ = lean_ctor_get(v_x_1841_, 2);
lean_inc(v_i_1897_);
lean_dec_ref_known(v_x_1841_, 3);
v___x_1898_ = l_Lean_instInhabitedExpr;
v___x_1899_ = l_instInhabitedOfMonad___redArg(v___x_1896_, v___x_1898_);
v___x_4583__overap_1900_ = lean_array_get(v___x_1899_, v_assumptions_1840_, v_i_1897_);
lean_dec(v_i_1897_);
lean_dec(v___x_1899_);
v___x_1901_ = lean_box(v___y_1845_);
lean_inc(v___y_1850_);
lean_inc_ref(v___y_1849_);
lean_inc(v___y_1848_);
lean_inc_ref(v___y_1847_);
lean_inc(v___y_1846_);
lean_inc_ref(v___y_1844_);
lean_inc(v___y_1843_);
lean_inc(v___y_1842_);
v___x_1902_ = lean_apply_10(v___x_4583__overap_1900_, v___y_1842_, v___y_1843_, v___y_1844_, v___x_1901_, v___y_1846_, v___y_1847_, v___y_1848_, v___y_1849_, v___y_1850_, lean_box(0));
return v___x_1902_;
}
case 1:
{
lean_object* v_s_1903_; lean_object* v_c_1904_; lean_object* v_j_1905_; lean_object* v___x_1906_; 
lean_dec_ref(v___x_1896_);
v_s_1903_ = lean_ctor_get(v_x_1841_, 0);
lean_inc_ref(v_s_1903_);
v_c_1904_ = lean_ctor_get(v_x_1841_, 1);
lean_inc(v_c_1904_);
v_j_1905_ = lean_ctor_get(v_x_1841_, 2);
lean_inc_ref(v_j_1905_);
lean_dec_ref_known(v_x_1841_, 3);
lean_inc_ref(v_v_1839_);
v___x_1906_ = l_Lean_Elab_Tactic_Omega_Justification_proof___redArg(v_c_1904_, v_v_1839_, v_assumptions_1840_, v_j_1905_, v___y_1842_, v___y_1843_, v___y_1844_, v___y_1845_, v___y_1846_, v___y_1847_, v___y_1848_, v___y_1849_, v___y_1850_);
if (lean_obj_tag(v___x_1906_) == 0)
{
lean_object* v_a_1907_; lean_object* v___x_1909_; uint8_t v_isShared_1910_; uint8_t v_isSharedCheck_1915_; 
v_a_1907_ = lean_ctor_get(v___x_1906_, 0);
v_isSharedCheck_1915_ = !lean_is_exclusive(v___x_1906_);
if (v_isSharedCheck_1915_ == 0)
{
v___x_1909_ = v___x_1906_;
v_isShared_1910_ = v_isSharedCheck_1915_;
goto v_resetjp_1908_;
}
else
{
lean_inc(v_a_1907_);
lean_dec(v___x_1906_);
v___x_1909_ = lean_box(0);
v_isShared_1910_ = v_isSharedCheck_1915_;
goto v_resetjp_1908_;
}
v_resetjp_1908_:
{
lean_object* v___x_1911_; lean_object* v___x_1913_; 
v___x_1911_ = l_Lean_Elab_Tactic_Omega_Justification_tidyProof(v_s_1903_, v_c_1904_, v_v_1839_, v_a_1907_);
lean_dec(v_c_1904_);
lean_dec_ref(v_s_1903_);
if (v_isShared_1910_ == 0)
{
lean_ctor_set(v___x_1909_, 0, v___x_1911_);
v___x_1913_ = v___x_1909_;
goto v_reusejp_1912_;
}
else
{
lean_object* v_reuseFailAlloc_1914_; 
v_reuseFailAlloc_1914_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1914_, 0, v___x_1911_);
v___x_1913_ = v_reuseFailAlloc_1914_;
goto v_reusejp_1912_;
}
v_reusejp_1912_:
{
return v___x_1913_;
}
}
}
else
{
lean_dec(v_c_1904_);
lean_dec_ref(v_s_1903_);
lean_dec_ref(v_v_1839_);
return v___x_1906_;
}
}
case 2:
{
lean_object* v_s_1916_; lean_object* v_t_1917_; lean_object* v_j_1918_; lean_object* v_k_1919_; lean_object* v___x_1920_; 
lean_dec_ref(v___x_1896_);
v_s_1916_ = lean_ctor_get(v_x_1841_, 0);
lean_inc_ref(v_s_1916_);
v_t_1917_ = lean_ctor_get(v_x_1841_, 1);
lean_inc_ref(v_t_1917_);
v_j_1918_ = lean_ctor_get(v_x_1841_, 3);
lean_inc_ref(v_j_1918_);
v_k_1919_ = lean_ctor_get(v_x_1841_, 4);
lean_inc_ref(v_k_1919_);
lean_dec_ref_known(v_x_1841_, 5);
lean_inc_ref(v_v_1839_);
v___x_1920_ = l_Lean_Elab_Tactic_Omega_Justification_proof___redArg(v_c_1838_, v_v_1839_, v_assumptions_1840_, v_j_1918_, v___y_1842_, v___y_1843_, v___y_1844_, v___y_1845_, v___y_1846_, v___y_1847_, v___y_1848_, v___y_1849_, v___y_1850_);
if (lean_obj_tag(v___x_1920_) == 0)
{
lean_object* v_a_1921_; lean_object* v___x_1922_; 
v_a_1921_ = lean_ctor_get(v___x_1920_, 0);
lean_inc(v_a_1921_);
lean_dec_ref_known(v___x_1920_, 1);
lean_inc_ref(v_v_1839_);
v___x_1922_ = l_Lean_Elab_Tactic_Omega_Justification_proof___redArg(v_c_1838_, v_v_1839_, v_assumptions_1840_, v_k_1919_, v___y_1842_, v___y_1843_, v___y_1844_, v___y_1845_, v___y_1846_, v___y_1847_, v___y_1848_, v___y_1849_, v___y_1850_);
if (lean_obj_tag(v___x_1922_) == 0)
{
lean_object* v_a_1923_; lean_object* v___x_1925_; uint8_t v_isShared_1926_; uint8_t v_isSharedCheck_1931_; 
v_a_1923_ = lean_ctor_get(v___x_1922_, 0);
v_isSharedCheck_1931_ = !lean_is_exclusive(v___x_1922_);
if (v_isSharedCheck_1931_ == 0)
{
v___x_1925_ = v___x_1922_;
v_isShared_1926_ = v_isSharedCheck_1931_;
goto v_resetjp_1924_;
}
else
{
lean_inc(v_a_1923_);
lean_dec(v___x_1922_);
v___x_1925_ = lean_box(0);
v_isShared_1926_ = v_isSharedCheck_1931_;
goto v_resetjp_1924_;
}
v_resetjp_1924_:
{
lean_object* v___x_1927_; lean_object* v___x_1929_; 
v___x_1927_ = l_Lean_Elab_Tactic_Omega_Justification_combineProof(v_s_1916_, v_t_1917_, v_c_1838_, v_v_1839_, v_a_1921_, v_a_1923_);
lean_dec_ref(v_t_1917_);
lean_dec_ref(v_s_1916_);
if (v_isShared_1926_ == 0)
{
lean_ctor_set(v___x_1925_, 0, v___x_1927_);
v___x_1929_ = v___x_1925_;
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
else
{
lean_dec(v_a_1921_);
lean_dec_ref(v_t_1917_);
lean_dec_ref(v_s_1916_);
lean_dec_ref(v_v_1839_);
return v___x_1922_;
}
}
else
{
lean_dec_ref(v_k_1919_);
lean_dec_ref(v_t_1917_);
lean_dec_ref(v_s_1916_);
lean_dec_ref(v_v_1839_);
return v___x_1920_;
}
}
case 3:
{
lean_object* v_s_1932_; lean_object* v_t_1933_; lean_object* v_x_1934_; lean_object* v_y_1935_; lean_object* v_a_1936_; lean_object* v_j_1937_; lean_object* v_b_1938_; lean_object* v_k_1939_; lean_object* v___x_1940_; 
lean_dec_ref(v___x_1896_);
v_s_1932_ = lean_ctor_get(v_x_1841_, 0);
lean_inc_ref(v_s_1932_);
v_t_1933_ = lean_ctor_get(v_x_1841_, 1);
lean_inc_ref(v_t_1933_);
v_x_1934_ = lean_ctor_get(v_x_1841_, 2);
lean_inc(v_x_1934_);
v_y_1935_ = lean_ctor_get(v_x_1841_, 3);
lean_inc(v_y_1935_);
v_a_1936_ = lean_ctor_get(v_x_1841_, 4);
lean_inc(v_a_1936_);
v_j_1937_ = lean_ctor_get(v_x_1841_, 5);
lean_inc_ref(v_j_1937_);
v_b_1938_ = lean_ctor_get(v_x_1841_, 6);
lean_inc(v_b_1938_);
v_k_1939_ = lean_ctor_get(v_x_1841_, 7);
lean_inc_ref(v_k_1939_);
lean_dec_ref_known(v_x_1841_, 8);
lean_inc_ref(v_v_1839_);
v___x_1940_ = l_Lean_Elab_Tactic_Omega_Justification_proof___redArg(v_x_1934_, v_v_1839_, v_assumptions_1840_, v_j_1937_, v___y_1842_, v___y_1843_, v___y_1844_, v___y_1845_, v___y_1846_, v___y_1847_, v___y_1848_, v___y_1849_, v___y_1850_);
if (lean_obj_tag(v___x_1940_) == 0)
{
lean_object* v_a_1941_; lean_object* v___x_1942_; 
v_a_1941_ = lean_ctor_get(v___x_1940_, 0);
lean_inc(v_a_1941_);
lean_dec_ref_known(v___x_1940_, 1);
lean_inc_ref(v_v_1839_);
v___x_1942_ = l_Lean_Elab_Tactic_Omega_Justification_proof___redArg(v_y_1935_, v_v_1839_, v_assumptions_1840_, v_k_1939_, v___y_1842_, v___y_1843_, v___y_1844_, v___y_1845_, v___y_1846_, v___y_1847_, v___y_1848_, v___y_1849_, v___y_1850_);
if (lean_obj_tag(v___x_1942_) == 0)
{
lean_object* v_a_1943_; lean_object* v___x_1945_; uint8_t v_isShared_1946_; uint8_t v_isSharedCheck_1951_; 
v_a_1943_ = lean_ctor_get(v___x_1942_, 0);
v_isSharedCheck_1951_ = !lean_is_exclusive(v___x_1942_);
if (v_isSharedCheck_1951_ == 0)
{
v___x_1945_ = v___x_1942_;
v_isShared_1946_ = v_isSharedCheck_1951_;
goto v_resetjp_1944_;
}
else
{
lean_inc(v_a_1943_);
lean_dec(v___x_1942_);
v___x_1945_ = lean_box(0);
v_isShared_1946_ = v_isSharedCheck_1951_;
goto v_resetjp_1944_;
}
v_resetjp_1944_:
{
lean_object* v___x_1947_; lean_object* v___x_1949_; 
v___x_1947_ = l_Lean_Elab_Tactic_Omega_Justification_comboProof(v_s_1932_, v_t_1933_, v_a_1936_, v_x_1934_, v_b_1938_, v_y_1935_, v_v_1839_, v_a_1941_, v_a_1943_);
lean_dec(v_y_1935_);
lean_dec(v_b_1938_);
lean_dec(v_x_1934_);
lean_dec(v_a_1936_);
lean_dec_ref(v_t_1933_);
lean_dec_ref(v_s_1932_);
if (v_isShared_1946_ == 0)
{
lean_ctor_set(v___x_1945_, 0, v___x_1947_);
v___x_1949_ = v___x_1945_;
goto v_reusejp_1948_;
}
else
{
lean_object* v_reuseFailAlloc_1950_; 
v_reuseFailAlloc_1950_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1950_, 0, v___x_1947_);
v___x_1949_ = v_reuseFailAlloc_1950_;
goto v_reusejp_1948_;
}
v_reusejp_1948_:
{
return v___x_1949_;
}
}
}
else
{
lean_dec(v_a_1941_);
lean_dec(v_b_1938_);
lean_dec(v_a_1936_);
lean_dec(v_y_1935_);
lean_dec(v_x_1934_);
lean_dec_ref(v_t_1933_);
lean_dec_ref(v_s_1932_);
lean_dec_ref(v_v_1839_);
return v___x_1942_;
}
}
else
{
lean_dec_ref(v_k_1939_);
lean_dec(v_b_1938_);
lean_dec(v_a_1936_);
lean_dec(v_y_1935_);
lean_dec(v_x_1934_);
lean_dec_ref(v_t_1933_);
lean_dec_ref(v_s_1932_);
lean_dec_ref(v_v_1839_);
return v___x_1940_;
}
}
default: 
{
lean_object* v_m_1952_; lean_object* v_r_1953_; lean_object* v_i_1954_; lean_object* v_x_1955_; lean_object* v_j_1956_; lean_object* v___x_1957_; 
lean_dec_ref(v___x_1896_);
v_m_1952_ = lean_ctor_get(v_x_1841_, 0);
lean_inc(v_m_1952_);
v_r_1953_ = lean_ctor_get(v_x_1841_, 1);
lean_inc(v_r_1953_);
v_i_1954_ = lean_ctor_get(v_x_1841_, 2);
lean_inc(v_i_1954_);
v_x_1955_ = lean_ctor_get(v_x_1841_, 3);
lean_inc(v_x_1955_);
v_j_1956_ = lean_ctor_get(v_x_1841_, 4);
lean_inc_ref(v_j_1956_);
lean_dec_ref_known(v_x_1841_, 5);
lean_inc_ref(v_v_1839_);
v___x_1957_ = l_Lean_Elab_Tactic_Omega_Justification_proof___redArg(v_x_1955_, v_v_1839_, v_assumptions_1840_, v_j_1956_, v___y_1842_, v___y_1843_, v___y_1844_, v___y_1845_, v___y_1846_, v___y_1847_, v___y_1848_, v___y_1849_, v___y_1850_);
if (lean_obj_tag(v___x_1957_) == 0)
{
lean_object* v_a_1958_; lean_object* v___x_1959_; 
v_a_1958_ = lean_ctor_get(v___x_1957_, 0);
lean_inc(v_a_1958_);
lean_dec_ref_known(v___x_1957_, 1);
v___x_1959_ = l_Lean_Elab_Tactic_Omega_Justification_bmodProof(v_m_1952_, v_r_1953_, v_i_1954_, v_x_1955_, v_v_1839_, v_a_1958_, v___y_1847_, v___y_1848_, v___y_1849_, v___y_1850_);
lean_dec(v_x_1955_);
lean_dec(v_r_1953_);
return v___x_1959_;
}
else
{
lean_dec(v_x_1955_);
lean_dec(v_i_1954_);
lean_dec(v_r_1953_);
lean_dec(v_m_1952_);
lean_dec_ref(v_v_1839_);
return v___x_1957_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_proof___redArg___boxed(lean_object* v_c_1966_, lean_object* v_v_1967_, lean_object* v_assumptions_1968_, lean_object* v_x_1969_, lean_object* v___y_1970_, lean_object* v___y_1971_, lean_object* v___y_1972_, lean_object* v___y_1973_, lean_object* v___y_1974_, lean_object* v___y_1975_, lean_object* v___y_1976_, lean_object* v___y_1977_, lean_object* v___y_1978_, lean_object* v___y_1979_){
_start:
{
uint8_t v___y_4735__boxed_1980_; lean_object* v_res_1981_; 
v___y_4735__boxed_1980_ = lean_unbox(v___y_1973_);
v_res_1981_ = l_Lean_Elab_Tactic_Omega_Justification_proof___redArg(v_c_1966_, v_v_1967_, v_assumptions_1968_, v_x_1969_, v___y_1970_, v___y_1971_, v___y_1972_, v___y_4735__boxed_1980_, v___y_1974_, v___y_1975_, v___y_1976_, v___y_1977_, v___y_1978_);
lean_dec(v___y_1978_);
lean_dec_ref(v___y_1977_);
lean_dec(v___y_1976_);
lean_dec_ref(v___y_1975_);
lean_dec(v___y_1974_);
lean_dec_ref(v___y_1972_);
lean_dec(v___y_1971_);
lean_dec(v___y_1970_);
lean_dec_ref(v_assumptions_1968_);
lean_dec(v_c_1966_);
return v_res_1981_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_proof(lean_object* v_s_1982_, lean_object* v_c_1983_, lean_object* v_v_1984_, lean_object* v_assumptions_1985_, lean_object* v_x_1986_, lean_object* v___y_1987_, lean_object* v___y_1988_, lean_object* v___y_1989_, uint8_t v___y_1990_, lean_object* v___y_1991_, lean_object* v___y_1992_, lean_object* v___y_1993_, lean_object* v___y_1994_, lean_object* v___y_1995_){
_start:
{
lean_object* v___x_1997_; 
v___x_1997_ = l_Lean_Elab_Tactic_Omega_Justification_proof___redArg(v_c_1983_, v_v_1984_, v_assumptions_1985_, v_x_1986_, v___y_1987_, v___y_1988_, v___y_1989_, v___y_1990_, v___y_1991_, v___y_1992_, v___y_1993_, v___y_1994_, v___y_1995_);
return v___x_1997_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_proof___boxed(lean_object* v_s_1998_, lean_object* v_c_1999_, lean_object* v_v_2000_, lean_object* v_assumptions_2001_, lean_object* v_x_2002_, lean_object* v___y_2003_, lean_object* v___y_2004_, lean_object* v___y_2005_, lean_object* v___y_2006_, lean_object* v___y_2007_, lean_object* v___y_2008_, lean_object* v___y_2009_, lean_object* v___y_2010_, lean_object* v___y_2011_, lean_object* v___y_2012_){
_start:
{
uint8_t v___y_5012__boxed_2013_; lean_object* v_res_2014_; 
v___y_5012__boxed_2013_ = lean_unbox(v___y_2006_);
v_res_2014_ = l_Lean_Elab_Tactic_Omega_Justification_proof(v_s_1998_, v_c_1999_, v_v_2000_, v_assumptions_2001_, v_x_2002_, v___y_2003_, v___y_2004_, v___y_2005_, v___y_5012__boxed_2013_, v___y_2007_, v___y_2008_, v___y_2009_, v___y_2010_, v___y_2011_);
lean_dec(v___y_2011_);
lean_dec_ref(v___y_2010_);
lean_dec(v___y_2009_);
lean_dec_ref(v___y_2008_);
lean_dec(v___y_2007_);
lean_dec_ref(v___y_2005_);
lean_dec(v___y_2004_);
lean_dec(v___y_2003_);
lean_dec_ref(v_assumptions_2001_);
lean_dec(v_c_1999_);
lean_dec_ref(v_s_1998_);
return v_res_2014_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Fact_instToString___lam__0(lean_object* v_f_2015_){
_start:
{
lean_object* v_coeffs_2016_; lean_object* v_constraint_2017_; lean_object* v_justification_2018_; lean_object* v___x_2019_; 
v_coeffs_2016_ = lean_ctor_get(v_f_2015_, 0);
lean_inc(v_coeffs_2016_);
v_constraint_2017_ = lean_ctor_get(v_f_2015_, 1);
lean_inc_ref(v_constraint_2017_);
v_justification_2018_ = lean_ctor_get(v_f_2015_, 2);
lean_inc_ref(v_justification_2018_);
lean_dec_ref(v_f_2015_);
v___x_2019_ = l_Lean_Elab_Tactic_Omega_Justification_toString(v_constraint_2017_, v_coeffs_2016_, v_justification_2018_);
return v___x_2019_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Fact_tidy(lean_object* v_f_2022_){
_start:
{
lean_object* v_coeffs_2023_; lean_object* v_constraint_2024_; lean_object* v_justification_2025_; lean_object* v___x_2026_; 
v_coeffs_2023_ = lean_ctor_get(v_f_2022_, 0);
v_constraint_2024_ = lean_ctor_get(v_f_2022_, 1);
v_justification_2025_ = lean_ctor_get(v_f_2022_, 2);
lean_inc_ref(v_justification_2025_);
lean_inc(v_coeffs_2023_);
lean_inc_ref(v_constraint_2024_);
v___x_2026_ = l_Lean_Elab_Tactic_Omega_Justification_tidy_x3f(v_constraint_2024_, v_coeffs_2023_, v_justification_2025_);
if (lean_obj_tag(v___x_2026_) == 0)
{
return v_f_2022_;
}
else
{
lean_object* v___x_2028_; uint8_t v_isShared_2029_; uint8_t v_isSharedCheck_2038_; 
v_isSharedCheck_2038_ = !lean_is_exclusive(v_f_2022_);
if (v_isSharedCheck_2038_ == 0)
{
lean_object* v_unused_2039_; lean_object* v_unused_2040_; lean_object* v_unused_2041_; 
v_unused_2039_ = lean_ctor_get(v_f_2022_, 2);
lean_dec(v_unused_2039_);
v_unused_2040_ = lean_ctor_get(v_f_2022_, 1);
lean_dec(v_unused_2040_);
v_unused_2041_ = lean_ctor_get(v_f_2022_, 0);
lean_dec(v_unused_2041_);
v___x_2028_ = v_f_2022_;
v_isShared_2029_ = v_isSharedCheck_2038_;
goto v_resetjp_2027_;
}
else
{
lean_dec(v_f_2022_);
v___x_2028_ = lean_box(0);
v_isShared_2029_ = v_isSharedCheck_2038_;
goto v_resetjp_2027_;
}
v_resetjp_2027_:
{
lean_object* v_val_2030_; lean_object* v_snd_2031_; lean_object* v_fst_2032_; lean_object* v_fst_2033_; lean_object* v_snd_2034_; lean_object* v___x_2036_; 
v_val_2030_ = lean_ctor_get(v___x_2026_, 0);
lean_inc(v_val_2030_);
lean_dec_ref_known(v___x_2026_, 1);
v_snd_2031_ = lean_ctor_get(v_val_2030_, 1);
lean_inc(v_snd_2031_);
v_fst_2032_ = lean_ctor_get(v_val_2030_, 0);
lean_inc(v_fst_2032_);
lean_dec(v_val_2030_);
v_fst_2033_ = lean_ctor_get(v_snd_2031_, 0);
lean_inc(v_fst_2033_);
v_snd_2034_ = lean_ctor_get(v_snd_2031_, 1);
lean_inc(v_snd_2034_);
lean_dec(v_snd_2031_);
if (v_isShared_2029_ == 0)
{
lean_ctor_set(v___x_2028_, 2, v_snd_2034_);
lean_ctor_set(v___x_2028_, 1, v_fst_2032_);
lean_ctor_set(v___x_2028_, 0, v_fst_2033_);
v___x_2036_ = v___x_2028_;
goto v_reusejp_2035_;
}
else
{
lean_object* v_reuseFailAlloc_2037_; 
v_reuseFailAlloc_2037_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2037_, 0, v_fst_2033_);
lean_ctor_set(v_reuseFailAlloc_2037_, 1, v_fst_2032_);
lean_ctor_set(v_reuseFailAlloc_2037_, 2, v_snd_2034_);
v___x_2036_ = v_reuseFailAlloc_2037_;
goto v_reusejp_2035_;
}
v_reusejp_2035_:
{
return v___x_2036_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Fact_combo(lean_object* v_a_2042_, lean_object* v_f_2043_, lean_object* v_b_2044_, lean_object* v_g_2045_){
_start:
{
lean_object* v_coeffs_2046_; lean_object* v_constraint_2047_; lean_object* v_justification_2048_; lean_object* v_coeffs_2049_; lean_object* v_constraint_2050_; lean_object* v_justification_2051_; lean_object* v___x_2053_; uint8_t v_isShared_2054_; uint8_t v_isSharedCheck_2061_; 
v_coeffs_2046_ = lean_ctor_get(v_f_2043_, 0);
lean_inc(v_coeffs_2046_);
v_constraint_2047_ = lean_ctor_get(v_f_2043_, 1);
lean_inc_ref(v_constraint_2047_);
v_justification_2048_ = lean_ctor_get(v_f_2043_, 2);
lean_inc_ref(v_justification_2048_);
lean_dec_ref(v_f_2043_);
v_coeffs_2049_ = lean_ctor_get(v_g_2045_, 0);
v_constraint_2050_ = lean_ctor_get(v_g_2045_, 1);
v_justification_2051_ = lean_ctor_get(v_g_2045_, 2);
v_isSharedCheck_2061_ = !lean_is_exclusive(v_g_2045_);
if (v_isSharedCheck_2061_ == 0)
{
v___x_2053_ = v_g_2045_;
v_isShared_2054_ = v_isSharedCheck_2061_;
goto v_resetjp_2052_;
}
else
{
lean_inc(v_justification_2051_);
lean_inc(v_constraint_2050_);
lean_inc(v_coeffs_2049_);
lean_dec(v_g_2045_);
v___x_2053_ = lean_box(0);
v_isShared_2054_ = v_isSharedCheck_2061_;
goto v_resetjp_2052_;
}
v_resetjp_2052_:
{
lean_object* v___x_2055_; lean_object* v___x_2056_; lean_object* v___x_2057_; lean_object* v___x_2059_; 
lean_inc(v_coeffs_2049_);
lean_inc(v_coeffs_2046_);
v___x_2055_ = l_List_zipWithAll___at___00Lean_Omega_IntList_combo_spec__0(v_a_2042_, v_b_2044_, v_coeffs_2046_, v_coeffs_2049_);
lean_inc_ref(v_constraint_2050_);
lean_inc(v_b_2044_);
lean_inc_ref(v_constraint_2047_);
lean_inc(v_a_2042_);
v___x_2056_ = l_Lean_Omega_Constraint_combo(v_a_2042_, v_constraint_2047_, v_b_2044_, v_constraint_2050_);
v___x_2057_ = lean_alloc_ctor(3, 8, 0);
lean_ctor_set(v___x_2057_, 0, v_constraint_2047_);
lean_ctor_set(v___x_2057_, 1, v_constraint_2050_);
lean_ctor_set(v___x_2057_, 2, v_coeffs_2046_);
lean_ctor_set(v___x_2057_, 3, v_coeffs_2049_);
lean_ctor_set(v___x_2057_, 4, v_a_2042_);
lean_ctor_set(v___x_2057_, 5, v_justification_2048_);
lean_ctor_set(v___x_2057_, 6, v_b_2044_);
lean_ctor_set(v___x_2057_, 7, v_justification_2051_);
if (v_isShared_2054_ == 0)
{
lean_ctor_set(v___x_2053_, 2, v___x_2057_);
lean_ctor_set(v___x_2053_, 1, v___x_2056_);
lean_ctor_set(v___x_2053_, 0, v___x_2055_);
v___x_2059_ = v___x_2053_;
goto v_reusejp_2058_;
}
else
{
lean_object* v_reuseFailAlloc_2060_; 
v_reuseFailAlloc_2060_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2060_, 0, v___x_2055_);
lean_ctor_set(v_reuseFailAlloc_2060_, 1, v___x_2056_);
lean_ctor_set(v_reuseFailAlloc_2060_, 2, v___x_2057_);
v___x_2059_ = v_reuseFailAlloc_2060_;
goto v_reusejp_2058_;
}
v_reusejp_2058_:
{
return v___x_2059_;
}
}
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__11(void){
_start:
{
lean_object* v___x_2087_; lean_object* v___x_2088_; 
v___x_2087_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__10));
v___x_2088_ = l_Lean_mkAtom(v___x_2087_);
return v___x_2088_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__12(void){
_start:
{
lean_object* v___x_2089_; lean_object* v___x_2090_; lean_object* v___x_2091_; 
v___x_2089_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__11, &l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__11_once, _init_l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__11);
v___x_2090_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__3));
v___x_2091_ = lean_array_push(v___x_2090_, v___x_2089_);
return v___x_2091_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__13(void){
_start:
{
lean_object* v___x_2092_; lean_object* v___x_2093_; lean_object* v___x_2094_; lean_object* v___x_2095_; 
v___x_2092_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__12, &l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__12_once, _init_l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__12);
v___x_2093_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__9));
v___x_2094_ = lean_box(2);
v___x_2095_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2095_, 0, v___x_2094_);
lean_ctor_set(v___x_2095_, 1, v___x_2093_);
lean_ctor_set(v___x_2095_, 2, v___x_2092_);
return v___x_2095_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__14(void){
_start:
{
lean_object* v___x_2096_; lean_object* v___x_2097_; lean_object* v___x_2098_; 
v___x_2096_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__13, &l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__13_once, _init_l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__13);
v___x_2097_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__3));
v___x_2098_ = lean_array_push(v___x_2097_, v___x_2096_);
return v___x_2098_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__15(void){
_start:
{
lean_object* v___x_2099_; lean_object* v___x_2100_; lean_object* v___x_2101_; lean_object* v___x_2102_; 
v___x_2099_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__14, &l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__14_once, _init_l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__14);
v___x_2100_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__7));
v___x_2101_ = lean_box(2);
v___x_2102_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2102_, 0, v___x_2101_);
lean_ctor_set(v___x_2102_, 1, v___x_2100_);
lean_ctor_set(v___x_2102_, 2, v___x_2099_);
return v___x_2102_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__16(void){
_start:
{
lean_object* v___x_2103_; lean_object* v___x_2104_; lean_object* v___x_2105_; 
v___x_2103_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__15, &l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__15_once, _init_l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__15);
v___x_2104_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__3));
v___x_2105_ = lean_array_push(v___x_2104_, v___x_2103_);
return v___x_2105_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__17(void){
_start:
{
lean_object* v___x_2106_; lean_object* v___x_2107_; lean_object* v___x_2108_; lean_object* v___x_2109_; 
v___x_2106_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__16, &l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__16_once, _init_l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__16);
v___x_2107_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__5));
v___x_2108_ = lean_box(2);
v___x_2109_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2109_, 0, v___x_2108_);
lean_ctor_set(v___x_2109_, 1, v___x_2107_);
lean_ctor_set(v___x_2109_, 2, v___x_2106_);
return v___x_2109_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__18(void){
_start:
{
lean_object* v___x_2110_; lean_object* v___x_2111_; lean_object* v___x_2112_; 
v___x_2110_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__17, &l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__17_once, _init_l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__17);
v___x_2111_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__3));
v___x_2112_ = lean_array_push(v___x_2111_, v___x_2110_);
return v___x_2112_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__19(void){
_start:
{
lean_object* v___x_2113_; lean_object* v___x_2114_; lean_object* v___x_2115_; lean_object* v___x_2116_; 
v___x_2113_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__18, &l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__18_once, _init_l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__18);
v___x_2114_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__2));
v___x_2115_ = lean_box(2);
v___x_2116_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2116_, 0, v___x_2115_);
lean_ctor_set(v___x_2116_, 1, v___x_2114_);
lean_ctor_set(v___x_2116_, 2, v___x_2113_);
return v___x_2116_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam(void){
_start:
{
lean_object* v___x_2117_; 
v___x_2117_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__19, &l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__19_once, _init_l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__19);
return v___x_2117_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_Omega_Problem_isEmpty(lean_object* v_p_2118_){
_start:
{
lean_object* v_constraints_2119_; lean_object* v_size_2120_; lean_object* v___x_2121_; uint8_t v___x_2122_; 
v_constraints_2119_ = lean_ctor_get(v_p_2118_, 2);
v_size_2120_ = lean_ctor_get(v_constraints_2119_, 0);
v___x_2121_ = lean_unsigned_to_nat(0u);
v___x_2122_ = lean_nat_dec_eq(v_size_2120_, v___x_2121_);
return v___x_2122_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_isEmpty___boxed(lean_object* v_p_2123_){
_start:
{
uint8_t v_res_2124_; lean_object* v_r_2125_; 
v_res_2124_ = l_Lean_Elab_Tactic_Omega_Problem_isEmpty(v_p_2123_);
lean_dec_ref(v_p_2123_);
v_r_2125_ = lean_box(v_res_2124_);
return v_r_2125_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__0(lean_object* v_a_2126_, lean_object* v_b_2127_, lean_object* v_d_2128_){
_start:
{
lean_object* v___x_2129_; lean_object* v___x_2130_; 
v___x_2129_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2129_, 0, v_a_2126_);
lean_ctor_set(v___x_2129_, 1, v_b_2127_);
v___x_2130_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2130_, 0, v___x_2129_);
lean_ctor_set(v___x_2130_, 1, v_d_2128_);
return v___x_2130_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__1(lean_object* v___x_2131_, lean_object* v_x_2132_){
_start:
{
lean_object* v_snd_2133_; lean_object* v_constraint_2134_; lean_object* v_fst_2135_; lean_object* v_lowerBound_2136_; lean_object* v_upperBound_2137_; lean_object* v___x_2138_; lean_object* v___x_2139_; lean_object* v___x_2140_; lean_object* v___y_2142_; lean_object* v___y_2143_; 
v_snd_2133_ = lean_ctor_get(v_x_2132_, 1);
v_constraint_2134_ = lean_ctor_get(v_snd_2133_, 1);
lean_inc_ref(v_constraint_2134_);
v_fst_2135_ = lean_ctor_get(v_x_2132_, 0);
lean_inc(v_fst_2135_);
lean_dec_ref(v_x_2132_);
v_lowerBound_2136_ = lean_ctor_get(v_constraint_2134_, 0);
lean_inc(v_lowerBound_2136_);
v_upperBound_2137_ = lean_ctor_get(v_constraint_2134_, 1);
lean_inc(v_upperBound_2137_);
lean_dec_ref(v_constraint_2134_);
v___x_2138_ = l_List_toString___redArg(v___x_2131_, v_fst_2135_);
v___x_2139_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__0));
v___x_2140_ = lean_string_append(v___x_2138_, v___x_2139_);
if (lean_obj_tag(v_lowerBound_2136_) == 0)
{
if (lean_obj_tag(v_upperBound_2137_) == 0)
{
lean_object* v___x_2148_; lean_object* v___x_2149_; 
v___x_2148_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__2));
v___x_2149_ = lean_string_append(v___x_2140_, v___x_2148_);
return v___x_2149_;
}
else
{
lean_object* v_val_2150_; lean_object* v___x_2151_; lean_object* v___y_2153_; lean_object* v_intZero_2158_; uint8_t v_isNeg_2159_; 
v_val_2150_ = lean_ctor_get(v_upperBound_2137_, 0);
lean_inc(v_val_2150_);
lean_dec_ref_known(v_upperBound_2137_, 1);
v___x_2151_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__3));
v_intZero_2158_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17);
v_isNeg_2159_ = lean_int_dec_lt(v_val_2150_, v_intZero_2158_);
if (v_isNeg_2159_ == 0)
{
lean_object* v_a_2160_; lean_object* v___x_2161_; 
v_a_2160_ = lean_nat_abs(v_val_2150_);
lean_dec(v_val_2150_);
v___x_2161_ = l_Nat_reprFast(v_a_2160_);
v___y_2153_ = v___x_2161_;
goto v___jp_2152_;
}
else
{
lean_object* v_abs_2162_; lean_object* v_one_2163_; lean_object* v_a_2164_; lean_object* v___x_2165_; lean_object* v___x_2166_; lean_object* v___x_2167_; lean_object* v___x_2168_; 
v_abs_2162_ = lean_nat_abs(v_val_2150_);
lean_dec(v_val_2150_);
v_one_2163_ = lean_unsigned_to_nat(1u);
v_a_2164_ = lean_nat_sub(v_abs_2162_, v_one_2163_);
lean_dec(v_abs_2162_);
v___x_2165_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__4));
v___x_2166_ = lean_nat_add(v_a_2164_, v_one_2163_);
lean_dec(v_a_2164_);
v___x_2167_ = l_Nat_reprFast(v___x_2166_);
v___x_2168_ = lean_string_append(v___x_2165_, v___x_2167_);
lean_dec_ref(v___x_2167_);
v___y_2153_ = v___x_2168_;
goto v___jp_2152_;
}
v___jp_2152_:
{
lean_object* v___x_2154_; lean_object* v___x_2155_; lean_object* v___x_2156_; lean_object* v___x_2157_; 
v___x_2154_ = lean_string_append(v___x_2151_, v___y_2153_);
lean_dec_ref(v___y_2153_);
v___x_2155_ = ((lean_object*)(l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0___closed__2));
v___x_2156_ = lean_string_append(v___x_2154_, v___x_2155_);
v___x_2157_ = lean_string_append(v___x_2140_, v___x_2156_);
lean_dec_ref(v___x_2156_);
return v___x_2157_;
}
}
}
else
{
if (lean_obj_tag(v_upperBound_2137_) == 0)
{
lean_object* v_val_2169_; lean_object* v___x_2170_; lean_object* v___y_2172_; lean_object* v_intZero_2177_; uint8_t v_isNeg_2178_; 
v_val_2169_ = lean_ctor_get(v_lowerBound_2136_, 0);
lean_inc(v_val_2169_);
lean_dec_ref_known(v_lowerBound_2136_, 1);
v___x_2170_ = ((lean_object*)(l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0___closed__1));
v_intZero_2177_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17);
v_isNeg_2178_ = lean_int_dec_lt(v_val_2169_, v_intZero_2177_);
if (v_isNeg_2178_ == 0)
{
lean_object* v_a_2179_; lean_object* v___x_2180_; 
v_a_2179_ = lean_nat_abs(v_val_2169_);
lean_dec(v_val_2169_);
v___x_2180_ = l_Nat_reprFast(v_a_2179_);
v___y_2172_ = v___x_2180_;
goto v___jp_2171_;
}
else
{
lean_object* v_abs_2181_; lean_object* v_one_2182_; lean_object* v_a_2183_; lean_object* v___x_2184_; lean_object* v___x_2185_; lean_object* v___x_2186_; lean_object* v___x_2187_; 
v_abs_2181_ = lean_nat_abs(v_val_2169_);
lean_dec(v_val_2169_);
v_one_2182_ = lean_unsigned_to_nat(1u);
v_a_2183_ = lean_nat_sub(v_abs_2181_, v_one_2182_);
lean_dec(v_abs_2181_);
v___x_2184_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__4));
v___x_2185_ = lean_nat_add(v_a_2183_, v_one_2182_);
lean_dec(v_a_2183_);
v___x_2186_ = l_Nat_reprFast(v___x_2185_);
v___x_2187_ = lean_string_append(v___x_2184_, v___x_2186_);
lean_dec_ref(v___x_2186_);
v___y_2172_ = v___x_2187_;
goto v___jp_2171_;
}
v___jp_2171_:
{
lean_object* v___x_2173_; lean_object* v___x_2174_; lean_object* v___x_2175_; lean_object* v___x_2176_; 
v___x_2173_ = lean_string_append(v___x_2170_, v___y_2172_);
lean_dec_ref(v___y_2172_);
v___x_2174_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__5));
v___x_2175_ = lean_string_append(v___x_2173_, v___x_2174_);
v___x_2176_ = lean_string_append(v___x_2140_, v___x_2175_);
lean_dec_ref(v___x_2175_);
return v___x_2176_;
}
}
else
{
lean_object* v_val_2188_; lean_object* v_val_2189_; uint8_t v___x_2190_; 
v_val_2188_ = lean_ctor_get(v_lowerBound_2136_, 0);
lean_inc(v_val_2188_);
lean_dec_ref_known(v_lowerBound_2136_, 1);
v_val_2189_ = lean_ctor_get(v_upperBound_2137_, 0);
lean_inc(v_val_2189_);
lean_dec_ref_known(v_upperBound_2137_, 1);
v___x_2190_ = lean_int_dec_lt(v_val_2189_, v_val_2188_);
if (v___x_2190_ == 0)
{
uint8_t v___x_2191_; 
v___x_2191_ = lean_int_dec_eq(v_val_2188_, v_val_2189_);
if (v___x_2191_ == 0)
{
lean_object* v___x_2192_; lean_object* v___y_2194_; lean_object* v_intZero_2209_; uint8_t v_isNeg_2210_; 
v___x_2192_ = ((lean_object*)(l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0___closed__1));
v_intZero_2209_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17);
v_isNeg_2210_ = lean_int_dec_lt(v_val_2188_, v_intZero_2209_);
if (v_isNeg_2210_ == 0)
{
lean_object* v_a_2211_; lean_object* v___x_2212_; 
v_a_2211_ = lean_nat_abs(v_val_2188_);
lean_dec(v_val_2188_);
v___x_2212_ = l_Nat_reprFast(v_a_2211_);
v___y_2194_ = v___x_2212_;
goto v___jp_2193_;
}
else
{
lean_object* v_abs_2213_; lean_object* v_one_2214_; lean_object* v_a_2215_; lean_object* v___x_2216_; lean_object* v___x_2217_; lean_object* v___x_2218_; lean_object* v___x_2219_; 
v_abs_2213_ = lean_nat_abs(v_val_2188_);
lean_dec(v_val_2188_);
v_one_2214_ = lean_unsigned_to_nat(1u);
v_a_2215_ = lean_nat_sub(v_abs_2213_, v_one_2214_);
lean_dec(v_abs_2213_);
v___x_2216_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__4));
v___x_2217_ = lean_nat_add(v_a_2215_, v_one_2214_);
lean_dec(v_a_2215_);
v___x_2218_ = l_Nat_reprFast(v___x_2217_);
v___x_2219_ = lean_string_append(v___x_2216_, v___x_2218_);
lean_dec_ref(v___x_2218_);
v___y_2194_ = v___x_2219_;
goto v___jp_2193_;
}
v___jp_2193_:
{
lean_object* v___x_2195_; lean_object* v___x_2196_; lean_object* v___x_2197_; lean_object* v_intZero_2198_; uint8_t v_isNeg_2199_; 
v___x_2195_ = lean_string_append(v___x_2192_, v___y_2194_);
lean_dec_ref(v___y_2194_);
v___x_2196_ = ((lean_object*)(l_List_foldl___at___00List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0_spec__0___closed__0));
v___x_2197_ = lean_string_append(v___x_2195_, v___x_2196_);
v_intZero_2198_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17);
v_isNeg_2199_ = lean_int_dec_lt(v_val_2189_, v_intZero_2198_);
if (v_isNeg_2199_ == 0)
{
lean_object* v_a_2200_; lean_object* v___x_2201_; 
v_a_2200_ = lean_nat_abs(v_val_2189_);
lean_dec(v_val_2189_);
v___x_2201_ = l_Nat_reprFast(v_a_2200_);
v___y_2142_ = v___x_2197_;
v___y_2143_ = v___x_2201_;
goto v___jp_2141_;
}
else
{
lean_object* v_abs_2202_; lean_object* v_one_2203_; lean_object* v_a_2204_; lean_object* v___x_2205_; lean_object* v___x_2206_; lean_object* v___x_2207_; lean_object* v___x_2208_; 
v_abs_2202_ = lean_nat_abs(v_val_2189_);
lean_dec(v_val_2189_);
v_one_2203_ = lean_unsigned_to_nat(1u);
v_a_2204_ = lean_nat_sub(v_abs_2202_, v_one_2203_);
lean_dec(v_abs_2202_);
v___x_2205_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__4));
v___x_2206_ = lean_nat_add(v_a_2204_, v_one_2203_);
lean_dec(v_a_2204_);
v___x_2207_ = l_Nat_reprFast(v___x_2206_);
v___x_2208_ = lean_string_append(v___x_2205_, v___x_2207_);
lean_dec_ref(v___x_2207_);
v___y_2142_ = v___x_2197_;
v___y_2143_ = v___x_2208_;
goto v___jp_2141_;
}
}
}
else
{
lean_object* v___x_2220_; lean_object* v___y_2222_; lean_object* v_intZero_2227_; uint8_t v_isNeg_2228_; 
lean_dec(v_val_2189_);
v___x_2220_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__6));
v_intZero_2227_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17);
v_isNeg_2228_ = lean_int_dec_lt(v_val_2188_, v_intZero_2227_);
if (v_isNeg_2228_ == 0)
{
lean_object* v_a_2229_; lean_object* v___x_2230_; 
v_a_2229_ = lean_nat_abs(v_val_2188_);
lean_dec(v_val_2188_);
v___x_2230_ = l_Nat_reprFast(v_a_2229_);
v___y_2222_ = v___x_2230_;
goto v___jp_2221_;
}
else
{
lean_object* v_abs_2231_; lean_object* v_one_2232_; lean_object* v_a_2233_; lean_object* v___x_2234_; lean_object* v___x_2235_; lean_object* v___x_2236_; lean_object* v___x_2237_; 
v_abs_2231_ = lean_nat_abs(v_val_2188_);
lean_dec(v_val_2188_);
v_one_2232_ = lean_unsigned_to_nat(1u);
v_a_2233_ = lean_nat_sub(v_abs_2231_, v_one_2232_);
lean_dec(v_abs_2231_);
v___x_2234_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__4));
v___x_2235_ = lean_nat_add(v_a_2233_, v_one_2232_);
lean_dec(v_a_2233_);
v___x_2236_ = l_Nat_reprFast(v___x_2235_);
v___x_2237_ = lean_string_append(v___x_2234_, v___x_2236_);
lean_dec_ref(v___x_2236_);
v___y_2222_ = v___x_2237_;
goto v___jp_2221_;
}
v___jp_2221_:
{
lean_object* v___x_2223_; lean_object* v___x_2224_; lean_object* v___x_2225_; lean_object* v___x_2226_; 
v___x_2223_ = lean_string_append(v___x_2220_, v___y_2222_);
lean_dec_ref(v___y_2222_);
v___x_2224_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__7));
v___x_2225_ = lean_string_append(v___x_2223_, v___x_2224_);
v___x_2226_ = lean_string_append(v___x_2140_, v___x_2225_);
lean_dec_ref(v___x_2225_);
return v___x_2226_;
}
}
}
else
{
lean_object* v___x_2238_; lean_object* v___x_2239_; 
lean_dec(v_val_2189_);
lean_dec(v_val_2188_);
v___x_2238_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__8));
v___x_2239_ = lean_string_append(v___x_2140_, v___x_2238_);
return v___x_2239_;
}
}
}
v___jp_2141_:
{
lean_object* v___x_2144_; lean_object* v___x_2145_; lean_object* v___x_2146_; lean_object* v___x_2147_; 
v___x_2144_ = lean_string_append(v___y_2142_, v___y_2143_);
lean_dec_ref(v___y_2143_);
v___x_2145_ = ((lean_object*)(l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0___closed__2));
v___x_2146_ = lean_string_append(v___x_2144_, v___x_2145_);
v___x_2147_ = lean_string_append(v___x_2140_, v___x_2146_);
lean_dec_ref(v___x_2146_);
return v___x_2147_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__2(lean_object* v___x_2240_, lean_object* v___f_2241_, lean_object* v_l_2242_, lean_object* v_acc_2243_){
_start:
{
lean_object* v___x_2244_; 
v___x_2244_ = l_Std_DHashMap_Internal_AssocList_foldrM___redArg(v___x_2240_, v___f_2241_, v_acc_2243_, v_l_2242_);
return v___x_2244_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__3(lean_object* v___f_2266_, lean_object* v___f_2267_, lean_object* v_p_2268_){
_start:
{
uint8_t v_possible_2269_; 
v_possible_2269_ = lean_ctor_get_uint8(v_p_2268_, sizeof(void*)*7);
if (v_possible_2269_ == 0)
{
lean_object* v___x_2270_; 
lean_dec_ref(v_p_2268_);
lean_dec_ref(v___f_2267_);
lean_dec_ref(v___f_2266_);
v___x_2270_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__3___closed__0));
return v___x_2270_;
}
else
{
lean_object* v_constraints_2271_; uint8_t v___x_2272_; 
v_constraints_2271_ = lean_ctor_get(v_p_2268_, 2);
lean_inc_ref(v_constraints_2271_);
v___x_2272_ = l_Lean_Elab_Tactic_Omega_Problem_isEmpty(v_p_2268_);
lean_dec_ref(v_p_2268_);
if (v___x_2272_ == 0)
{
lean_object* v___x_2273_; lean_object* v_buckets_2274_; lean_object* v___x_2275_; lean_object* v___y_2277_; lean_object* v___x_2281_; lean_object* v___x_2282_; lean_object* v___x_2283_; uint8_t v___x_2284_; 
v___x_2273_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__3___closed__10));
v_buckets_2274_ = lean_ctor_get(v_constraints_2271_, 1);
lean_inc_ref(v_buckets_2274_);
lean_dec_ref(v_constraints_2271_);
v___x_2275_ = ((lean_object*)(l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__0));
v___x_2281_ = lean_box(0);
v___x_2282_ = lean_array_get_size(v_buckets_2274_);
v___x_2283_ = lean_unsigned_to_nat(0u);
v___x_2284_ = lean_nat_dec_lt(v___x_2283_, v___x_2282_);
if (v___x_2284_ == 0)
{
lean_dec_ref(v_buckets_2274_);
lean_dec_ref(v___f_2267_);
v___y_2277_ = v___x_2281_;
goto v___jp_2276_;
}
else
{
lean_object* v___f_2285_; size_t v___x_2286_; size_t v___x_2287_; lean_object* v___x_2288_; 
v___f_2285_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__2), 4, 2);
lean_closure_set(v___f_2285_, 0, v___x_2273_);
lean_closure_set(v___f_2285_, 1, v___f_2267_);
v___x_2286_ = lean_usize_of_nat(v___x_2282_);
v___x_2287_ = ((size_t)0ULL);
v___x_2288_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_2273_, v___f_2285_, v_buckets_2274_, v___x_2286_, v___x_2287_, v___x_2281_);
v___y_2277_ = v___x_2288_;
goto v___jp_2276_;
}
v___jp_2276_:
{
lean_object* v___x_2278_; lean_object* v___x_2279_; lean_object* v___x_2280_; 
v___x_2278_ = lean_box(0);
v___x_2279_ = l_List_mapTR_loop___redArg(v___f_2266_, v___y_2277_, v___x_2278_);
v___x_2280_ = l_String_intercalate(v___x_2275_, v___x_2279_);
return v___x_2280_;
}
}
else
{
lean_object* v___x_2289_; 
lean_dec_ref(v_constraints_2271_);
lean_dec_ref(v___f_2267_);
lean_dec_ref(v___f_2266_);
v___x_2289_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__3___closed__11));
return v___x_2289_;
}
}
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__2(void){
_start:
{
lean_object* v___x_2304_; lean_object* v___x_2305_; lean_object* v___x_2306_; 
v___x_2304_ = lean_box(0);
v___x_2305_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__1));
v___x_2306_ = l_Lean_Expr_const___override(v___x_2305_, v___x_2304_);
return v___x_2306_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__6(void){
_start:
{
lean_object* v___x_2312_; lean_object* v___x_2313_; lean_object* v___x_2314_; 
v___x_2312_ = lean_box(0);
v___x_2313_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__5));
v___x_2314_ = l_Lean_Expr_const___override(v___x_2313_, v___x_2312_);
return v___x_2314_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__9(void){
_start:
{
lean_object* v___x_2321_; lean_object* v___x_2322_; lean_object* v___x_2323_; 
v___x_2321_ = lean_box(0);
v___x_2322_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__8));
v___x_2323_ = l_Lean_Expr_const___override(v___x_2322_, v___x_2321_);
return v___x_2323_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_proveFalse(lean_object* v_s_2324_, lean_object* v_x_2325_, lean_object* v_j_2326_, lean_object* v_assumptions_2327_, lean_object* v___y_2328_, lean_object* v___y_2329_, lean_object* v___y_2330_, uint8_t v___y_2331_, lean_object* v___y_2332_, lean_object* v___y_2333_, lean_object* v___y_2334_, lean_object* v___y_2335_, lean_object* v___y_2336_){
_start:
{
lean_object* v___x_2338_; 
v___x_2338_ = l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg(v___y_2329_, v___y_2333_, v___y_2334_, v___y_2335_, v___y_2336_);
if (lean_obj_tag(v___x_2338_) == 0)
{
lean_object* v_a_2339_; lean_object* v___x_2340_; 
v_a_2339_ = lean_ctor_get(v___x_2338_, 0);
lean_inc_n(v_a_2339_, 2);
lean_dec_ref_known(v___x_2338_, 1);
v___x_2340_ = l_Lean_Elab_Tactic_Omega_Justification_proof___redArg(v_x_2325_, v_a_2339_, v_assumptions_2327_, v_j_2326_, v___y_2328_, v___y_2329_, v___y_2330_, v___y_2331_, v___y_2332_, v___y_2333_, v___y_2334_, v___y_2335_, v___y_2336_);
if (lean_obj_tag(v___x_2340_) == 0)
{
lean_object* v_a_2341_; lean_object* v___x_2342_; lean_object* v_lowerBound_2343_; lean_object* v_upperBound_2344_; lean_object* v_nil_2345_; lean_object* v_cons_2346_; lean_object* v___x_2347_; lean_object* v___y_2349_; lean_object* v___y_2367_; lean_object* v___y_2368_; lean_object* v___y_2369_; lean_object* v___x_2372_; lean_object* v___y_2374_; 
v_a_2341_ = lean_ctor_get(v___x_2340_, 0);
lean_inc(v_a_2341_);
lean_dec_ref_known(v___x_2340_, 1);
v___x_2342_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__6, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__6_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__6);
v_lowerBound_2343_ = lean_ctor_get(v_s_2324_, 0);
v_upperBound_2344_ = lean_ctor_get(v_s_2324_, 1);
v_nil_2345_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__12, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__12_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__12);
v_cons_2346_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__16, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__16_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__16);
v___x_2347_ = l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lean_Elab_Tactic_Omega_Justification_tidyProof_spec__0(v_nil_2345_, v_cons_2346_, v_x_2325_);
v___x_2372_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__2, &l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__2_once, _init_l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__2);
if (lean_obj_tag(v_lowerBound_2343_) == 0)
{
lean_object* v___x_2390_; 
v___x_2390_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__7, &l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__7_once, _init_l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__7);
v___y_2374_ = v___x_2390_;
goto v___jp_2373_;
}
else
{
lean_object* v_val_2391_; lean_object* v___x_2392_; lean_object* v___y_2394_; lean_object* v___x_2396_; uint8_t v___x_2397_; 
v_val_2391_ = lean_ctor_get(v_lowerBound_2343_, 0);
v___x_2392_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__10, &l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__10_once, _init_l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__10);
v___x_2396_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17);
v___x_2397_ = lean_int_dec_le(v___x_2396_, v_val_2391_);
if (v___x_2397_ == 0)
{
lean_object* v___x_2398_; lean_object* v___x_2399_; lean_object* v___x_2400_; lean_object* v___x_2401_; lean_object* v___x_2402_; lean_object* v___x_2403_; 
v___x_2398_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__23, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__23_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__23);
v___x_2399_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__26, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__26_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__26);
v___x_2400_ = lean_int_neg(v_val_2391_);
v___x_2401_ = l_Int_toNat(v___x_2400_);
lean_dec(v___x_2400_);
v___x_2402_ = l_Lean_instToExprInt_mkNat(v___x_2401_);
v___x_2403_ = l_Lean_mkApp3(v___x_2398_, v___x_2342_, v___x_2399_, v___x_2402_);
v___y_2394_ = v___x_2403_;
goto v___jp_2393_;
}
else
{
lean_object* v___x_2404_; lean_object* v___x_2405_; 
v___x_2404_ = l_Int_toNat(v_val_2391_);
v___x_2405_ = l_Lean_instToExprInt_mkNat(v___x_2404_);
v___y_2394_ = v___x_2405_;
goto v___jp_2393_;
}
v___jp_2393_:
{
lean_object* v___x_2395_; 
v___x_2395_ = l_Lean_mkAppB(v___x_2392_, v___x_2342_, v___y_2394_);
v___y_2374_ = v___x_2395_;
goto v___jp_2373_;
}
}
v___jp_2348_:
{
lean_object* v___x_2350_; lean_object* v___x_2351_; lean_object* v___x_2352_; lean_object* v___x_2353_; 
v___x_2350_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__2, &l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__2_once, _init_l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__2);
lean_inc_ref(v___y_2349_);
v___x_2351_ = l_Lean_Expr_app___override(v___x_2350_, v___y_2349_);
v___x_2352_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__6, &l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__6_once, _init_l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__6);
v___x_2353_ = l_Lean_Meta_mkEq(v___x_2351_, v___x_2352_, v___y_2333_, v___y_2334_, v___y_2335_, v___y_2336_);
if (lean_obj_tag(v___x_2353_) == 0)
{
lean_object* v_a_2354_; lean_object* v___x_2355_; 
v_a_2354_ = lean_ctor_get(v___x_2353_, 0);
lean_inc(v_a_2354_);
lean_dec_ref_known(v___x_2353_, 1);
v___x_2355_ = l_Lean_Meta_mkDecideProof(v_a_2354_, v___y_2333_, v___y_2334_, v___y_2335_, v___y_2336_);
if (lean_obj_tag(v___x_2355_) == 0)
{
lean_object* v_a_2356_; lean_object* v___x_2358_; uint8_t v_isShared_2359_; uint8_t v_isSharedCheck_2365_; 
v_a_2356_ = lean_ctor_get(v___x_2355_, 0);
v_isSharedCheck_2365_ = !lean_is_exclusive(v___x_2355_);
if (v_isSharedCheck_2365_ == 0)
{
v___x_2358_ = v___x_2355_;
v_isShared_2359_ = v_isSharedCheck_2365_;
goto v_resetjp_2357_;
}
else
{
lean_inc(v_a_2356_);
lean_dec(v___x_2355_);
v___x_2358_ = lean_box(0);
v_isShared_2359_ = v_isSharedCheck_2365_;
goto v_resetjp_2357_;
}
v_resetjp_2357_:
{
lean_object* v___x_2360_; lean_object* v___x_2361_; lean_object* v___x_2363_; 
v___x_2360_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__9, &l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__9_once, _init_l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__9);
v___x_2361_ = l_Lean_mkApp5(v___x_2360_, v___y_2349_, v_a_2356_, v___x_2347_, v_a_2339_, v_a_2341_);
if (v_isShared_2359_ == 0)
{
lean_ctor_set(v___x_2358_, 0, v___x_2361_);
v___x_2363_ = v___x_2358_;
goto v_reusejp_2362_;
}
else
{
lean_object* v_reuseFailAlloc_2364_; 
v_reuseFailAlloc_2364_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2364_, 0, v___x_2361_);
v___x_2363_ = v_reuseFailAlloc_2364_;
goto v_reusejp_2362_;
}
v_reusejp_2362_:
{
return v___x_2363_;
}
}
}
else
{
lean_dec_ref(v___y_2349_);
lean_dec_ref(v___x_2347_);
lean_dec(v_a_2341_);
lean_dec(v_a_2339_);
return v___x_2355_;
}
}
else
{
lean_dec_ref(v___y_2349_);
lean_dec_ref(v___x_2347_);
lean_dec(v_a_2341_);
lean_dec(v_a_2339_);
return v___x_2353_;
}
}
v___jp_2366_:
{
lean_object* v___x_2370_; lean_object* v___x_2371_; 
lean_inc_ref(v___y_2368_);
v___x_2370_ = l_Lean_mkAppB(v___y_2368_, v___x_2342_, v___y_2369_);
v___x_2371_ = l_Lean_Expr_app___override(v___y_2367_, v___x_2370_);
v___y_2349_ = v___x_2371_;
goto v___jp_2348_;
}
v___jp_2373_:
{
lean_object* v___x_2375_; 
v___x_2375_ = l_Lean_Expr_app___override(v___x_2372_, v___y_2374_);
if (lean_obj_tag(v_upperBound_2344_) == 0)
{
lean_object* v___x_2376_; lean_object* v___x_2377_; 
v___x_2376_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__7, &l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__7_once, _init_l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__7);
v___x_2377_ = l_Lean_Expr_app___override(v___x_2375_, v___x_2376_);
v___y_2349_ = v___x_2377_;
goto v___jp_2348_;
}
else
{
lean_object* v_val_2378_; lean_object* v___x_2379_; lean_object* v___x_2380_; uint8_t v___x_2381_; 
v_val_2378_ = lean_ctor_get(v_upperBound_2344_, 0);
v___x_2379_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__10, &l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__10_once, _init_l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__10);
v___x_2380_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17);
v___x_2381_ = lean_int_dec_le(v___x_2380_, v_val_2378_);
if (v___x_2381_ == 0)
{
lean_object* v___x_2382_; lean_object* v___x_2383_; lean_object* v___x_2384_; lean_object* v___x_2385_; lean_object* v___x_2386_; lean_object* v___x_2387_; 
v___x_2382_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__23, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__23_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__23);
v___x_2383_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__26, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__26_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__26);
v___x_2384_ = lean_int_neg(v_val_2378_);
v___x_2385_ = l_Int_toNat(v___x_2384_);
lean_dec(v___x_2384_);
v___x_2386_ = l_Lean_instToExprInt_mkNat(v___x_2385_);
v___x_2387_ = l_Lean_mkApp3(v___x_2382_, v___x_2342_, v___x_2383_, v___x_2386_);
v___y_2367_ = v___x_2375_;
v___y_2368_ = v___x_2379_;
v___y_2369_ = v___x_2387_;
goto v___jp_2366_;
}
else
{
lean_object* v___x_2388_; lean_object* v___x_2389_; 
v___x_2388_ = l_Int_toNat(v_val_2378_);
v___x_2389_ = l_Lean_instToExprInt_mkNat(v___x_2388_);
v___y_2367_ = v___x_2375_;
v___y_2368_ = v___x_2379_;
v___y_2369_ = v___x_2389_;
goto v___jp_2366_;
}
}
}
}
else
{
lean_dec(v_a_2339_);
return v___x_2340_;
}
}
else
{
lean_dec_ref(v_j_2326_);
return v___x_2338_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_proveFalse___boxed(lean_object* v_s_2406_, lean_object* v_x_2407_, lean_object* v_j_2408_, lean_object* v_assumptions_2409_, lean_object* v___y_2410_, lean_object* v___y_2411_, lean_object* v___y_2412_, lean_object* v___y_2413_, lean_object* v___y_2414_, lean_object* v___y_2415_, lean_object* v___y_2416_, lean_object* v___y_2417_, lean_object* v___y_2418_, lean_object* v___y_2419_){
_start:
{
uint8_t v___y_8079__boxed_2420_; lean_object* v_res_2421_; 
v___y_8079__boxed_2420_ = lean_unbox(v___y_2413_);
v_res_2421_ = l_Lean_Elab_Tactic_Omega_Problem_proveFalse(v_s_2406_, v_x_2407_, v_j_2408_, v_assumptions_2409_, v___y_2410_, v___y_2411_, v___y_2412_, v___y_8079__boxed_2420_, v___y_2414_, v___y_2415_, v___y_2416_, v___y_2417_, v___y_2418_);
lean_dec(v___y_2418_);
lean_dec_ref(v___y_2417_);
lean_dec(v___y_2416_);
lean_dec_ref(v___y_2415_);
lean_dec(v___y_2414_);
lean_dec_ref(v___y_2412_);
lean_dec(v___y_2411_);
lean_dec(v___y_2410_);
lean_dec_ref(v_assumptions_2409_);
lean_dec(v_x_2407_);
lean_dec_ref(v_s_2406_);
return v_res_2421_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_insertConstraint___lam__0(lean_object* v_constraint_2422_, lean_object* v_coeffs_2423_, lean_object* v_justification_2424_, lean_object* v_x_2425_){
_start:
{
lean_object* v___x_2426_; 
v___x_2426_ = l_Lean_Elab_Tactic_Omega_Justification_toString(v_constraint_2422_, v_coeffs_2423_, v_justification_2424_);
return v___x_2426_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__0_spec__1___redArg(lean_object* v_a_2427_, lean_object* v_x_2428_){
_start:
{
if (lean_obj_tag(v_x_2428_) == 0)
{
uint8_t v___x_2429_; 
v___x_2429_ = 0;
return v___x_2429_;
}
else
{
lean_object* v_key_2430_; lean_object* v_tail_2431_; uint8_t v___x_2432_; 
v_key_2430_ = lean_ctor_get(v_x_2428_, 0);
v_tail_2431_ = lean_ctor_get(v_x_2428_, 2);
v___x_2432_ = l_List_beq___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__1(v_key_2430_, v_a_2427_);
if (v___x_2432_ == 0)
{
v_x_2428_ = v_tail_2431_;
goto _start;
}
else
{
return v___x_2432_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__0_spec__1___redArg___boxed(lean_object* v_a_2434_, lean_object* v_x_2435_){
_start:
{
uint8_t v_res_2436_; lean_object* v_r_2437_; 
v_res_2436_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__0_spec__1___redArg(v_a_2434_, v_x_2435_);
lean_dec(v_x_2435_);
lean_dec(v_a_2434_);
v_r_2437_ = lean_box(v_res_2436_);
return v_r_2437_;
}
}
LEAN_EXPORT uint64_t l_List_foldl___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__0_spec__0(uint64_t v_x_2438_, lean_object* v_x_2439_){
_start:
{
if (lean_obj_tag(v_x_2439_) == 0)
{
return v_x_2438_;
}
else
{
lean_object* v_head_2440_; lean_object* v_tail_2441_; lean_object* v_intZero_2442_; uint8_t v_isNeg_2443_; 
v_head_2440_ = lean_ctor_get(v_x_2439_, 0);
v_tail_2441_ = lean_ctor_get(v_x_2439_, 1);
v_intZero_2442_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17);
v_isNeg_2443_ = lean_int_dec_lt(v_head_2440_, v_intZero_2442_);
if (v_isNeg_2443_ == 0)
{
lean_object* v_a_2444_; lean_object* v___x_2445_; lean_object* v___x_2446_; uint64_t v___x_2447_; uint64_t v___x_2448_; 
v_a_2444_ = lean_nat_abs(v_head_2440_);
v___x_2445_ = lean_unsigned_to_nat(2u);
v___x_2446_ = lean_nat_mul(v___x_2445_, v_a_2444_);
lean_dec(v_a_2444_);
v___x_2447_ = lean_uint64_of_nat(v___x_2446_);
lean_dec(v___x_2446_);
v___x_2448_ = lean_uint64_mix_hash(v_x_2438_, v___x_2447_);
v_x_2438_ = v___x_2448_;
v_x_2439_ = v_tail_2441_;
goto _start;
}
else
{
lean_object* v_abs_2450_; lean_object* v_one_2451_; lean_object* v_a_2452_; lean_object* v___x_2453_; lean_object* v___x_2454_; lean_object* v___x_2455_; uint64_t v___x_2456_; uint64_t v___x_2457_; 
v_abs_2450_ = lean_nat_abs(v_head_2440_);
v_one_2451_ = lean_unsigned_to_nat(1u);
v_a_2452_ = lean_nat_sub(v_abs_2450_, v_one_2451_);
lean_dec(v_abs_2450_);
v___x_2453_ = lean_unsigned_to_nat(2u);
v___x_2454_ = lean_nat_mul(v___x_2453_, v_a_2452_);
lean_dec(v_a_2452_);
v___x_2455_ = lean_nat_add(v___x_2454_, v_one_2451_);
lean_dec(v___x_2454_);
v___x_2456_ = lean_uint64_of_nat(v___x_2455_);
lean_dec(v___x_2455_);
v___x_2457_ = lean_uint64_mix_hash(v_x_2438_, v___x_2456_);
v_x_2438_ = v___x_2457_;
v_x_2439_ = v_tail_2441_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__0_spec__0___boxed(lean_object* v_x_2459_, lean_object* v_x_2460_){
_start:
{
uint64_t v_x_806__boxed_2461_; uint64_t v_res_2462_; lean_object* v_r_2463_; 
v_x_806__boxed_2461_ = lean_unbox_uint64(v_x_2459_);
lean_dec_ref(v_x_2459_);
v_res_2462_ = l_List_foldl___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__0_spec__0(v_x_806__boxed_2461_, v_x_2460_);
lean_dec(v_x_2460_);
v_r_2463_ = lean_box_uint64(v_res_2462_);
return v_r_2463_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__0_spec__2_spec__3_spec__5___redArg(lean_object* v_x_2464_, lean_object* v_x_2465_){
_start:
{
if (lean_obj_tag(v_x_2465_) == 0)
{
return v_x_2464_;
}
else
{
lean_object* v_key_2466_; lean_object* v_value_2467_; lean_object* v_tail_2468_; lean_object* v___x_2470_; uint8_t v_isShared_2471_; uint8_t v_isSharedCheck_2492_; 
v_key_2466_ = lean_ctor_get(v_x_2465_, 0);
v_value_2467_ = lean_ctor_get(v_x_2465_, 1);
v_tail_2468_ = lean_ctor_get(v_x_2465_, 2);
v_isSharedCheck_2492_ = !lean_is_exclusive(v_x_2465_);
if (v_isSharedCheck_2492_ == 0)
{
v___x_2470_ = v_x_2465_;
v_isShared_2471_ = v_isSharedCheck_2492_;
goto v_resetjp_2469_;
}
else
{
lean_inc(v_tail_2468_);
lean_inc(v_value_2467_);
lean_inc(v_key_2466_);
lean_dec(v_x_2465_);
v___x_2470_ = lean_box(0);
v_isShared_2471_ = v_isSharedCheck_2492_;
goto v_resetjp_2469_;
}
v_resetjp_2469_:
{
lean_object* v___x_2472_; uint64_t v___x_2473_; uint64_t v___x_2474_; uint64_t v___x_2475_; uint64_t v___x_2476_; uint64_t v_fold_2477_; uint64_t v___x_2478_; uint64_t v___x_2479_; uint64_t v___x_2480_; size_t v___x_2481_; size_t v___x_2482_; size_t v___x_2483_; size_t v___x_2484_; size_t v___x_2485_; lean_object* v___x_2486_; lean_object* v___x_2488_; 
v___x_2472_ = lean_array_get_size(v_x_2464_);
v___x_2473_ = 7ULL;
v___x_2474_ = l_List_foldl___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__0_spec__0(v___x_2473_, v_key_2466_);
v___x_2475_ = 32ULL;
v___x_2476_ = lean_uint64_shift_right(v___x_2474_, v___x_2475_);
v_fold_2477_ = lean_uint64_xor(v___x_2474_, v___x_2476_);
v___x_2478_ = 16ULL;
v___x_2479_ = lean_uint64_shift_right(v_fold_2477_, v___x_2478_);
v___x_2480_ = lean_uint64_xor(v_fold_2477_, v___x_2479_);
v___x_2481_ = lean_uint64_to_usize(v___x_2480_);
v___x_2482_ = lean_usize_of_nat(v___x_2472_);
v___x_2483_ = ((size_t)1ULL);
v___x_2484_ = lean_usize_sub(v___x_2482_, v___x_2483_);
v___x_2485_ = lean_usize_land(v___x_2481_, v___x_2484_);
v___x_2486_ = lean_array_uget_borrowed(v_x_2464_, v___x_2485_);
lean_inc(v___x_2486_);
if (v_isShared_2471_ == 0)
{
lean_ctor_set(v___x_2470_, 2, v___x_2486_);
v___x_2488_ = v___x_2470_;
goto v_reusejp_2487_;
}
else
{
lean_object* v_reuseFailAlloc_2491_; 
v_reuseFailAlloc_2491_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2491_, 0, v_key_2466_);
lean_ctor_set(v_reuseFailAlloc_2491_, 1, v_value_2467_);
lean_ctor_set(v_reuseFailAlloc_2491_, 2, v___x_2486_);
v___x_2488_ = v_reuseFailAlloc_2491_;
goto v_reusejp_2487_;
}
v_reusejp_2487_:
{
lean_object* v___x_2489_; 
v___x_2489_ = lean_array_uset(v_x_2464_, v___x_2485_, v___x_2488_);
v_x_2464_ = v___x_2489_;
v_x_2465_ = v_tail_2468_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__0_spec__2_spec__3___redArg(lean_object* v_i_2493_, lean_object* v_source_2494_, lean_object* v_target_2495_){
_start:
{
lean_object* v___x_2496_; uint8_t v___x_2497_; 
v___x_2496_ = lean_array_get_size(v_source_2494_);
v___x_2497_ = lean_nat_dec_lt(v_i_2493_, v___x_2496_);
if (v___x_2497_ == 0)
{
lean_dec_ref(v_source_2494_);
lean_dec(v_i_2493_);
return v_target_2495_;
}
else
{
lean_object* v_es_2498_; lean_object* v___x_2499_; lean_object* v_source_2500_; lean_object* v_target_2501_; lean_object* v___x_2502_; lean_object* v___x_2503_; 
v_es_2498_ = lean_array_fget(v_source_2494_, v_i_2493_);
v___x_2499_ = lean_box(0);
v_source_2500_ = lean_array_fset(v_source_2494_, v_i_2493_, v___x_2499_);
v_target_2501_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__0_spec__2_spec__3_spec__5___redArg(v_target_2495_, v_es_2498_);
v___x_2502_ = lean_unsigned_to_nat(1u);
v___x_2503_ = lean_nat_add(v_i_2493_, v___x_2502_);
lean_dec(v_i_2493_);
v_i_2493_ = v___x_2503_;
v_source_2494_ = v_source_2500_;
v_target_2495_ = v_target_2501_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__0_spec__2___redArg(lean_object* v_data_2505_){
_start:
{
lean_object* v___x_2506_; lean_object* v___x_2507_; lean_object* v_nbuckets_2508_; lean_object* v___x_2509_; lean_object* v___x_2510_; lean_object* v___x_2511_; lean_object* v___x_2512_; lean_object* v___x_2513_; 
v___x_2506_ = lean_array_get_size(v_data_2505_);
v___x_2507_ = lean_unsigned_to_nat(2u);
v_nbuckets_2508_ = lean_nat_mul(v___x_2506_, v___x_2507_);
v___x_2509_ = lean_unsigned_to_nat(0u);
v___x_2510_ = lean_box(0);
v___x_2511_ = lean_mk_array(v_nbuckets_2508_, v___x_2510_);
v___x_2512_ = lean_array_propagate_mark(v_data_2505_, v___x_2511_);
v___x_2513_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__0_spec__2_spec__3___redArg(v___x_2509_, v_data_2505_, v___x_2512_);
return v___x_2513_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__1___redArg(lean_object* v_m_2514_, lean_object* v_a_2515_, lean_object* v_b_2516_){
_start:
{
lean_object* v_size_2517_; lean_object* v_buckets_2518_; lean_object* v___x_2519_; uint64_t v___x_2520_; uint64_t v___x_2521_; uint64_t v___x_2522_; uint64_t v___x_2523_; uint64_t v_fold_2524_; uint64_t v___x_2525_; uint64_t v___x_2526_; uint64_t v___x_2527_; size_t v___x_2528_; size_t v___x_2529_; size_t v___x_2530_; size_t v___x_2531_; size_t v___x_2532_; lean_object* v_bkt_2533_; uint8_t v___x_2534_; 
v_size_2517_ = lean_ctor_get(v_m_2514_, 0);
v_buckets_2518_ = lean_ctor_get(v_m_2514_, 1);
v___x_2519_ = lean_array_get_size(v_buckets_2518_);
v___x_2520_ = 7ULL;
v___x_2521_ = l_List_foldl___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__0_spec__0(v___x_2520_, v_a_2515_);
v___x_2522_ = 32ULL;
v___x_2523_ = lean_uint64_shift_right(v___x_2521_, v___x_2522_);
v_fold_2524_ = lean_uint64_xor(v___x_2521_, v___x_2523_);
v___x_2525_ = 16ULL;
v___x_2526_ = lean_uint64_shift_right(v_fold_2524_, v___x_2525_);
v___x_2527_ = lean_uint64_xor(v_fold_2524_, v___x_2526_);
v___x_2528_ = lean_uint64_to_usize(v___x_2527_);
v___x_2529_ = lean_usize_of_nat(v___x_2519_);
v___x_2530_ = ((size_t)1ULL);
v___x_2531_ = lean_usize_sub(v___x_2529_, v___x_2530_);
v___x_2532_ = lean_usize_land(v___x_2528_, v___x_2531_);
v_bkt_2533_ = lean_array_uget_borrowed(v_buckets_2518_, v___x_2532_);
v___x_2534_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__0_spec__1___redArg(v_a_2515_, v_bkt_2533_);
if (v___x_2534_ == 0)
{
lean_object* v___x_2536_; uint8_t v_isShared_2537_; uint8_t v_isSharedCheck_2555_; 
lean_inc_ref(v_buckets_2518_);
lean_inc(v_size_2517_);
v_isSharedCheck_2555_ = !lean_is_exclusive(v_m_2514_);
if (v_isSharedCheck_2555_ == 0)
{
lean_object* v_unused_2556_; lean_object* v_unused_2557_; 
v_unused_2556_ = lean_ctor_get(v_m_2514_, 1);
lean_dec(v_unused_2556_);
v_unused_2557_ = lean_ctor_get(v_m_2514_, 0);
lean_dec(v_unused_2557_);
v___x_2536_ = v_m_2514_;
v_isShared_2537_ = v_isSharedCheck_2555_;
goto v_resetjp_2535_;
}
else
{
lean_dec(v_m_2514_);
v___x_2536_ = lean_box(0);
v_isShared_2537_ = v_isSharedCheck_2555_;
goto v_resetjp_2535_;
}
v_resetjp_2535_:
{
lean_object* v___x_2538_; lean_object* v_size_x27_2539_; lean_object* v___x_2540_; lean_object* v_buckets_x27_2541_; lean_object* v___x_2542_; lean_object* v___x_2543_; lean_object* v___x_2544_; lean_object* v___x_2545_; lean_object* v___x_2546_; uint8_t v___x_2547_; 
v___x_2538_ = lean_unsigned_to_nat(1u);
v_size_x27_2539_ = lean_nat_add(v_size_2517_, v___x_2538_);
lean_dec(v_size_2517_);
lean_inc(v_bkt_2533_);
v___x_2540_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2540_, 0, v_a_2515_);
lean_ctor_set(v___x_2540_, 1, v_b_2516_);
lean_ctor_set(v___x_2540_, 2, v_bkt_2533_);
v_buckets_x27_2541_ = lean_array_uset(v_buckets_2518_, v___x_2532_, v___x_2540_);
v___x_2542_ = lean_unsigned_to_nat(4u);
v___x_2543_ = lean_nat_mul(v_size_x27_2539_, v___x_2542_);
v___x_2544_ = lean_unsigned_to_nat(3u);
v___x_2545_ = lean_nat_div(v___x_2543_, v___x_2544_);
lean_dec(v___x_2543_);
v___x_2546_ = lean_array_get_size(v_buckets_x27_2541_);
v___x_2547_ = lean_nat_dec_le(v___x_2545_, v___x_2546_);
lean_dec(v___x_2545_);
if (v___x_2547_ == 0)
{
lean_object* v_val_2548_; lean_object* v___x_2550_; 
v_val_2548_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__0_spec__2___redArg(v_buckets_x27_2541_);
if (v_isShared_2537_ == 0)
{
lean_ctor_set(v___x_2536_, 1, v_val_2548_);
lean_ctor_set(v___x_2536_, 0, v_size_x27_2539_);
v___x_2550_ = v___x_2536_;
goto v_reusejp_2549_;
}
else
{
lean_object* v_reuseFailAlloc_2551_; 
v_reuseFailAlloc_2551_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2551_, 0, v_size_x27_2539_);
lean_ctor_set(v_reuseFailAlloc_2551_, 1, v_val_2548_);
v___x_2550_ = v_reuseFailAlloc_2551_;
goto v_reusejp_2549_;
}
v_reusejp_2549_:
{
return v___x_2550_;
}
}
else
{
lean_object* v___x_2553_; 
if (v_isShared_2537_ == 0)
{
lean_ctor_set(v___x_2536_, 1, v_buckets_x27_2541_);
lean_ctor_set(v___x_2536_, 0, v_size_x27_2539_);
v___x_2553_ = v___x_2536_;
goto v_reusejp_2552_;
}
else
{
lean_object* v_reuseFailAlloc_2554_; 
v_reuseFailAlloc_2554_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2554_, 0, v_size_x27_2539_);
lean_ctor_set(v_reuseFailAlloc_2554_, 1, v_buckets_x27_2541_);
v___x_2553_ = v_reuseFailAlloc_2554_;
goto v_reusejp_2552_;
}
v_reusejp_2552_:
{
return v___x_2553_;
}
}
}
}
else
{
lean_dec(v_b_2516_);
lean_dec(v_a_2515_);
return v_m_2514_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__0_spec__3___redArg(lean_object* v_a_2558_, lean_object* v_b_2559_, lean_object* v_x_2560_){
_start:
{
if (lean_obj_tag(v_x_2560_) == 0)
{
lean_dec(v_b_2559_);
lean_dec(v_a_2558_);
return v_x_2560_;
}
else
{
lean_object* v_key_2561_; lean_object* v_value_2562_; lean_object* v_tail_2563_; lean_object* v___x_2565_; uint8_t v_isShared_2566_; uint8_t v_isSharedCheck_2575_; 
v_key_2561_ = lean_ctor_get(v_x_2560_, 0);
v_value_2562_ = lean_ctor_get(v_x_2560_, 1);
v_tail_2563_ = lean_ctor_get(v_x_2560_, 2);
v_isSharedCheck_2575_ = !lean_is_exclusive(v_x_2560_);
if (v_isSharedCheck_2575_ == 0)
{
v___x_2565_ = v_x_2560_;
v_isShared_2566_ = v_isSharedCheck_2575_;
goto v_resetjp_2564_;
}
else
{
lean_inc(v_tail_2563_);
lean_inc(v_value_2562_);
lean_inc(v_key_2561_);
lean_dec(v_x_2560_);
v___x_2565_ = lean_box(0);
v_isShared_2566_ = v_isSharedCheck_2575_;
goto v_resetjp_2564_;
}
v_resetjp_2564_:
{
uint8_t v___x_2567_; 
v___x_2567_ = l_List_beq___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__1(v_key_2561_, v_a_2558_);
if (v___x_2567_ == 0)
{
lean_object* v___x_2568_; lean_object* v___x_2570_; 
v___x_2568_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__0_spec__3___redArg(v_a_2558_, v_b_2559_, v_tail_2563_);
if (v_isShared_2566_ == 0)
{
lean_ctor_set(v___x_2565_, 2, v___x_2568_);
v___x_2570_ = v___x_2565_;
goto v_reusejp_2569_;
}
else
{
lean_object* v_reuseFailAlloc_2571_; 
v_reuseFailAlloc_2571_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2571_, 0, v_key_2561_);
lean_ctor_set(v_reuseFailAlloc_2571_, 1, v_value_2562_);
lean_ctor_set(v_reuseFailAlloc_2571_, 2, v___x_2568_);
v___x_2570_ = v_reuseFailAlloc_2571_;
goto v_reusejp_2569_;
}
v_reusejp_2569_:
{
return v___x_2570_;
}
}
else
{
lean_object* v___x_2573_; 
lean_dec(v_value_2562_);
lean_dec(v_key_2561_);
if (v_isShared_2566_ == 0)
{
lean_ctor_set(v___x_2565_, 1, v_b_2559_);
lean_ctor_set(v___x_2565_, 0, v_a_2558_);
v___x_2573_ = v___x_2565_;
goto v_reusejp_2572_;
}
else
{
lean_object* v_reuseFailAlloc_2574_; 
v_reuseFailAlloc_2574_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2574_, 0, v_a_2558_);
lean_ctor_set(v_reuseFailAlloc_2574_, 1, v_b_2559_);
lean_ctor_set(v_reuseFailAlloc_2574_, 2, v_tail_2563_);
v___x_2573_ = v_reuseFailAlloc_2574_;
goto v_reusejp_2572_;
}
v_reusejp_2572_:
{
return v___x_2573_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__0___redArg(lean_object* v_m_2576_, lean_object* v_a_2577_, lean_object* v_b_2578_){
_start:
{
lean_object* v_size_2579_; lean_object* v_buckets_2580_; lean_object* v___x_2582_; uint8_t v_isShared_2583_; uint8_t v_isSharedCheck_2624_; 
v_size_2579_ = lean_ctor_get(v_m_2576_, 0);
v_buckets_2580_ = lean_ctor_get(v_m_2576_, 1);
v_isSharedCheck_2624_ = !lean_is_exclusive(v_m_2576_);
if (v_isSharedCheck_2624_ == 0)
{
v___x_2582_ = v_m_2576_;
v_isShared_2583_ = v_isSharedCheck_2624_;
goto v_resetjp_2581_;
}
else
{
lean_inc(v_buckets_2580_);
lean_inc(v_size_2579_);
lean_dec(v_m_2576_);
v___x_2582_ = lean_box(0);
v_isShared_2583_ = v_isSharedCheck_2624_;
goto v_resetjp_2581_;
}
v_resetjp_2581_:
{
lean_object* v___x_2584_; uint64_t v___x_2585_; uint64_t v___x_2586_; uint64_t v___x_2587_; uint64_t v___x_2588_; uint64_t v_fold_2589_; uint64_t v___x_2590_; uint64_t v___x_2591_; uint64_t v___x_2592_; size_t v___x_2593_; size_t v___x_2594_; size_t v___x_2595_; size_t v___x_2596_; size_t v___x_2597_; lean_object* v_bkt_2598_; uint8_t v___x_2599_; 
v___x_2584_ = lean_array_get_size(v_buckets_2580_);
v___x_2585_ = 7ULL;
v___x_2586_ = l_List_foldl___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__0_spec__0(v___x_2585_, v_a_2577_);
v___x_2587_ = 32ULL;
v___x_2588_ = lean_uint64_shift_right(v___x_2586_, v___x_2587_);
v_fold_2589_ = lean_uint64_xor(v___x_2586_, v___x_2588_);
v___x_2590_ = 16ULL;
v___x_2591_ = lean_uint64_shift_right(v_fold_2589_, v___x_2590_);
v___x_2592_ = lean_uint64_xor(v_fold_2589_, v___x_2591_);
v___x_2593_ = lean_uint64_to_usize(v___x_2592_);
v___x_2594_ = lean_usize_of_nat(v___x_2584_);
v___x_2595_ = ((size_t)1ULL);
v___x_2596_ = lean_usize_sub(v___x_2594_, v___x_2595_);
v___x_2597_ = lean_usize_land(v___x_2593_, v___x_2596_);
v_bkt_2598_ = lean_array_uget_borrowed(v_buckets_2580_, v___x_2597_);
v___x_2599_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__0_spec__1___redArg(v_a_2577_, v_bkt_2598_);
if (v___x_2599_ == 0)
{
lean_object* v___x_2600_; lean_object* v_size_x27_2601_; lean_object* v___x_2602_; lean_object* v_buckets_x27_2603_; lean_object* v___x_2604_; lean_object* v___x_2605_; lean_object* v___x_2606_; lean_object* v___x_2607_; lean_object* v___x_2608_; uint8_t v___x_2609_; 
v___x_2600_ = lean_unsigned_to_nat(1u);
v_size_x27_2601_ = lean_nat_add(v_size_2579_, v___x_2600_);
lean_dec(v_size_2579_);
lean_inc(v_bkt_2598_);
v___x_2602_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2602_, 0, v_a_2577_);
lean_ctor_set(v___x_2602_, 1, v_b_2578_);
lean_ctor_set(v___x_2602_, 2, v_bkt_2598_);
v_buckets_x27_2603_ = lean_array_uset(v_buckets_2580_, v___x_2597_, v___x_2602_);
v___x_2604_ = lean_unsigned_to_nat(4u);
v___x_2605_ = lean_nat_mul(v_size_x27_2601_, v___x_2604_);
v___x_2606_ = lean_unsigned_to_nat(3u);
v___x_2607_ = lean_nat_div(v___x_2605_, v___x_2606_);
lean_dec(v___x_2605_);
v___x_2608_ = lean_array_get_size(v_buckets_x27_2603_);
v___x_2609_ = lean_nat_dec_le(v___x_2607_, v___x_2608_);
lean_dec(v___x_2607_);
if (v___x_2609_ == 0)
{
lean_object* v_val_2610_; lean_object* v___x_2612_; 
v_val_2610_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__0_spec__2___redArg(v_buckets_x27_2603_);
if (v_isShared_2583_ == 0)
{
lean_ctor_set(v___x_2582_, 1, v_val_2610_);
lean_ctor_set(v___x_2582_, 0, v_size_x27_2601_);
v___x_2612_ = v___x_2582_;
goto v_reusejp_2611_;
}
else
{
lean_object* v_reuseFailAlloc_2613_; 
v_reuseFailAlloc_2613_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2613_, 0, v_size_x27_2601_);
lean_ctor_set(v_reuseFailAlloc_2613_, 1, v_val_2610_);
v___x_2612_ = v_reuseFailAlloc_2613_;
goto v_reusejp_2611_;
}
v_reusejp_2611_:
{
return v___x_2612_;
}
}
else
{
lean_object* v___x_2615_; 
if (v_isShared_2583_ == 0)
{
lean_ctor_set(v___x_2582_, 1, v_buckets_x27_2603_);
lean_ctor_set(v___x_2582_, 0, v_size_x27_2601_);
v___x_2615_ = v___x_2582_;
goto v_reusejp_2614_;
}
else
{
lean_object* v_reuseFailAlloc_2616_; 
v_reuseFailAlloc_2616_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2616_, 0, v_size_x27_2601_);
lean_ctor_set(v_reuseFailAlloc_2616_, 1, v_buckets_x27_2603_);
v___x_2615_ = v_reuseFailAlloc_2616_;
goto v_reusejp_2614_;
}
v_reusejp_2614_:
{
return v___x_2615_;
}
}
}
else
{
lean_object* v___x_2617_; lean_object* v_buckets_x27_2618_; lean_object* v___x_2619_; lean_object* v___x_2620_; lean_object* v___x_2622_; 
lean_inc(v_bkt_2598_);
v___x_2617_ = lean_box(0);
v_buckets_x27_2618_ = lean_array_uset(v_buckets_2580_, v___x_2597_, v___x_2617_);
v___x_2619_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__0_spec__3___redArg(v_a_2577_, v_b_2578_, v_bkt_2598_);
v___x_2620_ = lean_array_uset(v_buckets_x27_2618_, v___x_2597_, v___x_2619_);
if (v_isShared_2583_ == 0)
{
lean_ctor_set(v___x_2582_, 1, v___x_2620_);
v___x_2622_ = v___x_2582_;
goto v_reusejp_2621_;
}
else
{
lean_object* v_reuseFailAlloc_2623_; 
v_reuseFailAlloc_2623_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2623_, 0, v_size_2579_);
lean_ctor_set(v_reuseFailAlloc_2623_, 1, v___x_2620_);
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
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_insertConstraint(lean_object* v_p_2625_, lean_object* v_x_2626_){
_start:
{
lean_object* v_coeffs_2627_; lean_object* v_constraint_2628_; lean_object* v_justification_2629_; uint8_t v___x_2630_; 
v_coeffs_2627_ = lean_ctor_get(v_x_2626_, 0);
lean_inc(v_coeffs_2627_);
v_constraint_2628_ = lean_ctor_get(v_x_2626_, 1);
lean_inc_ref(v_constraint_2628_);
v_justification_2629_ = lean_ctor_get(v_x_2626_, 2);
v___x_2630_ = l_Lean_Omega_Constraint_isImpossible(v_constraint_2628_);
if (v___x_2630_ == 0)
{
lean_object* v_assumptions_2631_; lean_object* v_numVars_2632_; lean_object* v_constraints_2633_; lean_object* v_equalities_2634_; lean_object* v_eliminations_2635_; uint8_t v_possible_2636_; lean_object* v_proveFalse_x3f_2637_; lean_object* v_explanation_x3f_2638_; lean_object* v___x_2640_; uint8_t v_isShared_2641_; uint8_t v_isSharedCheck_2656_; 
v_assumptions_2631_ = lean_ctor_get(v_p_2625_, 0);
v_numVars_2632_ = lean_ctor_get(v_p_2625_, 1);
v_constraints_2633_ = lean_ctor_get(v_p_2625_, 2);
v_equalities_2634_ = lean_ctor_get(v_p_2625_, 3);
v_eliminations_2635_ = lean_ctor_get(v_p_2625_, 4);
v_possible_2636_ = lean_ctor_get_uint8(v_p_2625_, sizeof(void*)*7);
v_proveFalse_x3f_2637_ = lean_ctor_get(v_p_2625_, 5);
v_explanation_x3f_2638_ = lean_ctor_get(v_p_2625_, 6);
v_isSharedCheck_2656_ = !lean_is_exclusive(v_p_2625_);
if (v_isSharedCheck_2656_ == 0)
{
v___x_2640_ = v_p_2625_;
v_isShared_2641_ = v_isSharedCheck_2656_;
goto v_resetjp_2639_;
}
else
{
lean_inc(v_explanation_x3f_2638_);
lean_inc(v_proveFalse_x3f_2637_);
lean_inc(v_eliminations_2635_);
lean_inc(v_equalities_2634_);
lean_inc(v_constraints_2633_);
lean_inc(v_numVars_2632_);
lean_inc(v_assumptions_2631_);
lean_dec(v_p_2625_);
v___x_2640_ = lean_box(0);
v_isShared_2641_ = v_isSharedCheck_2656_;
goto v_resetjp_2639_;
}
v_resetjp_2639_:
{
lean_object* v___y_2643_; lean_object* v___x_2654_; uint8_t v___x_2655_; 
v___x_2654_ = l_List_lengthTR___redArg(v_coeffs_2627_);
v___x_2655_ = lean_nat_dec_le(v_numVars_2632_, v___x_2654_);
if (v___x_2655_ == 0)
{
lean_dec(v___x_2654_);
v___y_2643_ = v_numVars_2632_;
goto v___jp_2642_;
}
else
{
lean_dec(v_numVars_2632_);
v___y_2643_ = v___x_2654_;
goto v___jp_2642_;
}
v___jp_2642_:
{
lean_object* v___x_2644_; uint8_t v___x_2645_; 
lean_inc(v_coeffs_2627_);
v___x_2644_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__0___redArg(v_constraints_2633_, v_coeffs_2627_, v_x_2626_);
v___x_2645_ = l_Lean_Omega_Constraint_isExact(v_constraint_2628_);
lean_dec_ref(v_constraint_2628_);
if (v___x_2645_ == 0)
{
lean_object* v___x_2647_; 
lean_dec(v_coeffs_2627_);
if (v_isShared_2641_ == 0)
{
lean_ctor_set(v___x_2640_, 2, v___x_2644_);
lean_ctor_set(v___x_2640_, 1, v___y_2643_);
v___x_2647_ = v___x_2640_;
goto v_reusejp_2646_;
}
else
{
lean_object* v_reuseFailAlloc_2648_; 
v_reuseFailAlloc_2648_ = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(v_reuseFailAlloc_2648_, 0, v_assumptions_2631_);
lean_ctor_set(v_reuseFailAlloc_2648_, 1, v___y_2643_);
lean_ctor_set(v_reuseFailAlloc_2648_, 2, v___x_2644_);
lean_ctor_set(v_reuseFailAlloc_2648_, 3, v_equalities_2634_);
lean_ctor_set(v_reuseFailAlloc_2648_, 4, v_eliminations_2635_);
lean_ctor_set(v_reuseFailAlloc_2648_, 5, v_proveFalse_x3f_2637_);
lean_ctor_set(v_reuseFailAlloc_2648_, 6, v_explanation_x3f_2638_);
lean_ctor_set_uint8(v_reuseFailAlloc_2648_, sizeof(void*)*7, v_possible_2636_);
v___x_2647_ = v_reuseFailAlloc_2648_;
goto v_reusejp_2646_;
}
v_reusejp_2646_:
{
return v___x_2647_;
}
}
else
{
lean_object* v___x_2649_; lean_object* v___x_2650_; lean_object* v___x_2652_; 
v___x_2649_ = lean_box(0);
v___x_2650_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__1___redArg(v_equalities_2634_, v_coeffs_2627_, v___x_2649_);
if (v_isShared_2641_ == 0)
{
lean_ctor_set(v___x_2640_, 3, v___x_2650_);
lean_ctor_set(v___x_2640_, 2, v___x_2644_);
lean_ctor_set(v___x_2640_, 1, v___y_2643_);
v___x_2652_ = v___x_2640_;
goto v_reusejp_2651_;
}
else
{
lean_object* v_reuseFailAlloc_2653_; 
v_reuseFailAlloc_2653_ = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(v_reuseFailAlloc_2653_, 0, v_assumptions_2631_);
lean_ctor_set(v_reuseFailAlloc_2653_, 1, v___y_2643_);
lean_ctor_set(v_reuseFailAlloc_2653_, 2, v___x_2644_);
lean_ctor_set(v_reuseFailAlloc_2653_, 3, v___x_2650_);
lean_ctor_set(v_reuseFailAlloc_2653_, 4, v_eliminations_2635_);
lean_ctor_set(v_reuseFailAlloc_2653_, 5, v_proveFalse_x3f_2637_);
lean_ctor_set(v_reuseFailAlloc_2653_, 6, v_explanation_x3f_2638_);
lean_ctor_set_uint8(v_reuseFailAlloc_2653_, sizeof(void*)*7, v_possible_2636_);
v___x_2652_ = v_reuseFailAlloc_2653_;
goto v_reusejp_2651_;
}
v_reusejp_2651_:
{
return v___x_2652_;
}
}
}
}
}
else
{
lean_object* v_assumptions_2657_; lean_object* v_numVars_2658_; lean_object* v_constraints_2659_; lean_object* v_equalities_2660_; lean_object* v_eliminations_2661_; lean_object* v___x_2663_; uint8_t v_isShared_2664_; uint8_t v_isSharedCheck_2673_; 
lean_inc_ref(v_justification_2629_);
lean_dec_ref(v_x_2626_);
v_assumptions_2657_ = lean_ctor_get(v_p_2625_, 0);
v_numVars_2658_ = lean_ctor_get(v_p_2625_, 1);
v_constraints_2659_ = lean_ctor_get(v_p_2625_, 2);
v_equalities_2660_ = lean_ctor_get(v_p_2625_, 3);
v_eliminations_2661_ = lean_ctor_get(v_p_2625_, 4);
v_isSharedCheck_2673_ = !lean_is_exclusive(v_p_2625_);
if (v_isSharedCheck_2673_ == 0)
{
lean_object* v_unused_2674_; lean_object* v_unused_2675_; 
v_unused_2674_ = lean_ctor_get(v_p_2625_, 6);
lean_dec(v_unused_2674_);
v_unused_2675_ = lean_ctor_get(v_p_2625_, 5);
lean_dec(v_unused_2675_);
v___x_2663_ = v_p_2625_;
v_isShared_2664_ = v_isSharedCheck_2673_;
goto v_resetjp_2662_;
}
else
{
lean_inc(v_eliminations_2661_);
lean_inc(v_equalities_2660_);
lean_inc(v_constraints_2659_);
lean_inc(v_numVars_2658_);
lean_inc(v_assumptions_2657_);
lean_dec(v_p_2625_);
v___x_2663_ = lean_box(0);
v_isShared_2664_ = v_isSharedCheck_2673_;
goto v_resetjp_2662_;
}
v_resetjp_2662_:
{
lean_object* v___f_2665_; uint8_t v___x_2666_; lean_object* v___x_2667_; lean_object* v___x_2668_; lean_object* v___x_2669_; lean_object* v___x_2671_; 
lean_inc_ref(v_justification_2629_);
lean_inc(v_coeffs_2627_);
lean_inc_ref(v_constraint_2628_);
v___f_2665_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Omega_Problem_insertConstraint___lam__0), 4, 3);
lean_closure_set(v___f_2665_, 0, v_constraint_2628_);
lean_closure_set(v___f_2665_, 1, v_coeffs_2627_);
lean_closure_set(v___f_2665_, 2, v_justification_2629_);
v___x_2666_ = 0;
lean_inc_ref(v_assumptions_2657_);
v___x_2667_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Omega_Problem_proveFalse___boxed), 14, 4);
lean_closure_set(v___x_2667_, 0, v_constraint_2628_);
lean_closure_set(v___x_2667_, 1, v_coeffs_2627_);
lean_closure_set(v___x_2667_, 2, v_justification_2629_);
lean_closure_set(v___x_2667_, 3, v_assumptions_2657_);
v___x_2668_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2668_, 0, v___x_2667_);
v___x_2669_ = lean_mk_thunk(v___f_2665_);
if (v_isShared_2664_ == 0)
{
lean_ctor_set(v___x_2663_, 6, v___x_2669_);
lean_ctor_set(v___x_2663_, 5, v___x_2668_);
v___x_2671_ = v___x_2663_;
goto v_reusejp_2670_;
}
else
{
lean_object* v_reuseFailAlloc_2672_; 
v_reuseFailAlloc_2672_ = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(v_reuseFailAlloc_2672_, 0, v_assumptions_2657_);
lean_ctor_set(v_reuseFailAlloc_2672_, 1, v_numVars_2658_);
lean_ctor_set(v_reuseFailAlloc_2672_, 2, v_constraints_2659_);
lean_ctor_set(v_reuseFailAlloc_2672_, 3, v_equalities_2660_);
lean_ctor_set(v_reuseFailAlloc_2672_, 4, v_eliminations_2661_);
lean_ctor_set(v_reuseFailAlloc_2672_, 5, v___x_2668_);
lean_ctor_set(v_reuseFailAlloc_2672_, 6, v___x_2669_);
v___x_2671_ = v_reuseFailAlloc_2672_;
goto v_reusejp_2670_;
}
v_reusejp_2670_:
{
lean_ctor_set_uint8(v___x_2671_, sizeof(void*)*7, v___x_2666_);
return v___x_2671_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__0(lean_object* v_00_u03b2_2676_, lean_object* v_m_2677_, lean_object* v_a_2678_, lean_object* v_b_2679_){
_start:
{
lean_object* v___x_2680_; 
v___x_2680_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__0___redArg(v_m_2677_, v_a_2678_, v_b_2679_);
return v___x_2680_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__1(lean_object* v_00_u03b2_2681_, lean_object* v_m_2682_, lean_object* v_a_2683_, lean_object* v_b_2684_){
_start:
{
lean_object* v___x_2685_; 
v___x_2685_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__1___redArg(v_m_2682_, v_a_2683_, v_b_2684_);
return v___x_2685_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__0_spec__1(lean_object* v_00_u03b2_2686_, lean_object* v_a_2687_, lean_object* v_x_2688_){
_start:
{
uint8_t v___x_2689_; 
v___x_2689_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__0_spec__1___redArg(v_a_2687_, v_x_2688_);
return v___x_2689_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__0_spec__1___boxed(lean_object* v_00_u03b2_2690_, lean_object* v_a_2691_, lean_object* v_x_2692_){
_start:
{
uint8_t v_res_2693_; lean_object* v_r_2694_; 
v_res_2693_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__0_spec__1(v_00_u03b2_2690_, v_a_2691_, v_x_2692_);
lean_dec(v_x_2692_);
lean_dec(v_a_2691_);
v_r_2694_ = lean_box(v_res_2693_);
return v_r_2694_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__0_spec__2(lean_object* v_00_u03b2_2695_, lean_object* v_data_2696_){
_start:
{
lean_object* v___x_2697_; 
v___x_2697_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__0_spec__2___redArg(v_data_2696_);
return v___x_2697_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__0_spec__3(lean_object* v_00_u03b2_2698_, lean_object* v_a_2699_, lean_object* v_b_2700_, lean_object* v_x_2701_){
_start:
{
lean_object* v___x_2702_; 
v___x_2702_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__0_spec__3___redArg(v_a_2699_, v_b_2700_, v_x_2701_);
return v___x_2702_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__0_spec__2_spec__3(lean_object* v_00_u03b2_2703_, lean_object* v_i_2704_, lean_object* v_source_2705_, lean_object* v_target_2706_){
_start:
{
lean_object* v___x_2707_; 
v___x_2707_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__0_spec__2_spec__3___redArg(v_i_2704_, v_source_2705_, v_target_2706_);
return v___x_2707_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__0_spec__2_spec__3_spec__5(lean_object* v_00_u03b2_2708_, lean_object* v_x_2709_, lean_object* v_x_2710_){
_start:
{
lean_object* v___x_2711_; 
v___x_2711_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__0_spec__2_spec__3_spec__5___redArg(v_x_2709_, v_x_2710_);
return v___x_2711_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_Problem_addConstraint_spec__0_spec__0___redArg(lean_object* v_a_2712_, lean_object* v_x_2713_){
_start:
{
if (lean_obj_tag(v_x_2713_) == 0)
{
lean_object* v___x_2714_; 
v___x_2714_ = lean_box(0);
return v___x_2714_;
}
else
{
lean_object* v_key_2715_; lean_object* v_value_2716_; lean_object* v_tail_2717_; uint8_t v___x_2718_; 
v_key_2715_ = lean_ctor_get(v_x_2713_, 0);
v_value_2716_ = lean_ctor_get(v_x_2713_, 1);
v_tail_2717_ = lean_ctor_get(v_x_2713_, 2);
v___x_2718_ = l_List_beq___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__1(v_key_2715_, v_a_2712_);
if (v___x_2718_ == 0)
{
v_x_2713_ = v_tail_2717_;
goto _start;
}
else
{
lean_object* v___x_2720_; 
lean_inc(v_value_2716_);
v___x_2720_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2720_, 0, v_value_2716_);
return v___x_2720_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_Problem_addConstraint_spec__0_spec__0___redArg___boxed(lean_object* v_a_2721_, lean_object* v_x_2722_){
_start:
{
lean_object* v_res_2723_; 
v_res_2723_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_Problem_addConstraint_spec__0_spec__0___redArg(v_a_2721_, v_x_2722_);
lean_dec(v_x_2722_);
lean_dec(v_a_2721_);
return v_res_2723_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_Problem_addConstraint_spec__0___redArg(lean_object* v_m_2724_, lean_object* v_a_2725_){
_start:
{
lean_object* v_buckets_2726_; lean_object* v___x_2727_; uint64_t v___x_2728_; uint64_t v___x_2729_; uint64_t v___x_2730_; uint64_t v___x_2731_; uint64_t v_fold_2732_; uint64_t v___x_2733_; uint64_t v___x_2734_; uint64_t v___x_2735_; size_t v___x_2736_; size_t v___x_2737_; size_t v___x_2738_; size_t v___x_2739_; size_t v___x_2740_; lean_object* v___x_2741_; lean_object* v___x_2742_; 
v_buckets_2726_ = lean_ctor_get(v_m_2724_, 1);
v___x_2727_ = lean_array_get_size(v_buckets_2726_);
v___x_2728_ = 7ULL;
v___x_2729_ = l_List_foldl___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__0_spec__0(v___x_2728_, v_a_2725_);
v___x_2730_ = 32ULL;
v___x_2731_ = lean_uint64_shift_right(v___x_2729_, v___x_2730_);
v_fold_2732_ = lean_uint64_xor(v___x_2729_, v___x_2731_);
v___x_2733_ = 16ULL;
v___x_2734_ = lean_uint64_shift_right(v_fold_2732_, v___x_2733_);
v___x_2735_ = lean_uint64_xor(v_fold_2732_, v___x_2734_);
v___x_2736_ = lean_uint64_to_usize(v___x_2735_);
v___x_2737_ = lean_usize_of_nat(v___x_2727_);
v___x_2738_ = ((size_t)1ULL);
v___x_2739_ = lean_usize_sub(v___x_2737_, v___x_2738_);
v___x_2740_ = lean_usize_land(v___x_2736_, v___x_2739_);
v___x_2741_ = lean_array_uget_borrowed(v_buckets_2726_, v___x_2740_);
v___x_2742_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_Problem_addConstraint_spec__0_spec__0___redArg(v_a_2725_, v___x_2741_);
return v___x_2742_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_Problem_addConstraint_spec__0___redArg___boxed(lean_object* v_m_2743_, lean_object* v_a_2744_){
_start:
{
lean_object* v_res_2745_; 
v_res_2745_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_Problem_addConstraint_spec__0___redArg(v_m_2743_, v_a_2744_);
lean_dec(v_a_2744_);
lean_dec_ref(v_m_2743_);
return v_res_2745_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_addConstraint(lean_object* v_p_2746_, lean_object* v_x_2747_){
_start:
{
uint8_t v_possible_2748_; 
v_possible_2748_ = lean_ctor_get_uint8(v_p_2746_, sizeof(void*)*7);
if (v_possible_2748_ == 0)
{
lean_dec_ref(v_x_2747_);
return v_p_2746_;
}
else
{
lean_object* v_coeffs_2749_; lean_object* v_constraint_2750_; lean_object* v_justification_2751_; lean_object* v_constraints_2752_; lean_object* v___x_2753_; 
v_coeffs_2749_ = lean_ctor_get(v_x_2747_, 0);
v_constraint_2750_ = lean_ctor_get(v_x_2747_, 1);
v_justification_2751_ = lean_ctor_get(v_x_2747_, 2);
v_constraints_2752_ = lean_ctor_get(v_p_2746_, 2);
v___x_2753_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_Problem_addConstraint_spec__0___redArg(v_constraints_2752_, v_coeffs_2749_);
if (lean_obj_tag(v___x_2753_) == 0)
{
lean_object* v_lowerBound_2754_; 
v_lowerBound_2754_ = lean_ctor_get(v_constraint_2750_, 0);
if (lean_obj_tag(v_lowerBound_2754_) == 0)
{
lean_object* v_upperBound_2755_; 
v_upperBound_2755_ = lean_ctor_get(v_constraint_2750_, 1);
if (lean_obj_tag(v_upperBound_2755_) == 0)
{
lean_dec_ref(v_x_2747_);
return v_p_2746_;
}
else
{
lean_object* v___x_2756_; 
v___x_2756_ = l_Lean_Elab_Tactic_Omega_Problem_insertConstraint(v_p_2746_, v_x_2747_);
return v___x_2756_;
}
}
else
{
lean_object* v___x_2757_; 
v___x_2757_ = l_Lean_Elab_Tactic_Omega_Problem_insertConstraint(v_p_2746_, v_x_2747_);
return v___x_2757_;
}
}
else
{
lean_object* v_val_2758_; lean_object* v_coeffs_2759_; lean_object* v_constraint_2760_; lean_object* v_justification_2761_; lean_object* v___x_2763_; uint8_t v_isShared_2764_; uint8_t v_isSharedCheck_2776_; 
v_val_2758_ = lean_ctor_get(v___x_2753_, 0);
lean_inc(v_val_2758_);
lean_dec_ref_known(v___x_2753_, 1);
v_coeffs_2759_ = lean_ctor_get(v_val_2758_, 0);
v_constraint_2760_ = lean_ctor_get(v_val_2758_, 1);
v_justification_2761_ = lean_ctor_get(v_val_2758_, 2);
v_isSharedCheck_2776_ = !lean_is_exclusive(v_val_2758_);
if (v_isSharedCheck_2776_ == 0)
{
v___x_2763_ = v_val_2758_;
v_isShared_2764_ = v_isSharedCheck_2776_;
goto v_resetjp_2762_;
}
else
{
lean_inc(v_justification_2761_);
lean_inc(v_constraint_2760_);
lean_inc(v_coeffs_2759_);
lean_dec(v_val_2758_);
v___x_2763_ = lean_box(0);
v_isShared_2764_ = v_isSharedCheck_2776_;
goto v_resetjp_2762_;
}
v_resetjp_2762_:
{
lean_object* v___x_2765_; uint8_t v___x_2766_; 
v___x_2765_ = lean_alloc_closure((void*)(l_Int_instDecidableEq___boxed), 2, 0);
lean_inc(v_coeffs_2749_);
v___x_2766_ = l_instDecidableEqList___redArg(v___x_2765_, v_coeffs_2749_, v_coeffs_2759_);
if (v___x_2766_ == 0)
{
lean_del_object(v___x_2763_);
lean_dec_ref(v_justification_2761_);
lean_dec_ref(v_constraint_2760_);
lean_dec_ref(v_x_2747_);
return v_p_2746_;
}
else
{
lean_object* v_r_2767_; uint8_t v___x_2768_; 
lean_inc_ref_n(v_constraint_2760_, 2);
lean_inc_ref(v_constraint_2750_);
v_r_2767_ = l_Lean_Omega_Constraint_combine(v_constraint_2750_, v_constraint_2760_);
lean_inc_ref(v_r_2767_);
v___x_2768_ = l_Lean_Omega_instDecidableEqConstraint_decEq(v_r_2767_, v_constraint_2760_);
if (v___x_2768_ == 0)
{
uint8_t v___x_2769_; 
lean_inc_ref(v_constraint_2750_);
lean_inc_ref(v_r_2767_);
v___x_2769_ = l_Lean_Omega_instDecidableEqConstraint_decEq(v_r_2767_, v_constraint_2750_);
if (v___x_2769_ == 0)
{
lean_object* v___x_2770_; lean_object* v___x_2772_; 
lean_inc_ref(v_justification_2751_);
lean_inc_ref(v_constraint_2750_);
lean_inc_n(v_coeffs_2749_, 2);
lean_dec_ref(v_x_2747_);
v___x_2770_ = lean_alloc_ctor(2, 5, 0);
lean_ctor_set(v___x_2770_, 0, v_constraint_2750_);
lean_ctor_set(v___x_2770_, 1, v_constraint_2760_);
lean_ctor_set(v___x_2770_, 2, v_coeffs_2749_);
lean_ctor_set(v___x_2770_, 3, v_justification_2751_);
lean_ctor_set(v___x_2770_, 4, v_justification_2761_);
if (v_isShared_2764_ == 0)
{
lean_ctor_set(v___x_2763_, 2, v___x_2770_);
lean_ctor_set(v___x_2763_, 1, v_r_2767_);
lean_ctor_set(v___x_2763_, 0, v_coeffs_2749_);
v___x_2772_ = v___x_2763_;
goto v_reusejp_2771_;
}
else
{
lean_object* v_reuseFailAlloc_2774_; 
v_reuseFailAlloc_2774_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2774_, 0, v_coeffs_2749_);
lean_ctor_set(v_reuseFailAlloc_2774_, 1, v_r_2767_);
lean_ctor_set(v_reuseFailAlloc_2774_, 2, v___x_2770_);
v___x_2772_ = v_reuseFailAlloc_2774_;
goto v_reusejp_2771_;
}
v_reusejp_2771_:
{
lean_object* v___x_2773_; 
v___x_2773_ = l_Lean_Elab_Tactic_Omega_Problem_insertConstraint(v_p_2746_, v___x_2772_);
return v___x_2773_;
}
}
else
{
lean_object* v___x_2775_; 
lean_dec_ref(v_r_2767_);
lean_del_object(v___x_2763_);
lean_dec_ref(v_justification_2761_);
lean_dec_ref(v_constraint_2760_);
v___x_2775_ = l_Lean_Elab_Tactic_Omega_Problem_insertConstraint(v_p_2746_, v_x_2747_);
return v___x_2775_;
}
}
else
{
lean_dec_ref(v_r_2767_);
lean_del_object(v___x_2763_);
lean_dec_ref(v_justification_2761_);
lean_dec_ref(v_constraint_2760_);
lean_dec_ref(v_x_2747_);
return v_p_2746_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_Problem_addConstraint_spec__0(lean_object* v_00_u03b2_2777_, lean_object* v_m_2778_, lean_object* v_a_2779_){
_start:
{
lean_object* v___x_2780_; 
v___x_2780_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_Problem_addConstraint_spec__0___redArg(v_m_2778_, v_a_2779_);
return v___x_2780_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_Problem_addConstraint_spec__0___boxed(lean_object* v_00_u03b2_2781_, lean_object* v_m_2782_, lean_object* v_a_2783_){
_start:
{
lean_object* v_res_2784_; 
v_res_2784_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_Problem_addConstraint_spec__0(v_00_u03b2_2781_, v_m_2782_, v_a_2783_);
lean_dec(v_a_2783_);
lean_dec_ref(v_m_2782_);
return v_res_2784_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_Problem_addConstraint_spec__0_spec__0(lean_object* v_00_u03b2_2785_, lean_object* v_a_2786_, lean_object* v_x_2787_){
_start:
{
lean_object* v___x_2788_; 
v___x_2788_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_Problem_addConstraint_spec__0_spec__0___redArg(v_a_2786_, v_x_2787_);
return v___x_2788_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_Problem_addConstraint_spec__0_spec__0___boxed(lean_object* v_00_u03b2_2789_, lean_object* v_a_2790_, lean_object* v_x_2791_){
_start:
{
lean_object* v_res_2792_; 
v_res_2792_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_Problem_addConstraint_spec__0_spec__0(v_00_u03b2_2789_, v_a_2790_, v_x_2791_);
lean_dec(v_x_2791_);
lean_dec(v_a_2790_);
return v_res_2792_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Elab_Tactic_Omega_Problem_selectEquality_spec__0(lean_object* v_x_2793_, lean_object* v_x_2794_){
_start:
{
if (lean_obj_tag(v_x_2794_) == 0)
{
return v_x_2793_;
}
else
{
if (lean_obj_tag(v_x_2793_) == 0)
{
lean_object* v_key_2795_; lean_object* v_tail_2796_; lean_object* v___x_2797_; lean_object* v___x_2798_; lean_object* v___x_2799_; 
v_key_2795_ = lean_ctor_get(v_x_2794_, 0);
lean_inc_n(v_key_2795_, 2);
v_tail_2796_ = lean_ctor_get(v_x_2794_, 2);
lean_inc(v_tail_2796_);
lean_dec_ref_known(v_x_2794_, 3);
v___x_2797_ = l_Lean_Elab_Tactic_Omega_List_minNatAbs(v_key_2795_);
v___x_2798_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2798_, 0, v_key_2795_);
lean_ctor_set(v___x_2798_, 1, v___x_2797_);
v___x_2799_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2799_, 0, v___x_2798_);
v_x_2793_ = v___x_2799_;
v_x_2794_ = v_tail_2796_;
goto _start;
}
else
{
lean_object* v_val_2801_; lean_object* v_key_2802_; lean_object* v_tail_2803_; lean_object* v_fst_2804_; lean_object* v_snd_2805_; lean_object* v___x_2807_; uint8_t v_isShared_2808_; uint8_t v_isSharedCheck_2826_; 
v_val_2801_ = lean_ctor_get(v_x_2793_, 0);
lean_inc(v_val_2801_);
v_key_2802_ = lean_ctor_get(v_x_2794_, 0);
lean_inc(v_key_2802_);
v_tail_2803_ = lean_ctor_get(v_x_2794_, 2);
lean_inc(v_tail_2803_);
lean_dec_ref_known(v_x_2794_, 3);
v_fst_2804_ = lean_ctor_get(v_val_2801_, 0);
v_snd_2805_ = lean_ctor_get(v_val_2801_, 1);
v_isSharedCheck_2826_ = !lean_is_exclusive(v_val_2801_);
if (v_isSharedCheck_2826_ == 0)
{
v___x_2807_ = v_val_2801_;
v_isShared_2808_ = v_isSharedCheck_2826_;
goto v_resetjp_2806_;
}
else
{
lean_inc(v_snd_2805_);
lean_inc(v_fst_2804_);
lean_dec(v_val_2801_);
v___x_2807_ = lean_box(0);
v_isShared_2808_ = v_isSharedCheck_2826_;
goto v_resetjp_2806_;
}
v_resetjp_2806_:
{
lean_object* v___x_2809_; uint8_t v___x_2810_; 
v___x_2809_ = lean_unsigned_to_nat(2u);
v___x_2810_ = lean_nat_dec_le(v___x_2809_, v_snd_2805_);
if (v___x_2810_ == 0)
{
lean_del_object(v___x_2807_);
lean_dec(v_snd_2805_);
lean_dec(v_fst_2804_);
lean_dec(v_key_2802_);
v_x_2794_ = v_tail_2803_;
goto _start;
}
else
{
lean_object* v_m_x27_2812_; uint8_t v___x_2819_; 
lean_inc(v_key_2802_);
v_m_x27_2812_ = l_Lean_Elab_Tactic_Omega_List_minNatAbs(v_key_2802_);
v___x_2819_ = lean_nat_dec_lt(v_m_x27_2812_, v_snd_2805_);
if (v___x_2819_ == 0)
{
uint8_t v___x_2820_; 
v___x_2820_ = lean_nat_dec_eq(v_m_x27_2812_, v_snd_2805_);
lean_dec(v_snd_2805_);
if (v___x_2820_ == 0)
{
lean_dec(v_m_x27_2812_);
lean_del_object(v___x_2807_);
lean_dec(v_fst_2804_);
lean_dec(v_key_2802_);
v_x_2794_ = v_tail_2803_;
goto _start;
}
else
{
lean_object* v___x_2822_; lean_object* v___x_2823_; uint8_t v___x_2824_; 
lean_inc(v_key_2802_);
v___x_2822_ = l_Lean_Elab_Tactic_Omega_List_maxNatAbs(v_key_2802_);
v___x_2823_ = l_Lean_Elab_Tactic_Omega_List_maxNatAbs(v_fst_2804_);
v___x_2824_ = lean_nat_dec_lt(v___x_2822_, v___x_2823_);
lean_dec(v___x_2823_);
lean_dec(v___x_2822_);
if (v___x_2824_ == 0)
{
lean_dec(v_m_x27_2812_);
lean_del_object(v___x_2807_);
lean_dec(v_key_2802_);
v_x_2794_ = v_tail_2803_;
goto _start;
}
else
{
lean_dec_ref_known(v_x_2793_, 1);
goto v___jp_2813_;
}
}
}
else
{
lean_dec(v_snd_2805_);
lean_dec(v_fst_2804_);
lean_dec_ref_known(v_x_2793_, 1);
goto v___jp_2813_;
}
v___jp_2813_:
{
lean_object* v___x_2815_; 
if (v_isShared_2808_ == 0)
{
lean_ctor_set(v___x_2807_, 1, v_m_x27_2812_);
lean_ctor_set(v___x_2807_, 0, v_key_2802_);
v___x_2815_ = v___x_2807_;
goto v_reusejp_2814_;
}
else
{
lean_object* v_reuseFailAlloc_2818_; 
v_reuseFailAlloc_2818_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2818_, 0, v_key_2802_);
lean_ctor_set(v_reuseFailAlloc_2818_, 1, v_m_x27_2812_);
v___x_2815_ = v_reuseFailAlloc_2818_;
goto v_reusejp_2814_;
}
v_reusejp_2814_:
{
lean_object* v___x_2816_; 
v___x_2816_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2816_, 0, v___x_2815_);
v_x_2793_ = v___x_2816_;
v_x_2794_ = v_tail_2803_;
goto _start;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Omega_Problem_selectEquality_spec__1(lean_object* v_as_2827_, size_t v_i_2828_, size_t v_stop_2829_, lean_object* v_b_2830_){
_start:
{
uint8_t v___x_2831_; 
v___x_2831_ = lean_usize_dec_eq(v_i_2828_, v_stop_2829_);
if (v___x_2831_ == 0)
{
lean_object* v___x_2832_; lean_object* v___x_2833_; size_t v___x_2834_; size_t v___x_2835_; 
v___x_2832_ = lean_array_uget_borrowed(v_as_2827_, v_i_2828_);
lean_inc(v___x_2832_);
v___x_2833_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Elab_Tactic_Omega_Problem_selectEquality_spec__0(v_b_2830_, v___x_2832_);
v___x_2834_ = ((size_t)1ULL);
v___x_2835_ = lean_usize_add(v_i_2828_, v___x_2834_);
v_i_2828_ = v___x_2835_;
v_b_2830_ = v___x_2833_;
goto _start;
}
else
{
return v_b_2830_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Omega_Problem_selectEquality_spec__1___boxed(lean_object* v_as_2837_, lean_object* v_i_2838_, lean_object* v_stop_2839_, lean_object* v_b_2840_){
_start:
{
size_t v_i_boxed_2841_; size_t v_stop_boxed_2842_; lean_object* v_res_2843_; 
v_i_boxed_2841_ = lean_unbox_usize(v_i_2838_);
lean_dec(v_i_2838_);
v_stop_boxed_2842_ = lean_unbox_usize(v_stop_2839_);
lean_dec(v_stop_2839_);
v_res_2843_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Omega_Problem_selectEquality_spec__1(v_as_2837_, v_i_boxed_2841_, v_stop_boxed_2842_, v_b_2840_);
lean_dec_ref(v_as_2837_);
return v_res_2843_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_selectEquality(lean_object* v_p_2844_){
_start:
{
lean_object* v_equalities_2845_; lean_object* v_buckets_2846_; lean_object* v___x_2847_; lean_object* v___x_2848_; lean_object* v___x_2849_; uint8_t v___x_2850_; 
v_equalities_2845_ = lean_ctor_get(v_p_2844_, 3);
v_buckets_2846_ = lean_ctor_get(v_equalities_2845_, 1);
v___x_2847_ = lean_box(0);
v___x_2848_ = lean_unsigned_to_nat(0u);
v___x_2849_ = lean_array_get_size(v_buckets_2846_);
v___x_2850_ = lean_nat_dec_lt(v___x_2848_, v___x_2849_);
if (v___x_2850_ == 0)
{
return v___x_2847_;
}
else
{
size_t v___x_2851_; size_t v___x_2852_; lean_object* v___x_2853_; 
v___x_2851_ = ((size_t)0ULL);
v___x_2852_ = lean_usize_of_nat(v___x_2849_);
v___x_2853_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Omega_Problem_selectEquality_spec__1(v_buckets_2846_, v___x_2851_, v___x_2852_, v___x_2847_);
return v___x_2853_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_selectEquality___boxed(lean_object* v_p_2854_){
_start:
{
lean_object* v_res_2855_; 
v_res_2855_ = l_Lean_Elab_Tactic_Omega_Problem_selectEquality(v_p_2854_);
lean_dec_ref(v_p_2854_);
return v_res_2855_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lean_Elab_Tactic_Omega_Problem_replayEliminations_spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_2856_; lean_object* v___x_2857_; 
v___x_2856_ = lean_unsigned_to_nat(1u);
v___x_2857_ = lean_nat_to_int(v___x_2856_);
return v___x_2857_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lean_Elab_Tactic_Omega_Problem_replayEliminations_spec__0_spec__0___closed__1(void){
_start:
{
lean_object* v___x_2858_; lean_object* v___x_2859_; 
v___x_2858_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lean_Elab_Tactic_Omega_Problem_replayEliminations_spec__0_spec__0___closed__0, &l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lean_Elab_Tactic_Omega_Problem_replayEliminations_spec__0_spec__0___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lean_Elab_Tactic_Omega_Problem_replayEliminations_spec__0_spec__0___closed__0);
v___x_2859_ = lean_int_neg(v___x_2858_);
return v___x_2859_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lean_Elab_Tactic_Omega_Problem_replayEliminations_spec__0_spec__0(lean_object* v_as_2860_, size_t v_i_2861_, size_t v_stop_2862_, lean_object* v_b_2863_){
_start:
{
uint8_t v___x_2864_; 
v___x_2864_ = lean_usize_dec_eq(v_i_2861_, v_stop_2862_);
if (v___x_2864_ == 0)
{
size_t v___x_2865_; size_t v___x_2866_; lean_object* v___x_2867_; lean_object* v_snd_2868_; lean_object* v_fst_2869_; lean_object* v_fst_2870_; lean_object* v_snd_2871_; lean_object* v_coeffs_2872_; lean_object* v___x_2873_; lean_object* v___x_2874_; uint8_t v___x_2875_; 
v___x_2865_ = ((size_t)1ULL);
v___x_2866_ = lean_usize_sub(v_i_2861_, v___x_2865_);
v___x_2867_ = lean_array_uget_borrowed(v_as_2860_, v___x_2866_);
v_snd_2868_ = lean_ctor_get(v___x_2867_, 1);
v_fst_2869_ = lean_ctor_get(v___x_2867_, 0);
v_fst_2870_ = lean_ctor_get(v_snd_2868_, 0);
v_snd_2871_ = lean_ctor_get(v_snd_2868_, 1);
v_coeffs_2872_ = lean_ctor_get(v_b_2863_, 0);
lean_inc(v_fst_2870_);
v___x_2873_ = l_Lean_Omega_IntList_get(v_coeffs_2872_, v_fst_2870_);
v___x_2874_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17);
v___x_2875_ = lean_int_dec_eq(v___x_2873_, v___x_2874_);
if (v___x_2875_ == 0)
{
lean_object* v___x_2876_; lean_object* v___x_2877_; lean_object* v___x_2878_; lean_object* v___x_2879_; lean_object* v___x_2880_; 
v___x_2876_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lean_Elab_Tactic_Omega_Problem_replayEliminations_spec__0_spec__0___closed__0, &l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lean_Elab_Tactic_Omega_Problem_replayEliminations_spec__0_spec__0___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lean_Elab_Tactic_Omega_Problem_replayEliminations_spec__0_spec__0___closed__0);
v___x_2877_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lean_Elab_Tactic_Omega_Problem_replayEliminations_spec__0_spec__0___closed__1, &l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lean_Elab_Tactic_Omega_Problem_replayEliminations_spec__0_spec__0___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lean_Elab_Tactic_Omega_Problem_replayEliminations_spec__0_spec__0___closed__1);
v___x_2878_ = lean_int_mul(v___x_2877_, v_snd_2871_);
v___x_2879_ = lean_int_mul(v___x_2878_, v___x_2873_);
lean_dec(v___x_2873_);
lean_dec(v___x_2878_);
lean_inc(v_fst_2869_);
v___x_2880_ = l_Lean_Elab_Tactic_Omega_Fact_combo(v___x_2879_, v_fst_2869_, v___x_2876_, v_b_2863_);
v_i_2861_ = v___x_2866_;
v_b_2863_ = v___x_2880_;
goto _start;
}
else
{
lean_dec(v___x_2873_);
v_i_2861_ = v___x_2866_;
goto _start;
}
}
else
{
return v_b_2863_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lean_Elab_Tactic_Omega_Problem_replayEliminations_spec__0_spec__0___boxed(lean_object* v_as_2883_, lean_object* v_i_2884_, lean_object* v_stop_2885_, lean_object* v_b_2886_){
_start:
{
size_t v_i_boxed_2887_; size_t v_stop_boxed_2888_; lean_object* v_res_2889_; 
v_i_boxed_2887_ = lean_unbox_usize(v_i_2884_);
lean_dec(v_i_2884_);
v_stop_boxed_2888_ = lean_unbox_usize(v_stop_2885_);
lean_dec(v_stop_2885_);
v_res_2889_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lean_Elab_Tactic_Omega_Problem_replayEliminations_spec__0_spec__0(v_as_2883_, v_i_boxed_2887_, v_stop_boxed_2888_, v_b_2886_);
lean_dec_ref(v_as_2883_);
return v_res_2889_;
}
}
LEAN_EXPORT lean_object* l_List_foldrTR___at___00Lean_Elab_Tactic_Omega_Problem_replayEliminations_spec__0(lean_object* v_init_2890_, lean_object* v_l_2891_){
_start:
{
lean_object* v___x_2892_; lean_object* v___x_2893_; lean_object* v___x_2894_; uint8_t v___x_2895_; 
v___x_2892_ = lean_array_mk(v_l_2891_);
v___x_2893_ = lean_array_get_size(v___x_2892_);
v___x_2894_ = lean_unsigned_to_nat(0u);
v___x_2895_ = lean_nat_dec_lt(v___x_2894_, v___x_2893_);
if (v___x_2895_ == 0)
{
lean_dec_ref(v___x_2892_);
return v_init_2890_;
}
else
{
size_t v___x_2896_; size_t v___x_2897_; lean_object* v___x_2898_; 
v___x_2896_ = lean_usize_of_nat(v___x_2893_);
v___x_2897_ = ((size_t)0ULL);
v___x_2898_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lean_Elab_Tactic_Omega_Problem_replayEliminations_spec__0_spec__0(v___x_2892_, v___x_2896_, v___x_2897_, v_init_2890_);
lean_dec_ref(v___x_2892_);
return v___x_2898_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_replayEliminations(lean_object* v_p_2899_, lean_object* v_f_2900_){
_start:
{
lean_object* v_eliminations_2901_; lean_object* v___x_2902_; 
v_eliminations_2901_ = lean_ctor_get(v_p_2899_, 4);
lean_inc(v_eliminations_2901_);
lean_dec_ref(v_p_2899_);
v___x_2902_ = l_List_foldrTR___at___00Lean_Elab_Tactic_Omega_Problem_replayEliminations_spec__0(v_f_2900_, v_eliminations_2901_);
return v___x_2902_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_solveEasyEquality___lam__0(lean_object* v_x_2903_){
_start:
{
lean_object* v___x_2904_; 
v___x_2904_ = ((lean_object*)(l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__1));
return v___x_2904_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Elab_Tactic_Omega_Problem_solveEasyEquality_spec__0(lean_object* v___y_2905_, lean_object* v_sign_2906_, lean_object* v_val_2907_, lean_object* v_x_2908_, lean_object* v_x_2909_){
_start:
{
if (lean_obj_tag(v_x_2909_) == 0)
{
lean_dec_ref(v_val_2907_);
lean_dec(v___y_2905_);
return v_x_2908_;
}
else
{
lean_object* v_key_2910_; lean_object* v_value_2911_; lean_object* v_tail_2912_; lean_object* v___x_2913_; lean_object* v___x_2914_; uint8_t v___x_2915_; 
v_key_2910_ = lean_ctor_get(v_x_2909_, 0);
lean_inc(v_key_2910_);
v_value_2911_ = lean_ctor_get(v_x_2909_, 1);
lean_inc(v_value_2911_);
v_tail_2912_ = lean_ctor_get(v_x_2909_, 2);
lean_inc(v_tail_2912_);
lean_dec_ref_known(v_x_2909_, 3);
lean_inc(v___y_2905_);
v___x_2913_ = l_Lean_Omega_IntList_get(v_key_2910_, v___y_2905_);
lean_dec(v_key_2910_);
v___x_2914_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17);
v___x_2915_ = lean_int_dec_eq(v___x_2913_, v___x_2914_);
if (v___x_2915_ == 0)
{
lean_object* v___x_2916_; lean_object* v___x_2917_; lean_object* v___x_2918_; lean_object* v_k_2919_; lean_object* v___x_2920_; lean_object* v___x_2921_; lean_object* v___x_2922_; 
v___x_2916_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lean_Elab_Tactic_Omega_Problem_replayEliminations_spec__0_spec__0___closed__0, &l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lean_Elab_Tactic_Omega_Problem_replayEliminations_spec__0_spec__0___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lean_Elab_Tactic_Omega_Problem_replayEliminations_spec__0_spec__0___closed__0);
v___x_2917_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lean_Elab_Tactic_Omega_Problem_replayEliminations_spec__0_spec__0___closed__1, &l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lean_Elab_Tactic_Omega_Problem_replayEliminations_spec__0_spec__0___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lean_Elab_Tactic_Omega_Problem_replayEliminations_spec__0_spec__0___closed__1);
v___x_2918_ = lean_int_mul(v___x_2917_, v_sign_2906_);
v_k_2919_ = lean_int_mul(v___x_2918_, v___x_2913_);
lean_dec(v___x_2913_);
lean_dec(v___x_2918_);
lean_inc_ref(v_val_2907_);
v___x_2920_ = l_Lean_Elab_Tactic_Omega_Fact_combo(v_k_2919_, v_val_2907_, v___x_2916_, v_value_2911_);
v___x_2921_ = l_Lean_Elab_Tactic_Omega_Fact_tidy(v___x_2920_);
v___x_2922_ = l_Lean_Elab_Tactic_Omega_Problem_addConstraint(v_x_2908_, v___x_2921_);
v_x_2908_ = v___x_2922_;
v_x_2909_ = v_tail_2912_;
goto _start;
}
else
{
lean_object* v___x_2924_; 
lean_dec(v___x_2913_);
v___x_2924_ = l_Lean_Elab_Tactic_Omega_Problem_addConstraint(v_x_2908_, v_value_2911_);
v_x_2908_ = v___x_2924_;
v_x_2909_ = v_tail_2912_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Elab_Tactic_Omega_Problem_solveEasyEquality_spec__0___boxed(lean_object* v___y_2926_, lean_object* v_sign_2927_, lean_object* v_val_2928_, lean_object* v_x_2929_, lean_object* v_x_2930_){
_start:
{
lean_object* v_res_2931_; 
v_res_2931_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Elab_Tactic_Omega_Problem_solveEasyEquality_spec__0(v___y_2926_, v_sign_2927_, v_val_2928_, v_x_2929_, v_x_2930_);
lean_dec(v_sign_2927_);
return v_res_2931_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Omega_Problem_solveEasyEquality_spec__1(lean_object* v___y_2932_, lean_object* v_sign_2933_, lean_object* v_val_2934_, lean_object* v_as_2935_, size_t v_i_2936_, size_t v_stop_2937_, lean_object* v_b_2938_){
_start:
{
uint8_t v___x_2939_; 
v___x_2939_ = lean_usize_dec_eq(v_i_2936_, v_stop_2937_);
if (v___x_2939_ == 0)
{
lean_object* v___x_2940_; lean_object* v___x_2941_; size_t v___x_2942_; size_t v___x_2943_; 
v___x_2940_ = lean_array_uget_borrowed(v_as_2935_, v_i_2936_);
lean_inc(v___x_2940_);
lean_inc_ref(v_val_2934_);
lean_inc(v___y_2932_);
v___x_2941_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Elab_Tactic_Omega_Problem_solveEasyEquality_spec__0(v___y_2932_, v_sign_2933_, v_val_2934_, v_b_2938_, v___x_2940_);
v___x_2942_ = ((size_t)1ULL);
v___x_2943_ = lean_usize_add(v_i_2936_, v___x_2942_);
v_i_2936_ = v___x_2943_;
v_b_2938_ = v___x_2941_;
goto _start;
}
else
{
lean_dec_ref(v_val_2934_);
lean_dec(v___y_2932_);
return v_b_2938_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Omega_Problem_solveEasyEquality_spec__1___boxed(lean_object* v___y_2945_, lean_object* v_sign_2946_, lean_object* v_val_2947_, lean_object* v_as_2948_, lean_object* v_i_2949_, lean_object* v_stop_2950_, lean_object* v_b_2951_){
_start:
{
size_t v_i_boxed_2952_; size_t v_stop_boxed_2953_; lean_object* v_res_2954_; 
v_i_boxed_2952_ = lean_unbox_usize(v_i_2949_);
lean_dec(v_i_2949_);
v_stop_boxed_2953_ = lean_unbox_usize(v_stop_2950_);
lean_dec(v_stop_2950_);
v_res_2954_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Omega_Problem_solveEasyEquality_spec__1(v___y_2945_, v_sign_2946_, v_val_2947_, v_as_2948_, v_i_boxed_2952_, v_stop_boxed_2953_, v_b_2951_);
lean_dec_ref(v_as_2948_);
lean_dec(v_sign_2946_);
return v_res_2954_;
}
}
LEAN_EXPORT lean_object* l_List_findIdx_x3f_go___at___00Lean_Elab_Tactic_Omega_Problem_solveEasyEquality_spec__2(lean_object* v_a_2955_, lean_object* v_a_2956_){
_start:
{
if (lean_obj_tag(v_a_2955_) == 0)
{
lean_object* v___x_2957_; 
lean_dec(v_a_2956_);
v___x_2957_ = lean_box(0);
return v___x_2957_;
}
else
{
lean_object* v_head_2958_; lean_object* v_tail_2959_; lean_object* v___x_2960_; lean_object* v___x_2961_; uint8_t v___x_2962_; 
v_head_2958_ = lean_ctor_get(v_a_2955_, 0);
v_tail_2959_ = lean_ctor_get(v_a_2955_, 1);
v___x_2960_ = lean_nat_abs(v_head_2958_);
v___x_2961_ = lean_unsigned_to_nat(1u);
v___x_2962_ = lean_nat_dec_eq(v___x_2960_, v___x_2961_);
lean_dec(v___x_2960_);
if (v___x_2962_ == 0)
{
lean_object* v___x_2963_; 
v___x_2963_ = lean_nat_add(v_a_2956_, v___x_2961_);
lean_dec(v_a_2956_);
v_a_2955_ = v_tail_2959_;
v_a_2956_ = v___x_2963_;
goto _start;
}
else
{
lean_object* v___x_2965_; 
v___x_2965_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2965_, 0, v_a_2956_);
return v___x_2965_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_findIdx_x3f_go___at___00Lean_Elab_Tactic_Omega_Problem_solveEasyEquality_spec__2___boxed(lean_object* v_a_2966_, lean_object* v_a_2967_){
_start:
{
lean_object* v_res_2968_; 
v_res_2968_ = l_List_findIdx_x3f_go___at___00Lean_Elab_Tactic_Omega_Problem_solveEasyEquality_spec__2(v_a_2966_, v_a_2967_);
lean_dec(v_a_2966_);
return v_res_2968_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_Problem_solveEasyEquality___closed__1(void){
_start:
{
lean_object* v___x_2970_; lean_object* v___x_2971_; lean_object* v___x_2972_; 
v___x_2970_ = lean_box(0);
v___x_2971_ = lean_unsigned_to_nat(16u);
v___x_2972_ = lean_mk_array(v___x_2971_, v___x_2970_);
return v___x_2972_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_Problem_solveEasyEquality___closed__2(void){
_start:
{
lean_object* v___x_2973_; lean_object* v___x_2974_; lean_object* v___x_2975_; 
v___x_2973_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_Problem_solveEasyEquality___closed__1, &l_Lean_Elab_Tactic_Omega_Problem_solveEasyEquality___closed__1_once, _init_l_Lean_Elab_Tactic_Omega_Problem_solveEasyEquality___closed__1);
v___x_2974_ = lean_unsigned_to_nat(0u);
v___x_2975_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2975_, 0, v___x_2974_);
lean_ctor_set(v___x_2975_, 1, v___x_2973_);
return v___x_2975_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_Problem_solveEasyEquality___closed__3(void){
_start:
{
lean_object* v___f_2976_; lean_object* v___x_2977_; 
v___f_2976_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Problem_solveEasyEquality___closed__0));
v___x_2977_ = lean_mk_thunk(v___f_2976_);
return v___x_2977_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_solveEasyEquality(lean_object* v_p_2978_, lean_object* v_c_2979_){
_start:
{
lean_object* v___y_2981_; lean_object* v___x_3024_; lean_object* v___x_3025_; 
v___x_3024_ = lean_unsigned_to_nat(0u);
v___x_3025_ = l_List_findIdx_x3f_go___at___00Lean_Elab_Tactic_Omega_Problem_solveEasyEquality_spec__2(v_c_2979_, v___x_3024_);
if (lean_obj_tag(v___x_3025_) == 0)
{
v___y_2981_ = v___x_3024_;
goto v___jp_2980_;
}
else
{
lean_object* v_val_3026_; 
v_val_3026_ = lean_ctor_get(v___x_3025_, 0);
lean_inc(v_val_3026_);
lean_dec_ref_known(v___x_3025_, 1);
v___y_2981_ = v_val_3026_;
goto v___jp_2980_;
}
v___jp_2980_:
{
lean_object* v_assumptions_2982_; lean_object* v_constraints_2983_; lean_object* v_eliminations_2984_; lean_object* v___x_2985_; 
v_assumptions_2982_ = lean_ctor_get(v_p_2978_, 0);
v_constraints_2983_ = lean_ctor_get(v_p_2978_, 2);
lean_inc_ref(v_constraints_2983_);
v_eliminations_2984_ = lean_ctor_get(v_p_2978_, 4);
v___x_2985_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_Problem_addConstraint_spec__0___redArg(v_constraints_2983_, v_c_2979_);
if (lean_obj_tag(v___x_2985_) == 1)
{
lean_object* v___x_2987_; uint8_t v_isShared_2988_; uint8_t v_isSharedCheck_3016_; 
lean_inc(v_eliminations_2984_);
lean_inc_ref(v_assumptions_2982_);
v_isSharedCheck_3016_ = !lean_is_exclusive(v_p_2978_);
if (v_isSharedCheck_3016_ == 0)
{
lean_object* v_unused_3017_; lean_object* v_unused_3018_; lean_object* v_unused_3019_; lean_object* v_unused_3020_; lean_object* v_unused_3021_; lean_object* v_unused_3022_; lean_object* v_unused_3023_; 
v_unused_3017_ = lean_ctor_get(v_p_2978_, 6);
lean_dec(v_unused_3017_);
v_unused_3018_ = lean_ctor_get(v_p_2978_, 5);
lean_dec(v_unused_3018_);
v_unused_3019_ = lean_ctor_get(v_p_2978_, 4);
lean_dec(v_unused_3019_);
v_unused_3020_ = lean_ctor_get(v_p_2978_, 3);
lean_dec(v_unused_3020_);
v_unused_3021_ = lean_ctor_get(v_p_2978_, 2);
lean_dec(v_unused_3021_);
v_unused_3022_ = lean_ctor_get(v_p_2978_, 1);
lean_dec(v_unused_3022_);
v_unused_3023_ = lean_ctor_get(v_p_2978_, 0);
lean_dec(v_unused_3023_);
v___x_2987_ = v_p_2978_;
v_isShared_2988_ = v_isSharedCheck_3016_;
goto v_resetjp_2986_;
}
else
{
lean_dec(v_p_2978_);
v___x_2987_ = lean_box(0);
v_isShared_2988_ = v_isSharedCheck_3016_;
goto v_resetjp_2986_;
}
v_resetjp_2986_:
{
lean_object* v_val_2989_; lean_object* v___x_2990_; lean_object* v___x_2991_; lean_object* v_buckets_2992_; lean_object* v___x_2994_; uint8_t v_isShared_2995_; uint8_t v_isSharedCheck_3014_; 
v_val_2989_ = lean_ctor_get(v___x_2985_, 0);
lean_inc(v_val_2989_);
lean_dec_ref_known(v___x_2985_, 1);
v___x_2990_ = lean_unsigned_to_nat(0u);
v___x_2991_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_Problem_solveEasyEquality___closed__2, &l_Lean_Elab_Tactic_Omega_Problem_solveEasyEquality___closed__2_once, _init_l_Lean_Elab_Tactic_Omega_Problem_solveEasyEquality___closed__2);
v_buckets_2992_ = lean_ctor_get(v_constraints_2983_, 1);
v_isSharedCheck_3014_ = !lean_is_exclusive(v_constraints_2983_);
if (v_isSharedCheck_3014_ == 0)
{
lean_object* v_unused_3015_; 
v_unused_3015_ = lean_ctor_get(v_constraints_2983_, 0);
lean_dec(v_unused_3015_);
v___x_2994_ = v_constraints_2983_;
v_isShared_2995_ = v_isSharedCheck_3014_;
goto v_resetjp_2993_;
}
else
{
lean_inc(v_buckets_2992_);
lean_dec(v_constraints_2983_);
v___x_2994_ = lean_box(0);
v_isShared_2995_ = v_isSharedCheck_3014_;
goto v_resetjp_2993_;
}
v_resetjp_2993_:
{
lean_object* v___x_2996_; lean_object* v_sign_2997_; lean_object* v___x_2999_; 
lean_inc_n(v___y_2981_, 2);
v___x_2996_ = l_Lean_Omega_IntList_get(v_c_2979_, v___y_2981_);
v_sign_2997_ = l_Int_sign(v___x_2996_);
lean_dec(v___x_2996_);
lean_inc(v_sign_2997_);
if (v_isShared_2995_ == 0)
{
lean_ctor_set(v___x_2994_, 1, v_sign_2997_);
lean_ctor_set(v___x_2994_, 0, v___y_2981_);
v___x_2999_ = v___x_2994_;
goto v_reusejp_2998_;
}
else
{
lean_object* v_reuseFailAlloc_3013_; 
v_reuseFailAlloc_3013_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3013_, 0, v___y_2981_);
lean_ctor_set(v_reuseFailAlloc_3013_, 1, v_sign_2997_);
v___x_2999_ = v_reuseFailAlloc_3013_;
goto v_reusejp_2998_;
}
v_reusejp_2998_:
{
lean_object* v___x_3000_; lean_object* v___x_3001_; uint8_t v___x_3002_; lean_object* v___x_3003_; lean_object* v___x_3004_; lean_object* v_init_3006_; 
lean_inc(v_val_2989_);
v___x_3000_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3000_, 0, v_val_2989_);
lean_ctor_set(v___x_3000_, 1, v___x_2999_);
v___x_3001_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3001_, 0, v___x_3000_);
lean_ctor_set(v___x_3001_, 1, v_eliminations_2984_);
v___x_3002_ = 1;
v___x_3003_ = lean_box(0);
v___x_3004_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_Problem_solveEasyEquality___closed__3, &l_Lean_Elab_Tactic_Omega_Problem_solveEasyEquality___closed__3_once, _init_l_Lean_Elab_Tactic_Omega_Problem_solveEasyEquality___closed__3);
if (v_isShared_2988_ == 0)
{
lean_ctor_set(v___x_2987_, 6, v___x_3004_);
lean_ctor_set(v___x_2987_, 5, v___x_3003_);
lean_ctor_set(v___x_2987_, 4, v___x_3001_);
lean_ctor_set(v___x_2987_, 3, v___x_2991_);
lean_ctor_set(v___x_2987_, 2, v___x_2991_);
lean_ctor_set(v___x_2987_, 1, v___x_2990_);
v_init_3006_ = v___x_2987_;
goto v_reusejp_3005_;
}
else
{
lean_object* v_reuseFailAlloc_3012_; 
v_reuseFailAlloc_3012_ = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(v_reuseFailAlloc_3012_, 0, v_assumptions_2982_);
lean_ctor_set(v_reuseFailAlloc_3012_, 1, v___x_2990_);
lean_ctor_set(v_reuseFailAlloc_3012_, 2, v___x_2991_);
lean_ctor_set(v_reuseFailAlloc_3012_, 3, v___x_2991_);
lean_ctor_set(v_reuseFailAlloc_3012_, 4, v___x_3001_);
lean_ctor_set(v_reuseFailAlloc_3012_, 5, v___x_3003_);
lean_ctor_set(v_reuseFailAlloc_3012_, 6, v___x_3004_);
v_init_3006_ = v_reuseFailAlloc_3012_;
goto v_reusejp_3005_;
}
v_reusejp_3005_:
{
lean_object* v___x_3007_; uint8_t v___x_3008_; 
lean_ctor_set_uint8(v_init_3006_, sizeof(void*)*7, v___x_3002_);
v___x_3007_ = lean_array_get_size(v_buckets_2992_);
v___x_3008_ = lean_nat_dec_lt(v___x_2990_, v___x_3007_);
if (v___x_3008_ == 0)
{
lean_dec(v_sign_2997_);
lean_dec_ref(v_buckets_2992_);
lean_dec(v_val_2989_);
lean_dec(v___y_2981_);
return v_init_3006_;
}
else
{
size_t v___x_3009_; size_t v___x_3010_; lean_object* v___x_3011_; 
v___x_3009_ = ((size_t)0ULL);
v___x_3010_ = lean_usize_of_nat(v___x_3007_);
v___x_3011_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Omega_Problem_solveEasyEquality_spec__1(v___y_2981_, v_sign_2997_, v_val_2989_, v_buckets_2992_, v___x_3009_, v___x_3010_, v_init_3006_);
lean_dec_ref(v_buckets_2992_);
lean_dec(v_sign_2997_);
return v___x_3011_;
}
}
}
}
}
}
else
{
lean_dec(v___x_2985_);
lean_dec_ref(v_constraints_2983_);
lean_dec(v___y_2981_);
return v_p_2978_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_solveEasyEquality___boxed(lean_object* v_p_3027_, lean_object* v_c_3028_){
_start:
{
lean_object* v_res_3029_; 
v_res_3029_ = l_Lean_Elab_Tactic_Omega_Problem_solveEasyEquality(v_p_3027_, v_c_3028_);
lean_dec(v_c_3028_);
return v_res_3029_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality_spec__0_spec__0(lean_object* v_msgData_3030_, lean_object* v___y_3031_, lean_object* v___y_3032_, lean_object* v___y_3033_, lean_object* v___y_3034_){
_start:
{
lean_object* v___x_3036_; lean_object* v_env_3037_; lean_object* v___x_3038_; lean_object* v_toCold_3039_; lean_object* v_mctx_3040_; lean_object* v_lctx_3041_; lean_object* v_options_3042_; lean_object* v___x_3043_; lean_object* v___x_3044_; lean_object* v___x_3045_; 
v___x_3036_ = lean_st_ref_get(v___y_3034_);
v_env_3037_ = lean_ctor_get(v___x_3036_, 0);
lean_inc_ref(v_env_3037_);
lean_dec(v___x_3036_);
v___x_3038_ = lean_st_ref_get(v___y_3032_);
v_toCold_3039_ = lean_ctor_get(v___y_3033_, 0);
v_mctx_3040_ = lean_ctor_get(v___x_3038_, 0);
lean_inc_ref(v_mctx_3040_);
lean_dec(v___x_3038_);
v_lctx_3041_ = lean_ctor_get(v___y_3031_, 2);
v_options_3042_ = lean_ctor_get(v_toCold_3039_, 2);
lean_inc_ref(v_options_3042_);
lean_inc_ref(v_lctx_3041_);
v___x_3043_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3043_, 0, v_env_3037_);
lean_ctor_set(v___x_3043_, 1, v_mctx_3040_);
lean_ctor_set(v___x_3043_, 2, v_lctx_3041_);
lean_ctor_set(v___x_3043_, 3, v_options_3042_);
v___x_3044_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3044_, 0, v___x_3043_);
lean_ctor_set(v___x_3044_, 1, v_msgData_3030_);
v___x_3045_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3045_, 0, v___x_3044_);
return v___x_3045_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality_spec__0_spec__0___boxed(lean_object* v_msgData_3046_, lean_object* v___y_3047_, lean_object* v___y_3048_, lean_object* v___y_3049_, lean_object* v___y_3050_, lean_object* v___y_3051_){
_start:
{
lean_object* v_res_3052_; 
v_res_3052_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality_spec__0_spec__0(v_msgData_3046_, v___y_3047_, v___y_3048_, v___y_3049_, v___y_3050_);
lean_dec(v___y_3050_);
lean_dec_ref(v___y_3049_);
lean_dec(v___y_3048_);
lean_dec_ref(v___y_3047_);
return v_res_3052_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality_spec__0___redArg(lean_object* v_msg_3053_, lean_object* v___y_3054_, lean_object* v___y_3055_, lean_object* v___y_3056_, lean_object* v___y_3057_){
_start:
{
lean_object* v_ref_3059_; lean_object* v___x_3060_; lean_object* v_a_3061_; lean_object* v___x_3063_; uint8_t v_isShared_3064_; uint8_t v_isSharedCheck_3069_; 
v_ref_3059_ = lean_ctor_get(v___y_3056_, 2);
v___x_3060_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality_spec__0_spec__0(v_msg_3053_, v___y_3054_, v___y_3055_, v___y_3056_, v___y_3057_);
v_a_3061_ = lean_ctor_get(v___x_3060_, 0);
v_isSharedCheck_3069_ = !lean_is_exclusive(v___x_3060_);
if (v_isSharedCheck_3069_ == 0)
{
v___x_3063_ = v___x_3060_;
v_isShared_3064_ = v_isSharedCheck_3069_;
goto v_resetjp_3062_;
}
else
{
lean_inc(v_a_3061_);
lean_dec(v___x_3060_);
v___x_3063_ = lean_box(0);
v_isShared_3064_ = v_isSharedCheck_3069_;
goto v_resetjp_3062_;
}
v_resetjp_3062_:
{
lean_object* v___x_3065_; lean_object* v___x_3067_; 
lean_inc(v_ref_3059_);
v___x_3065_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3065_, 0, v_ref_3059_);
lean_ctor_set(v___x_3065_, 1, v_a_3061_);
if (v_isShared_3064_ == 0)
{
lean_ctor_set_tag(v___x_3063_, 1);
lean_ctor_set(v___x_3063_, 0, v___x_3065_);
v___x_3067_ = v___x_3063_;
goto v_reusejp_3066_;
}
else
{
lean_object* v_reuseFailAlloc_3068_; 
v_reuseFailAlloc_3068_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3068_, 0, v___x_3065_);
v___x_3067_ = v_reuseFailAlloc_3068_;
goto v_reusejp_3066_;
}
v_reusejp_3066_:
{
return v___x_3067_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality_spec__0___redArg___boxed(lean_object* v_msg_3070_, lean_object* v___y_3071_, lean_object* v___y_3072_, lean_object* v___y_3073_, lean_object* v___y_3074_, lean_object* v___y_3075_){
_start:
{
lean_object* v_res_3076_; 
v_res_3076_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality_spec__0___redArg(v_msg_3070_, v___y_3071_, v___y_3072_, v___y_3073_, v___y_3074_);
lean_dec(v___y_3074_);
lean_dec_ref(v___y_3073_);
lean_dec(v___y_3072_);
lean_dec_ref(v___y_3071_);
return v_res_3076_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality___closed__1(void){
_start:
{
lean_object* v___x_3078_; lean_object* v___x_3079_; 
v___x_3078_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality___closed__0));
v___x_3079_ = l_Lean_stringToMessageData(v___x_3078_);
return v___x_3079_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality___closed__3(void){
_start:
{
lean_object* v___x_3081_; lean_object* v___x_3082_; 
v___x_3081_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality___closed__2));
v___x_3082_ = l_Lean_stringToMessageData(v___x_3081_);
return v___x_3082_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality___closed__5(void){
_start:
{
lean_object* v___x_3084_; lean_object* v___x_3085_; 
v___x_3084_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality___closed__4));
v___x_3085_ = l_Lean_stringToMessageData(v___x_3084_);
return v___x_3085_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality(lean_object* v_p_3086_, lean_object* v_c_3087_, lean_object* v___y_3088_, lean_object* v___y_3089_, lean_object* v___y_3090_, uint8_t v___y_3091_, lean_object* v___y_3092_, lean_object* v___y_3093_, lean_object* v___y_3094_, lean_object* v___y_3095_, lean_object* v___y_3096_){
_start:
{
lean_object* v_constraints_3098_; lean_object* v___x_3099_; 
v_constraints_3098_ = lean_ctor_get(v_p_3086_, 2);
v___x_3099_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_Problem_addConstraint_spec__0___redArg(v_constraints_3098_, v_c_3087_);
if (lean_obj_tag(v___x_3099_) == 1)
{
lean_object* v_val_3100_; lean_object* v___x_3102_; uint8_t v_isShared_3103_; uint8_t v_isSharedCheck_3199_; 
v_val_3100_ = lean_ctor_get(v___x_3099_, 0);
v_isSharedCheck_3199_ = !lean_is_exclusive(v___x_3099_);
if (v_isSharedCheck_3199_ == 0)
{
v___x_3102_ = v___x_3099_;
v_isShared_3103_ = v_isSharedCheck_3199_;
goto v_resetjp_3101_;
}
else
{
lean_inc(v_val_3100_);
lean_dec(v___x_3099_);
v___x_3102_ = lean_box(0);
v_isShared_3103_ = v_isSharedCheck_3199_;
goto v_resetjp_3101_;
}
v_resetjp_3101_:
{
lean_object* v_constraint_3104_; lean_object* v_lowerBound_3105_; 
v_constraint_3104_ = lean_ctor_get(v_val_3100_, 1);
v_lowerBound_3105_ = lean_ctor_get(v_constraint_3104_, 0);
lean_inc(v_lowerBound_3105_);
if (lean_obj_tag(v_lowerBound_3105_) == 1)
{
lean_object* v_upperBound_3106_; 
lean_del_object(v___x_3102_);
v_upperBound_3106_ = lean_ctor_get(v_constraint_3104_, 1);
lean_inc(v_upperBound_3106_);
if (lean_obj_tag(v_upperBound_3106_) == 1)
{
lean_object* v_coeffs_3107_; lean_object* v_justification_3108_; lean_object* v___x_3110_; uint8_t v_isShared_3111_; uint8_t v_isSharedCheck_3186_; 
v_coeffs_3107_ = lean_ctor_get(v_val_3100_, 0);
v_justification_3108_ = lean_ctor_get(v_val_3100_, 2);
v_isSharedCheck_3186_ = !lean_is_exclusive(v_val_3100_);
if (v_isSharedCheck_3186_ == 0)
{
lean_object* v_unused_3187_; 
v_unused_3187_ = lean_ctor_get(v_val_3100_, 1);
lean_dec(v_unused_3187_);
v___x_3110_ = v_val_3100_;
v_isShared_3111_ = v_isSharedCheck_3186_;
goto v_resetjp_3109_;
}
else
{
lean_inc(v_justification_3108_);
lean_inc(v_coeffs_3107_);
lean_dec(v_val_3100_);
v___x_3110_ = lean_box(0);
v_isShared_3111_ = v_isSharedCheck_3186_;
goto v_resetjp_3109_;
}
v_resetjp_3109_:
{
lean_object* v_val_3112_; lean_object* v_val_3113_; lean_object* v___x_3114_; lean_object* v___x_3115_; lean_object* v_m_3116_; lean_object* v___x_3117_; 
v_val_3112_ = lean_ctor_get(v_lowerBound_3105_, 0);
lean_inc(v_val_3112_);
lean_dec_ref_known(v_lowerBound_3105_, 1);
v_val_3113_ = lean_ctor_get(v_upperBound_3106_, 0);
lean_inc(v_val_3113_);
lean_dec_ref_known(v_upperBound_3106_, 1);
lean_inc(v_c_3087_);
v___x_3114_ = l_Lean_Elab_Tactic_Omega_List_minNatAbs(v_c_3087_);
v___x_3115_ = lean_unsigned_to_nat(1u);
v_m_3116_ = lean_nat_add(v___x_3114_, v___x_3115_);
lean_dec(v___x_3114_);
v___x_3117_ = l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg(v___y_3089_, v___y_3093_, v___y_3094_, v___y_3095_, v___y_3096_);
if (lean_obj_tag(v___x_3117_) == 0)
{
lean_object* v_a_3118_; lean_object* v___x_3119_; lean_object* v___x_3120_; lean_object* v_nil_3121_; lean_object* v_cons_3122_; lean_object* v___x_3123_; lean_object* v___x_3124_; lean_object* v___x_3125_; 
v_a_3118_ = lean_ctor_get(v___x_3117_, 0);
lean_inc(v_a_3118_);
lean_dec_ref_known(v___x_3117_, 1);
v___x_3119_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__19, &l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__19_once, _init_l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__19);
lean_inc(v_m_3116_);
v___x_3120_ = l_Lean_mkNatLit(v_m_3116_);
v_nil_3121_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__12, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__12_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__12);
v_cons_3122_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__16, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__16_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__16);
v___x_3123_ = l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lean_Elab_Tactic_Omega_Justification_tidyProof_spec__0(v_nil_3121_, v_cons_3122_, v_c_3087_);
lean_dec(v_c_3087_);
v___x_3124_ = l_Lean_mkApp3(v___x_3119_, v___x_3120_, v___x_3123_, v_a_3118_);
v___x_3125_ = l_Lean_Elab_Tactic_Omega_lookup(v___x_3124_, v___y_3088_, v___y_3089_, v___y_3090_, v___y_3091_, v___y_3092_, v___y_3093_, v___y_3094_, v___y_3095_, v___y_3096_);
if (lean_obj_tag(v___x_3125_) == 0)
{
lean_object* v_a_3126_; lean_object* v___x_3128_; uint8_t v_isShared_3129_; uint8_t v_isSharedCheck_3169_; 
v_a_3126_ = lean_ctor_get(v___x_3125_, 0);
v_isSharedCheck_3169_ = !lean_is_exclusive(v___x_3125_);
if (v_isSharedCheck_3169_ == 0)
{
v___x_3128_ = v___x_3125_;
v_isShared_3129_ = v_isSharedCheck_3169_;
goto v_resetjp_3127_;
}
else
{
lean_inc(v_a_3126_);
lean_dec(v___x_3125_);
v___x_3128_ = lean_box(0);
v_isShared_3129_ = v_isSharedCheck_3169_;
goto v_resetjp_3127_;
}
v_resetjp_3127_:
{
lean_object* v_fst_3130_; lean_object* v_snd_3131_; uint8_t v___x_3144_; 
v_fst_3130_ = lean_ctor_get(v_a_3126_, 0);
lean_inc(v_fst_3130_);
v_snd_3131_ = lean_ctor_get(v_a_3126_, 1);
lean_inc(v_snd_3131_);
lean_dec(v_a_3126_);
v___x_3144_ = lean_int_dec_eq(v_val_3113_, v_val_3112_);
lean_dec(v_val_3113_);
if (v___x_3144_ == 0)
{
lean_object* v___x_3145_; lean_object* v___x_3146_; 
lean_dec(v_snd_3131_);
lean_dec(v_fst_3130_);
lean_del_object(v___x_3128_);
lean_dec(v_m_3116_);
lean_dec(v_val_3112_);
lean_del_object(v___x_3110_);
lean_dec_ref(v_justification_3108_);
lean_dec(v_coeffs_3107_);
lean_dec_ref(v_p_3086_);
v___x_3145_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality___closed__1, &l_Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality___closed__1_once, _init_l_Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality___closed__1);
v___x_3146_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality_spec__0___redArg(v___x_3145_, v___y_3093_, v___y_3094_, v___y_3095_, v___y_3096_);
return v___x_3146_;
}
else
{
if (lean_obj_tag(v_snd_3131_) == 0)
{
lean_object* v___x_3147_; lean_object* v___x_3148_; lean_object* v_a_3149_; lean_object* v___x_3151_; uint8_t v_isShared_3152_; uint8_t v_isSharedCheck_3156_; 
lean_dec(v_fst_3130_);
lean_del_object(v___x_3128_);
lean_dec(v_m_3116_);
lean_dec(v_val_3112_);
lean_del_object(v___x_3110_);
lean_dec_ref(v_justification_3108_);
lean_dec(v_coeffs_3107_);
lean_dec_ref(v_p_3086_);
v___x_3147_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality___closed__3, &l_Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality___closed__3_once, _init_l_Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality___closed__3);
v___x_3148_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality_spec__0___redArg(v___x_3147_, v___y_3093_, v___y_3094_, v___y_3095_, v___y_3096_);
v_a_3149_ = lean_ctor_get(v___x_3148_, 0);
v_isSharedCheck_3156_ = !lean_is_exclusive(v___x_3148_);
if (v_isSharedCheck_3156_ == 0)
{
v___x_3151_ = v___x_3148_;
v_isShared_3152_ = v_isSharedCheck_3156_;
goto v_resetjp_3150_;
}
else
{
lean_inc(v_a_3149_);
lean_dec(v___x_3148_);
v___x_3151_ = lean_box(0);
v_isShared_3152_ = v_isSharedCheck_3156_;
goto v_resetjp_3150_;
}
v_resetjp_3150_:
{
lean_object* v___x_3154_; 
if (v_isShared_3152_ == 0)
{
v___x_3154_ = v___x_3151_;
goto v_reusejp_3153_;
}
else
{
lean_object* v_reuseFailAlloc_3155_; 
v_reuseFailAlloc_3155_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3155_, 0, v_a_3149_);
v___x_3154_ = v_reuseFailAlloc_3155_;
goto v_reusejp_3153_;
}
v_reusejp_3153_:
{
return v___x_3154_;
}
}
}
else
{
lean_object* v_val_3157_; uint8_t v___x_3158_; 
v_val_3157_ = lean_ctor_get(v_snd_3131_, 0);
lean_inc(v_val_3157_);
lean_dec_ref_known(v_snd_3131_, 1);
v___x_3158_ = l_List_isEmpty___redArg(v_val_3157_);
lean_dec(v_val_3157_);
if (v___x_3158_ == 0)
{
lean_object* v___x_3159_; lean_object* v___x_3160_; lean_object* v_a_3161_; lean_object* v___x_3163_; uint8_t v_isShared_3164_; uint8_t v_isSharedCheck_3168_; 
lean_dec(v_fst_3130_);
lean_del_object(v___x_3128_);
lean_dec(v_m_3116_);
lean_dec(v_val_3112_);
lean_del_object(v___x_3110_);
lean_dec_ref(v_justification_3108_);
lean_dec(v_coeffs_3107_);
lean_dec_ref(v_p_3086_);
v___x_3159_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality___closed__5, &l_Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality___closed__5_once, _init_l_Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality___closed__5);
v___x_3160_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality_spec__0___redArg(v___x_3159_, v___y_3093_, v___y_3094_, v___y_3095_, v___y_3096_);
v_a_3161_ = lean_ctor_get(v___x_3160_, 0);
v_isSharedCheck_3168_ = !lean_is_exclusive(v___x_3160_);
if (v_isSharedCheck_3168_ == 0)
{
v___x_3163_ = v___x_3160_;
v_isShared_3164_ = v_isSharedCheck_3168_;
goto v_resetjp_3162_;
}
else
{
lean_inc(v_a_3161_);
lean_dec(v___x_3160_);
v___x_3163_ = lean_box(0);
v_isShared_3164_ = v_isSharedCheck_3168_;
goto v_resetjp_3162_;
}
v_resetjp_3162_:
{
lean_object* v___x_3166_; 
if (v_isShared_3164_ == 0)
{
v___x_3166_ = v___x_3163_;
goto v_reusejp_3165_;
}
else
{
lean_object* v_reuseFailAlloc_3167_; 
v_reuseFailAlloc_3167_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3167_, 0, v_a_3161_);
v___x_3166_ = v_reuseFailAlloc_3167_;
goto v_reusejp_3165_;
}
v_reusejp_3165_:
{
return v___x_3166_;
}
}
}
else
{
goto v___jp_3132_;
}
}
}
v___jp_3132_:
{
lean_object* v___x_3133_; lean_object* v___x_3134_; lean_object* v___x_3135_; lean_object* v___x_3136_; lean_object* v___x_3138_; 
lean_inc(v_coeffs_3107_);
lean_inc_n(v_m_3116_, 2);
v___x_3133_ = l_Lean_Omega_bmod__coeffs(v_m_3116_, v_fst_3130_, v_coeffs_3107_);
v___x_3134_ = l_Int_bmod(v_val_3112_, v_m_3116_);
v___x_3135_ = l_Lean_Omega_Constraint_exact(v___x_3134_);
v___x_3136_ = lean_alloc_ctor(4, 5, 0);
lean_ctor_set(v___x_3136_, 0, v_m_3116_);
lean_ctor_set(v___x_3136_, 1, v_val_3112_);
lean_ctor_set(v___x_3136_, 2, v_fst_3130_);
lean_ctor_set(v___x_3136_, 3, v_coeffs_3107_);
lean_ctor_set(v___x_3136_, 4, v_justification_3108_);
if (v_isShared_3111_ == 0)
{
lean_ctor_set(v___x_3110_, 2, v___x_3136_);
lean_ctor_set(v___x_3110_, 1, v___x_3135_);
lean_ctor_set(v___x_3110_, 0, v___x_3133_);
v___x_3138_ = v___x_3110_;
goto v_reusejp_3137_;
}
else
{
lean_object* v_reuseFailAlloc_3143_; 
v_reuseFailAlloc_3143_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3143_, 0, v___x_3133_);
lean_ctor_set(v_reuseFailAlloc_3143_, 1, v___x_3135_);
lean_ctor_set(v_reuseFailAlloc_3143_, 2, v___x_3136_);
v___x_3138_ = v_reuseFailAlloc_3143_;
goto v_reusejp_3137_;
}
v_reusejp_3137_:
{
lean_object* v___x_3139_; lean_object* v___x_3141_; 
v___x_3139_ = l_Lean_Elab_Tactic_Omega_Problem_addConstraint(v_p_3086_, v___x_3138_);
if (v_isShared_3129_ == 0)
{
lean_ctor_set(v___x_3128_, 0, v___x_3139_);
v___x_3141_ = v___x_3128_;
goto v_reusejp_3140_;
}
else
{
lean_object* v_reuseFailAlloc_3142_; 
v_reuseFailAlloc_3142_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3142_, 0, v___x_3139_);
v___x_3141_ = v_reuseFailAlloc_3142_;
goto v_reusejp_3140_;
}
v_reusejp_3140_:
{
return v___x_3141_;
}
}
}
}
}
else
{
lean_object* v_a_3170_; lean_object* v___x_3172_; uint8_t v_isShared_3173_; uint8_t v_isSharedCheck_3177_; 
lean_dec(v_m_3116_);
lean_dec(v_val_3113_);
lean_dec(v_val_3112_);
lean_del_object(v___x_3110_);
lean_dec_ref(v_justification_3108_);
lean_dec(v_coeffs_3107_);
lean_dec_ref(v_p_3086_);
v_a_3170_ = lean_ctor_get(v___x_3125_, 0);
v_isSharedCheck_3177_ = !lean_is_exclusive(v___x_3125_);
if (v_isSharedCheck_3177_ == 0)
{
v___x_3172_ = v___x_3125_;
v_isShared_3173_ = v_isSharedCheck_3177_;
goto v_resetjp_3171_;
}
else
{
lean_inc(v_a_3170_);
lean_dec(v___x_3125_);
v___x_3172_ = lean_box(0);
v_isShared_3173_ = v_isSharedCheck_3177_;
goto v_resetjp_3171_;
}
v_resetjp_3171_:
{
lean_object* v___x_3175_; 
if (v_isShared_3173_ == 0)
{
v___x_3175_ = v___x_3172_;
goto v_reusejp_3174_;
}
else
{
lean_object* v_reuseFailAlloc_3176_; 
v_reuseFailAlloc_3176_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3176_, 0, v_a_3170_);
v___x_3175_ = v_reuseFailAlloc_3176_;
goto v_reusejp_3174_;
}
v_reusejp_3174_:
{
return v___x_3175_;
}
}
}
}
else
{
lean_object* v_a_3178_; lean_object* v___x_3180_; uint8_t v_isShared_3181_; uint8_t v_isSharedCheck_3185_; 
lean_dec(v_m_3116_);
lean_dec(v_val_3113_);
lean_dec(v_val_3112_);
lean_del_object(v___x_3110_);
lean_dec_ref(v_justification_3108_);
lean_dec(v_coeffs_3107_);
lean_dec(v_c_3087_);
lean_dec_ref(v_p_3086_);
v_a_3178_ = lean_ctor_get(v___x_3117_, 0);
v_isSharedCheck_3185_ = !lean_is_exclusive(v___x_3117_);
if (v_isSharedCheck_3185_ == 0)
{
v___x_3180_ = v___x_3117_;
v_isShared_3181_ = v_isSharedCheck_3185_;
goto v_resetjp_3179_;
}
else
{
lean_inc(v_a_3178_);
lean_dec(v___x_3117_);
v___x_3180_ = lean_box(0);
v_isShared_3181_ = v_isSharedCheck_3185_;
goto v_resetjp_3179_;
}
v_resetjp_3179_:
{
lean_object* v___x_3183_; 
if (v_isShared_3181_ == 0)
{
v___x_3183_ = v___x_3180_;
goto v_reusejp_3182_;
}
else
{
lean_object* v_reuseFailAlloc_3184_; 
v_reuseFailAlloc_3184_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3184_, 0, v_a_3178_);
v___x_3183_ = v_reuseFailAlloc_3184_;
goto v_reusejp_3182_;
}
v_reusejp_3182_:
{
return v___x_3183_;
}
}
}
}
}
else
{
lean_object* v___x_3189_; uint8_t v_isShared_3190_; uint8_t v_isSharedCheck_3194_; 
lean_dec(v_upperBound_3106_);
lean_dec(v_val_3100_);
lean_dec(v_c_3087_);
v_isSharedCheck_3194_ = !lean_is_exclusive(v_lowerBound_3105_);
if (v_isSharedCheck_3194_ == 0)
{
lean_object* v_unused_3195_; 
v_unused_3195_ = lean_ctor_get(v_lowerBound_3105_, 0);
lean_dec(v_unused_3195_);
v___x_3189_ = v_lowerBound_3105_;
v_isShared_3190_ = v_isSharedCheck_3194_;
goto v_resetjp_3188_;
}
else
{
lean_dec(v_lowerBound_3105_);
v___x_3189_ = lean_box(0);
v_isShared_3190_ = v_isSharedCheck_3194_;
goto v_resetjp_3188_;
}
v_resetjp_3188_:
{
lean_object* v___x_3192_; 
if (v_isShared_3190_ == 0)
{
lean_ctor_set_tag(v___x_3189_, 0);
lean_ctor_set(v___x_3189_, 0, v_p_3086_);
v___x_3192_ = v___x_3189_;
goto v_reusejp_3191_;
}
else
{
lean_object* v_reuseFailAlloc_3193_; 
v_reuseFailAlloc_3193_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3193_, 0, v_p_3086_);
v___x_3192_ = v_reuseFailAlloc_3193_;
goto v_reusejp_3191_;
}
v_reusejp_3191_:
{
return v___x_3192_;
}
}
}
}
else
{
lean_object* v___x_3197_; 
lean_dec(v_lowerBound_3105_);
lean_dec(v_val_3100_);
lean_dec(v_c_3087_);
if (v_isShared_3103_ == 0)
{
lean_ctor_set_tag(v___x_3102_, 0);
lean_ctor_set(v___x_3102_, 0, v_p_3086_);
v___x_3197_ = v___x_3102_;
goto v_reusejp_3196_;
}
else
{
lean_object* v_reuseFailAlloc_3198_; 
v_reuseFailAlloc_3198_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3198_, 0, v_p_3086_);
v___x_3197_ = v_reuseFailAlloc_3198_;
goto v_reusejp_3196_;
}
v_reusejp_3196_:
{
return v___x_3197_;
}
}
}
}
else
{
lean_object* v___x_3200_; 
lean_dec(v___x_3099_);
lean_dec(v_c_3087_);
v___x_3200_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3200_, 0, v_p_3086_);
return v___x_3200_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality___boxed(lean_object* v_p_3201_, lean_object* v_c_3202_, lean_object* v___y_3203_, lean_object* v___y_3204_, lean_object* v___y_3205_, lean_object* v___y_3206_, lean_object* v___y_3207_, lean_object* v___y_3208_, lean_object* v___y_3209_, lean_object* v___y_3210_, lean_object* v___y_3211_, lean_object* v___y_3212_){
_start:
{
uint8_t v___y_9930__boxed_3213_; lean_object* v_res_3214_; 
v___y_9930__boxed_3213_ = lean_unbox(v___y_3206_);
v_res_3214_ = l_Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality(v_p_3201_, v_c_3202_, v___y_3203_, v___y_3204_, v___y_3205_, v___y_9930__boxed_3213_, v___y_3207_, v___y_3208_, v___y_3209_, v___y_3210_, v___y_3211_);
lean_dec(v___y_3211_);
lean_dec_ref(v___y_3210_);
lean_dec(v___y_3209_);
lean_dec_ref(v___y_3208_);
lean_dec(v___y_3207_);
lean_dec_ref(v___y_3205_);
lean_dec(v___y_3204_);
lean_dec(v___y_3203_);
return v_res_3214_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality_spec__0(lean_object* v_00_u03b1_3215_, lean_object* v_msg_3216_, lean_object* v___y_3217_, lean_object* v___y_3218_, lean_object* v___y_3219_, uint8_t v___y_3220_, lean_object* v___y_3221_, lean_object* v___y_3222_, lean_object* v___y_3223_, lean_object* v___y_3224_, lean_object* v___y_3225_){
_start:
{
lean_object* v___x_3227_; 
v___x_3227_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality_spec__0___redArg(v_msg_3216_, v___y_3222_, v___y_3223_, v___y_3224_, v___y_3225_);
return v___x_3227_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality_spec__0___boxed(lean_object* v_00_u03b1_3228_, lean_object* v_msg_3229_, lean_object* v___y_3230_, lean_object* v___y_3231_, lean_object* v___y_3232_, lean_object* v___y_3233_, lean_object* v___y_3234_, lean_object* v___y_3235_, lean_object* v___y_3236_, lean_object* v___y_3237_, lean_object* v___y_3238_, lean_object* v___y_3239_){
_start:
{
uint8_t v___y_10169__boxed_3240_; lean_object* v_res_3241_; 
v___y_10169__boxed_3240_ = lean_unbox(v___y_3233_);
v_res_3241_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality_spec__0(v_00_u03b1_3228_, v_msg_3229_, v___y_3230_, v___y_3231_, v___y_3232_, v___y_10169__boxed_3240_, v___y_3234_, v___y_3235_, v___y_3236_, v___y_3237_, v___y_3238_);
lean_dec(v___y_3238_);
lean_dec_ref(v___y_3237_);
lean_dec(v___y_3236_);
lean_dec_ref(v___y_3235_);
lean_dec(v___y_3234_);
lean_dec_ref(v___y_3232_);
lean_dec(v___y_3231_);
lean_dec(v___y_3230_);
return v_res_3241_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_solveEquality(lean_object* v_p_3242_, lean_object* v_c_3243_, lean_object* v_m_3244_, lean_object* v___y_3245_, lean_object* v___y_3246_, lean_object* v___y_3247_, uint8_t v___y_3248_, lean_object* v___y_3249_, lean_object* v___y_3250_, lean_object* v___y_3251_, lean_object* v___y_3252_, lean_object* v___y_3253_){
_start:
{
lean_object* v___x_3255_; uint8_t v___x_3256_; 
v___x_3255_ = lean_unsigned_to_nat(1u);
v___x_3256_ = lean_nat_dec_eq(v_m_3244_, v___x_3255_);
if (v___x_3256_ == 0)
{
lean_object* v___x_3257_; 
v___x_3257_ = l_Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality(v_p_3242_, v_c_3243_, v___y_3245_, v___y_3246_, v___y_3247_, v___y_3248_, v___y_3249_, v___y_3250_, v___y_3251_, v___y_3252_, v___y_3253_);
return v___x_3257_;
}
else
{
lean_object* v___x_3258_; lean_object* v___x_3259_; 
v___x_3258_ = l_Lean_Elab_Tactic_Omega_Problem_solveEasyEquality(v_p_3242_, v_c_3243_);
lean_dec(v_c_3243_);
v___x_3259_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3259_, 0, v___x_3258_);
return v___x_3259_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_solveEquality___boxed(lean_object* v_p_3260_, lean_object* v_c_3261_, lean_object* v_m_3262_, lean_object* v___y_3263_, lean_object* v___y_3264_, lean_object* v___y_3265_, lean_object* v___y_3266_, lean_object* v___y_3267_, lean_object* v___y_3268_, lean_object* v___y_3269_, lean_object* v___y_3270_, lean_object* v___y_3271_, lean_object* v___y_3272_){
_start:
{
uint8_t v___y_419__boxed_3273_; lean_object* v_res_3274_; 
v___y_419__boxed_3273_ = lean_unbox(v___y_3266_);
v_res_3274_ = l_Lean_Elab_Tactic_Omega_Problem_solveEquality(v_p_3260_, v_c_3261_, v_m_3262_, v___y_3263_, v___y_3264_, v___y_3265_, v___y_419__boxed_3273_, v___y_3267_, v___y_3268_, v___y_3269_, v___y_3270_, v___y_3271_);
lean_dec(v___y_3271_);
lean_dec_ref(v___y_3270_);
lean_dec(v___y_3269_);
lean_dec_ref(v___y_3268_);
lean_dec(v___y_3267_);
lean_dec_ref(v___y_3265_);
lean_dec(v___y_3264_);
lean_dec(v___y_3263_);
lean_dec(v_m_3262_);
return v_res_3274_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_solveEqualities(lean_object* v_p_3275_, lean_object* v___y_3276_, lean_object* v___y_3277_, lean_object* v___y_3278_, uint8_t v___y_3279_, lean_object* v___y_3280_, lean_object* v___y_3281_, lean_object* v___y_3282_, lean_object* v___y_3283_, lean_object* v___y_3284_){
_start:
{
uint8_t v_possible_3286_; 
v_possible_3286_ = lean_ctor_get_uint8(v_p_3275_, sizeof(void*)*7);
if (v_possible_3286_ == 0)
{
lean_object* v___x_3287_; 
v___x_3287_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3287_, 0, v_p_3275_);
return v___x_3287_;
}
else
{
lean_object* v___x_3288_; 
v___x_3288_ = l_Lean_Elab_Tactic_Omega_Problem_selectEquality(v_p_3275_);
if (lean_obj_tag(v___x_3288_) == 0)
{
lean_object* v___x_3289_; 
v___x_3289_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3289_, 0, v_p_3275_);
return v___x_3289_;
}
else
{
lean_object* v_val_3290_; lean_object* v_fst_3291_; lean_object* v_snd_3292_; lean_object* v___x_3293_; 
v_val_3290_ = lean_ctor_get(v___x_3288_, 0);
lean_inc(v_val_3290_);
lean_dec_ref_known(v___x_3288_, 1);
v_fst_3291_ = lean_ctor_get(v_val_3290_, 0);
lean_inc(v_fst_3291_);
v_snd_3292_ = lean_ctor_get(v_val_3290_, 1);
lean_inc(v_snd_3292_);
lean_dec(v_val_3290_);
v___x_3293_ = l_Lean_Elab_Tactic_Omega_Problem_solveEquality(v_p_3275_, v_fst_3291_, v_snd_3292_, v___y_3276_, v___y_3277_, v___y_3278_, v___y_3279_, v___y_3280_, v___y_3281_, v___y_3282_, v___y_3283_, v___y_3284_);
lean_dec(v_snd_3292_);
if (lean_obj_tag(v___x_3293_) == 0)
{
lean_object* v_a_3294_; 
v_a_3294_ = lean_ctor_get(v___x_3293_, 0);
lean_inc(v_a_3294_);
lean_dec_ref_known(v___x_3293_, 1);
v_p_3275_ = v_a_3294_;
goto _start;
}
else
{
return v___x_3293_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_solveEqualities___boxed(lean_object* v_p_3296_, lean_object* v___y_3297_, lean_object* v___y_3298_, lean_object* v___y_3299_, lean_object* v___y_3300_, lean_object* v___y_3301_, lean_object* v___y_3302_, lean_object* v___y_3303_, lean_object* v___y_3304_, lean_object* v___y_3305_, lean_object* v___y_3306_){
_start:
{
uint8_t v___y_1308__boxed_3307_; lean_object* v_res_3308_; 
v___y_1308__boxed_3307_ = lean_unbox(v___y_3300_);
v_res_3308_ = l_Lean_Elab_Tactic_Omega_Problem_solveEqualities(v_p_3296_, v___y_3297_, v___y_3298_, v___y_3299_, v___y_1308__boxed_3307_, v___y_3301_, v___y_3302_, v___y_3303_, v___y_3304_, v___y_3305_);
lean_dec(v___y_3305_);
lean_dec_ref(v___y_3304_);
lean_dec(v___y_3303_);
lean_dec_ref(v___y_3302_);
lean_dec(v___y_3301_);
lean_dec_ref(v___y_3299_);
lean_dec(v___y_3298_);
lean_dec(v___y_3297_);
return v_res_3308_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_Problem_addInequality__proof___closed__2(void){
_start:
{
lean_object* v___x_3315_; lean_object* v___x_3316_; lean_object* v___x_3317_; 
v___x_3315_ = lean_box(0);
v___x_3316_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Problem_addInequality__proof___closed__1));
v___x_3317_ = l_Lean_Expr_const___override(v___x_3316_, v___x_3315_);
return v___x_3317_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_addInequality__proof(lean_object* v_c_3318_, lean_object* v_x_3319_, lean_object* v_p_3320_, lean_object* v___y_3321_, lean_object* v___y_3322_, lean_object* v___y_3323_, uint8_t v___y_3324_, lean_object* v___y_3325_, lean_object* v___y_3326_, lean_object* v___y_3327_, lean_object* v___y_3328_, lean_object* v___y_3329_){
_start:
{
lean_object* v___x_3331_; 
v___x_3331_ = l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg(v___y_3322_, v___y_3326_, v___y_3327_, v___y_3328_, v___y_3329_);
if (lean_obj_tag(v___x_3331_) == 0)
{
lean_object* v_a_3332_; lean_object* v___x_3333_; lean_object* v___x_3334_; 
v_a_3332_ = lean_ctor_get(v___x_3331_, 0);
lean_inc(v_a_3332_);
lean_dec_ref_known(v___x_3331_, 1);
v___x_3333_ = lean_box(v___y_3324_);
lean_inc(v___y_3329_);
lean_inc_ref(v___y_3328_);
lean_inc(v___y_3327_);
lean_inc_ref(v___y_3326_);
lean_inc(v___y_3325_);
lean_inc_ref(v___y_3323_);
lean_inc(v___y_3322_);
lean_inc(v___y_3321_);
v___x_3334_ = lean_apply_10(v_p_3320_, v___y_3321_, v___y_3322_, v___y_3323_, v___x_3333_, v___y_3325_, v___y_3326_, v___y_3327_, v___y_3328_, v___y_3329_, lean_box(0));
if (lean_obj_tag(v___x_3334_) == 0)
{
lean_object* v_a_3335_; lean_object* v___x_3337_; uint8_t v_isShared_3338_; uint8_t v_isSharedCheck_3360_; 
v_a_3335_ = lean_ctor_get(v___x_3334_, 0);
v_isSharedCheck_3360_ = !lean_is_exclusive(v___x_3334_);
if (v_isSharedCheck_3360_ == 0)
{
v___x_3337_ = v___x_3334_;
v_isShared_3338_ = v_isSharedCheck_3360_;
goto v_resetjp_3336_;
}
else
{
lean_inc(v_a_3335_);
lean_dec(v___x_3334_);
v___x_3337_ = lean_box(0);
v_isShared_3338_ = v_isSharedCheck_3360_;
goto v_resetjp_3336_;
}
v_resetjp_3336_:
{
lean_object* v___x_3339_; lean_object* v___y_3341_; lean_object* v___x_3349_; uint8_t v___x_3350_; 
v___x_3339_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_Problem_addInequality__proof___closed__2, &l_Lean_Elab_Tactic_Omega_Problem_addInequality__proof___closed__2_once, _init_l_Lean_Elab_Tactic_Omega_Problem_addInequality__proof___closed__2);
v___x_3349_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17);
v___x_3350_ = lean_int_dec_le(v___x_3349_, v_c_3318_);
if (v___x_3350_ == 0)
{
lean_object* v___x_3351_; lean_object* v___x_3352_; lean_object* v___x_3353_; lean_object* v___x_3354_; lean_object* v___x_3355_; lean_object* v___x_3356_; lean_object* v___x_3357_; 
v___x_3351_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__23, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__23_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__23);
v___x_3352_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__6, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__6_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__6);
v___x_3353_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__26, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__26_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__26);
v___x_3354_ = lean_int_neg(v_c_3318_);
v___x_3355_ = l_Int_toNat(v___x_3354_);
lean_dec(v___x_3354_);
v___x_3356_ = l_Lean_instToExprInt_mkNat(v___x_3355_);
v___x_3357_ = l_Lean_mkApp3(v___x_3351_, v___x_3352_, v___x_3353_, v___x_3356_);
v___y_3341_ = v___x_3357_;
goto v___jp_3340_;
}
else
{
lean_object* v___x_3358_; lean_object* v___x_3359_; 
v___x_3358_ = l_Int_toNat(v_c_3318_);
v___x_3359_ = l_Lean_instToExprInt_mkNat(v___x_3358_);
v___y_3341_ = v___x_3359_;
goto v___jp_3340_;
}
v___jp_3340_:
{
lean_object* v_nil_3342_; lean_object* v_cons_3343_; lean_object* v___x_3344_; lean_object* v___x_3345_; lean_object* v___x_3347_; 
v_nil_3342_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__12, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__12_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__12);
v_cons_3343_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__16, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__16_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__16);
v___x_3344_ = l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lean_Elab_Tactic_Omega_Justification_tidyProof_spec__0(v_nil_3342_, v_cons_3343_, v_x_3319_);
v___x_3345_ = l_Lean_mkApp4(v___x_3339_, v___y_3341_, v___x_3344_, v_a_3332_, v_a_3335_);
if (v_isShared_3338_ == 0)
{
lean_ctor_set(v___x_3337_, 0, v___x_3345_);
v___x_3347_ = v___x_3337_;
goto v_reusejp_3346_;
}
else
{
lean_object* v_reuseFailAlloc_3348_; 
v_reuseFailAlloc_3348_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3348_, 0, v___x_3345_);
v___x_3347_ = v_reuseFailAlloc_3348_;
goto v_reusejp_3346_;
}
v_reusejp_3346_:
{
return v___x_3347_;
}
}
}
}
else
{
lean_dec(v_a_3332_);
return v___x_3334_;
}
}
else
{
lean_dec_ref(v_p_3320_);
return v___x_3331_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_addInequality__proof___boxed(lean_object* v_c_3361_, lean_object* v_x_3362_, lean_object* v_p_3363_, lean_object* v___y_3364_, lean_object* v___y_3365_, lean_object* v___y_3366_, lean_object* v___y_3367_, lean_object* v___y_3368_, lean_object* v___y_3369_, lean_object* v___y_3370_, lean_object* v___y_3371_, lean_object* v___y_3372_, lean_object* v___y_3373_){
_start:
{
uint8_t v___y_3324__boxed_3374_; lean_object* v_res_3375_; 
v___y_3324__boxed_3374_ = lean_unbox(v___y_3367_);
v_res_3375_ = l_Lean_Elab_Tactic_Omega_Problem_addInequality__proof(v_c_3361_, v_x_3362_, v_p_3363_, v___y_3364_, v___y_3365_, v___y_3366_, v___y_3324__boxed_3374_, v___y_3368_, v___y_3369_, v___y_3370_, v___y_3371_, v___y_3372_);
lean_dec(v___y_3372_);
lean_dec_ref(v___y_3371_);
lean_dec(v___y_3370_);
lean_dec_ref(v___y_3369_);
lean_dec(v___y_3368_);
lean_dec_ref(v___y_3366_);
lean_dec(v___y_3365_);
lean_dec(v___y_3364_);
lean_dec(v_x_3362_);
lean_dec(v_c_3361_);
return v_res_3375_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_Problem_addEquality__proof___closed__2(void){
_start:
{
lean_object* v___x_3382_; lean_object* v___x_3383_; lean_object* v___x_3384_; 
v___x_3382_ = lean_box(0);
v___x_3383_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Problem_addEquality__proof___closed__1));
v___x_3384_ = l_Lean_Expr_const___override(v___x_3383_, v___x_3382_);
return v___x_3384_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_addEquality__proof(lean_object* v_c_3385_, lean_object* v_x_3386_, lean_object* v_p_3387_, lean_object* v___y_3388_, lean_object* v___y_3389_, lean_object* v___y_3390_, uint8_t v___y_3391_, lean_object* v___y_3392_, lean_object* v___y_3393_, lean_object* v___y_3394_, lean_object* v___y_3395_, lean_object* v___y_3396_){
_start:
{
lean_object* v___x_3398_; 
v___x_3398_ = l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg(v___y_3389_, v___y_3393_, v___y_3394_, v___y_3395_, v___y_3396_);
if (lean_obj_tag(v___x_3398_) == 0)
{
lean_object* v_a_3399_; lean_object* v___x_3400_; lean_object* v___x_3401_; 
v_a_3399_ = lean_ctor_get(v___x_3398_, 0);
lean_inc(v_a_3399_);
lean_dec_ref_known(v___x_3398_, 1);
v___x_3400_ = lean_box(v___y_3391_);
lean_inc(v___y_3396_);
lean_inc_ref(v___y_3395_);
lean_inc(v___y_3394_);
lean_inc_ref(v___y_3393_);
lean_inc(v___y_3392_);
lean_inc_ref(v___y_3390_);
lean_inc(v___y_3389_);
lean_inc(v___y_3388_);
v___x_3401_ = lean_apply_10(v_p_3387_, v___y_3388_, v___y_3389_, v___y_3390_, v___x_3400_, v___y_3392_, v___y_3393_, v___y_3394_, v___y_3395_, v___y_3396_, lean_box(0));
if (lean_obj_tag(v___x_3401_) == 0)
{
lean_object* v_a_3402_; lean_object* v___x_3404_; uint8_t v_isShared_3405_; uint8_t v_isSharedCheck_3427_; 
v_a_3402_ = lean_ctor_get(v___x_3401_, 0);
v_isSharedCheck_3427_ = !lean_is_exclusive(v___x_3401_);
if (v_isSharedCheck_3427_ == 0)
{
v___x_3404_ = v___x_3401_;
v_isShared_3405_ = v_isSharedCheck_3427_;
goto v_resetjp_3403_;
}
else
{
lean_inc(v_a_3402_);
lean_dec(v___x_3401_);
v___x_3404_ = lean_box(0);
v_isShared_3405_ = v_isSharedCheck_3427_;
goto v_resetjp_3403_;
}
v_resetjp_3403_:
{
lean_object* v___x_3406_; lean_object* v___y_3408_; lean_object* v___x_3416_; uint8_t v___x_3417_; 
v___x_3406_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_Problem_addEquality__proof___closed__2, &l_Lean_Elab_Tactic_Omega_Problem_addEquality__proof___closed__2_once, _init_l_Lean_Elab_Tactic_Omega_Problem_addEquality__proof___closed__2);
v___x_3416_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17);
v___x_3417_ = lean_int_dec_le(v___x_3416_, v_c_3385_);
if (v___x_3417_ == 0)
{
lean_object* v___x_3418_; lean_object* v___x_3419_; lean_object* v___x_3420_; lean_object* v___x_3421_; lean_object* v___x_3422_; lean_object* v___x_3423_; lean_object* v___x_3424_; 
v___x_3418_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__23, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__23_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__23);
v___x_3419_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__6, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__6_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__6);
v___x_3420_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__26, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__26_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__26);
v___x_3421_ = lean_int_neg(v_c_3385_);
v___x_3422_ = l_Int_toNat(v___x_3421_);
lean_dec(v___x_3421_);
v___x_3423_ = l_Lean_instToExprInt_mkNat(v___x_3422_);
v___x_3424_ = l_Lean_mkApp3(v___x_3418_, v___x_3419_, v___x_3420_, v___x_3423_);
v___y_3408_ = v___x_3424_;
goto v___jp_3407_;
}
else
{
lean_object* v___x_3425_; lean_object* v___x_3426_; 
v___x_3425_ = l_Int_toNat(v_c_3385_);
v___x_3426_ = l_Lean_instToExprInt_mkNat(v___x_3425_);
v___y_3408_ = v___x_3426_;
goto v___jp_3407_;
}
v___jp_3407_:
{
lean_object* v_nil_3409_; lean_object* v_cons_3410_; lean_object* v___x_3411_; lean_object* v___x_3412_; lean_object* v___x_3414_; 
v_nil_3409_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__12, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__12_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__12);
v_cons_3410_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__16, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__16_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__16);
v___x_3411_ = l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lean_Elab_Tactic_Omega_Justification_tidyProof_spec__0(v_nil_3409_, v_cons_3410_, v_x_3386_);
v___x_3412_ = l_Lean_mkApp4(v___x_3406_, v___y_3408_, v___x_3411_, v_a_3399_, v_a_3402_);
if (v_isShared_3405_ == 0)
{
lean_ctor_set(v___x_3404_, 0, v___x_3412_);
v___x_3414_ = v___x_3404_;
goto v_reusejp_3413_;
}
else
{
lean_object* v_reuseFailAlloc_3415_; 
v_reuseFailAlloc_3415_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3415_, 0, v___x_3412_);
v___x_3414_ = v_reuseFailAlloc_3415_;
goto v_reusejp_3413_;
}
v_reusejp_3413_:
{
return v___x_3414_;
}
}
}
}
else
{
lean_dec(v_a_3399_);
return v___x_3401_;
}
}
else
{
lean_dec_ref(v_p_3387_);
return v___x_3398_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_addEquality__proof___boxed(lean_object* v_c_3428_, lean_object* v_x_3429_, lean_object* v_p_3430_, lean_object* v___y_3431_, lean_object* v___y_3432_, lean_object* v___y_3433_, lean_object* v___y_3434_, lean_object* v___y_3435_, lean_object* v___y_3436_, lean_object* v___y_3437_, lean_object* v___y_3438_, lean_object* v___y_3439_, lean_object* v___y_3440_){
_start:
{
uint8_t v___y_3324__boxed_3441_; lean_object* v_res_3442_; 
v___y_3324__boxed_3441_ = lean_unbox(v___y_3434_);
v_res_3442_ = l_Lean_Elab_Tactic_Omega_Problem_addEquality__proof(v_c_3428_, v_x_3429_, v_p_3430_, v___y_3431_, v___y_3432_, v___y_3433_, v___y_3324__boxed_3441_, v___y_3435_, v___y_3436_, v___y_3437_, v___y_3438_, v___y_3439_);
lean_dec(v___y_3439_);
lean_dec_ref(v___y_3438_);
lean_dec(v___y_3437_);
lean_dec_ref(v___y_3436_);
lean_dec(v___y_3435_);
lean_dec_ref(v___y_3433_);
lean_dec(v___y_3432_);
lean_dec(v___y_3431_);
lean_dec(v_x_3429_);
lean_dec(v_c_3428_);
return v_res_3442_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_addInequality___lam__0(lean_object* v_prf_x3f_3443_, lean_object* v___y_3444_, lean_object* v___y_3445_, lean_object* v___y_3446_, uint8_t v___y_3447_, lean_object* v___y_3448_, lean_object* v___y_3449_, lean_object* v___y_3450_, lean_object* v___y_3451_, lean_object* v___y_3452_){
_start:
{
if (lean_obj_tag(v_prf_x3f_3443_) == 0)
{
lean_object* v___x_3454_; uint8_t v___x_3455_; lean_object* v___x_3456_; lean_object* v___x_3457_; 
v___x_3454_ = lean_box(0);
v___x_3455_ = 0;
v___x_3456_ = lean_box(0);
v___x_3457_ = l_Lean_Meta_mkFreshExprMVar(v___x_3454_, v___x_3455_, v___x_3456_, v___y_3449_, v___y_3450_, v___y_3451_, v___y_3452_);
if (lean_obj_tag(v___x_3457_) == 0)
{
lean_object* v_a_3458_; uint8_t v___x_3459_; lean_object* v___x_3460_; 
v_a_3458_ = lean_ctor_get(v___x_3457_, 0);
lean_inc(v_a_3458_);
lean_dec_ref_known(v___x_3457_, 1);
v___x_3459_ = 0;
v___x_3460_ = l_Lean_Meta_mkSorry(v_a_3458_, v___x_3459_, v___y_3449_, v___y_3450_, v___y_3451_, v___y_3452_);
return v___x_3460_;
}
else
{
return v___x_3457_;
}
}
else
{
lean_object* v_val_3461_; lean_object* v___x_3462_; lean_object* v___x_3463_; 
v_val_3461_ = lean_ctor_get(v_prf_x3f_3443_, 0);
lean_inc(v_val_3461_);
lean_dec_ref_known(v_prf_x3f_3443_, 1);
v___x_3462_ = lean_box(v___y_3447_);
lean_inc(v___y_3452_);
lean_inc_ref(v___y_3451_);
lean_inc(v___y_3450_);
lean_inc_ref(v___y_3449_);
lean_inc(v___y_3448_);
lean_inc_ref(v___y_3446_);
lean_inc(v___y_3445_);
lean_inc(v___y_3444_);
v___x_3463_ = lean_apply_10(v_val_3461_, v___y_3444_, v___y_3445_, v___y_3446_, v___x_3462_, v___y_3448_, v___y_3449_, v___y_3450_, v___y_3451_, v___y_3452_, lean_box(0));
return v___x_3463_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_addInequality___lam__0___boxed(lean_object* v_prf_x3f_3464_, lean_object* v___y_3465_, lean_object* v___y_3466_, lean_object* v___y_3467_, lean_object* v___y_3468_, lean_object* v___y_3469_, lean_object* v___y_3470_, lean_object* v___y_3471_, lean_object* v___y_3472_, lean_object* v___y_3473_, lean_object* v___y_3474_){
_start:
{
uint8_t v___y_974__boxed_3475_; lean_object* v_res_3476_; 
v___y_974__boxed_3475_ = lean_unbox(v___y_3468_);
v_res_3476_ = l_Lean_Elab_Tactic_Omega_Problem_addInequality___lam__0(v_prf_x3f_3464_, v___y_3465_, v___y_3466_, v___y_3467_, v___y_974__boxed_3475_, v___y_3469_, v___y_3470_, v___y_3471_, v___y_3472_, v___y_3473_);
lean_dec(v___y_3473_);
lean_dec_ref(v___y_3472_);
lean_dec(v___y_3471_);
lean_dec_ref(v___y_3470_);
lean_dec(v___y_3469_);
lean_dec_ref(v___y_3467_);
lean_dec(v___y_3466_);
lean_dec(v___y_3465_);
return v_res_3476_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_addInequality(lean_object* v_p_3477_, lean_object* v_const_3478_, lean_object* v_coeffs_3479_, lean_object* v_prf_x3f_3480_){
_start:
{
lean_object* v_assumptions_3481_; lean_object* v_numVars_3482_; lean_object* v_constraints_3483_; lean_object* v_equalities_3484_; lean_object* v_eliminations_3485_; uint8_t v_possible_3486_; lean_object* v_proveFalse_x3f_3487_; lean_object* v_explanation_x3f_3488_; lean_object* v_prf_3489_; lean_object* v_i_3490_; lean_object* v___x_3491_; lean_object* v___x_3492_; lean_object* v_p_x27_3493_; lean_object* v___x_3494_; lean_object* v___x_3495_; lean_object* v___x_3496_; lean_object* v___x_3497_; lean_object* v___x_3498_; lean_object* v_f_3499_; lean_object* v_f_3500_; lean_object* v_f_3501_; lean_object* v___x_3502_; 
v_assumptions_3481_ = lean_ctor_get(v_p_3477_, 0);
v_numVars_3482_ = lean_ctor_get(v_p_3477_, 1);
v_constraints_3483_ = lean_ctor_get(v_p_3477_, 2);
v_equalities_3484_ = lean_ctor_get(v_p_3477_, 3);
v_eliminations_3485_ = lean_ctor_get(v_p_3477_, 4);
v_possible_3486_ = lean_ctor_get_uint8(v_p_3477_, sizeof(void*)*7);
v_proveFalse_x3f_3487_ = lean_ctor_get(v_p_3477_, 5);
v_explanation_x3f_3488_ = lean_ctor_get(v_p_3477_, 6);
v_prf_3489_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Omega_Problem_addInequality___lam__0___boxed), 11, 1);
lean_closure_set(v_prf_3489_, 0, v_prf_x3f_3480_);
v_i_3490_ = lean_array_get_size(v_assumptions_3481_);
lean_inc_n(v_coeffs_3479_, 2);
lean_inc(v_const_3478_);
v___x_3491_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Omega_Problem_addInequality__proof___boxed), 13, 3);
lean_closure_set(v___x_3491_, 0, v_const_3478_);
lean_closure_set(v___x_3491_, 1, v_coeffs_3479_);
lean_closure_set(v___x_3491_, 2, v_prf_3489_);
lean_inc_ref(v_assumptions_3481_);
v___x_3492_ = lean_array_push(v_assumptions_3481_, v___x_3491_);
lean_inc_ref(v_explanation_x3f_3488_);
lean_inc(v_proveFalse_x3f_3487_);
lean_inc(v_eliminations_3485_);
lean_inc_ref(v_equalities_3484_);
lean_inc_ref(v_constraints_3483_);
lean_inc(v_numVars_3482_);
v_p_x27_3493_ = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(v_p_x27_3493_, 0, v___x_3492_);
lean_ctor_set(v_p_x27_3493_, 1, v_numVars_3482_);
lean_ctor_set(v_p_x27_3493_, 2, v_constraints_3483_);
lean_ctor_set(v_p_x27_3493_, 3, v_equalities_3484_);
lean_ctor_set(v_p_x27_3493_, 4, v_eliminations_3485_);
lean_ctor_set(v_p_x27_3493_, 5, v_proveFalse_x3f_3487_);
lean_ctor_set(v_p_x27_3493_, 6, v_explanation_x3f_3488_);
lean_ctor_set_uint8(v_p_x27_3493_, sizeof(void*)*7, v_possible_3486_);
v___x_3494_ = lean_int_neg(v_const_3478_);
lean_dec(v_const_3478_);
v___x_3495_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3495_, 0, v___x_3494_);
v___x_3496_ = lean_box(0);
v___x_3497_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3497_, 0, v___x_3495_);
lean_ctor_set(v___x_3497_, 1, v___x_3496_);
lean_inc_ref(v___x_3497_);
v___x_3498_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3498_, 0, v___x_3497_);
lean_ctor_set(v___x_3498_, 1, v_coeffs_3479_);
lean_ctor_set(v___x_3498_, 2, v_i_3490_);
v_f_3499_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_f_3499_, 0, v_coeffs_3479_);
lean_ctor_set(v_f_3499_, 1, v___x_3497_);
lean_ctor_set(v_f_3499_, 2, v___x_3498_);
v_f_3500_ = l_Lean_Elab_Tactic_Omega_Problem_replayEliminations(v_p_3477_, v_f_3499_);
v_f_3501_ = l_Lean_Elab_Tactic_Omega_Fact_tidy(v_f_3500_);
v___x_3502_ = l_Lean_Elab_Tactic_Omega_Problem_addConstraint(v_p_x27_3493_, v_f_3501_);
return v___x_3502_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_addEquality(lean_object* v_p_3503_, lean_object* v_const_3504_, lean_object* v_coeffs_3505_, lean_object* v_prf_x3f_3506_){
_start:
{
lean_object* v_assumptions_3507_; lean_object* v_numVars_3508_; lean_object* v_constraints_3509_; lean_object* v_equalities_3510_; lean_object* v_eliminations_3511_; uint8_t v_possible_3512_; lean_object* v_proveFalse_x3f_3513_; lean_object* v_explanation_x3f_3514_; lean_object* v_prf_3515_; lean_object* v_i_3516_; lean_object* v___x_3517_; lean_object* v___x_3518_; lean_object* v_p_x27_3519_; lean_object* v___x_3520_; lean_object* v___x_3521_; lean_object* v___x_3522_; lean_object* v___x_3523_; lean_object* v_f_3524_; lean_object* v_f_3525_; lean_object* v_f_3526_; lean_object* v___x_3527_; 
v_assumptions_3507_ = lean_ctor_get(v_p_3503_, 0);
v_numVars_3508_ = lean_ctor_get(v_p_3503_, 1);
v_constraints_3509_ = lean_ctor_get(v_p_3503_, 2);
v_equalities_3510_ = lean_ctor_get(v_p_3503_, 3);
v_eliminations_3511_ = lean_ctor_get(v_p_3503_, 4);
v_possible_3512_ = lean_ctor_get_uint8(v_p_3503_, sizeof(void*)*7);
v_proveFalse_x3f_3513_ = lean_ctor_get(v_p_3503_, 5);
v_explanation_x3f_3514_ = lean_ctor_get(v_p_3503_, 6);
v_prf_3515_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Omega_Problem_addInequality___lam__0___boxed), 11, 1);
lean_closure_set(v_prf_3515_, 0, v_prf_x3f_3506_);
v_i_3516_ = lean_array_get_size(v_assumptions_3507_);
lean_inc_n(v_coeffs_3505_, 2);
lean_inc(v_const_3504_);
v___x_3517_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Omega_Problem_addEquality__proof___boxed), 13, 3);
lean_closure_set(v___x_3517_, 0, v_const_3504_);
lean_closure_set(v___x_3517_, 1, v_coeffs_3505_);
lean_closure_set(v___x_3517_, 2, v_prf_3515_);
lean_inc_ref(v_assumptions_3507_);
v___x_3518_ = lean_array_push(v_assumptions_3507_, v___x_3517_);
lean_inc_ref(v_explanation_x3f_3514_);
lean_inc(v_proveFalse_x3f_3513_);
lean_inc(v_eliminations_3511_);
lean_inc_ref(v_equalities_3510_);
lean_inc_ref(v_constraints_3509_);
lean_inc(v_numVars_3508_);
v_p_x27_3519_ = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(v_p_x27_3519_, 0, v___x_3518_);
lean_ctor_set(v_p_x27_3519_, 1, v_numVars_3508_);
lean_ctor_set(v_p_x27_3519_, 2, v_constraints_3509_);
lean_ctor_set(v_p_x27_3519_, 3, v_equalities_3510_);
lean_ctor_set(v_p_x27_3519_, 4, v_eliminations_3511_);
lean_ctor_set(v_p_x27_3519_, 5, v_proveFalse_x3f_3513_);
lean_ctor_set(v_p_x27_3519_, 6, v_explanation_x3f_3514_);
lean_ctor_set_uint8(v_p_x27_3519_, sizeof(void*)*7, v_possible_3512_);
v___x_3520_ = lean_int_neg(v_const_3504_);
lean_dec(v_const_3504_);
v___x_3521_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3521_, 0, v___x_3520_);
lean_inc_ref(v___x_3521_);
v___x_3522_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3522_, 0, v___x_3521_);
lean_ctor_set(v___x_3522_, 1, v___x_3521_);
lean_inc_ref(v___x_3522_);
v___x_3523_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3523_, 0, v___x_3522_);
lean_ctor_set(v___x_3523_, 1, v_coeffs_3505_);
lean_ctor_set(v___x_3523_, 2, v_i_3516_);
v_f_3524_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_f_3524_, 0, v_coeffs_3505_);
lean_ctor_set(v_f_3524_, 1, v___x_3522_);
lean_ctor_set(v_f_3524_, 2, v___x_3523_);
v_f_3525_ = l_Lean_Elab_Tactic_Omega_Problem_replayEliminations(v_p_3503_, v_f_3524_);
v_f_3526_ = l_Lean_Elab_Tactic_Omega_Fact_tidy(v_f_3525_);
v___x_3527_ = l_Lean_Elab_Tactic_Omega_Problem_addConstraint(v_p_x27_3519_, v_f_3526_);
return v___x_3527_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_Tactic_Omega_Problem_addInequalities_spec__0(lean_object* v_x_3528_, lean_object* v_x_3529_){
_start:
{
if (lean_obj_tag(v_x_3529_) == 0)
{
return v_x_3528_;
}
else
{
lean_object* v_head_3530_; lean_object* v_snd_3531_; lean_object* v_tail_3532_; lean_object* v_fst_3533_; lean_object* v_fst_3534_; lean_object* v_snd_3535_; lean_object* v___x_3536_; 
v_head_3530_ = lean_ctor_get(v_x_3529_, 0);
lean_inc(v_head_3530_);
v_snd_3531_ = lean_ctor_get(v_head_3530_, 1);
lean_inc(v_snd_3531_);
v_tail_3532_ = lean_ctor_get(v_x_3529_, 1);
lean_inc(v_tail_3532_);
lean_dec_ref_known(v_x_3529_, 2);
v_fst_3533_ = lean_ctor_get(v_head_3530_, 0);
lean_inc(v_fst_3533_);
lean_dec(v_head_3530_);
v_fst_3534_ = lean_ctor_get(v_snd_3531_, 0);
lean_inc(v_fst_3534_);
v_snd_3535_ = lean_ctor_get(v_snd_3531_, 1);
lean_inc(v_snd_3535_);
lean_dec(v_snd_3531_);
v___x_3536_ = l_Lean_Elab_Tactic_Omega_Problem_addInequality(v_x_3528_, v_fst_3533_, v_fst_3534_, v_snd_3535_);
v_x_3528_ = v___x_3536_;
v_x_3529_ = v_tail_3532_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_addInequalities(lean_object* v_p_3538_, lean_object* v_ineqs_3539_){
_start:
{
lean_object* v___x_3540_; 
v___x_3540_ = l_List_foldl___at___00Lean_Elab_Tactic_Omega_Problem_addInequalities_spec__0(v_p_3538_, v_ineqs_3539_);
return v___x_3540_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_Tactic_Omega_Problem_addEqualities_spec__0(lean_object* v_x_3541_, lean_object* v_x_3542_){
_start:
{
if (lean_obj_tag(v_x_3542_) == 0)
{
return v_x_3541_;
}
else
{
lean_object* v_head_3543_; lean_object* v_snd_3544_; lean_object* v_tail_3545_; lean_object* v_fst_3546_; lean_object* v_fst_3547_; lean_object* v_snd_3548_; lean_object* v___x_3549_; 
v_head_3543_ = lean_ctor_get(v_x_3542_, 0);
lean_inc(v_head_3543_);
v_snd_3544_ = lean_ctor_get(v_head_3543_, 1);
lean_inc(v_snd_3544_);
v_tail_3545_ = lean_ctor_get(v_x_3542_, 1);
lean_inc(v_tail_3545_);
lean_dec_ref_known(v_x_3542_, 2);
v_fst_3546_ = lean_ctor_get(v_head_3543_, 0);
lean_inc(v_fst_3546_);
lean_dec(v_head_3543_);
v_fst_3547_ = lean_ctor_get(v_snd_3544_, 0);
lean_inc(v_fst_3547_);
v_snd_3548_ = lean_ctor_get(v_snd_3544_, 1);
lean_inc(v_snd_3548_);
lean_dec(v_snd_3544_);
v___x_3549_ = l_Lean_Elab_Tactic_Omega_Problem_addEquality(v_x_3541_, v_fst_3546_, v_fst_3547_, v_snd_3548_);
v_x_3541_ = v___x_3549_;
v_x_3542_ = v_tail_3545_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_addEqualities(lean_object* v_p_3551_, lean_object* v_eqs_3552_){
_start:
{
lean_object* v___x_3553_; 
v___x_3553_ = l_List_foldl___at___00Lean_Elab_Tactic_Omega_Problem_addEqualities_spec__0(v_p_3551_, v_eqs_3552_);
return v___x_3553_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_instToStringFourierMotzkinData___lam__0(lean_object* v___x_3560_, lean_object* v_x_3561_){
_start:
{
lean_object* v_constraint_3562_; lean_object* v_coeffs_3563_; lean_object* v_lowerBound_3564_; lean_object* v_upperBound_3565_; lean_object* v___x_3566_; lean_object* v___x_3567_; lean_object* v___x_3568_; lean_object* v___y_3570_; lean_object* v___y_3571_; 
v_constraint_3562_ = lean_ctor_get(v_x_3561_, 1);
lean_inc_ref(v_constraint_3562_);
v_coeffs_3563_ = lean_ctor_get(v_x_3561_, 0);
lean_inc(v_coeffs_3563_);
lean_dec_ref(v_x_3561_);
v_lowerBound_3564_ = lean_ctor_get(v_constraint_3562_, 0);
lean_inc(v_lowerBound_3564_);
v_upperBound_3565_ = lean_ctor_get(v_constraint_3562_, 1);
lean_inc(v_upperBound_3565_);
lean_dec_ref(v_constraint_3562_);
v___x_3566_ = l_List_toString___redArg(v___x_3560_, v_coeffs_3563_);
v___x_3567_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__0));
v___x_3568_ = lean_string_append(v___x_3566_, v___x_3567_);
if (lean_obj_tag(v_lowerBound_3564_) == 0)
{
if (lean_obj_tag(v_upperBound_3565_) == 0)
{
lean_object* v___x_3576_; lean_object* v___x_3577_; 
v___x_3576_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__2));
v___x_3577_ = lean_string_append(v___x_3568_, v___x_3576_);
return v___x_3577_;
}
else
{
lean_object* v_val_3578_; lean_object* v___x_3579_; lean_object* v___y_3581_; lean_object* v_intZero_3586_; uint8_t v_isNeg_3587_; 
v_val_3578_ = lean_ctor_get(v_upperBound_3565_, 0);
lean_inc(v_val_3578_);
lean_dec_ref_known(v_upperBound_3565_, 1);
v___x_3579_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__3));
v_intZero_3586_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17);
v_isNeg_3587_ = lean_int_dec_lt(v_val_3578_, v_intZero_3586_);
if (v_isNeg_3587_ == 0)
{
lean_object* v_a_3588_; lean_object* v___x_3589_; 
v_a_3588_ = lean_nat_abs(v_val_3578_);
lean_dec(v_val_3578_);
v___x_3589_ = l_Nat_reprFast(v_a_3588_);
v___y_3581_ = v___x_3589_;
goto v___jp_3580_;
}
else
{
lean_object* v_abs_3590_; lean_object* v_one_3591_; lean_object* v_a_3592_; lean_object* v___x_3593_; lean_object* v___x_3594_; lean_object* v___x_3595_; lean_object* v___x_3596_; 
v_abs_3590_ = lean_nat_abs(v_val_3578_);
lean_dec(v_val_3578_);
v_one_3591_ = lean_unsigned_to_nat(1u);
v_a_3592_ = lean_nat_sub(v_abs_3590_, v_one_3591_);
lean_dec(v_abs_3590_);
v___x_3593_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__4));
v___x_3594_ = lean_nat_add(v_a_3592_, v_one_3591_);
lean_dec(v_a_3592_);
v___x_3595_ = l_Nat_reprFast(v___x_3594_);
v___x_3596_ = lean_string_append(v___x_3593_, v___x_3595_);
lean_dec_ref(v___x_3595_);
v___y_3581_ = v___x_3596_;
goto v___jp_3580_;
}
v___jp_3580_:
{
lean_object* v___x_3582_; lean_object* v___x_3583_; lean_object* v___x_3584_; lean_object* v___x_3585_; 
v___x_3582_ = lean_string_append(v___x_3579_, v___y_3581_);
lean_dec_ref(v___y_3581_);
v___x_3583_ = ((lean_object*)(l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0___closed__2));
v___x_3584_ = lean_string_append(v___x_3582_, v___x_3583_);
v___x_3585_ = lean_string_append(v___x_3568_, v___x_3584_);
lean_dec_ref(v___x_3584_);
return v___x_3585_;
}
}
}
else
{
if (lean_obj_tag(v_upperBound_3565_) == 0)
{
lean_object* v_val_3597_; lean_object* v___x_3598_; lean_object* v___y_3600_; lean_object* v_intZero_3605_; uint8_t v_isNeg_3606_; 
v_val_3597_ = lean_ctor_get(v_lowerBound_3564_, 0);
lean_inc(v_val_3597_);
lean_dec_ref_known(v_lowerBound_3564_, 1);
v___x_3598_ = ((lean_object*)(l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0___closed__1));
v_intZero_3605_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17);
v_isNeg_3606_ = lean_int_dec_lt(v_val_3597_, v_intZero_3605_);
if (v_isNeg_3606_ == 0)
{
lean_object* v_a_3607_; lean_object* v___x_3608_; 
v_a_3607_ = lean_nat_abs(v_val_3597_);
lean_dec(v_val_3597_);
v___x_3608_ = l_Nat_reprFast(v_a_3607_);
v___y_3600_ = v___x_3608_;
goto v___jp_3599_;
}
else
{
lean_object* v_abs_3609_; lean_object* v_one_3610_; lean_object* v_a_3611_; lean_object* v___x_3612_; lean_object* v___x_3613_; lean_object* v___x_3614_; lean_object* v___x_3615_; 
v_abs_3609_ = lean_nat_abs(v_val_3597_);
lean_dec(v_val_3597_);
v_one_3610_ = lean_unsigned_to_nat(1u);
v_a_3611_ = lean_nat_sub(v_abs_3609_, v_one_3610_);
lean_dec(v_abs_3609_);
v___x_3612_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__4));
v___x_3613_ = lean_nat_add(v_a_3611_, v_one_3610_);
lean_dec(v_a_3611_);
v___x_3614_ = l_Nat_reprFast(v___x_3613_);
v___x_3615_ = lean_string_append(v___x_3612_, v___x_3614_);
lean_dec_ref(v___x_3614_);
v___y_3600_ = v___x_3615_;
goto v___jp_3599_;
}
v___jp_3599_:
{
lean_object* v___x_3601_; lean_object* v___x_3602_; lean_object* v___x_3603_; lean_object* v___x_3604_; 
v___x_3601_ = lean_string_append(v___x_3598_, v___y_3600_);
lean_dec_ref(v___y_3600_);
v___x_3602_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__5));
v___x_3603_ = lean_string_append(v___x_3601_, v___x_3602_);
v___x_3604_ = lean_string_append(v___x_3568_, v___x_3603_);
lean_dec_ref(v___x_3603_);
return v___x_3604_;
}
}
else
{
lean_object* v_val_3616_; lean_object* v_val_3617_; uint8_t v___x_3618_; 
v_val_3616_ = lean_ctor_get(v_lowerBound_3564_, 0);
lean_inc(v_val_3616_);
lean_dec_ref_known(v_lowerBound_3564_, 1);
v_val_3617_ = lean_ctor_get(v_upperBound_3565_, 0);
lean_inc(v_val_3617_);
lean_dec_ref_known(v_upperBound_3565_, 1);
v___x_3618_ = lean_int_dec_lt(v_val_3617_, v_val_3616_);
if (v___x_3618_ == 0)
{
uint8_t v___x_3619_; 
v___x_3619_ = lean_int_dec_eq(v_val_3616_, v_val_3617_);
if (v___x_3619_ == 0)
{
lean_object* v___x_3620_; lean_object* v___y_3622_; lean_object* v_intZero_3637_; uint8_t v_isNeg_3638_; 
v___x_3620_ = ((lean_object*)(l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0___closed__1));
v_intZero_3637_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17);
v_isNeg_3638_ = lean_int_dec_lt(v_val_3616_, v_intZero_3637_);
if (v_isNeg_3638_ == 0)
{
lean_object* v_a_3639_; lean_object* v___x_3640_; 
v_a_3639_ = lean_nat_abs(v_val_3616_);
lean_dec(v_val_3616_);
v___x_3640_ = l_Nat_reprFast(v_a_3639_);
v___y_3622_ = v___x_3640_;
goto v___jp_3621_;
}
else
{
lean_object* v_abs_3641_; lean_object* v_one_3642_; lean_object* v_a_3643_; lean_object* v___x_3644_; lean_object* v___x_3645_; lean_object* v___x_3646_; lean_object* v___x_3647_; 
v_abs_3641_ = lean_nat_abs(v_val_3616_);
lean_dec(v_val_3616_);
v_one_3642_ = lean_unsigned_to_nat(1u);
v_a_3643_ = lean_nat_sub(v_abs_3641_, v_one_3642_);
lean_dec(v_abs_3641_);
v___x_3644_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__4));
v___x_3645_ = lean_nat_add(v_a_3643_, v_one_3642_);
lean_dec(v_a_3643_);
v___x_3646_ = l_Nat_reprFast(v___x_3645_);
v___x_3647_ = lean_string_append(v___x_3644_, v___x_3646_);
lean_dec_ref(v___x_3646_);
v___y_3622_ = v___x_3647_;
goto v___jp_3621_;
}
v___jp_3621_:
{
lean_object* v___x_3623_; lean_object* v___x_3624_; lean_object* v___x_3625_; lean_object* v_intZero_3626_; uint8_t v_isNeg_3627_; 
v___x_3623_ = lean_string_append(v___x_3620_, v___y_3622_);
lean_dec_ref(v___y_3622_);
v___x_3624_ = ((lean_object*)(l_List_foldl___at___00List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0_spec__0___closed__0));
v___x_3625_ = lean_string_append(v___x_3623_, v___x_3624_);
v_intZero_3626_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17);
v_isNeg_3627_ = lean_int_dec_lt(v_val_3617_, v_intZero_3626_);
if (v_isNeg_3627_ == 0)
{
lean_object* v_a_3628_; lean_object* v___x_3629_; 
v_a_3628_ = lean_nat_abs(v_val_3617_);
lean_dec(v_val_3617_);
v___x_3629_ = l_Nat_reprFast(v_a_3628_);
v___y_3570_ = v___x_3625_;
v___y_3571_ = v___x_3629_;
goto v___jp_3569_;
}
else
{
lean_object* v_abs_3630_; lean_object* v_one_3631_; lean_object* v_a_3632_; lean_object* v___x_3633_; lean_object* v___x_3634_; lean_object* v___x_3635_; lean_object* v___x_3636_; 
v_abs_3630_ = lean_nat_abs(v_val_3617_);
lean_dec(v_val_3617_);
v_one_3631_ = lean_unsigned_to_nat(1u);
v_a_3632_ = lean_nat_sub(v_abs_3630_, v_one_3631_);
lean_dec(v_abs_3630_);
v___x_3633_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__4));
v___x_3634_ = lean_nat_add(v_a_3632_, v_one_3631_);
lean_dec(v_a_3632_);
v___x_3635_ = l_Nat_reprFast(v___x_3634_);
v___x_3636_ = lean_string_append(v___x_3633_, v___x_3635_);
lean_dec_ref(v___x_3635_);
v___y_3570_ = v___x_3625_;
v___y_3571_ = v___x_3636_;
goto v___jp_3569_;
}
}
}
else
{
lean_object* v___x_3648_; lean_object* v___y_3650_; lean_object* v_intZero_3655_; uint8_t v_isNeg_3656_; 
lean_dec(v_val_3617_);
v___x_3648_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__6));
v_intZero_3655_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17);
v_isNeg_3656_ = lean_int_dec_lt(v_val_3616_, v_intZero_3655_);
if (v_isNeg_3656_ == 0)
{
lean_object* v_a_3657_; lean_object* v___x_3658_; 
v_a_3657_ = lean_nat_abs(v_val_3616_);
lean_dec(v_val_3616_);
v___x_3658_ = l_Nat_reprFast(v_a_3657_);
v___y_3650_ = v___x_3658_;
goto v___jp_3649_;
}
else
{
lean_object* v_abs_3659_; lean_object* v_one_3660_; lean_object* v_a_3661_; lean_object* v___x_3662_; lean_object* v___x_3663_; lean_object* v___x_3664_; lean_object* v___x_3665_; 
v_abs_3659_ = lean_nat_abs(v_val_3616_);
lean_dec(v_val_3616_);
v_one_3660_ = lean_unsigned_to_nat(1u);
v_a_3661_ = lean_nat_sub(v_abs_3659_, v_one_3660_);
lean_dec(v_abs_3659_);
v___x_3662_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__4));
v___x_3663_ = lean_nat_add(v_a_3661_, v_one_3660_);
lean_dec(v_a_3661_);
v___x_3664_ = l_Nat_reprFast(v___x_3663_);
v___x_3665_ = lean_string_append(v___x_3662_, v___x_3664_);
lean_dec_ref(v___x_3664_);
v___y_3650_ = v___x_3665_;
goto v___jp_3649_;
}
v___jp_3649_:
{
lean_object* v___x_3651_; lean_object* v___x_3652_; lean_object* v___x_3653_; lean_object* v___x_3654_; 
v___x_3651_ = lean_string_append(v___x_3648_, v___y_3650_);
lean_dec_ref(v___y_3650_);
v___x_3652_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__7));
v___x_3653_ = lean_string_append(v___x_3651_, v___x_3652_);
v___x_3654_ = lean_string_append(v___x_3568_, v___x_3653_);
lean_dec_ref(v___x_3653_);
return v___x_3654_;
}
}
}
else
{
lean_object* v___x_3666_; lean_object* v___x_3667_; 
lean_dec(v_val_3617_);
lean_dec(v_val_3616_);
v___x_3666_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__8));
v___x_3667_ = lean_string_append(v___x_3568_, v___x_3666_);
return v___x_3667_;
}
}
}
v___jp_3569_:
{
lean_object* v___x_3572_; lean_object* v___x_3573_; lean_object* v___x_3574_; lean_object* v___x_3575_; 
v___x_3572_ = lean_string_append(v___y_3570_, v___y_3571_);
lean_dec_ref(v___y_3571_);
v___x_3573_ = ((lean_object*)(l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0___closed__2));
v___x_3574_ = lean_string_append(v___x_3572_, v___x_3573_);
v___x_3575_ = lean_string_append(v___x_3568_, v___x_3574_);
lean_dec_ref(v___x_3574_);
return v___x_3575_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_instToStringFourierMotzkinData___lam__1(lean_object* v___x_3668_, lean_object* v_x_3669_){
_start:
{
lean_object* v_fst_3670_; lean_object* v_constraint_3671_; lean_object* v_coeffs_3672_; lean_object* v_lowerBound_3673_; lean_object* v_upperBound_3674_; lean_object* v___x_3675_; lean_object* v___x_3676_; lean_object* v___x_3677_; lean_object* v___y_3679_; lean_object* v___y_3680_; 
v_fst_3670_ = lean_ctor_get(v_x_3669_, 0);
lean_inc(v_fst_3670_);
lean_dec_ref(v_x_3669_);
v_constraint_3671_ = lean_ctor_get(v_fst_3670_, 1);
lean_inc_ref(v_constraint_3671_);
v_coeffs_3672_ = lean_ctor_get(v_fst_3670_, 0);
lean_inc(v_coeffs_3672_);
lean_dec(v_fst_3670_);
v_lowerBound_3673_ = lean_ctor_get(v_constraint_3671_, 0);
lean_inc(v_lowerBound_3673_);
v_upperBound_3674_ = lean_ctor_get(v_constraint_3671_, 1);
lean_inc(v_upperBound_3674_);
lean_dec_ref(v_constraint_3671_);
v___x_3675_ = l_List_toString___redArg(v___x_3668_, v_coeffs_3672_);
v___x_3676_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__0));
v___x_3677_ = lean_string_append(v___x_3675_, v___x_3676_);
if (lean_obj_tag(v_lowerBound_3673_) == 0)
{
if (lean_obj_tag(v_upperBound_3674_) == 0)
{
lean_object* v___x_3685_; lean_object* v___x_3686_; 
v___x_3685_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__2));
v___x_3686_ = lean_string_append(v___x_3677_, v___x_3685_);
return v___x_3686_;
}
else
{
lean_object* v_val_3687_; lean_object* v___x_3688_; lean_object* v___y_3690_; lean_object* v_intZero_3695_; uint8_t v_isNeg_3696_; 
v_val_3687_ = lean_ctor_get(v_upperBound_3674_, 0);
lean_inc(v_val_3687_);
lean_dec_ref_known(v_upperBound_3674_, 1);
v___x_3688_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__3));
v_intZero_3695_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17);
v_isNeg_3696_ = lean_int_dec_lt(v_val_3687_, v_intZero_3695_);
if (v_isNeg_3696_ == 0)
{
lean_object* v_a_3697_; lean_object* v___x_3698_; 
v_a_3697_ = lean_nat_abs(v_val_3687_);
lean_dec(v_val_3687_);
v___x_3698_ = l_Nat_reprFast(v_a_3697_);
v___y_3690_ = v___x_3698_;
goto v___jp_3689_;
}
else
{
lean_object* v_abs_3699_; lean_object* v_one_3700_; lean_object* v_a_3701_; lean_object* v___x_3702_; lean_object* v___x_3703_; lean_object* v___x_3704_; lean_object* v___x_3705_; 
v_abs_3699_ = lean_nat_abs(v_val_3687_);
lean_dec(v_val_3687_);
v_one_3700_ = lean_unsigned_to_nat(1u);
v_a_3701_ = lean_nat_sub(v_abs_3699_, v_one_3700_);
lean_dec(v_abs_3699_);
v___x_3702_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__4));
v___x_3703_ = lean_nat_add(v_a_3701_, v_one_3700_);
lean_dec(v_a_3701_);
v___x_3704_ = l_Nat_reprFast(v___x_3703_);
v___x_3705_ = lean_string_append(v___x_3702_, v___x_3704_);
lean_dec_ref(v___x_3704_);
v___y_3690_ = v___x_3705_;
goto v___jp_3689_;
}
v___jp_3689_:
{
lean_object* v___x_3691_; lean_object* v___x_3692_; lean_object* v___x_3693_; lean_object* v___x_3694_; 
v___x_3691_ = lean_string_append(v___x_3688_, v___y_3690_);
lean_dec_ref(v___y_3690_);
v___x_3692_ = ((lean_object*)(l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0___closed__2));
v___x_3693_ = lean_string_append(v___x_3691_, v___x_3692_);
v___x_3694_ = lean_string_append(v___x_3677_, v___x_3693_);
lean_dec_ref(v___x_3693_);
return v___x_3694_;
}
}
}
else
{
if (lean_obj_tag(v_upperBound_3674_) == 0)
{
lean_object* v_val_3706_; lean_object* v___x_3707_; lean_object* v___y_3709_; lean_object* v_intZero_3714_; uint8_t v_isNeg_3715_; 
v_val_3706_ = lean_ctor_get(v_lowerBound_3673_, 0);
lean_inc(v_val_3706_);
lean_dec_ref_known(v_lowerBound_3673_, 1);
v___x_3707_ = ((lean_object*)(l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0___closed__1));
v_intZero_3714_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17);
v_isNeg_3715_ = lean_int_dec_lt(v_val_3706_, v_intZero_3714_);
if (v_isNeg_3715_ == 0)
{
lean_object* v_a_3716_; lean_object* v___x_3717_; 
v_a_3716_ = lean_nat_abs(v_val_3706_);
lean_dec(v_val_3706_);
v___x_3717_ = l_Nat_reprFast(v_a_3716_);
v___y_3709_ = v___x_3717_;
goto v___jp_3708_;
}
else
{
lean_object* v_abs_3718_; lean_object* v_one_3719_; lean_object* v_a_3720_; lean_object* v___x_3721_; lean_object* v___x_3722_; lean_object* v___x_3723_; lean_object* v___x_3724_; 
v_abs_3718_ = lean_nat_abs(v_val_3706_);
lean_dec(v_val_3706_);
v_one_3719_ = lean_unsigned_to_nat(1u);
v_a_3720_ = lean_nat_sub(v_abs_3718_, v_one_3719_);
lean_dec(v_abs_3718_);
v___x_3721_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__4));
v___x_3722_ = lean_nat_add(v_a_3720_, v_one_3719_);
lean_dec(v_a_3720_);
v___x_3723_ = l_Nat_reprFast(v___x_3722_);
v___x_3724_ = lean_string_append(v___x_3721_, v___x_3723_);
lean_dec_ref(v___x_3723_);
v___y_3709_ = v___x_3724_;
goto v___jp_3708_;
}
v___jp_3708_:
{
lean_object* v___x_3710_; lean_object* v___x_3711_; lean_object* v___x_3712_; lean_object* v___x_3713_; 
v___x_3710_ = lean_string_append(v___x_3707_, v___y_3709_);
lean_dec_ref(v___y_3709_);
v___x_3711_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__5));
v___x_3712_ = lean_string_append(v___x_3710_, v___x_3711_);
v___x_3713_ = lean_string_append(v___x_3677_, v___x_3712_);
lean_dec_ref(v___x_3712_);
return v___x_3713_;
}
}
else
{
lean_object* v_val_3725_; lean_object* v_val_3726_; uint8_t v___x_3727_; 
v_val_3725_ = lean_ctor_get(v_lowerBound_3673_, 0);
lean_inc(v_val_3725_);
lean_dec_ref_known(v_lowerBound_3673_, 1);
v_val_3726_ = lean_ctor_get(v_upperBound_3674_, 0);
lean_inc(v_val_3726_);
lean_dec_ref_known(v_upperBound_3674_, 1);
v___x_3727_ = lean_int_dec_lt(v_val_3726_, v_val_3725_);
if (v___x_3727_ == 0)
{
uint8_t v___x_3728_; 
v___x_3728_ = lean_int_dec_eq(v_val_3725_, v_val_3726_);
if (v___x_3728_ == 0)
{
lean_object* v___x_3729_; lean_object* v___y_3731_; lean_object* v_intZero_3746_; uint8_t v_isNeg_3747_; 
v___x_3729_ = ((lean_object*)(l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0___closed__1));
v_intZero_3746_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17);
v_isNeg_3747_ = lean_int_dec_lt(v_val_3725_, v_intZero_3746_);
if (v_isNeg_3747_ == 0)
{
lean_object* v_a_3748_; lean_object* v___x_3749_; 
v_a_3748_ = lean_nat_abs(v_val_3725_);
lean_dec(v_val_3725_);
v___x_3749_ = l_Nat_reprFast(v_a_3748_);
v___y_3731_ = v___x_3749_;
goto v___jp_3730_;
}
else
{
lean_object* v_abs_3750_; lean_object* v_one_3751_; lean_object* v_a_3752_; lean_object* v___x_3753_; lean_object* v___x_3754_; lean_object* v___x_3755_; lean_object* v___x_3756_; 
v_abs_3750_ = lean_nat_abs(v_val_3725_);
lean_dec(v_val_3725_);
v_one_3751_ = lean_unsigned_to_nat(1u);
v_a_3752_ = lean_nat_sub(v_abs_3750_, v_one_3751_);
lean_dec(v_abs_3750_);
v___x_3753_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__4));
v___x_3754_ = lean_nat_add(v_a_3752_, v_one_3751_);
lean_dec(v_a_3752_);
v___x_3755_ = l_Nat_reprFast(v___x_3754_);
v___x_3756_ = lean_string_append(v___x_3753_, v___x_3755_);
lean_dec_ref(v___x_3755_);
v___y_3731_ = v___x_3756_;
goto v___jp_3730_;
}
v___jp_3730_:
{
lean_object* v___x_3732_; lean_object* v___x_3733_; lean_object* v___x_3734_; lean_object* v_intZero_3735_; uint8_t v_isNeg_3736_; 
v___x_3732_ = lean_string_append(v___x_3729_, v___y_3731_);
lean_dec_ref(v___y_3731_);
v___x_3733_ = ((lean_object*)(l_List_foldl___at___00List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0_spec__0___closed__0));
v___x_3734_ = lean_string_append(v___x_3732_, v___x_3733_);
v_intZero_3735_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17);
v_isNeg_3736_ = lean_int_dec_lt(v_val_3726_, v_intZero_3735_);
if (v_isNeg_3736_ == 0)
{
lean_object* v_a_3737_; lean_object* v___x_3738_; 
v_a_3737_ = lean_nat_abs(v_val_3726_);
lean_dec(v_val_3726_);
v___x_3738_ = l_Nat_reprFast(v_a_3737_);
v___y_3679_ = v___x_3734_;
v___y_3680_ = v___x_3738_;
goto v___jp_3678_;
}
else
{
lean_object* v_abs_3739_; lean_object* v_one_3740_; lean_object* v_a_3741_; lean_object* v___x_3742_; lean_object* v___x_3743_; lean_object* v___x_3744_; lean_object* v___x_3745_; 
v_abs_3739_ = lean_nat_abs(v_val_3726_);
lean_dec(v_val_3726_);
v_one_3740_ = lean_unsigned_to_nat(1u);
v_a_3741_ = lean_nat_sub(v_abs_3739_, v_one_3740_);
lean_dec(v_abs_3739_);
v___x_3742_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__4));
v___x_3743_ = lean_nat_add(v_a_3741_, v_one_3740_);
lean_dec(v_a_3741_);
v___x_3744_ = l_Nat_reprFast(v___x_3743_);
v___x_3745_ = lean_string_append(v___x_3742_, v___x_3744_);
lean_dec_ref(v___x_3744_);
v___y_3679_ = v___x_3734_;
v___y_3680_ = v___x_3745_;
goto v___jp_3678_;
}
}
}
else
{
lean_object* v___x_3757_; lean_object* v___y_3759_; lean_object* v_intZero_3764_; uint8_t v_isNeg_3765_; 
lean_dec(v_val_3726_);
v___x_3757_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__6));
v_intZero_3764_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17);
v_isNeg_3765_ = lean_int_dec_lt(v_val_3725_, v_intZero_3764_);
if (v_isNeg_3765_ == 0)
{
lean_object* v_a_3766_; lean_object* v___x_3767_; 
v_a_3766_ = lean_nat_abs(v_val_3725_);
lean_dec(v_val_3725_);
v___x_3767_ = l_Nat_reprFast(v_a_3766_);
v___y_3759_ = v___x_3767_;
goto v___jp_3758_;
}
else
{
lean_object* v_abs_3768_; lean_object* v_one_3769_; lean_object* v_a_3770_; lean_object* v___x_3771_; lean_object* v___x_3772_; lean_object* v___x_3773_; lean_object* v___x_3774_; 
v_abs_3768_ = lean_nat_abs(v_val_3725_);
lean_dec(v_val_3725_);
v_one_3769_ = lean_unsigned_to_nat(1u);
v_a_3770_ = lean_nat_sub(v_abs_3768_, v_one_3769_);
lean_dec(v_abs_3768_);
v___x_3771_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__4));
v___x_3772_ = lean_nat_add(v_a_3770_, v_one_3769_);
lean_dec(v_a_3770_);
v___x_3773_ = l_Nat_reprFast(v___x_3772_);
v___x_3774_ = lean_string_append(v___x_3771_, v___x_3773_);
lean_dec_ref(v___x_3773_);
v___y_3759_ = v___x_3774_;
goto v___jp_3758_;
}
v___jp_3758_:
{
lean_object* v___x_3760_; lean_object* v___x_3761_; lean_object* v___x_3762_; lean_object* v___x_3763_; 
v___x_3760_ = lean_string_append(v___x_3757_, v___y_3759_);
lean_dec_ref(v___y_3759_);
v___x_3761_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__7));
v___x_3762_ = lean_string_append(v___x_3760_, v___x_3761_);
v___x_3763_ = lean_string_append(v___x_3677_, v___x_3762_);
lean_dec_ref(v___x_3762_);
return v___x_3763_;
}
}
}
else
{
lean_object* v___x_3775_; lean_object* v___x_3776_; 
lean_dec(v_val_3726_);
lean_dec(v_val_3725_);
v___x_3775_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__8));
v___x_3776_ = lean_string_append(v___x_3677_, v___x_3775_);
return v___x_3776_;
}
}
}
v___jp_3678_:
{
lean_object* v___x_3681_; lean_object* v___x_3682_; lean_object* v___x_3683_; lean_object* v___x_3684_; 
v___x_3681_ = lean_string_append(v___y_3679_, v___y_3680_);
lean_dec_ref(v___y_3680_);
v___x_3682_ = ((lean_object*)(l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0___closed__2));
v___x_3683_ = lean_string_append(v___x_3681_, v___x_3682_);
v___x_3684_ = lean_string_append(v___x_3677_, v___x_3683_);
lean_dec_ref(v___x_3683_);
return v___x_3684_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_instToStringFourierMotzkinData___lam__2(lean_object* v___f_3781_, lean_object* v___f_3782_, lean_object* v___f_3783_, lean_object* v_d_3784_){
_start:
{
lean_object* v_var_3785_; lean_object* v_irrelevant_3786_; lean_object* v_lowerBounds_3787_; lean_object* v_upperBounds_3788_; lean_object* v___x_3789_; lean_object* v_irrelevant_3790_; lean_object* v_lowerBounds_3791_; lean_object* v_upperBounds_3792_; lean_object* v___x_3793_; lean_object* v___x_3794_; lean_object* v___x_3795_; lean_object* v___x_3796_; lean_object* v___x_3797_; lean_object* v___x_3798_; lean_object* v___x_3799_; lean_object* v___x_3800_; lean_object* v___x_3801_; lean_object* v___x_3802_; lean_object* v___x_3803_; lean_object* v___x_3804_; lean_object* v___x_3805_; lean_object* v___x_3806_; lean_object* v___x_3807_; lean_object* v___x_3808_; lean_object* v___x_3809_; lean_object* v___x_3810_; lean_object* v___x_3811_; 
v_var_3785_ = lean_ctor_get(v_d_3784_, 0);
lean_inc(v_var_3785_);
v_irrelevant_3786_ = lean_ctor_get(v_d_3784_, 1);
lean_inc(v_irrelevant_3786_);
v_lowerBounds_3787_ = lean_ctor_get(v_d_3784_, 2);
lean_inc(v_lowerBounds_3787_);
v_upperBounds_3788_ = lean_ctor_get(v_d_3784_, 3);
lean_inc(v_upperBounds_3788_);
lean_dec_ref(v_d_3784_);
v___x_3789_ = lean_box(0);
v_irrelevant_3790_ = l_List_mapTR_loop___redArg(v___f_3781_, v_irrelevant_3786_, v___x_3789_);
lean_inc_ref(v___f_3782_);
v_lowerBounds_3791_ = l_List_mapTR_loop___redArg(v___f_3782_, v_lowerBounds_3787_, v___x_3789_);
v_upperBounds_3792_ = l_List_mapTR_loop___redArg(v___f_3782_, v_upperBounds_3788_, v___x_3789_);
v___x_3793_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Problem_instToStringFourierMotzkinData___lam__2___closed__0));
v___x_3794_ = l_Nat_reprFast(v_var_3785_);
v___x_3795_ = lean_string_append(v___x_3793_, v___x_3794_);
lean_dec_ref(v___x_3794_);
v___x_3796_ = ((lean_object*)(l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__0));
v___x_3797_ = lean_string_append(v___x_3795_, v___x_3796_);
v___x_3798_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Problem_instToStringFourierMotzkinData___lam__2___closed__1));
lean_inc_ref_n(v___f_3783_, 2);
v___x_3799_ = l_List_toString___redArg(v___f_3783_, v_irrelevant_3790_);
v___x_3800_ = lean_string_append(v___x_3798_, v___x_3799_);
lean_dec_ref(v___x_3799_);
v___x_3801_ = lean_string_append(v___x_3800_, v___x_3796_);
v___x_3802_ = lean_string_append(v___x_3797_, v___x_3801_);
lean_dec_ref(v___x_3801_);
v___x_3803_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Problem_instToStringFourierMotzkinData___lam__2___closed__2));
v___x_3804_ = l_List_toString___redArg(v___f_3783_, v_lowerBounds_3791_);
v___x_3805_ = lean_string_append(v___x_3803_, v___x_3804_);
lean_dec_ref(v___x_3804_);
v___x_3806_ = lean_string_append(v___x_3805_, v___x_3796_);
v___x_3807_ = lean_string_append(v___x_3802_, v___x_3806_);
lean_dec_ref(v___x_3806_);
v___x_3808_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Problem_instToStringFourierMotzkinData___lam__2___closed__3));
v___x_3809_ = l_List_toString___redArg(v___f_3783_, v_upperBounds_3792_);
v___x_3810_ = lean_string_append(v___x_3808_, v___x_3809_);
lean_dec_ref(v___x_3809_);
v___x_3811_ = lean_string_append(v___x_3807_, v___x_3810_);
lean_dec_ref(v___x_3810_);
return v___x_3811_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_Omega_Problem_FourierMotzkinData_isEmpty(lean_object* v_d_3822_){
_start:
{
lean_object* v_lowerBounds_3823_; lean_object* v_upperBounds_3824_; uint8_t v___x_3825_; 
v_lowerBounds_3823_ = lean_ctor_get(v_d_3822_, 2);
v_upperBounds_3824_ = lean_ctor_get(v_d_3822_, 3);
v___x_3825_ = l_List_isEmpty___redArg(v_lowerBounds_3823_);
if (v___x_3825_ == 0)
{
return v___x_3825_;
}
else
{
uint8_t v___x_3826_; 
v___x_3826_ = l_List_isEmpty___redArg(v_upperBounds_3824_);
return v___x_3826_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_FourierMotzkinData_isEmpty___boxed(lean_object* v_d_3827_){
_start:
{
uint8_t v_res_3828_; lean_object* v_r_3829_; 
v_res_3828_ = l_Lean_Elab_Tactic_Omega_Problem_FourierMotzkinData_isEmpty(v_d_3827_);
lean_dec_ref(v_d_3827_);
v_r_3829_ = lean_box(v_res_3828_);
return v_r_3829_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_FourierMotzkinData_size(lean_object* v_d_3830_){
_start:
{
lean_object* v_lowerBounds_3831_; lean_object* v_upperBounds_3832_; lean_object* v___x_3833_; lean_object* v___x_3834_; lean_object* v___x_3835_; 
v_lowerBounds_3831_ = lean_ctor_get(v_d_3830_, 2);
v_upperBounds_3832_ = lean_ctor_get(v_d_3830_, 3);
v___x_3833_ = l_List_lengthTR___redArg(v_lowerBounds_3831_);
v___x_3834_ = l_List_lengthTR___redArg(v_upperBounds_3832_);
v___x_3835_ = lean_nat_mul(v___x_3833_, v___x_3834_);
lean_dec(v___x_3834_);
lean_dec(v___x_3833_);
return v___x_3835_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_FourierMotzkinData_size___boxed(lean_object* v_d_3836_){
_start:
{
lean_object* v_res_3837_; 
v_res_3837_ = l_Lean_Elab_Tactic_Omega_Problem_FourierMotzkinData_size(v_d_3836_);
lean_dec_ref(v_d_3836_);
return v_res_3837_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_Omega_Problem_FourierMotzkinData_exact(lean_object* v_d_3838_){
_start:
{
uint8_t v_lowerExact_3839_; 
v_lowerExact_3839_ = lean_ctor_get_uint8(v_d_3838_, sizeof(void*)*4);
if (v_lowerExact_3839_ == 0)
{
uint8_t v_upperExact_3840_; 
v_upperExact_3840_ = lean_ctor_get_uint8(v_d_3838_, sizeof(void*)*4 + 1);
return v_upperExact_3840_;
}
else
{
return v_lowerExact_3839_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_FourierMotzkinData_exact___boxed(lean_object* v_d_3841_){
_start:
{
uint8_t v_res_3842_; lean_object* v_r_3843_; 
v_res_3842_ = l_Lean_Elab_Tactic_Omega_Problem_FourierMotzkinData_exact(v_d_3841_);
lean_dec_ref(v_d_3841_);
v_r_3843_ = lean_box(v_res_3842_);
return v_r_3843_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinData_spec__2(lean_object* v_x_3844_, lean_object* v_x_3845_){
_start:
{
if (lean_obj_tag(v_x_3845_) == 0)
{
return v_x_3844_;
}
else
{
lean_object* v_head_3846_; lean_object* v_tail_3847_; lean_object* v___x_3848_; uint8_t v___x_3849_; lean_object* v___x_3850_; lean_object* v___x_3851_; 
v_head_3846_ = lean_ctor_get(v_x_3845_, 0);
v_tail_3847_ = lean_ctor_get(v_x_3845_, 1);
v___x_3848_ = lean_box(0);
v___x_3849_ = 1;
lean_inc(v_head_3846_);
v___x_3850_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v___x_3850_, 0, v_head_3846_);
lean_ctor_set(v___x_3850_, 1, v___x_3848_);
lean_ctor_set(v___x_3850_, 2, v___x_3848_);
lean_ctor_set(v___x_3850_, 3, v___x_3848_);
lean_ctor_set_uint8(v___x_3850_, sizeof(void*)*4, v___x_3849_);
lean_ctor_set_uint8(v___x_3850_, sizeof(void*)*4 + 1, v___x_3849_);
v___x_3851_ = lean_array_push(v_x_3844_, v___x_3850_);
v_x_3844_ = v___x_3851_;
v_x_3845_ = v_tail_3847_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinData_spec__2___boxed(lean_object* v_x_3853_, lean_object* v_x_3854_){
_start:
{
lean_object* v_res_3855_; 
v_res_3855_ = l_List_foldl___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinData_spec__2(v_x_3853_, v_x_3854_);
lean_dec(v_x_3854_);
return v_res_3855_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinData_spec__0___redArg___lam__0(lean_object* v___x_3856_, lean_object* v_b_3857_, lean_object* v___x_3858_, uint8_t v___x_3859_, lean_object* v_____r_3860_, lean_object* v_d_x27_3861_){
_start:
{
lean_object* v_upperBound_3862_; lean_object* v___x_3864_; uint8_t v_isShared_3865_; uint8_t v_isSharedCheck_3889_; 
v_upperBound_3862_ = lean_ctor_get(v___x_3856_, 1);
v_isSharedCheck_3889_ = !lean_is_exclusive(v___x_3856_);
if (v_isSharedCheck_3889_ == 0)
{
lean_object* v_unused_3890_; 
v_unused_3890_ = lean_ctor_get(v___x_3856_, 0);
lean_dec(v_unused_3890_);
v___x_3864_ = v___x_3856_;
v_isShared_3865_ = v_isSharedCheck_3889_;
goto v_resetjp_3863_;
}
else
{
lean_inc(v_upperBound_3862_);
lean_dec(v___x_3856_);
v___x_3864_ = lean_box(0);
v_isShared_3865_ = v_isSharedCheck_3889_;
goto v_resetjp_3863_;
}
v_resetjp_3863_:
{
if (lean_obj_tag(v_upperBound_3862_) == 0)
{
lean_del_object(v___x_3864_);
lean_dec(v___x_3858_);
lean_dec_ref(v_b_3857_);
return v_d_x27_3861_;
}
else
{
lean_object* v_var_3866_; lean_object* v_irrelevant_3867_; lean_object* v_lowerBounds_3868_; lean_object* v_upperBounds_3869_; uint8_t v_lowerExact_3870_; uint8_t v_upperExact_3871_; lean_object* v___x_3873_; uint8_t v_isShared_3874_; uint8_t v_isSharedCheck_3888_; 
lean_dec_ref_known(v_upperBound_3862_, 1);
v_var_3866_ = lean_ctor_get(v_d_x27_3861_, 0);
v_irrelevant_3867_ = lean_ctor_get(v_d_x27_3861_, 1);
v_lowerBounds_3868_ = lean_ctor_get(v_d_x27_3861_, 2);
v_upperBounds_3869_ = lean_ctor_get(v_d_x27_3861_, 3);
v_lowerExact_3870_ = lean_ctor_get_uint8(v_d_x27_3861_, sizeof(void*)*4);
v_upperExact_3871_ = lean_ctor_get_uint8(v_d_x27_3861_, sizeof(void*)*4 + 1);
v_isSharedCheck_3888_ = !lean_is_exclusive(v_d_x27_3861_);
if (v_isSharedCheck_3888_ == 0)
{
v___x_3873_ = v_d_x27_3861_;
v_isShared_3874_ = v_isSharedCheck_3888_;
goto v_resetjp_3872_;
}
else
{
lean_inc(v_upperBounds_3869_);
lean_inc(v_lowerBounds_3868_);
lean_inc(v_irrelevant_3867_);
lean_inc(v_var_3866_);
lean_dec(v_d_x27_3861_);
v___x_3873_ = lean_box(0);
v_isShared_3874_ = v_isSharedCheck_3888_;
goto v_resetjp_3872_;
}
v_resetjp_3872_:
{
lean_object* v___x_3876_; 
lean_inc(v___x_3858_);
if (v_isShared_3865_ == 0)
{
lean_ctor_set(v___x_3864_, 1, v___x_3858_);
lean_ctor_set(v___x_3864_, 0, v_b_3857_);
v___x_3876_ = v___x_3864_;
goto v_reusejp_3875_;
}
else
{
lean_object* v_reuseFailAlloc_3887_; 
v_reuseFailAlloc_3887_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3887_, 0, v_b_3857_);
lean_ctor_set(v_reuseFailAlloc_3887_, 1, v___x_3858_);
v___x_3876_ = v_reuseFailAlloc_3887_;
goto v_reusejp_3875_;
}
v_reusejp_3875_:
{
lean_object* v___x_3877_; 
v___x_3877_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3877_, 0, v___x_3876_);
lean_ctor_set(v___x_3877_, 1, v_upperBounds_3869_);
if (v_upperExact_3871_ == 0)
{
lean_object* v___x_3879_; 
lean_dec(v___x_3858_);
if (v_isShared_3874_ == 0)
{
lean_ctor_set(v___x_3873_, 3, v___x_3877_);
v___x_3879_ = v___x_3873_;
goto v_reusejp_3878_;
}
else
{
lean_object* v_reuseFailAlloc_3880_; 
v_reuseFailAlloc_3880_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v_reuseFailAlloc_3880_, 0, v_var_3866_);
lean_ctor_set(v_reuseFailAlloc_3880_, 1, v_irrelevant_3867_);
lean_ctor_set(v_reuseFailAlloc_3880_, 2, v_lowerBounds_3868_);
lean_ctor_set(v_reuseFailAlloc_3880_, 3, v___x_3877_);
lean_ctor_set_uint8(v_reuseFailAlloc_3880_, sizeof(void*)*4, v_lowerExact_3870_);
v___x_3879_ = v_reuseFailAlloc_3880_;
goto v_reusejp_3878_;
}
v_reusejp_3878_:
{
lean_ctor_set_uint8(v___x_3879_, sizeof(void*)*4 + 1, v___x_3859_);
return v___x_3879_;
}
}
else
{
lean_object* v___x_3881_; lean_object* v___x_3882_; uint8_t v___x_3883_; lean_object* v___x_3885_; 
v___x_3881_ = lean_nat_abs(v___x_3858_);
lean_dec(v___x_3858_);
v___x_3882_ = lean_unsigned_to_nat(1u);
v___x_3883_ = lean_nat_dec_eq(v___x_3881_, v___x_3882_);
lean_dec(v___x_3881_);
if (v_isShared_3874_ == 0)
{
lean_ctor_set(v___x_3873_, 3, v___x_3877_);
v___x_3885_ = v___x_3873_;
goto v_reusejp_3884_;
}
else
{
lean_object* v_reuseFailAlloc_3886_; 
v_reuseFailAlloc_3886_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v_reuseFailAlloc_3886_, 0, v_var_3866_);
lean_ctor_set(v_reuseFailAlloc_3886_, 1, v_irrelevant_3867_);
lean_ctor_set(v_reuseFailAlloc_3886_, 2, v_lowerBounds_3868_);
lean_ctor_set(v_reuseFailAlloc_3886_, 3, v___x_3877_);
lean_ctor_set_uint8(v_reuseFailAlloc_3886_, sizeof(void*)*4, v_lowerExact_3870_);
v___x_3885_ = v_reuseFailAlloc_3886_;
goto v_reusejp_3884_;
}
v_reusejp_3884_:
{
lean_ctor_set_uint8(v___x_3885_, sizeof(void*)*4 + 1, v___x_3883_);
return v___x_3885_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinData_spec__0___redArg___lam__0___boxed(lean_object* v___x_3891_, lean_object* v_b_3892_, lean_object* v___x_3893_, lean_object* v___x_3894_, lean_object* v_____r_3895_, lean_object* v_d_x27_3896_){
_start:
{
uint8_t v___x_1958__boxed_3897_; lean_object* v_res_3898_; 
v___x_1958__boxed_3897_ = lean_unbox(v___x_3894_);
v_res_3898_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinData_spec__0___redArg___lam__0(v___x_3891_, v_b_3892_, v___x_3893_, v___x_1958__boxed_3897_, v_____r_3895_, v_d_x27_3896_);
return v_res_3898_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinData_spec__0___redArg(lean_object* v_upperBound_3899_, lean_object* v_coeffs_3900_, lean_object* v_constraint_3901_, lean_object* v_b_3902_, lean_object* v_a_3903_, lean_object* v_b_3904_){
_start:
{
lean_object* v_a_3906_; uint8_t v___x_3910_; 
v___x_3910_ = lean_nat_dec_lt(v_a_3903_, v_upperBound_3899_);
if (v___x_3910_ == 0)
{
lean_dec(v_a_3903_);
lean_dec_ref(v_b_3902_);
lean_dec_ref(v_constraint_3901_);
return v_b_3904_;
}
else
{
lean_object* v___x_3911_; uint8_t v___x_3912_; 
v___x_3911_ = lean_array_get_size(v_b_3904_);
v___x_3912_ = lean_nat_dec_lt(v_a_3903_, v___x_3911_);
if (v___x_3912_ == 0)
{
v_a_3906_ = v_b_3904_;
goto v___jp_3905_;
}
else
{
lean_object* v___x_3913_; lean_object* v_v_3914_; lean_object* v___x_3915_; lean_object* v_xs_x27_3916_; lean_object* v___y_3918_; lean_object* v___x_3920_; uint8_t v___x_3921_; 
lean_inc(v_a_3903_);
v___x_3913_ = l_Lean_Omega_IntList_get(v_coeffs_3900_, v_a_3903_);
v_v_3914_ = lean_array_fget(v_b_3904_, v_a_3903_);
v___x_3915_ = lean_box(0);
v_xs_x27_3916_ = lean_array_fset(v_b_3904_, v_a_3903_, v___x_3915_);
v___x_3920_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17);
v___x_3921_ = lean_int_dec_eq(v___x_3913_, v___x_3920_);
if (v___x_3921_ == 0)
{
lean_object* v___x_3922_; lean_object* v_lowerBound_3923_; 
lean_inc_ref(v_constraint_3901_);
lean_inc(v___x_3913_);
v___x_3922_ = l_Lean_Omega_Constraint_scale(v___x_3913_, v_constraint_3901_);
v_lowerBound_3923_ = lean_ctor_get(v___x_3922_, 0);
lean_inc(v_lowerBound_3923_);
if (lean_obj_tag(v_lowerBound_3923_) == 0)
{
lean_object* v___x_3924_; 
lean_inc_ref(v_b_3902_);
v___x_3924_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinData_spec__0___redArg___lam__0(v___x_3922_, v_b_3902_, v___x_3913_, v___x_3921_, v___x_3915_, v_v_3914_);
v___y_3918_ = v___x_3924_;
goto v___jp_3917_;
}
else
{
lean_object* v_var_3925_; lean_object* v_irrelevant_3926_; lean_object* v_lowerBounds_3927_; lean_object* v_upperBounds_3928_; uint8_t v_lowerExact_3929_; uint8_t v_upperExact_3930_; lean_object* v___x_3932_; uint8_t v_isShared_3933_; uint8_t v_isSharedCheck_3945_; 
lean_dec_ref_known(v_lowerBound_3923_, 1);
v_var_3925_ = lean_ctor_get(v_v_3914_, 0);
v_irrelevant_3926_ = lean_ctor_get(v_v_3914_, 1);
v_lowerBounds_3927_ = lean_ctor_get(v_v_3914_, 2);
v_upperBounds_3928_ = lean_ctor_get(v_v_3914_, 3);
v_lowerExact_3929_ = lean_ctor_get_uint8(v_v_3914_, sizeof(void*)*4);
v_upperExact_3930_ = lean_ctor_get_uint8(v_v_3914_, sizeof(void*)*4 + 1);
v_isSharedCheck_3945_ = !lean_is_exclusive(v_v_3914_);
if (v_isSharedCheck_3945_ == 0)
{
v___x_3932_ = v_v_3914_;
v_isShared_3933_ = v_isSharedCheck_3945_;
goto v_resetjp_3931_;
}
else
{
lean_inc(v_upperBounds_3928_);
lean_inc(v_lowerBounds_3927_);
lean_inc(v_irrelevant_3926_);
lean_inc(v_var_3925_);
lean_dec(v_v_3914_);
v___x_3932_ = lean_box(0);
v_isShared_3933_ = v_isSharedCheck_3945_;
goto v_resetjp_3931_;
}
v_resetjp_3931_:
{
lean_object* v___x_3934_; lean_object* v___x_3935_; uint8_t v___y_3937_; 
lean_inc(v___x_3913_);
lean_inc_ref(v_b_3902_);
v___x_3934_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3934_, 0, v_b_3902_);
lean_ctor_set(v___x_3934_, 1, v___x_3913_);
v___x_3935_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3935_, 0, v___x_3934_);
lean_ctor_set(v___x_3935_, 1, v_lowerBounds_3927_);
if (v_lowerExact_3929_ == 0)
{
v___y_3937_ = v___x_3921_;
goto v___jp_3936_;
}
else
{
lean_object* v___x_3942_; lean_object* v___x_3943_; uint8_t v___x_3944_; 
v___x_3942_ = lean_nat_abs(v___x_3913_);
v___x_3943_ = lean_unsigned_to_nat(1u);
v___x_3944_ = lean_nat_dec_eq(v___x_3942_, v___x_3943_);
lean_dec(v___x_3942_);
v___y_3937_ = v___x_3944_;
goto v___jp_3936_;
}
v___jp_3936_:
{
lean_object* v___x_3939_; 
if (v_isShared_3933_ == 0)
{
lean_ctor_set(v___x_3932_, 2, v___x_3935_);
v___x_3939_ = v___x_3932_;
goto v_reusejp_3938_;
}
else
{
lean_object* v_reuseFailAlloc_3941_; 
v_reuseFailAlloc_3941_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v_reuseFailAlloc_3941_, 0, v_var_3925_);
lean_ctor_set(v_reuseFailAlloc_3941_, 1, v_irrelevant_3926_);
lean_ctor_set(v_reuseFailAlloc_3941_, 2, v___x_3935_);
lean_ctor_set(v_reuseFailAlloc_3941_, 3, v_upperBounds_3928_);
lean_ctor_set_uint8(v_reuseFailAlloc_3941_, sizeof(void*)*4 + 1, v_upperExact_3930_);
v___x_3939_ = v_reuseFailAlloc_3941_;
goto v_reusejp_3938_;
}
v_reusejp_3938_:
{
lean_object* v___x_3940_; 
lean_ctor_set_uint8(v___x_3939_, sizeof(void*)*4, v___y_3937_);
lean_inc_ref(v_b_3902_);
v___x_3940_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinData_spec__0___redArg___lam__0(v___x_3922_, v_b_3902_, v___x_3913_, v___x_3921_, v___x_3915_, v___x_3939_);
v___y_3918_ = v___x_3940_;
goto v___jp_3917_;
}
}
}
}
}
else
{
lean_object* v_var_3946_; lean_object* v_irrelevant_3947_; lean_object* v_lowerBounds_3948_; lean_object* v_upperBounds_3949_; uint8_t v_lowerExact_3950_; uint8_t v_upperExact_3951_; lean_object* v___x_3953_; uint8_t v_isShared_3954_; uint8_t v_isSharedCheck_3959_; 
lean_dec(v___x_3913_);
v_var_3946_ = lean_ctor_get(v_v_3914_, 0);
v_irrelevant_3947_ = lean_ctor_get(v_v_3914_, 1);
v_lowerBounds_3948_ = lean_ctor_get(v_v_3914_, 2);
v_upperBounds_3949_ = lean_ctor_get(v_v_3914_, 3);
v_lowerExact_3950_ = lean_ctor_get_uint8(v_v_3914_, sizeof(void*)*4);
v_upperExact_3951_ = lean_ctor_get_uint8(v_v_3914_, sizeof(void*)*4 + 1);
v_isSharedCheck_3959_ = !lean_is_exclusive(v_v_3914_);
if (v_isSharedCheck_3959_ == 0)
{
v___x_3953_ = v_v_3914_;
v_isShared_3954_ = v_isSharedCheck_3959_;
goto v_resetjp_3952_;
}
else
{
lean_inc(v_upperBounds_3949_);
lean_inc(v_lowerBounds_3948_);
lean_inc(v_irrelevant_3947_);
lean_inc(v_var_3946_);
lean_dec(v_v_3914_);
v___x_3953_ = lean_box(0);
v_isShared_3954_ = v_isSharedCheck_3959_;
goto v_resetjp_3952_;
}
v_resetjp_3952_:
{
lean_object* v___x_3955_; lean_object* v___x_3957_; 
lean_inc_ref(v_b_3902_);
v___x_3955_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3955_, 0, v_b_3902_);
lean_ctor_set(v___x_3955_, 1, v_irrelevant_3947_);
if (v_isShared_3954_ == 0)
{
lean_ctor_set(v___x_3953_, 1, v___x_3955_);
v___x_3957_ = v___x_3953_;
goto v_reusejp_3956_;
}
else
{
lean_object* v_reuseFailAlloc_3958_; 
v_reuseFailAlloc_3958_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v_reuseFailAlloc_3958_, 0, v_var_3946_);
lean_ctor_set(v_reuseFailAlloc_3958_, 1, v___x_3955_);
lean_ctor_set(v_reuseFailAlloc_3958_, 2, v_lowerBounds_3948_);
lean_ctor_set(v_reuseFailAlloc_3958_, 3, v_upperBounds_3949_);
lean_ctor_set_uint8(v_reuseFailAlloc_3958_, sizeof(void*)*4, v_lowerExact_3950_);
lean_ctor_set_uint8(v_reuseFailAlloc_3958_, sizeof(void*)*4 + 1, v_upperExact_3951_);
v___x_3957_ = v_reuseFailAlloc_3958_;
goto v_reusejp_3956_;
}
v_reusejp_3956_:
{
v___y_3918_ = v___x_3957_;
goto v___jp_3917_;
}
}
}
v___jp_3917_:
{
lean_object* v___x_3919_; 
v___x_3919_ = lean_array_fset(v_xs_x27_3916_, v_a_3903_, v___y_3918_);
v_a_3906_ = v___x_3919_;
goto v___jp_3905_;
}
}
}
v___jp_3905_:
{
lean_object* v___x_3907_; lean_object* v___x_3908_; 
v___x_3907_ = lean_unsigned_to_nat(1u);
v___x_3908_ = lean_nat_add(v_a_3903_, v___x_3907_);
lean_dec(v_a_3903_);
v_a_3903_ = v___x_3908_;
v_b_3904_ = v_a_3906_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinData_spec__0___redArg___boxed(lean_object* v_upperBound_3960_, lean_object* v_coeffs_3961_, lean_object* v_constraint_3962_, lean_object* v_b_3963_, lean_object* v_a_3964_, lean_object* v_b_3965_){
_start:
{
lean_object* v_res_3966_; 
v_res_3966_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinData_spec__0___redArg(v_upperBound_3960_, v_coeffs_3961_, v_constraint_3962_, v_b_3963_, v_a_3964_, v_b_3965_);
lean_dec(v_coeffs_3961_);
lean_dec(v_upperBound_3960_);
return v_res_3966_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinData_spec__1(lean_object* v_n_3967_, lean_object* v_a_3968_, lean_object* v_a_3969_){
_start:
{
if (lean_obj_tag(v_a_3968_) == 0)
{
lean_object* v___x_3970_; 
v___x_3970_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3970_, 0, v_a_3969_);
return v___x_3970_;
}
else
{
lean_object* v_value_3971_; lean_object* v_tail_3972_; lean_object* v_coeffs_3973_; lean_object* v_constraint_3974_; lean_object* v___x_3975_; lean_object* v___x_3976_; 
v_value_3971_ = lean_ctor_get(v_a_3968_, 1);
lean_inc(v_value_3971_);
v_tail_3972_ = lean_ctor_get(v_a_3968_, 2);
lean_inc(v_tail_3972_);
lean_dec_ref_known(v_a_3968_, 3);
v_coeffs_3973_ = lean_ctor_get(v_value_3971_, 0);
lean_inc(v_coeffs_3973_);
v_constraint_3974_ = lean_ctor_get(v_value_3971_, 1);
lean_inc_ref(v_constraint_3974_);
v___x_3975_ = lean_unsigned_to_nat(0u);
v___x_3976_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinData_spec__0___redArg(v_n_3967_, v_coeffs_3973_, v_constraint_3974_, v_value_3971_, v___x_3975_, v_a_3969_);
lean_dec(v_coeffs_3973_);
v_a_3968_ = v_tail_3972_;
v_a_3969_ = v___x_3976_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinData_spec__1___boxed(lean_object* v_n_3978_, lean_object* v_a_3979_, lean_object* v_a_3980_){
_start:
{
lean_object* v_res_3981_; 
v_res_3981_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinData_spec__1(v_n_3978_, v_a_3979_, v_a_3980_);
lean_dec(v_n_3978_);
return v_res_3981_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinData_spec__3(lean_object* v_n_3982_, lean_object* v_as_3983_, size_t v_sz_3984_, size_t v_i_3985_, lean_object* v_b_3986_){
_start:
{
uint8_t v___x_3987_; 
v___x_3987_ = lean_usize_dec_lt(v_i_3985_, v_sz_3984_);
if (v___x_3987_ == 0)
{
return v_b_3986_;
}
else
{
lean_object* v_a_3988_; lean_object* v___x_3989_; 
v_a_3988_ = lean_array_uget_borrowed(v_as_3983_, v_i_3985_);
lean_inc(v_a_3988_);
v___x_3989_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinData_spec__1(v_n_3982_, v_a_3988_, v_b_3986_);
if (lean_obj_tag(v___x_3989_) == 0)
{
lean_object* v_a_3990_; 
v_a_3990_ = lean_ctor_get(v___x_3989_, 0);
lean_inc(v_a_3990_);
lean_dec_ref_known(v___x_3989_, 1);
return v_a_3990_;
}
else
{
lean_object* v_a_3991_; size_t v___x_3992_; size_t v___x_3993_; 
v_a_3991_ = lean_ctor_get(v___x_3989_, 0);
lean_inc(v_a_3991_);
lean_dec_ref_known(v___x_3989_, 1);
v___x_3992_ = ((size_t)1ULL);
v___x_3993_ = lean_usize_add(v_i_3985_, v___x_3992_);
v_i_3985_ = v___x_3993_;
v_b_3986_ = v_a_3991_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinData_spec__3___boxed(lean_object* v_n_3995_, lean_object* v_as_3996_, lean_object* v_sz_3997_, lean_object* v_i_3998_, lean_object* v_b_3999_){
_start:
{
size_t v_sz_boxed_4000_; size_t v_i_boxed_4001_; lean_object* v_res_4002_; 
v_sz_boxed_4000_ = lean_unbox_usize(v_sz_3997_);
lean_dec(v_sz_3997_);
v_i_boxed_4001_ = lean_unbox_usize(v_i_3998_);
lean_dec(v_i_3998_);
v_res_4002_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinData_spec__3(v_n_3995_, v_as_3996_, v_sz_boxed_4000_, v_i_boxed_4001_, v_b_3999_);
lean_dec_ref(v_as_3996_);
lean_dec(v_n_3995_);
return v_res_4002_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinData(lean_object* v_p_4005_){
_start:
{
lean_object* v_constraints_4006_; lean_object* v_numVars_4007_; lean_object* v_buckets_4008_; lean_object* v___x_4009_; lean_object* v___x_4010_; lean_object* v_data_4011_; size_t v_sz_4012_; size_t v___x_4013_; lean_object* v___x_4014_; 
v_constraints_4006_ = lean_ctor_get(v_p_4005_, 2);
lean_inc_ref(v_constraints_4006_);
v_numVars_4007_ = lean_ctor_get(v_p_4005_, 1);
lean_inc_n(v_numVars_4007_, 2);
lean_dec_ref(v_p_4005_);
v_buckets_4008_ = lean_ctor_get(v_constraints_4006_, 1);
lean_inc_ref(v_buckets_4008_);
lean_dec_ref(v_constraints_4006_);
v___x_4009_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinData___closed__0));
v___x_4010_ = l_List_range(v_numVars_4007_);
v_data_4011_ = l_List_foldl___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinData_spec__2(v___x_4009_, v___x_4010_);
lean_dec(v___x_4010_);
v_sz_4012_ = lean_array_size(v_buckets_4008_);
v___x_4013_ = ((size_t)0ULL);
v___x_4014_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinData_spec__3(v_numVars_4007_, v_buckets_4008_, v_sz_4012_, v___x_4013_, v_data_4011_);
lean_dec_ref(v_buckets_4008_);
lean_dec(v_numVars_4007_);
return v___x_4014_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinData_spec__0(lean_object* v_upperBound_4015_, lean_object* v_coeffs_4016_, lean_object* v_constraint_4017_, lean_object* v_b_4018_, lean_object* v_inst_4019_, lean_object* v_R_4020_, lean_object* v_a_4021_, lean_object* v_b_4022_, lean_object* v_c_4023_){
_start:
{
lean_object* v___x_4024_; 
v___x_4024_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinData_spec__0___redArg(v_upperBound_4015_, v_coeffs_4016_, v_constraint_4017_, v_b_4018_, v_a_4021_, v_b_4022_);
return v___x_4024_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinData_spec__0___boxed(lean_object* v_upperBound_4025_, lean_object* v_coeffs_4026_, lean_object* v_constraint_4027_, lean_object* v_b_4028_, lean_object* v_inst_4029_, lean_object* v_R_4030_, lean_object* v_a_4031_, lean_object* v_b_4032_, lean_object* v_c_4033_){
_start:
{
lean_object* v_res_4034_; 
v_res_4034_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinData_spec__0(v_upperBound_4025_, v_coeffs_4026_, v_constraint_4027_, v_b_4028_, v_inst_4029_, v_R_4030_, v_a_4031_, v_b_4032_, v_c_4033_);
lean_dec(v_coeffs_4026_);
lean_dec(v_upperBound_4025_);
return v_res_4034_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect___lam__0(lean_object* v_cls_4038_, lean_object* v___y_4039_, lean_object* v___y_4040_, lean_object* v___y_4041_, lean_object* v___y_4042_){
_start:
{
lean_object* v_toCold_4044_; lean_object* v_options_4045_; uint8_t v_hasTrace_4046_; 
v_toCold_4044_ = lean_ctor_get(v___y_4041_, 0);
v_options_4045_ = lean_ctor_get(v_toCold_4044_, 2);
v_hasTrace_4046_ = lean_ctor_get_uint8(v_options_4045_, sizeof(void*)*1);
if (v_hasTrace_4046_ == 0)
{
lean_object* v___x_4047_; lean_object* v___x_4048_; 
lean_dec(v_cls_4038_);
v___x_4047_ = lean_box(v_hasTrace_4046_);
v___x_4048_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4048_, 0, v___x_4047_);
return v___x_4048_;
}
else
{
lean_object* v_inheritedTraceOptions_4049_; lean_object* v___x_4050_; lean_object* v___x_4051_; uint8_t v___x_4052_; lean_object* v___x_4053_; lean_object* v___x_4054_; 
v_inheritedTraceOptions_4049_ = lean_ctor_get(v_toCold_4044_, 11);
v___x_4050_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect___lam__0___closed__1));
v___x_4051_ = l_Lean_Name_append(v___x_4050_, v_cls_4038_);
v___x_4052_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4049_, v_options_4045_, v___x_4051_);
lean_dec(v___x_4051_);
v___x_4053_ = lean_box(v___x_4052_);
v___x_4054_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4054_, 0, v___x_4053_);
return v___x_4054_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect___lam__0___boxed(lean_object* v_cls_4055_, lean_object* v___y_4056_, lean_object* v___y_4057_, lean_object* v___y_4058_, lean_object* v___y_4059_, lean_object* v___y_4060_){
_start:
{
lean_object* v_res_4061_; 
v_res_4061_ = l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect___lam__0(v_cls_4055_, v___y_4056_, v___y_4057_, v___y_4058_, v___y_4059_);
lean_dec(v___y_4059_);
lean_dec_ref(v___y_4058_);
lean_dec(v___y_4057_);
lean_dec_ref(v___y_4056_);
return v_res_4061_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__1___redArg___lam__0(lean_object* v___x_4062_, lean_object* v_fst_4063_, lean_object* v_snd_4064_, lean_object* v_fst_4065_, lean_object* v_____r_4066_, lean_object* v___y_4067_, lean_object* v___y_4068_, lean_object* v___y_4069_, lean_object* v___y_4070_){
_start:
{
lean_object* v___x_4072_; lean_object* v___x_4073_; lean_object* v___x_4074_; lean_object* v___x_4075_; lean_object* v___x_4076_; lean_object* v___x_4077_; 
v___x_4072_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4072_, 0, v___x_4062_);
v___x_4073_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4073_, 0, v_fst_4063_);
lean_ctor_set(v___x_4073_, 1, v_snd_4064_);
v___x_4074_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4074_, 0, v_fst_4065_);
lean_ctor_set(v___x_4074_, 1, v___x_4073_);
v___x_4075_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4075_, 0, v___x_4072_);
lean_ctor_set(v___x_4075_, 1, v___x_4074_);
v___x_4076_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4076_, 0, v___x_4075_);
v___x_4077_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4077_, 0, v___x_4076_);
return v___x_4077_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__1___redArg___lam__0___boxed(lean_object* v___x_4078_, lean_object* v_fst_4079_, lean_object* v_snd_4080_, lean_object* v_fst_4081_, lean_object* v_____r_4082_, lean_object* v___y_4083_, lean_object* v___y_4084_, lean_object* v___y_4085_, lean_object* v___y_4086_, lean_object* v___y_4087_){
_start:
{
lean_object* v_res_4088_; 
v_res_4088_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__1___redArg___lam__0(v___x_4078_, v_fst_4079_, v_snd_4080_, v_fst_4081_, v_____r_4082_, v___y_4083_, v___y_4084_, v___y_4085_, v___y_4086_);
lean_dec(v___y_4086_);
lean_dec_ref(v___y_4085_);
lean_dec(v___y_4084_);
lean_dec_ref(v___y_4083_);
return v_res_4088_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__0___closed__0(void){
_start:
{
lean_object* v___x_4089_; double v___x_4090_; 
v___x_4089_ = lean_unsigned_to_nat(0u);
v___x_4090_ = lean_float_of_nat(v___x_4089_);
return v___x_4090_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__0(lean_object* v_cls_4093_, lean_object* v_msg_4094_, lean_object* v___y_4095_, lean_object* v___y_4096_, lean_object* v___y_4097_, lean_object* v___y_4098_){
_start:
{
lean_object* v_ref_4100_; lean_object* v___x_4101_; lean_object* v_a_4102_; lean_object* v___x_4104_; uint8_t v_isShared_4105_; uint8_t v_isSharedCheck_4146_; 
v_ref_4100_ = lean_ctor_get(v___y_4097_, 2);
v___x_4101_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality_spec__0_spec__0(v_msg_4094_, v___y_4095_, v___y_4096_, v___y_4097_, v___y_4098_);
v_a_4102_ = lean_ctor_get(v___x_4101_, 0);
v_isSharedCheck_4146_ = !lean_is_exclusive(v___x_4101_);
if (v_isSharedCheck_4146_ == 0)
{
v___x_4104_ = v___x_4101_;
v_isShared_4105_ = v_isSharedCheck_4146_;
goto v_resetjp_4103_;
}
else
{
lean_inc(v_a_4102_);
lean_dec(v___x_4101_);
v___x_4104_ = lean_box(0);
v_isShared_4105_ = v_isSharedCheck_4146_;
goto v_resetjp_4103_;
}
v_resetjp_4103_:
{
lean_object* v___x_4106_; lean_object* v_traceState_4107_; lean_object* v_env_4108_; lean_object* v_nextMacroScope_4109_; lean_object* v_ngen_4110_; lean_object* v_auxDeclNGen_4111_; lean_object* v_cache_4112_; lean_object* v_messages_4113_; lean_object* v_infoState_4114_; lean_object* v_snapshotTasks_4115_; lean_object* v___x_4117_; uint8_t v_isShared_4118_; uint8_t v_isSharedCheck_4145_; 
v___x_4106_ = lean_st_ref_take(v___y_4098_);
v_traceState_4107_ = lean_ctor_get(v___x_4106_, 4);
v_env_4108_ = lean_ctor_get(v___x_4106_, 0);
v_nextMacroScope_4109_ = lean_ctor_get(v___x_4106_, 1);
v_ngen_4110_ = lean_ctor_get(v___x_4106_, 2);
v_auxDeclNGen_4111_ = lean_ctor_get(v___x_4106_, 3);
v_cache_4112_ = lean_ctor_get(v___x_4106_, 5);
v_messages_4113_ = lean_ctor_get(v___x_4106_, 6);
v_infoState_4114_ = lean_ctor_get(v___x_4106_, 7);
v_snapshotTasks_4115_ = lean_ctor_get(v___x_4106_, 8);
v_isSharedCheck_4145_ = !lean_is_exclusive(v___x_4106_);
if (v_isSharedCheck_4145_ == 0)
{
v___x_4117_ = v___x_4106_;
v_isShared_4118_ = v_isSharedCheck_4145_;
goto v_resetjp_4116_;
}
else
{
lean_inc(v_snapshotTasks_4115_);
lean_inc(v_infoState_4114_);
lean_inc(v_messages_4113_);
lean_inc(v_cache_4112_);
lean_inc(v_traceState_4107_);
lean_inc(v_auxDeclNGen_4111_);
lean_inc(v_ngen_4110_);
lean_inc(v_nextMacroScope_4109_);
lean_inc(v_env_4108_);
lean_dec(v___x_4106_);
v___x_4117_ = lean_box(0);
v_isShared_4118_ = v_isSharedCheck_4145_;
goto v_resetjp_4116_;
}
v_resetjp_4116_:
{
uint64_t v_tid_4119_; lean_object* v_traces_4120_; lean_object* v___x_4122_; uint8_t v_isShared_4123_; uint8_t v_isSharedCheck_4144_; 
v_tid_4119_ = lean_ctor_get_uint64(v_traceState_4107_, sizeof(void*)*1);
v_traces_4120_ = lean_ctor_get(v_traceState_4107_, 0);
v_isSharedCheck_4144_ = !lean_is_exclusive(v_traceState_4107_);
if (v_isSharedCheck_4144_ == 0)
{
v___x_4122_ = v_traceState_4107_;
v_isShared_4123_ = v_isSharedCheck_4144_;
goto v_resetjp_4121_;
}
else
{
lean_inc(v_traces_4120_);
lean_dec(v_traceState_4107_);
v___x_4122_ = lean_box(0);
v_isShared_4123_ = v_isSharedCheck_4144_;
goto v_resetjp_4121_;
}
v_resetjp_4121_:
{
lean_object* v___x_4124_; lean_object* v___x_4125_; double v___x_4126_; uint8_t v___x_4127_; lean_object* v___x_4128_; lean_object* v___x_4129_; lean_object* v___x_4130_; lean_object* v___x_4131_; lean_object* v___x_4132_; lean_object* v___x_4133_; lean_object* v___x_4135_; 
v___x_4124_ = lean_box(0);
v___x_4125_ = lean_box(0);
v___x_4126_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__0___closed__0, &l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__0___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__0___closed__0);
v___x_4127_ = 0;
v___x_4128_ = ((lean_object*)(l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__1));
v___x_4129_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_4129_, 0, v_cls_4093_);
lean_ctor_set(v___x_4129_, 1, v___x_4125_);
lean_ctor_set(v___x_4129_, 2, v___x_4128_);
lean_ctor_set_float(v___x_4129_, sizeof(void*)*3, v___x_4126_);
lean_ctor_set_float(v___x_4129_, sizeof(void*)*3 + 8, v___x_4126_);
lean_ctor_set_uint8(v___x_4129_, sizeof(void*)*3 + 16, v___x_4127_);
v___x_4130_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__0___closed__1));
v___x_4131_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_4131_, 0, v___x_4129_);
lean_ctor_set(v___x_4131_, 1, v_a_4102_);
lean_ctor_set(v___x_4131_, 2, v___x_4130_);
lean_inc(v_ref_4100_);
v___x_4132_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4132_, 0, v_ref_4100_);
lean_ctor_set(v___x_4132_, 1, v___x_4131_);
v___x_4133_ = l_Lean_PersistentArray_push___redArg(v_traces_4120_, v___x_4132_);
if (v_isShared_4123_ == 0)
{
lean_ctor_set(v___x_4122_, 0, v___x_4133_);
v___x_4135_ = v___x_4122_;
goto v_reusejp_4134_;
}
else
{
lean_object* v_reuseFailAlloc_4143_; 
v_reuseFailAlloc_4143_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_4143_, 0, v___x_4133_);
lean_ctor_set_uint64(v_reuseFailAlloc_4143_, sizeof(void*)*1, v_tid_4119_);
v___x_4135_ = v_reuseFailAlloc_4143_;
goto v_reusejp_4134_;
}
v_reusejp_4134_:
{
lean_object* v___x_4137_; 
if (v_isShared_4118_ == 0)
{
lean_ctor_set(v___x_4117_, 4, v___x_4135_);
v___x_4137_ = v___x_4117_;
goto v_reusejp_4136_;
}
else
{
lean_object* v_reuseFailAlloc_4142_; 
v_reuseFailAlloc_4142_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_4142_, 0, v_env_4108_);
lean_ctor_set(v_reuseFailAlloc_4142_, 1, v_nextMacroScope_4109_);
lean_ctor_set(v_reuseFailAlloc_4142_, 2, v_ngen_4110_);
lean_ctor_set(v_reuseFailAlloc_4142_, 3, v_auxDeclNGen_4111_);
lean_ctor_set(v_reuseFailAlloc_4142_, 4, v___x_4135_);
lean_ctor_set(v_reuseFailAlloc_4142_, 5, v_cache_4112_);
lean_ctor_set(v_reuseFailAlloc_4142_, 6, v_messages_4113_);
lean_ctor_set(v_reuseFailAlloc_4142_, 7, v_infoState_4114_);
lean_ctor_set(v_reuseFailAlloc_4142_, 8, v_snapshotTasks_4115_);
v___x_4137_ = v_reuseFailAlloc_4142_;
goto v_reusejp_4136_;
}
v_reusejp_4136_:
{
lean_object* v___x_4138_; lean_object* v___x_4140_; 
v___x_4138_ = lean_st_ref_put(v___y_4098_, v___x_4137_);
if (v_isShared_4105_ == 0)
{
lean_ctor_set(v___x_4104_, 0, v___x_4124_);
v___x_4140_ = v___x_4104_;
goto v_reusejp_4139_;
}
else
{
lean_object* v_reuseFailAlloc_4141_; 
v_reuseFailAlloc_4141_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4141_, 0, v___x_4124_);
v___x_4140_ = v_reuseFailAlloc_4141_;
goto v_reusejp_4139_;
}
v_reusejp_4139_:
{
return v___x_4140_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__0___boxed(lean_object* v_cls_4147_, lean_object* v_msg_4148_, lean_object* v___y_4149_, lean_object* v___y_4150_, lean_object* v___y_4151_, lean_object* v___y_4152_, lean_object* v___y_4153_){
_start:
{
lean_object* v_res_4154_; 
v_res_4154_ = l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__0(v_cls_4147_, v_msg_4148_, v___y_4149_, v___y_4150_, v___y_4151_, v___y_4152_);
lean_dec(v___y_4152_);
lean_dec_ref(v___y_4151_);
lean_dec(v___y_4150_);
lean_dec_ref(v___y_4149_);
return v_res_4154_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v_cls_4155_; lean_object* v___x_4156_; lean_object* v___x_4157_; 
v_cls_4155_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__1_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_));
v___x_4156_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect___lam__0___closed__1));
v___x_4157_ = l_Lean_Name_append(v___x_4156_, v_cls_4155_);
return v___x_4157_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__1___redArg___closed__2(void){
_start:
{
lean_object* v___x_4159_; lean_object* v___x_4160_; 
v___x_4159_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__1___redArg___closed__1));
v___x_4160_ = l_Lean_stringToMessageData(v___x_4159_);
return v___x_4160_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__1___redArg(lean_object* v_upperBound_4161_, lean_object* v___y_4162_, lean_object* v_a_4163_, lean_object* v_b_4164_, lean_object* v___y_4165_, lean_object* v___y_4166_, lean_object* v___y_4167_, lean_object* v___y_4168_){
_start:
{
lean_object* v_a_4171_; lean_object* v___y_4176_; uint8_t v___x_4195_; 
v___x_4195_ = lean_nat_dec_lt(v_a_4163_, v_upperBound_4161_);
if (v___x_4195_ == 0)
{
lean_object* v___x_4196_; 
lean_dec(v_a_4163_);
v___x_4196_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4196_, 0, v_b_4164_);
return v___x_4196_;
}
else
{
lean_object* v_snd_4197_; lean_object* v___x_4199_; uint8_t v_isShared_4200_; uint8_t v_isSharedCheck_4268_; 
v_snd_4197_ = lean_ctor_get(v_b_4164_, 1);
v_isSharedCheck_4268_ = !lean_is_exclusive(v_b_4164_);
if (v_isSharedCheck_4268_ == 0)
{
lean_object* v_unused_4269_; 
v_unused_4269_ = lean_ctor_get(v_b_4164_, 0);
lean_dec(v_unused_4269_);
v___x_4199_ = v_b_4164_;
v_isShared_4200_ = v_isSharedCheck_4268_;
goto v_resetjp_4198_;
}
else
{
lean_inc(v_snd_4197_);
lean_dec(v_b_4164_);
v___x_4199_ = lean_box(0);
v_isShared_4200_ = v_isSharedCheck_4268_;
goto v_resetjp_4198_;
}
v_resetjp_4198_:
{
lean_object* v_snd_4201_; lean_object* v_fst_4202_; lean_object* v___x_4204_; uint8_t v_isShared_4205_; uint8_t v_isSharedCheck_4267_; 
v_snd_4201_ = lean_ctor_get(v_snd_4197_, 1);
v_fst_4202_ = lean_ctor_get(v_snd_4197_, 0);
v_isSharedCheck_4267_ = !lean_is_exclusive(v_snd_4197_);
if (v_isSharedCheck_4267_ == 0)
{
v___x_4204_ = v_snd_4197_;
v_isShared_4205_ = v_isSharedCheck_4267_;
goto v_resetjp_4203_;
}
else
{
lean_inc(v_snd_4201_);
lean_inc(v_fst_4202_);
lean_dec(v_snd_4197_);
v___x_4204_ = lean_box(0);
v_isShared_4205_ = v_isSharedCheck_4267_;
goto v_resetjp_4203_;
}
v_resetjp_4203_:
{
lean_object* v_fst_4206_; lean_object* v_snd_4207_; lean_object* v___x_4209_; uint8_t v_isShared_4210_; uint8_t v_isSharedCheck_4266_; 
v_fst_4206_ = lean_ctor_get(v_snd_4201_, 0);
v_snd_4207_ = lean_ctor_get(v_snd_4201_, 1);
v_isSharedCheck_4266_ = !lean_is_exclusive(v_snd_4201_);
if (v_isSharedCheck_4266_ == 0)
{
v___x_4209_ = v_snd_4201_;
v_isShared_4210_ = v_isSharedCheck_4266_;
goto v_resetjp_4208_;
}
else
{
lean_inc(v_snd_4207_);
lean_inc(v_fst_4206_);
lean_dec(v_snd_4201_);
v___x_4209_ = lean_box(0);
v_isShared_4210_ = v_isSharedCheck_4266_;
goto v_resetjp_4208_;
}
v_resetjp_4208_:
{
lean_object* v___x_4211_; lean_object* v_bestIdx_4222_; lean_object* v_cls_4223_; lean_object* v___x_4224_; uint8_t v___x_4228_; lean_object* v___x_4229_; uint8_t v___x_4230_; uint8_t v___y_4260_; 
v___x_4211_ = lean_box(0);
v_bestIdx_4222_ = lean_unsigned_to_nat(0u);
v_cls_4223_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__1_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_));
v___x_4224_ = lean_array_fget_borrowed(v___y_4162_, v_a_4163_);
v___x_4228_ = l_Lean_Elab_Tactic_Omega_Problem_FourierMotzkinData_exact(v___x_4224_);
v___x_4229_ = l_Lean_Elab_Tactic_Omega_Problem_FourierMotzkinData_size(v___x_4224_);
v___x_4230_ = lean_nat_dec_eq(v___x_4229_, v_bestIdx_4222_);
if (v___x_4230_ == 0)
{
uint8_t v___x_4265_; 
v___x_4265_ = lean_unbox(v_snd_4207_);
if (v___x_4265_ == 0)
{
if (v___x_4228_ == 0)
{
goto v___jp_4262_;
}
else
{
lean_del_object(v___x_4209_);
lean_del_object(v___x_4204_);
lean_del_object(v___x_4199_);
goto v___jp_4231_;
}
}
else
{
goto v___jp_4262_;
}
}
else
{
lean_del_object(v___x_4209_);
lean_del_object(v___x_4204_);
lean_del_object(v___x_4199_);
goto v___jp_4231_;
}
v___jp_4212_:
{
lean_object* v___x_4214_; 
if (v_isShared_4210_ == 0)
{
v___x_4214_ = v___x_4209_;
goto v_reusejp_4213_;
}
else
{
lean_object* v_reuseFailAlloc_4221_; 
v_reuseFailAlloc_4221_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4221_, 0, v_fst_4206_);
lean_ctor_set(v_reuseFailAlloc_4221_, 1, v_snd_4207_);
v___x_4214_ = v_reuseFailAlloc_4221_;
goto v_reusejp_4213_;
}
v_reusejp_4213_:
{
lean_object* v___x_4216_; 
if (v_isShared_4205_ == 0)
{
lean_ctor_set(v___x_4204_, 1, v___x_4214_);
v___x_4216_ = v___x_4204_;
goto v_reusejp_4215_;
}
else
{
lean_object* v_reuseFailAlloc_4220_; 
v_reuseFailAlloc_4220_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4220_, 0, v_fst_4202_);
lean_ctor_set(v_reuseFailAlloc_4220_, 1, v___x_4214_);
v___x_4216_ = v_reuseFailAlloc_4220_;
goto v_reusejp_4215_;
}
v_reusejp_4215_:
{
lean_object* v___x_4218_; 
if (v_isShared_4200_ == 0)
{
lean_ctor_set(v___x_4199_, 1, v___x_4216_);
lean_ctor_set(v___x_4199_, 0, v___x_4211_);
v___x_4218_ = v___x_4199_;
goto v_reusejp_4217_;
}
else
{
lean_object* v_reuseFailAlloc_4219_; 
v_reuseFailAlloc_4219_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4219_, 0, v___x_4211_);
lean_ctor_set(v_reuseFailAlloc_4219_, 1, v___x_4216_);
v___x_4218_ = v_reuseFailAlloc_4219_;
goto v_reusejp_4217_;
}
v_reusejp_4217_:
{
v_a_4171_ = v___x_4218_;
goto v___jp_4170_;
}
}
}
}
v___jp_4225_:
{
lean_object* v___x_4226_; lean_object* v___x_4227_; 
v___x_4226_ = lean_box(0);
lean_inc(v___x_4224_);
v___x_4227_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__1___redArg___lam__0(v___x_4224_, v_fst_4206_, v_snd_4207_, v_fst_4202_, v___x_4226_, v___y_4165_, v___y_4166_, v___y_4167_, v___y_4168_);
v___y_4176_ = v___x_4227_;
goto v___jp_4175_;
}
v___jp_4231_:
{
if (v___x_4230_ == 0)
{
lean_object* v___x_4232_; lean_object* v___x_4233_; lean_object* v___x_4234_; lean_object* v___x_4235_; 
lean_dec(v_snd_4207_);
lean_dec(v_fst_4206_);
lean_dec(v_fst_4202_);
v___x_4232_ = lean_box(v___x_4228_);
v___x_4233_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4233_, 0, v___x_4229_);
lean_ctor_set(v___x_4233_, 1, v___x_4232_);
lean_inc(v_a_4163_);
v___x_4234_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4234_, 0, v_a_4163_);
lean_ctor_set(v___x_4234_, 1, v___x_4233_);
v___x_4235_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4235_, 0, v___x_4211_);
lean_ctor_set(v___x_4235_, 1, v___x_4234_);
v_a_4171_ = v___x_4235_;
goto v___jp_4170_;
}
else
{
lean_object* v_toCold_4236_; lean_object* v_options_4237_; uint8_t v_hasTrace_4238_; 
lean_dec(v___x_4229_);
v_toCold_4236_ = lean_ctor_get(v___y_4167_, 0);
v_options_4237_ = lean_ctor_get(v_toCold_4236_, 2);
v_hasTrace_4238_ = lean_ctor_get_uint8(v_options_4237_, sizeof(void*)*1);
if (v_hasTrace_4238_ == 0)
{
goto v___jp_4225_;
}
else
{
lean_object* v_inheritedTraceOptions_4239_; lean_object* v___x_4240_; uint8_t v___x_4241_; 
v_inheritedTraceOptions_4239_ = lean_ctor_get(v_toCold_4236_, 11);
v___x_4240_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__1___redArg___closed__0, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__1___redArg___closed__0_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__1___redArg___closed__0);
v___x_4241_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4239_, v_options_4237_, v___x_4240_);
if (v___x_4241_ == 0)
{
goto v___jp_4225_;
}
else
{
lean_object* v_var_4242_; lean_object* v___x_4243_; lean_object* v___x_4244_; lean_object* v___x_4245_; lean_object* v___x_4246_; lean_object* v___x_4247_; lean_object* v___x_4248_; 
v_var_4242_ = lean_ctor_get(v___x_4224_, 0);
v___x_4243_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__1___redArg___closed__2, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__1___redArg___closed__2_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__1___redArg___closed__2);
lean_inc(v_var_4242_);
v___x_4244_ = l_Nat_reprFast(v_var_4242_);
v___x_4245_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4245_, 0, v___x_4244_);
v___x_4246_ = l_Lean_MessageData_ofFormat(v___x_4245_);
v___x_4247_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4247_, 0, v___x_4243_);
lean_ctor_set(v___x_4247_, 1, v___x_4246_);
v___x_4248_ = l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__0(v_cls_4223_, v___x_4247_, v___y_4165_, v___y_4166_, v___y_4167_, v___y_4168_);
if (lean_obj_tag(v___x_4248_) == 0)
{
lean_object* v_a_4249_; lean_object* v___x_4250_; 
v_a_4249_ = lean_ctor_get(v___x_4248_, 0);
lean_inc(v_a_4249_);
lean_dec_ref_known(v___x_4248_, 1);
lean_inc(v___x_4224_);
v___x_4250_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__1___redArg___lam__0(v___x_4224_, v_fst_4206_, v_snd_4207_, v_fst_4202_, v_a_4249_, v___y_4165_, v___y_4166_, v___y_4167_, v___y_4168_);
v___y_4176_ = v___x_4250_;
goto v___jp_4175_;
}
else
{
lean_object* v_a_4251_; lean_object* v___x_4253_; uint8_t v_isShared_4254_; uint8_t v_isSharedCheck_4258_; 
lean_dec(v_snd_4207_);
lean_dec(v_fst_4206_);
lean_dec(v_fst_4202_);
lean_dec(v_a_4163_);
v_a_4251_ = lean_ctor_get(v___x_4248_, 0);
v_isSharedCheck_4258_ = !lean_is_exclusive(v___x_4248_);
if (v_isSharedCheck_4258_ == 0)
{
v___x_4253_ = v___x_4248_;
v_isShared_4254_ = v_isSharedCheck_4258_;
goto v_resetjp_4252_;
}
else
{
lean_inc(v_a_4251_);
lean_dec(v___x_4248_);
v___x_4253_ = lean_box(0);
v_isShared_4254_ = v_isSharedCheck_4258_;
goto v_resetjp_4252_;
}
v_resetjp_4252_:
{
lean_object* v___x_4256_; 
if (v_isShared_4254_ == 0)
{
v___x_4256_ = v___x_4253_;
goto v_reusejp_4255_;
}
else
{
lean_object* v_reuseFailAlloc_4257_; 
v_reuseFailAlloc_4257_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4257_, 0, v_a_4251_);
v___x_4256_ = v_reuseFailAlloc_4257_;
goto v_reusejp_4255_;
}
v_reusejp_4255_:
{
return v___x_4256_;
}
}
}
}
}
}
}
v___jp_4259_:
{
if (v___y_4260_ == 0)
{
lean_dec(v___x_4229_);
goto v___jp_4212_;
}
else
{
uint8_t v___x_4261_; 
v___x_4261_ = lean_nat_dec_lt(v___x_4229_, v_fst_4206_);
if (v___x_4261_ == 0)
{
lean_dec(v___x_4229_);
goto v___jp_4212_;
}
else
{
lean_del_object(v___x_4209_);
lean_del_object(v___x_4204_);
lean_del_object(v___x_4199_);
goto v___jp_4231_;
}
}
}
v___jp_4262_:
{
if (v___x_4228_ == 0)
{
uint8_t v___x_4263_; 
v___x_4263_ = lean_unbox(v_snd_4207_);
if (v___x_4263_ == 0)
{
v___y_4260_ = v___x_4195_;
goto v___jp_4259_;
}
else
{
v___y_4260_ = v___x_4228_;
goto v___jp_4259_;
}
}
else
{
uint8_t v___x_4264_; 
v___x_4264_ = lean_unbox(v_snd_4207_);
v___y_4260_ = v___x_4264_;
goto v___jp_4259_;
}
}
}
}
}
}
v___jp_4170_:
{
lean_object* v___x_4172_; lean_object* v___x_4173_; 
v___x_4172_ = lean_unsigned_to_nat(1u);
v___x_4173_ = lean_nat_add(v_a_4163_, v___x_4172_);
lean_dec(v_a_4163_);
v_a_4163_ = v___x_4173_;
v_b_4164_ = v_a_4171_;
goto _start;
}
v___jp_4175_:
{
if (lean_obj_tag(v___y_4176_) == 0)
{
lean_object* v_a_4177_; lean_object* v___x_4179_; uint8_t v_isShared_4180_; uint8_t v_isSharedCheck_4186_; 
v_a_4177_ = lean_ctor_get(v___y_4176_, 0);
v_isSharedCheck_4186_ = !lean_is_exclusive(v___y_4176_);
if (v_isSharedCheck_4186_ == 0)
{
v___x_4179_ = v___y_4176_;
v_isShared_4180_ = v_isSharedCheck_4186_;
goto v_resetjp_4178_;
}
else
{
lean_inc(v_a_4177_);
lean_dec(v___y_4176_);
v___x_4179_ = lean_box(0);
v_isShared_4180_ = v_isSharedCheck_4186_;
goto v_resetjp_4178_;
}
v_resetjp_4178_:
{
if (lean_obj_tag(v_a_4177_) == 0)
{
lean_object* v_a_4181_; lean_object* v___x_4183_; 
lean_dec(v_a_4163_);
v_a_4181_ = lean_ctor_get(v_a_4177_, 0);
lean_inc(v_a_4181_);
lean_dec_ref_known(v_a_4177_, 1);
if (v_isShared_4180_ == 0)
{
lean_ctor_set(v___x_4179_, 0, v_a_4181_);
v___x_4183_ = v___x_4179_;
goto v_reusejp_4182_;
}
else
{
lean_object* v_reuseFailAlloc_4184_; 
v_reuseFailAlloc_4184_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4184_, 0, v_a_4181_);
v___x_4183_ = v_reuseFailAlloc_4184_;
goto v_reusejp_4182_;
}
v_reusejp_4182_:
{
return v___x_4183_;
}
}
else
{
lean_object* v_a_4185_; 
lean_del_object(v___x_4179_);
v_a_4185_ = lean_ctor_get(v_a_4177_, 0);
lean_inc(v_a_4185_);
lean_dec_ref_known(v_a_4177_, 1);
v_a_4171_ = v_a_4185_;
goto v___jp_4170_;
}
}
}
else
{
lean_object* v_a_4187_; lean_object* v___x_4189_; uint8_t v_isShared_4190_; uint8_t v_isSharedCheck_4194_; 
lean_dec(v_a_4163_);
v_a_4187_ = lean_ctor_get(v___y_4176_, 0);
v_isSharedCheck_4194_ = !lean_is_exclusive(v___y_4176_);
if (v_isSharedCheck_4194_ == 0)
{
v___x_4189_ = v___y_4176_;
v_isShared_4190_ = v_isSharedCheck_4194_;
goto v_resetjp_4188_;
}
else
{
lean_inc(v_a_4187_);
lean_dec(v___y_4176_);
v___x_4189_ = lean_box(0);
v_isShared_4190_ = v_isSharedCheck_4194_;
goto v_resetjp_4188_;
}
v_resetjp_4188_:
{
lean_object* v___x_4192_; 
if (v_isShared_4190_ == 0)
{
v___x_4192_ = v___x_4189_;
goto v_reusejp_4191_;
}
else
{
lean_object* v_reuseFailAlloc_4193_; 
v_reuseFailAlloc_4193_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4193_, 0, v_a_4187_);
v___x_4192_ = v_reuseFailAlloc_4193_;
goto v_reusejp_4191_;
}
v_reusejp_4191_:
{
return v___x_4192_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__1___redArg___boxed(lean_object* v_upperBound_4270_, lean_object* v___y_4271_, lean_object* v_a_4272_, lean_object* v_b_4273_, lean_object* v___y_4274_, lean_object* v___y_4275_, lean_object* v___y_4276_, lean_object* v___y_4277_, lean_object* v___y_4278_){
_start:
{
lean_object* v_res_4279_; 
v_res_4279_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__1___redArg(v_upperBound_4270_, v___y_4271_, v_a_4272_, v_b_4273_, v___y_4274_, v___y_4275_, v___y_4276_, v___y_4277_);
lean_dec(v___y_4277_);
lean_dec_ref(v___y_4276_);
lean_dec(v___y_4275_);
lean_dec_ref(v___y_4274_);
lean_dec_ref(v___y_4271_);
lean_dec(v_upperBound_4270_);
return v_res_4279_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__4(lean_object* v_as_4280_, size_t v_i_4281_, size_t v_stop_4282_, lean_object* v_b_4283_){
_start:
{
lean_object* v___y_4285_; uint8_t v___x_4289_; 
v___x_4289_ = lean_usize_dec_eq(v_i_4281_, v_stop_4282_);
if (v___x_4289_ == 0)
{
lean_object* v___x_4290_; uint8_t v___x_4293_; 
v___x_4290_ = lean_array_uget_borrowed(v_as_4280_, v_i_4281_);
v___x_4293_ = l_Lean_Elab_Tactic_Omega_Problem_FourierMotzkinData_isEmpty(v___x_4290_);
if (v___x_4293_ == 0)
{
goto v___jp_4291_;
}
else
{
if (v___x_4289_ == 0)
{
v___y_4285_ = v_b_4283_;
goto v___jp_4284_;
}
else
{
goto v___jp_4291_;
}
}
v___jp_4291_:
{
lean_object* v___x_4292_; 
lean_inc(v___x_4290_);
v___x_4292_ = lean_array_push(v_b_4283_, v___x_4290_);
v___y_4285_ = v___x_4292_;
goto v___jp_4284_;
}
}
else
{
return v_b_4283_;
}
v___jp_4284_:
{
size_t v___x_4286_; size_t v___x_4287_; 
v___x_4286_ = ((size_t)1ULL);
v___x_4287_ = lean_usize_add(v_i_4281_, v___x_4286_);
v_i_4281_ = v___x_4287_;
v_b_4283_ = v___y_4285_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__4___boxed(lean_object* v_as_4294_, lean_object* v_i_4295_, lean_object* v_stop_4296_, lean_object* v_b_4297_){
_start:
{
size_t v_i_boxed_4298_; size_t v_stop_boxed_4299_; lean_object* v_res_4300_; 
v_i_boxed_4298_ = lean_unbox_usize(v_i_4295_);
lean_dec(v_i_4295_);
v_stop_boxed_4299_ = lean_unbox_usize(v_stop_4296_);
lean_dec(v_stop_4296_);
v_res_4300_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__4(v_as_4294_, v_i_boxed_4298_, v_stop_boxed_4299_, v_b_4297_);
lean_dec_ref(v_as_4294_);
return v_res_4300_;
}
}
static lean_object* _init_l_List_mapTR_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__3___closed__2(void){
_start:
{
lean_object* v___x_4304_; lean_object* v___x_4305_; 
v___x_4304_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__3___closed__1));
v___x_4305_ = l_Lean_MessageData_ofFormat(v___x_4304_);
return v___x_4305_;
}
}
static lean_object* _init_l_List_mapTR_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__3___closed__3(void){
_start:
{
lean_object* v___x_4306_; lean_object* v___x_4307_; 
v___x_4306_ = lean_box(1);
v___x_4307_ = l_Lean_MessageData_ofFormat(v___x_4306_);
return v___x_4307_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__3(lean_object* v_a_4309_, lean_object* v_a_4310_){
_start:
{
if (lean_obj_tag(v_a_4309_) == 0)
{
lean_object* v___x_4311_; 
v___x_4311_ = l_List_reverse___redArg(v_a_4310_);
return v___x_4311_;
}
else
{
lean_object* v_head_4312_; lean_object* v_snd_4313_; lean_object* v_tail_4314_; lean_object* v___x_4316_; uint8_t v_isShared_4317_; uint8_t v_isSharedCheck_4361_; 
v_head_4312_ = lean_ctor_get(v_a_4309_, 0);
lean_inc(v_head_4312_);
v_snd_4313_ = lean_ctor_get(v_head_4312_, 1);
lean_inc(v_snd_4313_);
v_tail_4314_ = lean_ctor_get(v_a_4309_, 1);
v_isSharedCheck_4361_ = !lean_is_exclusive(v_a_4309_);
if (v_isSharedCheck_4361_ == 0)
{
lean_object* v_unused_4362_; 
v_unused_4362_ = lean_ctor_get(v_a_4309_, 0);
lean_dec(v_unused_4362_);
v___x_4316_ = v_a_4309_;
v_isShared_4317_ = v_isSharedCheck_4361_;
goto v_resetjp_4315_;
}
else
{
lean_inc(v_tail_4314_);
lean_dec(v_a_4309_);
v___x_4316_ = lean_box(0);
v_isShared_4317_ = v_isSharedCheck_4361_;
goto v_resetjp_4315_;
}
v_resetjp_4315_:
{
lean_object* v_fst_4318_; lean_object* v___x_4320_; uint8_t v_isShared_4321_; uint8_t v_isSharedCheck_4359_; 
v_fst_4318_ = lean_ctor_get(v_head_4312_, 0);
v_isSharedCheck_4359_ = !lean_is_exclusive(v_head_4312_);
if (v_isSharedCheck_4359_ == 0)
{
lean_object* v_unused_4360_; 
v_unused_4360_ = lean_ctor_get(v_head_4312_, 1);
lean_dec(v_unused_4360_);
v___x_4320_ = v_head_4312_;
v_isShared_4321_ = v_isSharedCheck_4359_;
goto v_resetjp_4319_;
}
else
{
lean_inc(v_fst_4318_);
lean_dec(v_head_4312_);
v___x_4320_ = lean_box(0);
v_isShared_4321_ = v_isSharedCheck_4359_;
goto v_resetjp_4319_;
}
v_resetjp_4319_:
{
lean_object* v_fst_4322_; lean_object* v_snd_4323_; lean_object* v___x_4325_; uint8_t v_isShared_4326_; uint8_t v_isSharedCheck_4358_; 
v_fst_4322_ = lean_ctor_get(v_snd_4313_, 0);
v_snd_4323_ = lean_ctor_get(v_snd_4313_, 1);
v_isSharedCheck_4358_ = !lean_is_exclusive(v_snd_4313_);
if (v_isSharedCheck_4358_ == 0)
{
v___x_4325_ = v_snd_4313_;
v_isShared_4326_ = v_isSharedCheck_4358_;
goto v_resetjp_4324_;
}
else
{
lean_inc(v_snd_4323_);
lean_inc(v_fst_4322_);
lean_dec(v_snd_4313_);
v___x_4325_ = lean_box(0);
v_isShared_4326_ = v_isSharedCheck_4358_;
goto v_resetjp_4324_;
}
v_resetjp_4324_:
{
lean_object* v___x_4327_; lean_object* v___x_4328_; lean_object* v___x_4329_; lean_object* v___x_4330_; lean_object* v___x_4332_; 
v___x_4327_ = l_Nat_reprFast(v_fst_4318_);
v___x_4328_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4328_, 0, v___x_4327_);
v___x_4329_ = l_Lean_MessageData_ofFormat(v___x_4328_);
v___x_4330_ = lean_obj_once(&l_List_mapTR_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__3___closed__2, &l_List_mapTR_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__3___closed__2_once, _init_l_List_mapTR_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__3___closed__2);
if (v_isShared_4326_ == 0)
{
lean_ctor_set_tag(v___x_4325_, 7);
lean_ctor_set(v___x_4325_, 1, v___x_4330_);
lean_ctor_set(v___x_4325_, 0, v___x_4329_);
v___x_4332_ = v___x_4325_;
goto v_reusejp_4331_;
}
else
{
lean_object* v_reuseFailAlloc_4357_; 
v_reuseFailAlloc_4357_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4357_, 0, v___x_4329_);
lean_ctor_set(v_reuseFailAlloc_4357_, 1, v___x_4330_);
v___x_4332_ = v_reuseFailAlloc_4357_;
goto v_reusejp_4331_;
}
v_reusejp_4331_:
{
lean_object* v___x_4333_; lean_object* v___x_4335_; 
v___x_4333_ = lean_obj_once(&l_List_mapTR_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__3___closed__3, &l_List_mapTR_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__3___closed__3_once, _init_l_List_mapTR_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__3___closed__3);
if (v_isShared_4321_ == 0)
{
lean_ctor_set_tag(v___x_4320_, 7);
lean_ctor_set(v___x_4320_, 1, v___x_4333_);
lean_ctor_set(v___x_4320_, 0, v___x_4332_);
v___x_4335_ = v___x_4320_;
goto v_reusejp_4334_;
}
else
{
lean_object* v_reuseFailAlloc_4356_; 
v_reuseFailAlloc_4356_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4356_, 0, v___x_4332_);
lean_ctor_set(v_reuseFailAlloc_4356_, 1, v___x_4333_);
v___x_4335_ = v_reuseFailAlloc_4356_;
goto v_reusejp_4334_;
}
v_reusejp_4334_:
{
lean_object* v___x_4336_; lean_object* v___x_4337_; lean_object* v___x_4338_; lean_object* v___x_4339_; lean_object* v___x_4340_; lean_object* v___y_4342_; uint8_t v___x_4353_; 
v___x_4336_ = l_Nat_reprFast(v_fst_4322_);
v___x_4337_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4337_, 0, v___x_4336_);
v___x_4338_ = l_Lean_MessageData_ofFormat(v___x_4337_);
v___x_4339_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4339_, 0, v___x_4338_);
lean_ctor_set(v___x_4339_, 1, v___x_4330_);
v___x_4340_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4340_, 0, v___x_4339_);
lean_ctor_set(v___x_4340_, 1, v___x_4333_);
v___x_4353_ = lean_unbox(v_snd_4323_);
lean_dec(v_snd_4323_);
if (v___x_4353_ == 0)
{
lean_object* v___x_4354_; 
v___x_4354_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__3___closed__4));
v___y_4342_ = v___x_4354_;
goto v___jp_4341_;
}
else
{
lean_object* v___x_4355_; 
v___x_4355_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__4));
v___y_4342_ = v___x_4355_;
goto v___jp_4341_;
}
v___jp_4341_:
{
lean_object* v___x_4343_; lean_object* v___x_4344_; lean_object* v___x_4345_; lean_object* v___x_4346_; lean_object* v___x_4347_; lean_object* v___x_4348_; lean_object* v___x_4350_; 
lean_inc_ref(v___y_4342_);
v___x_4343_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4343_, 0, v___y_4342_);
v___x_4344_ = l_Lean_MessageData_ofFormat(v___x_4343_);
v___x_4345_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4345_, 0, v___x_4340_);
lean_ctor_set(v___x_4345_, 1, v___x_4344_);
v___x_4346_ = l_Lean_MessageData_paren(v___x_4345_);
v___x_4347_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4347_, 0, v___x_4335_);
lean_ctor_set(v___x_4347_, 1, v___x_4346_);
v___x_4348_ = l_Lean_MessageData_paren(v___x_4347_);
if (v_isShared_4317_ == 0)
{
lean_ctor_set(v___x_4316_, 1, v_a_4310_);
lean_ctor_set(v___x_4316_, 0, v___x_4348_);
v___x_4350_ = v___x_4316_;
goto v_reusejp_4349_;
}
else
{
lean_object* v_reuseFailAlloc_4352_; 
v_reuseFailAlloc_4352_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4352_, 0, v___x_4348_);
lean_ctor_set(v_reuseFailAlloc_4352_, 1, v_a_4310_);
v___x_4350_ = v_reuseFailAlloc_4352_;
goto v_reusejp_4349_;
}
v_reusejp_4349_:
{
v_a_4309_ = v_tail_4314_;
v_a_4310_ = v___x_4350_;
goto _start;
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
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__2(size_t v_sz_4363_, size_t v_i_4364_, lean_object* v_bs_4365_){
_start:
{
uint8_t v___x_4366_; 
v___x_4366_ = lean_usize_dec_lt(v_i_4364_, v_sz_4363_);
if (v___x_4366_ == 0)
{
return v_bs_4365_;
}
else
{
lean_object* v_v_4367_; lean_object* v_var_4368_; lean_object* v___x_4369_; lean_object* v_bs_x27_4370_; lean_object* v___x_4371_; uint8_t v___x_4372_; lean_object* v___x_4373_; lean_object* v___x_4374_; lean_object* v___x_4375_; size_t v___x_4376_; size_t v___x_4377_; lean_object* v___x_4378_; 
v_v_4367_ = lean_array_uget(v_bs_4365_, v_i_4364_);
v_var_4368_ = lean_ctor_get(v_v_4367_, 0);
lean_inc(v_var_4368_);
v___x_4369_ = lean_unsigned_to_nat(0u);
v_bs_x27_4370_ = lean_array_uset(v_bs_4365_, v_i_4364_, v___x_4369_);
v___x_4371_ = l_Lean_Elab_Tactic_Omega_Problem_FourierMotzkinData_size(v_v_4367_);
v___x_4372_ = l_Lean_Elab_Tactic_Omega_Problem_FourierMotzkinData_exact(v_v_4367_);
lean_dec(v_v_4367_);
v___x_4373_ = lean_box(v___x_4372_);
v___x_4374_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4374_, 0, v___x_4371_);
lean_ctor_set(v___x_4374_, 1, v___x_4373_);
v___x_4375_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4375_, 0, v_var_4368_);
lean_ctor_set(v___x_4375_, 1, v___x_4374_);
v___x_4376_ = ((size_t)1ULL);
v___x_4377_ = lean_usize_add(v_i_4364_, v___x_4376_);
v___x_4378_ = lean_array_uset(v_bs_x27_4370_, v_i_4364_, v___x_4375_);
v_i_4364_ = v___x_4377_;
v_bs_4365_ = v___x_4378_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__2___boxed(lean_object* v_sz_4380_, lean_object* v_i_4381_, lean_object* v_bs_4382_){
_start:
{
size_t v_sz_boxed_4383_; size_t v_i_boxed_4384_; lean_object* v_res_4385_; 
v_sz_boxed_4383_ = lean_unbox_usize(v_sz_4380_);
lean_dec(v_sz_4380_);
v_i_boxed_4384_ = lean_unbox_usize(v_i_4381_);
lean_dec(v_i_4381_);
v_res_4385_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__2(v_sz_boxed_4383_, v_i_boxed_4384_, v_bs_4382_);
return v_res_4385_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect___closed__1(void){
_start:
{
lean_object* v___x_4387_; lean_object* v___x_4388_; 
v___x_4387_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect___closed__0));
v___x_4388_ = l_Lean_stringToMessageData(v___x_4387_);
return v___x_4388_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect___closed__4(void){
_start:
{
lean_object* v___x_4392_; lean_object* v___x_4393_; 
v___x_4392_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect___closed__3));
v___x_4393_ = l_Lean_stringToMessageData(v___x_4392_);
return v___x_4393_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect(lean_object* v_data_4394_, lean_object* v___y_4395_, lean_object* v___y_4396_, lean_object* v___y_4397_, lean_object* v___y_4398_){
_start:
{
lean_object* v___x_4400_; lean_object* v___y_4402_; lean_object* v___y_4403_; lean_object* v_bestIdx_4406_; lean_object* v___y_4408_; lean_object* v___y_4409_; lean_object* v___y_4410_; lean_object* v___y_4411_; lean_object* v___y_4412_; lean_object* v___y_4413_; lean_object* v___y_4414_; lean_object* v___y_4534_; lean_object* v___x_4558_; lean_object* v___x_4559_; uint8_t v___x_4560_; 
v___x_4400_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Problem_instInhabitedFourierMotzkinData_default));
v_bestIdx_4406_ = lean_unsigned_to_nat(0u);
v___x_4558_ = lean_array_get_size(v_data_4394_);
v___x_4559_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinData___closed__0));
v___x_4560_ = lean_nat_dec_lt(v_bestIdx_4406_, v___x_4558_);
if (v___x_4560_ == 0)
{
v___y_4534_ = v___x_4559_;
goto v___jp_4533_;
}
else
{
uint8_t v___x_4561_; 
v___x_4561_ = lean_nat_dec_le(v___x_4558_, v___x_4558_);
if (v___x_4561_ == 0)
{
if (v___x_4560_ == 0)
{
v___y_4534_ = v___x_4559_;
goto v___jp_4533_;
}
else
{
size_t v___x_4562_; size_t v___x_4563_; lean_object* v___x_4564_; 
v___x_4562_ = ((size_t)0ULL);
v___x_4563_ = lean_usize_of_nat(v___x_4558_);
v___x_4564_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__4(v_data_4394_, v___x_4562_, v___x_4563_, v___x_4559_);
v___y_4534_ = v___x_4564_;
goto v___jp_4533_;
}
}
else
{
size_t v___x_4565_; size_t v___x_4566_; lean_object* v___x_4567_; 
v___x_4565_ = ((size_t)0ULL);
v___x_4566_ = lean_usize_of_nat(v___x_4558_);
v___x_4567_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__4(v_data_4394_, v___x_4565_, v___x_4566_, v___x_4559_);
v___y_4534_ = v___x_4567_;
goto v___jp_4533_;
}
}
v___jp_4401_:
{
lean_object* v___x_4404_; lean_object* v___x_4405_; 
v___x_4404_ = lean_array_get(v___x_4400_, v___y_4402_, v___y_4403_);
lean_dec(v___y_4403_);
lean_dec_ref(v___y_4402_);
v___x_4405_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4405_, 0, v___x_4404_);
return v___x_4405_;
}
v___jp_4407_:
{
lean_object* v___x_4415_; lean_object* v___x_4416_; uint8_t v___x_4417_; 
v___x_4415_ = lean_array_get_borrowed(v___x_4400_, v___y_4409_, v_bestIdx_4406_);
v___x_4416_ = l_Lean_Elab_Tactic_Omega_Problem_FourierMotzkinData_size(v___x_4415_);
v___x_4417_ = lean_nat_dec_eq(v___x_4416_, v_bestIdx_4406_);
if (v___x_4417_ == 0)
{
lean_object* v___x_4418_; lean_object* v___x_4419_; uint8_t v___x_4420_; lean_object* v___x_4421_; lean_object* v___x_4422_; lean_object* v___x_4423_; lean_object* v___x_4424_; lean_object* v___x_4425_; lean_object* v___x_4426_; 
v___x_4418_ = lean_unsigned_to_nat(1u);
v___x_4419_ = lean_array_get_size(v___y_4409_);
v___x_4420_ = l_Lean_Elab_Tactic_Omega_Problem_FourierMotzkinData_exact(v___x_4415_);
v___x_4421_ = lean_box(0);
v___x_4422_ = lean_box(v___x_4420_);
v___x_4423_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4423_, 0, v___x_4416_);
lean_ctor_set(v___x_4423_, 1, v___x_4422_);
v___x_4424_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4424_, 0, v_bestIdx_4406_);
lean_ctor_set(v___x_4424_, 1, v___x_4423_);
v___x_4425_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4425_, 0, v___x_4421_);
lean_ctor_set(v___x_4425_, 1, v___x_4424_);
v___x_4426_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__1___redArg(v___x_4419_, v___y_4409_, v___x_4418_, v___x_4425_, v___y_4411_, v___y_4412_, v___y_4413_, v___y_4414_);
if (lean_obj_tag(v___x_4426_) == 0)
{
lean_object* v_a_4427_; lean_object* v___x_4429_; uint8_t v_isShared_4430_; uint8_t v_isSharedCheck_4481_; 
v_a_4427_ = lean_ctor_get(v___x_4426_, 0);
v_isSharedCheck_4481_ = !lean_is_exclusive(v___x_4426_);
if (v_isSharedCheck_4481_ == 0)
{
v___x_4429_ = v___x_4426_;
v_isShared_4430_ = v_isSharedCheck_4481_;
goto v_resetjp_4428_;
}
else
{
lean_inc(v_a_4427_);
lean_dec(v___x_4426_);
v___x_4429_ = lean_box(0);
v_isShared_4430_ = v_isSharedCheck_4481_;
goto v_resetjp_4428_;
}
v_resetjp_4428_:
{
lean_object* v_fst_4431_; 
v_fst_4431_ = lean_ctor_get(v_a_4427_, 0);
if (lean_obj_tag(v_fst_4431_) == 0)
{
lean_object* v_snd_4432_; lean_object* v___x_4434_; uint8_t v_isShared_4435_; uint8_t v_isSharedCheck_4475_; 
lean_del_object(v___x_4429_);
v_snd_4432_ = lean_ctor_get(v_a_4427_, 1);
v_isSharedCheck_4475_ = !lean_is_exclusive(v_a_4427_);
if (v_isSharedCheck_4475_ == 0)
{
lean_object* v_unused_4476_; 
v_unused_4476_ = lean_ctor_get(v_a_4427_, 0);
lean_dec(v_unused_4476_);
v___x_4434_ = v_a_4427_;
v_isShared_4435_ = v_isSharedCheck_4475_;
goto v_resetjp_4433_;
}
else
{
lean_inc(v_snd_4432_);
lean_dec(v_a_4427_);
v___x_4434_ = lean_box(0);
v_isShared_4435_ = v_isSharedCheck_4475_;
goto v_resetjp_4433_;
}
v_resetjp_4433_:
{
lean_object* v_fst_4436_; lean_object* v___x_4438_; uint8_t v_isShared_4439_; uint8_t v_isSharedCheck_4473_; 
v_fst_4436_ = lean_ctor_get(v_snd_4432_, 0);
v_isSharedCheck_4473_ = !lean_is_exclusive(v_snd_4432_);
if (v_isSharedCheck_4473_ == 0)
{
lean_object* v_unused_4474_; 
v_unused_4474_ = lean_ctor_get(v_snd_4432_, 1);
lean_dec(v_unused_4474_);
v___x_4438_ = v_snd_4432_;
v_isShared_4439_ = v_isSharedCheck_4473_;
goto v_resetjp_4437_;
}
else
{
lean_inc(v_fst_4436_);
lean_dec(v_snd_4432_);
v___x_4438_ = lean_box(0);
v_isShared_4439_ = v_isSharedCheck_4473_;
goto v_resetjp_4437_;
}
v_resetjp_4437_:
{
lean_object* v___x_4440_; 
lean_inc_ref(v___y_4408_);
lean_inc(v___y_4414_);
lean_inc_ref(v___y_4413_);
lean_inc(v___y_4412_);
lean_inc_ref(v___y_4411_);
v___x_4440_ = lean_apply_5(v___y_4408_, v___y_4411_, v___y_4412_, v___y_4413_, v___y_4414_, lean_box(0));
if (lean_obj_tag(v___x_4440_) == 0)
{
lean_object* v_a_4441_; uint8_t v___x_4442_; 
v_a_4441_ = lean_ctor_get(v___x_4440_, 0);
lean_inc(v_a_4441_);
lean_dec_ref_known(v___x_4440_, 1);
v___x_4442_ = lean_unbox(v_a_4441_);
lean_dec(v_a_4441_);
if (v___x_4442_ == 0)
{
lean_del_object(v___x_4438_);
lean_del_object(v___x_4434_);
lean_dec(v___y_4410_);
v___y_4402_ = v___y_4409_;
v___y_4403_ = v_fst_4436_;
goto v___jp_4401_;
}
else
{
lean_object* v___x_4443_; lean_object* v_var_4444_; lean_object* v___x_4445_; lean_object* v___x_4446_; lean_object* v___x_4447_; lean_object* v___x_4448_; lean_object* v___x_4450_; 
v___x_4443_ = lean_array_get_borrowed(v___x_4400_, v___y_4409_, v_fst_4436_);
v_var_4444_ = lean_ctor_get(v___x_4443_, 0);
v___x_4445_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__1___redArg___closed__2, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__1___redArg___closed__2_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__1___redArg___closed__2);
lean_inc(v_var_4444_);
v___x_4446_ = l_Nat_reprFast(v_var_4444_);
v___x_4447_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4447_, 0, v___x_4446_);
v___x_4448_ = l_Lean_MessageData_ofFormat(v___x_4447_);
if (v_isShared_4439_ == 0)
{
lean_ctor_set_tag(v___x_4438_, 7);
lean_ctor_set(v___x_4438_, 1, v___x_4448_);
lean_ctor_set(v___x_4438_, 0, v___x_4445_);
v___x_4450_ = v___x_4438_;
goto v_reusejp_4449_;
}
else
{
lean_object* v_reuseFailAlloc_4464_; 
v_reuseFailAlloc_4464_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4464_, 0, v___x_4445_);
lean_ctor_set(v_reuseFailAlloc_4464_, 1, v___x_4448_);
v___x_4450_ = v_reuseFailAlloc_4464_;
goto v_reusejp_4449_;
}
v_reusejp_4449_:
{
lean_object* v___x_4451_; lean_object* v___x_4453_; 
v___x_4451_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect___closed__1, &l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect___closed__1_once, _init_l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect___closed__1);
if (v_isShared_4435_ == 0)
{
lean_ctor_set_tag(v___x_4434_, 7);
lean_ctor_set(v___x_4434_, 1, v___x_4451_);
lean_ctor_set(v___x_4434_, 0, v___x_4450_);
v___x_4453_ = v___x_4434_;
goto v_reusejp_4452_;
}
else
{
lean_object* v_reuseFailAlloc_4463_; 
v_reuseFailAlloc_4463_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4463_, 0, v___x_4450_);
lean_ctor_set(v_reuseFailAlloc_4463_, 1, v___x_4451_);
v___x_4453_ = v_reuseFailAlloc_4463_;
goto v_reusejp_4452_;
}
v_reusejp_4452_:
{
lean_object* v___x_4454_; 
v___x_4454_ = l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__0(v___y_4410_, v___x_4453_, v___y_4411_, v___y_4412_, v___y_4413_, v___y_4414_);
if (lean_obj_tag(v___x_4454_) == 0)
{
lean_dec_ref_known(v___x_4454_, 1);
v___y_4402_ = v___y_4409_;
v___y_4403_ = v_fst_4436_;
goto v___jp_4401_;
}
else
{
lean_object* v_a_4455_; lean_object* v___x_4457_; uint8_t v_isShared_4458_; uint8_t v_isSharedCheck_4462_; 
lean_dec(v_fst_4436_);
lean_dec_ref(v___y_4409_);
v_a_4455_ = lean_ctor_get(v___x_4454_, 0);
v_isSharedCheck_4462_ = !lean_is_exclusive(v___x_4454_);
if (v_isSharedCheck_4462_ == 0)
{
v___x_4457_ = v___x_4454_;
v_isShared_4458_ = v_isSharedCheck_4462_;
goto v_resetjp_4456_;
}
else
{
lean_inc(v_a_4455_);
lean_dec(v___x_4454_);
v___x_4457_ = lean_box(0);
v_isShared_4458_ = v_isSharedCheck_4462_;
goto v_resetjp_4456_;
}
v_resetjp_4456_:
{
lean_object* v___x_4460_; 
if (v_isShared_4458_ == 0)
{
v___x_4460_ = v___x_4457_;
goto v_reusejp_4459_;
}
else
{
lean_object* v_reuseFailAlloc_4461_; 
v_reuseFailAlloc_4461_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4461_, 0, v_a_4455_);
v___x_4460_ = v_reuseFailAlloc_4461_;
goto v_reusejp_4459_;
}
v_reusejp_4459_:
{
return v___x_4460_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_4465_; lean_object* v___x_4467_; uint8_t v_isShared_4468_; uint8_t v_isSharedCheck_4472_; 
lean_del_object(v___x_4438_);
lean_dec(v_fst_4436_);
lean_del_object(v___x_4434_);
lean_dec(v___y_4410_);
lean_dec_ref(v___y_4409_);
v_a_4465_ = lean_ctor_get(v___x_4440_, 0);
v_isSharedCheck_4472_ = !lean_is_exclusive(v___x_4440_);
if (v_isSharedCheck_4472_ == 0)
{
v___x_4467_ = v___x_4440_;
v_isShared_4468_ = v_isSharedCheck_4472_;
goto v_resetjp_4466_;
}
else
{
lean_inc(v_a_4465_);
lean_dec(v___x_4440_);
v___x_4467_ = lean_box(0);
v_isShared_4468_ = v_isSharedCheck_4472_;
goto v_resetjp_4466_;
}
v_resetjp_4466_:
{
lean_object* v___x_4470_; 
if (v_isShared_4468_ == 0)
{
v___x_4470_ = v___x_4467_;
goto v_reusejp_4469_;
}
else
{
lean_object* v_reuseFailAlloc_4471_; 
v_reuseFailAlloc_4471_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4471_, 0, v_a_4465_);
v___x_4470_ = v_reuseFailAlloc_4471_;
goto v_reusejp_4469_;
}
v_reusejp_4469_:
{
return v___x_4470_;
}
}
}
}
}
}
else
{
lean_object* v_val_4477_; lean_object* v___x_4479_; 
lean_inc_ref(v_fst_4431_);
lean_dec(v_a_4427_);
lean_dec(v___y_4410_);
lean_dec_ref(v___y_4409_);
v_val_4477_ = lean_ctor_get(v_fst_4431_, 0);
lean_inc(v_val_4477_);
lean_dec_ref_known(v_fst_4431_, 1);
if (v_isShared_4430_ == 0)
{
lean_ctor_set(v___x_4429_, 0, v_val_4477_);
v___x_4479_ = v___x_4429_;
goto v_reusejp_4478_;
}
else
{
lean_object* v_reuseFailAlloc_4480_; 
v_reuseFailAlloc_4480_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4480_, 0, v_val_4477_);
v___x_4479_ = v_reuseFailAlloc_4480_;
goto v_reusejp_4478_;
}
v_reusejp_4478_:
{
return v___x_4479_;
}
}
}
}
else
{
lean_object* v_a_4482_; lean_object* v___x_4484_; uint8_t v_isShared_4485_; uint8_t v_isSharedCheck_4489_; 
lean_dec(v___y_4410_);
lean_dec_ref(v___y_4409_);
v_a_4482_ = lean_ctor_get(v___x_4426_, 0);
v_isSharedCheck_4489_ = !lean_is_exclusive(v___x_4426_);
if (v_isSharedCheck_4489_ == 0)
{
v___x_4484_ = v___x_4426_;
v_isShared_4485_ = v_isSharedCheck_4489_;
goto v_resetjp_4483_;
}
else
{
lean_inc(v_a_4482_);
lean_dec(v___x_4426_);
v___x_4484_ = lean_box(0);
v_isShared_4485_ = v_isSharedCheck_4489_;
goto v_resetjp_4483_;
}
v_resetjp_4483_:
{
lean_object* v___x_4487_; 
if (v_isShared_4485_ == 0)
{
v___x_4487_ = v___x_4484_;
goto v_reusejp_4486_;
}
else
{
lean_object* v_reuseFailAlloc_4488_; 
v_reuseFailAlloc_4488_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4488_, 0, v_a_4482_);
v___x_4487_ = v_reuseFailAlloc_4488_;
goto v_reusejp_4486_;
}
v_reusejp_4486_:
{
return v___x_4487_;
}
}
}
}
else
{
lean_object* v___x_4490_; 
lean_inc(v___x_4415_);
lean_dec(v___x_4416_);
lean_dec_ref(v___y_4409_);
lean_inc_ref(v___y_4408_);
lean_inc(v___y_4414_);
lean_inc_ref(v___y_4413_);
lean_inc(v___y_4412_);
lean_inc_ref(v___y_4411_);
v___x_4490_ = lean_apply_5(v___y_4408_, v___y_4411_, v___y_4412_, v___y_4413_, v___y_4414_, lean_box(0));
if (lean_obj_tag(v___x_4490_) == 0)
{
lean_object* v_a_4491_; lean_object* v___x_4493_; uint8_t v_isShared_4494_; uint8_t v_isSharedCheck_4524_; 
v_a_4491_ = lean_ctor_get(v___x_4490_, 0);
v_isSharedCheck_4524_ = !lean_is_exclusive(v___x_4490_);
if (v_isSharedCheck_4524_ == 0)
{
v___x_4493_ = v___x_4490_;
v_isShared_4494_ = v_isSharedCheck_4524_;
goto v_resetjp_4492_;
}
else
{
lean_inc(v_a_4491_);
lean_dec(v___x_4490_);
v___x_4493_ = lean_box(0);
v_isShared_4494_ = v_isSharedCheck_4524_;
goto v_resetjp_4492_;
}
v_resetjp_4492_:
{
uint8_t v___x_4495_; 
v___x_4495_ = lean_unbox(v_a_4491_);
lean_dec(v_a_4491_);
if (v___x_4495_ == 0)
{
lean_object* v___x_4497_; 
lean_dec(v___y_4410_);
if (v_isShared_4494_ == 0)
{
lean_ctor_set(v___x_4493_, 0, v___x_4415_);
v___x_4497_ = v___x_4493_;
goto v_reusejp_4496_;
}
else
{
lean_object* v_reuseFailAlloc_4498_; 
v_reuseFailAlloc_4498_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4498_, 0, v___x_4415_);
v___x_4497_ = v_reuseFailAlloc_4498_;
goto v_reusejp_4496_;
}
v_reusejp_4496_:
{
return v___x_4497_;
}
}
else
{
lean_object* v_var_4499_; lean_object* v___x_4500_; lean_object* v___x_4501_; lean_object* v___x_4502_; lean_object* v___x_4503_; lean_object* v___x_4504_; lean_object* v___x_4505_; lean_object* v___x_4506_; lean_object* v___x_4507_; 
lean_del_object(v___x_4493_);
v_var_4499_ = lean_ctor_get(v___x_4415_, 0);
v___x_4500_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__1___redArg___closed__2, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__1___redArg___closed__2_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__1___redArg___closed__2);
lean_inc(v_var_4499_);
v___x_4501_ = l_Nat_reprFast(v_var_4499_);
v___x_4502_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4502_, 0, v___x_4501_);
v___x_4503_ = l_Lean_MessageData_ofFormat(v___x_4502_);
v___x_4504_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4504_, 0, v___x_4500_);
lean_ctor_set(v___x_4504_, 1, v___x_4503_);
v___x_4505_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect___closed__1, &l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect___closed__1_once, _init_l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect___closed__1);
v___x_4506_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4506_, 0, v___x_4504_);
lean_ctor_set(v___x_4506_, 1, v___x_4505_);
v___x_4507_ = l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__0(v___y_4410_, v___x_4506_, v___y_4411_, v___y_4412_, v___y_4413_, v___y_4414_);
if (lean_obj_tag(v___x_4507_) == 0)
{
lean_object* v___x_4509_; uint8_t v_isShared_4510_; uint8_t v_isSharedCheck_4514_; 
v_isSharedCheck_4514_ = !lean_is_exclusive(v___x_4507_);
if (v_isSharedCheck_4514_ == 0)
{
lean_object* v_unused_4515_; 
v_unused_4515_ = lean_ctor_get(v___x_4507_, 0);
lean_dec(v_unused_4515_);
v___x_4509_ = v___x_4507_;
v_isShared_4510_ = v_isSharedCheck_4514_;
goto v_resetjp_4508_;
}
else
{
lean_dec(v___x_4507_);
v___x_4509_ = lean_box(0);
v_isShared_4510_ = v_isSharedCheck_4514_;
goto v_resetjp_4508_;
}
v_resetjp_4508_:
{
lean_object* v___x_4512_; 
if (v_isShared_4510_ == 0)
{
lean_ctor_set(v___x_4509_, 0, v___x_4415_);
v___x_4512_ = v___x_4509_;
goto v_reusejp_4511_;
}
else
{
lean_object* v_reuseFailAlloc_4513_; 
v_reuseFailAlloc_4513_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4513_, 0, v___x_4415_);
v___x_4512_ = v_reuseFailAlloc_4513_;
goto v_reusejp_4511_;
}
v_reusejp_4511_:
{
return v___x_4512_;
}
}
}
else
{
lean_object* v_a_4516_; lean_object* v___x_4518_; uint8_t v_isShared_4519_; uint8_t v_isSharedCheck_4523_; 
lean_dec(v___x_4415_);
v_a_4516_ = lean_ctor_get(v___x_4507_, 0);
v_isSharedCheck_4523_ = !lean_is_exclusive(v___x_4507_);
if (v_isSharedCheck_4523_ == 0)
{
v___x_4518_ = v___x_4507_;
v_isShared_4519_ = v_isSharedCheck_4523_;
goto v_resetjp_4517_;
}
else
{
lean_inc(v_a_4516_);
lean_dec(v___x_4507_);
v___x_4518_ = lean_box(0);
v_isShared_4519_ = v_isSharedCheck_4523_;
goto v_resetjp_4517_;
}
v_resetjp_4517_:
{
lean_object* v___x_4521_; 
if (v_isShared_4519_ == 0)
{
v___x_4521_ = v___x_4518_;
goto v_reusejp_4520_;
}
else
{
lean_object* v_reuseFailAlloc_4522_; 
v_reuseFailAlloc_4522_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4522_, 0, v_a_4516_);
v___x_4521_ = v_reuseFailAlloc_4522_;
goto v_reusejp_4520_;
}
v_reusejp_4520_:
{
return v___x_4521_;
}
}
}
}
}
}
else
{
lean_object* v_a_4525_; lean_object* v___x_4527_; uint8_t v_isShared_4528_; uint8_t v_isSharedCheck_4532_; 
lean_dec(v___x_4415_);
lean_dec(v___y_4410_);
v_a_4525_ = lean_ctor_get(v___x_4490_, 0);
v_isSharedCheck_4532_ = !lean_is_exclusive(v___x_4490_);
if (v_isSharedCheck_4532_ == 0)
{
v___x_4527_ = v___x_4490_;
v_isShared_4528_ = v_isSharedCheck_4532_;
goto v_resetjp_4526_;
}
else
{
lean_inc(v_a_4525_);
lean_dec(v___x_4490_);
v___x_4527_ = lean_box(0);
v_isShared_4528_ = v_isSharedCheck_4532_;
goto v_resetjp_4526_;
}
v_resetjp_4526_:
{
lean_object* v___x_4530_; 
if (v_isShared_4528_ == 0)
{
v___x_4530_ = v___x_4527_;
goto v_reusejp_4529_;
}
else
{
lean_object* v_reuseFailAlloc_4531_; 
v_reuseFailAlloc_4531_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4531_, 0, v_a_4525_);
v___x_4530_ = v_reuseFailAlloc_4531_;
goto v_reusejp_4529_;
}
v_reusejp_4529_:
{
return v___x_4530_;
}
}
}
}
}
v___jp_4533_:
{
lean_object* v_cls_4535_; lean_object* v___f_4536_; lean_object* v___x_4537_; lean_object* v_a_4538_; uint8_t v___x_4539_; 
v_cls_4535_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__1_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_));
v___f_4536_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect___closed__2));
v___x_4537_ = l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect___lam__0(v_cls_4535_, v___y_4395_, v___y_4396_, v___y_4397_, v___y_4398_);
v_a_4538_ = lean_ctor_get(v___x_4537_, 0);
lean_inc(v_a_4538_);
lean_dec_ref(v___x_4537_);
v___x_4539_ = lean_unbox(v_a_4538_);
lean_dec(v_a_4538_);
if (v___x_4539_ == 0)
{
v___y_4408_ = v___f_4536_;
v___y_4409_ = v___y_4534_;
v___y_4410_ = v_cls_4535_;
v___y_4411_ = v___y_4395_;
v___y_4412_ = v___y_4396_;
v___y_4413_ = v___y_4397_;
v___y_4414_ = v___y_4398_;
goto v___jp_4407_;
}
else
{
lean_object* v___x_4540_; size_t v_sz_4541_; size_t v___x_4542_; lean_object* v___x_4543_; lean_object* v___x_4544_; lean_object* v___x_4545_; lean_object* v___x_4546_; lean_object* v___x_4547_; lean_object* v___x_4548_; lean_object* v___x_4549_; 
v___x_4540_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect___closed__4, &l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect___closed__4_once, _init_l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect___closed__4);
v_sz_4541_ = lean_array_size(v___y_4534_);
v___x_4542_ = ((size_t)0ULL);
lean_inc_ref(v___y_4534_);
v___x_4543_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__2(v_sz_4541_, v___x_4542_, v___y_4534_);
v___x_4544_ = lean_array_to_list(v___x_4543_);
v___x_4545_ = lean_box(0);
v___x_4546_ = l_List_mapTR_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__3(v___x_4544_, v___x_4545_);
v___x_4547_ = l_Lean_MessageData_ofList(v___x_4546_);
v___x_4548_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4548_, 0, v___x_4540_);
lean_ctor_set(v___x_4548_, 1, v___x_4547_);
v___x_4549_ = l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__0(v_cls_4535_, v___x_4548_, v___y_4395_, v___y_4396_, v___y_4397_, v___y_4398_);
if (lean_obj_tag(v___x_4549_) == 0)
{
lean_dec_ref_known(v___x_4549_, 1);
v___y_4408_ = v___f_4536_;
v___y_4409_ = v___y_4534_;
v___y_4410_ = v_cls_4535_;
v___y_4411_ = v___y_4395_;
v___y_4412_ = v___y_4396_;
v___y_4413_ = v___y_4397_;
v___y_4414_ = v___y_4398_;
goto v___jp_4407_;
}
else
{
lean_object* v_a_4550_; lean_object* v___x_4552_; uint8_t v_isShared_4553_; uint8_t v_isSharedCheck_4557_; 
lean_dec_ref(v___y_4534_);
v_a_4550_ = lean_ctor_get(v___x_4549_, 0);
v_isSharedCheck_4557_ = !lean_is_exclusive(v___x_4549_);
if (v_isSharedCheck_4557_ == 0)
{
v___x_4552_ = v___x_4549_;
v_isShared_4553_ = v_isSharedCheck_4557_;
goto v_resetjp_4551_;
}
else
{
lean_inc(v_a_4550_);
lean_dec(v___x_4549_);
v___x_4552_ = lean_box(0);
v_isShared_4553_ = v_isSharedCheck_4557_;
goto v_resetjp_4551_;
}
v_resetjp_4551_:
{
lean_object* v___x_4555_; 
if (v_isShared_4553_ == 0)
{
v___x_4555_ = v___x_4552_;
goto v_reusejp_4554_;
}
else
{
lean_object* v_reuseFailAlloc_4556_; 
v_reuseFailAlloc_4556_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4556_, 0, v_a_4550_);
v___x_4555_ = v_reuseFailAlloc_4556_;
goto v_reusejp_4554_;
}
v_reusejp_4554_:
{
return v___x_4555_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect___boxed(lean_object* v_data_4568_, lean_object* v___y_4569_, lean_object* v___y_4570_, lean_object* v___y_4571_, lean_object* v___y_4572_, lean_object* v___y_4573_){
_start:
{
lean_object* v_res_4574_; 
v_res_4574_ = l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect(v_data_4568_, v___y_4569_, v___y_4570_, v___y_4571_, v___y_4572_);
lean_dec(v___y_4572_);
lean_dec_ref(v___y_4571_);
lean_dec(v___y_4570_);
lean_dec_ref(v___y_4569_);
lean_dec_ref(v_data_4568_);
return v_res_4574_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__1(lean_object* v_upperBound_4575_, lean_object* v___y_4576_, lean_object* v_inst_4577_, lean_object* v_R_4578_, lean_object* v_a_4579_, lean_object* v_b_4580_, lean_object* v_c_4581_, lean_object* v___y_4582_, lean_object* v___y_4583_, lean_object* v___y_4584_, lean_object* v___y_4585_){
_start:
{
lean_object* v___x_4587_; 
v___x_4587_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__1___redArg(v_upperBound_4575_, v___y_4576_, v_a_4579_, v_b_4580_, v___y_4582_, v___y_4583_, v___y_4584_, v___y_4585_);
return v___x_4587_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__1___boxed(lean_object* v_upperBound_4588_, lean_object* v___y_4589_, lean_object* v_inst_4590_, lean_object* v_R_4591_, lean_object* v_a_4592_, lean_object* v_b_4593_, lean_object* v_c_4594_, lean_object* v___y_4595_, lean_object* v___y_4596_, lean_object* v___y_4597_, lean_object* v___y_4598_, lean_object* v___y_4599_){
_start:
{
lean_object* v_res_4600_; 
v_res_4600_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__1(v_upperBound_4588_, v___y_4589_, v_inst_4590_, v_R_4591_, v_a_4592_, v_b_4593_, v_c_4594_, v___y_4595_, v___y_4596_, v___y_4597_, v___y_4598_);
lean_dec(v___y_4598_);
lean_dec_ref(v___y_4597_);
lean_dec(v___y_4596_);
lean_dec_ref(v___y_4595_);
lean_dec_ref(v___y_4589_);
lean_dec(v_upperBound_4588_);
return v_res_4600_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkin_spec__0___redArg(lean_object* v_snd_4601_, lean_object* v_fst_4602_, lean_object* v_as_x27_4603_, lean_object* v_b_4604_){
_start:
{
if (lean_obj_tag(v_as_x27_4603_) == 0)
{
lean_object* v___x_4606_; 
lean_dec_ref(v_fst_4602_);
v___x_4606_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4606_, 0, v_b_4604_);
return v___x_4606_;
}
else
{
lean_object* v_head_4607_; lean_object* v_tail_4608_; lean_object* v_fst_4609_; lean_object* v_snd_4610_; lean_object* v___x_4611_; lean_object* v___x_4612_; lean_object* v___x_4613_; lean_object* v___x_4614_; 
v_head_4607_ = lean_ctor_get(v_as_x27_4603_, 0);
v_tail_4608_ = lean_ctor_get(v_as_x27_4603_, 1);
v_fst_4609_ = lean_ctor_get(v_head_4607_, 0);
v_snd_4610_ = lean_ctor_get(v_head_4607_, 1);
v___x_4611_ = lean_int_neg(v_snd_4601_);
lean_inc(v_fst_4609_);
lean_inc_ref(v_fst_4602_);
lean_inc(v_snd_4610_);
v___x_4612_ = l_Lean_Elab_Tactic_Omega_Fact_combo(v_snd_4610_, v_fst_4602_, v___x_4611_, v_fst_4609_);
v___x_4613_ = l_Lean_Elab_Tactic_Omega_Fact_tidy(v___x_4612_);
v___x_4614_ = l_Lean_Elab_Tactic_Omega_Problem_addConstraint(v_b_4604_, v___x_4613_);
v_as_x27_4603_ = v_tail_4608_;
v_b_4604_ = v___x_4614_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkin_spec__0___redArg___boxed(lean_object* v_snd_4616_, lean_object* v_fst_4617_, lean_object* v_as_x27_4618_, lean_object* v_b_4619_, lean_object* v___y_4620_){
_start:
{
lean_object* v_res_4621_; 
v_res_4621_ = l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkin_spec__0___redArg(v_snd_4616_, v_fst_4617_, v_as_x27_4618_, v_b_4619_);
lean_dec(v_as_x27_4618_);
lean_dec(v_snd_4616_);
return v_res_4621_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkin_spec__2___redArg(lean_object* v_upperBounds_4622_, lean_object* v_as_x27_4623_, lean_object* v_b_4624_, lean_object* v___y_4625_, lean_object* v___y_4626_, lean_object* v___y_4627_, lean_object* v___y_4628_){
_start:
{
if (lean_obj_tag(v_as_x27_4623_) == 0)
{
lean_object* v___x_4630_; 
v___x_4630_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4630_, 0, v_b_4624_);
return v___x_4630_;
}
else
{
lean_object* v_head_4631_; lean_object* v_tail_4632_; lean_object* v_fst_4633_; lean_object* v_snd_4634_; lean_object* v___x_4635_; lean_object* v_a_4636_; 
v_head_4631_ = lean_ctor_get(v_as_x27_4623_, 0);
v_tail_4632_ = lean_ctor_get(v_as_x27_4623_, 1);
v_fst_4633_ = lean_ctor_get(v_head_4631_, 0);
v_snd_4634_ = lean_ctor_get(v_head_4631_, 1);
lean_inc(v_fst_4633_);
v___x_4635_ = l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkin_spec__0___redArg(v_snd_4634_, v_fst_4633_, v_upperBounds_4622_, v_b_4624_);
v_a_4636_ = lean_ctor_get(v___x_4635_, 0);
lean_inc(v_a_4636_);
lean_dec_ref(v___x_4635_);
v_as_x27_4623_ = v_tail_4632_;
v_b_4624_ = v_a_4636_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkin_spec__2___redArg___boxed(lean_object* v_upperBounds_4638_, lean_object* v_as_x27_4639_, lean_object* v_b_4640_, lean_object* v___y_4641_, lean_object* v___y_4642_, lean_object* v___y_4643_, lean_object* v___y_4644_, lean_object* v___y_4645_){
_start:
{
lean_object* v_res_4646_; 
v_res_4646_ = l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkin_spec__2___redArg(v_upperBounds_4638_, v_as_x27_4639_, v_b_4640_, v___y_4641_, v___y_4642_, v___y_4643_, v___y_4644_);
lean_dec(v___y_4644_);
lean_dec_ref(v___y_4643_);
lean_dec(v___y_4642_);
lean_dec_ref(v___y_4641_);
lean_dec(v_as_x27_4639_);
lean_dec(v_upperBounds_4638_);
return v_res_4646_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkin_spec__1___redArg(lean_object* v_as_x27_4647_, lean_object* v_b_4648_){
_start:
{
if (lean_obj_tag(v_as_x27_4647_) == 0)
{
lean_object* v___x_4650_; 
v___x_4650_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4650_, 0, v_b_4648_);
return v___x_4650_;
}
else
{
lean_object* v_head_4651_; lean_object* v_tail_4652_; lean_object* v___x_4653_; 
v_head_4651_ = lean_ctor_get(v_as_x27_4647_, 0);
v_tail_4652_ = lean_ctor_get(v_as_x27_4647_, 1);
lean_inc(v_head_4651_);
v___x_4653_ = l_Lean_Elab_Tactic_Omega_Problem_insertConstraint(v_b_4648_, v_head_4651_);
v_as_x27_4647_ = v_tail_4652_;
v_b_4648_ = v___x_4653_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkin_spec__1___redArg___boxed(lean_object* v_as_x27_4655_, lean_object* v_b_4656_, lean_object* v___y_4657_){
_start:
{
lean_object* v_res_4658_; 
v_res_4658_ = l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkin_spec__1___redArg(v_as_x27_4655_, v_b_4656_);
lean_dec(v_as_x27_4655_);
return v_res_4658_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkin(lean_object* v_p_4659_, lean_object* v___y_4660_, lean_object* v___y_4661_, lean_object* v___y_4662_, lean_object* v___y_4663_){
_start:
{
lean_object* v_data_4665_; lean_object* v___x_4666_; 
lean_inc_ref(v_p_4659_);
v_data_4665_ = l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinData(v_p_4659_);
v___x_4666_ = l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect(v_data_4665_, v___y_4660_, v___y_4661_, v___y_4662_, v___y_4663_);
lean_dec_ref(v_data_4665_);
if (lean_obj_tag(v___x_4666_) == 0)
{
lean_object* v_a_4667_; lean_object* v_irrelevant_4668_; lean_object* v_lowerBounds_4669_; lean_object* v_upperBounds_4670_; lean_object* v_assumptions_4671_; lean_object* v_eliminations_4672_; lean_object* v___x_4674_; uint8_t v_isShared_4675_; uint8_t v_isSharedCheck_4687_; 
v_a_4667_ = lean_ctor_get(v___x_4666_, 0);
lean_inc(v_a_4667_);
lean_dec_ref_known(v___x_4666_, 1);
v_irrelevant_4668_ = lean_ctor_get(v_a_4667_, 1);
lean_inc(v_irrelevant_4668_);
v_lowerBounds_4669_ = lean_ctor_get(v_a_4667_, 2);
lean_inc(v_lowerBounds_4669_);
v_upperBounds_4670_ = lean_ctor_get(v_a_4667_, 3);
lean_inc(v_upperBounds_4670_);
lean_dec(v_a_4667_);
v_assumptions_4671_ = lean_ctor_get(v_p_4659_, 0);
v_eliminations_4672_ = lean_ctor_get(v_p_4659_, 4);
v_isSharedCheck_4687_ = !lean_is_exclusive(v_p_4659_);
if (v_isSharedCheck_4687_ == 0)
{
lean_object* v_unused_4688_; lean_object* v_unused_4689_; lean_object* v_unused_4690_; lean_object* v_unused_4691_; lean_object* v_unused_4692_; 
v_unused_4688_ = lean_ctor_get(v_p_4659_, 6);
lean_dec(v_unused_4688_);
v_unused_4689_ = lean_ctor_get(v_p_4659_, 5);
lean_dec(v_unused_4689_);
v_unused_4690_ = lean_ctor_get(v_p_4659_, 3);
lean_dec(v_unused_4690_);
v_unused_4691_ = lean_ctor_get(v_p_4659_, 2);
lean_dec(v_unused_4691_);
v_unused_4692_ = lean_ctor_get(v_p_4659_, 1);
lean_dec(v_unused_4692_);
v___x_4674_ = v_p_4659_;
v_isShared_4675_ = v_isSharedCheck_4687_;
goto v_resetjp_4673_;
}
else
{
lean_inc(v_eliminations_4672_);
lean_inc(v_assumptions_4671_);
lean_dec(v_p_4659_);
v___x_4674_ = lean_box(0);
v_isShared_4675_ = v_isSharedCheck_4687_;
goto v_resetjp_4673_;
}
v_resetjp_4673_:
{
lean_object* v___x_4676_; lean_object* v___x_4677_; uint8_t v___x_4678_; lean_object* v___x_4679_; lean_object* v___x_4680_; lean_object* v___x_4682_; 
v___x_4676_ = lean_unsigned_to_nat(0u);
v___x_4677_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_Problem_solveEasyEquality___closed__2, &l_Lean_Elab_Tactic_Omega_Problem_solveEasyEquality___closed__2_once, _init_l_Lean_Elab_Tactic_Omega_Problem_solveEasyEquality___closed__2);
v___x_4678_ = 1;
v___x_4679_ = lean_box(0);
v___x_4680_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_Problem_solveEasyEquality___closed__3, &l_Lean_Elab_Tactic_Omega_Problem_solveEasyEquality___closed__3_once, _init_l_Lean_Elab_Tactic_Omega_Problem_solveEasyEquality___closed__3);
if (v_isShared_4675_ == 0)
{
lean_ctor_set(v___x_4674_, 6, v___x_4680_);
lean_ctor_set(v___x_4674_, 5, v___x_4679_);
lean_ctor_set(v___x_4674_, 3, v___x_4677_);
lean_ctor_set(v___x_4674_, 2, v___x_4677_);
lean_ctor_set(v___x_4674_, 1, v___x_4676_);
v___x_4682_ = v___x_4674_;
goto v_reusejp_4681_;
}
else
{
lean_object* v_reuseFailAlloc_4686_; 
v_reuseFailAlloc_4686_ = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(v_reuseFailAlloc_4686_, 0, v_assumptions_4671_);
lean_ctor_set(v_reuseFailAlloc_4686_, 1, v___x_4676_);
lean_ctor_set(v_reuseFailAlloc_4686_, 2, v___x_4677_);
lean_ctor_set(v_reuseFailAlloc_4686_, 3, v___x_4677_);
lean_ctor_set(v_reuseFailAlloc_4686_, 4, v_eliminations_4672_);
lean_ctor_set(v_reuseFailAlloc_4686_, 5, v___x_4679_);
lean_ctor_set(v_reuseFailAlloc_4686_, 6, v___x_4680_);
v___x_4682_ = v_reuseFailAlloc_4686_;
goto v_reusejp_4681_;
}
v_reusejp_4681_:
{
lean_object* v___x_4683_; lean_object* v_a_4684_; lean_object* v___x_4685_; 
lean_ctor_set_uint8(v___x_4682_, sizeof(void*)*7, v___x_4678_);
v___x_4683_ = l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkin_spec__1___redArg(v_irrelevant_4668_, v___x_4682_);
lean_dec(v_irrelevant_4668_);
v_a_4684_ = lean_ctor_get(v___x_4683_, 0);
lean_inc(v_a_4684_);
lean_dec_ref(v___x_4683_);
v___x_4685_ = l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkin_spec__2___redArg(v_upperBounds_4670_, v_lowerBounds_4669_, v_a_4684_, v___y_4660_, v___y_4661_, v___y_4662_, v___y_4663_);
lean_dec(v_lowerBounds_4669_);
lean_dec(v_upperBounds_4670_);
return v___x_4685_;
}
}
}
else
{
lean_object* v_a_4693_; lean_object* v___x_4695_; uint8_t v_isShared_4696_; uint8_t v_isSharedCheck_4700_; 
lean_dec_ref(v_p_4659_);
v_a_4693_ = lean_ctor_get(v___x_4666_, 0);
v_isSharedCheck_4700_ = !lean_is_exclusive(v___x_4666_);
if (v_isSharedCheck_4700_ == 0)
{
v___x_4695_ = v___x_4666_;
v_isShared_4696_ = v_isSharedCheck_4700_;
goto v_resetjp_4694_;
}
else
{
lean_inc(v_a_4693_);
lean_dec(v___x_4666_);
v___x_4695_ = lean_box(0);
v_isShared_4696_ = v_isSharedCheck_4700_;
goto v_resetjp_4694_;
}
v_resetjp_4694_:
{
lean_object* v___x_4698_; 
if (v_isShared_4696_ == 0)
{
v___x_4698_ = v___x_4695_;
goto v_reusejp_4697_;
}
else
{
lean_object* v_reuseFailAlloc_4699_; 
v_reuseFailAlloc_4699_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4699_, 0, v_a_4693_);
v___x_4698_ = v_reuseFailAlloc_4699_;
goto v_reusejp_4697_;
}
v_reusejp_4697_:
{
return v___x_4698_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkin___boxed(lean_object* v_p_4701_, lean_object* v___y_4702_, lean_object* v___y_4703_, lean_object* v___y_4704_, lean_object* v___y_4705_, lean_object* v___y_4706_){
_start:
{
lean_object* v_res_4707_; 
v_res_4707_ = l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkin(v_p_4701_, v___y_4702_, v___y_4703_, v___y_4704_, v___y_4705_);
lean_dec(v___y_4705_);
lean_dec_ref(v___y_4704_);
lean_dec(v___y_4703_);
lean_dec_ref(v___y_4702_);
return v_res_4707_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkin_spec__0(lean_object* v_snd_4708_, lean_object* v_fst_4709_, lean_object* v_as_4710_, lean_object* v_as_x27_4711_, lean_object* v_b_4712_, lean_object* v_a_4713_, lean_object* v___y_4714_, lean_object* v___y_4715_, lean_object* v___y_4716_, lean_object* v___y_4717_){
_start:
{
lean_object* v___x_4719_; 
v___x_4719_ = l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkin_spec__0___redArg(v_snd_4708_, v_fst_4709_, v_as_x27_4711_, v_b_4712_);
return v___x_4719_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkin_spec__0___boxed(lean_object* v_snd_4720_, lean_object* v_fst_4721_, lean_object* v_as_4722_, lean_object* v_as_x27_4723_, lean_object* v_b_4724_, lean_object* v_a_4725_, lean_object* v___y_4726_, lean_object* v___y_4727_, lean_object* v___y_4728_, lean_object* v___y_4729_, lean_object* v___y_4730_){
_start:
{
lean_object* v_res_4731_; 
v_res_4731_ = l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkin_spec__0(v_snd_4720_, v_fst_4721_, v_as_4722_, v_as_x27_4723_, v_b_4724_, v_a_4725_, v___y_4726_, v___y_4727_, v___y_4728_, v___y_4729_);
lean_dec(v___y_4729_);
lean_dec_ref(v___y_4728_);
lean_dec(v___y_4727_);
lean_dec_ref(v___y_4726_);
lean_dec(v_as_x27_4723_);
lean_dec(v_as_4722_);
lean_dec(v_snd_4720_);
return v_res_4731_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkin_spec__1(lean_object* v_as_4732_, lean_object* v_as_x27_4733_, lean_object* v_b_4734_, lean_object* v_a_4735_, lean_object* v___y_4736_, lean_object* v___y_4737_, lean_object* v___y_4738_, lean_object* v___y_4739_){
_start:
{
lean_object* v___x_4741_; 
v___x_4741_ = l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkin_spec__1___redArg(v_as_x27_4733_, v_b_4734_);
return v___x_4741_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkin_spec__1___boxed(lean_object* v_as_4742_, lean_object* v_as_x27_4743_, lean_object* v_b_4744_, lean_object* v_a_4745_, lean_object* v___y_4746_, lean_object* v___y_4747_, lean_object* v___y_4748_, lean_object* v___y_4749_, lean_object* v___y_4750_){
_start:
{
lean_object* v_res_4751_; 
v_res_4751_ = l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkin_spec__1(v_as_4742_, v_as_x27_4743_, v_b_4744_, v_a_4745_, v___y_4746_, v___y_4747_, v___y_4748_, v___y_4749_);
lean_dec(v___y_4749_);
lean_dec_ref(v___y_4748_);
lean_dec(v___y_4747_);
lean_dec_ref(v___y_4746_);
lean_dec(v_as_x27_4743_);
lean_dec(v_as_4742_);
return v_res_4751_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkin_spec__2(lean_object* v_upperBounds_4752_, lean_object* v_as_4753_, lean_object* v_as_x27_4754_, lean_object* v_b_4755_, lean_object* v_a_4756_, lean_object* v___y_4757_, lean_object* v___y_4758_, lean_object* v___y_4759_, lean_object* v___y_4760_){
_start:
{
lean_object* v___x_4762_; 
v___x_4762_ = l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkin_spec__2___redArg(v_upperBounds_4752_, v_as_x27_4754_, v_b_4755_, v___y_4757_, v___y_4758_, v___y_4759_, v___y_4760_);
return v___x_4762_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkin_spec__2___boxed(lean_object* v_upperBounds_4763_, lean_object* v_as_4764_, lean_object* v_as_x27_4765_, lean_object* v_b_4766_, lean_object* v_a_4767_, lean_object* v___y_4768_, lean_object* v___y_4769_, lean_object* v___y_4770_, lean_object* v___y_4771_, lean_object* v___y_4772_){
_start:
{
lean_object* v_res_4773_; 
v_res_4773_ = l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkin_spec__2(v_upperBounds_4763_, v_as_4764_, v_as_x27_4765_, v_b_4766_, v_a_4767_, v___y_4768_, v___y_4769_, v___y_4770_, v___y_4771_);
lean_dec(v___y_4771_);
lean_dec_ref(v___y_4770_);
lean_dec(v___y_4769_);
lean_dec_ref(v___y_4768_);
lean_dec(v_as_x27_4765_);
lean_dec(v_as_4764_);
lean_dec(v_upperBounds_4763_);
return v_res_4773_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldrM___at___00Lean_Elab_Tactic_Omega_Problem_runOmega_spec__2(lean_object* v_x_4774_, lean_object* v_x_4775_){
_start:
{
if (lean_obj_tag(v_x_4775_) == 0)
{
lean_inc(v_x_4774_);
return v_x_4774_;
}
else
{
lean_object* v_key_4776_; lean_object* v_value_4777_; lean_object* v_tail_4778_; lean_object* v___x_4779_; lean_object* v___x_4780_; lean_object* v___x_4781_; 
v_key_4776_ = lean_ctor_get(v_x_4775_, 0);
v_value_4777_ = lean_ctor_get(v_x_4775_, 1);
v_tail_4778_ = lean_ctor_get(v_x_4775_, 2);
v___x_4779_ = l_Std_DHashMap_Internal_AssocList_foldrM___at___00Lean_Elab_Tactic_Omega_Problem_runOmega_spec__2(v_x_4774_, v_tail_4778_);
lean_inc(v_value_4777_);
lean_inc(v_key_4776_);
v___x_4780_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4780_, 0, v_key_4776_);
lean_ctor_set(v___x_4780_, 1, v_value_4777_);
v___x_4781_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4781_, 0, v___x_4780_);
lean_ctor_set(v___x_4781_, 1, v___x_4779_);
return v___x_4781_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldrM___at___00Lean_Elab_Tactic_Omega_Problem_runOmega_spec__2___boxed(lean_object* v_x_4782_, lean_object* v_x_4783_){
_start:
{
lean_object* v_res_4784_; 
v_res_4784_ = l_Std_DHashMap_Internal_AssocList_foldrM___at___00Lean_Elab_Tactic_Omega_Problem_runOmega_spec__2(v_x_4782_, v_x_4783_);
lean_dec(v_x_4783_);
lean_dec(v_x_4782_);
return v_res_4784_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Omega_Problem_runOmega_spec__3(lean_object* v_as_4785_, size_t v_i_4786_, size_t v_stop_4787_, lean_object* v_b_4788_){
_start:
{
uint8_t v___x_4789_; 
v___x_4789_ = lean_usize_dec_eq(v_i_4786_, v_stop_4787_);
if (v___x_4789_ == 0)
{
size_t v___x_4790_; size_t v___x_4791_; lean_object* v___x_4792_; lean_object* v___x_4793_; 
v___x_4790_ = ((size_t)1ULL);
v___x_4791_ = lean_usize_sub(v_i_4786_, v___x_4790_);
v___x_4792_ = lean_array_uget_borrowed(v_as_4785_, v___x_4791_);
v___x_4793_ = l_Std_DHashMap_Internal_AssocList_foldrM___at___00Lean_Elab_Tactic_Omega_Problem_runOmega_spec__2(v_b_4788_, v___x_4792_);
lean_dec(v_b_4788_);
v_i_4786_ = v___x_4791_;
v_b_4788_ = v___x_4793_;
goto _start;
}
else
{
return v_b_4788_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Omega_Problem_runOmega_spec__3___boxed(lean_object* v_as_4795_, lean_object* v_i_4796_, lean_object* v_stop_4797_, lean_object* v_b_4798_){
_start:
{
size_t v_i_boxed_4799_; size_t v_stop_boxed_4800_; lean_object* v_res_4801_; 
v_i_boxed_4799_ = lean_unbox_usize(v_i_4796_);
lean_dec(v_i_4796_);
v_stop_boxed_4800_ = lean_unbox_usize(v_stop_4797_);
lean_dec(v_stop_4797_);
v_res_4801_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Omega_Problem_runOmega_spec__3(v_as_4795_, v_i_boxed_4799_, v_stop_boxed_4800_, v_b_4798_);
lean_dec_ref(v_as_4795_);
return v_res_4801_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_Tactic_Omega_Problem_runOmega_spec__1(lean_object* v_a_4802_, lean_object* v_a_4803_){
_start:
{
if (lean_obj_tag(v_a_4802_) == 0)
{
lean_object* v___x_4804_; 
v___x_4804_ = l_List_reverse___redArg(v_a_4803_);
return v___x_4804_;
}
else
{
lean_object* v_head_4805_; lean_object* v_tail_4806_; lean_object* v___x_4808_; uint8_t v_isShared_4809_; uint8_t v_isSharedCheck_4923_; 
v_head_4805_ = lean_ctor_get(v_a_4802_, 0);
v_tail_4806_ = lean_ctor_get(v_a_4802_, 1);
v_isSharedCheck_4923_ = !lean_is_exclusive(v_a_4802_);
if (v_isSharedCheck_4923_ == 0)
{
v___x_4808_ = v_a_4802_;
v_isShared_4809_ = v_isSharedCheck_4923_;
goto v_resetjp_4807_;
}
else
{
lean_inc(v_tail_4806_);
lean_inc(v_head_4805_);
lean_dec(v_a_4802_);
v___x_4808_ = lean_box(0);
v_isShared_4809_ = v_isSharedCheck_4923_;
goto v_resetjp_4807_;
}
v_resetjp_4807_:
{
lean_object* v___y_4811_; lean_object* v_snd_4816_; lean_object* v_constraint_4817_; lean_object* v_fst_4818_; lean_object* v_lowerBound_4819_; lean_object* v_upperBound_4820_; lean_object* v___x_4821_; lean_object* v___x_4822_; lean_object* v___x_4823_; lean_object* v___y_4825_; lean_object* v___y_4826_; 
v_snd_4816_ = lean_ctor_get(v_head_4805_, 1);
v_constraint_4817_ = lean_ctor_get(v_snd_4816_, 1);
lean_inc_ref(v_constraint_4817_);
v_fst_4818_ = lean_ctor_get(v_head_4805_, 0);
lean_inc(v_fst_4818_);
lean_dec(v_head_4805_);
v_lowerBound_4819_ = lean_ctor_get(v_constraint_4817_, 0);
lean_inc(v_lowerBound_4819_);
v_upperBound_4820_ = lean_ctor_get(v_constraint_4817_, 1);
lean_inc(v_upperBound_4820_);
lean_dec_ref(v_constraint_4817_);
v___x_4821_ = l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0(v_fst_4818_);
lean_dec(v_fst_4818_);
v___x_4822_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__0));
v___x_4823_ = lean_string_append(v___x_4821_, v___x_4822_);
if (lean_obj_tag(v_lowerBound_4819_) == 0)
{
if (lean_obj_tag(v_upperBound_4820_) == 0)
{
lean_object* v___x_4831_; lean_object* v___x_4832_; 
v___x_4831_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__2));
v___x_4832_ = lean_string_append(v___x_4823_, v___x_4831_);
v___y_4811_ = v___x_4832_;
goto v___jp_4810_;
}
else
{
lean_object* v_val_4833_; lean_object* v___x_4834_; lean_object* v___y_4836_; lean_object* v_intZero_4841_; uint8_t v_isNeg_4842_; 
v_val_4833_ = lean_ctor_get(v_upperBound_4820_, 0);
lean_inc(v_val_4833_);
lean_dec_ref_known(v_upperBound_4820_, 1);
v___x_4834_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__3));
v_intZero_4841_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17);
v_isNeg_4842_ = lean_int_dec_lt(v_val_4833_, v_intZero_4841_);
if (v_isNeg_4842_ == 0)
{
lean_object* v_a_4843_; lean_object* v___x_4844_; 
v_a_4843_ = lean_nat_abs(v_val_4833_);
lean_dec(v_val_4833_);
v___x_4844_ = l_Nat_reprFast(v_a_4843_);
v___y_4836_ = v___x_4844_;
goto v___jp_4835_;
}
else
{
lean_object* v_abs_4845_; lean_object* v_one_4846_; lean_object* v_a_4847_; lean_object* v___x_4848_; lean_object* v___x_4849_; lean_object* v___x_4850_; lean_object* v___x_4851_; 
v_abs_4845_ = lean_nat_abs(v_val_4833_);
lean_dec(v_val_4833_);
v_one_4846_ = lean_unsigned_to_nat(1u);
v_a_4847_ = lean_nat_sub(v_abs_4845_, v_one_4846_);
lean_dec(v_abs_4845_);
v___x_4848_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__4));
v___x_4849_ = lean_nat_add(v_a_4847_, v_one_4846_);
lean_dec(v_a_4847_);
v___x_4850_ = l_Nat_reprFast(v___x_4849_);
v___x_4851_ = lean_string_append(v___x_4848_, v___x_4850_);
lean_dec_ref(v___x_4850_);
v___y_4836_ = v___x_4851_;
goto v___jp_4835_;
}
v___jp_4835_:
{
lean_object* v___x_4837_; lean_object* v___x_4838_; lean_object* v___x_4839_; lean_object* v___x_4840_; 
v___x_4837_ = lean_string_append(v___x_4834_, v___y_4836_);
lean_dec_ref(v___y_4836_);
v___x_4838_ = ((lean_object*)(l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0___closed__2));
v___x_4839_ = lean_string_append(v___x_4837_, v___x_4838_);
v___x_4840_ = lean_string_append(v___x_4823_, v___x_4839_);
lean_dec_ref(v___x_4839_);
v___y_4811_ = v___x_4840_;
goto v___jp_4810_;
}
}
}
else
{
if (lean_obj_tag(v_upperBound_4820_) == 0)
{
lean_object* v_val_4852_; lean_object* v___x_4853_; lean_object* v___y_4855_; lean_object* v_intZero_4860_; uint8_t v_isNeg_4861_; 
v_val_4852_ = lean_ctor_get(v_lowerBound_4819_, 0);
lean_inc(v_val_4852_);
lean_dec_ref_known(v_lowerBound_4819_, 1);
v___x_4853_ = ((lean_object*)(l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0___closed__1));
v_intZero_4860_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17);
v_isNeg_4861_ = lean_int_dec_lt(v_val_4852_, v_intZero_4860_);
if (v_isNeg_4861_ == 0)
{
lean_object* v_a_4862_; lean_object* v___x_4863_; 
v_a_4862_ = lean_nat_abs(v_val_4852_);
lean_dec(v_val_4852_);
v___x_4863_ = l_Nat_reprFast(v_a_4862_);
v___y_4855_ = v___x_4863_;
goto v___jp_4854_;
}
else
{
lean_object* v_abs_4864_; lean_object* v_one_4865_; lean_object* v_a_4866_; lean_object* v___x_4867_; lean_object* v___x_4868_; lean_object* v___x_4869_; lean_object* v___x_4870_; 
v_abs_4864_ = lean_nat_abs(v_val_4852_);
lean_dec(v_val_4852_);
v_one_4865_ = lean_unsigned_to_nat(1u);
v_a_4866_ = lean_nat_sub(v_abs_4864_, v_one_4865_);
lean_dec(v_abs_4864_);
v___x_4867_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__4));
v___x_4868_ = lean_nat_add(v_a_4866_, v_one_4865_);
lean_dec(v_a_4866_);
v___x_4869_ = l_Nat_reprFast(v___x_4868_);
v___x_4870_ = lean_string_append(v___x_4867_, v___x_4869_);
lean_dec_ref(v___x_4869_);
v___y_4855_ = v___x_4870_;
goto v___jp_4854_;
}
v___jp_4854_:
{
lean_object* v___x_4856_; lean_object* v___x_4857_; lean_object* v___x_4858_; lean_object* v___x_4859_; 
v___x_4856_ = lean_string_append(v___x_4853_, v___y_4855_);
lean_dec_ref(v___y_4855_);
v___x_4857_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__5));
v___x_4858_ = lean_string_append(v___x_4856_, v___x_4857_);
v___x_4859_ = lean_string_append(v___x_4823_, v___x_4858_);
lean_dec_ref(v___x_4858_);
v___y_4811_ = v___x_4859_;
goto v___jp_4810_;
}
}
else
{
lean_object* v_val_4871_; lean_object* v_val_4872_; uint8_t v___x_4873_; 
v_val_4871_ = lean_ctor_get(v_lowerBound_4819_, 0);
lean_inc(v_val_4871_);
lean_dec_ref_known(v_lowerBound_4819_, 1);
v_val_4872_ = lean_ctor_get(v_upperBound_4820_, 0);
lean_inc(v_val_4872_);
lean_dec_ref_known(v_upperBound_4820_, 1);
v___x_4873_ = lean_int_dec_lt(v_val_4872_, v_val_4871_);
if (v___x_4873_ == 0)
{
uint8_t v___x_4874_; 
v___x_4874_ = lean_int_dec_eq(v_val_4871_, v_val_4872_);
if (v___x_4874_ == 0)
{
lean_object* v___x_4875_; lean_object* v___y_4877_; lean_object* v_intZero_4892_; uint8_t v_isNeg_4893_; 
v___x_4875_ = ((lean_object*)(l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0___closed__1));
v_intZero_4892_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17);
v_isNeg_4893_ = lean_int_dec_lt(v_val_4871_, v_intZero_4892_);
if (v_isNeg_4893_ == 0)
{
lean_object* v_a_4894_; lean_object* v___x_4895_; 
v_a_4894_ = lean_nat_abs(v_val_4871_);
lean_dec(v_val_4871_);
v___x_4895_ = l_Nat_reprFast(v_a_4894_);
v___y_4877_ = v___x_4895_;
goto v___jp_4876_;
}
else
{
lean_object* v_abs_4896_; lean_object* v_one_4897_; lean_object* v_a_4898_; lean_object* v___x_4899_; lean_object* v___x_4900_; lean_object* v___x_4901_; lean_object* v___x_4902_; 
v_abs_4896_ = lean_nat_abs(v_val_4871_);
lean_dec(v_val_4871_);
v_one_4897_ = lean_unsigned_to_nat(1u);
v_a_4898_ = lean_nat_sub(v_abs_4896_, v_one_4897_);
lean_dec(v_abs_4896_);
v___x_4899_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__4));
v___x_4900_ = lean_nat_add(v_a_4898_, v_one_4897_);
lean_dec(v_a_4898_);
v___x_4901_ = l_Nat_reprFast(v___x_4900_);
v___x_4902_ = lean_string_append(v___x_4899_, v___x_4901_);
lean_dec_ref(v___x_4901_);
v___y_4877_ = v___x_4902_;
goto v___jp_4876_;
}
v___jp_4876_:
{
lean_object* v___x_4878_; lean_object* v___x_4879_; lean_object* v___x_4880_; lean_object* v_intZero_4881_; uint8_t v_isNeg_4882_; 
v___x_4878_ = lean_string_append(v___x_4875_, v___y_4877_);
lean_dec_ref(v___y_4877_);
v___x_4879_ = ((lean_object*)(l_List_foldl___at___00List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0_spec__0___closed__0));
v___x_4880_ = lean_string_append(v___x_4878_, v___x_4879_);
v_intZero_4881_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17);
v_isNeg_4882_ = lean_int_dec_lt(v_val_4872_, v_intZero_4881_);
if (v_isNeg_4882_ == 0)
{
lean_object* v_a_4883_; lean_object* v___x_4884_; 
v_a_4883_ = lean_nat_abs(v_val_4872_);
lean_dec(v_val_4872_);
v___x_4884_ = l_Nat_reprFast(v_a_4883_);
v___y_4825_ = v___x_4880_;
v___y_4826_ = v___x_4884_;
goto v___jp_4824_;
}
else
{
lean_object* v_abs_4885_; lean_object* v_one_4886_; lean_object* v_a_4887_; lean_object* v___x_4888_; lean_object* v___x_4889_; lean_object* v___x_4890_; lean_object* v___x_4891_; 
v_abs_4885_ = lean_nat_abs(v_val_4872_);
lean_dec(v_val_4872_);
v_one_4886_ = lean_unsigned_to_nat(1u);
v_a_4887_ = lean_nat_sub(v_abs_4885_, v_one_4886_);
lean_dec(v_abs_4885_);
v___x_4888_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__4));
v___x_4889_ = lean_nat_add(v_a_4887_, v_one_4886_);
lean_dec(v_a_4887_);
v___x_4890_ = l_Nat_reprFast(v___x_4889_);
v___x_4891_ = lean_string_append(v___x_4888_, v___x_4890_);
lean_dec_ref(v___x_4890_);
v___y_4825_ = v___x_4880_;
v___y_4826_ = v___x_4891_;
goto v___jp_4824_;
}
}
}
else
{
lean_object* v___x_4903_; lean_object* v___y_4905_; lean_object* v_intZero_4910_; uint8_t v_isNeg_4911_; 
lean_dec(v_val_4872_);
v___x_4903_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__6));
v_intZero_4910_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17);
v_isNeg_4911_ = lean_int_dec_lt(v_val_4871_, v_intZero_4910_);
if (v_isNeg_4911_ == 0)
{
lean_object* v_a_4912_; lean_object* v___x_4913_; 
v_a_4912_ = lean_nat_abs(v_val_4871_);
lean_dec(v_val_4871_);
v___x_4913_ = l_Nat_reprFast(v_a_4912_);
v___y_4905_ = v___x_4913_;
goto v___jp_4904_;
}
else
{
lean_object* v_abs_4914_; lean_object* v_one_4915_; lean_object* v_a_4916_; lean_object* v___x_4917_; lean_object* v___x_4918_; lean_object* v___x_4919_; lean_object* v___x_4920_; 
v_abs_4914_ = lean_nat_abs(v_val_4871_);
lean_dec(v_val_4871_);
v_one_4915_ = lean_unsigned_to_nat(1u);
v_a_4916_ = lean_nat_sub(v_abs_4914_, v_one_4915_);
lean_dec(v_abs_4914_);
v___x_4917_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__4));
v___x_4918_ = lean_nat_add(v_a_4916_, v_one_4915_);
lean_dec(v_a_4916_);
v___x_4919_ = l_Nat_reprFast(v___x_4918_);
v___x_4920_ = lean_string_append(v___x_4917_, v___x_4919_);
lean_dec_ref(v___x_4919_);
v___y_4905_ = v___x_4920_;
goto v___jp_4904_;
}
v___jp_4904_:
{
lean_object* v___x_4906_; lean_object* v___x_4907_; lean_object* v___x_4908_; lean_object* v___x_4909_; 
v___x_4906_ = lean_string_append(v___x_4903_, v___y_4905_);
lean_dec_ref(v___y_4905_);
v___x_4907_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__7));
v___x_4908_ = lean_string_append(v___x_4906_, v___x_4907_);
v___x_4909_ = lean_string_append(v___x_4823_, v___x_4908_);
lean_dec_ref(v___x_4908_);
v___y_4811_ = v___x_4909_;
goto v___jp_4810_;
}
}
}
else
{
lean_object* v___x_4921_; lean_object* v___x_4922_; 
lean_dec(v_val_4872_);
lean_dec(v_val_4871_);
v___x_4921_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__8));
v___x_4922_ = lean_string_append(v___x_4823_, v___x_4921_);
v___y_4811_ = v___x_4922_;
goto v___jp_4810_;
}
}
}
v___jp_4810_:
{
lean_object* v___x_4813_; 
if (v_isShared_4809_ == 0)
{
lean_ctor_set(v___x_4808_, 1, v_a_4803_);
lean_ctor_set(v___x_4808_, 0, v___y_4811_);
v___x_4813_ = v___x_4808_;
goto v_reusejp_4812_;
}
else
{
lean_object* v_reuseFailAlloc_4815_; 
v_reuseFailAlloc_4815_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4815_, 0, v___y_4811_);
lean_ctor_set(v_reuseFailAlloc_4815_, 1, v_a_4803_);
v___x_4813_ = v_reuseFailAlloc_4815_;
goto v_reusejp_4812_;
}
v_reusejp_4812_:
{
v_a_4802_ = v_tail_4806_;
v_a_4803_ = v___x_4813_;
goto _start;
}
}
v___jp_4824_:
{
lean_object* v___x_4827_; lean_object* v___x_4828_; lean_object* v___x_4829_; lean_object* v___x_4830_; 
v___x_4827_ = lean_string_append(v___y_4825_, v___y_4826_);
lean_dec_ref(v___y_4826_);
v___x_4828_ = ((lean_object*)(l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0___closed__2));
v___x_4829_ = lean_string_append(v___x_4827_, v___x_4828_);
v___x_4830_ = lean_string_append(v___x_4823_, v___x_4829_);
lean_dec_ref(v___x_4829_);
v___y_4811_ = v___x_4830_;
goto v___jp_4810_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_Problem_runOmega_spec__0___redArg(lean_object* v_cls_4924_, lean_object* v_msg_4925_, lean_object* v___y_4926_, lean_object* v___y_4927_, lean_object* v___y_4928_, lean_object* v___y_4929_){
_start:
{
lean_object* v_ref_4931_; lean_object* v___x_4932_; lean_object* v_a_4933_; lean_object* v___x_4935_; uint8_t v_isShared_4936_; uint8_t v_isSharedCheck_4977_; 
v_ref_4931_ = lean_ctor_get(v___y_4928_, 2);
v___x_4932_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality_spec__0_spec__0(v_msg_4925_, v___y_4926_, v___y_4927_, v___y_4928_, v___y_4929_);
v_a_4933_ = lean_ctor_get(v___x_4932_, 0);
v_isSharedCheck_4977_ = !lean_is_exclusive(v___x_4932_);
if (v_isSharedCheck_4977_ == 0)
{
v___x_4935_ = v___x_4932_;
v_isShared_4936_ = v_isSharedCheck_4977_;
goto v_resetjp_4934_;
}
else
{
lean_inc(v_a_4933_);
lean_dec(v___x_4932_);
v___x_4935_ = lean_box(0);
v_isShared_4936_ = v_isSharedCheck_4977_;
goto v_resetjp_4934_;
}
v_resetjp_4934_:
{
lean_object* v___x_4937_; lean_object* v_traceState_4938_; lean_object* v_env_4939_; lean_object* v_nextMacroScope_4940_; lean_object* v_ngen_4941_; lean_object* v_auxDeclNGen_4942_; lean_object* v_cache_4943_; lean_object* v_messages_4944_; lean_object* v_infoState_4945_; lean_object* v_snapshotTasks_4946_; lean_object* v___x_4948_; uint8_t v_isShared_4949_; uint8_t v_isSharedCheck_4976_; 
v___x_4937_ = lean_st_ref_take(v___y_4929_);
v_traceState_4938_ = lean_ctor_get(v___x_4937_, 4);
v_env_4939_ = lean_ctor_get(v___x_4937_, 0);
v_nextMacroScope_4940_ = lean_ctor_get(v___x_4937_, 1);
v_ngen_4941_ = lean_ctor_get(v___x_4937_, 2);
v_auxDeclNGen_4942_ = lean_ctor_get(v___x_4937_, 3);
v_cache_4943_ = lean_ctor_get(v___x_4937_, 5);
v_messages_4944_ = lean_ctor_get(v___x_4937_, 6);
v_infoState_4945_ = lean_ctor_get(v___x_4937_, 7);
v_snapshotTasks_4946_ = lean_ctor_get(v___x_4937_, 8);
v_isSharedCheck_4976_ = !lean_is_exclusive(v___x_4937_);
if (v_isSharedCheck_4976_ == 0)
{
v___x_4948_ = v___x_4937_;
v_isShared_4949_ = v_isSharedCheck_4976_;
goto v_resetjp_4947_;
}
else
{
lean_inc(v_snapshotTasks_4946_);
lean_inc(v_infoState_4945_);
lean_inc(v_messages_4944_);
lean_inc(v_cache_4943_);
lean_inc(v_traceState_4938_);
lean_inc(v_auxDeclNGen_4942_);
lean_inc(v_ngen_4941_);
lean_inc(v_nextMacroScope_4940_);
lean_inc(v_env_4939_);
lean_dec(v___x_4937_);
v___x_4948_ = lean_box(0);
v_isShared_4949_ = v_isSharedCheck_4976_;
goto v_resetjp_4947_;
}
v_resetjp_4947_:
{
uint64_t v_tid_4950_; lean_object* v_traces_4951_; lean_object* v___x_4953_; uint8_t v_isShared_4954_; uint8_t v_isSharedCheck_4975_; 
v_tid_4950_ = lean_ctor_get_uint64(v_traceState_4938_, sizeof(void*)*1);
v_traces_4951_ = lean_ctor_get(v_traceState_4938_, 0);
v_isSharedCheck_4975_ = !lean_is_exclusive(v_traceState_4938_);
if (v_isSharedCheck_4975_ == 0)
{
v___x_4953_ = v_traceState_4938_;
v_isShared_4954_ = v_isSharedCheck_4975_;
goto v_resetjp_4952_;
}
else
{
lean_inc(v_traces_4951_);
lean_dec(v_traceState_4938_);
v___x_4953_ = lean_box(0);
v_isShared_4954_ = v_isSharedCheck_4975_;
goto v_resetjp_4952_;
}
v_resetjp_4952_:
{
lean_object* v___x_4955_; lean_object* v___x_4956_; double v___x_4957_; uint8_t v___x_4958_; lean_object* v___x_4959_; lean_object* v___x_4960_; lean_object* v___x_4961_; lean_object* v___x_4962_; lean_object* v___x_4963_; lean_object* v___x_4964_; lean_object* v___x_4966_; 
v___x_4955_ = lean_box(0);
v___x_4956_ = lean_box(0);
v___x_4957_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__0___closed__0, &l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__0___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__0___closed__0);
v___x_4958_ = 0;
v___x_4959_ = ((lean_object*)(l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__1));
v___x_4960_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_4960_, 0, v_cls_4924_);
lean_ctor_set(v___x_4960_, 1, v___x_4956_);
lean_ctor_set(v___x_4960_, 2, v___x_4959_);
lean_ctor_set_float(v___x_4960_, sizeof(void*)*3, v___x_4957_);
lean_ctor_set_float(v___x_4960_, sizeof(void*)*3 + 8, v___x_4957_);
lean_ctor_set_uint8(v___x_4960_, sizeof(void*)*3 + 16, v___x_4958_);
v___x_4961_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__0___closed__1));
v___x_4962_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_4962_, 0, v___x_4960_);
lean_ctor_set(v___x_4962_, 1, v_a_4933_);
lean_ctor_set(v___x_4962_, 2, v___x_4961_);
lean_inc(v_ref_4931_);
v___x_4963_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4963_, 0, v_ref_4931_);
lean_ctor_set(v___x_4963_, 1, v___x_4962_);
v___x_4964_ = l_Lean_PersistentArray_push___redArg(v_traces_4951_, v___x_4963_);
if (v_isShared_4954_ == 0)
{
lean_ctor_set(v___x_4953_, 0, v___x_4964_);
v___x_4966_ = v___x_4953_;
goto v_reusejp_4965_;
}
else
{
lean_object* v_reuseFailAlloc_4974_; 
v_reuseFailAlloc_4974_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_4974_, 0, v___x_4964_);
lean_ctor_set_uint64(v_reuseFailAlloc_4974_, sizeof(void*)*1, v_tid_4950_);
v___x_4966_ = v_reuseFailAlloc_4974_;
goto v_reusejp_4965_;
}
v_reusejp_4965_:
{
lean_object* v___x_4968_; 
if (v_isShared_4949_ == 0)
{
lean_ctor_set(v___x_4948_, 4, v___x_4966_);
v___x_4968_ = v___x_4948_;
goto v_reusejp_4967_;
}
else
{
lean_object* v_reuseFailAlloc_4973_; 
v_reuseFailAlloc_4973_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_4973_, 0, v_env_4939_);
lean_ctor_set(v_reuseFailAlloc_4973_, 1, v_nextMacroScope_4940_);
lean_ctor_set(v_reuseFailAlloc_4973_, 2, v_ngen_4941_);
lean_ctor_set(v_reuseFailAlloc_4973_, 3, v_auxDeclNGen_4942_);
lean_ctor_set(v_reuseFailAlloc_4973_, 4, v___x_4966_);
lean_ctor_set(v_reuseFailAlloc_4973_, 5, v_cache_4943_);
lean_ctor_set(v_reuseFailAlloc_4973_, 6, v_messages_4944_);
lean_ctor_set(v_reuseFailAlloc_4973_, 7, v_infoState_4945_);
lean_ctor_set(v_reuseFailAlloc_4973_, 8, v_snapshotTasks_4946_);
v___x_4968_ = v_reuseFailAlloc_4973_;
goto v_reusejp_4967_;
}
v_reusejp_4967_:
{
lean_object* v___x_4969_; lean_object* v___x_4971_; 
v___x_4969_ = lean_st_ref_put(v___y_4929_, v___x_4968_);
if (v_isShared_4936_ == 0)
{
lean_ctor_set(v___x_4935_, 0, v___x_4955_);
v___x_4971_ = v___x_4935_;
goto v_reusejp_4970_;
}
else
{
lean_object* v_reuseFailAlloc_4972_; 
v_reuseFailAlloc_4972_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4972_, 0, v___x_4955_);
v___x_4971_ = v_reuseFailAlloc_4972_;
goto v_reusejp_4970_;
}
v_reusejp_4970_:
{
return v___x_4971_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_Problem_runOmega_spec__0___redArg___boxed(lean_object* v_cls_4978_, lean_object* v_msg_4979_, lean_object* v___y_4980_, lean_object* v___y_4981_, lean_object* v___y_4982_, lean_object* v___y_4983_, lean_object* v___y_4984_){
_start:
{
lean_object* v_res_4985_; 
v_res_4985_ = l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_Problem_runOmega_spec__0___redArg(v_cls_4978_, v_msg_4979_, v___y_4980_, v___y_4981_, v___y_4982_, v___y_4983_);
lean_dec(v___y_4983_);
lean_dec_ref(v___y_4982_);
lean_dec(v___y_4981_);
lean_dec_ref(v___y_4980_);
return v_res_4985_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_Problem_elimination___closed__1(void){
_start:
{
lean_object* v___x_4987_; lean_object* v___x_4988_; 
v___x_4987_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Problem_elimination___closed__0));
v___x_4988_ = l_Lean_stringToMessageData(v___x_4987_);
return v___x_4988_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_Problem_runOmega___closed__1(void){
_start:
{
lean_object* v___x_4990_; lean_object* v___x_4991_; 
v___x_4990_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Problem_runOmega___closed__0));
v___x_4991_ = l_Lean_stringToMessageData(v___x_4990_);
return v___x_4991_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_runOmega(lean_object* v_p_4992_, lean_object* v___y_4993_, lean_object* v___y_4994_, lean_object* v___y_4995_, uint8_t v___y_4996_, lean_object* v___y_4997_, lean_object* v___y_4998_, lean_object* v___y_4999_, lean_object* v___y_5000_, lean_object* v___y_5001_){
_start:
{
lean_object* v___y_5004_; lean_object* v___y_5005_; lean_object* v___y_5006_; uint8_t v___y_5007_; lean_object* v___y_5008_; lean_object* v___y_5009_; lean_object* v___y_5010_; lean_object* v___y_5011_; lean_object* v___y_5012_; lean_object* v_toCold_5018_; lean_object* v_options_5019_; uint8_t v_hasTrace_5020_; 
v_toCold_5018_ = lean_ctor_get(v___y_5000_, 0);
v_options_5019_ = lean_ctor_get(v_toCold_5018_, 2);
v_hasTrace_5020_ = lean_ctor_get_uint8(v_options_5019_, sizeof(void*)*1);
if (v_hasTrace_5020_ == 0)
{
v___y_5004_ = v___y_4993_;
v___y_5005_ = v___y_4994_;
v___y_5006_ = v___y_4995_;
v___y_5007_ = v___y_4996_;
v___y_5008_ = v___y_4997_;
v___y_5009_ = v___y_4998_;
v___y_5010_ = v___y_4999_;
v___y_5011_ = v___y_5000_;
v___y_5012_ = v___y_5001_;
goto v___jp_5003_;
}
else
{
lean_object* v_inheritedTraceOptions_5021_; lean_object* v_cls_5022_; lean_object* v___x_5023_; uint8_t v___x_5024_; 
v_inheritedTraceOptions_5021_ = lean_ctor_get(v_toCold_5018_, 11);
v_cls_5022_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__1_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_));
v___x_5023_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__1___redArg___closed__0, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__1___redArg___closed__0_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__1___redArg___closed__0);
v___x_5024_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_5021_, v_options_5019_, v___x_5023_);
if (v___x_5024_ == 0)
{
v___y_5004_ = v___y_4993_;
v___y_5005_ = v___y_4994_;
v___y_5006_ = v___y_4995_;
v___y_5007_ = v___y_4996_;
v___y_5008_ = v___y_4997_;
v___y_5009_ = v___y_4998_;
v___y_5010_ = v___y_4999_;
v___y_5011_ = v___y_5000_;
v___y_5012_ = v___y_5001_;
goto v___jp_5003_;
}
else
{
lean_object* v_constraints_5025_; uint8_t v_possible_5026_; lean_object* v___x_5027_; lean_object* v___y_5029_; 
v_constraints_5025_ = lean_ctor_get(v_p_4992_, 2);
v_possible_5026_ = lean_ctor_get_uint8(v_p_4992_, sizeof(void*)*7);
v___x_5027_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_Problem_runOmega___closed__1, &l_Lean_Elab_Tactic_Omega_Problem_runOmega___closed__1_once, _init_l_Lean_Elab_Tactic_Omega_Problem_runOmega___closed__1);
if (v_possible_5026_ == 0)
{
lean_object* v___x_5042_; 
v___x_5042_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__3___closed__0));
v___y_5029_ = v___x_5042_;
goto v___jp_5028_;
}
else
{
uint8_t v___x_5043_; 
v___x_5043_ = l_Lean_Elab_Tactic_Omega_Problem_isEmpty(v_p_4992_);
if (v___x_5043_ == 0)
{
lean_object* v_buckets_5044_; lean_object* v___x_5045_; lean_object* v___y_5047_; lean_object* v___x_5051_; lean_object* v___x_5052_; lean_object* v___x_5053_; uint8_t v___x_5054_; 
v_buckets_5044_ = lean_ctor_get(v_constraints_5025_, 1);
v___x_5045_ = ((lean_object*)(l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__0));
v___x_5051_ = lean_box(0);
v___x_5052_ = lean_array_get_size(v_buckets_5044_);
v___x_5053_ = lean_unsigned_to_nat(0u);
v___x_5054_ = lean_nat_dec_lt(v___x_5053_, v___x_5052_);
if (v___x_5054_ == 0)
{
v___y_5047_ = v___x_5051_;
goto v___jp_5046_;
}
else
{
size_t v___x_5055_; size_t v___x_5056_; lean_object* v___x_5057_; 
v___x_5055_ = lean_usize_of_nat(v___x_5052_);
v___x_5056_ = ((size_t)0ULL);
v___x_5057_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Omega_Problem_runOmega_spec__3(v_buckets_5044_, v___x_5055_, v___x_5056_, v___x_5051_);
v___y_5047_ = v___x_5057_;
goto v___jp_5046_;
}
v___jp_5046_:
{
lean_object* v___x_5048_; lean_object* v___x_5049_; lean_object* v___x_5050_; 
v___x_5048_ = lean_box(0);
v___x_5049_ = l_List_mapTR_loop___at___00Lean_Elab_Tactic_Omega_Problem_runOmega_spec__1(v___y_5047_, v___x_5048_);
v___x_5050_ = l_String_intercalate(v___x_5045_, v___x_5049_);
v___y_5029_ = v___x_5050_;
goto v___jp_5028_;
}
}
else
{
lean_object* v___x_5058_; 
v___x_5058_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__3___closed__11));
v___y_5029_ = v___x_5058_;
goto v___jp_5028_;
}
}
v___jp_5028_:
{
lean_object* v___x_5030_; lean_object* v___x_5031_; lean_object* v___x_5032_; lean_object* v___x_5033_; 
v___x_5030_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_5030_, 0, v___y_5029_);
v___x_5031_ = l_Lean_MessageData_ofFormat(v___x_5030_);
v___x_5032_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5032_, 0, v___x_5027_);
lean_ctor_set(v___x_5032_, 1, v___x_5031_);
v___x_5033_ = l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_Problem_runOmega_spec__0___redArg(v_cls_5022_, v___x_5032_, v___y_4998_, v___y_4999_, v___y_5000_, v___y_5001_);
if (lean_obj_tag(v___x_5033_) == 0)
{
lean_dec_ref_known(v___x_5033_, 1);
v___y_5004_ = v___y_4993_;
v___y_5005_ = v___y_4994_;
v___y_5006_ = v___y_4995_;
v___y_5007_ = v___y_4996_;
v___y_5008_ = v___y_4997_;
v___y_5009_ = v___y_4998_;
v___y_5010_ = v___y_4999_;
v___y_5011_ = v___y_5000_;
v___y_5012_ = v___y_5001_;
goto v___jp_5003_;
}
else
{
lean_object* v_a_5034_; lean_object* v___x_5036_; uint8_t v_isShared_5037_; uint8_t v_isSharedCheck_5041_; 
lean_dec_ref(v_p_4992_);
v_a_5034_ = lean_ctor_get(v___x_5033_, 0);
v_isSharedCheck_5041_ = !lean_is_exclusive(v___x_5033_);
if (v_isSharedCheck_5041_ == 0)
{
v___x_5036_ = v___x_5033_;
v_isShared_5037_ = v_isSharedCheck_5041_;
goto v_resetjp_5035_;
}
else
{
lean_inc(v_a_5034_);
lean_dec(v___x_5033_);
v___x_5036_ = lean_box(0);
v_isShared_5037_ = v_isSharedCheck_5041_;
goto v_resetjp_5035_;
}
v_resetjp_5035_:
{
lean_object* v___x_5039_; 
if (v_isShared_5037_ == 0)
{
v___x_5039_ = v___x_5036_;
goto v_reusejp_5038_;
}
else
{
lean_object* v_reuseFailAlloc_5040_; 
v_reuseFailAlloc_5040_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5040_, 0, v_a_5034_);
v___x_5039_ = v_reuseFailAlloc_5040_;
goto v_reusejp_5038_;
}
v_reusejp_5038_:
{
return v___x_5039_;
}
}
}
}
}
}
v___jp_5003_:
{
uint8_t v_possible_5013_; 
v_possible_5013_ = lean_ctor_get_uint8(v_p_4992_, sizeof(void*)*7);
if (v_possible_5013_ == 0)
{
lean_object* v___x_5014_; 
v___x_5014_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5014_, 0, v_p_4992_);
return v___x_5014_;
}
else
{
lean_object* v___x_5015_; 
v___x_5015_ = l_Lean_Elab_Tactic_Omega_Problem_solveEqualities(v_p_4992_, v___y_5004_, v___y_5005_, v___y_5006_, v___y_5007_, v___y_5008_, v___y_5009_, v___y_5010_, v___y_5011_, v___y_5012_);
if (lean_obj_tag(v___x_5015_) == 0)
{
lean_object* v_a_5016_; lean_object* v___x_5017_; 
v_a_5016_ = lean_ctor_get(v___x_5015_, 0);
lean_inc(v_a_5016_);
lean_dec_ref_known(v___x_5015_, 1);
v___x_5017_ = l_Lean_Elab_Tactic_Omega_Problem_elimination(v_a_5016_, v___y_5004_, v___y_5005_, v___y_5006_, v___y_5007_, v___y_5008_, v___y_5009_, v___y_5010_, v___y_5011_, v___y_5012_);
return v___x_5017_;
}
else
{
return v___x_5015_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_elimination(lean_object* v_p_5059_, lean_object* v___y_5060_, lean_object* v___y_5061_, lean_object* v___y_5062_, uint8_t v___y_5063_, lean_object* v___y_5064_, lean_object* v___y_5065_, lean_object* v___y_5066_, lean_object* v___y_5067_, lean_object* v___y_5068_){
_start:
{
lean_object* v___y_5071_; lean_object* v___y_5072_; lean_object* v___y_5073_; uint8_t v___y_5074_; lean_object* v___y_5075_; lean_object* v___y_5076_; lean_object* v___y_5077_; lean_object* v___y_5078_; lean_object* v___y_5079_; uint8_t v_possible_5083_; 
v_possible_5083_ = lean_ctor_get_uint8(v_p_5059_, sizeof(void*)*7);
if (v_possible_5083_ == 0)
{
lean_object* v___x_5084_; 
v___x_5084_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5084_, 0, v_p_5059_);
return v___x_5084_;
}
else
{
lean_object* v_constraints_5085_; uint8_t v___x_5086_; 
v_constraints_5085_ = lean_ctor_get(v_p_5059_, 2);
v___x_5086_ = l_Lean_Elab_Tactic_Omega_Problem_isEmpty(v_p_5059_);
if (v___x_5086_ == 0)
{
lean_object* v_toCold_5087_; lean_object* v_options_5088_; uint8_t v_hasTrace_5089_; 
v_toCold_5087_ = lean_ctor_get(v___y_5067_, 0);
v_options_5088_ = lean_ctor_get(v_toCold_5087_, 2);
v_hasTrace_5089_ = lean_ctor_get_uint8(v_options_5088_, sizeof(void*)*1);
if (v_hasTrace_5089_ == 0)
{
v___y_5071_ = v___y_5060_;
v___y_5072_ = v___y_5061_;
v___y_5073_ = v___y_5062_;
v___y_5074_ = v___y_5063_;
v___y_5075_ = v___y_5064_;
v___y_5076_ = v___y_5065_;
v___y_5077_ = v___y_5066_;
v___y_5078_ = v___y_5067_;
v___y_5079_ = v___y_5068_;
goto v___jp_5070_;
}
else
{
lean_object* v_inheritedTraceOptions_5090_; lean_object* v_cls_5091_; lean_object* v___x_5092_; uint8_t v___x_5093_; 
v_inheritedTraceOptions_5090_ = lean_ctor_get(v_toCold_5087_, 11);
v_cls_5091_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__1_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_));
v___x_5092_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__1___redArg___closed__0, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__1___redArg___closed__0_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__1___redArg___closed__0);
v___x_5093_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_5090_, v_options_5088_, v___x_5092_);
if (v___x_5093_ == 0)
{
v___y_5071_ = v___y_5060_;
v___y_5072_ = v___y_5061_;
v___y_5073_ = v___y_5062_;
v___y_5074_ = v___y_5063_;
v___y_5075_ = v___y_5064_;
v___y_5076_ = v___y_5065_;
v___y_5077_ = v___y_5066_;
v___y_5078_ = v___y_5067_;
v___y_5079_ = v___y_5068_;
goto v___jp_5070_;
}
else
{
lean_object* v___x_5094_; lean_object* v___y_5096_; 
v___x_5094_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_Problem_elimination___closed__1, &l_Lean_Elab_Tactic_Omega_Problem_elimination___closed__1_once, _init_l_Lean_Elab_Tactic_Omega_Problem_elimination___closed__1);
if (v___x_5086_ == 0)
{
lean_object* v_buckets_5109_; lean_object* v___x_5110_; lean_object* v___y_5112_; lean_object* v___x_5116_; lean_object* v___x_5117_; lean_object* v___x_5118_; uint8_t v___x_5119_; 
v_buckets_5109_ = lean_ctor_get(v_constraints_5085_, 1);
v___x_5110_ = ((lean_object*)(l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__0));
v___x_5116_ = lean_box(0);
v___x_5117_ = lean_array_get_size(v_buckets_5109_);
v___x_5118_ = lean_unsigned_to_nat(0u);
v___x_5119_ = lean_nat_dec_lt(v___x_5118_, v___x_5117_);
if (v___x_5119_ == 0)
{
v___y_5112_ = v___x_5116_;
goto v___jp_5111_;
}
else
{
size_t v___x_5120_; size_t v___x_5121_; lean_object* v___x_5122_; 
v___x_5120_ = lean_usize_of_nat(v___x_5117_);
v___x_5121_ = ((size_t)0ULL);
v___x_5122_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Omega_Problem_runOmega_spec__3(v_buckets_5109_, v___x_5120_, v___x_5121_, v___x_5116_);
v___y_5112_ = v___x_5122_;
goto v___jp_5111_;
}
v___jp_5111_:
{
lean_object* v___x_5113_; lean_object* v___x_5114_; lean_object* v___x_5115_; 
v___x_5113_ = lean_box(0);
v___x_5114_ = l_List_mapTR_loop___at___00Lean_Elab_Tactic_Omega_Problem_runOmega_spec__1(v___y_5112_, v___x_5113_);
v___x_5115_ = l_String_intercalate(v___x_5110_, v___x_5114_);
v___y_5096_ = v___x_5115_;
goto v___jp_5095_;
}
}
else
{
lean_object* v___x_5123_; 
v___x_5123_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__3___closed__11));
v___y_5096_ = v___x_5123_;
goto v___jp_5095_;
}
v___jp_5095_:
{
lean_object* v___x_5097_; lean_object* v___x_5098_; lean_object* v___x_5099_; lean_object* v___x_5100_; 
v___x_5097_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_5097_, 0, v___y_5096_);
v___x_5098_ = l_Lean_MessageData_ofFormat(v___x_5097_);
v___x_5099_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5099_, 0, v___x_5094_);
lean_ctor_set(v___x_5099_, 1, v___x_5098_);
v___x_5100_ = l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_Problem_runOmega_spec__0___redArg(v_cls_5091_, v___x_5099_, v___y_5065_, v___y_5066_, v___y_5067_, v___y_5068_);
if (lean_obj_tag(v___x_5100_) == 0)
{
lean_dec_ref_known(v___x_5100_, 1);
v___y_5071_ = v___y_5060_;
v___y_5072_ = v___y_5061_;
v___y_5073_ = v___y_5062_;
v___y_5074_ = v___y_5063_;
v___y_5075_ = v___y_5064_;
v___y_5076_ = v___y_5065_;
v___y_5077_ = v___y_5066_;
v___y_5078_ = v___y_5067_;
v___y_5079_ = v___y_5068_;
goto v___jp_5070_;
}
else
{
lean_object* v_a_5101_; lean_object* v___x_5103_; uint8_t v_isShared_5104_; uint8_t v_isSharedCheck_5108_; 
lean_dec_ref(v_p_5059_);
v_a_5101_ = lean_ctor_get(v___x_5100_, 0);
v_isSharedCheck_5108_ = !lean_is_exclusive(v___x_5100_);
if (v_isSharedCheck_5108_ == 0)
{
v___x_5103_ = v___x_5100_;
v_isShared_5104_ = v_isSharedCheck_5108_;
goto v_resetjp_5102_;
}
else
{
lean_inc(v_a_5101_);
lean_dec(v___x_5100_);
v___x_5103_ = lean_box(0);
v_isShared_5104_ = v_isSharedCheck_5108_;
goto v_resetjp_5102_;
}
v_resetjp_5102_:
{
lean_object* v___x_5106_; 
if (v_isShared_5104_ == 0)
{
v___x_5106_ = v___x_5103_;
goto v_reusejp_5105_;
}
else
{
lean_object* v_reuseFailAlloc_5107_; 
v_reuseFailAlloc_5107_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5107_, 0, v_a_5101_);
v___x_5106_ = v_reuseFailAlloc_5107_;
goto v_reusejp_5105_;
}
v_reusejp_5105_:
{
return v___x_5106_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_5124_; 
v___x_5124_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5124_, 0, v_p_5059_);
return v___x_5124_;
}
}
v___jp_5070_:
{
lean_object* v___x_5080_; 
v___x_5080_ = l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkin(v_p_5059_, v___y_5076_, v___y_5077_, v___y_5078_, v___y_5079_);
if (lean_obj_tag(v___x_5080_) == 0)
{
lean_object* v_a_5081_; lean_object* v___x_5082_; 
v_a_5081_ = lean_ctor_get(v___x_5080_, 0);
lean_inc(v_a_5081_);
lean_dec_ref_known(v___x_5080_, 1);
v___x_5082_ = l_Lean_Elab_Tactic_Omega_Problem_runOmega(v_a_5081_, v___y_5071_, v___y_5072_, v___y_5073_, v___y_5074_, v___y_5075_, v___y_5076_, v___y_5077_, v___y_5078_, v___y_5079_);
return v___x_5082_;
}
else
{
return v___x_5080_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_elimination___boxed(lean_object* v_p_5125_, lean_object* v___y_5126_, lean_object* v___y_5127_, lean_object* v___y_5128_, lean_object* v___y_5129_, lean_object* v___y_5130_, lean_object* v___y_5131_, lean_object* v___y_5132_, lean_object* v___y_5133_, lean_object* v___y_5134_, lean_object* v___y_5135_){
_start:
{
uint8_t v___y_18329__boxed_5136_; lean_object* v_res_5137_; 
v___y_18329__boxed_5136_ = lean_unbox(v___y_5129_);
v_res_5137_ = l_Lean_Elab_Tactic_Omega_Problem_elimination(v_p_5125_, v___y_5126_, v___y_5127_, v___y_5128_, v___y_18329__boxed_5136_, v___y_5130_, v___y_5131_, v___y_5132_, v___y_5133_, v___y_5134_);
lean_dec(v___y_5134_);
lean_dec_ref(v___y_5133_);
lean_dec(v___y_5132_);
lean_dec_ref(v___y_5131_);
lean_dec(v___y_5130_);
lean_dec_ref(v___y_5128_);
lean_dec(v___y_5127_);
lean_dec(v___y_5126_);
return v_res_5137_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_runOmega___boxed(lean_object* v_p_5138_, lean_object* v___y_5139_, lean_object* v___y_5140_, lean_object* v___y_5141_, lean_object* v___y_5142_, lean_object* v___y_5143_, lean_object* v___y_5144_, lean_object* v___y_5145_, lean_object* v___y_5146_, lean_object* v___y_5147_, lean_object* v___y_5148_){
_start:
{
uint8_t v___y_18386__boxed_5149_; lean_object* v_res_5150_; 
v___y_18386__boxed_5149_ = lean_unbox(v___y_5142_);
v_res_5150_ = l_Lean_Elab_Tactic_Omega_Problem_runOmega(v_p_5138_, v___y_5139_, v___y_5140_, v___y_5141_, v___y_18386__boxed_5149_, v___y_5143_, v___y_5144_, v___y_5145_, v___y_5146_, v___y_5147_);
lean_dec(v___y_5147_);
lean_dec_ref(v___y_5146_);
lean_dec(v___y_5145_);
lean_dec_ref(v___y_5144_);
lean_dec(v___y_5143_);
lean_dec_ref(v___y_5141_);
lean_dec(v___y_5140_);
lean_dec(v___y_5139_);
return v_res_5150_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_Problem_runOmega_spec__0(lean_object* v_cls_5151_, lean_object* v_msg_5152_, lean_object* v___y_5153_, lean_object* v___y_5154_, lean_object* v___y_5155_, uint8_t v___y_5156_, lean_object* v___y_5157_, lean_object* v___y_5158_, lean_object* v___y_5159_, lean_object* v___y_5160_, lean_object* v___y_5161_){
_start:
{
lean_object* v___x_5163_; 
v___x_5163_ = l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_Problem_runOmega_spec__0___redArg(v_cls_5151_, v_msg_5152_, v___y_5158_, v___y_5159_, v___y_5160_, v___y_5161_);
return v___x_5163_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_Problem_runOmega_spec__0___boxed(lean_object* v_cls_5164_, lean_object* v_msg_5165_, lean_object* v___y_5166_, lean_object* v___y_5167_, lean_object* v___y_5168_, lean_object* v___y_5169_, lean_object* v___y_5170_, lean_object* v___y_5171_, lean_object* v___y_5172_, lean_object* v___y_5173_, lean_object* v___y_5174_, lean_object* v___y_5175_){
_start:
{
uint8_t v___y_18594__boxed_5176_; lean_object* v_res_5177_; 
v___y_18594__boxed_5176_ = lean_unbox(v___y_5169_);
v_res_5177_ = l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_Problem_runOmega_spec__0(v_cls_5164_, v_msg_5165_, v___y_5166_, v___y_5167_, v___y_5168_, v___y_18594__boxed_5176_, v___y_5170_, v___y_5171_, v___y_5172_, v___y_5173_, v___y_5174_);
lean_dec(v___y_5174_);
lean_dec_ref(v___y_5173_);
lean_dec(v___y_5172_);
lean_dec_ref(v___y_5171_);
lean_dec(v___y_5170_);
lean_dec_ref(v___y_5168_);
lean_dec(v___y_5167_);
lean_dec(v___y_5166_);
return v_res_5177_;
}
}
lean_object* runtime_initialize_Lean_Elab_Tactic_Omega_OmegaM(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Omega_MinNatAbs(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_Omega_Core(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_Tactic_Omega_OmegaM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Omega_MinNatAbs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Tactic_Omega_instToExprLinearCombo = _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo();
lean_mark_persistent(l_Lean_Elab_Tactic_Omega_instToExprLinearCombo);
l_Lean_Elab_Tactic_Omega_instToExprConstraint = _init_l_Lean_Elab_Tactic_Omega_instToExprConstraint();
lean_mark_persistent(l_Lean_Elab_Tactic_Omega_instToExprConstraint);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Tactic_Omega_Core(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam = _init_l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam();
lean_mark_persistent(l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Tactic_Omega_OmegaM(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Omega_MinNatAbs(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_Omega_Core(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Tactic_Omega_OmegaM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Omega_MinNatAbs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Omega_Core(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Tactic_Omega_Core(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Tactic_Omega_Core(builtin);
}
#ifdef __cplusplus
}
#endif
