// Lean compiler output
// Module: Std.Time.Internal.Bounded
// Imports: public import Init.Data.Int.DivMod.Lemmas public import Init.Data.Order.Ord public import Init.Data.Int.Repr public import Init.Omega import Init.Ext
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
lean_object* lean_int_emod(lean_object*, lean_object*);
lean_object* lean_int_add(lean_object*, lean_object*);
lean_object* lean_int_neg(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
uint8_t lean_int_dec_le(lean_object*, lean_object*);
lean_object* lean_int_mod(lean_object*, lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
lean_object* l_Int_repr(lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
lean_object* lean_int_sub(lean_object*, lean_object*);
lean_object* lean_int_mul(lean_object*, lean_object*);
lean_object* l_instOrdInt___lam__0___boxed(lean_object*, lean_object*);
lean_object* l_compareOn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_abs(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Int_toNat(lean_object*);
lean_object* lean_int_ediv(lean_object*, lean_object*);
uint8_t lean_int_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_instLE___redArg();
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_instLE___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_instLE(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_instLE___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_instLT___redArg();
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_instLT___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_instLT(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_instLT___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_instOrd___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_instOrd___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Std_Time_Internal_Bounded_instOrd___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Internal_Bounded_instOrd___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Internal_Bounded_instOrd___redArg___closed__0 = (const lean_object*)&l_Std_Time_Internal_Bounded_instOrd___redArg___closed__0_value;
static const lean_closure_object l_Std_Time_Internal_Bounded_instOrd___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instOrdInt___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Internal_Bounded_instOrd___redArg___closed__1 = (const lean_object*)&l_Std_Time_Internal_Bounded_instOrd___redArg___closed__1_value;
static const lean_closure_object l_Std_Time_Internal_Bounded_instOrd___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_compareOn___boxed, .m_arity = 6, .m_num_fixed = 4, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Time_Internal_Bounded_instOrd___redArg___closed__1_value),((lean_object*)&l_Std_Time_Internal_Bounded_instOrd___redArg___closed__0_value)} };
static const lean_object* l_Std_Time_Internal_Bounded_instOrd___redArg___closed__2 = (const lean_object*)&l_Std_Time_Internal_Bounded_instOrd___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_instOrd___redArg();
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_instOrd___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_instOrd(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_instOrd___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Std_Time_Internal_Bounded_instRepr___redArg___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Internal_Bounded_instRepr___redArg___lam__0___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_instRepr___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_instRepr___redArg___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_Internal_Bounded_instRepr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Internal_Bounded_instRepr___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Internal_Bounded_instRepr___redArg___closed__0 = (const lean_object*)&l_Std_Time_Internal_Bounded_instRepr___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_instRepr___redArg();
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_instRepr___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_instRepr(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_instRepr___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_Internal_Bounded_instDecidableEq___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_instDecidableEq___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_Internal_Bounded_instDecidableEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_instDecidableEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_Internal_Bounded_instDecidableLe___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_instDecidableLe___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_Internal_Bounded_instDecidableLe(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_instDecidableLe___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_Internal_Bounded_instDecidableLt___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_instDecidableLt___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_Internal_Bounded_instDecidableLt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_instDecidableLt___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_cast___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_cast___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_cast(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_cast___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_mk___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_mk___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_mk(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_mk___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_ofInt_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_ofInt_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Std_Time_Internal_Bounded_LE_ofNatWrapping___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Internal_Bounded_LE_ofNatWrapping___redArg___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_ofNatWrapping___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_ofNatWrapping___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_ofNatWrapping(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_ofNatWrapping___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_instOfNatHAddIntCast(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_instOfNatHAddIntCast___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_instInhabitedHAddIntCast(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_instInhabitedHAddIntCast___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_mk___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_mk___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_mk(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_mk___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_exact(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_ofInt(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_ofInt___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_ofNat___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_ofNat(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_ofNat___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_ofNat_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_ofNat_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_ofNat_x27___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_ofNat_x27(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_ofNat_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_clip___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_clip___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_clip(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_clip___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_toNat___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_toNat___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_toNat(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_toNat___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_toNat_x27___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_toNat_x27___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_toNat_x27(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_toNat_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_toInt___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_toInt___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_toInt(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_toInt___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_toFin___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_toFin___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_toFin(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_toFin___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_ofFin___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_ofFin(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_ofFin___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_ofFin_x27___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_ofFin_x27(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_ofFin_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_byEmod___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_byEmod___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_byEmod(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_byEmod___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Std_Time_Internal_Bounded_0__Int_tdiv_match__1_splitter___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Internal_Bounded_0__Int_tdiv_match__1_splitter___redArg___closed__0;
LEAN_EXPORT lean_object* l___private_Std_Time_Internal_Bounded_0__Int_tdiv_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Internal_Bounded_0__Int_tdiv_match__1_splitter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Internal_Bounded_0__Int_tdiv_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Internal_Bounded_0__Int_tdiv_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_byMod___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_byMod___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_byMod(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_byMod___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_truncate___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_truncate___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_truncate(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_truncate___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_truncateTop___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_truncateTop___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_truncateTop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_truncateTop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_truncateBottom___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_truncateBottom___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_truncateBottom(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_truncateBottom___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_neg___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_neg___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_neg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_neg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_add___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_add___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_add(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_add___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_addProven___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_addProven___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_addProven(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_addProven___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_addTop___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_addTop___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_addTop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_addTop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_subBottom___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_subBottom___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_subBottom(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_subBottom___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_addBounds___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_addBounds___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_addBounds(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_addBounds___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_sub___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_sub___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_sub(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_sub___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_subBounds___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_subBounds___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_subBounds(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_subBounds___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_emod___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_emod___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_emod(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_emod___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_mod___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_mod___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_mod(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_mod___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_mul__pos___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_mul__pos___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_mul__pos(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_mul__pos___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_mul__neg___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_mul__neg___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_mul__neg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_mul__neg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_ediv___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_ediv___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_ediv(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_ediv___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_eq(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_eq___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_expand___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_expand___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_expand(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_expand___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_expandTop___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_expandTop___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_expandTop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_expandTop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_expandBottom___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_expandBottom___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_expandBottom(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_expandBottom___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_succ___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_succ___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_succ(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_succ___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_abs___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_abs___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_abs(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_abs___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_max___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_max___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_max(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_max___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_instLE___redArg(){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_box(0);
return v___x_2_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_instLE___redArg___boxed(lean_object* v___dummy_3_){
_start:
{
lean_object* v_res_4_; 
v_res_4_ = l_Std_Time_Internal_Bounded_instLE___redArg();
return v_res_4_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_instLE(lean_object* v_rel_5_, lean_object* v_n_6_, lean_object* v_m_7_){
_start:
{
lean_object* v___x_8_; 
v___x_8_ = lean_box(0);
return v___x_8_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_instLE___boxed(lean_object* v_rel_9_, lean_object* v_n_10_, lean_object* v_m_11_){
_start:
{
lean_object* v_res_12_; 
v_res_12_ = l_Std_Time_Internal_Bounded_instLE(v_rel_9_, v_n_10_, v_m_11_);
lean_dec(v_m_11_);
lean_dec(v_n_10_);
return v_res_12_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_instLT___redArg(){
_start:
{
lean_object* v___x_14_; 
v___x_14_ = lean_box(0);
return v___x_14_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_instLT___redArg___boxed(lean_object* v___dummy_15_){
_start:
{
lean_object* v_res_16_; 
v_res_16_ = l_Std_Time_Internal_Bounded_instLT___redArg();
return v_res_16_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_instLT(lean_object* v_rel_17_, lean_object* v_n_18_, lean_object* v_m_19_){
_start:
{
lean_object* v___x_20_; 
v___x_20_ = lean_box(0);
return v___x_20_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_instLT___boxed(lean_object* v_rel_21_, lean_object* v_n_22_, lean_object* v_m_23_){
_start:
{
lean_object* v_res_24_; 
v_res_24_ = l_Std_Time_Internal_Bounded_instLT(v_rel_21_, v_n_22_, v_m_23_);
lean_dec(v_m_23_);
lean_dec(v_n_22_);
return v_res_24_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_instOrd___redArg___lam__0(lean_object* v_x_25_){
_start:
{
lean_inc(v_x_25_);
return v_x_25_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_instOrd___redArg___lam__0___boxed(lean_object* v_x_26_){
_start:
{
lean_object* v_res_27_; 
v_res_27_ = l_Std_Time_Internal_Bounded_instOrd___redArg___lam__0(v_x_26_);
lean_dec(v_x_26_);
return v_res_27_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_instOrd___redArg(){
_start:
{
lean_object* v___x_34_; 
v___x_34_ = ((lean_object*)(l_Std_Time_Internal_Bounded_instOrd___redArg___closed__2));
return v___x_34_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_instOrd___redArg___boxed(lean_object* v___dummy_35_){
_start:
{
lean_object* v_res_36_; 
v_res_36_ = l_Std_Time_Internal_Bounded_instOrd___redArg();
return v_res_36_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_instOrd(lean_object* v_rel_37_, lean_object* v_n_38_, lean_object* v_m_39_){
_start:
{
lean_object* v___x_40_; 
v___x_40_ = ((lean_object*)(l_Std_Time_Internal_Bounded_instOrd___redArg___closed__2));
return v___x_40_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_instOrd___boxed(lean_object* v_rel_41_, lean_object* v_n_42_, lean_object* v_m_43_){
_start:
{
lean_object* v_res_44_; 
v_res_44_ = l_Std_Time_Internal_Bounded_instOrd(v_rel_41_, v_n_42_, v_m_43_);
lean_dec(v_m_43_);
lean_dec(v_n_42_);
return v_res_44_;
}
}
static lean_object* _init_l_Std_Time_Internal_Bounded_instRepr___redArg___lam__0___closed__0(void){
_start:
{
lean_object* v___x_45_; lean_object* v___x_46_; 
v___x_45_ = lean_unsigned_to_nat(0u);
v___x_46_ = lean_nat_to_int(v___x_45_);
return v___x_46_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_instRepr___redArg___lam__0(lean_object* v_n_47_, lean_object* v___y_48_){
_start:
{
lean_object* v___x_49_; uint8_t v___x_50_; 
v___x_49_ = lean_obj_once(&l_Std_Time_Internal_Bounded_instRepr___redArg___lam__0___closed__0, &l_Std_Time_Internal_Bounded_instRepr___redArg___lam__0___closed__0_once, _init_l_Std_Time_Internal_Bounded_instRepr___redArg___lam__0___closed__0);
v___x_50_ = lean_int_dec_lt(v_n_47_, v___x_49_);
if (v___x_50_ == 0)
{
lean_object* v___x_51_; lean_object* v___x_52_; 
v___x_51_ = l_Int_repr(v_n_47_);
v___x_52_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_52_, 0, v___x_51_);
return v___x_52_;
}
else
{
lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v___x_55_; 
v___x_53_ = l_Int_repr(v_n_47_);
v___x_54_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_54_, 0, v___x_53_);
v___x_55_ = l_Repr_addAppParen(v___x_54_, v___y_48_);
return v___x_55_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_instRepr___redArg___lam__0___boxed(lean_object* v_n_56_, lean_object* v___y_57_){
_start:
{
lean_object* v_res_58_; 
v_res_58_ = l_Std_Time_Internal_Bounded_instRepr___redArg___lam__0(v_n_56_, v___y_57_);
lean_dec(v___y_57_);
lean_dec(v_n_56_);
return v_res_58_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_instRepr___redArg(){
_start:
{
lean_object* v___f_61_; 
v___f_61_ = ((lean_object*)(l_Std_Time_Internal_Bounded_instRepr___redArg___closed__0));
return v___f_61_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_instRepr___redArg___boxed(lean_object* v___dummy_62_){
_start:
{
lean_object* v_res_63_; 
v_res_63_ = l_Std_Time_Internal_Bounded_instRepr___redArg();
return v_res_63_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_instRepr(lean_object* v_rel_64_, lean_object* v_m_65_, lean_object* v_n_66_){
_start:
{
lean_object* v___f_67_; 
v___f_67_ = ((lean_object*)(l_Std_Time_Internal_Bounded_instRepr___redArg___closed__0));
return v___f_67_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_instRepr___boxed(lean_object* v_rel_68_, lean_object* v_m_69_, lean_object* v_n_70_){
_start:
{
lean_object* v_res_71_; 
v_res_71_ = l_Std_Time_Internal_Bounded_instRepr(v_rel_68_, v_m_69_, v_n_70_);
lean_dec(v_n_70_);
lean_dec(v_m_69_);
return v_res_71_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Internal_Bounded_instDecidableEq___redArg(lean_object* v_a_72_, lean_object* v_b_73_){
_start:
{
uint8_t v___x_74_; 
v___x_74_ = lean_int_dec_eq(v_a_72_, v_b_73_);
return v___x_74_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_instDecidableEq___redArg___boxed(lean_object* v_a_75_, lean_object* v_b_76_){
_start:
{
uint8_t v_res_77_; lean_object* v_r_78_; 
v_res_77_ = l_Std_Time_Internal_Bounded_instDecidableEq___redArg(v_a_75_, v_b_76_);
lean_dec(v_b_76_);
lean_dec(v_a_75_);
v_r_78_ = lean_box(v_res_77_);
return v_r_78_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Internal_Bounded_instDecidableEq(lean_object* v_rel_79_, lean_object* v_n_80_, lean_object* v_m_81_, lean_object* v_a_82_, lean_object* v_b_83_){
_start:
{
uint8_t v___x_84_; 
v___x_84_ = lean_int_dec_eq(v_a_82_, v_b_83_);
return v___x_84_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_instDecidableEq___boxed(lean_object* v_rel_85_, lean_object* v_n_86_, lean_object* v_m_87_, lean_object* v_a_88_, lean_object* v_b_89_){
_start:
{
uint8_t v_res_90_; lean_object* v_r_91_; 
v_res_90_ = l_Std_Time_Internal_Bounded_instDecidableEq(v_rel_85_, v_n_86_, v_m_87_, v_a_88_, v_b_89_);
lean_dec(v_b_89_);
lean_dec(v_a_88_);
lean_dec(v_m_87_);
lean_dec(v_n_86_);
v_r_91_ = lean_box(v_res_90_);
return v_r_91_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Internal_Bounded_instDecidableLe___redArg(lean_object* v_x_92_, lean_object* v_y_93_){
_start:
{
uint8_t v___x_94_; 
v___x_94_ = lean_int_dec_le(v_x_92_, v_y_93_);
return v___x_94_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_instDecidableLe___redArg___boxed(lean_object* v_x_95_, lean_object* v_y_96_){
_start:
{
uint8_t v_res_97_; lean_object* v_r_98_; 
v_res_97_ = l_Std_Time_Internal_Bounded_instDecidableLe___redArg(v_x_95_, v_y_96_);
lean_dec(v_y_96_);
lean_dec(v_x_95_);
v_r_98_ = lean_box(v_res_97_);
return v_r_98_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Internal_Bounded_instDecidableLe(lean_object* v_rel_99_, lean_object* v_a_100_, lean_object* v_b_101_, lean_object* v_x_102_, lean_object* v_y_103_){
_start:
{
uint8_t v___x_104_; 
v___x_104_ = lean_int_dec_le(v_x_102_, v_y_103_);
return v___x_104_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_instDecidableLe___boxed(lean_object* v_rel_105_, lean_object* v_a_106_, lean_object* v_b_107_, lean_object* v_x_108_, lean_object* v_y_109_){
_start:
{
uint8_t v_res_110_; lean_object* v_r_111_; 
v_res_110_ = l_Std_Time_Internal_Bounded_instDecidableLe(v_rel_105_, v_a_106_, v_b_107_, v_x_108_, v_y_109_);
lean_dec(v_y_109_);
lean_dec(v_x_108_);
lean_dec(v_b_107_);
lean_dec(v_a_106_);
v_r_111_ = lean_box(v_res_110_);
return v_r_111_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Internal_Bounded_instDecidableLt___redArg(lean_object* v_x_112_, lean_object* v_y_113_){
_start:
{
uint8_t v___x_114_; 
v___x_114_ = lean_int_dec_lt(v_x_112_, v_y_113_);
return v___x_114_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_instDecidableLt___redArg___boxed(lean_object* v_x_115_, lean_object* v_y_116_){
_start:
{
uint8_t v_res_117_; lean_object* v_r_118_; 
v_res_117_ = l_Std_Time_Internal_Bounded_instDecidableLt___redArg(v_x_115_, v_y_116_);
lean_dec(v_y_116_);
lean_dec(v_x_115_);
v_r_118_ = lean_box(v_res_117_);
return v_r_118_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Internal_Bounded_instDecidableLt(lean_object* v_rel_119_, lean_object* v_a_120_, lean_object* v_b_121_, lean_object* v_x_122_, lean_object* v_y_123_){
_start:
{
uint8_t v___x_124_; 
v___x_124_ = lean_int_dec_lt(v_x_122_, v_y_123_);
return v___x_124_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_instDecidableLt___boxed(lean_object* v_rel_125_, lean_object* v_a_126_, lean_object* v_b_127_, lean_object* v_x_128_, lean_object* v_y_129_){
_start:
{
uint8_t v_res_130_; lean_object* v_r_131_; 
v_res_130_ = l_Std_Time_Internal_Bounded_instDecidableLt(v_rel_125_, v_a_126_, v_b_127_, v_x_128_, v_y_129_);
lean_dec(v_y_129_);
lean_dec(v_x_128_);
lean_dec(v_b_127_);
lean_dec(v_a_126_);
v_r_131_ = lean_box(v_res_130_);
return v_r_131_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_cast___redArg(lean_object* v_b_132_){
_start:
{
lean_inc(v_b_132_);
return v_b_132_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_cast___redArg___boxed(lean_object* v_b_133_){
_start:
{
lean_object* v_res_134_; 
v_res_134_ = l_Std_Time_Internal_Bounded_cast___redArg(v_b_133_);
lean_dec(v_b_133_);
return v_res_134_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_cast(lean_object* v_rel_135_, lean_object* v_lo_u2081_136_, lean_object* v_lo_u2082_137_, lean_object* v_hi_u2081_138_, lean_object* v_hi_u2082_139_, lean_object* v_h_u2081_140_, lean_object* v_h_u2082_141_, lean_object* v_b_142_){
_start:
{
lean_inc(v_b_142_);
return v_b_142_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_cast___boxed(lean_object* v_rel_143_, lean_object* v_lo_u2081_144_, lean_object* v_lo_u2082_145_, lean_object* v_hi_u2081_146_, lean_object* v_hi_u2082_147_, lean_object* v_h_u2081_148_, lean_object* v_h_u2082_149_, lean_object* v_b_150_){
_start:
{
lean_object* v_res_151_; 
v_res_151_ = l_Std_Time_Internal_Bounded_cast(v_rel_143_, v_lo_u2081_144_, v_lo_u2082_145_, v_hi_u2081_146_, v_hi_u2082_147_, v_h_u2081_148_, v_h_u2082_149_, v_b_150_);
lean_dec(v_b_150_);
lean_dec(v_hi_u2082_147_);
lean_dec(v_hi_u2081_146_);
lean_dec(v_lo_u2082_145_);
lean_dec(v_lo_u2081_144_);
return v_res_151_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_mk___redArg(lean_object* v_val_152_){
_start:
{
lean_inc(v_val_152_);
return v_val_152_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_mk___redArg___boxed(lean_object* v_val_153_){
_start:
{
lean_object* v_res_154_; 
v_res_154_ = l_Std_Time_Internal_Bounded_mk___redArg(v_val_153_);
lean_dec(v_val_153_);
return v_res_154_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_mk(lean_object* v_lo_155_, lean_object* v_hi_156_, lean_object* v_rel_157_, lean_object* v_val_158_, lean_object* v_proof_159_){
_start:
{
lean_inc(v_val_158_);
return v_val_158_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_mk___boxed(lean_object* v_lo_160_, lean_object* v_hi_161_, lean_object* v_rel_162_, lean_object* v_val_163_, lean_object* v_proof_164_){
_start:
{
lean_object* v_res_165_; 
v_res_165_ = l_Std_Time_Internal_Bounded_mk(v_lo_160_, v_hi_161_, v_rel_162_, v_val_163_, v_proof_164_);
lean_dec(v_val_163_);
lean_dec(v_hi_161_);
lean_dec(v_lo_160_);
return v_res_165_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_ofInt_x3f___redArg(lean_object* v_lo_166_, lean_object* v_hi_167_, lean_object* v_inst_168_, lean_object* v_val_169_){
_start:
{
lean_object* v___x_170_; uint8_t v___x_171_; 
lean_inc_ref(v_inst_168_);
lean_inc(v_val_169_);
v___x_170_ = lean_apply_2(v_inst_168_, v_lo_166_, v_val_169_);
v___x_171_ = lean_unbox(v___x_170_);
if (v___x_171_ == 0)
{
lean_object* v___x_172_; 
lean_dec(v_val_169_);
lean_dec_ref(v_inst_168_);
lean_dec(v_hi_167_);
v___x_172_ = lean_box(0);
return v___x_172_;
}
else
{
lean_object* v___x_173_; uint8_t v___x_174_; 
lean_inc(v_val_169_);
v___x_173_ = lean_apply_2(v_inst_168_, v_val_169_, v_hi_167_);
v___x_174_ = lean_unbox(v___x_173_);
if (v___x_174_ == 0)
{
lean_object* v___x_175_; 
lean_dec(v_val_169_);
v___x_175_ = lean_box(0);
return v___x_175_;
}
else
{
lean_object* v___x_176_; 
v___x_176_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_176_, 0, v_val_169_);
return v___x_176_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_ofInt_x3f(lean_object* v_rel_177_, lean_object* v_lo_178_, lean_object* v_hi_179_, lean_object* v_inst_180_, lean_object* v_val_181_){
_start:
{
lean_object* v___x_182_; uint8_t v___x_183_; 
lean_inc_ref(v_inst_180_);
lean_inc(v_val_181_);
v___x_182_ = lean_apply_2(v_inst_180_, v_lo_178_, v_val_181_);
v___x_183_ = lean_unbox(v___x_182_);
if (v___x_183_ == 0)
{
lean_object* v___x_184_; 
lean_dec(v_val_181_);
lean_dec_ref(v_inst_180_);
lean_dec(v_hi_179_);
v___x_184_ = lean_box(0);
return v___x_184_;
}
else
{
lean_object* v___x_185_; uint8_t v___x_186_; 
lean_inc(v_val_181_);
v___x_185_ = lean_apply_2(v_inst_180_, v_val_181_, v_hi_179_);
v___x_186_ = lean_unbox(v___x_185_);
if (v___x_186_ == 0)
{
lean_object* v___x_187_; 
lean_dec(v_val_181_);
v___x_187_ = lean_box(0);
return v___x_187_;
}
else
{
lean_object* v___x_188_; 
v___x_188_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_188_, 0, v_val_181_);
return v___x_188_;
}
}
}
}
static lean_object* _init_l_Std_Time_Internal_Bounded_LE_ofNatWrapping___redArg___closed__0(void){
_start:
{
lean_object* v___x_189_; lean_object* v___x_190_; 
v___x_189_ = lean_unsigned_to_nat(1u);
v___x_190_ = lean_nat_to_int(v___x_189_);
return v___x_190_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_ofNatWrapping___redArg(lean_object* v_lo_191_, lean_object* v_hi_192_, lean_object* v_val_193_){
_start:
{
lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v_range_196_; lean_object* v___x_197_; lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; 
v___x_194_ = lean_int_sub(v_hi_192_, v_lo_191_);
v___x_195_ = lean_obj_once(&l_Std_Time_Internal_Bounded_LE_ofNatWrapping___redArg___closed__0, &l_Std_Time_Internal_Bounded_LE_ofNatWrapping___redArg___closed__0_once, _init_l_Std_Time_Internal_Bounded_LE_ofNatWrapping___redArg___closed__0);
v_range_196_ = lean_int_add(v___x_194_, v___x_195_);
lean_dec(v___x_194_);
v___x_197_ = lean_int_sub(v_val_193_, v_lo_191_);
v___x_198_ = lean_int_emod(v___x_197_, v_range_196_);
lean_dec(v___x_197_);
v___x_199_ = lean_int_add(v___x_198_, v_range_196_);
lean_dec(v___x_198_);
v___x_200_ = lean_int_emod(v___x_199_, v_range_196_);
lean_dec(v_range_196_);
lean_dec(v___x_199_);
v___x_201_ = lean_int_add(v___x_200_, v_lo_191_);
lean_dec(v___x_200_);
return v___x_201_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_ofNatWrapping___redArg___boxed(lean_object* v_lo_202_, lean_object* v_hi_203_, lean_object* v_val_204_){
_start:
{
lean_object* v_res_205_; 
v_res_205_ = l_Std_Time_Internal_Bounded_LE_ofNatWrapping___redArg(v_lo_202_, v_hi_203_, v_val_204_);
lean_dec(v_val_204_);
lean_dec(v_hi_203_);
lean_dec(v_lo_202_);
return v_res_205_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_ofNatWrapping(lean_object* v_lo_206_, lean_object* v_hi_207_, lean_object* v_val_208_, lean_object* v_h_209_){
_start:
{
lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v_range_212_; lean_object* v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; 
v___x_210_ = lean_int_sub(v_hi_207_, v_lo_206_);
v___x_211_ = lean_obj_once(&l_Std_Time_Internal_Bounded_LE_ofNatWrapping___redArg___closed__0, &l_Std_Time_Internal_Bounded_LE_ofNatWrapping___redArg___closed__0_once, _init_l_Std_Time_Internal_Bounded_LE_ofNatWrapping___redArg___closed__0);
v_range_212_ = lean_int_add(v___x_210_, v___x_211_);
lean_dec(v___x_210_);
v___x_213_ = lean_int_sub(v_val_208_, v_lo_206_);
v___x_214_ = lean_int_emod(v___x_213_, v_range_212_);
lean_dec(v___x_213_);
v___x_215_ = lean_int_add(v___x_214_, v_range_212_);
lean_dec(v___x_214_);
v___x_216_ = lean_int_emod(v___x_215_, v_range_212_);
lean_dec(v_range_212_);
lean_dec(v___x_215_);
v___x_217_ = lean_int_add(v___x_216_, v_lo_206_);
lean_dec(v___x_216_);
return v___x_217_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_ofNatWrapping___boxed(lean_object* v_lo_218_, lean_object* v_hi_219_, lean_object* v_val_220_, lean_object* v_h_221_){
_start:
{
lean_object* v_res_222_; 
v_res_222_ = l_Std_Time_Internal_Bounded_LE_ofNatWrapping(v_lo_218_, v_hi_219_, v_val_220_, v_h_221_);
lean_dec(v_val_220_);
lean_dec(v_hi_219_);
lean_dec(v_lo_218_);
return v_res_222_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_instOfNatHAddIntCast(lean_object* v_lo_223_, lean_object* v_n_224_, lean_object* v_k_225_){
_start:
{
lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v_range_231_; lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; 
v___x_226_ = lean_nat_to_int(v_k_225_);
v___x_227_ = lean_int_add(v_lo_223_, v___x_226_);
lean_dec(v___x_226_);
v___x_228_ = lean_nat_to_int(v_n_224_);
v___x_229_ = lean_int_sub(v___x_227_, v_lo_223_);
lean_dec(v___x_227_);
v___x_230_ = lean_obj_once(&l_Std_Time_Internal_Bounded_LE_ofNatWrapping___redArg___closed__0, &l_Std_Time_Internal_Bounded_LE_ofNatWrapping___redArg___closed__0_once, _init_l_Std_Time_Internal_Bounded_LE_ofNatWrapping___redArg___closed__0);
v_range_231_ = lean_int_add(v___x_229_, v___x_230_);
lean_dec(v___x_229_);
v___x_232_ = lean_int_sub(v___x_228_, v_lo_223_);
lean_dec(v___x_228_);
v___x_233_ = lean_int_emod(v___x_232_, v_range_231_);
lean_dec(v___x_232_);
v___x_234_ = lean_int_add(v___x_233_, v_range_231_);
lean_dec(v___x_233_);
v___x_235_ = lean_int_emod(v___x_234_, v_range_231_);
lean_dec(v_range_231_);
lean_dec(v___x_234_);
v___x_236_ = lean_int_add(v___x_235_, v_lo_223_);
lean_dec(v___x_235_);
return v___x_236_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_instOfNatHAddIntCast___boxed(lean_object* v_lo_237_, lean_object* v_n_238_, lean_object* v_k_239_){
_start:
{
lean_object* v_res_240_; 
v_res_240_ = l_Std_Time_Internal_Bounded_LE_instOfNatHAddIntCast(v_lo_237_, v_n_238_, v_k_239_);
lean_dec(v_lo_237_);
return v_res_240_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_instInhabitedHAddIntCast(lean_object* v_lo_241_, lean_object* v_k_242_){
_start:
{
lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v_range_247_; lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; 
v___x_243_ = lean_nat_to_int(v_k_242_);
v___x_244_ = lean_int_add(v_lo_241_, v___x_243_);
lean_dec(v___x_243_);
v___x_245_ = lean_int_sub(v___x_244_, v_lo_241_);
lean_dec(v___x_244_);
v___x_246_ = lean_obj_once(&l_Std_Time_Internal_Bounded_LE_ofNatWrapping___redArg___closed__0, &l_Std_Time_Internal_Bounded_LE_ofNatWrapping___redArg___closed__0_once, _init_l_Std_Time_Internal_Bounded_LE_ofNatWrapping___redArg___closed__0);
v_range_247_ = lean_int_add(v___x_245_, v___x_246_);
lean_dec(v___x_245_);
v___x_248_ = lean_int_sub(v_lo_241_, v_lo_241_);
v___x_249_ = lean_int_emod(v___x_248_, v_range_247_);
lean_dec(v___x_248_);
v___x_250_ = lean_int_add(v___x_249_, v_range_247_);
lean_dec(v___x_249_);
v___x_251_ = lean_int_emod(v___x_250_, v_range_247_);
lean_dec(v_range_247_);
lean_dec(v___x_250_);
v___x_252_ = lean_int_add(v___x_251_, v_lo_241_);
lean_dec(v___x_251_);
return v___x_252_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_instInhabitedHAddIntCast___boxed(lean_object* v_lo_253_, lean_object* v_k_254_){
_start:
{
lean_object* v_res_255_; 
v_res_255_ = l_Std_Time_Internal_Bounded_LE_instInhabitedHAddIntCast(v_lo_253_, v_k_254_);
lean_dec(v_lo_253_);
return v_res_255_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_mk___redArg(lean_object* v_val_256_){
_start:
{
lean_inc(v_val_256_);
return v_val_256_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_mk___redArg___boxed(lean_object* v_val_257_){
_start:
{
lean_object* v_res_258_; 
v_res_258_ = l_Std_Time_Internal_Bounded_LE_mk___redArg(v_val_257_);
lean_dec(v_val_257_);
return v_res_258_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_mk(lean_object* v_lo_259_, lean_object* v_hi_260_, lean_object* v_val_261_, lean_object* v_proof_262_){
_start:
{
lean_inc(v_val_261_);
return v_val_261_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_mk___boxed(lean_object* v_lo_263_, lean_object* v_hi_264_, lean_object* v_val_265_, lean_object* v_proof_266_){
_start:
{
lean_object* v_res_267_; 
v_res_267_ = l_Std_Time_Internal_Bounded_LE_mk(v_lo_263_, v_hi_264_, v_val_265_, v_proof_266_);
lean_dec(v_val_265_);
lean_dec(v_hi_264_);
lean_dec(v_lo_263_);
return v_res_267_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_exact(lean_object* v_val_268_){
_start:
{
lean_object* v___x_269_; 
v___x_269_ = lean_nat_to_int(v_val_268_);
return v___x_269_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_ofInt(lean_object* v_lo_270_, lean_object* v_hi_271_, lean_object* v_val_272_){
_start:
{
uint8_t v___y_274_; uint8_t v___x_277_; 
v___x_277_ = lean_int_dec_le(v_lo_270_, v_val_272_);
if (v___x_277_ == 0)
{
v___y_274_ = v___x_277_;
goto v___jp_273_;
}
else
{
uint8_t v___x_278_; 
v___x_278_ = lean_int_dec_le(v_val_272_, v_hi_271_);
v___y_274_ = v___x_278_;
goto v___jp_273_;
}
v___jp_273_:
{
if (v___y_274_ == 0)
{
lean_object* v___x_275_; 
lean_dec(v_val_272_);
v___x_275_ = lean_box(0);
return v___x_275_;
}
else
{
lean_object* v___x_276_; 
v___x_276_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_276_, 0, v_val_272_);
return v___x_276_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_ofInt___boxed(lean_object* v_lo_279_, lean_object* v_hi_280_, lean_object* v_val_281_){
_start:
{
lean_object* v_res_282_; 
v_res_282_ = l_Std_Time_Internal_Bounded_LE_ofInt(v_lo_279_, v_hi_280_, v_val_281_);
lean_dec(v_hi_280_);
lean_dec(v_lo_279_);
return v_res_282_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_ofNat___redArg(lean_object* v_val_283_){
_start:
{
lean_object* v___x_284_; 
v___x_284_ = lean_nat_to_int(v_val_283_);
return v___x_284_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_ofNat(lean_object* v_hi_285_, lean_object* v_val_286_, lean_object* v_h_287_){
_start:
{
lean_object* v___x_288_; 
v___x_288_ = lean_nat_to_int(v_val_286_);
return v___x_288_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_ofNat___boxed(lean_object* v_hi_289_, lean_object* v_val_290_, lean_object* v_h_291_){
_start:
{
lean_object* v_res_292_; 
v_res_292_ = l_Std_Time_Internal_Bounded_LE_ofNat(v_hi_289_, v_val_290_, v_h_291_);
lean_dec(v_hi_289_);
return v_res_292_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_ofNat_x3f(lean_object* v_hi_293_, lean_object* v_val_294_){
_start:
{
uint8_t v___x_295_; 
v___x_295_ = lean_nat_dec_le(v_val_294_, v_hi_293_);
if (v___x_295_ == 0)
{
lean_object* v___x_296_; 
lean_dec(v_val_294_);
v___x_296_ = lean_box(0);
return v___x_296_;
}
else
{
lean_object* v___x_297_; lean_object* v___x_298_; 
v___x_297_ = lean_nat_to_int(v_val_294_);
v___x_298_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_298_, 0, v___x_297_);
return v___x_298_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_ofNat_x3f___boxed(lean_object* v_hi_299_, lean_object* v_val_300_){
_start:
{
lean_object* v_res_301_; 
v_res_301_ = l_Std_Time_Internal_Bounded_LE_ofNat_x3f(v_hi_299_, v_val_300_);
lean_dec(v_hi_299_);
return v_res_301_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_ofNat_x27___redArg(lean_object* v_val_302_){
_start:
{
lean_object* v___x_303_; 
v___x_303_ = lean_nat_to_int(v_val_302_);
return v___x_303_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_ofNat_x27(lean_object* v_lo_304_, lean_object* v_hi_305_, lean_object* v_val_306_, lean_object* v_h_307_){
_start:
{
lean_object* v___x_308_; 
v___x_308_ = lean_nat_to_int(v_val_306_);
return v___x_308_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_ofNat_x27___boxed(lean_object* v_lo_309_, lean_object* v_hi_310_, lean_object* v_val_311_, lean_object* v_h_312_){
_start:
{
lean_object* v_res_313_; 
v_res_313_ = l_Std_Time_Internal_Bounded_LE_ofNat_x27(v_lo_309_, v_hi_310_, v_val_311_, v_h_312_);
lean_dec(v_hi_310_);
lean_dec(v_lo_309_);
return v_res_313_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_clip___redArg(lean_object* v_lo_314_, lean_object* v_hi_315_, lean_object* v_val_316_){
_start:
{
uint8_t v___x_317_; 
v___x_317_ = lean_int_dec_le(v_lo_314_, v_val_316_);
if (v___x_317_ == 0)
{
lean_inc(v_lo_314_);
return v_lo_314_;
}
else
{
uint8_t v___x_318_; 
v___x_318_ = lean_int_dec_le(v_val_316_, v_hi_315_);
if (v___x_318_ == 0)
{
lean_inc(v_hi_315_);
return v_hi_315_;
}
else
{
lean_inc(v_val_316_);
return v_val_316_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_clip___redArg___boxed(lean_object* v_lo_319_, lean_object* v_hi_320_, lean_object* v_val_321_){
_start:
{
lean_object* v_res_322_; 
v_res_322_ = l_Std_Time_Internal_Bounded_LE_clip___redArg(v_lo_319_, v_hi_320_, v_val_321_);
lean_dec(v_val_321_);
lean_dec(v_hi_320_);
lean_dec(v_lo_319_);
return v_res_322_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_clip(lean_object* v_lo_323_, lean_object* v_hi_324_, lean_object* v_val_325_, lean_object* v_h_326_){
_start:
{
uint8_t v___x_327_; 
v___x_327_ = lean_int_dec_le(v_lo_323_, v_val_325_);
if (v___x_327_ == 0)
{
lean_inc(v_lo_323_);
return v_lo_323_;
}
else
{
uint8_t v___x_328_; 
v___x_328_ = lean_int_dec_le(v_val_325_, v_hi_324_);
if (v___x_328_ == 0)
{
lean_inc(v_hi_324_);
return v_hi_324_;
}
else
{
lean_inc(v_val_325_);
return v_val_325_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_clip___boxed(lean_object* v_lo_329_, lean_object* v_hi_330_, lean_object* v_val_331_, lean_object* v_h_332_){
_start:
{
lean_object* v_res_333_; 
v_res_333_ = l_Std_Time_Internal_Bounded_LE_clip(v_lo_329_, v_hi_330_, v_val_331_, v_h_332_);
lean_dec(v_val_331_);
lean_dec(v_hi_330_);
lean_dec(v_lo_329_);
return v_res_333_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_toNat___redArg(lean_object* v_n_334_){
_start:
{
lean_object* v___x_335_; 
v___x_335_ = l_Int_toNat(v_n_334_);
return v___x_335_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_toNat___redArg___boxed(lean_object* v_n_336_){
_start:
{
lean_object* v_res_337_; 
v_res_337_ = l_Std_Time_Internal_Bounded_LE_toNat___redArg(v_n_336_);
lean_dec(v_n_336_);
return v_res_337_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_toNat(lean_object* v_lo_338_, lean_object* v_hi_339_, lean_object* v_n_340_){
_start:
{
lean_object* v___x_341_; 
v___x_341_ = l_Int_toNat(v_n_340_);
return v___x_341_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_toNat___boxed(lean_object* v_lo_342_, lean_object* v_hi_343_, lean_object* v_n_344_){
_start:
{
lean_object* v_res_345_; 
v_res_345_ = l_Std_Time_Internal_Bounded_LE_toNat(v_lo_342_, v_hi_343_, v_n_344_);
lean_dec(v_n_344_);
lean_dec(v_hi_343_);
lean_dec(v_lo_342_);
return v_res_345_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_toNat_x27___redArg(lean_object* v_n_346_){
_start:
{
lean_object* v_intZero_347_; uint8_t v_isNeg_348_; lean_object* v_a_349_; 
v_intZero_347_ = lean_obj_once(&l_Std_Time_Internal_Bounded_instRepr___redArg___lam__0___closed__0, &l_Std_Time_Internal_Bounded_instRepr___redArg___lam__0___closed__0_once, _init_l_Std_Time_Internal_Bounded_instRepr___redArg___lam__0___closed__0);
v_isNeg_348_ = lean_int_dec_lt(v_n_346_, v_intZero_347_);
v_a_349_ = lean_nat_abs(v_n_346_);
return v_a_349_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_toNat_x27___redArg___boxed(lean_object* v_n_350_){
_start:
{
lean_object* v_res_351_; 
v_res_351_ = l_Std_Time_Internal_Bounded_LE_toNat_x27___redArg(v_n_350_);
lean_dec(v_n_350_);
return v_res_351_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_toNat_x27(lean_object* v_lo_352_, lean_object* v_hi_353_, lean_object* v_n_354_, lean_object* v_h_355_){
_start:
{
lean_object* v_intZero_356_; uint8_t v_isNeg_357_; lean_object* v_a_358_; 
v_intZero_356_ = lean_obj_once(&l_Std_Time_Internal_Bounded_instRepr___redArg___lam__0___closed__0, &l_Std_Time_Internal_Bounded_instRepr___redArg___lam__0___closed__0_once, _init_l_Std_Time_Internal_Bounded_instRepr___redArg___lam__0___closed__0);
v_isNeg_357_ = lean_int_dec_lt(v_n_354_, v_intZero_356_);
v_a_358_ = lean_nat_abs(v_n_354_);
return v_a_358_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_toNat_x27___boxed(lean_object* v_lo_359_, lean_object* v_hi_360_, lean_object* v_n_361_, lean_object* v_h_362_){
_start:
{
lean_object* v_res_363_; 
v_res_363_ = l_Std_Time_Internal_Bounded_LE_toNat_x27(v_lo_359_, v_hi_360_, v_n_361_, v_h_362_);
lean_dec(v_n_361_);
lean_dec(v_hi_360_);
lean_dec(v_lo_359_);
return v_res_363_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_toInt___redArg(lean_object* v_n_364_){
_start:
{
lean_inc(v_n_364_);
return v_n_364_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_toInt___redArg___boxed(lean_object* v_n_365_){
_start:
{
lean_object* v_res_366_; 
v_res_366_ = l_Std_Time_Internal_Bounded_LE_toInt___redArg(v_n_365_);
lean_dec(v_n_365_);
return v_res_366_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_toInt(lean_object* v_lo_367_, lean_object* v_hi_368_, lean_object* v_n_369_){
_start:
{
lean_inc(v_n_369_);
return v_n_369_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_toInt___boxed(lean_object* v_lo_370_, lean_object* v_hi_371_, lean_object* v_n_372_){
_start:
{
lean_object* v_res_373_; 
v_res_373_ = l_Std_Time_Internal_Bounded_LE_toInt(v_lo_370_, v_hi_371_, v_n_372_);
lean_dec(v_n_372_);
lean_dec(v_hi_371_);
lean_dec(v_lo_370_);
return v_res_373_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_toFin___redArg(lean_object* v_n_374_){
_start:
{
lean_object* v___x_375_; 
v___x_375_ = l_Int_toNat(v_n_374_);
return v___x_375_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_toFin___redArg___boxed(lean_object* v_n_376_){
_start:
{
lean_object* v_res_377_; 
v_res_377_ = l_Std_Time_Internal_Bounded_LE_toFin___redArg(v_n_376_);
lean_dec(v_n_376_);
return v_res_377_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_toFin(lean_object* v_lo_378_, lean_object* v_hi_379_, lean_object* v_n_380_, lean_object* v_h_u2080_381_){
_start:
{
lean_object* v___x_382_; 
v___x_382_ = l_Int_toNat(v_n_380_);
return v___x_382_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_toFin___boxed(lean_object* v_lo_383_, lean_object* v_hi_384_, lean_object* v_n_385_, lean_object* v_h_u2080_386_){
_start:
{
lean_object* v_res_387_; 
v_res_387_ = l_Std_Time_Internal_Bounded_LE_toFin(v_lo_383_, v_hi_384_, v_n_385_, v_h_u2080_386_);
lean_dec(v_n_385_);
lean_dec(v_hi_384_);
lean_dec(v_lo_383_);
return v_res_387_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_ofFin___redArg(lean_object* v_fin_388_){
_start:
{
lean_object* v___x_389_; 
v___x_389_ = lean_nat_to_int(v_fin_388_);
return v___x_389_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_ofFin(lean_object* v_hi_390_, lean_object* v_fin_391_){
_start:
{
lean_object* v___x_392_; 
v___x_392_ = lean_nat_to_int(v_fin_391_);
return v___x_392_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_ofFin___boxed(lean_object* v_hi_393_, lean_object* v_fin_394_){
_start:
{
lean_object* v_res_395_; 
v_res_395_ = l_Std_Time_Internal_Bounded_LE_ofFin(v_hi_393_, v_fin_394_);
lean_dec(v_hi_393_);
return v_res_395_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_ofFin_x27___redArg(lean_object* v_lo_396_, lean_object* v_fin_397_){
_start:
{
uint8_t v___x_398_; 
v___x_398_ = lean_nat_dec_le(v_lo_396_, v_fin_397_);
if (v___x_398_ == 0)
{
lean_object* v___x_399_; 
lean_dec(v_fin_397_);
v___x_399_ = lean_nat_to_int(v_lo_396_);
return v___x_399_;
}
else
{
lean_object* v___x_400_; 
lean_dec(v_lo_396_);
v___x_400_ = lean_nat_to_int(v_fin_397_);
return v___x_400_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_ofFin_x27(lean_object* v_hi_401_, lean_object* v_lo_402_, lean_object* v_fin_403_, lean_object* v_h_404_){
_start:
{
uint8_t v___x_405_; 
v___x_405_ = lean_nat_dec_le(v_lo_402_, v_fin_403_);
if (v___x_405_ == 0)
{
lean_object* v___x_406_; 
lean_dec(v_fin_403_);
v___x_406_ = lean_nat_to_int(v_lo_402_);
return v___x_406_;
}
else
{
lean_object* v___x_407_; 
lean_dec(v_lo_402_);
v___x_407_ = lean_nat_to_int(v_fin_403_);
return v___x_407_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_ofFin_x27___boxed(lean_object* v_hi_408_, lean_object* v_lo_409_, lean_object* v_fin_410_, lean_object* v_h_411_){
_start:
{
lean_object* v_res_412_; 
v_res_412_ = l_Std_Time_Internal_Bounded_LE_ofFin_x27(v_hi_408_, v_lo_409_, v_fin_410_, v_h_411_);
lean_dec(v_hi_408_);
return v_res_412_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_byEmod___redArg(lean_object* v_b_413_, lean_object* v_i_414_){
_start:
{
lean_object* v___x_415_; 
v___x_415_ = lean_int_emod(v_b_413_, v_i_414_);
return v___x_415_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_byEmod___redArg___boxed(lean_object* v_b_416_, lean_object* v_i_417_){
_start:
{
lean_object* v_res_418_; 
v_res_418_ = l_Std_Time_Internal_Bounded_LE_byEmod___redArg(v_b_416_, v_i_417_);
lean_dec(v_i_417_);
lean_dec(v_b_416_);
return v_res_418_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_byEmod(lean_object* v_b_419_, lean_object* v_i_420_, lean_object* v_hi_421_){
_start:
{
lean_object* v___x_422_; 
v___x_422_ = lean_int_emod(v_b_419_, v_i_420_);
return v___x_422_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_byEmod___boxed(lean_object* v_b_423_, lean_object* v_i_424_, lean_object* v_hi_425_){
_start:
{
lean_object* v_res_426_; 
v_res_426_ = l_Std_Time_Internal_Bounded_LE_byEmod(v_b_423_, v_i_424_, v_hi_425_);
lean_dec(v_i_424_);
lean_dec(v_b_423_);
return v_res_426_;
}
}
static lean_object* _init_l___private_Std_Time_Internal_Bounded_0__Int_tdiv_match__1_splitter___redArg___closed__0(void){
_start:
{
lean_object* v_natZero_427_; lean_object* v_intZero_428_; 
v_natZero_427_ = lean_unsigned_to_nat(0u);
v_intZero_428_ = lean_nat_to_int(v_natZero_427_);
return v_intZero_428_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Internal_Bounded_0__Int_tdiv_match__1_splitter___redArg(lean_object* v_x_429_, lean_object* v_x_430_, lean_object* v_h__1_431_, lean_object* v_h__2_432_, lean_object* v_h__3_433_, lean_object* v_h__4_434_){
_start:
{
lean_object* v_intZero_435_; uint8_t v_isNeg_436_; 
v_intZero_435_ = lean_obj_once(&l___private_Std_Time_Internal_Bounded_0__Int_tdiv_match__1_splitter___redArg___closed__0, &l___private_Std_Time_Internal_Bounded_0__Int_tdiv_match__1_splitter___redArg___closed__0_once, _init_l___private_Std_Time_Internal_Bounded_0__Int_tdiv_match__1_splitter___redArg___closed__0);
v_isNeg_436_ = lean_int_dec_lt(v_x_429_, v_intZero_435_);
if (v_isNeg_436_ == 0)
{
lean_object* v_a_437_; uint8_t v_isNeg_438_; 
lean_dec(v_h__4_434_);
lean_dec(v_h__3_433_);
v_a_437_ = lean_nat_abs(v_x_429_);
v_isNeg_438_ = lean_int_dec_lt(v_x_430_, v_intZero_435_);
if (v_isNeg_438_ == 0)
{
lean_object* v_a_439_; lean_object* v___x_440_; 
lean_dec(v_h__2_432_);
v_a_439_ = lean_nat_abs(v_x_430_);
v___x_440_ = lean_apply_2(v_h__1_431_, v_a_437_, v_a_439_);
return v___x_440_;
}
else
{
lean_object* v_abs_441_; lean_object* v_one_442_; lean_object* v_a_443_; lean_object* v___x_444_; 
lean_dec(v_h__1_431_);
v_abs_441_ = lean_nat_abs(v_x_430_);
v_one_442_ = lean_unsigned_to_nat(1u);
v_a_443_ = lean_nat_sub(v_abs_441_, v_one_442_);
lean_dec(v_abs_441_);
v___x_444_ = lean_apply_2(v_h__2_432_, v_a_437_, v_a_443_);
return v___x_444_;
}
}
else
{
lean_object* v_abs_445_; lean_object* v_one_446_; lean_object* v_a_447_; uint8_t v_isNeg_448_; 
lean_dec(v_h__2_432_);
lean_dec(v_h__1_431_);
v_abs_445_ = lean_nat_abs(v_x_429_);
v_one_446_ = lean_unsigned_to_nat(1u);
v_a_447_ = lean_nat_sub(v_abs_445_, v_one_446_);
lean_dec(v_abs_445_);
v_isNeg_448_ = lean_int_dec_lt(v_x_430_, v_intZero_435_);
if (v_isNeg_448_ == 0)
{
lean_object* v_a_449_; lean_object* v___x_450_; 
lean_dec(v_h__4_434_);
v_a_449_ = lean_nat_abs(v_x_430_);
v___x_450_ = lean_apply_2(v_h__3_433_, v_a_447_, v_a_449_);
return v___x_450_;
}
else
{
lean_object* v_abs_451_; lean_object* v_a_452_; lean_object* v___x_453_; 
lean_dec(v_h__3_433_);
v_abs_451_ = lean_nat_abs(v_x_430_);
v_a_452_ = lean_nat_sub(v_abs_451_, v_one_446_);
lean_dec(v_abs_451_);
v___x_453_ = lean_apply_2(v_h__4_434_, v_a_447_, v_a_452_);
return v___x_453_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Internal_Bounded_0__Int_tdiv_match__1_splitter___redArg___boxed(lean_object* v_x_454_, lean_object* v_x_455_, lean_object* v_h__1_456_, lean_object* v_h__2_457_, lean_object* v_h__3_458_, lean_object* v_h__4_459_){
_start:
{
lean_object* v_res_460_; 
v_res_460_ = l___private_Std_Time_Internal_Bounded_0__Int_tdiv_match__1_splitter___redArg(v_x_454_, v_x_455_, v_h__1_456_, v_h__2_457_, v_h__3_458_, v_h__4_459_);
lean_dec(v_x_455_);
lean_dec(v_x_454_);
return v_res_460_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Internal_Bounded_0__Int_tdiv_match__1_splitter(lean_object* v_motive_461_, lean_object* v_x_462_, lean_object* v_x_463_, lean_object* v_h__1_464_, lean_object* v_h__2_465_, lean_object* v_h__3_466_, lean_object* v_h__4_467_){
_start:
{
lean_object* v_intZero_468_; uint8_t v_isNeg_469_; 
v_intZero_468_ = lean_obj_once(&l___private_Std_Time_Internal_Bounded_0__Int_tdiv_match__1_splitter___redArg___closed__0, &l___private_Std_Time_Internal_Bounded_0__Int_tdiv_match__1_splitter___redArg___closed__0_once, _init_l___private_Std_Time_Internal_Bounded_0__Int_tdiv_match__1_splitter___redArg___closed__0);
v_isNeg_469_ = lean_int_dec_lt(v_x_462_, v_intZero_468_);
if (v_isNeg_469_ == 0)
{
lean_object* v_a_470_; uint8_t v_isNeg_471_; 
lean_dec(v_h__4_467_);
lean_dec(v_h__3_466_);
v_a_470_ = lean_nat_abs(v_x_462_);
v_isNeg_471_ = lean_int_dec_lt(v_x_463_, v_intZero_468_);
if (v_isNeg_471_ == 0)
{
lean_object* v_a_472_; lean_object* v___x_473_; 
lean_dec(v_h__2_465_);
v_a_472_ = lean_nat_abs(v_x_463_);
v___x_473_ = lean_apply_2(v_h__1_464_, v_a_470_, v_a_472_);
return v___x_473_;
}
else
{
lean_object* v_abs_474_; lean_object* v_one_475_; lean_object* v_a_476_; lean_object* v___x_477_; 
lean_dec(v_h__1_464_);
v_abs_474_ = lean_nat_abs(v_x_463_);
v_one_475_ = lean_unsigned_to_nat(1u);
v_a_476_ = lean_nat_sub(v_abs_474_, v_one_475_);
lean_dec(v_abs_474_);
v___x_477_ = lean_apply_2(v_h__2_465_, v_a_470_, v_a_476_);
return v___x_477_;
}
}
else
{
lean_object* v_abs_478_; lean_object* v_one_479_; lean_object* v_a_480_; uint8_t v_isNeg_481_; 
lean_dec(v_h__2_465_);
lean_dec(v_h__1_464_);
v_abs_478_ = lean_nat_abs(v_x_462_);
v_one_479_ = lean_unsigned_to_nat(1u);
v_a_480_ = lean_nat_sub(v_abs_478_, v_one_479_);
lean_dec(v_abs_478_);
v_isNeg_481_ = lean_int_dec_lt(v_x_463_, v_intZero_468_);
if (v_isNeg_481_ == 0)
{
lean_object* v_a_482_; lean_object* v___x_483_; 
lean_dec(v_h__4_467_);
v_a_482_ = lean_nat_abs(v_x_463_);
v___x_483_ = lean_apply_2(v_h__3_466_, v_a_480_, v_a_482_);
return v___x_483_;
}
else
{
lean_object* v_abs_484_; lean_object* v_a_485_; lean_object* v___x_486_; 
lean_dec(v_h__3_466_);
v_abs_484_ = lean_nat_abs(v_x_463_);
v_a_485_ = lean_nat_sub(v_abs_484_, v_one_479_);
lean_dec(v_abs_484_);
v___x_486_ = lean_apply_2(v_h__4_467_, v_a_480_, v_a_485_);
return v___x_486_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Internal_Bounded_0__Int_tdiv_match__1_splitter___boxed(lean_object* v_motive_487_, lean_object* v_x_488_, lean_object* v_x_489_, lean_object* v_h__1_490_, lean_object* v_h__2_491_, lean_object* v_h__3_492_, lean_object* v_h__4_493_){
_start:
{
lean_object* v_res_494_; 
v_res_494_ = l___private_Std_Time_Internal_Bounded_0__Int_tdiv_match__1_splitter(v_motive_487_, v_x_488_, v_x_489_, v_h__1_490_, v_h__2_491_, v_h__3_492_, v_h__4_493_);
lean_dec(v_x_489_);
lean_dec(v_x_488_);
return v_res_494_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_byMod___redArg(lean_object* v_b_495_, lean_object* v_i_496_){
_start:
{
lean_object* v___x_497_; 
v___x_497_ = lean_int_mod(v_b_495_, v_i_496_);
return v___x_497_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_byMod___redArg___boxed(lean_object* v_b_498_, lean_object* v_i_499_){
_start:
{
lean_object* v_res_500_; 
v_res_500_ = l_Std_Time_Internal_Bounded_LE_byMod___redArg(v_b_498_, v_i_499_);
lean_dec(v_i_499_);
lean_dec(v_b_498_);
return v_res_500_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_byMod(lean_object* v_b_501_, lean_object* v_i_502_, lean_object* v_hi_503_){
_start:
{
lean_object* v___x_504_; 
v___x_504_ = lean_int_mod(v_b_501_, v_i_502_);
return v___x_504_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_byMod___boxed(lean_object* v_b_505_, lean_object* v_i_506_, lean_object* v_hi_507_){
_start:
{
lean_object* v_res_508_; 
v_res_508_ = l_Std_Time_Internal_Bounded_LE_byMod(v_b_505_, v_i_506_, v_hi_507_);
lean_dec(v_i_506_);
lean_dec(v_b_505_);
return v_res_508_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_truncate___redArg(lean_object* v_n_509_, lean_object* v_bounded_510_){
_start:
{
lean_object* v___x_511_; 
v___x_511_ = lean_int_sub(v_bounded_510_, v_n_509_);
return v___x_511_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_truncate___redArg___boxed(lean_object* v_n_512_, lean_object* v_bounded_513_){
_start:
{
lean_object* v_res_514_; 
v_res_514_ = l_Std_Time_Internal_Bounded_LE_truncate___redArg(v_n_512_, v_bounded_513_);
lean_dec(v_bounded_513_);
lean_dec(v_n_512_);
return v_res_514_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_truncate(lean_object* v_n_515_, lean_object* v_m_516_, lean_object* v_bounded_517_){
_start:
{
lean_object* v___x_518_; 
v___x_518_ = lean_int_sub(v_bounded_517_, v_n_515_);
return v___x_518_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_truncate___boxed(lean_object* v_n_519_, lean_object* v_m_520_, lean_object* v_bounded_521_){
_start:
{
lean_object* v_res_522_; 
v_res_522_ = l_Std_Time_Internal_Bounded_LE_truncate(v_n_519_, v_m_520_, v_bounded_521_);
lean_dec(v_bounded_521_);
lean_dec(v_m_520_);
lean_dec(v_n_519_);
return v_res_522_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_truncateTop___redArg(lean_object* v_bounded_523_){
_start:
{
lean_inc(v_bounded_523_);
return v_bounded_523_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_truncateTop___redArg___boxed(lean_object* v_bounded_524_){
_start:
{
lean_object* v_res_525_; 
v_res_525_ = l_Std_Time_Internal_Bounded_LE_truncateTop___redArg(v_bounded_524_);
lean_dec(v_bounded_524_);
return v_res_525_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_truncateTop(lean_object* v_n_526_, lean_object* v_m_527_, lean_object* v_j_528_, lean_object* v_bounded_529_, lean_object* v_h_530_){
_start:
{
lean_inc(v_bounded_529_);
return v_bounded_529_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_truncateTop___boxed(lean_object* v_n_531_, lean_object* v_m_532_, lean_object* v_j_533_, lean_object* v_bounded_534_, lean_object* v_h_535_){
_start:
{
lean_object* v_res_536_; 
v_res_536_ = l_Std_Time_Internal_Bounded_LE_truncateTop(v_n_531_, v_m_532_, v_j_533_, v_bounded_534_, v_h_535_);
lean_dec(v_bounded_534_);
lean_dec(v_j_533_);
lean_dec(v_m_532_);
lean_dec(v_n_531_);
return v_res_536_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_truncateBottom___redArg(lean_object* v_bounded_537_){
_start:
{
lean_inc(v_bounded_537_);
return v_bounded_537_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_truncateBottom___redArg___boxed(lean_object* v_bounded_538_){
_start:
{
lean_object* v_res_539_; 
v_res_539_ = l_Std_Time_Internal_Bounded_LE_truncateBottom___redArg(v_bounded_538_);
lean_dec(v_bounded_538_);
return v_res_539_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_truncateBottom(lean_object* v_n_540_, lean_object* v_m_541_, lean_object* v_j_542_, lean_object* v_bounded_543_, lean_object* v_h_544_){
_start:
{
lean_inc(v_bounded_543_);
return v_bounded_543_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_truncateBottom___boxed(lean_object* v_n_545_, lean_object* v_m_546_, lean_object* v_j_547_, lean_object* v_bounded_548_, lean_object* v_h_549_){
_start:
{
lean_object* v_res_550_; 
v_res_550_ = l_Std_Time_Internal_Bounded_LE_truncateBottom(v_n_545_, v_m_546_, v_j_547_, v_bounded_548_, v_h_549_);
lean_dec(v_bounded_548_);
lean_dec(v_j_547_);
lean_dec(v_m_546_);
lean_dec(v_n_545_);
return v_res_550_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_neg___redArg(lean_object* v_bounded_551_){
_start:
{
lean_object* v___x_552_; 
v___x_552_ = lean_int_neg(v_bounded_551_);
return v___x_552_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_neg___redArg___boxed(lean_object* v_bounded_553_){
_start:
{
lean_object* v_res_554_; 
v_res_554_ = l_Std_Time_Internal_Bounded_LE_neg___redArg(v_bounded_553_);
lean_dec(v_bounded_553_);
return v_res_554_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_neg(lean_object* v_n_555_, lean_object* v_m_556_, lean_object* v_bounded_557_){
_start:
{
lean_object* v___x_558_; 
v___x_558_ = lean_int_neg(v_bounded_557_);
return v___x_558_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_neg___boxed(lean_object* v_n_559_, lean_object* v_m_560_, lean_object* v_bounded_561_){
_start:
{
lean_object* v_res_562_; 
v_res_562_ = l_Std_Time_Internal_Bounded_LE_neg(v_n_559_, v_m_560_, v_bounded_561_);
lean_dec(v_bounded_561_);
lean_dec(v_m_560_);
lean_dec(v_n_559_);
return v_res_562_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_add___redArg(lean_object* v_bounded_563_, lean_object* v_num_564_){
_start:
{
lean_object* v___x_565_; 
v___x_565_ = lean_int_add(v_bounded_563_, v_num_564_);
return v___x_565_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_add___redArg___boxed(lean_object* v_bounded_566_, lean_object* v_num_567_){
_start:
{
lean_object* v_res_568_; 
v_res_568_ = l_Std_Time_Internal_Bounded_LE_add___redArg(v_bounded_566_, v_num_567_);
lean_dec(v_num_567_);
lean_dec(v_bounded_566_);
return v_res_568_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_add(lean_object* v_n_569_, lean_object* v_m_570_, lean_object* v_bounded_571_, lean_object* v_num_572_){
_start:
{
lean_object* v___x_573_; 
v___x_573_ = lean_int_add(v_bounded_571_, v_num_572_);
return v___x_573_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_add___boxed(lean_object* v_n_574_, lean_object* v_m_575_, lean_object* v_bounded_576_, lean_object* v_num_577_){
_start:
{
lean_object* v_res_578_; 
v_res_578_ = l_Std_Time_Internal_Bounded_LE_add(v_n_574_, v_m_575_, v_bounded_576_, v_num_577_);
lean_dec(v_num_577_);
lean_dec(v_bounded_576_);
lean_dec(v_m_575_);
lean_dec(v_n_574_);
return v_res_578_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_addProven___redArg(lean_object* v_num_579_, lean_object* v_bounded_580_){
_start:
{
lean_object* v___x_581_; 
v___x_581_ = lean_int_add(v_bounded_580_, v_num_579_);
return v___x_581_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_addProven___redArg___boxed(lean_object* v_num_582_, lean_object* v_bounded_583_){
_start:
{
lean_object* v_res_584_; 
v_res_584_ = l_Std_Time_Internal_Bounded_LE_addProven___redArg(v_num_582_, v_bounded_583_);
lean_dec(v_bounded_583_);
lean_dec(v_num_582_);
return v_res_584_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_addProven(lean_object* v_n_585_, lean_object* v_m_586_, lean_object* v_num_587_, lean_object* v_bounded_588_, lean_object* v_h_u2080_589_, lean_object* v_h_u2081_590_){
_start:
{
lean_object* v___x_591_; 
v___x_591_ = lean_int_add(v_bounded_588_, v_num_587_);
return v___x_591_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_addProven___boxed(lean_object* v_n_592_, lean_object* v_m_593_, lean_object* v_num_594_, lean_object* v_bounded_595_, lean_object* v_h_u2080_596_, lean_object* v_h_u2081_597_){
_start:
{
lean_object* v_res_598_; 
v_res_598_ = l_Std_Time_Internal_Bounded_LE_addProven(v_n_592_, v_m_593_, v_num_594_, v_bounded_595_, v_h_u2080_596_, v_h_u2081_597_);
lean_dec(v_bounded_595_);
lean_dec(v_num_594_);
lean_dec(v_m_593_);
lean_dec(v_n_592_);
return v_res_598_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_addTop___redArg(lean_object* v_bounded_599_, lean_object* v_num_600_){
_start:
{
lean_object* v___x_601_; 
v___x_601_ = lean_int_add(v_bounded_599_, v_num_600_);
return v___x_601_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_addTop___redArg___boxed(lean_object* v_bounded_602_, lean_object* v_num_603_){
_start:
{
lean_object* v_res_604_; 
v_res_604_ = l_Std_Time_Internal_Bounded_LE_addTop___redArg(v_bounded_602_, v_num_603_);
lean_dec(v_num_603_);
lean_dec(v_bounded_602_);
return v_res_604_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_addTop(lean_object* v_n_605_, lean_object* v_m_606_, lean_object* v_bounded_607_, lean_object* v_num_608_, lean_object* v_h_609_){
_start:
{
lean_object* v___x_610_; 
v___x_610_ = lean_int_add(v_bounded_607_, v_num_608_);
return v___x_610_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_addTop___boxed(lean_object* v_n_611_, lean_object* v_m_612_, lean_object* v_bounded_613_, lean_object* v_num_614_, lean_object* v_h_615_){
_start:
{
lean_object* v_res_616_; 
v_res_616_ = l_Std_Time_Internal_Bounded_LE_addTop(v_n_611_, v_m_612_, v_bounded_613_, v_num_614_, v_h_615_);
lean_dec(v_num_614_);
lean_dec(v_bounded_613_);
lean_dec(v_m_612_);
lean_dec(v_n_611_);
return v_res_616_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_subBottom___redArg(lean_object* v_bounded_617_, lean_object* v_num_618_){
_start:
{
lean_object* v___x_619_; 
v___x_619_ = lean_int_sub(v_bounded_617_, v_num_618_);
return v___x_619_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_subBottom___redArg___boxed(lean_object* v_bounded_620_, lean_object* v_num_621_){
_start:
{
lean_object* v_res_622_; 
v_res_622_ = l_Std_Time_Internal_Bounded_LE_subBottom___redArg(v_bounded_620_, v_num_621_);
lean_dec(v_num_621_);
lean_dec(v_bounded_620_);
return v_res_622_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_subBottom(lean_object* v_n_623_, lean_object* v_m_624_, lean_object* v_bounded_625_, lean_object* v_num_626_, lean_object* v_h_627_){
_start:
{
lean_object* v___x_628_; 
v___x_628_ = lean_int_sub(v_bounded_625_, v_num_626_);
return v___x_628_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_subBottom___boxed(lean_object* v_n_629_, lean_object* v_m_630_, lean_object* v_bounded_631_, lean_object* v_num_632_, lean_object* v_h_633_){
_start:
{
lean_object* v_res_634_; 
v_res_634_ = l_Std_Time_Internal_Bounded_LE_subBottom(v_n_629_, v_m_630_, v_bounded_631_, v_num_632_, v_h_633_);
lean_dec(v_num_632_);
lean_dec(v_bounded_631_);
lean_dec(v_m_630_);
lean_dec(v_n_629_);
return v_res_634_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_addBounds___redArg(lean_object* v_bounded_635_, lean_object* v_bounded_u2082_636_){
_start:
{
lean_object* v___x_637_; 
v___x_637_ = lean_int_add(v_bounded_635_, v_bounded_u2082_636_);
return v___x_637_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_addBounds___redArg___boxed(lean_object* v_bounded_638_, lean_object* v_bounded_u2082_639_){
_start:
{
lean_object* v_res_640_; 
v_res_640_ = l_Std_Time_Internal_Bounded_LE_addBounds___redArg(v_bounded_638_, v_bounded_u2082_639_);
lean_dec(v_bounded_u2082_639_);
lean_dec(v_bounded_638_);
return v_res_640_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_addBounds(lean_object* v_n_641_, lean_object* v_m_642_, lean_object* v_i_643_, lean_object* v_j_644_, lean_object* v_bounded_645_, lean_object* v_bounded_u2082_646_){
_start:
{
lean_object* v___x_647_; 
v___x_647_ = lean_int_add(v_bounded_645_, v_bounded_u2082_646_);
return v___x_647_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_addBounds___boxed(lean_object* v_n_648_, lean_object* v_m_649_, lean_object* v_i_650_, lean_object* v_j_651_, lean_object* v_bounded_652_, lean_object* v_bounded_u2082_653_){
_start:
{
lean_object* v_res_654_; 
v_res_654_ = l_Std_Time_Internal_Bounded_LE_addBounds(v_n_648_, v_m_649_, v_i_650_, v_j_651_, v_bounded_652_, v_bounded_u2082_653_);
lean_dec(v_bounded_u2082_653_);
lean_dec(v_bounded_652_);
lean_dec(v_j_651_);
lean_dec(v_i_650_);
lean_dec(v_m_649_);
lean_dec(v_n_648_);
return v_res_654_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_sub___redArg(lean_object* v_bounded_655_, lean_object* v_num_656_){
_start:
{
lean_object* v___x_657_; lean_object* v___x_658_; 
v___x_657_ = lean_int_neg(v_num_656_);
v___x_658_ = lean_int_add(v_bounded_655_, v___x_657_);
lean_dec(v___x_657_);
return v___x_658_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_sub___redArg___boxed(lean_object* v_bounded_659_, lean_object* v_num_660_){
_start:
{
lean_object* v_res_661_; 
v_res_661_ = l_Std_Time_Internal_Bounded_LE_sub___redArg(v_bounded_659_, v_num_660_);
lean_dec(v_num_660_);
lean_dec(v_bounded_659_);
return v_res_661_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_sub(lean_object* v_n_662_, lean_object* v_m_663_, lean_object* v_bounded_664_, lean_object* v_num_665_){
_start:
{
lean_object* v___x_666_; lean_object* v___x_667_; 
v___x_666_ = lean_int_neg(v_num_665_);
v___x_667_ = lean_int_add(v_bounded_664_, v___x_666_);
lean_dec(v___x_666_);
return v___x_667_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_sub___boxed(lean_object* v_n_668_, lean_object* v_m_669_, lean_object* v_bounded_670_, lean_object* v_num_671_){
_start:
{
lean_object* v_res_672_; 
v_res_672_ = l_Std_Time_Internal_Bounded_LE_sub(v_n_668_, v_m_669_, v_bounded_670_, v_num_671_);
lean_dec(v_num_671_);
lean_dec(v_bounded_670_);
lean_dec(v_m_669_);
lean_dec(v_n_668_);
return v_res_672_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_subBounds___redArg(lean_object* v_bounded_673_, lean_object* v_bounded_u2082_674_){
_start:
{
lean_object* v___x_675_; lean_object* v___x_676_; 
v___x_675_ = lean_int_neg(v_bounded_u2082_674_);
v___x_676_ = lean_int_add(v_bounded_673_, v___x_675_);
lean_dec(v___x_675_);
return v___x_676_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_subBounds___redArg___boxed(lean_object* v_bounded_677_, lean_object* v_bounded_u2082_678_){
_start:
{
lean_object* v_res_679_; 
v_res_679_ = l_Std_Time_Internal_Bounded_LE_subBounds___redArg(v_bounded_677_, v_bounded_u2082_678_);
lean_dec(v_bounded_u2082_678_);
lean_dec(v_bounded_677_);
return v_res_679_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_subBounds(lean_object* v_n_680_, lean_object* v_m_681_, lean_object* v_i_682_, lean_object* v_j_683_, lean_object* v_bounded_684_, lean_object* v_bounded_u2082_685_){
_start:
{
lean_object* v___x_686_; lean_object* v___x_687_; 
v___x_686_ = lean_int_neg(v_bounded_u2082_685_);
v___x_687_ = lean_int_add(v_bounded_684_, v___x_686_);
lean_dec(v___x_686_);
return v___x_687_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_subBounds___boxed(lean_object* v_n_688_, lean_object* v_m_689_, lean_object* v_i_690_, lean_object* v_j_691_, lean_object* v_bounded_692_, lean_object* v_bounded_u2082_693_){
_start:
{
lean_object* v_res_694_; 
v_res_694_ = l_Std_Time_Internal_Bounded_LE_subBounds(v_n_688_, v_m_689_, v_i_690_, v_j_691_, v_bounded_692_, v_bounded_u2082_693_);
lean_dec(v_bounded_u2082_693_);
lean_dec(v_bounded_692_);
lean_dec(v_j_691_);
lean_dec(v_i_690_);
lean_dec(v_m_689_);
lean_dec(v_n_688_);
return v_res_694_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_emod___redArg(lean_object* v_bounded_695_, lean_object* v_num_696_){
_start:
{
lean_object* v___x_697_; 
v___x_697_ = lean_int_emod(v_bounded_695_, v_num_696_);
return v___x_697_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_emod___redArg___boxed(lean_object* v_bounded_698_, lean_object* v_num_699_){
_start:
{
lean_object* v_res_700_; 
v_res_700_ = l_Std_Time_Internal_Bounded_LE_emod___redArg(v_bounded_698_, v_num_699_);
lean_dec(v_num_699_);
lean_dec(v_bounded_698_);
return v_res_700_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_emod(lean_object* v_n_701_, lean_object* v_num_702_, lean_object* v_bounded_703_, lean_object* v_num_704_, lean_object* v_hi_705_){
_start:
{
lean_object* v___x_706_; 
v___x_706_ = lean_int_emod(v_bounded_703_, v_num_704_);
return v___x_706_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_emod___boxed(lean_object* v_n_707_, lean_object* v_num_708_, lean_object* v_bounded_709_, lean_object* v_num_710_, lean_object* v_hi_711_){
_start:
{
lean_object* v_res_712_; 
v_res_712_ = l_Std_Time_Internal_Bounded_LE_emod(v_n_707_, v_num_708_, v_bounded_709_, v_num_710_, v_hi_711_);
lean_dec(v_num_710_);
lean_dec(v_bounded_709_);
lean_dec(v_num_708_);
lean_dec(v_n_707_);
return v_res_712_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_mod___redArg(lean_object* v_bounded_713_, lean_object* v_num_714_){
_start:
{
lean_object* v___x_715_; 
v___x_715_ = lean_int_mod(v_bounded_713_, v_num_714_);
return v___x_715_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_mod___redArg___boxed(lean_object* v_bounded_716_, lean_object* v_num_717_){
_start:
{
lean_object* v_res_718_; 
v_res_718_ = l_Std_Time_Internal_Bounded_LE_mod___redArg(v_bounded_716_, v_num_717_);
lean_dec(v_num_717_);
lean_dec(v_bounded_716_);
return v_res_718_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_mod(lean_object* v_n_719_, lean_object* v_num_720_, lean_object* v_bounded_721_, lean_object* v_num_722_, lean_object* v_hi_723_){
_start:
{
lean_object* v___x_724_; 
v___x_724_ = lean_int_mod(v_bounded_721_, v_num_722_);
return v___x_724_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_mod___boxed(lean_object* v_n_725_, lean_object* v_num_726_, lean_object* v_bounded_727_, lean_object* v_num_728_, lean_object* v_hi_729_){
_start:
{
lean_object* v_res_730_; 
v_res_730_ = l_Std_Time_Internal_Bounded_LE_mod(v_n_725_, v_num_726_, v_bounded_727_, v_num_728_, v_hi_729_);
lean_dec(v_num_728_);
lean_dec(v_bounded_727_);
lean_dec(v_num_726_);
lean_dec(v_n_725_);
return v_res_730_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_mul__pos___redArg(lean_object* v_bounded_731_, lean_object* v_num_732_){
_start:
{
lean_object* v___x_733_; 
v___x_733_ = lean_int_mul(v_bounded_731_, v_num_732_);
return v___x_733_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_mul__pos___redArg___boxed(lean_object* v_bounded_734_, lean_object* v_num_735_){
_start:
{
lean_object* v_res_736_; 
v_res_736_ = l_Std_Time_Internal_Bounded_LE_mul__pos___redArg(v_bounded_734_, v_num_735_);
lean_dec(v_num_735_);
lean_dec(v_bounded_734_);
return v_res_736_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_mul__pos(lean_object* v_n_737_, lean_object* v_m_738_, lean_object* v_bounded_739_, lean_object* v_num_740_, lean_object* v_h_741_){
_start:
{
lean_object* v___x_742_; 
v___x_742_ = lean_int_mul(v_bounded_739_, v_num_740_);
return v___x_742_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_mul__pos___boxed(lean_object* v_n_743_, lean_object* v_m_744_, lean_object* v_bounded_745_, lean_object* v_num_746_, lean_object* v_h_747_){
_start:
{
lean_object* v_res_748_; 
v_res_748_ = l_Std_Time_Internal_Bounded_LE_mul__pos(v_n_743_, v_m_744_, v_bounded_745_, v_num_746_, v_h_747_);
lean_dec(v_num_746_);
lean_dec(v_bounded_745_);
lean_dec(v_m_744_);
lean_dec(v_n_743_);
return v_res_748_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_mul__neg___redArg(lean_object* v_bounded_749_, lean_object* v_num_750_){
_start:
{
lean_object* v___x_751_; 
v___x_751_ = lean_int_mul(v_bounded_749_, v_num_750_);
return v___x_751_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_mul__neg___redArg___boxed(lean_object* v_bounded_752_, lean_object* v_num_753_){
_start:
{
lean_object* v_res_754_; 
v_res_754_ = l_Std_Time_Internal_Bounded_LE_mul__neg___redArg(v_bounded_752_, v_num_753_);
lean_dec(v_num_753_);
lean_dec(v_bounded_752_);
return v_res_754_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_mul__neg(lean_object* v_n_755_, lean_object* v_m_756_, lean_object* v_bounded_757_, lean_object* v_num_758_, lean_object* v_h_759_){
_start:
{
lean_object* v___x_760_; 
v___x_760_ = lean_int_mul(v_bounded_757_, v_num_758_);
return v___x_760_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_mul__neg___boxed(lean_object* v_n_761_, lean_object* v_m_762_, lean_object* v_bounded_763_, lean_object* v_num_764_, lean_object* v_h_765_){
_start:
{
lean_object* v_res_766_; 
v_res_766_ = l_Std_Time_Internal_Bounded_LE_mul__neg(v_n_761_, v_m_762_, v_bounded_763_, v_num_764_, v_h_765_);
lean_dec(v_num_764_);
lean_dec(v_bounded_763_);
lean_dec(v_m_762_);
lean_dec(v_n_761_);
return v_res_766_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_ediv___redArg(lean_object* v_bounded_767_, lean_object* v_num_768_){
_start:
{
lean_object* v___x_769_; 
v___x_769_ = lean_int_ediv(v_bounded_767_, v_num_768_);
return v___x_769_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_ediv___redArg___boxed(lean_object* v_bounded_770_, lean_object* v_num_771_){
_start:
{
lean_object* v_res_772_; 
v_res_772_ = l_Std_Time_Internal_Bounded_LE_ediv___redArg(v_bounded_770_, v_num_771_);
lean_dec(v_num_771_);
lean_dec(v_bounded_770_);
return v_res_772_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_ediv(lean_object* v_n_773_, lean_object* v_m_774_, lean_object* v_bounded_775_, lean_object* v_num_776_, lean_object* v_h_777_){
_start:
{
lean_object* v___x_778_; 
v___x_778_ = lean_int_ediv(v_bounded_775_, v_num_776_);
return v___x_778_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_ediv___boxed(lean_object* v_n_779_, lean_object* v_m_780_, lean_object* v_bounded_781_, lean_object* v_num_782_, lean_object* v_h_783_){
_start:
{
lean_object* v_res_784_; 
v_res_784_ = l_Std_Time_Internal_Bounded_LE_ediv(v_n_779_, v_m_780_, v_bounded_781_, v_num_782_, v_h_783_);
lean_dec(v_num_782_);
lean_dec(v_bounded_781_);
lean_dec(v_m_780_);
lean_dec(v_n_779_);
return v_res_784_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_eq(lean_object* v_n_785_){
_start:
{
lean_inc(v_n_785_);
return v_n_785_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_eq___boxed(lean_object* v_n_786_){
_start:
{
lean_object* v_res_787_; 
v_res_787_ = l_Std_Time_Internal_Bounded_LE_eq(v_n_786_);
lean_dec(v_n_786_);
return v_res_787_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_expand___redArg(lean_object* v_bounded_788_){
_start:
{
lean_inc(v_bounded_788_);
return v_bounded_788_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_expand___redArg___boxed(lean_object* v_bounded_789_){
_start:
{
lean_object* v_res_790_; 
v_res_790_ = l_Std_Time_Internal_Bounded_LE_expand___redArg(v_bounded_789_);
lean_dec(v_bounded_789_);
return v_res_790_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_expand(lean_object* v_lo_791_, lean_object* v_hi_792_, lean_object* v_nhi_793_, lean_object* v_nlo_794_, lean_object* v_bounded_795_, lean_object* v_h_796_, lean_object* v_h_u2081_797_){
_start:
{
lean_inc(v_bounded_795_);
return v_bounded_795_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_expand___boxed(lean_object* v_lo_798_, lean_object* v_hi_799_, lean_object* v_nhi_800_, lean_object* v_nlo_801_, lean_object* v_bounded_802_, lean_object* v_h_803_, lean_object* v_h_u2081_804_){
_start:
{
lean_object* v_res_805_; 
v_res_805_ = l_Std_Time_Internal_Bounded_LE_expand(v_lo_798_, v_hi_799_, v_nhi_800_, v_nlo_801_, v_bounded_802_, v_h_803_, v_h_u2081_804_);
lean_dec(v_bounded_802_);
lean_dec(v_nlo_801_);
lean_dec(v_nhi_800_);
lean_dec(v_hi_799_);
lean_dec(v_lo_798_);
return v_res_805_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_expandTop___redArg(lean_object* v_bounded_806_){
_start:
{
lean_inc(v_bounded_806_);
return v_bounded_806_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_expandTop___redArg___boxed(lean_object* v_bounded_807_){
_start:
{
lean_object* v_res_808_; 
v_res_808_ = l_Std_Time_Internal_Bounded_LE_expandTop___redArg(v_bounded_807_);
lean_dec(v_bounded_807_);
return v_res_808_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_expandTop(lean_object* v_lo_809_, lean_object* v_hi_810_, lean_object* v_nhi_811_, lean_object* v_bounded_812_, lean_object* v_h_813_){
_start:
{
lean_inc(v_bounded_812_);
return v_bounded_812_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_expandTop___boxed(lean_object* v_lo_814_, lean_object* v_hi_815_, lean_object* v_nhi_816_, lean_object* v_bounded_817_, lean_object* v_h_818_){
_start:
{
lean_object* v_res_819_; 
v_res_819_ = l_Std_Time_Internal_Bounded_LE_expandTop(v_lo_814_, v_hi_815_, v_nhi_816_, v_bounded_817_, v_h_818_);
lean_dec(v_bounded_817_);
lean_dec(v_nhi_816_);
lean_dec(v_hi_815_);
lean_dec(v_lo_814_);
return v_res_819_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_expandBottom___redArg(lean_object* v_bounded_820_){
_start:
{
lean_inc(v_bounded_820_);
return v_bounded_820_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_expandBottom___redArg___boxed(lean_object* v_bounded_821_){
_start:
{
lean_object* v_res_822_; 
v_res_822_ = l_Std_Time_Internal_Bounded_LE_expandBottom___redArg(v_bounded_821_);
lean_dec(v_bounded_821_);
return v_res_822_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_expandBottom(lean_object* v_lo_823_, lean_object* v_hi_824_, lean_object* v_nlo_825_, lean_object* v_bounded_826_, lean_object* v_h_827_){
_start:
{
lean_inc(v_bounded_826_);
return v_bounded_826_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_expandBottom___boxed(lean_object* v_lo_828_, lean_object* v_hi_829_, lean_object* v_nlo_830_, lean_object* v_bounded_831_, lean_object* v_h_832_){
_start:
{
lean_object* v_res_833_; 
v_res_833_ = l_Std_Time_Internal_Bounded_LE_expandBottom(v_lo_828_, v_hi_829_, v_nlo_830_, v_bounded_831_, v_h_832_);
lean_dec(v_bounded_831_);
lean_dec(v_nlo_830_);
lean_dec(v_hi_829_);
lean_dec(v_lo_828_);
return v_res_833_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_succ___redArg(lean_object* v_bounded_834_){
_start:
{
lean_object* v___x_835_; lean_object* v___x_836_; 
v___x_835_ = lean_obj_once(&l_Std_Time_Internal_Bounded_LE_ofNatWrapping___redArg___closed__0, &l_Std_Time_Internal_Bounded_LE_ofNatWrapping___redArg___closed__0_once, _init_l_Std_Time_Internal_Bounded_LE_ofNatWrapping___redArg___closed__0);
v___x_836_ = lean_int_add(v_bounded_834_, v___x_835_);
return v___x_836_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_succ___redArg___boxed(lean_object* v_bounded_837_){
_start:
{
lean_object* v_res_838_; 
v_res_838_ = l_Std_Time_Internal_Bounded_LE_succ___redArg(v_bounded_837_);
lean_dec(v_bounded_837_);
return v_res_838_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_succ(lean_object* v_lo_839_, lean_object* v_hi_840_, lean_object* v_bounded_841_, lean_object* v_h_842_){
_start:
{
lean_object* v___x_843_; lean_object* v___x_844_; 
v___x_843_ = lean_obj_once(&l_Std_Time_Internal_Bounded_LE_ofNatWrapping___redArg___closed__0, &l_Std_Time_Internal_Bounded_LE_ofNatWrapping___redArg___closed__0_once, _init_l_Std_Time_Internal_Bounded_LE_ofNatWrapping___redArg___closed__0);
v___x_844_ = lean_int_add(v_bounded_841_, v___x_843_);
return v___x_844_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_succ___boxed(lean_object* v_lo_845_, lean_object* v_hi_846_, lean_object* v_bounded_847_, lean_object* v_h_848_){
_start:
{
lean_object* v_res_849_; 
v_res_849_ = l_Std_Time_Internal_Bounded_LE_succ(v_lo_845_, v_hi_846_, v_bounded_847_, v_h_848_);
lean_dec(v_bounded_847_);
lean_dec(v_hi_846_);
lean_dec(v_lo_845_);
return v_res_849_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_abs___redArg(lean_object* v_bo_850_){
_start:
{
lean_object* v___x_851_; uint8_t v___x_852_; 
v___x_851_ = lean_obj_once(&l___private_Std_Time_Internal_Bounded_0__Int_tdiv_match__1_splitter___redArg___closed__0, &l___private_Std_Time_Internal_Bounded_0__Int_tdiv_match__1_splitter___redArg___closed__0_once, _init_l___private_Std_Time_Internal_Bounded_0__Int_tdiv_match__1_splitter___redArg___closed__0);
v___x_852_ = lean_int_dec_le(v___x_851_, v_bo_850_);
if (v___x_852_ == 0)
{
lean_object* v_r_853_; 
v_r_853_ = lean_int_neg(v_bo_850_);
return v_r_853_;
}
else
{
lean_inc(v_bo_850_);
return v_bo_850_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_abs___redArg___boxed(lean_object* v_bo_854_){
_start:
{
lean_object* v_res_855_; 
v_res_855_ = l_Std_Time_Internal_Bounded_LE_abs___redArg(v_bo_854_);
lean_dec(v_bo_854_);
return v_res_855_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_abs(lean_object* v_i_856_, lean_object* v_bo_857_){
_start:
{
lean_object* v___x_858_; uint8_t v___x_859_; 
v___x_858_ = lean_obj_once(&l___private_Std_Time_Internal_Bounded_0__Int_tdiv_match__1_splitter___redArg___closed__0, &l___private_Std_Time_Internal_Bounded_0__Int_tdiv_match__1_splitter___redArg___closed__0_once, _init_l___private_Std_Time_Internal_Bounded_0__Int_tdiv_match__1_splitter___redArg___closed__0);
v___x_859_ = lean_int_dec_le(v___x_858_, v_bo_857_);
if (v___x_859_ == 0)
{
lean_object* v_r_860_; 
v_r_860_ = lean_int_neg(v_bo_857_);
return v_r_860_;
}
else
{
lean_inc(v_bo_857_);
return v_bo_857_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_abs___boxed(lean_object* v_i_861_, lean_object* v_bo_862_){
_start:
{
lean_object* v_res_863_; 
v_res_863_ = l_Std_Time_Internal_Bounded_LE_abs(v_i_861_, v_bo_862_);
lean_dec(v_bo_862_);
lean_dec(v_i_861_);
return v_res_863_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_max___redArg(lean_object* v_bounded_864_, lean_object* v_val_865_){
_start:
{
uint8_t v___x_866_; 
v___x_866_ = lean_int_dec_le(v_bounded_864_, v_val_865_);
if (v___x_866_ == 0)
{
lean_inc(v_bounded_864_);
return v_bounded_864_;
}
else
{
lean_inc(v_val_865_);
return v_val_865_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_max___redArg___boxed(lean_object* v_bounded_867_, lean_object* v_val_868_){
_start:
{
lean_object* v_res_869_; 
v_res_869_ = l_Std_Time_Internal_Bounded_LE_max___redArg(v_bounded_867_, v_val_868_);
lean_dec(v_val_868_);
lean_dec(v_bounded_867_);
return v_res_869_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_max(lean_object* v_n_870_, lean_object* v_m_871_, lean_object* v_bounded_872_, lean_object* v_val_873_){
_start:
{
lean_object* v___x_874_; 
v___x_874_ = l_Std_Time_Internal_Bounded_LE_max___redArg(v_bounded_872_, v_val_873_);
return v___x_874_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Internal_Bounded_LE_max___boxed(lean_object* v_n_875_, lean_object* v_m_876_, lean_object* v_bounded_877_, lean_object* v_val_878_){
_start:
{
lean_object* v_res_879_; 
v_res_879_ = l_Std_Time_Internal_Bounded_LE_max(v_n_875_, v_m_876_, v_bounded_877_, v_val_878_);
lean_dec(v_val_878_);
lean_dec(v_bounded_877_);
lean_dec(v_m_876_);
lean_dec(v_n_875_);
return v_res_879_;
}
}
lean_object* runtime_initialize_Init_Data_Int_DivMod_Lemmas(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Order_Ord(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Int_Repr(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
lean_object* runtime_initialize_Init_Ext(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_Time_Internal_Bounded(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Data_Int_DivMod_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Order_Ord(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Int_Repr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Ext(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Std_Time_Internal_Bounded(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Data_Int_DivMod_Lemmas(uint8_t builtin);
lean_object* initialize_Init_Data_Order_Ord(uint8_t builtin);
lean_object* initialize_Init_Data_Int_Repr(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
lean_object* initialize_Init_Ext(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Time_Internal_Bounded(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_Int_DivMod_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Order_Ord(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Int_Repr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Ext(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Time_Internal_Bounded(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_Time_Internal_Bounded(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_Time_Internal_Bounded(builtin);
}
#ifdef __cplusplus
}
#endif
