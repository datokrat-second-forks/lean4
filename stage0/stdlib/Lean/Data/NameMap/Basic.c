// Lean compiler output
// Module: Lean.Data.NameMap.Basic
// Imports: public import Std.Data.HashSet.Basic public import Std.Data.TreeSet.Basic public import Lean.Data.SSet public import Lean.Data.Name
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
lean_object* l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl___boxed(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x21___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_maxView___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_minView___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_link2___redArg(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_link___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Std_DTreeMap_Internal_Impl_balance___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_TreeSet_ofArray___redArg(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Std_DHashMap_Internal_AssocList_length___redArg(lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_beq___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Name_hash___override___boxed(lean_object*);
uint8_t l_Lean_SMap_contains___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_union___at___00Std_DTreeMap_union_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SMap_empty___redArg();
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Std_DTreeMap_Internal_Impl_Const_beq___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_reprPrec___boxed(lean_object*, lean_object*);
lean_object* l_instReprTupleOfRepr___redArg___lam__0(lean_object*, lean_object*, lean_object*);
lean_object* l_Prod_repr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_repr___redArg(lean_object*, lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Std_TreeSet_ofList___redArg(lean_object*, lean_object*);
uint8_t l_Lean_Name_isSuffixOf(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t l_Lean_Name_isPrefixOf(lean_object*, lean_object*);
lean_object* l_Lean_SMap_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkNameMap___redArg();
LEAN_EXPORT lean_object* l_Lean_mkNameMap___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkNameMap(lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameMap_instRepr___redArg___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_NameMap_instRepr___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Std.TreeMap.ofList "};
static const lean_object* l_Lean_NameMap_instRepr___redArg___lam__1___closed__0 = (const lean_object*)&l_Lean_NameMap_instRepr___redArg___lam__1___closed__0_value;
static const lean_ctor_object l_Lean_NameMap_instRepr___redArg___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_NameMap_instRepr___redArg___lam__1___closed__0_value)}};
static const lean_object* l_Lean_NameMap_instRepr___redArg___lam__1___closed__1 = (const lean_object*)&l_Lean_NameMap_instRepr___redArg___lam__1___closed__1_value;
static const lean_closure_object l_Lean_NameMap_instRepr___redArg___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_NameMap_instRepr___redArg___lam__1___closed__2 = (const lean_object*)&l_Lean_NameMap_instRepr___redArg___lam__1___closed__2_value;
static const lean_closure_object l_Lean_NameMap_instRepr___redArg___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_NameMap_instRepr___redArg___lam__1___closed__3 = (const lean_object*)&l_Lean_NameMap_instRepr___redArg___lam__1___closed__3_value;
static const lean_closure_object l_Lean_NameMap_instRepr___redArg___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_NameMap_instRepr___redArg___lam__1___closed__4 = (const lean_object*)&l_Lean_NameMap_instRepr___redArg___lam__1___closed__4_value;
static const lean_closure_object l_Lean_NameMap_instRepr___redArg___lam__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_NameMap_instRepr___redArg___lam__1___closed__5 = (const lean_object*)&l_Lean_NameMap_instRepr___redArg___lam__1___closed__5_value;
static const lean_closure_object l_Lean_NameMap_instRepr___redArg___lam__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_NameMap_instRepr___redArg___lam__1___closed__6 = (const lean_object*)&l_Lean_NameMap_instRepr___redArg___lam__1___closed__6_value;
static const lean_closure_object l_Lean_NameMap_instRepr___redArg___lam__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_NameMap_instRepr___redArg___lam__1___closed__7 = (const lean_object*)&l_Lean_NameMap_instRepr___redArg___lam__1___closed__7_value;
static const lean_closure_object l_Lean_NameMap_instRepr___redArg___lam__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_NameMap_instRepr___redArg___lam__1___closed__8 = (const lean_object*)&l_Lean_NameMap_instRepr___redArg___lam__1___closed__8_value;
static const lean_ctor_object l_Lean_NameMap_instRepr___redArg___lam__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_NameMap_instRepr___redArg___lam__1___closed__2_value),((lean_object*)&l_Lean_NameMap_instRepr___redArg___lam__1___closed__3_value)}};
static const lean_object* l_Lean_NameMap_instRepr___redArg___lam__1___closed__9 = (const lean_object*)&l_Lean_NameMap_instRepr___redArg___lam__1___closed__9_value;
static const lean_ctor_object l_Lean_NameMap_instRepr___redArg___lam__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_NameMap_instRepr___redArg___lam__1___closed__9_value),((lean_object*)&l_Lean_NameMap_instRepr___redArg___lam__1___closed__4_value),((lean_object*)&l_Lean_NameMap_instRepr___redArg___lam__1___closed__5_value),((lean_object*)&l_Lean_NameMap_instRepr___redArg___lam__1___closed__6_value),((lean_object*)&l_Lean_NameMap_instRepr___redArg___lam__1___closed__7_value)}};
static const lean_object* l_Lean_NameMap_instRepr___redArg___lam__1___closed__10 = (const lean_object*)&l_Lean_NameMap_instRepr___redArg___lam__1___closed__10_value;
static const lean_ctor_object l_Lean_NameMap_instRepr___redArg___lam__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_NameMap_instRepr___redArg___lam__1___closed__10_value),((lean_object*)&l_Lean_NameMap_instRepr___redArg___lam__1___closed__8_value)}};
static const lean_object* l_Lean_NameMap_instRepr___redArg___lam__1___closed__11 = (const lean_object*)&l_Lean_NameMap_instRepr___redArg___lam__1___closed__11_value;
LEAN_EXPORT lean_object* l_Lean_NameMap_instRepr___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameMap_instRepr___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_NameMap_instRepr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_NameMap_instRepr___redArg___lam__0, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_NameMap_instRepr___redArg___closed__0 = (const lean_object*)&l_Lean_NameMap_instRepr___redArg___closed__0_value;
static const lean_closure_object l_Lean_NameMap_instRepr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Name_reprPrec___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_NameMap_instRepr___redArg___closed__1 = (const lean_object*)&l_Lean_NameMap_instRepr___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_NameMap_instRepr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameMap_instRepr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameMap_instEmptyCollection___redArg();
LEAN_EXPORT lean_object* l_Lean_NameMap_instEmptyCollection___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameMap_instEmptyCollection(lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameMap_instInhabited___redArg();
LEAN_EXPORT lean_object* l_Lean_NameMap_instInhabited___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameMap_instInhabited(lean_object*);
static const lean_closure_object l_Lean_NameMap_instBEq___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_NameMap_instBEq___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_NameMap_instBEq___redArg___lam__0___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_NameMap_instBEq___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameMap_instBEq___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameMap_instBEq___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameMap_instBEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameMap_insert___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameMap_insert(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_NameMap_erase_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_NameMap_erase_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameMap_erase___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameMap_erase___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameMap_erase(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameMap_erase___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_NameMap_erase_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_NameMap_erase_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_NameMap_alter_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameMap_alter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameMap_alter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_NameMap_alter_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_NameMap_contains_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_NameMap_contains_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_NameMap_contains___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameMap_contains___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_NameMap_contains(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameMap_contains___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_NameMap_contains_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_NameMap_contains_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameMap_find_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameMap_find_x3f___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameMap_find_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameMap_find_x3f___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameMap_get_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameMap_get_x3f___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameMap_get_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameMap_get_x3f___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameMap_get_x21___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameMap_get_x21___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameMap_get_x21(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameMap_get_x21___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_NameMap_getD_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_NameMap_getD_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameMap_getD___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameMap_getD___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameMap_getD(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameMap_getD___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_NameMap_getD_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_NameMap_getD_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameMap_instMembershipName___redArg();
LEAN_EXPORT lean_object* l_Lean_NameMap_instMembershipName___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameMap_instMembershipName(lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameMap_instGetElem_x3fNameMem___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameMap_instGetElem_x3fNameMem___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameMap_instGetElem_x3fNameMem___redArg___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameMap_instGetElem_x3fNameMem___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_NameMap_instGetElem_x3fNameMem___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_NameMap_instGetElem_x3fNameMem___redArg___lam__0, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_NameMap_instGetElem_x3fNameMem___redArg___closed__0 = (const lean_object*)&l_Lean_NameMap_instGetElem_x3fNameMem___redArg___closed__0_value;
static const lean_closure_object l_Lean_NameMap_instGetElem_x3fNameMem___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_NameMap_instGetElem_x3fNameMem___redArg___lam__1, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_NameMap_instGetElem_x3fNameMem___redArg___closed__1 = (const lean_object*)&l_Lean_NameMap_instGetElem_x3fNameMem___redArg___closed__1_value;
static const lean_closure_object l_Lean_NameMap_instGetElem_x3fNameMem___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_NameMap_instGetElem_x3fNameMem___redArg___lam__2___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_NameMap_instGetElem_x3fNameMem___redArg___closed__2 = (const lean_object*)&l_Lean_NameMap_instGetElem_x3fNameMem___redArg___closed__2_value;
static const lean_ctor_object l_Lean_NameMap_instGetElem_x3fNameMem___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_NameMap_instGetElem_x3fNameMem___redArg___closed__0_value),((lean_object*)&l_Lean_NameMap_instGetElem_x3fNameMem___redArg___closed__1_value),((lean_object*)&l_Lean_NameMap_instGetElem_x3fNameMem___redArg___closed__2_value)}};
static const lean_object* l_Lean_NameMap_instGetElem_x3fNameMem___redArg___closed__3 = (const lean_object*)&l_Lean_NameMap_instGetElem_x3fNameMem___redArg___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_NameMap_instGetElem_x3fNameMem___redArg();
LEAN_EXPORT lean_object* l_Lean_NameMap_instGetElem_x3fNameMem___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_NameMap_instGetElem_x3fNameMem___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_NameMap_instGetElem_x3fNameMem___closed__0;
LEAN_EXPORT lean_object* l_Lean_NameMap_instGetElem_x3fNameMem(lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameMap_size___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameMap_size___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameMap_size(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameMap_size___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_NameMap_isEmpty___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameMap_isEmpty___redArg___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_NameMap_isEmpty(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameMap_isEmpty___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_NameMap_any_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_NameMap_any_spec__0___redArg___closed__0 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_NameMap_any_spec__0___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_NameMap_any_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_NameMap_any___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameMap_any___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_NameMap_any(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameMap_any___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_NameMap_any_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_NameMap_all_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_NameMap_all___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameMap_all___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_NameMap_all(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameMap_all___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_NameMap_all_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_foldl_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameMap_foldl___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameMap_foldl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_foldl_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_foldl_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_foldl_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameMap_foldlM___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameMap_foldlM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameMap_forM___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameMap_forM___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameMap_forM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_NameMap_keys_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_NameMap_keys_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameMap_keys___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameMap_keys___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameMap_keys(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameMap_keys___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_NameMap_keys_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_NameMap_keys_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_keysArray_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameMap_keysArray___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameMap_keysArray(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_keysArray_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_keysArray_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_keysArray_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_NameMap_values_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_NameMap_values_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameMap_values___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameMap_values___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameMap_values(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameMap_values___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_NameMap_values_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_NameMap_values_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_valuesArray_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameMap_valuesArray___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameMap_valuesArray(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_valuesArray_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_valuesArray_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_valuesArray_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_NameMap_toList_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_NameMap_toList_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameMap_toList___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameMap_toList___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameMap_toList(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameMap_toList___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_NameMap_toList_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_NameMap_toList_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_toArray_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_toArray_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
static const lean_array_object l_Lean_NameMap_toArray___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_NameMap_toArray___redArg___closed__0 = (const lean_object*)&l_Lean_NameMap_toArray___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_NameMap_toArray___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameMap_toArray___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameMap_toArray(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameMap_toArray___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_toArray_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_toArray_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_toArray_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_toArray_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_toArray_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_toArray_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_NameMap_ofList_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_NameMap_ofList_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameMap_ofList___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameMap_ofList___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameMap_ofList(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameMap_ofList___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_NameMap_ofList_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_NameMap_ofList_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_NameMap_ofArray_spec__0___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_NameMap_ofArray_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameMap_ofArray___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameMap_ofArray___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameMap_ofArray(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameMap_ofArray___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_NameMap_ofArray_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_NameMap_ofArray_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_NameMap_mergeWith_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_NameMap_mergeWith_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_mergeWith_spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameMap_mergeWith___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameMap_mergeWith(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_NameMap_mergeWith_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_mergeWith_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_mergeWith_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_mergeWith_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameMap_instInsertProdName___redArg___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lean_NameMap_instInsertProdName___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_NameMap_instInsertProdName___redArg___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_NameMap_instInsertProdName___redArg___closed__0 = (const lean_object*)&l_Lean_NameMap_instInsertProdName___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_NameMap_instInsertProdName___redArg();
LEAN_EXPORT lean_object* l_Lean_NameMap_instInsertProdName___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameMap_instInsertProdName(lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameMap_instForInProdNameOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameMap_instForInProdNameOfMonad___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameMap_instForInProdNameOfMonad___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameMap_instForInProdNameOfMonad___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameMap_instForInProdNameOfMonad(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_filter___at___00Lean_NameMap_filter_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameMap_filter___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameMap_filter(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_filter___at___00Lean_NameMap_filter_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameSet_empty;
LEAN_EXPORT lean_object* l_Lean_NameSet_instEmptyCollection;
LEAN_EXPORT lean_object* l_Lean_NameSet_instInhabited;
LEAN_EXPORT lean_object* l_Lean_NameSet_insert(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameSet_containsThenInsert(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameSet_erase(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameSet_erase___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_NameSet_contains(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameSet_contains___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameSet_instMembershipName;
LEAN_EXPORT lean_object* l_Lean_NameSet_size(lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameSet_size___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_NameSet_isEmpty(lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameSet_isEmpty___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_NameSet_any_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_NameSet_any(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameSet_any___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_NameSet_all_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_NameSet_all(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameSet_all___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameSet_foldl_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameSet_foldl___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameSet_foldl(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameSet_foldl_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameSet_foldl_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameSet_foldl_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameSet_foldlM___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameSet_foldlM___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameSet_foldlM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_NameSet_toList_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_NameSet_toList_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameSet_toList(lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameSet_toList___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameSet_toArray_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameSet_toArray(lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameSet_toArray_spec__0(lean_object*, lean_object*);
static const lean_ctor_object l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_NameSet_merge_spec__0___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_NameSet_merge_spec__0___redArg___lam__0___closed__0 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_NameSet_merge_spec__0___redArg___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_NameSet_merge_spec__0___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_NameSet_merge_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_NameSet_merge_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameSet_merge_spec__1_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameSet_merge(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_NameSet_merge_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameSet_merge_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameSet_union(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameSet_instInsertName___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lean_NameSet_instInsertName___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_NameSet_instInsertName___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_NameSet_instInsertName___closed__0 = (const lean_object*)&l_Lean_NameSet_instInsertName___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_NameSet_instInsertName = (const lean_object*)&l_Lean_NameSet_instInsertName___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_NameSet_instForInNameOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameSet_instForInNameOfMonad___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameSet_instForInNameOfMonad___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameSet_instForInNameOfMonad(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameSet_append(lean_object*, lean_object*);
static const lean_closure_object l_Lean_NameSet_instAppend___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_NameSet_append, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_NameSet_instAppend___closed__0 = (const lean_object*)&l_Lean_NameSet_instAppend___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_NameSet_instAppend = (const lean_object*)&l_Lean_NameSet_instAppend___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_NameSet_instSingletonName___lam__0(lean_object*);
static const lean_closure_object l_Lean_NameSet_instSingletonName___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_NameSet_instSingletonName___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_NameSet_instSingletonName___closed__0 = (const lean_object*)&l_Lean_NameSet_instSingletonName___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_NameSet_instSingletonName = (const lean_object*)&l_Lean_NameSet_instSingletonName___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_NameSet_instUnion = (const lean_object*)&l_Lean_NameSet_instAppend___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_NameSet_instInter___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameSet_instInter___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameSet_instInter___lam__1(lean_object*, lean_object*);
static const lean_closure_object l_Lean_NameSet_instInter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_NameSet_instInter___lam__1, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_NameSet_instInter___closed__0 = (const lean_object*)&l_Lean_NameSet_instInter___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_NameSet_instInter = (const lean_object*)&l_Lean_NameSet_instInter___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_NameSet_instSDiff___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameSet_instSDiff___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameSet_instSDiff___lam__1(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_NameSet_instSDiff___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_NameSet_instSDiff___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_NameSet_instSDiff___closed__0 = (const lean_object*)&l_Lean_NameSet_instSDiff___closed__0_value;
static const lean_closure_object l_Lean_NameSet_instSDiff___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_NameSet_instSDiff___lam__1, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_NameSet_instSDiff___closed__0_value)} };
static const lean_object* l_Lean_NameSet_instSDiff___closed__1 = (const lean_object*)&l_Lean_NameSet_instSDiff___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_NameSet_instSDiff = (const lean_object*)&l_Lean_NameSet_instSDiff___closed__1_value;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_filter___at___00Lean_NameSet_filter_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameSet_filter(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_filter___at___00Lean_NameSet_filter_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameSet_ofList(lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameSet_ofList___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameSet_ofArray(lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameSet_ofArray___boxed(lean_object*);
static lean_once_cell_t l_Lean_NameSSet_empty___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_NameSSet_empty___closed__0;
LEAN_EXPORT lean_object* l_Lean_NameSSet_empty;
LEAN_EXPORT lean_object* l_Lean_NameSSet_instEmptyCollection;
LEAN_EXPORT lean_object* l_Lean_NameSSet_instInhabited;
static const lean_closure_object l_Lean_NameSSet_insert___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Name_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_NameSSet_insert___closed__0 = (const lean_object*)&l_Lean_NameSSet_insert___closed__0_value;
static const lean_closure_object l_Lean_NameSSet_insert___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Name_hash___override___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_NameSSet_insert___closed__1 = (const lean_object*)&l_Lean_NameSSet_insert___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_NameSSet_insert(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_NameSSet_contains(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameSSet_contains___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_NameHashSet_empty___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_NameHashSet_empty___closed__0;
static lean_once_cell_t l_Lean_NameHashSet_empty___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_NameHashSet_empty___closed__1;
LEAN_EXPORT lean_object* l_Lean_NameHashSet_empty;
LEAN_EXPORT lean_object* l_Lean_NameHashSet_instEmptyCollection;
LEAN_EXPORT lean_object* l_Lean_NameHashSet_instInhabited;
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_NameHashSet_insert_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_NameHashSet_insert_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_NameHashSet_insert_spec__0_spec__1_spec__2_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_NameHashSet_insert_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_NameHashSet_insert_spec__0_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_NameHashSet_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameHashSet_insert(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_NameHashSet_insert_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_NameHashSet_insert_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_NameHashSet_insert_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_NameHashSet_insert_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_NameHashSet_insert_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_NameHashSet_insert_spec__0_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_NameHashSet_contains_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_NameHashSet_contains_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_NameHashSet_contains(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameHashSet_contains___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_NameHashSet_contains_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_NameHashSet_contains_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_filter_go___at___00Std_DHashMap_Internal_Raw_u2080_filter___at___00Lean_NameHashSet_filter_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_DHashMap_Internal_Raw_u2080_filter___at___00Lean_NameHashSet_filter_spec__0_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_DHashMap_Internal_Raw_u2080_filter___at___00Lean_NameHashSet_filter_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_DHashMap_Internal_Raw_u2080_filter___at___00Lean_NameHashSet_filter_spec__0_spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_DHashMap_Internal_Raw_u2080_filter___at___00Lean_NameHashSet_filter_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_filter___at___00Lean_NameHashSet_filter_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameHashSet_filter(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_beq___at___00Lean_MacroScopesView_isPrefixOf_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_beq___at___00Lean_MacroScopesView_isPrefixOf_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_MacroScopesView_isPrefixOf(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MacroScopesView_isPrefixOf___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_MacroScopesView_isSuffixOf(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MacroScopesView_isSuffixOf___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkNameMap___redArg(){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_box(1);
return v___x_2_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkNameMap___redArg___boxed(lean_object* v___dummy_3_){
_start:
{
lean_object* v_res_4_; 
v_res_4_ = l_Lean_mkNameMap___redArg();
return v_res_4_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkNameMap(lean_object* v_00_u03b1_5_){
_start:
{
lean_object* v___x_6_; 
v___x_6_ = lean_box(1);
return v___x_6_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_instRepr___redArg___lam__0(lean_object* v_x1_7_, lean_object* v_x2_8_, lean_object* v_x3_9_){
_start:
{
lean_object* v___x_10_; lean_object* v___x_11_; 
v___x_10_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_10_, 0, v_x1_7_);
lean_ctor_set(v___x_10_, 1, v_x2_8_);
v___x_11_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_11_, 0, v___x_10_);
lean_ctor_set(v___x_11_, 1, v_x3_9_);
return v___x_11_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_instRepr___redArg___lam__1(lean_object* v_inst_34_, lean_object* v___x_35_, lean_object* v___f_36_, lean_object* v_x_37_, lean_object* v___y_38_){
_start:
{
lean_object* v___f_39_; lean_object* v___x_40_; lean_object* v___x_41_; lean_object* v___x_42_; lean_object* v___x_43_; lean_object* v___x_44_; lean_object* v___x_45_; lean_object* v___x_46_; lean_object* v___x_47_; 
v___f_39_ = lean_alloc_closure((void*)(l_instReprTupleOfRepr___redArg___lam__0), 3, 1);
lean_closure_set(v___f_39_, 0, v_inst_34_);
v___x_40_ = lean_alloc_closure((void*)(l_Prod_repr___boxed), 6, 4);
lean_closure_set(v___x_40_, 0, lean_box(0));
lean_closure_set(v___x_40_, 1, lean_box(0));
lean_closure_set(v___x_40_, 2, v___x_35_);
lean_closure_set(v___x_40_, 3, v___f_39_);
v___x_41_ = ((lean_object*)(l_Lean_NameMap_instRepr___redArg___lam__1___closed__1));
v___x_42_ = lean_box(0);
v___x_43_ = ((lean_object*)(l_Lean_NameMap_instRepr___redArg___lam__1___closed__11));
v___x_44_ = l_Std_DTreeMap_Internal_Impl_foldrM___redArg(v___x_43_, v___f_36_, v___x_42_, v_x_37_);
v___x_45_ = l_List_repr___redArg(v___x_40_, v___x_44_);
v___x_46_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_46_, 0, v___x_41_);
lean_ctor_set(v___x_46_, 1, v___x_45_);
v___x_47_ = l_Repr_addAppParen(v___x_46_, v___y_38_);
return v___x_47_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_instRepr___redArg___lam__1___boxed(lean_object* v_inst_48_, lean_object* v___x_49_, lean_object* v___f_50_, lean_object* v_x_51_, lean_object* v___y_52_){
_start:
{
lean_object* v_res_53_; 
v_res_53_ = l_Lean_NameMap_instRepr___redArg___lam__1(v_inst_48_, v___x_49_, v___f_50_, v_x_51_, v___y_52_);
lean_dec(v___y_52_);
return v_res_53_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_instRepr___redArg(lean_object* v_inst_56_){
_start:
{
lean_object* v___f_57_; lean_object* v___x_58_; lean_object* v___f_59_; 
v___f_57_ = ((lean_object*)(l_Lean_NameMap_instRepr___redArg___closed__0));
v___x_58_ = ((lean_object*)(l_Lean_NameMap_instRepr___redArg___closed__1));
v___f_59_ = lean_alloc_closure((void*)(l_Lean_NameMap_instRepr___redArg___lam__1___boxed), 5, 3);
lean_closure_set(v___f_59_, 0, v_inst_56_);
lean_closure_set(v___f_59_, 1, v___x_58_);
lean_closure_set(v___f_59_, 2, v___f_57_);
return v___f_59_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_instRepr(lean_object* v_00_u03b1_60_, lean_object* v_inst_61_){
_start:
{
lean_object* v___x_62_; 
v___x_62_ = l_Lean_NameMap_instRepr___redArg(v_inst_61_);
return v___x_62_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_instEmptyCollection___redArg(){
_start:
{
lean_object* v___x_64_; 
v___x_64_ = lean_box(1);
return v___x_64_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_instEmptyCollection___redArg___boxed(lean_object* v___dummy_65_){
_start:
{
lean_object* v_res_66_; 
v_res_66_ = l_Lean_NameMap_instEmptyCollection___redArg();
return v_res_66_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_instEmptyCollection(lean_object* v_00_u03b1_67_){
_start:
{
lean_object* v___x_68_; 
v___x_68_ = lean_box(1);
return v___x_68_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_instInhabited___redArg(){
_start:
{
lean_object* v___x_70_; 
v___x_70_ = lean_box(1);
return v___x_70_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_instInhabited___redArg___boxed(lean_object* v___dummy_71_){
_start:
{
lean_object* v_res_72_; 
v_res_72_ = l_Lean_NameMap_instInhabited___redArg();
return v_res_72_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_instInhabited(lean_object* v_00_u03b1_73_){
_start:
{
lean_object* v___x_74_; 
v___x_74_ = lean_box(1);
return v___x_74_;
}
}
LEAN_EXPORT uint8_t l_Lean_NameMap_instBEq___redArg___lam__0(lean_object* v_inst_76_, lean_object* v_x1_77_, lean_object* v_x2_78_){
_start:
{
lean_object* v___x_79_; uint8_t v___x_80_; 
v___x_79_ = ((lean_object*)(l_Lean_NameMap_instBEq___redArg___lam__0___closed__0));
v___x_80_ = l_Std_DTreeMap_Internal_Impl_Const_beq___redArg(v___x_79_, v_inst_76_, v_x1_77_, v_x2_78_);
return v___x_80_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_instBEq___redArg___lam__0___boxed(lean_object* v_inst_81_, lean_object* v_x1_82_, lean_object* v_x2_83_){
_start:
{
uint8_t v_res_84_; lean_object* v_r_85_; 
v_res_84_ = l_Lean_NameMap_instBEq___redArg___lam__0(v_inst_81_, v_x1_82_, v_x2_83_);
v_r_85_ = lean_box(v_res_84_);
return v_r_85_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_instBEq___redArg(lean_object* v_inst_86_){
_start:
{
lean_object* v___f_87_; 
v___f_87_ = lean_alloc_closure((void*)(l_Lean_NameMap_instBEq___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_87_, 0, v_inst_86_);
return v___f_87_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_instBEq(lean_object* v_00_u03b1_88_, lean_object* v_inst_89_){
_start:
{
lean_object* v___f_90_; 
v___f_90_ = lean_alloc_closure((void*)(l_Lean_NameMap_instBEq___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_90_, 0, v_inst_89_);
return v___f_90_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object* v_k_91_, lean_object* v_v_92_, lean_object* v_t_93_){
_start:
{
if (lean_obj_tag(v_t_93_) == 0)
{
lean_object* v_size_94_; lean_object* v_k_95_; lean_object* v_v_96_; lean_object* v_l_97_; lean_object* v_r_98_; lean_object* v___x_100_; uint8_t v_isShared_101_; uint8_t v_isSharedCheck_378_; 
v_size_94_ = lean_ctor_get(v_t_93_, 0);
v_k_95_ = lean_ctor_get(v_t_93_, 1);
v_v_96_ = lean_ctor_get(v_t_93_, 2);
v_l_97_ = lean_ctor_get(v_t_93_, 3);
v_r_98_ = lean_ctor_get(v_t_93_, 4);
v_isSharedCheck_378_ = !lean_is_exclusive(v_t_93_);
if (v_isSharedCheck_378_ == 0)
{
v___x_100_ = v_t_93_;
v_isShared_101_ = v_isSharedCheck_378_;
goto v_resetjp_99_;
}
else
{
lean_inc(v_r_98_);
lean_inc(v_l_97_);
lean_inc(v_v_96_);
lean_inc(v_k_95_);
lean_inc(v_size_94_);
lean_dec(v_t_93_);
v___x_100_ = lean_box(0);
v_isShared_101_ = v_isSharedCheck_378_;
goto v_resetjp_99_;
}
v_resetjp_99_:
{
uint8_t v___x_102_; 
v___x_102_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_91_, v_k_95_);
switch(v___x_102_)
{
case 0:
{
lean_object* v_impl_103_; lean_object* v___x_104_; 
lean_dec(v_size_94_);
v_impl_103_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_k_91_, v_v_92_, v_l_97_);
v___x_104_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_r_98_) == 0)
{
lean_object* v_size_105_; lean_object* v_size_106_; lean_object* v_k_107_; lean_object* v_v_108_; lean_object* v_l_109_; lean_object* v_r_110_; lean_object* v___x_111_; lean_object* v___x_112_; uint8_t v___x_113_; 
v_size_105_ = lean_ctor_get(v_r_98_, 0);
v_size_106_ = lean_ctor_get(v_impl_103_, 0);
lean_inc(v_size_106_);
v_k_107_ = lean_ctor_get(v_impl_103_, 1);
lean_inc(v_k_107_);
v_v_108_ = lean_ctor_get(v_impl_103_, 2);
lean_inc(v_v_108_);
v_l_109_ = lean_ctor_get(v_impl_103_, 3);
lean_inc(v_l_109_);
v_r_110_ = lean_ctor_get(v_impl_103_, 4);
lean_inc(v_r_110_);
v___x_111_ = lean_unsigned_to_nat(3u);
v___x_112_ = lean_nat_mul(v___x_111_, v_size_105_);
v___x_113_ = lean_nat_dec_lt(v___x_112_, v_size_106_);
lean_dec(v___x_112_);
if (v___x_113_ == 0)
{
lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_117_; 
lean_dec(v_r_110_);
lean_dec(v_l_109_);
lean_dec(v_v_108_);
lean_dec(v_k_107_);
v___x_114_ = lean_nat_add(v___x_104_, v_size_106_);
lean_dec(v_size_106_);
v___x_115_ = lean_nat_add(v___x_114_, v_size_105_);
lean_dec(v___x_114_);
if (v_isShared_101_ == 0)
{
lean_ctor_set(v___x_100_, 3, v_impl_103_);
lean_ctor_set(v___x_100_, 0, v___x_115_);
v___x_117_ = v___x_100_;
goto v_reusejp_116_;
}
else
{
lean_object* v_reuseFailAlloc_118_; 
v_reuseFailAlloc_118_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_118_, 0, v___x_115_);
lean_ctor_set(v_reuseFailAlloc_118_, 1, v_k_95_);
lean_ctor_set(v_reuseFailAlloc_118_, 2, v_v_96_);
lean_ctor_set(v_reuseFailAlloc_118_, 3, v_impl_103_);
lean_ctor_set(v_reuseFailAlloc_118_, 4, v_r_98_);
v___x_117_ = v_reuseFailAlloc_118_;
goto v_reusejp_116_;
}
v_reusejp_116_:
{
return v___x_117_;
}
}
else
{
lean_object* v___x_120_; uint8_t v_isShared_121_; uint8_t v_isSharedCheck_184_; 
v_isSharedCheck_184_ = !lean_is_exclusive(v_impl_103_);
if (v_isSharedCheck_184_ == 0)
{
lean_object* v_unused_185_; lean_object* v_unused_186_; lean_object* v_unused_187_; lean_object* v_unused_188_; lean_object* v_unused_189_; 
v_unused_185_ = lean_ctor_get(v_impl_103_, 4);
lean_dec(v_unused_185_);
v_unused_186_ = lean_ctor_get(v_impl_103_, 3);
lean_dec(v_unused_186_);
v_unused_187_ = lean_ctor_get(v_impl_103_, 2);
lean_dec(v_unused_187_);
v_unused_188_ = lean_ctor_get(v_impl_103_, 1);
lean_dec(v_unused_188_);
v_unused_189_ = lean_ctor_get(v_impl_103_, 0);
lean_dec(v_unused_189_);
v___x_120_ = v_impl_103_;
v_isShared_121_ = v_isSharedCheck_184_;
goto v_resetjp_119_;
}
else
{
lean_dec(v_impl_103_);
v___x_120_ = lean_box(0);
v_isShared_121_ = v_isSharedCheck_184_;
goto v_resetjp_119_;
}
v_resetjp_119_:
{
lean_object* v_size_122_; lean_object* v_size_123_; lean_object* v_k_124_; lean_object* v_v_125_; lean_object* v_l_126_; lean_object* v_r_127_; lean_object* v___x_128_; lean_object* v___x_129_; uint8_t v___x_130_; 
v_size_122_ = lean_ctor_get(v_l_109_, 0);
v_size_123_ = lean_ctor_get(v_r_110_, 0);
v_k_124_ = lean_ctor_get(v_r_110_, 1);
v_v_125_ = lean_ctor_get(v_r_110_, 2);
v_l_126_ = lean_ctor_get(v_r_110_, 3);
v_r_127_ = lean_ctor_get(v_r_110_, 4);
v___x_128_ = lean_unsigned_to_nat(2u);
v___x_129_ = lean_nat_mul(v___x_128_, v_size_122_);
v___x_130_ = lean_nat_dec_lt(v_size_123_, v___x_129_);
lean_dec(v___x_129_);
if (v___x_130_ == 0)
{
lean_object* v___x_132_; uint8_t v_isShared_133_; uint8_t v_isSharedCheck_159_; 
lean_inc(v_r_127_);
lean_inc(v_l_126_);
lean_inc(v_v_125_);
lean_inc(v_k_124_);
v_isSharedCheck_159_ = !lean_is_exclusive(v_r_110_);
if (v_isSharedCheck_159_ == 0)
{
lean_object* v_unused_160_; lean_object* v_unused_161_; lean_object* v_unused_162_; lean_object* v_unused_163_; lean_object* v_unused_164_; 
v_unused_160_ = lean_ctor_get(v_r_110_, 4);
lean_dec(v_unused_160_);
v_unused_161_ = lean_ctor_get(v_r_110_, 3);
lean_dec(v_unused_161_);
v_unused_162_ = lean_ctor_get(v_r_110_, 2);
lean_dec(v_unused_162_);
v_unused_163_ = lean_ctor_get(v_r_110_, 1);
lean_dec(v_unused_163_);
v_unused_164_ = lean_ctor_get(v_r_110_, 0);
lean_dec(v_unused_164_);
v___x_132_ = v_r_110_;
v_isShared_133_ = v_isSharedCheck_159_;
goto v_resetjp_131_;
}
else
{
lean_dec(v_r_110_);
v___x_132_ = lean_box(0);
v_isShared_133_ = v_isSharedCheck_159_;
goto v_resetjp_131_;
}
v_resetjp_131_:
{
lean_object* v___x_134_; lean_object* v___x_135_; lean_object* v___y_137_; lean_object* v___y_138_; lean_object* v___y_139_; lean_object* v___x_147_; lean_object* v___y_149_; 
v___x_134_ = lean_nat_add(v___x_104_, v_size_106_);
lean_dec(v_size_106_);
v___x_135_ = lean_nat_add(v___x_134_, v_size_105_);
lean_dec(v___x_134_);
v___x_147_ = lean_nat_add(v___x_104_, v_size_122_);
if (lean_obj_tag(v_l_126_) == 0)
{
lean_object* v_size_157_; 
v_size_157_ = lean_ctor_get(v_l_126_, 0);
lean_inc(v_size_157_);
v___y_149_ = v_size_157_;
goto v___jp_148_;
}
else
{
lean_object* v___x_158_; 
v___x_158_ = lean_unsigned_to_nat(0u);
v___y_149_ = v___x_158_;
goto v___jp_148_;
}
v___jp_136_:
{
lean_object* v___x_140_; lean_object* v___x_142_; 
v___x_140_ = lean_nat_add(v___y_137_, v___y_139_);
lean_dec(v___y_139_);
lean_dec(v___y_137_);
if (v_isShared_133_ == 0)
{
lean_ctor_set(v___x_132_, 4, v_r_98_);
lean_ctor_set(v___x_132_, 3, v_r_127_);
lean_ctor_set(v___x_132_, 2, v_v_96_);
lean_ctor_set(v___x_132_, 1, v_k_95_);
lean_ctor_set(v___x_132_, 0, v___x_140_);
v___x_142_ = v___x_132_;
goto v_reusejp_141_;
}
else
{
lean_object* v_reuseFailAlloc_146_; 
v_reuseFailAlloc_146_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_146_, 0, v___x_140_);
lean_ctor_set(v_reuseFailAlloc_146_, 1, v_k_95_);
lean_ctor_set(v_reuseFailAlloc_146_, 2, v_v_96_);
lean_ctor_set(v_reuseFailAlloc_146_, 3, v_r_127_);
lean_ctor_set(v_reuseFailAlloc_146_, 4, v_r_98_);
v___x_142_ = v_reuseFailAlloc_146_;
goto v_reusejp_141_;
}
v_reusejp_141_:
{
lean_object* v___x_144_; 
if (v_isShared_121_ == 0)
{
lean_ctor_set(v___x_120_, 4, v___x_142_);
lean_ctor_set(v___x_120_, 3, v___y_138_);
lean_ctor_set(v___x_120_, 2, v_v_125_);
lean_ctor_set(v___x_120_, 1, v_k_124_);
lean_ctor_set(v___x_120_, 0, v___x_135_);
v___x_144_ = v___x_120_;
goto v_reusejp_143_;
}
else
{
lean_object* v_reuseFailAlloc_145_; 
v_reuseFailAlloc_145_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_145_, 0, v___x_135_);
lean_ctor_set(v_reuseFailAlloc_145_, 1, v_k_124_);
lean_ctor_set(v_reuseFailAlloc_145_, 2, v_v_125_);
lean_ctor_set(v_reuseFailAlloc_145_, 3, v___y_138_);
lean_ctor_set(v_reuseFailAlloc_145_, 4, v___x_142_);
v___x_144_ = v_reuseFailAlloc_145_;
goto v_reusejp_143_;
}
v_reusejp_143_:
{
return v___x_144_;
}
}
}
v___jp_148_:
{
lean_object* v___x_150_; lean_object* v___x_152_; 
v___x_150_ = lean_nat_add(v___x_147_, v___y_149_);
lean_dec(v___y_149_);
lean_dec(v___x_147_);
if (v_isShared_101_ == 0)
{
lean_ctor_set(v___x_100_, 4, v_l_126_);
lean_ctor_set(v___x_100_, 3, v_l_109_);
lean_ctor_set(v___x_100_, 2, v_v_108_);
lean_ctor_set(v___x_100_, 1, v_k_107_);
lean_ctor_set(v___x_100_, 0, v___x_150_);
v___x_152_ = v___x_100_;
goto v_reusejp_151_;
}
else
{
lean_object* v_reuseFailAlloc_156_; 
v_reuseFailAlloc_156_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_156_, 0, v___x_150_);
lean_ctor_set(v_reuseFailAlloc_156_, 1, v_k_107_);
lean_ctor_set(v_reuseFailAlloc_156_, 2, v_v_108_);
lean_ctor_set(v_reuseFailAlloc_156_, 3, v_l_109_);
lean_ctor_set(v_reuseFailAlloc_156_, 4, v_l_126_);
v___x_152_ = v_reuseFailAlloc_156_;
goto v_reusejp_151_;
}
v_reusejp_151_:
{
lean_object* v___x_153_; 
v___x_153_ = lean_nat_add(v___x_104_, v_size_105_);
if (lean_obj_tag(v_r_127_) == 0)
{
lean_object* v_size_154_; 
v_size_154_ = lean_ctor_get(v_r_127_, 0);
lean_inc(v_size_154_);
v___y_137_ = v___x_153_;
v___y_138_ = v___x_152_;
v___y_139_ = v_size_154_;
goto v___jp_136_;
}
else
{
lean_object* v___x_155_; 
v___x_155_ = lean_unsigned_to_nat(0u);
v___y_137_ = v___x_153_;
v___y_138_ = v___x_152_;
v___y_139_ = v___x_155_;
goto v___jp_136_;
}
}
}
}
}
else
{
lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v___x_170_; 
lean_del_object(v___x_100_);
v___x_165_ = lean_nat_add(v___x_104_, v_size_106_);
lean_dec(v_size_106_);
v___x_166_ = lean_nat_add(v___x_165_, v_size_105_);
lean_dec(v___x_165_);
v___x_167_ = lean_nat_add(v___x_104_, v_size_105_);
v___x_168_ = lean_nat_add(v___x_167_, v_size_123_);
lean_dec(v___x_167_);
lean_inc_ref(v_r_98_);
if (v_isShared_121_ == 0)
{
lean_ctor_set(v___x_120_, 4, v_r_98_);
lean_ctor_set(v___x_120_, 3, v_r_110_);
lean_ctor_set(v___x_120_, 2, v_v_96_);
lean_ctor_set(v___x_120_, 1, v_k_95_);
lean_ctor_set(v___x_120_, 0, v___x_168_);
v___x_170_ = v___x_120_;
goto v_reusejp_169_;
}
else
{
lean_object* v_reuseFailAlloc_183_; 
v_reuseFailAlloc_183_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_183_, 0, v___x_168_);
lean_ctor_set(v_reuseFailAlloc_183_, 1, v_k_95_);
lean_ctor_set(v_reuseFailAlloc_183_, 2, v_v_96_);
lean_ctor_set(v_reuseFailAlloc_183_, 3, v_r_110_);
lean_ctor_set(v_reuseFailAlloc_183_, 4, v_r_98_);
v___x_170_ = v_reuseFailAlloc_183_;
goto v_reusejp_169_;
}
v_reusejp_169_:
{
lean_object* v___x_172_; uint8_t v_isShared_173_; uint8_t v_isSharedCheck_177_; 
v_isSharedCheck_177_ = !lean_is_exclusive(v_r_98_);
if (v_isSharedCheck_177_ == 0)
{
lean_object* v_unused_178_; lean_object* v_unused_179_; lean_object* v_unused_180_; lean_object* v_unused_181_; lean_object* v_unused_182_; 
v_unused_178_ = lean_ctor_get(v_r_98_, 4);
lean_dec(v_unused_178_);
v_unused_179_ = lean_ctor_get(v_r_98_, 3);
lean_dec(v_unused_179_);
v_unused_180_ = lean_ctor_get(v_r_98_, 2);
lean_dec(v_unused_180_);
v_unused_181_ = lean_ctor_get(v_r_98_, 1);
lean_dec(v_unused_181_);
v_unused_182_ = lean_ctor_get(v_r_98_, 0);
lean_dec(v_unused_182_);
v___x_172_ = v_r_98_;
v_isShared_173_ = v_isSharedCheck_177_;
goto v_resetjp_171_;
}
else
{
lean_dec(v_r_98_);
v___x_172_ = lean_box(0);
v_isShared_173_ = v_isSharedCheck_177_;
goto v_resetjp_171_;
}
v_resetjp_171_:
{
lean_object* v___x_175_; 
if (v_isShared_173_ == 0)
{
lean_ctor_set(v___x_172_, 4, v___x_170_);
lean_ctor_set(v___x_172_, 3, v_l_109_);
lean_ctor_set(v___x_172_, 2, v_v_108_);
lean_ctor_set(v___x_172_, 1, v_k_107_);
lean_ctor_set(v___x_172_, 0, v___x_166_);
v___x_175_ = v___x_172_;
goto v_reusejp_174_;
}
else
{
lean_object* v_reuseFailAlloc_176_; 
v_reuseFailAlloc_176_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_176_, 0, v___x_166_);
lean_ctor_set(v_reuseFailAlloc_176_, 1, v_k_107_);
lean_ctor_set(v_reuseFailAlloc_176_, 2, v_v_108_);
lean_ctor_set(v_reuseFailAlloc_176_, 3, v_l_109_);
lean_ctor_set(v_reuseFailAlloc_176_, 4, v___x_170_);
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
}
}
}
else
{
lean_object* v_l_190_; 
v_l_190_ = lean_ctor_get(v_impl_103_, 3);
lean_inc(v_l_190_);
if (lean_obj_tag(v_l_190_) == 0)
{
lean_object* v_r_191_; lean_object* v_k_192_; lean_object* v_v_193_; lean_object* v___x_195_; uint8_t v_isShared_196_; uint8_t v_isSharedCheck_204_; 
v_r_191_ = lean_ctor_get(v_impl_103_, 4);
v_k_192_ = lean_ctor_get(v_impl_103_, 1);
v_v_193_ = lean_ctor_get(v_impl_103_, 2);
v_isSharedCheck_204_ = !lean_is_exclusive(v_impl_103_);
if (v_isSharedCheck_204_ == 0)
{
lean_object* v_unused_205_; lean_object* v_unused_206_; 
v_unused_205_ = lean_ctor_get(v_impl_103_, 3);
lean_dec(v_unused_205_);
v_unused_206_ = lean_ctor_get(v_impl_103_, 0);
lean_dec(v_unused_206_);
v___x_195_ = v_impl_103_;
v_isShared_196_ = v_isSharedCheck_204_;
goto v_resetjp_194_;
}
else
{
lean_inc(v_r_191_);
lean_inc(v_v_193_);
lean_inc(v_k_192_);
lean_dec(v_impl_103_);
v___x_195_ = lean_box(0);
v_isShared_196_ = v_isSharedCheck_204_;
goto v_resetjp_194_;
}
v_resetjp_194_:
{
lean_object* v___x_197_; lean_object* v___x_199_; 
v___x_197_ = lean_unsigned_to_nat(3u);
lean_inc(v_r_191_);
if (v_isShared_196_ == 0)
{
lean_ctor_set(v___x_195_, 3, v_r_191_);
lean_ctor_set(v___x_195_, 2, v_v_96_);
lean_ctor_set(v___x_195_, 1, v_k_95_);
lean_ctor_set(v___x_195_, 0, v___x_104_);
v___x_199_ = v___x_195_;
goto v_reusejp_198_;
}
else
{
lean_object* v_reuseFailAlloc_203_; 
v_reuseFailAlloc_203_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_203_, 0, v___x_104_);
lean_ctor_set(v_reuseFailAlloc_203_, 1, v_k_95_);
lean_ctor_set(v_reuseFailAlloc_203_, 2, v_v_96_);
lean_ctor_set(v_reuseFailAlloc_203_, 3, v_r_191_);
lean_ctor_set(v_reuseFailAlloc_203_, 4, v_r_191_);
v___x_199_ = v_reuseFailAlloc_203_;
goto v_reusejp_198_;
}
v_reusejp_198_:
{
lean_object* v___x_201_; 
if (v_isShared_101_ == 0)
{
lean_ctor_set(v___x_100_, 4, v___x_199_);
lean_ctor_set(v___x_100_, 3, v_l_190_);
lean_ctor_set(v___x_100_, 2, v_v_193_);
lean_ctor_set(v___x_100_, 1, v_k_192_);
lean_ctor_set(v___x_100_, 0, v___x_197_);
v___x_201_ = v___x_100_;
goto v_reusejp_200_;
}
else
{
lean_object* v_reuseFailAlloc_202_; 
v_reuseFailAlloc_202_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_202_, 0, v___x_197_);
lean_ctor_set(v_reuseFailAlloc_202_, 1, v_k_192_);
lean_ctor_set(v_reuseFailAlloc_202_, 2, v_v_193_);
lean_ctor_set(v_reuseFailAlloc_202_, 3, v_l_190_);
lean_ctor_set(v_reuseFailAlloc_202_, 4, v___x_199_);
v___x_201_ = v_reuseFailAlloc_202_;
goto v_reusejp_200_;
}
v_reusejp_200_:
{
return v___x_201_;
}
}
}
}
else
{
lean_object* v_r_207_; 
v_r_207_ = lean_ctor_get(v_impl_103_, 4);
lean_inc(v_r_207_);
if (lean_obj_tag(v_r_207_) == 0)
{
lean_object* v_k_208_; lean_object* v_v_209_; lean_object* v___x_211_; uint8_t v_isShared_212_; uint8_t v_isSharedCheck_232_; 
v_k_208_ = lean_ctor_get(v_impl_103_, 1);
v_v_209_ = lean_ctor_get(v_impl_103_, 2);
v_isSharedCheck_232_ = !lean_is_exclusive(v_impl_103_);
if (v_isSharedCheck_232_ == 0)
{
lean_object* v_unused_233_; lean_object* v_unused_234_; lean_object* v_unused_235_; 
v_unused_233_ = lean_ctor_get(v_impl_103_, 4);
lean_dec(v_unused_233_);
v_unused_234_ = lean_ctor_get(v_impl_103_, 3);
lean_dec(v_unused_234_);
v_unused_235_ = lean_ctor_get(v_impl_103_, 0);
lean_dec(v_unused_235_);
v___x_211_ = v_impl_103_;
v_isShared_212_ = v_isSharedCheck_232_;
goto v_resetjp_210_;
}
else
{
lean_inc(v_v_209_);
lean_inc(v_k_208_);
lean_dec(v_impl_103_);
v___x_211_ = lean_box(0);
v_isShared_212_ = v_isSharedCheck_232_;
goto v_resetjp_210_;
}
v_resetjp_210_:
{
lean_object* v_k_213_; lean_object* v_v_214_; lean_object* v___x_216_; uint8_t v_isShared_217_; uint8_t v_isSharedCheck_228_; 
v_k_213_ = lean_ctor_get(v_r_207_, 1);
v_v_214_ = lean_ctor_get(v_r_207_, 2);
v_isSharedCheck_228_ = !lean_is_exclusive(v_r_207_);
if (v_isSharedCheck_228_ == 0)
{
lean_object* v_unused_229_; lean_object* v_unused_230_; lean_object* v_unused_231_; 
v_unused_229_ = lean_ctor_get(v_r_207_, 4);
lean_dec(v_unused_229_);
v_unused_230_ = lean_ctor_get(v_r_207_, 3);
lean_dec(v_unused_230_);
v_unused_231_ = lean_ctor_get(v_r_207_, 0);
lean_dec(v_unused_231_);
v___x_216_ = v_r_207_;
v_isShared_217_ = v_isSharedCheck_228_;
goto v_resetjp_215_;
}
else
{
lean_inc(v_v_214_);
lean_inc(v_k_213_);
lean_dec(v_r_207_);
v___x_216_ = lean_box(0);
v_isShared_217_ = v_isSharedCheck_228_;
goto v_resetjp_215_;
}
v_resetjp_215_:
{
lean_object* v___x_218_; lean_object* v___x_220_; 
v___x_218_ = lean_unsigned_to_nat(3u);
if (v_isShared_217_ == 0)
{
lean_ctor_set(v___x_216_, 4, v_l_190_);
lean_ctor_set(v___x_216_, 3, v_l_190_);
lean_ctor_set(v___x_216_, 2, v_v_209_);
lean_ctor_set(v___x_216_, 1, v_k_208_);
lean_ctor_set(v___x_216_, 0, v___x_104_);
v___x_220_ = v___x_216_;
goto v_reusejp_219_;
}
else
{
lean_object* v_reuseFailAlloc_227_; 
v_reuseFailAlloc_227_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_227_, 0, v___x_104_);
lean_ctor_set(v_reuseFailAlloc_227_, 1, v_k_208_);
lean_ctor_set(v_reuseFailAlloc_227_, 2, v_v_209_);
lean_ctor_set(v_reuseFailAlloc_227_, 3, v_l_190_);
lean_ctor_set(v_reuseFailAlloc_227_, 4, v_l_190_);
v___x_220_ = v_reuseFailAlloc_227_;
goto v_reusejp_219_;
}
v_reusejp_219_:
{
lean_object* v___x_222_; 
if (v_isShared_212_ == 0)
{
lean_ctor_set(v___x_211_, 4, v_l_190_);
lean_ctor_set(v___x_211_, 2, v_v_96_);
lean_ctor_set(v___x_211_, 1, v_k_95_);
lean_ctor_set(v___x_211_, 0, v___x_104_);
v___x_222_ = v___x_211_;
goto v_reusejp_221_;
}
else
{
lean_object* v_reuseFailAlloc_226_; 
v_reuseFailAlloc_226_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_226_, 0, v___x_104_);
lean_ctor_set(v_reuseFailAlloc_226_, 1, v_k_95_);
lean_ctor_set(v_reuseFailAlloc_226_, 2, v_v_96_);
lean_ctor_set(v_reuseFailAlloc_226_, 3, v_l_190_);
lean_ctor_set(v_reuseFailAlloc_226_, 4, v_l_190_);
v___x_222_ = v_reuseFailAlloc_226_;
goto v_reusejp_221_;
}
v_reusejp_221_:
{
lean_object* v___x_224_; 
if (v_isShared_101_ == 0)
{
lean_ctor_set(v___x_100_, 4, v___x_222_);
lean_ctor_set(v___x_100_, 3, v___x_220_);
lean_ctor_set(v___x_100_, 2, v_v_214_);
lean_ctor_set(v___x_100_, 1, v_k_213_);
lean_ctor_set(v___x_100_, 0, v___x_218_);
v___x_224_ = v___x_100_;
goto v_reusejp_223_;
}
else
{
lean_object* v_reuseFailAlloc_225_; 
v_reuseFailAlloc_225_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_225_, 0, v___x_218_);
lean_ctor_set(v_reuseFailAlloc_225_, 1, v_k_213_);
lean_ctor_set(v_reuseFailAlloc_225_, 2, v_v_214_);
lean_ctor_set(v_reuseFailAlloc_225_, 3, v___x_220_);
lean_ctor_set(v_reuseFailAlloc_225_, 4, v___x_222_);
v___x_224_ = v_reuseFailAlloc_225_;
goto v_reusejp_223_;
}
v_reusejp_223_:
{
return v___x_224_;
}
}
}
}
}
}
else
{
lean_object* v___x_236_; lean_object* v___x_238_; 
v___x_236_ = lean_unsigned_to_nat(2u);
if (v_isShared_101_ == 0)
{
lean_ctor_set(v___x_100_, 4, v_r_207_);
lean_ctor_set(v___x_100_, 3, v_impl_103_);
lean_ctor_set(v___x_100_, 0, v___x_236_);
v___x_238_ = v___x_100_;
goto v_reusejp_237_;
}
else
{
lean_object* v_reuseFailAlloc_239_; 
v_reuseFailAlloc_239_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_239_, 0, v___x_236_);
lean_ctor_set(v_reuseFailAlloc_239_, 1, v_k_95_);
lean_ctor_set(v_reuseFailAlloc_239_, 2, v_v_96_);
lean_ctor_set(v_reuseFailAlloc_239_, 3, v_impl_103_);
lean_ctor_set(v_reuseFailAlloc_239_, 4, v_r_207_);
v___x_238_ = v_reuseFailAlloc_239_;
goto v_reusejp_237_;
}
v_reusejp_237_:
{
return v___x_238_;
}
}
}
}
}
case 1:
{
lean_object* v___x_241_; 
lean_dec(v_v_96_);
lean_dec(v_k_95_);
if (v_isShared_101_ == 0)
{
lean_ctor_set(v___x_100_, 2, v_v_92_);
lean_ctor_set(v___x_100_, 1, v_k_91_);
v___x_241_ = v___x_100_;
goto v_reusejp_240_;
}
else
{
lean_object* v_reuseFailAlloc_242_; 
v_reuseFailAlloc_242_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_242_, 0, v_size_94_);
lean_ctor_set(v_reuseFailAlloc_242_, 1, v_k_91_);
lean_ctor_set(v_reuseFailAlloc_242_, 2, v_v_92_);
lean_ctor_set(v_reuseFailAlloc_242_, 3, v_l_97_);
lean_ctor_set(v_reuseFailAlloc_242_, 4, v_r_98_);
v___x_241_ = v_reuseFailAlloc_242_;
goto v_reusejp_240_;
}
v_reusejp_240_:
{
return v___x_241_;
}
}
default: 
{
lean_object* v_impl_243_; lean_object* v___x_244_; 
lean_dec(v_size_94_);
v_impl_243_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_k_91_, v_v_92_, v_r_98_);
v___x_244_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_l_97_) == 0)
{
lean_object* v_size_245_; lean_object* v_size_246_; lean_object* v_k_247_; lean_object* v_v_248_; lean_object* v_l_249_; lean_object* v_r_250_; lean_object* v___x_251_; lean_object* v___x_252_; uint8_t v___x_253_; 
v_size_245_ = lean_ctor_get(v_l_97_, 0);
v_size_246_ = lean_ctor_get(v_impl_243_, 0);
lean_inc(v_size_246_);
v_k_247_ = lean_ctor_get(v_impl_243_, 1);
lean_inc(v_k_247_);
v_v_248_ = lean_ctor_get(v_impl_243_, 2);
lean_inc(v_v_248_);
v_l_249_ = lean_ctor_get(v_impl_243_, 3);
lean_inc(v_l_249_);
v_r_250_ = lean_ctor_get(v_impl_243_, 4);
lean_inc(v_r_250_);
v___x_251_ = lean_unsigned_to_nat(3u);
v___x_252_ = lean_nat_mul(v___x_251_, v_size_245_);
v___x_253_ = lean_nat_dec_lt(v___x_252_, v_size_246_);
lean_dec(v___x_252_);
if (v___x_253_ == 0)
{
lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_257_; 
lean_dec(v_r_250_);
lean_dec(v_l_249_);
lean_dec(v_v_248_);
lean_dec(v_k_247_);
v___x_254_ = lean_nat_add(v___x_244_, v_size_245_);
v___x_255_ = lean_nat_add(v___x_254_, v_size_246_);
lean_dec(v_size_246_);
lean_dec(v___x_254_);
if (v_isShared_101_ == 0)
{
lean_ctor_set(v___x_100_, 4, v_impl_243_);
lean_ctor_set(v___x_100_, 0, v___x_255_);
v___x_257_ = v___x_100_;
goto v_reusejp_256_;
}
else
{
lean_object* v_reuseFailAlloc_258_; 
v_reuseFailAlloc_258_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_258_, 0, v___x_255_);
lean_ctor_set(v_reuseFailAlloc_258_, 1, v_k_95_);
lean_ctor_set(v_reuseFailAlloc_258_, 2, v_v_96_);
lean_ctor_set(v_reuseFailAlloc_258_, 3, v_l_97_);
lean_ctor_set(v_reuseFailAlloc_258_, 4, v_impl_243_);
v___x_257_ = v_reuseFailAlloc_258_;
goto v_reusejp_256_;
}
v_reusejp_256_:
{
return v___x_257_;
}
}
else
{
lean_object* v___x_260_; uint8_t v_isShared_261_; uint8_t v_isSharedCheck_322_; 
v_isSharedCheck_322_ = !lean_is_exclusive(v_impl_243_);
if (v_isSharedCheck_322_ == 0)
{
lean_object* v_unused_323_; lean_object* v_unused_324_; lean_object* v_unused_325_; lean_object* v_unused_326_; lean_object* v_unused_327_; 
v_unused_323_ = lean_ctor_get(v_impl_243_, 4);
lean_dec(v_unused_323_);
v_unused_324_ = lean_ctor_get(v_impl_243_, 3);
lean_dec(v_unused_324_);
v_unused_325_ = lean_ctor_get(v_impl_243_, 2);
lean_dec(v_unused_325_);
v_unused_326_ = lean_ctor_get(v_impl_243_, 1);
lean_dec(v_unused_326_);
v_unused_327_ = lean_ctor_get(v_impl_243_, 0);
lean_dec(v_unused_327_);
v___x_260_ = v_impl_243_;
v_isShared_261_ = v_isSharedCheck_322_;
goto v_resetjp_259_;
}
else
{
lean_dec(v_impl_243_);
v___x_260_ = lean_box(0);
v_isShared_261_ = v_isSharedCheck_322_;
goto v_resetjp_259_;
}
v_resetjp_259_:
{
lean_object* v_size_262_; lean_object* v_k_263_; lean_object* v_v_264_; lean_object* v_l_265_; lean_object* v_r_266_; lean_object* v_size_267_; lean_object* v___x_268_; lean_object* v___x_269_; uint8_t v___x_270_; 
v_size_262_ = lean_ctor_get(v_l_249_, 0);
v_k_263_ = lean_ctor_get(v_l_249_, 1);
v_v_264_ = lean_ctor_get(v_l_249_, 2);
v_l_265_ = lean_ctor_get(v_l_249_, 3);
v_r_266_ = lean_ctor_get(v_l_249_, 4);
v_size_267_ = lean_ctor_get(v_r_250_, 0);
v___x_268_ = lean_unsigned_to_nat(2u);
v___x_269_ = lean_nat_mul(v___x_268_, v_size_267_);
v___x_270_ = lean_nat_dec_lt(v_size_262_, v___x_269_);
lean_dec(v___x_269_);
if (v___x_270_ == 0)
{
lean_object* v___x_272_; uint8_t v_isShared_273_; uint8_t v_isSharedCheck_298_; 
lean_inc(v_r_266_);
lean_inc(v_l_265_);
lean_inc(v_v_264_);
lean_inc(v_k_263_);
v_isSharedCheck_298_ = !lean_is_exclusive(v_l_249_);
if (v_isSharedCheck_298_ == 0)
{
lean_object* v_unused_299_; lean_object* v_unused_300_; lean_object* v_unused_301_; lean_object* v_unused_302_; lean_object* v_unused_303_; 
v_unused_299_ = lean_ctor_get(v_l_249_, 4);
lean_dec(v_unused_299_);
v_unused_300_ = lean_ctor_get(v_l_249_, 3);
lean_dec(v_unused_300_);
v_unused_301_ = lean_ctor_get(v_l_249_, 2);
lean_dec(v_unused_301_);
v_unused_302_ = lean_ctor_get(v_l_249_, 1);
lean_dec(v_unused_302_);
v_unused_303_ = lean_ctor_get(v_l_249_, 0);
lean_dec(v_unused_303_);
v___x_272_ = v_l_249_;
v_isShared_273_ = v_isSharedCheck_298_;
goto v_resetjp_271_;
}
else
{
lean_dec(v_l_249_);
v___x_272_ = lean_box(0);
v_isShared_273_ = v_isSharedCheck_298_;
goto v_resetjp_271_;
}
v_resetjp_271_:
{
lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___y_277_; lean_object* v___y_278_; lean_object* v___y_279_; lean_object* v___y_288_; 
v___x_274_ = lean_nat_add(v___x_244_, v_size_245_);
v___x_275_ = lean_nat_add(v___x_274_, v_size_246_);
lean_dec(v_size_246_);
if (lean_obj_tag(v_l_265_) == 0)
{
lean_object* v_size_296_; 
v_size_296_ = lean_ctor_get(v_l_265_, 0);
lean_inc(v_size_296_);
v___y_288_ = v_size_296_;
goto v___jp_287_;
}
else
{
lean_object* v___x_297_; 
v___x_297_ = lean_unsigned_to_nat(0u);
v___y_288_ = v___x_297_;
goto v___jp_287_;
}
v___jp_276_:
{
lean_object* v___x_280_; lean_object* v___x_282_; 
v___x_280_ = lean_nat_add(v___y_278_, v___y_279_);
lean_dec(v___y_279_);
lean_dec(v___y_278_);
if (v_isShared_273_ == 0)
{
lean_ctor_set(v___x_272_, 4, v_r_250_);
lean_ctor_set(v___x_272_, 3, v_r_266_);
lean_ctor_set(v___x_272_, 2, v_v_248_);
lean_ctor_set(v___x_272_, 1, v_k_247_);
lean_ctor_set(v___x_272_, 0, v___x_280_);
v___x_282_ = v___x_272_;
goto v_reusejp_281_;
}
else
{
lean_object* v_reuseFailAlloc_286_; 
v_reuseFailAlloc_286_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_286_, 0, v___x_280_);
lean_ctor_set(v_reuseFailAlloc_286_, 1, v_k_247_);
lean_ctor_set(v_reuseFailAlloc_286_, 2, v_v_248_);
lean_ctor_set(v_reuseFailAlloc_286_, 3, v_r_266_);
lean_ctor_set(v_reuseFailAlloc_286_, 4, v_r_250_);
v___x_282_ = v_reuseFailAlloc_286_;
goto v_reusejp_281_;
}
v_reusejp_281_:
{
lean_object* v___x_284_; 
if (v_isShared_261_ == 0)
{
lean_ctor_set(v___x_260_, 4, v___x_282_);
lean_ctor_set(v___x_260_, 3, v___y_277_);
lean_ctor_set(v___x_260_, 2, v_v_264_);
lean_ctor_set(v___x_260_, 1, v_k_263_);
lean_ctor_set(v___x_260_, 0, v___x_275_);
v___x_284_ = v___x_260_;
goto v_reusejp_283_;
}
else
{
lean_object* v_reuseFailAlloc_285_; 
v_reuseFailAlloc_285_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_285_, 0, v___x_275_);
lean_ctor_set(v_reuseFailAlloc_285_, 1, v_k_263_);
lean_ctor_set(v_reuseFailAlloc_285_, 2, v_v_264_);
lean_ctor_set(v_reuseFailAlloc_285_, 3, v___y_277_);
lean_ctor_set(v_reuseFailAlloc_285_, 4, v___x_282_);
v___x_284_ = v_reuseFailAlloc_285_;
goto v_reusejp_283_;
}
v_reusejp_283_:
{
return v___x_284_;
}
}
}
v___jp_287_:
{
lean_object* v___x_289_; lean_object* v___x_291_; 
v___x_289_ = lean_nat_add(v___x_274_, v___y_288_);
lean_dec(v___y_288_);
lean_dec(v___x_274_);
if (v_isShared_101_ == 0)
{
lean_ctor_set(v___x_100_, 4, v_l_265_);
lean_ctor_set(v___x_100_, 0, v___x_289_);
v___x_291_ = v___x_100_;
goto v_reusejp_290_;
}
else
{
lean_object* v_reuseFailAlloc_295_; 
v_reuseFailAlloc_295_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_295_, 0, v___x_289_);
lean_ctor_set(v_reuseFailAlloc_295_, 1, v_k_95_);
lean_ctor_set(v_reuseFailAlloc_295_, 2, v_v_96_);
lean_ctor_set(v_reuseFailAlloc_295_, 3, v_l_97_);
lean_ctor_set(v_reuseFailAlloc_295_, 4, v_l_265_);
v___x_291_ = v_reuseFailAlloc_295_;
goto v_reusejp_290_;
}
v_reusejp_290_:
{
lean_object* v___x_292_; 
v___x_292_ = lean_nat_add(v___x_244_, v_size_267_);
if (lean_obj_tag(v_r_266_) == 0)
{
lean_object* v_size_293_; 
v_size_293_ = lean_ctor_get(v_r_266_, 0);
lean_inc(v_size_293_);
v___y_277_ = v___x_291_;
v___y_278_ = v___x_292_;
v___y_279_ = v_size_293_;
goto v___jp_276_;
}
else
{
lean_object* v___x_294_; 
v___x_294_ = lean_unsigned_to_nat(0u);
v___y_277_ = v___x_291_;
v___y_278_ = v___x_292_;
v___y_279_ = v___x_294_;
goto v___jp_276_;
}
}
}
}
}
else
{
lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v___x_306_; lean_object* v___x_308_; 
lean_del_object(v___x_100_);
v___x_304_ = lean_nat_add(v___x_244_, v_size_245_);
v___x_305_ = lean_nat_add(v___x_304_, v_size_246_);
lean_dec(v_size_246_);
v___x_306_ = lean_nat_add(v___x_304_, v_size_262_);
lean_dec(v___x_304_);
lean_inc_ref(v_l_97_);
if (v_isShared_261_ == 0)
{
lean_ctor_set(v___x_260_, 4, v_l_249_);
lean_ctor_set(v___x_260_, 3, v_l_97_);
lean_ctor_set(v___x_260_, 2, v_v_96_);
lean_ctor_set(v___x_260_, 1, v_k_95_);
lean_ctor_set(v___x_260_, 0, v___x_306_);
v___x_308_ = v___x_260_;
goto v_reusejp_307_;
}
else
{
lean_object* v_reuseFailAlloc_321_; 
v_reuseFailAlloc_321_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_321_, 0, v___x_306_);
lean_ctor_set(v_reuseFailAlloc_321_, 1, v_k_95_);
lean_ctor_set(v_reuseFailAlloc_321_, 2, v_v_96_);
lean_ctor_set(v_reuseFailAlloc_321_, 3, v_l_97_);
lean_ctor_set(v_reuseFailAlloc_321_, 4, v_l_249_);
v___x_308_ = v_reuseFailAlloc_321_;
goto v_reusejp_307_;
}
v_reusejp_307_:
{
lean_object* v___x_310_; uint8_t v_isShared_311_; uint8_t v_isSharedCheck_315_; 
v_isSharedCheck_315_ = !lean_is_exclusive(v_l_97_);
if (v_isSharedCheck_315_ == 0)
{
lean_object* v_unused_316_; lean_object* v_unused_317_; lean_object* v_unused_318_; lean_object* v_unused_319_; lean_object* v_unused_320_; 
v_unused_316_ = lean_ctor_get(v_l_97_, 4);
lean_dec(v_unused_316_);
v_unused_317_ = lean_ctor_get(v_l_97_, 3);
lean_dec(v_unused_317_);
v_unused_318_ = lean_ctor_get(v_l_97_, 2);
lean_dec(v_unused_318_);
v_unused_319_ = lean_ctor_get(v_l_97_, 1);
lean_dec(v_unused_319_);
v_unused_320_ = lean_ctor_get(v_l_97_, 0);
lean_dec(v_unused_320_);
v___x_310_ = v_l_97_;
v_isShared_311_ = v_isSharedCheck_315_;
goto v_resetjp_309_;
}
else
{
lean_dec(v_l_97_);
v___x_310_ = lean_box(0);
v_isShared_311_ = v_isSharedCheck_315_;
goto v_resetjp_309_;
}
v_resetjp_309_:
{
lean_object* v___x_313_; 
if (v_isShared_311_ == 0)
{
lean_ctor_set(v___x_310_, 4, v_r_250_);
lean_ctor_set(v___x_310_, 3, v___x_308_);
lean_ctor_set(v___x_310_, 2, v_v_248_);
lean_ctor_set(v___x_310_, 1, v_k_247_);
lean_ctor_set(v___x_310_, 0, v___x_305_);
v___x_313_ = v___x_310_;
goto v_reusejp_312_;
}
else
{
lean_object* v_reuseFailAlloc_314_; 
v_reuseFailAlloc_314_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_314_, 0, v___x_305_);
lean_ctor_set(v_reuseFailAlloc_314_, 1, v_k_247_);
lean_ctor_set(v_reuseFailAlloc_314_, 2, v_v_248_);
lean_ctor_set(v_reuseFailAlloc_314_, 3, v___x_308_);
lean_ctor_set(v_reuseFailAlloc_314_, 4, v_r_250_);
v___x_313_ = v_reuseFailAlloc_314_;
goto v_reusejp_312_;
}
v_reusejp_312_:
{
return v___x_313_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_328_; 
v_l_328_ = lean_ctor_get(v_impl_243_, 3);
lean_inc(v_l_328_);
if (lean_obj_tag(v_l_328_) == 0)
{
lean_object* v_r_329_; lean_object* v_k_330_; lean_object* v_v_331_; lean_object* v___x_333_; uint8_t v_isShared_334_; uint8_t v_isSharedCheck_354_; 
v_r_329_ = lean_ctor_get(v_impl_243_, 4);
v_k_330_ = lean_ctor_get(v_impl_243_, 1);
v_v_331_ = lean_ctor_get(v_impl_243_, 2);
v_isSharedCheck_354_ = !lean_is_exclusive(v_impl_243_);
if (v_isSharedCheck_354_ == 0)
{
lean_object* v_unused_355_; lean_object* v_unused_356_; 
v_unused_355_ = lean_ctor_get(v_impl_243_, 3);
lean_dec(v_unused_355_);
v_unused_356_ = lean_ctor_get(v_impl_243_, 0);
lean_dec(v_unused_356_);
v___x_333_ = v_impl_243_;
v_isShared_334_ = v_isSharedCheck_354_;
goto v_resetjp_332_;
}
else
{
lean_inc(v_r_329_);
lean_inc(v_v_331_);
lean_inc(v_k_330_);
lean_dec(v_impl_243_);
v___x_333_ = lean_box(0);
v_isShared_334_ = v_isSharedCheck_354_;
goto v_resetjp_332_;
}
v_resetjp_332_:
{
lean_object* v_k_335_; lean_object* v_v_336_; lean_object* v___x_338_; uint8_t v_isShared_339_; uint8_t v_isSharedCheck_350_; 
v_k_335_ = lean_ctor_get(v_l_328_, 1);
v_v_336_ = lean_ctor_get(v_l_328_, 2);
v_isSharedCheck_350_ = !lean_is_exclusive(v_l_328_);
if (v_isSharedCheck_350_ == 0)
{
lean_object* v_unused_351_; lean_object* v_unused_352_; lean_object* v_unused_353_; 
v_unused_351_ = lean_ctor_get(v_l_328_, 4);
lean_dec(v_unused_351_);
v_unused_352_ = lean_ctor_get(v_l_328_, 3);
lean_dec(v_unused_352_);
v_unused_353_ = lean_ctor_get(v_l_328_, 0);
lean_dec(v_unused_353_);
v___x_338_ = v_l_328_;
v_isShared_339_ = v_isSharedCheck_350_;
goto v_resetjp_337_;
}
else
{
lean_inc(v_v_336_);
lean_inc(v_k_335_);
lean_dec(v_l_328_);
v___x_338_ = lean_box(0);
v_isShared_339_ = v_isSharedCheck_350_;
goto v_resetjp_337_;
}
v_resetjp_337_:
{
lean_object* v___x_340_; lean_object* v___x_342_; 
v___x_340_ = lean_unsigned_to_nat(3u);
lean_inc_n(v_r_329_, 2);
if (v_isShared_339_ == 0)
{
lean_ctor_set(v___x_338_, 4, v_r_329_);
lean_ctor_set(v___x_338_, 3, v_r_329_);
lean_ctor_set(v___x_338_, 2, v_v_96_);
lean_ctor_set(v___x_338_, 1, v_k_95_);
lean_ctor_set(v___x_338_, 0, v___x_244_);
v___x_342_ = v___x_338_;
goto v_reusejp_341_;
}
else
{
lean_object* v_reuseFailAlloc_349_; 
v_reuseFailAlloc_349_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_349_, 0, v___x_244_);
lean_ctor_set(v_reuseFailAlloc_349_, 1, v_k_95_);
lean_ctor_set(v_reuseFailAlloc_349_, 2, v_v_96_);
lean_ctor_set(v_reuseFailAlloc_349_, 3, v_r_329_);
lean_ctor_set(v_reuseFailAlloc_349_, 4, v_r_329_);
v___x_342_ = v_reuseFailAlloc_349_;
goto v_reusejp_341_;
}
v_reusejp_341_:
{
lean_object* v___x_344_; 
lean_inc(v_r_329_);
if (v_isShared_334_ == 0)
{
lean_ctor_set(v___x_333_, 3, v_r_329_);
lean_ctor_set(v___x_333_, 0, v___x_244_);
v___x_344_ = v___x_333_;
goto v_reusejp_343_;
}
else
{
lean_object* v_reuseFailAlloc_348_; 
v_reuseFailAlloc_348_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_348_, 0, v___x_244_);
lean_ctor_set(v_reuseFailAlloc_348_, 1, v_k_330_);
lean_ctor_set(v_reuseFailAlloc_348_, 2, v_v_331_);
lean_ctor_set(v_reuseFailAlloc_348_, 3, v_r_329_);
lean_ctor_set(v_reuseFailAlloc_348_, 4, v_r_329_);
v___x_344_ = v_reuseFailAlloc_348_;
goto v_reusejp_343_;
}
v_reusejp_343_:
{
lean_object* v___x_346_; 
if (v_isShared_101_ == 0)
{
lean_ctor_set(v___x_100_, 4, v___x_344_);
lean_ctor_set(v___x_100_, 3, v___x_342_);
lean_ctor_set(v___x_100_, 2, v_v_336_);
lean_ctor_set(v___x_100_, 1, v_k_335_);
lean_ctor_set(v___x_100_, 0, v___x_340_);
v___x_346_ = v___x_100_;
goto v_reusejp_345_;
}
else
{
lean_object* v_reuseFailAlloc_347_; 
v_reuseFailAlloc_347_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_347_, 0, v___x_340_);
lean_ctor_set(v_reuseFailAlloc_347_, 1, v_k_335_);
lean_ctor_set(v_reuseFailAlloc_347_, 2, v_v_336_);
lean_ctor_set(v_reuseFailAlloc_347_, 3, v___x_342_);
lean_ctor_set(v_reuseFailAlloc_347_, 4, v___x_344_);
v___x_346_ = v_reuseFailAlloc_347_;
goto v_reusejp_345_;
}
v_reusejp_345_:
{
return v___x_346_;
}
}
}
}
}
}
else
{
lean_object* v_r_357_; 
v_r_357_ = lean_ctor_get(v_impl_243_, 4);
lean_inc(v_r_357_);
if (lean_obj_tag(v_r_357_) == 0)
{
lean_object* v_k_358_; lean_object* v_v_359_; lean_object* v___x_361_; uint8_t v_isShared_362_; uint8_t v_isSharedCheck_370_; 
v_k_358_ = lean_ctor_get(v_impl_243_, 1);
v_v_359_ = lean_ctor_get(v_impl_243_, 2);
v_isSharedCheck_370_ = !lean_is_exclusive(v_impl_243_);
if (v_isSharedCheck_370_ == 0)
{
lean_object* v_unused_371_; lean_object* v_unused_372_; lean_object* v_unused_373_; 
v_unused_371_ = lean_ctor_get(v_impl_243_, 4);
lean_dec(v_unused_371_);
v_unused_372_ = lean_ctor_get(v_impl_243_, 3);
lean_dec(v_unused_372_);
v_unused_373_ = lean_ctor_get(v_impl_243_, 0);
lean_dec(v_unused_373_);
v___x_361_ = v_impl_243_;
v_isShared_362_ = v_isSharedCheck_370_;
goto v_resetjp_360_;
}
else
{
lean_inc(v_v_359_);
lean_inc(v_k_358_);
lean_dec(v_impl_243_);
v___x_361_ = lean_box(0);
v_isShared_362_ = v_isSharedCheck_370_;
goto v_resetjp_360_;
}
v_resetjp_360_:
{
lean_object* v___x_363_; lean_object* v___x_365_; 
v___x_363_ = lean_unsigned_to_nat(3u);
if (v_isShared_362_ == 0)
{
lean_ctor_set(v___x_361_, 4, v_l_328_);
lean_ctor_set(v___x_361_, 2, v_v_96_);
lean_ctor_set(v___x_361_, 1, v_k_95_);
lean_ctor_set(v___x_361_, 0, v___x_244_);
v___x_365_ = v___x_361_;
goto v_reusejp_364_;
}
else
{
lean_object* v_reuseFailAlloc_369_; 
v_reuseFailAlloc_369_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_369_, 0, v___x_244_);
lean_ctor_set(v_reuseFailAlloc_369_, 1, v_k_95_);
lean_ctor_set(v_reuseFailAlloc_369_, 2, v_v_96_);
lean_ctor_set(v_reuseFailAlloc_369_, 3, v_l_328_);
lean_ctor_set(v_reuseFailAlloc_369_, 4, v_l_328_);
v___x_365_ = v_reuseFailAlloc_369_;
goto v_reusejp_364_;
}
v_reusejp_364_:
{
lean_object* v___x_367_; 
if (v_isShared_101_ == 0)
{
lean_ctor_set(v___x_100_, 4, v_r_357_);
lean_ctor_set(v___x_100_, 3, v___x_365_);
lean_ctor_set(v___x_100_, 2, v_v_359_);
lean_ctor_set(v___x_100_, 1, v_k_358_);
lean_ctor_set(v___x_100_, 0, v___x_363_);
v___x_367_ = v___x_100_;
goto v_reusejp_366_;
}
else
{
lean_object* v_reuseFailAlloc_368_; 
v_reuseFailAlloc_368_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_368_, 0, v___x_363_);
lean_ctor_set(v_reuseFailAlloc_368_, 1, v_k_358_);
lean_ctor_set(v_reuseFailAlloc_368_, 2, v_v_359_);
lean_ctor_set(v_reuseFailAlloc_368_, 3, v___x_365_);
lean_ctor_set(v_reuseFailAlloc_368_, 4, v_r_357_);
v___x_367_ = v_reuseFailAlloc_368_;
goto v_reusejp_366_;
}
v_reusejp_366_:
{
return v___x_367_;
}
}
}
}
else
{
lean_object* v___x_374_; lean_object* v___x_376_; 
v___x_374_ = lean_unsigned_to_nat(2u);
if (v_isShared_101_ == 0)
{
lean_ctor_set(v___x_100_, 4, v_impl_243_);
lean_ctor_set(v___x_100_, 3, v_r_357_);
lean_ctor_set(v___x_100_, 0, v___x_374_);
v___x_376_ = v___x_100_;
goto v_reusejp_375_;
}
else
{
lean_object* v_reuseFailAlloc_377_; 
v_reuseFailAlloc_377_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_377_, 0, v___x_374_);
lean_ctor_set(v_reuseFailAlloc_377_, 1, v_k_95_);
lean_ctor_set(v_reuseFailAlloc_377_, 2, v_v_96_);
lean_ctor_set(v_reuseFailAlloc_377_, 3, v_r_357_);
lean_ctor_set(v_reuseFailAlloc_377_, 4, v_impl_243_);
v___x_376_ = v_reuseFailAlloc_377_;
goto v_reusejp_375_;
}
v_reusejp_375_:
{
return v___x_376_;
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
lean_object* v___x_379_; lean_object* v___x_380_; 
v___x_379_ = lean_unsigned_to_nat(1u);
v___x_380_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_380_, 0, v___x_379_);
lean_ctor_set(v___x_380_, 1, v_k_91_);
lean_ctor_set(v___x_380_, 2, v_v_92_);
lean_ctor_set(v___x_380_, 3, v_t_93_);
lean_ctor_set(v___x_380_, 4, v_t_93_);
return v___x_380_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_insert___redArg(lean_object* v_m_381_, lean_object* v_n_382_, lean_object* v_a_383_){
_start:
{
lean_object* v___x_384_; 
v___x_384_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_n_382_, v_a_383_, v_m_381_);
return v___x_384_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_insert(lean_object* v_00_u03b1_385_, lean_object* v_m_386_, lean_object* v_n_387_, lean_object* v_a_388_){
_start:
{
lean_object* v___x_389_; 
v___x_389_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_n_387_, v_a_388_, v_m_386_);
return v___x_389_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0(lean_object* v_00_u03b2_390_, lean_object* v_k_391_, lean_object* v_v_392_, lean_object* v_t_393_, lean_object* v_hl_394_){
_start:
{
lean_object* v___x_395_; 
v___x_395_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_k_391_, v_v_392_, v_t_393_);
return v___x_395_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_NameMap_erase_spec__0___redArg(lean_object* v_k_396_, lean_object* v_t_397_){
_start:
{
if (lean_obj_tag(v_t_397_) == 0)
{
lean_object* v_k_398_; lean_object* v_v_399_; lean_object* v_l_400_; lean_object* v_r_401_; lean_object* v___x_403_; uint8_t v_isShared_404_; uint8_t v_isSharedCheck_1055_; 
v_k_398_ = lean_ctor_get(v_t_397_, 1);
v_v_399_ = lean_ctor_get(v_t_397_, 2);
v_l_400_ = lean_ctor_get(v_t_397_, 3);
v_r_401_ = lean_ctor_get(v_t_397_, 4);
v_isSharedCheck_1055_ = !lean_is_exclusive(v_t_397_);
if (v_isSharedCheck_1055_ == 0)
{
lean_object* v_unused_1056_; 
v_unused_1056_ = lean_ctor_get(v_t_397_, 0);
lean_dec(v_unused_1056_);
v___x_403_ = v_t_397_;
v_isShared_404_ = v_isSharedCheck_1055_;
goto v_resetjp_402_;
}
else
{
lean_inc(v_r_401_);
lean_inc(v_l_400_);
lean_inc(v_v_399_);
lean_inc(v_k_398_);
lean_dec(v_t_397_);
v___x_403_ = lean_box(0);
v_isShared_404_ = v_isSharedCheck_1055_;
goto v_resetjp_402_;
}
v_resetjp_402_:
{
uint8_t v___x_405_; 
v___x_405_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_396_, v_k_398_);
switch(v___x_405_)
{
case 0:
{
lean_object* v_impl_406_; lean_object* v___x_407_; 
v_impl_406_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_NameMap_erase_spec__0___redArg(v_k_396_, v_l_400_);
v___x_407_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_impl_406_) == 0)
{
if (lean_obj_tag(v_r_401_) == 0)
{
lean_object* v_size_408_; lean_object* v_size_409_; lean_object* v_k_410_; lean_object* v_v_411_; lean_object* v_l_412_; lean_object* v_r_413_; lean_object* v___x_414_; lean_object* v___x_415_; uint8_t v___x_416_; 
v_size_408_ = lean_ctor_get(v_impl_406_, 0);
lean_inc(v_size_408_);
v_size_409_ = lean_ctor_get(v_r_401_, 0);
v_k_410_ = lean_ctor_get(v_r_401_, 1);
v_v_411_ = lean_ctor_get(v_r_401_, 2);
v_l_412_ = lean_ctor_get(v_r_401_, 3);
lean_inc(v_l_412_);
v_r_413_ = lean_ctor_get(v_r_401_, 4);
v___x_414_ = lean_unsigned_to_nat(3u);
v___x_415_ = lean_nat_mul(v___x_414_, v_size_408_);
v___x_416_ = lean_nat_dec_lt(v___x_415_, v_size_409_);
lean_dec(v___x_415_);
if (v___x_416_ == 0)
{
lean_object* v___x_417_; lean_object* v___x_418_; lean_object* v___x_420_; 
lean_dec(v_l_412_);
v___x_417_ = lean_nat_add(v___x_407_, v_size_408_);
lean_dec(v_size_408_);
v___x_418_ = lean_nat_add(v___x_417_, v_size_409_);
lean_dec(v___x_417_);
if (v_isShared_404_ == 0)
{
lean_ctor_set(v___x_403_, 3, v_impl_406_);
lean_ctor_set(v___x_403_, 0, v___x_418_);
v___x_420_ = v___x_403_;
goto v_reusejp_419_;
}
else
{
lean_object* v_reuseFailAlloc_421_; 
v_reuseFailAlloc_421_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_421_, 0, v___x_418_);
lean_ctor_set(v_reuseFailAlloc_421_, 1, v_k_398_);
lean_ctor_set(v_reuseFailAlloc_421_, 2, v_v_399_);
lean_ctor_set(v_reuseFailAlloc_421_, 3, v_impl_406_);
lean_ctor_set(v_reuseFailAlloc_421_, 4, v_r_401_);
v___x_420_ = v_reuseFailAlloc_421_;
goto v_reusejp_419_;
}
v_reusejp_419_:
{
return v___x_420_;
}
}
else
{
lean_object* v___x_423_; uint8_t v_isShared_424_; uint8_t v_isSharedCheck_485_; 
lean_inc(v_r_413_);
lean_inc(v_v_411_);
lean_inc(v_k_410_);
lean_inc(v_size_409_);
v_isSharedCheck_485_ = !lean_is_exclusive(v_r_401_);
if (v_isSharedCheck_485_ == 0)
{
lean_object* v_unused_486_; lean_object* v_unused_487_; lean_object* v_unused_488_; lean_object* v_unused_489_; lean_object* v_unused_490_; 
v_unused_486_ = lean_ctor_get(v_r_401_, 4);
lean_dec(v_unused_486_);
v_unused_487_ = lean_ctor_get(v_r_401_, 3);
lean_dec(v_unused_487_);
v_unused_488_ = lean_ctor_get(v_r_401_, 2);
lean_dec(v_unused_488_);
v_unused_489_ = lean_ctor_get(v_r_401_, 1);
lean_dec(v_unused_489_);
v_unused_490_ = lean_ctor_get(v_r_401_, 0);
lean_dec(v_unused_490_);
v___x_423_ = v_r_401_;
v_isShared_424_ = v_isSharedCheck_485_;
goto v_resetjp_422_;
}
else
{
lean_dec(v_r_401_);
v___x_423_ = lean_box(0);
v_isShared_424_ = v_isSharedCheck_485_;
goto v_resetjp_422_;
}
v_resetjp_422_:
{
lean_object* v_size_425_; lean_object* v_k_426_; lean_object* v_v_427_; lean_object* v_l_428_; lean_object* v_r_429_; lean_object* v_size_430_; lean_object* v___x_431_; lean_object* v___x_432_; uint8_t v___x_433_; 
v_size_425_ = lean_ctor_get(v_l_412_, 0);
v_k_426_ = lean_ctor_get(v_l_412_, 1);
v_v_427_ = lean_ctor_get(v_l_412_, 2);
v_l_428_ = lean_ctor_get(v_l_412_, 3);
v_r_429_ = lean_ctor_get(v_l_412_, 4);
v_size_430_ = lean_ctor_get(v_r_413_, 0);
v___x_431_ = lean_unsigned_to_nat(2u);
v___x_432_ = lean_nat_mul(v___x_431_, v_size_430_);
v___x_433_ = lean_nat_dec_lt(v_size_425_, v___x_432_);
lean_dec(v___x_432_);
if (v___x_433_ == 0)
{
lean_object* v___x_435_; uint8_t v_isShared_436_; uint8_t v_isSharedCheck_461_; 
lean_inc(v_r_429_);
lean_inc(v_l_428_);
lean_inc(v_v_427_);
lean_inc(v_k_426_);
v_isSharedCheck_461_ = !lean_is_exclusive(v_l_412_);
if (v_isSharedCheck_461_ == 0)
{
lean_object* v_unused_462_; lean_object* v_unused_463_; lean_object* v_unused_464_; lean_object* v_unused_465_; lean_object* v_unused_466_; 
v_unused_462_ = lean_ctor_get(v_l_412_, 4);
lean_dec(v_unused_462_);
v_unused_463_ = lean_ctor_get(v_l_412_, 3);
lean_dec(v_unused_463_);
v_unused_464_ = lean_ctor_get(v_l_412_, 2);
lean_dec(v_unused_464_);
v_unused_465_ = lean_ctor_get(v_l_412_, 1);
lean_dec(v_unused_465_);
v_unused_466_ = lean_ctor_get(v_l_412_, 0);
lean_dec(v_unused_466_);
v___x_435_ = v_l_412_;
v_isShared_436_ = v_isSharedCheck_461_;
goto v_resetjp_434_;
}
else
{
lean_dec(v_l_412_);
v___x_435_ = lean_box(0);
v_isShared_436_ = v_isSharedCheck_461_;
goto v_resetjp_434_;
}
v_resetjp_434_:
{
lean_object* v___x_437_; lean_object* v___x_438_; lean_object* v___y_440_; lean_object* v___y_441_; lean_object* v___y_442_; lean_object* v___y_451_; 
v___x_437_ = lean_nat_add(v___x_407_, v_size_408_);
lean_dec(v_size_408_);
v___x_438_ = lean_nat_add(v___x_437_, v_size_409_);
lean_dec(v_size_409_);
if (lean_obj_tag(v_l_428_) == 0)
{
lean_object* v_size_459_; 
v_size_459_ = lean_ctor_get(v_l_428_, 0);
lean_inc(v_size_459_);
v___y_451_ = v_size_459_;
goto v___jp_450_;
}
else
{
lean_object* v___x_460_; 
v___x_460_ = lean_unsigned_to_nat(0u);
v___y_451_ = v___x_460_;
goto v___jp_450_;
}
v___jp_439_:
{
lean_object* v___x_443_; lean_object* v___x_445_; 
v___x_443_ = lean_nat_add(v___y_440_, v___y_442_);
lean_dec(v___y_442_);
lean_dec(v___y_440_);
if (v_isShared_436_ == 0)
{
lean_ctor_set(v___x_435_, 4, v_r_413_);
lean_ctor_set(v___x_435_, 3, v_r_429_);
lean_ctor_set(v___x_435_, 2, v_v_411_);
lean_ctor_set(v___x_435_, 1, v_k_410_);
lean_ctor_set(v___x_435_, 0, v___x_443_);
v___x_445_ = v___x_435_;
goto v_reusejp_444_;
}
else
{
lean_object* v_reuseFailAlloc_449_; 
v_reuseFailAlloc_449_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_449_, 0, v___x_443_);
lean_ctor_set(v_reuseFailAlloc_449_, 1, v_k_410_);
lean_ctor_set(v_reuseFailAlloc_449_, 2, v_v_411_);
lean_ctor_set(v_reuseFailAlloc_449_, 3, v_r_429_);
lean_ctor_set(v_reuseFailAlloc_449_, 4, v_r_413_);
v___x_445_ = v_reuseFailAlloc_449_;
goto v_reusejp_444_;
}
v_reusejp_444_:
{
lean_object* v___x_447_; 
if (v_isShared_424_ == 0)
{
lean_ctor_set(v___x_423_, 4, v___x_445_);
lean_ctor_set(v___x_423_, 3, v___y_441_);
lean_ctor_set(v___x_423_, 2, v_v_427_);
lean_ctor_set(v___x_423_, 1, v_k_426_);
lean_ctor_set(v___x_423_, 0, v___x_438_);
v___x_447_ = v___x_423_;
goto v_reusejp_446_;
}
else
{
lean_object* v_reuseFailAlloc_448_; 
v_reuseFailAlloc_448_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_448_, 0, v___x_438_);
lean_ctor_set(v_reuseFailAlloc_448_, 1, v_k_426_);
lean_ctor_set(v_reuseFailAlloc_448_, 2, v_v_427_);
lean_ctor_set(v_reuseFailAlloc_448_, 3, v___y_441_);
lean_ctor_set(v_reuseFailAlloc_448_, 4, v___x_445_);
v___x_447_ = v_reuseFailAlloc_448_;
goto v_reusejp_446_;
}
v_reusejp_446_:
{
return v___x_447_;
}
}
}
v___jp_450_:
{
lean_object* v___x_452_; lean_object* v___x_454_; 
v___x_452_ = lean_nat_add(v___x_437_, v___y_451_);
lean_dec(v___y_451_);
lean_dec(v___x_437_);
if (v_isShared_404_ == 0)
{
lean_ctor_set(v___x_403_, 4, v_l_428_);
lean_ctor_set(v___x_403_, 3, v_impl_406_);
lean_ctor_set(v___x_403_, 0, v___x_452_);
v___x_454_ = v___x_403_;
goto v_reusejp_453_;
}
else
{
lean_object* v_reuseFailAlloc_458_; 
v_reuseFailAlloc_458_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_458_, 0, v___x_452_);
lean_ctor_set(v_reuseFailAlloc_458_, 1, v_k_398_);
lean_ctor_set(v_reuseFailAlloc_458_, 2, v_v_399_);
lean_ctor_set(v_reuseFailAlloc_458_, 3, v_impl_406_);
lean_ctor_set(v_reuseFailAlloc_458_, 4, v_l_428_);
v___x_454_ = v_reuseFailAlloc_458_;
goto v_reusejp_453_;
}
v_reusejp_453_:
{
lean_object* v___x_455_; 
v___x_455_ = lean_nat_add(v___x_407_, v_size_430_);
if (lean_obj_tag(v_r_429_) == 0)
{
lean_object* v_size_456_; 
v_size_456_ = lean_ctor_get(v_r_429_, 0);
lean_inc(v_size_456_);
v___y_440_ = v___x_455_;
v___y_441_ = v___x_454_;
v___y_442_ = v_size_456_;
goto v___jp_439_;
}
else
{
lean_object* v___x_457_; 
v___x_457_ = lean_unsigned_to_nat(0u);
v___y_440_ = v___x_455_;
v___y_441_ = v___x_454_;
v___y_442_ = v___x_457_;
goto v___jp_439_;
}
}
}
}
}
else
{
lean_object* v___x_467_; lean_object* v___x_468_; lean_object* v___x_469_; lean_object* v___x_471_; 
lean_del_object(v___x_403_);
v___x_467_ = lean_nat_add(v___x_407_, v_size_408_);
lean_dec(v_size_408_);
v___x_468_ = lean_nat_add(v___x_467_, v_size_409_);
lean_dec(v_size_409_);
v___x_469_ = lean_nat_add(v___x_467_, v_size_425_);
lean_dec(v___x_467_);
lean_inc_ref(v_impl_406_);
if (v_isShared_424_ == 0)
{
lean_ctor_set(v___x_423_, 4, v_l_412_);
lean_ctor_set(v___x_423_, 3, v_impl_406_);
lean_ctor_set(v___x_423_, 2, v_v_399_);
lean_ctor_set(v___x_423_, 1, v_k_398_);
lean_ctor_set(v___x_423_, 0, v___x_469_);
v___x_471_ = v___x_423_;
goto v_reusejp_470_;
}
else
{
lean_object* v_reuseFailAlloc_484_; 
v_reuseFailAlloc_484_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_484_, 0, v___x_469_);
lean_ctor_set(v_reuseFailAlloc_484_, 1, v_k_398_);
lean_ctor_set(v_reuseFailAlloc_484_, 2, v_v_399_);
lean_ctor_set(v_reuseFailAlloc_484_, 3, v_impl_406_);
lean_ctor_set(v_reuseFailAlloc_484_, 4, v_l_412_);
v___x_471_ = v_reuseFailAlloc_484_;
goto v_reusejp_470_;
}
v_reusejp_470_:
{
lean_object* v___x_473_; uint8_t v_isShared_474_; uint8_t v_isSharedCheck_478_; 
v_isSharedCheck_478_ = !lean_is_exclusive(v_impl_406_);
if (v_isSharedCheck_478_ == 0)
{
lean_object* v_unused_479_; lean_object* v_unused_480_; lean_object* v_unused_481_; lean_object* v_unused_482_; lean_object* v_unused_483_; 
v_unused_479_ = lean_ctor_get(v_impl_406_, 4);
lean_dec(v_unused_479_);
v_unused_480_ = lean_ctor_get(v_impl_406_, 3);
lean_dec(v_unused_480_);
v_unused_481_ = lean_ctor_get(v_impl_406_, 2);
lean_dec(v_unused_481_);
v_unused_482_ = lean_ctor_get(v_impl_406_, 1);
lean_dec(v_unused_482_);
v_unused_483_ = lean_ctor_get(v_impl_406_, 0);
lean_dec(v_unused_483_);
v___x_473_ = v_impl_406_;
v_isShared_474_ = v_isSharedCheck_478_;
goto v_resetjp_472_;
}
else
{
lean_dec(v_impl_406_);
v___x_473_ = lean_box(0);
v_isShared_474_ = v_isSharedCheck_478_;
goto v_resetjp_472_;
}
v_resetjp_472_:
{
lean_object* v___x_476_; 
if (v_isShared_474_ == 0)
{
lean_ctor_set(v___x_473_, 4, v_r_413_);
lean_ctor_set(v___x_473_, 3, v___x_471_);
lean_ctor_set(v___x_473_, 2, v_v_411_);
lean_ctor_set(v___x_473_, 1, v_k_410_);
lean_ctor_set(v___x_473_, 0, v___x_468_);
v___x_476_ = v___x_473_;
goto v_reusejp_475_;
}
else
{
lean_object* v_reuseFailAlloc_477_; 
v_reuseFailAlloc_477_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_477_, 0, v___x_468_);
lean_ctor_set(v_reuseFailAlloc_477_, 1, v_k_410_);
lean_ctor_set(v_reuseFailAlloc_477_, 2, v_v_411_);
lean_ctor_set(v_reuseFailAlloc_477_, 3, v___x_471_);
lean_ctor_set(v_reuseFailAlloc_477_, 4, v_r_413_);
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
}
}
}
else
{
lean_object* v_size_491_; lean_object* v___x_492_; lean_object* v___x_494_; 
v_size_491_ = lean_ctor_get(v_impl_406_, 0);
lean_inc(v_size_491_);
v___x_492_ = lean_nat_add(v___x_407_, v_size_491_);
lean_dec(v_size_491_);
if (v_isShared_404_ == 0)
{
lean_ctor_set(v___x_403_, 3, v_impl_406_);
lean_ctor_set(v___x_403_, 0, v___x_492_);
v___x_494_ = v___x_403_;
goto v_reusejp_493_;
}
else
{
lean_object* v_reuseFailAlloc_495_; 
v_reuseFailAlloc_495_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_495_, 0, v___x_492_);
lean_ctor_set(v_reuseFailAlloc_495_, 1, v_k_398_);
lean_ctor_set(v_reuseFailAlloc_495_, 2, v_v_399_);
lean_ctor_set(v_reuseFailAlloc_495_, 3, v_impl_406_);
lean_ctor_set(v_reuseFailAlloc_495_, 4, v_r_401_);
v___x_494_ = v_reuseFailAlloc_495_;
goto v_reusejp_493_;
}
v_reusejp_493_:
{
return v___x_494_;
}
}
}
else
{
if (lean_obj_tag(v_r_401_) == 0)
{
lean_object* v_l_496_; 
v_l_496_ = lean_ctor_get(v_r_401_, 3);
lean_inc(v_l_496_);
if (lean_obj_tag(v_l_496_) == 0)
{
lean_object* v_r_497_; 
v_r_497_ = lean_ctor_get(v_r_401_, 4);
lean_inc(v_r_497_);
if (lean_obj_tag(v_r_497_) == 0)
{
lean_object* v_size_498_; lean_object* v_k_499_; lean_object* v_v_500_; lean_object* v___x_502_; uint8_t v_isShared_503_; uint8_t v_isSharedCheck_513_; 
v_size_498_ = lean_ctor_get(v_r_401_, 0);
v_k_499_ = lean_ctor_get(v_r_401_, 1);
v_v_500_ = lean_ctor_get(v_r_401_, 2);
v_isSharedCheck_513_ = !lean_is_exclusive(v_r_401_);
if (v_isSharedCheck_513_ == 0)
{
lean_object* v_unused_514_; lean_object* v_unused_515_; 
v_unused_514_ = lean_ctor_get(v_r_401_, 4);
lean_dec(v_unused_514_);
v_unused_515_ = lean_ctor_get(v_r_401_, 3);
lean_dec(v_unused_515_);
v___x_502_ = v_r_401_;
v_isShared_503_ = v_isSharedCheck_513_;
goto v_resetjp_501_;
}
else
{
lean_inc(v_v_500_);
lean_inc(v_k_499_);
lean_inc(v_size_498_);
lean_dec(v_r_401_);
v___x_502_ = lean_box(0);
v_isShared_503_ = v_isSharedCheck_513_;
goto v_resetjp_501_;
}
v_resetjp_501_:
{
lean_object* v_size_504_; lean_object* v___x_505_; lean_object* v___x_506_; lean_object* v___x_508_; 
v_size_504_ = lean_ctor_get(v_l_496_, 0);
v___x_505_ = lean_nat_add(v___x_407_, v_size_498_);
lean_dec(v_size_498_);
v___x_506_ = lean_nat_add(v___x_407_, v_size_504_);
if (v_isShared_503_ == 0)
{
lean_ctor_set(v___x_502_, 4, v_l_496_);
lean_ctor_set(v___x_502_, 3, v_impl_406_);
lean_ctor_set(v___x_502_, 2, v_v_399_);
lean_ctor_set(v___x_502_, 1, v_k_398_);
lean_ctor_set(v___x_502_, 0, v___x_506_);
v___x_508_ = v___x_502_;
goto v_reusejp_507_;
}
else
{
lean_object* v_reuseFailAlloc_512_; 
v_reuseFailAlloc_512_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_512_, 0, v___x_506_);
lean_ctor_set(v_reuseFailAlloc_512_, 1, v_k_398_);
lean_ctor_set(v_reuseFailAlloc_512_, 2, v_v_399_);
lean_ctor_set(v_reuseFailAlloc_512_, 3, v_impl_406_);
lean_ctor_set(v_reuseFailAlloc_512_, 4, v_l_496_);
v___x_508_ = v_reuseFailAlloc_512_;
goto v_reusejp_507_;
}
v_reusejp_507_:
{
lean_object* v___x_510_; 
if (v_isShared_404_ == 0)
{
lean_ctor_set(v___x_403_, 4, v_r_497_);
lean_ctor_set(v___x_403_, 3, v___x_508_);
lean_ctor_set(v___x_403_, 2, v_v_500_);
lean_ctor_set(v___x_403_, 1, v_k_499_);
lean_ctor_set(v___x_403_, 0, v___x_505_);
v___x_510_ = v___x_403_;
goto v_reusejp_509_;
}
else
{
lean_object* v_reuseFailAlloc_511_; 
v_reuseFailAlloc_511_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_511_, 0, v___x_505_);
lean_ctor_set(v_reuseFailAlloc_511_, 1, v_k_499_);
lean_ctor_set(v_reuseFailAlloc_511_, 2, v_v_500_);
lean_ctor_set(v_reuseFailAlloc_511_, 3, v___x_508_);
lean_ctor_set(v_reuseFailAlloc_511_, 4, v_r_497_);
v___x_510_ = v_reuseFailAlloc_511_;
goto v_reusejp_509_;
}
v_reusejp_509_:
{
return v___x_510_;
}
}
}
}
else
{
lean_object* v_k_516_; lean_object* v_v_517_; lean_object* v___x_519_; uint8_t v_isShared_520_; uint8_t v_isSharedCheck_540_; 
v_k_516_ = lean_ctor_get(v_r_401_, 1);
v_v_517_ = lean_ctor_get(v_r_401_, 2);
v_isSharedCheck_540_ = !lean_is_exclusive(v_r_401_);
if (v_isSharedCheck_540_ == 0)
{
lean_object* v_unused_541_; lean_object* v_unused_542_; lean_object* v_unused_543_; 
v_unused_541_ = lean_ctor_get(v_r_401_, 4);
lean_dec(v_unused_541_);
v_unused_542_ = lean_ctor_get(v_r_401_, 3);
lean_dec(v_unused_542_);
v_unused_543_ = lean_ctor_get(v_r_401_, 0);
lean_dec(v_unused_543_);
v___x_519_ = v_r_401_;
v_isShared_520_ = v_isSharedCheck_540_;
goto v_resetjp_518_;
}
else
{
lean_inc(v_v_517_);
lean_inc(v_k_516_);
lean_dec(v_r_401_);
v___x_519_ = lean_box(0);
v_isShared_520_ = v_isSharedCheck_540_;
goto v_resetjp_518_;
}
v_resetjp_518_:
{
lean_object* v_k_521_; lean_object* v_v_522_; lean_object* v___x_524_; uint8_t v_isShared_525_; uint8_t v_isSharedCheck_536_; 
v_k_521_ = lean_ctor_get(v_l_496_, 1);
v_v_522_ = lean_ctor_get(v_l_496_, 2);
v_isSharedCheck_536_ = !lean_is_exclusive(v_l_496_);
if (v_isSharedCheck_536_ == 0)
{
lean_object* v_unused_537_; lean_object* v_unused_538_; lean_object* v_unused_539_; 
v_unused_537_ = lean_ctor_get(v_l_496_, 4);
lean_dec(v_unused_537_);
v_unused_538_ = lean_ctor_get(v_l_496_, 3);
lean_dec(v_unused_538_);
v_unused_539_ = lean_ctor_get(v_l_496_, 0);
lean_dec(v_unused_539_);
v___x_524_ = v_l_496_;
v_isShared_525_ = v_isSharedCheck_536_;
goto v_resetjp_523_;
}
else
{
lean_inc(v_v_522_);
lean_inc(v_k_521_);
lean_dec(v_l_496_);
v___x_524_ = lean_box(0);
v_isShared_525_ = v_isSharedCheck_536_;
goto v_resetjp_523_;
}
v_resetjp_523_:
{
lean_object* v___x_526_; lean_object* v___x_528_; 
v___x_526_ = lean_unsigned_to_nat(3u);
if (v_isShared_525_ == 0)
{
lean_ctor_set(v___x_524_, 4, v_r_497_);
lean_ctor_set(v___x_524_, 3, v_r_497_);
lean_ctor_set(v___x_524_, 2, v_v_399_);
lean_ctor_set(v___x_524_, 1, v_k_398_);
lean_ctor_set(v___x_524_, 0, v___x_407_);
v___x_528_ = v___x_524_;
goto v_reusejp_527_;
}
else
{
lean_object* v_reuseFailAlloc_535_; 
v_reuseFailAlloc_535_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_535_, 0, v___x_407_);
lean_ctor_set(v_reuseFailAlloc_535_, 1, v_k_398_);
lean_ctor_set(v_reuseFailAlloc_535_, 2, v_v_399_);
lean_ctor_set(v_reuseFailAlloc_535_, 3, v_r_497_);
lean_ctor_set(v_reuseFailAlloc_535_, 4, v_r_497_);
v___x_528_ = v_reuseFailAlloc_535_;
goto v_reusejp_527_;
}
v_reusejp_527_:
{
lean_object* v___x_530_; 
if (v_isShared_520_ == 0)
{
lean_ctor_set(v___x_519_, 3, v_r_497_);
lean_ctor_set(v___x_519_, 0, v___x_407_);
v___x_530_ = v___x_519_;
goto v_reusejp_529_;
}
else
{
lean_object* v_reuseFailAlloc_534_; 
v_reuseFailAlloc_534_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_534_, 0, v___x_407_);
lean_ctor_set(v_reuseFailAlloc_534_, 1, v_k_516_);
lean_ctor_set(v_reuseFailAlloc_534_, 2, v_v_517_);
lean_ctor_set(v_reuseFailAlloc_534_, 3, v_r_497_);
lean_ctor_set(v_reuseFailAlloc_534_, 4, v_r_497_);
v___x_530_ = v_reuseFailAlloc_534_;
goto v_reusejp_529_;
}
v_reusejp_529_:
{
lean_object* v___x_532_; 
if (v_isShared_404_ == 0)
{
lean_ctor_set(v___x_403_, 4, v___x_530_);
lean_ctor_set(v___x_403_, 3, v___x_528_);
lean_ctor_set(v___x_403_, 2, v_v_522_);
lean_ctor_set(v___x_403_, 1, v_k_521_);
lean_ctor_set(v___x_403_, 0, v___x_526_);
v___x_532_ = v___x_403_;
goto v_reusejp_531_;
}
else
{
lean_object* v_reuseFailAlloc_533_; 
v_reuseFailAlloc_533_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_533_, 0, v___x_526_);
lean_ctor_set(v_reuseFailAlloc_533_, 1, v_k_521_);
lean_ctor_set(v_reuseFailAlloc_533_, 2, v_v_522_);
lean_ctor_set(v_reuseFailAlloc_533_, 3, v___x_528_);
lean_ctor_set(v_reuseFailAlloc_533_, 4, v___x_530_);
v___x_532_ = v_reuseFailAlloc_533_;
goto v_reusejp_531_;
}
v_reusejp_531_:
{
return v___x_532_;
}
}
}
}
}
}
}
else
{
lean_object* v_r_544_; 
v_r_544_ = lean_ctor_get(v_r_401_, 4);
lean_inc(v_r_544_);
if (lean_obj_tag(v_r_544_) == 0)
{
lean_object* v_k_545_; lean_object* v_v_546_; lean_object* v___x_548_; uint8_t v_isShared_549_; uint8_t v_isSharedCheck_557_; 
v_k_545_ = lean_ctor_get(v_r_401_, 1);
v_v_546_ = lean_ctor_get(v_r_401_, 2);
v_isSharedCheck_557_ = !lean_is_exclusive(v_r_401_);
if (v_isSharedCheck_557_ == 0)
{
lean_object* v_unused_558_; lean_object* v_unused_559_; lean_object* v_unused_560_; 
v_unused_558_ = lean_ctor_get(v_r_401_, 4);
lean_dec(v_unused_558_);
v_unused_559_ = lean_ctor_get(v_r_401_, 3);
lean_dec(v_unused_559_);
v_unused_560_ = lean_ctor_get(v_r_401_, 0);
lean_dec(v_unused_560_);
v___x_548_ = v_r_401_;
v_isShared_549_ = v_isSharedCheck_557_;
goto v_resetjp_547_;
}
else
{
lean_inc(v_v_546_);
lean_inc(v_k_545_);
lean_dec(v_r_401_);
v___x_548_ = lean_box(0);
v_isShared_549_ = v_isSharedCheck_557_;
goto v_resetjp_547_;
}
v_resetjp_547_:
{
lean_object* v___x_550_; lean_object* v___x_552_; 
v___x_550_ = lean_unsigned_to_nat(3u);
if (v_isShared_549_ == 0)
{
lean_ctor_set(v___x_548_, 4, v_l_496_);
lean_ctor_set(v___x_548_, 2, v_v_399_);
lean_ctor_set(v___x_548_, 1, v_k_398_);
lean_ctor_set(v___x_548_, 0, v___x_407_);
v___x_552_ = v___x_548_;
goto v_reusejp_551_;
}
else
{
lean_object* v_reuseFailAlloc_556_; 
v_reuseFailAlloc_556_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_556_, 0, v___x_407_);
lean_ctor_set(v_reuseFailAlloc_556_, 1, v_k_398_);
lean_ctor_set(v_reuseFailAlloc_556_, 2, v_v_399_);
lean_ctor_set(v_reuseFailAlloc_556_, 3, v_l_496_);
lean_ctor_set(v_reuseFailAlloc_556_, 4, v_l_496_);
v___x_552_ = v_reuseFailAlloc_556_;
goto v_reusejp_551_;
}
v_reusejp_551_:
{
lean_object* v___x_554_; 
if (v_isShared_404_ == 0)
{
lean_ctor_set(v___x_403_, 4, v_r_544_);
lean_ctor_set(v___x_403_, 3, v___x_552_);
lean_ctor_set(v___x_403_, 2, v_v_546_);
lean_ctor_set(v___x_403_, 1, v_k_545_);
lean_ctor_set(v___x_403_, 0, v___x_550_);
v___x_554_ = v___x_403_;
goto v_reusejp_553_;
}
else
{
lean_object* v_reuseFailAlloc_555_; 
v_reuseFailAlloc_555_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_555_, 0, v___x_550_);
lean_ctor_set(v_reuseFailAlloc_555_, 1, v_k_545_);
lean_ctor_set(v_reuseFailAlloc_555_, 2, v_v_546_);
lean_ctor_set(v_reuseFailAlloc_555_, 3, v___x_552_);
lean_ctor_set(v_reuseFailAlloc_555_, 4, v_r_544_);
v___x_554_ = v_reuseFailAlloc_555_;
goto v_reusejp_553_;
}
v_reusejp_553_:
{
return v___x_554_;
}
}
}
}
else
{
lean_object* v_size_561_; lean_object* v_k_562_; lean_object* v_v_563_; lean_object* v___x_565_; uint8_t v_isShared_566_; uint8_t v_isSharedCheck_574_; 
v_size_561_ = lean_ctor_get(v_r_401_, 0);
v_k_562_ = lean_ctor_get(v_r_401_, 1);
v_v_563_ = lean_ctor_get(v_r_401_, 2);
v_isSharedCheck_574_ = !lean_is_exclusive(v_r_401_);
if (v_isSharedCheck_574_ == 0)
{
lean_object* v_unused_575_; lean_object* v_unused_576_; 
v_unused_575_ = lean_ctor_get(v_r_401_, 4);
lean_dec(v_unused_575_);
v_unused_576_ = lean_ctor_get(v_r_401_, 3);
lean_dec(v_unused_576_);
v___x_565_ = v_r_401_;
v_isShared_566_ = v_isSharedCheck_574_;
goto v_resetjp_564_;
}
else
{
lean_inc(v_v_563_);
lean_inc(v_k_562_);
lean_inc(v_size_561_);
lean_dec(v_r_401_);
v___x_565_ = lean_box(0);
v_isShared_566_ = v_isSharedCheck_574_;
goto v_resetjp_564_;
}
v_resetjp_564_:
{
lean_object* v___x_568_; 
if (v_isShared_566_ == 0)
{
lean_ctor_set(v___x_565_, 3, v_r_544_);
v___x_568_ = v___x_565_;
goto v_reusejp_567_;
}
else
{
lean_object* v_reuseFailAlloc_573_; 
v_reuseFailAlloc_573_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_573_, 0, v_size_561_);
lean_ctor_set(v_reuseFailAlloc_573_, 1, v_k_562_);
lean_ctor_set(v_reuseFailAlloc_573_, 2, v_v_563_);
lean_ctor_set(v_reuseFailAlloc_573_, 3, v_r_544_);
lean_ctor_set(v_reuseFailAlloc_573_, 4, v_r_544_);
v___x_568_ = v_reuseFailAlloc_573_;
goto v_reusejp_567_;
}
v_reusejp_567_:
{
lean_object* v___x_569_; lean_object* v___x_571_; 
v___x_569_ = lean_unsigned_to_nat(2u);
if (v_isShared_404_ == 0)
{
lean_ctor_set(v___x_403_, 4, v___x_568_);
lean_ctor_set(v___x_403_, 3, v_r_544_);
lean_ctor_set(v___x_403_, 0, v___x_569_);
v___x_571_ = v___x_403_;
goto v_reusejp_570_;
}
else
{
lean_object* v_reuseFailAlloc_572_; 
v_reuseFailAlloc_572_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_572_, 0, v___x_569_);
lean_ctor_set(v_reuseFailAlloc_572_, 1, v_k_398_);
lean_ctor_set(v_reuseFailAlloc_572_, 2, v_v_399_);
lean_ctor_set(v_reuseFailAlloc_572_, 3, v_r_544_);
lean_ctor_set(v_reuseFailAlloc_572_, 4, v___x_568_);
v___x_571_ = v_reuseFailAlloc_572_;
goto v_reusejp_570_;
}
v_reusejp_570_:
{
return v___x_571_;
}
}
}
}
}
}
else
{
lean_object* v___x_578_; 
if (v_isShared_404_ == 0)
{
lean_ctor_set(v___x_403_, 3, v_r_401_);
lean_ctor_set(v___x_403_, 0, v___x_407_);
v___x_578_ = v___x_403_;
goto v_reusejp_577_;
}
else
{
lean_object* v_reuseFailAlloc_579_; 
v_reuseFailAlloc_579_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_579_, 0, v___x_407_);
lean_ctor_set(v_reuseFailAlloc_579_, 1, v_k_398_);
lean_ctor_set(v_reuseFailAlloc_579_, 2, v_v_399_);
lean_ctor_set(v_reuseFailAlloc_579_, 3, v_r_401_);
lean_ctor_set(v_reuseFailAlloc_579_, 4, v_r_401_);
v___x_578_ = v_reuseFailAlloc_579_;
goto v_reusejp_577_;
}
v_reusejp_577_:
{
return v___x_578_;
}
}
}
}
case 1:
{
lean_del_object(v___x_403_);
lean_dec(v_v_399_);
lean_dec(v_k_398_);
if (lean_obj_tag(v_l_400_) == 0)
{
if (lean_obj_tag(v_r_401_) == 0)
{
lean_object* v_size_580_; lean_object* v_k_581_; lean_object* v_v_582_; lean_object* v_l_583_; lean_object* v_r_584_; lean_object* v_size_585_; lean_object* v_k_586_; lean_object* v_v_587_; lean_object* v_l_588_; lean_object* v_r_589_; lean_object* v___x_590_; uint8_t v___x_591_; 
v_size_580_ = lean_ctor_get(v_l_400_, 0);
v_k_581_ = lean_ctor_get(v_l_400_, 1);
v_v_582_ = lean_ctor_get(v_l_400_, 2);
v_l_583_ = lean_ctor_get(v_l_400_, 3);
v_r_584_ = lean_ctor_get(v_l_400_, 4);
lean_inc(v_r_584_);
v_size_585_ = lean_ctor_get(v_r_401_, 0);
v_k_586_ = lean_ctor_get(v_r_401_, 1);
v_v_587_ = lean_ctor_get(v_r_401_, 2);
v_l_588_ = lean_ctor_get(v_r_401_, 3);
lean_inc(v_l_588_);
v_r_589_ = lean_ctor_get(v_r_401_, 4);
v___x_590_ = lean_unsigned_to_nat(1u);
v___x_591_ = lean_nat_dec_lt(v_size_580_, v_size_585_);
if (v___x_591_ == 0)
{
lean_object* v___x_593_; uint8_t v_isShared_594_; uint8_t v_isSharedCheck_727_; 
lean_inc(v_l_583_);
lean_inc(v_v_582_);
lean_inc(v_k_581_);
v_isSharedCheck_727_ = !lean_is_exclusive(v_l_400_);
if (v_isSharedCheck_727_ == 0)
{
lean_object* v_unused_728_; lean_object* v_unused_729_; lean_object* v_unused_730_; lean_object* v_unused_731_; lean_object* v_unused_732_; 
v_unused_728_ = lean_ctor_get(v_l_400_, 4);
lean_dec(v_unused_728_);
v_unused_729_ = lean_ctor_get(v_l_400_, 3);
lean_dec(v_unused_729_);
v_unused_730_ = lean_ctor_get(v_l_400_, 2);
lean_dec(v_unused_730_);
v_unused_731_ = lean_ctor_get(v_l_400_, 1);
lean_dec(v_unused_731_);
v_unused_732_ = lean_ctor_get(v_l_400_, 0);
lean_dec(v_unused_732_);
v___x_593_ = v_l_400_;
v_isShared_594_ = v_isSharedCheck_727_;
goto v_resetjp_592_;
}
else
{
lean_dec(v_l_400_);
v___x_593_ = lean_box(0);
v_isShared_594_ = v_isSharedCheck_727_;
goto v_resetjp_592_;
}
v_resetjp_592_:
{
lean_object* v___x_595_; lean_object* v_tree_596_; 
v___x_595_ = l_Std_DTreeMap_Internal_Impl_maxView___redArg(v_k_581_, v_v_582_, v_l_583_, v_r_584_);
v_tree_596_ = lean_ctor_get(v___x_595_, 2);
lean_inc(v_tree_596_);
if (lean_obj_tag(v_tree_596_) == 0)
{
lean_object* v_k_597_; lean_object* v_v_598_; lean_object* v_size_599_; lean_object* v___x_600_; lean_object* v___x_601_; uint8_t v___x_602_; 
v_k_597_ = lean_ctor_get(v___x_595_, 0);
lean_inc(v_k_597_);
v_v_598_ = lean_ctor_get(v___x_595_, 1);
lean_inc(v_v_598_);
lean_dec_ref(v___x_595_);
v_size_599_ = lean_ctor_get(v_tree_596_, 0);
v___x_600_ = lean_unsigned_to_nat(3u);
v___x_601_ = lean_nat_mul(v___x_600_, v_size_599_);
v___x_602_ = lean_nat_dec_lt(v___x_601_, v_size_585_);
lean_dec(v___x_601_);
if (v___x_602_ == 0)
{
lean_object* v___x_603_; lean_object* v___x_604_; lean_object* v___x_606_; 
lean_dec(v_l_588_);
v___x_603_ = lean_nat_add(v___x_590_, v_size_599_);
v___x_604_ = lean_nat_add(v___x_603_, v_size_585_);
lean_dec(v___x_603_);
if (v_isShared_594_ == 0)
{
lean_ctor_set(v___x_593_, 4, v_r_401_);
lean_ctor_set(v___x_593_, 3, v_tree_596_);
lean_ctor_set(v___x_593_, 2, v_v_598_);
lean_ctor_set(v___x_593_, 1, v_k_597_);
lean_ctor_set(v___x_593_, 0, v___x_604_);
v___x_606_ = v___x_593_;
goto v_reusejp_605_;
}
else
{
lean_object* v_reuseFailAlloc_607_; 
v_reuseFailAlloc_607_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_607_, 0, v___x_604_);
lean_ctor_set(v_reuseFailAlloc_607_, 1, v_k_597_);
lean_ctor_set(v_reuseFailAlloc_607_, 2, v_v_598_);
lean_ctor_set(v_reuseFailAlloc_607_, 3, v_tree_596_);
lean_ctor_set(v_reuseFailAlloc_607_, 4, v_r_401_);
v___x_606_ = v_reuseFailAlloc_607_;
goto v_reusejp_605_;
}
v_reusejp_605_:
{
return v___x_606_;
}
}
else
{
lean_object* v___x_609_; uint8_t v_isShared_610_; uint8_t v_isSharedCheck_662_; 
lean_inc(v_r_589_);
lean_inc(v_v_587_);
lean_inc(v_k_586_);
lean_inc(v_size_585_);
v_isSharedCheck_662_ = !lean_is_exclusive(v_r_401_);
if (v_isSharedCheck_662_ == 0)
{
lean_object* v_unused_663_; lean_object* v_unused_664_; lean_object* v_unused_665_; lean_object* v_unused_666_; lean_object* v_unused_667_; 
v_unused_663_ = lean_ctor_get(v_r_401_, 4);
lean_dec(v_unused_663_);
v_unused_664_ = lean_ctor_get(v_r_401_, 3);
lean_dec(v_unused_664_);
v_unused_665_ = lean_ctor_get(v_r_401_, 2);
lean_dec(v_unused_665_);
v_unused_666_ = lean_ctor_get(v_r_401_, 1);
lean_dec(v_unused_666_);
v_unused_667_ = lean_ctor_get(v_r_401_, 0);
lean_dec(v_unused_667_);
v___x_609_ = v_r_401_;
v_isShared_610_ = v_isSharedCheck_662_;
goto v_resetjp_608_;
}
else
{
lean_dec(v_r_401_);
v___x_609_ = lean_box(0);
v_isShared_610_ = v_isSharedCheck_662_;
goto v_resetjp_608_;
}
v_resetjp_608_:
{
lean_object* v_size_611_; lean_object* v_k_612_; lean_object* v_v_613_; lean_object* v_l_614_; lean_object* v_r_615_; lean_object* v_size_616_; lean_object* v___x_617_; lean_object* v___x_618_; uint8_t v___x_619_; 
v_size_611_ = lean_ctor_get(v_l_588_, 0);
v_k_612_ = lean_ctor_get(v_l_588_, 1);
v_v_613_ = lean_ctor_get(v_l_588_, 2);
v_l_614_ = lean_ctor_get(v_l_588_, 3);
v_r_615_ = lean_ctor_get(v_l_588_, 4);
v_size_616_ = lean_ctor_get(v_r_589_, 0);
v___x_617_ = lean_unsigned_to_nat(2u);
v___x_618_ = lean_nat_mul(v___x_617_, v_size_616_);
v___x_619_ = lean_nat_dec_lt(v_size_611_, v___x_618_);
lean_dec(v___x_618_);
if (v___x_619_ == 0)
{
lean_object* v___x_621_; uint8_t v_isShared_622_; uint8_t v_isSharedCheck_647_; 
lean_inc(v_r_615_);
lean_inc(v_l_614_);
lean_inc(v_v_613_);
lean_inc(v_k_612_);
v_isSharedCheck_647_ = !lean_is_exclusive(v_l_588_);
if (v_isSharedCheck_647_ == 0)
{
lean_object* v_unused_648_; lean_object* v_unused_649_; lean_object* v_unused_650_; lean_object* v_unused_651_; lean_object* v_unused_652_; 
v_unused_648_ = lean_ctor_get(v_l_588_, 4);
lean_dec(v_unused_648_);
v_unused_649_ = lean_ctor_get(v_l_588_, 3);
lean_dec(v_unused_649_);
v_unused_650_ = lean_ctor_get(v_l_588_, 2);
lean_dec(v_unused_650_);
v_unused_651_ = lean_ctor_get(v_l_588_, 1);
lean_dec(v_unused_651_);
v_unused_652_ = lean_ctor_get(v_l_588_, 0);
lean_dec(v_unused_652_);
v___x_621_ = v_l_588_;
v_isShared_622_ = v_isSharedCheck_647_;
goto v_resetjp_620_;
}
else
{
lean_dec(v_l_588_);
v___x_621_ = lean_box(0);
v_isShared_622_ = v_isSharedCheck_647_;
goto v_resetjp_620_;
}
v_resetjp_620_:
{
lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v___y_626_; lean_object* v___y_627_; lean_object* v___y_628_; lean_object* v___y_637_; 
v___x_623_ = lean_nat_add(v___x_590_, v_size_599_);
v___x_624_ = lean_nat_add(v___x_623_, v_size_585_);
lean_dec(v_size_585_);
if (lean_obj_tag(v_l_614_) == 0)
{
lean_object* v_size_645_; 
v_size_645_ = lean_ctor_get(v_l_614_, 0);
lean_inc(v_size_645_);
v___y_637_ = v_size_645_;
goto v___jp_636_;
}
else
{
lean_object* v___x_646_; 
v___x_646_ = lean_unsigned_to_nat(0u);
v___y_637_ = v___x_646_;
goto v___jp_636_;
}
v___jp_625_:
{
lean_object* v___x_629_; lean_object* v___x_631_; 
v___x_629_ = lean_nat_add(v___y_627_, v___y_628_);
lean_dec(v___y_628_);
lean_dec(v___y_627_);
if (v_isShared_622_ == 0)
{
lean_ctor_set(v___x_621_, 4, v_r_589_);
lean_ctor_set(v___x_621_, 3, v_r_615_);
lean_ctor_set(v___x_621_, 2, v_v_587_);
lean_ctor_set(v___x_621_, 1, v_k_586_);
lean_ctor_set(v___x_621_, 0, v___x_629_);
v___x_631_ = v___x_621_;
goto v_reusejp_630_;
}
else
{
lean_object* v_reuseFailAlloc_635_; 
v_reuseFailAlloc_635_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_635_, 0, v___x_629_);
lean_ctor_set(v_reuseFailAlloc_635_, 1, v_k_586_);
lean_ctor_set(v_reuseFailAlloc_635_, 2, v_v_587_);
lean_ctor_set(v_reuseFailAlloc_635_, 3, v_r_615_);
lean_ctor_set(v_reuseFailAlloc_635_, 4, v_r_589_);
v___x_631_ = v_reuseFailAlloc_635_;
goto v_reusejp_630_;
}
v_reusejp_630_:
{
lean_object* v___x_633_; 
if (v_isShared_610_ == 0)
{
lean_ctor_set(v___x_609_, 4, v___x_631_);
lean_ctor_set(v___x_609_, 3, v___y_626_);
lean_ctor_set(v___x_609_, 2, v_v_613_);
lean_ctor_set(v___x_609_, 1, v_k_612_);
lean_ctor_set(v___x_609_, 0, v___x_624_);
v___x_633_ = v___x_609_;
goto v_reusejp_632_;
}
else
{
lean_object* v_reuseFailAlloc_634_; 
v_reuseFailAlloc_634_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_634_, 0, v___x_624_);
lean_ctor_set(v_reuseFailAlloc_634_, 1, v_k_612_);
lean_ctor_set(v_reuseFailAlloc_634_, 2, v_v_613_);
lean_ctor_set(v_reuseFailAlloc_634_, 3, v___y_626_);
lean_ctor_set(v_reuseFailAlloc_634_, 4, v___x_631_);
v___x_633_ = v_reuseFailAlloc_634_;
goto v_reusejp_632_;
}
v_reusejp_632_:
{
return v___x_633_;
}
}
}
v___jp_636_:
{
lean_object* v___x_638_; lean_object* v___x_640_; 
v___x_638_ = lean_nat_add(v___x_623_, v___y_637_);
lean_dec(v___y_637_);
lean_dec(v___x_623_);
if (v_isShared_594_ == 0)
{
lean_ctor_set(v___x_593_, 4, v_l_614_);
lean_ctor_set(v___x_593_, 3, v_tree_596_);
lean_ctor_set(v___x_593_, 2, v_v_598_);
lean_ctor_set(v___x_593_, 1, v_k_597_);
lean_ctor_set(v___x_593_, 0, v___x_638_);
v___x_640_ = v___x_593_;
goto v_reusejp_639_;
}
else
{
lean_object* v_reuseFailAlloc_644_; 
v_reuseFailAlloc_644_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_644_, 0, v___x_638_);
lean_ctor_set(v_reuseFailAlloc_644_, 1, v_k_597_);
lean_ctor_set(v_reuseFailAlloc_644_, 2, v_v_598_);
lean_ctor_set(v_reuseFailAlloc_644_, 3, v_tree_596_);
lean_ctor_set(v_reuseFailAlloc_644_, 4, v_l_614_);
v___x_640_ = v_reuseFailAlloc_644_;
goto v_reusejp_639_;
}
v_reusejp_639_:
{
lean_object* v___x_641_; 
v___x_641_ = lean_nat_add(v___x_590_, v_size_616_);
if (lean_obj_tag(v_r_615_) == 0)
{
lean_object* v_size_642_; 
v_size_642_ = lean_ctor_get(v_r_615_, 0);
lean_inc(v_size_642_);
v___y_626_ = v___x_640_;
v___y_627_ = v___x_641_;
v___y_628_ = v_size_642_;
goto v___jp_625_;
}
else
{
lean_object* v___x_643_; 
v___x_643_ = lean_unsigned_to_nat(0u);
v___y_626_ = v___x_640_;
v___y_627_ = v___x_641_;
v___y_628_ = v___x_643_;
goto v___jp_625_;
}
}
}
}
}
else
{
lean_object* v___x_653_; lean_object* v___x_654_; lean_object* v___x_655_; lean_object* v___x_657_; 
v___x_653_ = lean_nat_add(v___x_590_, v_size_599_);
v___x_654_ = lean_nat_add(v___x_653_, v_size_585_);
lean_dec(v_size_585_);
v___x_655_ = lean_nat_add(v___x_653_, v_size_611_);
lean_dec(v___x_653_);
if (v_isShared_610_ == 0)
{
lean_ctor_set(v___x_609_, 4, v_l_588_);
lean_ctor_set(v___x_609_, 3, v_tree_596_);
lean_ctor_set(v___x_609_, 2, v_v_598_);
lean_ctor_set(v___x_609_, 1, v_k_597_);
lean_ctor_set(v___x_609_, 0, v___x_655_);
v___x_657_ = v___x_609_;
goto v_reusejp_656_;
}
else
{
lean_object* v_reuseFailAlloc_661_; 
v_reuseFailAlloc_661_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_661_, 0, v___x_655_);
lean_ctor_set(v_reuseFailAlloc_661_, 1, v_k_597_);
lean_ctor_set(v_reuseFailAlloc_661_, 2, v_v_598_);
lean_ctor_set(v_reuseFailAlloc_661_, 3, v_tree_596_);
lean_ctor_set(v_reuseFailAlloc_661_, 4, v_l_588_);
v___x_657_ = v_reuseFailAlloc_661_;
goto v_reusejp_656_;
}
v_reusejp_656_:
{
lean_object* v___x_659_; 
if (v_isShared_594_ == 0)
{
lean_ctor_set(v___x_593_, 4, v_r_589_);
lean_ctor_set(v___x_593_, 3, v___x_657_);
lean_ctor_set(v___x_593_, 2, v_v_587_);
lean_ctor_set(v___x_593_, 1, v_k_586_);
lean_ctor_set(v___x_593_, 0, v___x_654_);
v___x_659_ = v___x_593_;
goto v_reusejp_658_;
}
else
{
lean_object* v_reuseFailAlloc_660_; 
v_reuseFailAlloc_660_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_660_, 0, v___x_654_);
lean_ctor_set(v_reuseFailAlloc_660_, 1, v_k_586_);
lean_ctor_set(v_reuseFailAlloc_660_, 2, v_v_587_);
lean_ctor_set(v_reuseFailAlloc_660_, 3, v___x_657_);
lean_ctor_set(v_reuseFailAlloc_660_, 4, v_r_589_);
v___x_659_ = v_reuseFailAlloc_660_;
goto v_reusejp_658_;
}
v_reusejp_658_:
{
return v___x_659_;
}
}
}
}
}
}
else
{
lean_object* v___x_669_; uint8_t v_isShared_670_; uint8_t v_isSharedCheck_721_; 
lean_inc(v_r_589_);
lean_inc(v_v_587_);
lean_inc(v_k_586_);
lean_inc(v_size_585_);
v_isSharedCheck_721_ = !lean_is_exclusive(v_r_401_);
if (v_isSharedCheck_721_ == 0)
{
lean_object* v_unused_722_; lean_object* v_unused_723_; lean_object* v_unused_724_; lean_object* v_unused_725_; lean_object* v_unused_726_; 
v_unused_722_ = lean_ctor_get(v_r_401_, 4);
lean_dec(v_unused_722_);
v_unused_723_ = lean_ctor_get(v_r_401_, 3);
lean_dec(v_unused_723_);
v_unused_724_ = lean_ctor_get(v_r_401_, 2);
lean_dec(v_unused_724_);
v_unused_725_ = lean_ctor_get(v_r_401_, 1);
lean_dec(v_unused_725_);
v_unused_726_ = lean_ctor_get(v_r_401_, 0);
lean_dec(v_unused_726_);
v___x_669_ = v_r_401_;
v_isShared_670_ = v_isSharedCheck_721_;
goto v_resetjp_668_;
}
else
{
lean_dec(v_r_401_);
v___x_669_ = lean_box(0);
v_isShared_670_ = v_isSharedCheck_721_;
goto v_resetjp_668_;
}
v_resetjp_668_:
{
if (lean_obj_tag(v_l_588_) == 0)
{
if (lean_obj_tag(v_r_589_) == 0)
{
lean_object* v_k_671_; lean_object* v_v_672_; lean_object* v_size_673_; lean_object* v___x_674_; lean_object* v___x_675_; lean_object* v___x_677_; 
v_k_671_ = lean_ctor_get(v___x_595_, 0);
lean_inc(v_k_671_);
v_v_672_ = lean_ctor_get(v___x_595_, 1);
lean_inc(v_v_672_);
lean_dec_ref(v___x_595_);
v_size_673_ = lean_ctor_get(v_l_588_, 0);
v___x_674_ = lean_nat_add(v___x_590_, v_size_585_);
lean_dec(v_size_585_);
v___x_675_ = lean_nat_add(v___x_590_, v_size_673_);
if (v_isShared_670_ == 0)
{
lean_ctor_set(v___x_669_, 4, v_l_588_);
lean_ctor_set(v___x_669_, 3, v_tree_596_);
lean_ctor_set(v___x_669_, 2, v_v_672_);
lean_ctor_set(v___x_669_, 1, v_k_671_);
lean_ctor_set(v___x_669_, 0, v___x_675_);
v___x_677_ = v___x_669_;
goto v_reusejp_676_;
}
else
{
lean_object* v_reuseFailAlloc_681_; 
v_reuseFailAlloc_681_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_681_, 0, v___x_675_);
lean_ctor_set(v_reuseFailAlloc_681_, 1, v_k_671_);
lean_ctor_set(v_reuseFailAlloc_681_, 2, v_v_672_);
lean_ctor_set(v_reuseFailAlloc_681_, 3, v_tree_596_);
lean_ctor_set(v_reuseFailAlloc_681_, 4, v_l_588_);
v___x_677_ = v_reuseFailAlloc_681_;
goto v_reusejp_676_;
}
v_reusejp_676_:
{
lean_object* v___x_679_; 
if (v_isShared_594_ == 0)
{
lean_ctor_set(v___x_593_, 4, v_r_589_);
lean_ctor_set(v___x_593_, 3, v___x_677_);
lean_ctor_set(v___x_593_, 2, v_v_587_);
lean_ctor_set(v___x_593_, 1, v_k_586_);
lean_ctor_set(v___x_593_, 0, v___x_674_);
v___x_679_ = v___x_593_;
goto v_reusejp_678_;
}
else
{
lean_object* v_reuseFailAlloc_680_; 
v_reuseFailAlloc_680_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_680_, 0, v___x_674_);
lean_ctor_set(v_reuseFailAlloc_680_, 1, v_k_586_);
lean_ctor_set(v_reuseFailAlloc_680_, 2, v_v_587_);
lean_ctor_set(v_reuseFailAlloc_680_, 3, v___x_677_);
lean_ctor_set(v_reuseFailAlloc_680_, 4, v_r_589_);
v___x_679_ = v_reuseFailAlloc_680_;
goto v_reusejp_678_;
}
v_reusejp_678_:
{
return v___x_679_;
}
}
}
else
{
lean_object* v_k_682_; lean_object* v_v_683_; lean_object* v_k_684_; lean_object* v_v_685_; lean_object* v___x_687_; uint8_t v_isShared_688_; uint8_t v_isSharedCheck_699_; 
lean_dec(v_size_585_);
v_k_682_ = lean_ctor_get(v___x_595_, 0);
lean_inc(v_k_682_);
v_v_683_ = lean_ctor_get(v___x_595_, 1);
lean_inc(v_v_683_);
lean_dec_ref(v___x_595_);
v_k_684_ = lean_ctor_get(v_l_588_, 1);
v_v_685_ = lean_ctor_get(v_l_588_, 2);
v_isSharedCheck_699_ = !lean_is_exclusive(v_l_588_);
if (v_isSharedCheck_699_ == 0)
{
lean_object* v_unused_700_; lean_object* v_unused_701_; lean_object* v_unused_702_; 
v_unused_700_ = lean_ctor_get(v_l_588_, 4);
lean_dec(v_unused_700_);
v_unused_701_ = lean_ctor_get(v_l_588_, 3);
lean_dec(v_unused_701_);
v_unused_702_ = lean_ctor_get(v_l_588_, 0);
lean_dec(v_unused_702_);
v___x_687_ = v_l_588_;
v_isShared_688_ = v_isSharedCheck_699_;
goto v_resetjp_686_;
}
else
{
lean_inc(v_v_685_);
lean_inc(v_k_684_);
lean_dec(v_l_588_);
v___x_687_ = lean_box(0);
v_isShared_688_ = v_isSharedCheck_699_;
goto v_resetjp_686_;
}
v_resetjp_686_:
{
lean_object* v___x_689_; lean_object* v___x_691_; 
v___x_689_ = lean_unsigned_to_nat(3u);
if (v_isShared_688_ == 0)
{
lean_ctor_set(v___x_687_, 4, v_r_589_);
lean_ctor_set(v___x_687_, 3, v_r_589_);
lean_ctor_set(v___x_687_, 2, v_v_683_);
lean_ctor_set(v___x_687_, 1, v_k_682_);
lean_ctor_set(v___x_687_, 0, v___x_590_);
v___x_691_ = v___x_687_;
goto v_reusejp_690_;
}
else
{
lean_object* v_reuseFailAlloc_698_; 
v_reuseFailAlloc_698_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_698_, 0, v___x_590_);
lean_ctor_set(v_reuseFailAlloc_698_, 1, v_k_682_);
lean_ctor_set(v_reuseFailAlloc_698_, 2, v_v_683_);
lean_ctor_set(v_reuseFailAlloc_698_, 3, v_r_589_);
lean_ctor_set(v_reuseFailAlloc_698_, 4, v_r_589_);
v___x_691_ = v_reuseFailAlloc_698_;
goto v_reusejp_690_;
}
v_reusejp_690_:
{
lean_object* v___x_693_; 
if (v_isShared_670_ == 0)
{
lean_ctor_set(v___x_669_, 3, v_r_589_);
lean_ctor_set(v___x_669_, 0, v___x_590_);
v___x_693_ = v___x_669_;
goto v_reusejp_692_;
}
else
{
lean_object* v_reuseFailAlloc_697_; 
v_reuseFailAlloc_697_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_697_, 0, v___x_590_);
lean_ctor_set(v_reuseFailAlloc_697_, 1, v_k_586_);
lean_ctor_set(v_reuseFailAlloc_697_, 2, v_v_587_);
lean_ctor_set(v_reuseFailAlloc_697_, 3, v_r_589_);
lean_ctor_set(v_reuseFailAlloc_697_, 4, v_r_589_);
v___x_693_ = v_reuseFailAlloc_697_;
goto v_reusejp_692_;
}
v_reusejp_692_:
{
lean_object* v___x_695_; 
if (v_isShared_594_ == 0)
{
lean_ctor_set(v___x_593_, 4, v___x_693_);
lean_ctor_set(v___x_593_, 3, v___x_691_);
lean_ctor_set(v___x_593_, 2, v_v_685_);
lean_ctor_set(v___x_593_, 1, v_k_684_);
lean_ctor_set(v___x_593_, 0, v___x_689_);
v___x_695_ = v___x_593_;
goto v_reusejp_694_;
}
else
{
lean_object* v_reuseFailAlloc_696_; 
v_reuseFailAlloc_696_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_696_, 0, v___x_689_);
lean_ctor_set(v_reuseFailAlloc_696_, 1, v_k_684_);
lean_ctor_set(v_reuseFailAlloc_696_, 2, v_v_685_);
lean_ctor_set(v_reuseFailAlloc_696_, 3, v___x_691_);
lean_ctor_set(v_reuseFailAlloc_696_, 4, v___x_693_);
v___x_695_ = v_reuseFailAlloc_696_;
goto v_reusejp_694_;
}
v_reusejp_694_:
{
return v___x_695_;
}
}
}
}
}
}
else
{
if (lean_obj_tag(v_r_589_) == 0)
{
lean_object* v_k_703_; lean_object* v_v_704_; lean_object* v___x_705_; lean_object* v___x_707_; 
lean_dec(v_size_585_);
v_k_703_ = lean_ctor_get(v___x_595_, 0);
lean_inc(v_k_703_);
v_v_704_ = lean_ctor_get(v___x_595_, 1);
lean_inc(v_v_704_);
lean_dec_ref(v___x_595_);
v___x_705_ = lean_unsigned_to_nat(3u);
if (v_isShared_670_ == 0)
{
lean_ctor_set(v___x_669_, 4, v_l_588_);
lean_ctor_set(v___x_669_, 2, v_v_704_);
lean_ctor_set(v___x_669_, 1, v_k_703_);
lean_ctor_set(v___x_669_, 0, v___x_590_);
v___x_707_ = v___x_669_;
goto v_reusejp_706_;
}
else
{
lean_object* v_reuseFailAlloc_711_; 
v_reuseFailAlloc_711_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_711_, 0, v___x_590_);
lean_ctor_set(v_reuseFailAlloc_711_, 1, v_k_703_);
lean_ctor_set(v_reuseFailAlloc_711_, 2, v_v_704_);
lean_ctor_set(v_reuseFailAlloc_711_, 3, v_l_588_);
lean_ctor_set(v_reuseFailAlloc_711_, 4, v_l_588_);
v___x_707_ = v_reuseFailAlloc_711_;
goto v_reusejp_706_;
}
v_reusejp_706_:
{
lean_object* v___x_709_; 
if (v_isShared_594_ == 0)
{
lean_ctor_set(v___x_593_, 4, v_r_589_);
lean_ctor_set(v___x_593_, 3, v___x_707_);
lean_ctor_set(v___x_593_, 2, v_v_587_);
lean_ctor_set(v___x_593_, 1, v_k_586_);
lean_ctor_set(v___x_593_, 0, v___x_705_);
v___x_709_ = v___x_593_;
goto v_reusejp_708_;
}
else
{
lean_object* v_reuseFailAlloc_710_; 
v_reuseFailAlloc_710_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_710_, 0, v___x_705_);
lean_ctor_set(v_reuseFailAlloc_710_, 1, v_k_586_);
lean_ctor_set(v_reuseFailAlloc_710_, 2, v_v_587_);
lean_ctor_set(v_reuseFailAlloc_710_, 3, v___x_707_);
lean_ctor_set(v_reuseFailAlloc_710_, 4, v_r_589_);
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
lean_object* v_k_712_; lean_object* v_v_713_; lean_object* v___x_715_; 
v_k_712_ = lean_ctor_get(v___x_595_, 0);
lean_inc(v_k_712_);
v_v_713_ = lean_ctor_get(v___x_595_, 1);
lean_inc(v_v_713_);
lean_dec_ref(v___x_595_);
if (v_isShared_670_ == 0)
{
lean_ctor_set(v___x_669_, 3, v_r_589_);
v___x_715_ = v___x_669_;
goto v_reusejp_714_;
}
else
{
lean_object* v_reuseFailAlloc_720_; 
v_reuseFailAlloc_720_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_720_, 0, v_size_585_);
lean_ctor_set(v_reuseFailAlloc_720_, 1, v_k_586_);
lean_ctor_set(v_reuseFailAlloc_720_, 2, v_v_587_);
lean_ctor_set(v_reuseFailAlloc_720_, 3, v_r_589_);
lean_ctor_set(v_reuseFailAlloc_720_, 4, v_r_589_);
v___x_715_ = v_reuseFailAlloc_720_;
goto v_reusejp_714_;
}
v_reusejp_714_:
{
lean_object* v___x_716_; lean_object* v___x_718_; 
v___x_716_ = lean_unsigned_to_nat(2u);
if (v_isShared_594_ == 0)
{
lean_ctor_set(v___x_593_, 4, v___x_715_);
lean_ctor_set(v___x_593_, 3, v_r_589_);
lean_ctor_set(v___x_593_, 2, v_v_713_);
lean_ctor_set(v___x_593_, 1, v_k_712_);
lean_ctor_set(v___x_593_, 0, v___x_716_);
v___x_718_ = v___x_593_;
goto v_reusejp_717_;
}
else
{
lean_object* v_reuseFailAlloc_719_; 
v_reuseFailAlloc_719_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_719_, 0, v___x_716_);
lean_ctor_set(v_reuseFailAlloc_719_, 1, v_k_712_);
lean_ctor_set(v_reuseFailAlloc_719_, 2, v_v_713_);
lean_ctor_set(v_reuseFailAlloc_719_, 3, v_r_589_);
lean_ctor_set(v_reuseFailAlloc_719_, 4, v___x_715_);
v___x_718_ = v_reuseFailAlloc_719_;
goto v_reusejp_717_;
}
v_reusejp_717_:
{
return v___x_718_;
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
lean_object* v___x_734_; uint8_t v_isShared_735_; uint8_t v_isSharedCheck_885_; 
lean_inc(v_r_589_);
lean_inc(v_v_587_);
lean_inc(v_k_586_);
v_isSharedCheck_885_ = !lean_is_exclusive(v_r_401_);
if (v_isSharedCheck_885_ == 0)
{
lean_object* v_unused_886_; lean_object* v_unused_887_; lean_object* v_unused_888_; lean_object* v_unused_889_; lean_object* v_unused_890_; 
v_unused_886_ = lean_ctor_get(v_r_401_, 4);
lean_dec(v_unused_886_);
v_unused_887_ = lean_ctor_get(v_r_401_, 3);
lean_dec(v_unused_887_);
v_unused_888_ = lean_ctor_get(v_r_401_, 2);
lean_dec(v_unused_888_);
v_unused_889_ = lean_ctor_get(v_r_401_, 1);
lean_dec(v_unused_889_);
v_unused_890_ = lean_ctor_get(v_r_401_, 0);
lean_dec(v_unused_890_);
v___x_734_ = v_r_401_;
v_isShared_735_ = v_isSharedCheck_885_;
goto v_resetjp_733_;
}
else
{
lean_dec(v_r_401_);
v___x_734_ = lean_box(0);
v_isShared_735_ = v_isSharedCheck_885_;
goto v_resetjp_733_;
}
v_resetjp_733_:
{
lean_object* v___x_736_; lean_object* v_tree_737_; 
v___x_736_ = l_Std_DTreeMap_Internal_Impl_minView___redArg(v_k_586_, v_v_587_, v_l_588_, v_r_589_);
v_tree_737_ = lean_ctor_get(v___x_736_, 2);
lean_inc(v_tree_737_);
if (lean_obj_tag(v_tree_737_) == 0)
{
lean_object* v_k_738_; lean_object* v_v_739_; lean_object* v_size_740_; lean_object* v___x_741_; lean_object* v___x_742_; uint8_t v___x_743_; 
v_k_738_ = lean_ctor_get(v___x_736_, 0);
lean_inc(v_k_738_);
v_v_739_ = lean_ctor_get(v___x_736_, 1);
lean_inc(v_v_739_);
lean_dec_ref(v___x_736_);
v_size_740_ = lean_ctor_get(v_tree_737_, 0);
v___x_741_ = lean_unsigned_to_nat(3u);
v___x_742_ = lean_nat_mul(v___x_741_, v_size_740_);
v___x_743_ = lean_nat_dec_lt(v___x_742_, v_size_580_);
lean_dec(v___x_742_);
if (v___x_743_ == 0)
{
lean_object* v___x_744_; lean_object* v___x_745_; lean_object* v___x_747_; 
lean_dec(v_r_584_);
v___x_744_ = lean_nat_add(v___x_590_, v_size_580_);
v___x_745_ = lean_nat_add(v___x_744_, v_size_740_);
lean_dec(v___x_744_);
if (v_isShared_735_ == 0)
{
lean_ctor_set(v___x_734_, 4, v_tree_737_);
lean_ctor_set(v___x_734_, 3, v_l_400_);
lean_ctor_set(v___x_734_, 2, v_v_739_);
lean_ctor_set(v___x_734_, 1, v_k_738_);
lean_ctor_set(v___x_734_, 0, v___x_745_);
v___x_747_ = v___x_734_;
goto v_reusejp_746_;
}
else
{
lean_object* v_reuseFailAlloc_748_; 
v_reuseFailAlloc_748_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_748_, 0, v___x_745_);
lean_ctor_set(v_reuseFailAlloc_748_, 1, v_k_738_);
lean_ctor_set(v_reuseFailAlloc_748_, 2, v_v_739_);
lean_ctor_set(v_reuseFailAlloc_748_, 3, v_l_400_);
lean_ctor_set(v_reuseFailAlloc_748_, 4, v_tree_737_);
v___x_747_ = v_reuseFailAlloc_748_;
goto v_reusejp_746_;
}
v_reusejp_746_:
{
return v___x_747_;
}
}
else
{
lean_object* v___x_750_; uint8_t v_isShared_751_; uint8_t v_isSharedCheck_814_; 
lean_inc(v_l_583_);
lean_inc(v_v_582_);
lean_inc(v_k_581_);
lean_inc(v_size_580_);
v_isSharedCheck_814_ = !lean_is_exclusive(v_l_400_);
if (v_isSharedCheck_814_ == 0)
{
lean_object* v_unused_815_; lean_object* v_unused_816_; lean_object* v_unused_817_; lean_object* v_unused_818_; lean_object* v_unused_819_; 
v_unused_815_ = lean_ctor_get(v_l_400_, 4);
lean_dec(v_unused_815_);
v_unused_816_ = lean_ctor_get(v_l_400_, 3);
lean_dec(v_unused_816_);
v_unused_817_ = lean_ctor_get(v_l_400_, 2);
lean_dec(v_unused_817_);
v_unused_818_ = lean_ctor_get(v_l_400_, 1);
lean_dec(v_unused_818_);
v_unused_819_ = lean_ctor_get(v_l_400_, 0);
lean_dec(v_unused_819_);
v___x_750_ = v_l_400_;
v_isShared_751_ = v_isSharedCheck_814_;
goto v_resetjp_749_;
}
else
{
lean_dec(v_l_400_);
v___x_750_ = lean_box(0);
v_isShared_751_ = v_isSharedCheck_814_;
goto v_resetjp_749_;
}
v_resetjp_749_:
{
lean_object* v_size_752_; lean_object* v_size_753_; lean_object* v_k_754_; lean_object* v_v_755_; lean_object* v_l_756_; lean_object* v_r_757_; lean_object* v___x_758_; lean_object* v___x_759_; uint8_t v___x_760_; 
v_size_752_ = lean_ctor_get(v_l_583_, 0);
v_size_753_ = lean_ctor_get(v_r_584_, 0);
v_k_754_ = lean_ctor_get(v_r_584_, 1);
v_v_755_ = lean_ctor_get(v_r_584_, 2);
v_l_756_ = lean_ctor_get(v_r_584_, 3);
v_r_757_ = lean_ctor_get(v_r_584_, 4);
v___x_758_ = lean_unsigned_to_nat(2u);
v___x_759_ = lean_nat_mul(v___x_758_, v_size_752_);
v___x_760_ = lean_nat_dec_lt(v_size_753_, v___x_759_);
lean_dec(v___x_759_);
if (v___x_760_ == 0)
{
lean_object* v___x_762_; uint8_t v_isShared_763_; uint8_t v_isSharedCheck_798_; 
lean_inc(v_r_757_);
lean_inc(v_l_756_);
lean_inc(v_v_755_);
lean_inc(v_k_754_);
lean_del_object(v___x_750_);
v_isSharedCheck_798_ = !lean_is_exclusive(v_r_584_);
if (v_isSharedCheck_798_ == 0)
{
lean_object* v_unused_799_; lean_object* v_unused_800_; lean_object* v_unused_801_; lean_object* v_unused_802_; lean_object* v_unused_803_; 
v_unused_799_ = lean_ctor_get(v_r_584_, 4);
lean_dec(v_unused_799_);
v_unused_800_ = lean_ctor_get(v_r_584_, 3);
lean_dec(v_unused_800_);
v_unused_801_ = lean_ctor_get(v_r_584_, 2);
lean_dec(v_unused_801_);
v_unused_802_ = lean_ctor_get(v_r_584_, 1);
lean_dec(v_unused_802_);
v_unused_803_ = lean_ctor_get(v_r_584_, 0);
lean_dec(v_unused_803_);
v___x_762_ = v_r_584_;
v_isShared_763_ = v_isSharedCheck_798_;
goto v_resetjp_761_;
}
else
{
lean_dec(v_r_584_);
v___x_762_ = lean_box(0);
v_isShared_763_ = v_isSharedCheck_798_;
goto v_resetjp_761_;
}
v_resetjp_761_:
{
lean_object* v___x_764_; lean_object* v___x_765_; lean_object* v___y_767_; lean_object* v___y_768_; lean_object* v___y_769_; lean_object* v___x_786_; lean_object* v___y_788_; 
v___x_764_ = lean_nat_add(v___x_590_, v_size_580_);
lean_dec(v_size_580_);
v___x_765_ = lean_nat_add(v___x_764_, v_size_740_);
lean_dec(v___x_764_);
v___x_786_ = lean_nat_add(v___x_590_, v_size_752_);
if (lean_obj_tag(v_l_756_) == 0)
{
lean_object* v_size_796_; 
v_size_796_ = lean_ctor_get(v_l_756_, 0);
lean_inc(v_size_796_);
v___y_788_ = v_size_796_;
goto v___jp_787_;
}
else
{
lean_object* v___x_797_; 
v___x_797_ = lean_unsigned_to_nat(0u);
v___y_788_ = v___x_797_;
goto v___jp_787_;
}
v___jp_766_:
{
lean_object* v___x_770_; lean_object* v___x_772_; 
v___x_770_ = lean_nat_add(v___y_767_, v___y_769_);
lean_dec(v___y_769_);
lean_dec(v___y_767_);
lean_inc_ref(v_tree_737_);
if (v_isShared_763_ == 0)
{
lean_ctor_set(v___x_762_, 4, v_tree_737_);
lean_ctor_set(v___x_762_, 3, v_r_757_);
lean_ctor_set(v___x_762_, 2, v_v_739_);
lean_ctor_set(v___x_762_, 1, v_k_738_);
lean_ctor_set(v___x_762_, 0, v___x_770_);
v___x_772_ = v___x_762_;
goto v_reusejp_771_;
}
else
{
lean_object* v_reuseFailAlloc_785_; 
v_reuseFailAlloc_785_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_785_, 0, v___x_770_);
lean_ctor_set(v_reuseFailAlloc_785_, 1, v_k_738_);
lean_ctor_set(v_reuseFailAlloc_785_, 2, v_v_739_);
lean_ctor_set(v_reuseFailAlloc_785_, 3, v_r_757_);
lean_ctor_set(v_reuseFailAlloc_785_, 4, v_tree_737_);
v___x_772_ = v_reuseFailAlloc_785_;
goto v_reusejp_771_;
}
v_reusejp_771_:
{
lean_object* v___x_774_; uint8_t v_isShared_775_; uint8_t v_isSharedCheck_779_; 
v_isSharedCheck_779_ = !lean_is_exclusive(v_tree_737_);
if (v_isSharedCheck_779_ == 0)
{
lean_object* v_unused_780_; lean_object* v_unused_781_; lean_object* v_unused_782_; lean_object* v_unused_783_; lean_object* v_unused_784_; 
v_unused_780_ = lean_ctor_get(v_tree_737_, 4);
lean_dec(v_unused_780_);
v_unused_781_ = lean_ctor_get(v_tree_737_, 3);
lean_dec(v_unused_781_);
v_unused_782_ = lean_ctor_get(v_tree_737_, 2);
lean_dec(v_unused_782_);
v_unused_783_ = lean_ctor_get(v_tree_737_, 1);
lean_dec(v_unused_783_);
v_unused_784_ = lean_ctor_get(v_tree_737_, 0);
lean_dec(v_unused_784_);
v___x_774_ = v_tree_737_;
v_isShared_775_ = v_isSharedCheck_779_;
goto v_resetjp_773_;
}
else
{
lean_dec(v_tree_737_);
v___x_774_ = lean_box(0);
v_isShared_775_ = v_isSharedCheck_779_;
goto v_resetjp_773_;
}
v_resetjp_773_:
{
lean_object* v___x_777_; 
if (v_isShared_775_ == 0)
{
lean_ctor_set(v___x_774_, 4, v___x_772_);
lean_ctor_set(v___x_774_, 3, v___y_768_);
lean_ctor_set(v___x_774_, 2, v_v_755_);
lean_ctor_set(v___x_774_, 1, v_k_754_);
lean_ctor_set(v___x_774_, 0, v___x_765_);
v___x_777_ = v___x_774_;
goto v_reusejp_776_;
}
else
{
lean_object* v_reuseFailAlloc_778_; 
v_reuseFailAlloc_778_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_778_, 0, v___x_765_);
lean_ctor_set(v_reuseFailAlloc_778_, 1, v_k_754_);
lean_ctor_set(v_reuseFailAlloc_778_, 2, v_v_755_);
lean_ctor_set(v_reuseFailAlloc_778_, 3, v___y_768_);
lean_ctor_set(v_reuseFailAlloc_778_, 4, v___x_772_);
v___x_777_ = v_reuseFailAlloc_778_;
goto v_reusejp_776_;
}
v_reusejp_776_:
{
return v___x_777_;
}
}
}
}
v___jp_787_:
{
lean_object* v___x_789_; lean_object* v___x_791_; 
v___x_789_ = lean_nat_add(v___x_786_, v___y_788_);
lean_dec(v___y_788_);
lean_dec(v___x_786_);
if (v_isShared_735_ == 0)
{
lean_ctor_set(v___x_734_, 4, v_l_756_);
lean_ctor_set(v___x_734_, 3, v_l_583_);
lean_ctor_set(v___x_734_, 2, v_v_582_);
lean_ctor_set(v___x_734_, 1, v_k_581_);
lean_ctor_set(v___x_734_, 0, v___x_789_);
v___x_791_ = v___x_734_;
goto v_reusejp_790_;
}
else
{
lean_object* v_reuseFailAlloc_795_; 
v_reuseFailAlloc_795_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_795_, 0, v___x_789_);
lean_ctor_set(v_reuseFailAlloc_795_, 1, v_k_581_);
lean_ctor_set(v_reuseFailAlloc_795_, 2, v_v_582_);
lean_ctor_set(v_reuseFailAlloc_795_, 3, v_l_583_);
lean_ctor_set(v_reuseFailAlloc_795_, 4, v_l_756_);
v___x_791_ = v_reuseFailAlloc_795_;
goto v_reusejp_790_;
}
v_reusejp_790_:
{
lean_object* v___x_792_; 
v___x_792_ = lean_nat_add(v___x_590_, v_size_740_);
if (lean_obj_tag(v_r_757_) == 0)
{
lean_object* v_size_793_; 
v_size_793_ = lean_ctor_get(v_r_757_, 0);
lean_inc(v_size_793_);
v___y_767_ = v___x_792_;
v___y_768_ = v___x_791_;
v___y_769_ = v_size_793_;
goto v___jp_766_;
}
else
{
lean_object* v___x_794_; 
v___x_794_ = lean_unsigned_to_nat(0u);
v___y_767_ = v___x_792_;
v___y_768_ = v___x_791_;
v___y_769_ = v___x_794_;
goto v___jp_766_;
}
}
}
}
}
else
{
lean_object* v___x_804_; lean_object* v___x_805_; lean_object* v___x_806_; lean_object* v___x_807_; lean_object* v___x_809_; 
v___x_804_ = lean_nat_add(v___x_590_, v_size_580_);
lean_dec(v_size_580_);
v___x_805_ = lean_nat_add(v___x_804_, v_size_740_);
lean_dec(v___x_804_);
v___x_806_ = lean_nat_add(v___x_590_, v_size_740_);
v___x_807_ = lean_nat_add(v___x_806_, v_size_753_);
lean_dec(v___x_806_);
if (v_isShared_735_ == 0)
{
lean_ctor_set(v___x_734_, 4, v_tree_737_);
lean_ctor_set(v___x_734_, 3, v_r_584_);
lean_ctor_set(v___x_734_, 2, v_v_739_);
lean_ctor_set(v___x_734_, 1, v_k_738_);
lean_ctor_set(v___x_734_, 0, v___x_807_);
v___x_809_ = v___x_734_;
goto v_reusejp_808_;
}
else
{
lean_object* v_reuseFailAlloc_813_; 
v_reuseFailAlloc_813_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_813_, 0, v___x_807_);
lean_ctor_set(v_reuseFailAlloc_813_, 1, v_k_738_);
lean_ctor_set(v_reuseFailAlloc_813_, 2, v_v_739_);
lean_ctor_set(v_reuseFailAlloc_813_, 3, v_r_584_);
lean_ctor_set(v_reuseFailAlloc_813_, 4, v_tree_737_);
v___x_809_ = v_reuseFailAlloc_813_;
goto v_reusejp_808_;
}
v_reusejp_808_:
{
lean_object* v___x_811_; 
if (v_isShared_751_ == 0)
{
lean_ctor_set(v___x_750_, 4, v___x_809_);
lean_ctor_set(v___x_750_, 0, v___x_805_);
v___x_811_ = v___x_750_;
goto v_reusejp_810_;
}
else
{
lean_object* v_reuseFailAlloc_812_; 
v_reuseFailAlloc_812_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_812_, 0, v___x_805_);
lean_ctor_set(v_reuseFailAlloc_812_, 1, v_k_581_);
lean_ctor_set(v_reuseFailAlloc_812_, 2, v_v_582_);
lean_ctor_set(v_reuseFailAlloc_812_, 3, v_l_583_);
lean_ctor_set(v_reuseFailAlloc_812_, 4, v___x_809_);
v___x_811_ = v_reuseFailAlloc_812_;
goto v_reusejp_810_;
}
v_reusejp_810_:
{
return v___x_811_;
}
}
}
}
}
}
else
{
if (lean_obj_tag(v_l_583_) == 0)
{
lean_object* v___x_821_; uint8_t v_isShared_822_; uint8_t v_isSharedCheck_843_; 
lean_inc_ref(v_l_583_);
lean_inc(v_v_582_);
lean_inc(v_k_581_);
lean_inc(v_size_580_);
v_isSharedCheck_843_ = !lean_is_exclusive(v_l_400_);
if (v_isSharedCheck_843_ == 0)
{
lean_object* v_unused_844_; lean_object* v_unused_845_; lean_object* v_unused_846_; lean_object* v_unused_847_; lean_object* v_unused_848_; 
v_unused_844_ = lean_ctor_get(v_l_400_, 4);
lean_dec(v_unused_844_);
v_unused_845_ = lean_ctor_get(v_l_400_, 3);
lean_dec(v_unused_845_);
v_unused_846_ = lean_ctor_get(v_l_400_, 2);
lean_dec(v_unused_846_);
v_unused_847_ = lean_ctor_get(v_l_400_, 1);
lean_dec(v_unused_847_);
v_unused_848_ = lean_ctor_get(v_l_400_, 0);
lean_dec(v_unused_848_);
v___x_821_ = v_l_400_;
v_isShared_822_ = v_isSharedCheck_843_;
goto v_resetjp_820_;
}
else
{
lean_dec(v_l_400_);
v___x_821_ = lean_box(0);
v_isShared_822_ = v_isSharedCheck_843_;
goto v_resetjp_820_;
}
v_resetjp_820_:
{
if (lean_obj_tag(v_r_584_) == 0)
{
lean_object* v_k_823_; lean_object* v_v_824_; lean_object* v_size_825_; lean_object* v___x_826_; lean_object* v___x_827_; lean_object* v___x_829_; 
v_k_823_ = lean_ctor_get(v___x_736_, 0);
lean_inc(v_k_823_);
v_v_824_ = lean_ctor_get(v___x_736_, 1);
lean_inc(v_v_824_);
lean_dec_ref(v___x_736_);
v_size_825_ = lean_ctor_get(v_r_584_, 0);
v___x_826_ = lean_nat_add(v___x_590_, v_size_580_);
lean_dec(v_size_580_);
v___x_827_ = lean_nat_add(v___x_590_, v_size_825_);
if (v_isShared_735_ == 0)
{
lean_ctor_set(v___x_734_, 4, v_tree_737_);
lean_ctor_set(v___x_734_, 3, v_r_584_);
lean_ctor_set(v___x_734_, 2, v_v_824_);
lean_ctor_set(v___x_734_, 1, v_k_823_);
lean_ctor_set(v___x_734_, 0, v___x_827_);
v___x_829_ = v___x_734_;
goto v_reusejp_828_;
}
else
{
lean_object* v_reuseFailAlloc_833_; 
v_reuseFailAlloc_833_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_833_, 0, v___x_827_);
lean_ctor_set(v_reuseFailAlloc_833_, 1, v_k_823_);
lean_ctor_set(v_reuseFailAlloc_833_, 2, v_v_824_);
lean_ctor_set(v_reuseFailAlloc_833_, 3, v_r_584_);
lean_ctor_set(v_reuseFailAlloc_833_, 4, v_tree_737_);
v___x_829_ = v_reuseFailAlloc_833_;
goto v_reusejp_828_;
}
v_reusejp_828_:
{
lean_object* v___x_831_; 
if (v_isShared_822_ == 0)
{
lean_ctor_set(v___x_821_, 4, v___x_829_);
lean_ctor_set(v___x_821_, 0, v___x_826_);
v___x_831_ = v___x_821_;
goto v_reusejp_830_;
}
else
{
lean_object* v_reuseFailAlloc_832_; 
v_reuseFailAlloc_832_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_832_, 0, v___x_826_);
lean_ctor_set(v_reuseFailAlloc_832_, 1, v_k_581_);
lean_ctor_set(v_reuseFailAlloc_832_, 2, v_v_582_);
lean_ctor_set(v_reuseFailAlloc_832_, 3, v_l_583_);
lean_ctor_set(v_reuseFailAlloc_832_, 4, v___x_829_);
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
lean_object* v_k_834_; lean_object* v_v_835_; lean_object* v___x_836_; lean_object* v___x_838_; 
lean_dec(v_size_580_);
v_k_834_ = lean_ctor_get(v___x_736_, 0);
lean_inc(v_k_834_);
v_v_835_ = lean_ctor_get(v___x_736_, 1);
lean_inc(v_v_835_);
lean_dec_ref(v___x_736_);
v___x_836_ = lean_unsigned_to_nat(3u);
if (v_isShared_735_ == 0)
{
lean_ctor_set(v___x_734_, 4, v_r_584_);
lean_ctor_set(v___x_734_, 3, v_r_584_);
lean_ctor_set(v___x_734_, 2, v_v_835_);
lean_ctor_set(v___x_734_, 1, v_k_834_);
lean_ctor_set(v___x_734_, 0, v___x_590_);
v___x_838_ = v___x_734_;
goto v_reusejp_837_;
}
else
{
lean_object* v_reuseFailAlloc_842_; 
v_reuseFailAlloc_842_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_842_, 0, v___x_590_);
lean_ctor_set(v_reuseFailAlloc_842_, 1, v_k_834_);
lean_ctor_set(v_reuseFailAlloc_842_, 2, v_v_835_);
lean_ctor_set(v_reuseFailAlloc_842_, 3, v_r_584_);
lean_ctor_set(v_reuseFailAlloc_842_, 4, v_r_584_);
v___x_838_ = v_reuseFailAlloc_842_;
goto v_reusejp_837_;
}
v_reusejp_837_:
{
lean_object* v___x_840_; 
if (v_isShared_822_ == 0)
{
lean_ctor_set(v___x_821_, 4, v___x_838_);
lean_ctor_set(v___x_821_, 0, v___x_836_);
v___x_840_ = v___x_821_;
goto v_reusejp_839_;
}
else
{
lean_object* v_reuseFailAlloc_841_; 
v_reuseFailAlloc_841_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_841_, 0, v___x_836_);
lean_ctor_set(v_reuseFailAlloc_841_, 1, v_k_581_);
lean_ctor_set(v_reuseFailAlloc_841_, 2, v_v_582_);
lean_ctor_set(v_reuseFailAlloc_841_, 3, v_l_583_);
lean_ctor_set(v_reuseFailAlloc_841_, 4, v___x_838_);
v___x_840_ = v_reuseFailAlloc_841_;
goto v_reusejp_839_;
}
v_reusejp_839_:
{
return v___x_840_;
}
}
}
}
}
else
{
if (lean_obj_tag(v_r_584_) == 0)
{
lean_object* v___x_850_; uint8_t v_isShared_851_; uint8_t v_isSharedCheck_873_; 
lean_inc(v_l_583_);
lean_inc(v_v_582_);
lean_inc(v_k_581_);
v_isSharedCheck_873_ = !lean_is_exclusive(v_l_400_);
if (v_isSharedCheck_873_ == 0)
{
lean_object* v_unused_874_; lean_object* v_unused_875_; lean_object* v_unused_876_; lean_object* v_unused_877_; lean_object* v_unused_878_; 
v_unused_874_ = lean_ctor_get(v_l_400_, 4);
lean_dec(v_unused_874_);
v_unused_875_ = lean_ctor_get(v_l_400_, 3);
lean_dec(v_unused_875_);
v_unused_876_ = lean_ctor_get(v_l_400_, 2);
lean_dec(v_unused_876_);
v_unused_877_ = lean_ctor_get(v_l_400_, 1);
lean_dec(v_unused_877_);
v_unused_878_ = lean_ctor_get(v_l_400_, 0);
lean_dec(v_unused_878_);
v___x_850_ = v_l_400_;
v_isShared_851_ = v_isSharedCheck_873_;
goto v_resetjp_849_;
}
else
{
lean_dec(v_l_400_);
v___x_850_ = lean_box(0);
v_isShared_851_ = v_isSharedCheck_873_;
goto v_resetjp_849_;
}
v_resetjp_849_:
{
lean_object* v_k_852_; lean_object* v_v_853_; lean_object* v_k_854_; lean_object* v_v_855_; lean_object* v___x_857_; uint8_t v_isShared_858_; uint8_t v_isSharedCheck_869_; 
v_k_852_ = lean_ctor_get(v___x_736_, 0);
lean_inc(v_k_852_);
v_v_853_ = lean_ctor_get(v___x_736_, 1);
lean_inc(v_v_853_);
lean_dec_ref(v___x_736_);
v_k_854_ = lean_ctor_get(v_r_584_, 1);
v_v_855_ = lean_ctor_get(v_r_584_, 2);
v_isSharedCheck_869_ = !lean_is_exclusive(v_r_584_);
if (v_isSharedCheck_869_ == 0)
{
lean_object* v_unused_870_; lean_object* v_unused_871_; lean_object* v_unused_872_; 
v_unused_870_ = lean_ctor_get(v_r_584_, 4);
lean_dec(v_unused_870_);
v_unused_871_ = lean_ctor_get(v_r_584_, 3);
lean_dec(v_unused_871_);
v_unused_872_ = lean_ctor_get(v_r_584_, 0);
lean_dec(v_unused_872_);
v___x_857_ = v_r_584_;
v_isShared_858_ = v_isSharedCheck_869_;
goto v_resetjp_856_;
}
else
{
lean_inc(v_v_855_);
lean_inc(v_k_854_);
lean_dec(v_r_584_);
v___x_857_ = lean_box(0);
v_isShared_858_ = v_isSharedCheck_869_;
goto v_resetjp_856_;
}
v_resetjp_856_:
{
lean_object* v___x_859_; lean_object* v___x_861_; 
v___x_859_ = lean_unsigned_to_nat(3u);
if (v_isShared_858_ == 0)
{
lean_ctor_set(v___x_857_, 4, v_l_583_);
lean_ctor_set(v___x_857_, 3, v_l_583_);
lean_ctor_set(v___x_857_, 2, v_v_582_);
lean_ctor_set(v___x_857_, 1, v_k_581_);
lean_ctor_set(v___x_857_, 0, v___x_590_);
v___x_861_ = v___x_857_;
goto v_reusejp_860_;
}
else
{
lean_object* v_reuseFailAlloc_868_; 
v_reuseFailAlloc_868_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_868_, 0, v___x_590_);
lean_ctor_set(v_reuseFailAlloc_868_, 1, v_k_581_);
lean_ctor_set(v_reuseFailAlloc_868_, 2, v_v_582_);
lean_ctor_set(v_reuseFailAlloc_868_, 3, v_l_583_);
lean_ctor_set(v_reuseFailAlloc_868_, 4, v_l_583_);
v___x_861_ = v_reuseFailAlloc_868_;
goto v_reusejp_860_;
}
v_reusejp_860_:
{
lean_object* v___x_863_; 
if (v_isShared_735_ == 0)
{
lean_ctor_set(v___x_734_, 4, v_l_583_);
lean_ctor_set(v___x_734_, 3, v_l_583_);
lean_ctor_set(v___x_734_, 2, v_v_853_);
lean_ctor_set(v___x_734_, 1, v_k_852_);
lean_ctor_set(v___x_734_, 0, v___x_590_);
v___x_863_ = v___x_734_;
goto v_reusejp_862_;
}
else
{
lean_object* v_reuseFailAlloc_867_; 
v_reuseFailAlloc_867_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_867_, 0, v___x_590_);
lean_ctor_set(v_reuseFailAlloc_867_, 1, v_k_852_);
lean_ctor_set(v_reuseFailAlloc_867_, 2, v_v_853_);
lean_ctor_set(v_reuseFailAlloc_867_, 3, v_l_583_);
lean_ctor_set(v_reuseFailAlloc_867_, 4, v_l_583_);
v___x_863_ = v_reuseFailAlloc_867_;
goto v_reusejp_862_;
}
v_reusejp_862_:
{
lean_object* v___x_865_; 
if (v_isShared_851_ == 0)
{
lean_ctor_set(v___x_850_, 4, v___x_863_);
lean_ctor_set(v___x_850_, 3, v___x_861_);
lean_ctor_set(v___x_850_, 2, v_v_855_);
lean_ctor_set(v___x_850_, 1, v_k_854_);
lean_ctor_set(v___x_850_, 0, v___x_859_);
v___x_865_ = v___x_850_;
goto v_reusejp_864_;
}
else
{
lean_object* v_reuseFailAlloc_866_; 
v_reuseFailAlloc_866_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_866_, 0, v___x_859_);
lean_ctor_set(v_reuseFailAlloc_866_, 1, v_k_854_);
lean_ctor_set(v_reuseFailAlloc_866_, 2, v_v_855_);
lean_ctor_set(v_reuseFailAlloc_866_, 3, v___x_861_);
lean_ctor_set(v_reuseFailAlloc_866_, 4, v___x_863_);
v___x_865_ = v_reuseFailAlloc_866_;
goto v_reusejp_864_;
}
v_reusejp_864_:
{
return v___x_865_;
}
}
}
}
}
}
else
{
lean_object* v_k_879_; lean_object* v_v_880_; lean_object* v___x_881_; lean_object* v___x_883_; 
v_k_879_ = lean_ctor_get(v___x_736_, 0);
lean_inc(v_k_879_);
v_v_880_ = lean_ctor_get(v___x_736_, 1);
lean_inc(v_v_880_);
lean_dec_ref(v___x_736_);
v___x_881_ = lean_unsigned_to_nat(2u);
if (v_isShared_735_ == 0)
{
lean_ctor_set(v___x_734_, 4, v_r_584_);
lean_ctor_set(v___x_734_, 3, v_l_400_);
lean_ctor_set(v___x_734_, 2, v_v_880_);
lean_ctor_set(v___x_734_, 1, v_k_879_);
lean_ctor_set(v___x_734_, 0, v___x_881_);
v___x_883_ = v___x_734_;
goto v_reusejp_882_;
}
else
{
lean_object* v_reuseFailAlloc_884_; 
v_reuseFailAlloc_884_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_884_, 0, v___x_881_);
lean_ctor_set(v_reuseFailAlloc_884_, 1, v_k_879_);
lean_ctor_set(v_reuseFailAlloc_884_, 2, v_v_880_);
lean_ctor_set(v_reuseFailAlloc_884_, 3, v_l_400_);
lean_ctor_set(v_reuseFailAlloc_884_, 4, v_r_584_);
v___x_883_ = v_reuseFailAlloc_884_;
goto v_reusejp_882_;
}
v_reusejp_882_:
{
return v___x_883_;
}
}
}
}
}
}
}
else
{
return v_l_400_;
}
}
else
{
return v_r_401_;
}
}
default: 
{
lean_object* v_impl_891_; lean_object* v___x_892_; 
v_impl_891_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_NameMap_erase_spec__0___redArg(v_k_396_, v_r_401_);
v___x_892_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_impl_891_) == 0)
{
if (lean_obj_tag(v_l_400_) == 0)
{
lean_object* v_size_893_; lean_object* v_size_894_; lean_object* v_k_895_; lean_object* v_v_896_; lean_object* v_l_897_; lean_object* v_r_898_; lean_object* v___x_899_; lean_object* v___x_900_; uint8_t v___x_901_; 
v_size_893_ = lean_ctor_get(v_impl_891_, 0);
lean_inc(v_size_893_);
v_size_894_ = lean_ctor_get(v_l_400_, 0);
v_k_895_ = lean_ctor_get(v_l_400_, 1);
v_v_896_ = lean_ctor_get(v_l_400_, 2);
v_l_897_ = lean_ctor_get(v_l_400_, 3);
v_r_898_ = lean_ctor_get(v_l_400_, 4);
lean_inc(v_r_898_);
v___x_899_ = lean_unsigned_to_nat(3u);
v___x_900_ = lean_nat_mul(v___x_899_, v_size_893_);
v___x_901_ = lean_nat_dec_lt(v___x_900_, v_size_894_);
lean_dec(v___x_900_);
if (v___x_901_ == 0)
{
lean_object* v___x_902_; lean_object* v___x_903_; lean_object* v___x_905_; 
lean_dec(v_r_898_);
v___x_902_ = lean_nat_add(v___x_892_, v_size_894_);
v___x_903_ = lean_nat_add(v___x_902_, v_size_893_);
lean_dec(v_size_893_);
lean_dec(v___x_902_);
if (v_isShared_404_ == 0)
{
lean_ctor_set(v___x_403_, 4, v_impl_891_);
lean_ctor_set(v___x_403_, 0, v___x_903_);
v___x_905_ = v___x_403_;
goto v_reusejp_904_;
}
else
{
lean_object* v_reuseFailAlloc_906_; 
v_reuseFailAlloc_906_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_906_, 0, v___x_903_);
lean_ctor_set(v_reuseFailAlloc_906_, 1, v_k_398_);
lean_ctor_set(v_reuseFailAlloc_906_, 2, v_v_399_);
lean_ctor_set(v_reuseFailAlloc_906_, 3, v_l_400_);
lean_ctor_set(v_reuseFailAlloc_906_, 4, v_impl_891_);
v___x_905_ = v_reuseFailAlloc_906_;
goto v_reusejp_904_;
}
v_reusejp_904_:
{
return v___x_905_;
}
}
else
{
lean_object* v___x_908_; uint8_t v_isShared_909_; uint8_t v_isSharedCheck_972_; 
lean_inc(v_l_897_);
lean_inc(v_v_896_);
lean_inc(v_k_895_);
lean_inc(v_size_894_);
v_isSharedCheck_972_ = !lean_is_exclusive(v_l_400_);
if (v_isSharedCheck_972_ == 0)
{
lean_object* v_unused_973_; lean_object* v_unused_974_; lean_object* v_unused_975_; lean_object* v_unused_976_; lean_object* v_unused_977_; 
v_unused_973_ = lean_ctor_get(v_l_400_, 4);
lean_dec(v_unused_973_);
v_unused_974_ = lean_ctor_get(v_l_400_, 3);
lean_dec(v_unused_974_);
v_unused_975_ = lean_ctor_get(v_l_400_, 2);
lean_dec(v_unused_975_);
v_unused_976_ = lean_ctor_get(v_l_400_, 1);
lean_dec(v_unused_976_);
v_unused_977_ = lean_ctor_get(v_l_400_, 0);
lean_dec(v_unused_977_);
v___x_908_ = v_l_400_;
v_isShared_909_ = v_isSharedCheck_972_;
goto v_resetjp_907_;
}
else
{
lean_dec(v_l_400_);
v___x_908_ = lean_box(0);
v_isShared_909_ = v_isSharedCheck_972_;
goto v_resetjp_907_;
}
v_resetjp_907_:
{
lean_object* v_size_910_; lean_object* v_size_911_; lean_object* v_k_912_; lean_object* v_v_913_; lean_object* v_l_914_; lean_object* v_r_915_; lean_object* v___x_916_; lean_object* v___x_917_; uint8_t v___x_918_; 
v_size_910_ = lean_ctor_get(v_l_897_, 0);
v_size_911_ = lean_ctor_get(v_r_898_, 0);
v_k_912_ = lean_ctor_get(v_r_898_, 1);
v_v_913_ = lean_ctor_get(v_r_898_, 2);
v_l_914_ = lean_ctor_get(v_r_898_, 3);
v_r_915_ = lean_ctor_get(v_r_898_, 4);
v___x_916_ = lean_unsigned_to_nat(2u);
v___x_917_ = lean_nat_mul(v___x_916_, v_size_910_);
v___x_918_ = lean_nat_dec_lt(v_size_911_, v___x_917_);
lean_dec(v___x_917_);
if (v___x_918_ == 0)
{
lean_object* v___x_920_; uint8_t v_isShared_921_; uint8_t v_isSharedCheck_947_; 
lean_inc(v_r_915_);
lean_inc(v_l_914_);
lean_inc(v_v_913_);
lean_inc(v_k_912_);
v_isSharedCheck_947_ = !lean_is_exclusive(v_r_898_);
if (v_isSharedCheck_947_ == 0)
{
lean_object* v_unused_948_; lean_object* v_unused_949_; lean_object* v_unused_950_; lean_object* v_unused_951_; lean_object* v_unused_952_; 
v_unused_948_ = lean_ctor_get(v_r_898_, 4);
lean_dec(v_unused_948_);
v_unused_949_ = lean_ctor_get(v_r_898_, 3);
lean_dec(v_unused_949_);
v_unused_950_ = lean_ctor_get(v_r_898_, 2);
lean_dec(v_unused_950_);
v_unused_951_ = lean_ctor_get(v_r_898_, 1);
lean_dec(v_unused_951_);
v_unused_952_ = lean_ctor_get(v_r_898_, 0);
lean_dec(v_unused_952_);
v___x_920_ = v_r_898_;
v_isShared_921_ = v_isSharedCheck_947_;
goto v_resetjp_919_;
}
else
{
lean_dec(v_r_898_);
v___x_920_ = lean_box(0);
v_isShared_921_ = v_isSharedCheck_947_;
goto v_resetjp_919_;
}
v_resetjp_919_:
{
lean_object* v___x_922_; lean_object* v___x_923_; lean_object* v___y_925_; lean_object* v___y_926_; lean_object* v___y_927_; lean_object* v___x_935_; lean_object* v___y_937_; 
v___x_922_ = lean_nat_add(v___x_892_, v_size_894_);
lean_dec(v_size_894_);
v___x_923_ = lean_nat_add(v___x_922_, v_size_893_);
lean_dec(v___x_922_);
v___x_935_ = lean_nat_add(v___x_892_, v_size_910_);
if (lean_obj_tag(v_l_914_) == 0)
{
lean_object* v_size_945_; 
v_size_945_ = lean_ctor_get(v_l_914_, 0);
lean_inc(v_size_945_);
v___y_937_ = v_size_945_;
goto v___jp_936_;
}
else
{
lean_object* v___x_946_; 
v___x_946_ = lean_unsigned_to_nat(0u);
v___y_937_ = v___x_946_;
goto v___jp_936_;
}
v___jp_924_:
{
lean_object* v___x_928_; lean_object* v___x_930_; 
v___x_928_ = lean_nat_add(v___y_926_, v___y_927_);
lean_dec(v___y_927_);
lean_dec(v___y_926_);
if (v_isShared_921_ == 0)
{
lean_ctor_set(v___x_920_, 4, v_impl_891_);
lean_ctor_set(v___x_920_, 3, v_r_915_);
lean_ctor_set(v___x_920_, 2, v_v_399_);
lean_ctor_set(v___x_920_, 1, v_k_398_);
lean_ctor_set(v___x_920_, 0, v___x_928_);
v___x_930_ = v___x_920_;
goto v_reusejp_929_;
}
else
{
lean_object* v_reuseFailAlloc_934_; 
v_reuseFailAlloc_934_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_934_, 0, v___x_928_);
lean_ctor_set(v_reuseFailAlloc_934_, 1, v_k_398_);
lean_ctor_set(v_reuseFailAlloc_934_, 2, v_v_399_);
lean_ctor_set(v_reuseFailAlloc_934_, 3, v_r_915_);
lean_ctor_set(v_reuseFailAlloc_934_, 4, v_impl_891_);
v___x_930_ = v_reuseFailAlloc_934_;
goto v_reusejp_929_;
}
v_reusejp_929_:
{
lean_object* v___x_932_; 
if (v_isShared_909_ == 0)
{
lean_ctor_set(v___x_908_, 4, v___x_930_);
lean_ctor_set(v___x_908_, 3, v___y_925_);
lean_ctor_set(v___x_908_, 2, v_v_913_);
lean_ctor_set(v___x_908_, 1, v_k_912_);
lean_ctor_set(v___x_908_, 0, v___x_923_);
v___x_932_ = v___x_908_;
goto v_reusejp_931_;
}
else
{
lean_object* v_reuseFailAlloc_933_; 
v_reuseFailAlloc_933_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_933_, 0, v___x_923_);
lean_ctor_set(v_reuseFailAlloc_933_, 1, v_k_912_);
lean_ctor_set(v_reuseFailAlloc_933_, 2, v_v_913_);
lean_ctor_set(v_reuseFailAlloc_933_, 3, v___y_925_);
lean_ctor_set(v_reuseFailAlloc_933_, 4, v___x_930_);
v___x_932_ = v_reuseFailAlloc_933_;
goto v_reusejp_931_;
}
v_reusejp_931_:
{
return v___x_932_;
}
}
}
v___jp_936_:
{
lean_object* v___x_938_; lean_object* v___x_940_; 
v___x_938_ = lean_nat_add(v___x_935_, v___y_937_);
lean_dec(v___y_937_);
lean_dec(v___x_935_);
if (v_isShared_404_ == 0)
{
lean_ctor_set(v___x_403_, 4, v_l_914_);
lean_ctor_set(v___x_403_, 3, v_l_897_);
lean_ctor_set(v___x_403_, 2, v_v_896_);
lean_ctor_set(v___x_403_, 1, v_k_895_);
lean_ctor_set(v___x_403_, 0, v___x_938_);
v___x_940_ = v___x_403_;
goto v_reusejp_939_;
}
else
{
lean_object* v_reuseFailAlloc_944_; 
v_reuseFailAlloc_944_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_944_, 0, v___x_938_);
lean_ctor_set(v_reuseFailAlloc_944_, 1, v_k_895_);
lean_ctor_set(v_reuseFailAlloc_944_, 2, v_v_896_);
lean_ctor_set(v_reuseFailAlloc_944_, 3, v_l_897_);
lean_ctor_set(v_reuseFailAlloc_944_, 4, v_l_914_);
v___x_940_ = v_reuseFailAlloc_944_;
goto v_reusejp_939_;
}
v_reusejp_939_:
{
lean_object* v___x_941_; 
v___x_941_ = lean_nat_add(v___x_892_, v_size_893_);
lean_dec(v_size_893_);
if (lean_obj_tag(v_r_915_) == 0)
{
lean_object* v_size_942_; 
v_size_942_ = lean_ctor_get(v_r_915_, 0);
lean_inc(v_size_942_);
v___y_925_ = v___x_940_;
v___y_926_ = v___x_941_;
v___y_927_ = v_size_942_;
goto v___jp_924_;
}
else
{
lean_object* v___x_943_; 
v___x_943_ = lean_unsigned_to_nat(0u);
v___y_925_ = v___x_940_;
v___y_926_ = v___x_941_;
v___y_927_ = v___x_943_;
goto v___jp_924_;
}
}
}
}
}
else
{
lean_object* v___x_953_; lean_object* v___x_954_; lean_object* v___x_955_; lean_object* v___x_956_; lean_object* v___x_958_; 
lean_del_object(v___x_403_);
v___x_953_ = lean_nat_add(v___x_892_, v_size_894_);
lean_dec(v_size_894_);
v___x_954_ = lean_nat_add(v___x_953_, v_size_893_);
lean_dec(v___x_953_);
v___x_955_ = lean_nat_add(v___x_892_, v_size_893_);
lean_dec(v_size_893_);
v___x_956_ = lean_nat_add(v___x_955_, v_size_911_);
lean_dec(v___x_955_);
lean_inc_ref(v_impl_891_);
if (v_isShared_909_ == 0)
{
lean_ctor_set(v___x_908_, 4, v_impl_891_);
lean_ctor_set(v___x_908_, 3, v_r_898_);
lean_ctor_set(v___x_908_, 2, v_v_399_);
lean_ctor_set(v___x_908_, 1, v_k_398_);
lean_ctor_set(v___x_908_, 0, v___x_956_);
v___x_958_ = v___x_908_;
goto v_reusejp_957_;
}
else
{
lean_object* v_reuseFailAlloc_971_; 
v_reuseFailAlloc_971_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_971_, 0, v___x_956_);
lean_ctor_set(v_reuseFailAlloc_971_, 1, v_k_398_);
lean_ctor_set(v_reuseFailAlloc_971_, 2, v_v_399_);
lean_ctor_set(v_reuseFailAlloc_971_, 3, v_r_898_);
lean_ctor_set(v_reuseFailAlloc_971_, 4, v_impl_891_);
v___x_958_ = v_reuseFailAlloc_971_;
goto v_reusejp_957_;
}
v_reusejp_957_:
{
lean_object* v___x_960_; uint8_t v_isShared_961_; uint8_t v_isSharedCheck_965_; 
v_isSharedCheck_965_ = !lean_is_exclusive(v_impl_891_);
if (v_isSharedCheck_965_ == 0)
{
lean_object* v_unused_966_; lean_object* v_unused_967_; lean_object* v_unused_968_; lean_object* v_unused_969_; lean_object* v_unused_970_; 
v_unused_966_ = lean_ctor_get(v_impl_891_, 4);
lean_dec(v_unused_966_);
v_unused_967_ = lean_ctor_get(v_impl_891_, 3);
lean_dec(v_unused_967_);
v_unused_968_ = lean_ctor_get(v_impl_891_, 2);
lean_dec(v_unused_968_);
v_unused_969_ = lean_ctor_get(v_impl_891_, 1);
lean_dec(v_unused_969_);
v_unused_970_ = lean_ctor_get(v_impl_891_, 0);
lean_dec(v_unused_970_);
v___x_960_ = v_impl_891_;
v_isShared_961_ = v_isSharedCheck_965_;
goto v_resetjp_959_;
}
else
{
lean_dec(v_impl_891_);
v___x_960_ = lean_box(0);
v_isShared_961_ = v_isSharedCheck_965_;
goto v_resetjp_959_;
}
v_resetjp_959_:
{
lean_object* v___x_963_; 
if (v_isShared_961_ == 0)
{
lean_ctor_set(v___x_960_, 4, v___x_958_);
lean_ctor_set(v___x_960_, 3, v_l_897_);
lean_ctor_set(v___x_960_, 2, v_v_896_);
lean_ctor_set(v___x_960_, 1, v_k_895_);
lean_ctor_set(v___x_960_, 0, v___x_954_);
v___x_963_ = v___x_960_;
goto v_reusejp_962_;
}
else
{
lean_object* v_reuseFailAlloc_964_; 
v_reuseFailAlloc_964_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_964_, 0, v___x_954_);
lean_ctor_set(v_reuseFailAlloc_964_, 1, v_k_895_);
lean_ctor_set(v_reuseFailAlloc_964_, 2, v_v_896_);
lean_ctor_set(v_reuseFailAlloc_964_, 3, v_l_897_);
lean_ctor_set(v_reuseFailAlloc_964_, 4, v___x_958_);
v___x_963_ = v_reuseFailAlloc_964_;
goto v_reusejp_962_;
}
v_reusejp_962_:
{
return v___x_963_;
}
}
}
}
}
}
}
else
{
lean_object* v_size_978_; lean_object* v___x_979_; lean_object* v___x_981_; 
v_size_978_ = lean_ctor_get(v_impl_891_, 0);
lean_inc(v_size_978_);
v___x_979_ = lean_nat_add(v___x_892_, v_size_978_);
lean_dec(v_size_978_);
if (v_isShared_404_ == 0)
{
lean_ctor_set(v___x_403_, 4, v_impl_891_);
lean_ctor_set(v___x_403_, 0, v___x_979_);
v___x_981_ = v___x_403_;
goto v_reusejp_980_;
}
else
{
lean_object* v_reuseFailAlloc_982_; 
v_reuseFailAlloc_982_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_982_, 0, v___x_979_);
lean_ctor_set(v_reuseFailAlloc_982_, 1, v_k_398_);
lean_ctor_set(v_reuseFailAlloc_982_, 2, v_v_399_);
lean_ctor_set(v_reuseFailAlloc_982_, 3, v_l_400_);
lean_ctor_set(v_reuseFailAlloc_982_, 4, v_impl_891_);
v___x_981_ = v_reuseFailAlloc_982_;
goto v_reusejp_980_;
}
v_reusejp_980_:
{
return v___x_981_;
}
}
}
else
{
if (lean_obj_tag(v_l_400_) == 0)
{
lean_object* v_l_983_; 
v_l_983_ = lean_ctor_get(v_l_400_, 3);
if (lean_obj_tag(v_l_983_) == 0)
{
lean_object* v_r_984_; 
lean_inc_ref(v_l_983_);
v_r_984_ = lean_ctor_get(v_l_400_, 4);
lean_inc(v_r_984_);
if (lean_obj_tag(v_r_984_) == 0)
{
lean_object* v_size_985_; lean_object* v_k_986_; lean_object* v_v_987_; lean_object* v___x_989_; uint8_t v_isShared_990_; uint8_t v_isSharedCheck_1000_; 
v_size_985_ = lean_ctor_get(v_l_400_, 0);
v_k_986_ = lean_ctor_get(v_l_400_, 1);
v_v_987_ = lean_ctor_get(v_l_400_, 2);
v_isSharedCheck_1000_ = !lean_is_exclusive(v_l_400_);
if (v_isSharedCheck_1000_ == 0)
{
lean_object* v_unused_1001_; lean_object* v_unused_1002_; 
v_unused_1001_ = lean_ctor_get(v_l_400_, 4);
lean_dec(v_unused_1001_);
v_unused_1002_ = lean_ctor_get(v_l_400_, 3);
lean_dec(v_unused_1002_);
v___x_989_ = v_l_400_;
v_isShared_990_ = v_isSharedCheck_1000_;
goto v_resetjp_988_;
}
else
{
lean_inc(v_v_987_);
lean_inc(v_k_986_);
lean_inc(v_size_985_);
lean_dec(v_l_400_);
v___x_989_ = lean_box(0);
v_isShared_990_ = v_isSharedCheck_1000_;
goto v_resetjp_988_;
}
v_resetjp_988_:
{
lean_object* v_size_991_; lean_object* v___x_992_; lean_object* v___x_993_; lean_object* v___x_995_; 
v_size_991_ = lean_ctor_get(v_r_984_, 0);
v___x_992_ = lean_nat_add(v___x_892_, v_size_985_);
lean_dec(v_size_985_);
v___x_993_ = lean_nat_add(v___x_892_, v_size_991_);
if (v_isShared_990_ == 0)
{
lean_ctor_set(v___x_989_, 4, v_impl_891_);
lean_ctor_set(v___x_989_, 3, v_r_984_);
lean_ctor_set(v___x_989_, 2, v_v_399_);
lean_ctor_set(v___x_989_, 1, v_k_398_);
lean_ctor_set(v___x_989_, 0, v___x_993_);
v___x_995_ = v___x_989_;
goto v_reusejp_994_;
}
else
{
lean_object* v_reuseFailAlloc_999_; 
v_reuseFailAlloc_999_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_999_, 0, v___x_993_);
lean_ctor_set(v_reuseFailAlloc_999_, 1, v_k_398_);
lean_ctor_set(v_reuseFailAlloc_999_, 2, v_v_399_);
lean_ctor_set(v_reuseFailAlloc_999_, 3, v_r_984_);
lean_ctor_set(v_reuseFailAlloc_999_, 4, v_impl_891_);
v___x_995_ = v_reuseFailAlloc_999_;
goto v_reusejp_994_;
}
v_reusejp_994_:
{
lean_object* v___x_997_; 
if (v_isShared_404_ == 0)
{
lean_ctor_set(v___x_403_, 4, v___x_995_);
lean_ctor_set(v___x_403_, 3, v_l_983_);
lean_ctor_set(v___x_403_, 2, v_v_987_);
lean_ctor_set(v___x_403_, 1, v_k_986_);
lean_ctor_set(v___x_403_, 0, v___x_992_);
v___x_997_ = v___x_403_;
goto v_reusejp_996_;
}
else
{
lean_object* v_reuseFailAlloc_998_; 
v_reuseFailAlloc_998_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_998_, 0, v___x_992_);
lean_ctor_set(v_reuseFailAlloc_998_, 1, v_k_986_);
lean_ctor_set(v_reuseFailAlloc_998_, 2, v_v_987_);
lean_ctor_set(v_reuseFailAlloc_998_, 3, v_l_983_);
lean_ctor_set(v_reuseFailAlloc_998_, 4, v___x_995_);
v___x_997_ = v_reuseFailAlloc_998_;
goto v_reusejp_996_;
}
v_reusejp_996_:
{
return v___x_997_;
}
}
}
}
else
{
lean_object* v_k_1003_; lean_object* v_v_1004_; lean_object* v___x_1006_; uint8_t v_isShared_1007_; uint8_t v_isSharedCheck_1015_; 
v_k_1003_ = lean_ctor_get(v_l_400_, 1);
v_v_1004_ = lean_ctor_get(v_l_400_, 2);
v_isSharedCheck_1015_ = !lean_is_exclusive(v_l_400_);
if (v_isSharedCheck_1015_ == 0)
{
lean_object* v_unused_1016_; lean_object* v_unused_1017_; lean_object* v_unused_1018_; 
v_unused_1016_ = lean_ctor_get(v_l_400_, 4);
lean_dec(v_unused_1016_);
v_unused_1017_ = lean_ctor_get(v_l_400_, 3);
lean_dec(v_unused_1017_);
v_unused_1018_ = lean_ctor_get(v_l_400_, 0);
lean_dec(v_unused_1018_);
v___x_1006_ = v_l_400_;
v_isShared_1007_ = v_isSharedCheck_1015_;
goto v_resetjp_1005_;
}
else
{
lean_inc(v_v_1004_);
lean_inc(v_k_1003_);
lean_dec(v_l_400_);
v___x_1006_ = lean_box(0);
v_isShared_1007_ = v_isSharedCheck_1015_;
goto v_resetjp_1005_;
}
v_resetjp_1005_:
{
lean_object* v___x_1008_; lean_object* v___x_1010_; 
v___x_1008_ = lean_unsigned_to_nat(3u);
if (v_isShared_1007_ == 0)
{
lean_ctor_set(v___x_1006_, 3, v_r_984_);
lean_ctor_set(v___x_1006_, 2, v_v_399_);
lean_ctor_set(v___x_1006_, 1, v_k_398_);
lean_ctor_set(v___x_1006_, 0, v___x_892_);
v___x_1010_ = v___x_1006_;
goto v_reusejp_1009_;
}
else
{
lean_object* v_reuseFailAlloc_1014_; 
v_reuseFailAlloc_1014_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1014_, 0, v___x_892_);
lean_ctor_set(v_reuseFailAlloc_1014_, 1, v_k_398_);
lean_ctor_set(v_reuseFailAlloc_1014_, 2, v_v_399_);
lean_ctor_set(v_reuseFailAlloc_1014_, 3, v_r_984_);
lean_ctor_set(v_reuseFailAlloc_1014_, 4, v_r_984_);
v___x_1010_ = v_reuseFailAlloc_1014_;
goto v_reusejp_1009_;
}
v_reusejp_1009_:
{
lean_object* v___x_1012_; 
if (v_isShared_404_ == 0)
{
lean_ctor_set(v___x_403_, 4, v___x_1010_);
lean_ctor_set(v___x_403_, 3, v_l_983_);
lean_ctor_set(v___x_403_, 2, v_v_1004_);
lean_ctor_set(v___x_403_, 1, v_k_1003_);
lean_ctor_set(v___x_403_, 0, v___x_1008_);
v___x_1012_ = v___x_403_;
goto v_reusejp_1011_;
}
else
{
lean_object* v_reuseFailAlloc_1013_; 
v_reuseFailAlloc_1013_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1013_, 0, v___x_1008_);
lean_ctor_set(v_reuseFailAlloc_1013_, 1, v_k_1003_);
lean_ctor_set(v_reuseFailAlloc_1013_, 2, v_v_1004_);
lean_ctor_set(v_reuseFailAlloc_1013_, 3, v_l_983_);
lean_ctor_set(v_reuseFailAlloc_1013_, 4, v___x_1010_);
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
else
{
lean_object* v_r_1019_; 
v_r_1019_ = lean_ctor_get(v_l_400_, 4);
lean_inc(v_r_1019_);
if (lean_obj_tag(v_r_1019_) == 0)
{
lean_object* v_k_1020_; lean_object* v_v_1021_; lean_object* v___x_1023_; uint8_t v_isShared_1024_; uint8_t v_isSharedCheck_1044_; 
lean_inc(v_l_983_);
v_k_1020_ = lean_ctor_get(v_l_400_, 1);
v_v_1021_ = lean_ctor_get(v_l_400_, 2);
v_isSharedCheck_1044_ = !lean_is_exclusive(v_l_400_);
if (v_isSharedCheck_1044_ == 0)
{
lean_object* v_unused_1045_; lean_object* v_unused_1046_; lean_object* v_unused_1047_; 
v_unused_1045_ = lean_ctor_get(v_l_400_, 4);
lean_dec(v_unused_1045_);
v_unused_1046_ = lean_ctor_get(v_l_400_, 3);
lean_dec(v_unused_1046_);
v_unused_1047_ = lean_ctor_get(v_l_400_, 0);
lean_dec(v_unused_1047_);
v___x_1023_ = v_l_400_;
v_isShared_1024_ = v_isSharedCheck_1044_;
goto v_resetjp_1022_;
}
else
{
lean_inc(v_v_1021_);
lean_inc(v_k_1020_);
lean_dec(v_l_400_);
v___x_1023_ = lean_box(0);
v_isShared_1024_ = v_isSharedCheck_1044_;
goto v_resetjp_1022_;
}
v_resetjp_1022_:
{
lean_object* v_k_1025_; lean_object* v_v_1026_; lean_object* v___x_1028_; uint8_t v_isShared_1029_; uint8_t v_isSharedCheck_1040_; 
v_k_1025_ = lean_ctor_get(v_r_1019_, 1);
v_v_1026_ = lean_ctor_get(v_r_1019_, 2);
v_isSharedCheck_1040_ = !lean_is_exclusive(v_r_1019_);
if (v_isSharedCheck_1040_ == 0)
{
lean_object* v_unused_1041_; lean_object* v_unused_1042_; lean_object* v_unused_1043_; 
v_unused_1041_ = lean_ctor_get(v_r_1019_, 4);
lean_dec(v_unused_1041_);
v_unused_1042_ = lean_ctor_get(v_r_1019_, 3);
lean_dec(v_unused_1042_);
v_unused_1043_ = lean_ctor_get(v_r_1019_, 0);
lean_dec(v_unused_1043_);
v___x_1028_ = v_r_1019_;
v_isShared_1029_ = v_isSharedCheck_1040_;
goto v_resetjp_1027_;
}
else
{
lean_inc(v_v_1026_);
lean_inc(v_k_1025_);
lean_dec(v_r_1019_);
v___x_1028_ = lean_box(0);
v_isShared_1029_ = v_isSharedCheck_1040_;
goto v_resetjp_1027_;
}
v_resetjp_1027_:
{
lean_object* v___x_1030_; lean_object* v___x_1032_; 
v___x_1030_ = lean_unsigned_to_nat(3u);
if (v_isShared_1029_ == 0)
{
lean_ctor_set(v___x_1028_, 4, v_l_983_);
lean_ctor_set(v___x_1028_, 3, v_l_983_);
lean_ctor_set(v___x_1028_, 2, v_v_1021_);
lean_ctor_set(v___x_1028_, 1, v_k_1020_);
lean_ctor_set(v___x_1028_, 0, v___x_892_);
v___x_1032_ = v___x_1028_;
goto v_reusejp_1031_;
}
else
{
lean_object* v_reuseFailAlloc_1039_; 
v_reuseFailAlloc_1039_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1039_, 0, v___x_892_);
lean_ctor_set(v_reuseFailAlloc_1039_, 1, v_k_1020_);
lean_ctor_set(v_reuseFailAlloc_1039_, 2, v_v_1021_);
lean_ctor_set(v_reuseFailAlloc_1039_, 3, v_l_983_);
lean_ctor_set(v_reuseFailAlloc_1039_, 4, v_l_983_);
v___x_1032_ = v_reuseFailAlloc_1039_;
goto v_reusejp_1031_;
}
v_reusejp_1031_:
{
lean_object* v___x_1034_; 
if (v_isShared_1024_ == 0)
{
lean_ctor_set(v___x_1023_, 4, v_l_983_);
lean_ctor_set(v___x_1023_, 2, v_v_399_);
lean_ctor_set(v___x_1023_, 1, v_k_398_);
lean_ctor_set(v___x_1023_, 0, v___x_892_);
v___x_1034_ = v___x_1023_;
goto v_reusejp_1033_;
}
else
{
lean_object* v_reuseFailAlloc_1038_; 
v_reuseFailAlloc_1038_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1038_, 0, v___x_892_);
lean_ctor_set(v_reuseFailAlloc_1038_, 1, v_k_398_);
lean_ctor_set(v_reuseFailAlloc_1038_, 2, v_v_399_);
lean_ctor_set(v_reuseFailAlloc_1038_, 3, v_l_983_);
lean_ctor_set(v_reuseFailAlloc_1038_, 4, v_l_983_);
v___x_1034_ = v_reuseFailAlloc_1038_;
goto v_reusejp_1033_;
}
v_reusejp_1033_:
{
lean_object* v___x_1036_; 
if (v_isShared_404_ == 0)
{
lean_ctor_set(v___x_403_, 4, v___x_1034_);
lean_ctor_set(v___x_403_, 3, v___x_1032_);
lean_ctor_set(v___x_403_, 2, v_v_1026_);
lean_ctor_set(v___x_403_, 1, v_k_1025_);
lean_ctor_set(v___x_403_, 0, v___x_1030_);
v___x_1036_ = v___x_403_;
goto v_reusejp_1035_;
}
else
{
lean_object* v_reuseFailAlloc_1037_; 
v_reuseFailAlloc_1037_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1037_, 0, v___x_1030_);
lean_ctor_set(v_reuseFailAlloc_1037_, 1, v_k_1025_);
lean_ctor_set(v_reuseFailAlloc_1037_, 2, v_v_1026_);
lean_ctor_set(v_reuseFailAlloc_1037_, 3, v___x_1032_);
lean_ctor_set(v_reuseFailAlloc_1037_, 4, v___x_1034_);
v___x_1036_ = v_reuseFailAlloc_1037_;
goto v_reusejp_1035_;
}
v_reusejp_1035_:
{
return v___x_1036_;
}
}
}
}
}
}
else
{
lean_object* v___x_1048_; lean_object* v___x_1050_; 
v___x_1048_ = lean_unsigned_to_nat(2u);
if (v_isShared_404_ == 0)
{
lean_ctor_set(v___x_403_, 4, v_r_1019_);
lean_ctor_set(v___x_403_, 0, v___x_1048_);
v___x_1050_ = v___x_403_;
goto v_reusejp_1049_;
}
else
{
lean_object* v_reuseFailAlloc_1051_; 
v_reuseFailAlloc_1051_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1051_, 0, v___x_1048_);
lean_ctor_set(v_reuseFailAlloc_1051_, 1, v_k_398_);
lean_ctor_set(v_reuseFailAlloc_1051_, 2, v_v_399_);
lean_ctor_set(v_reuseFailAlloc_1051_, 3, v_l_400_);
lean_ctor_set(v_reuseFailAlloc_1051_, 4, v_r_1019_);
v___x_1050_ = v_reuseFailAlloc_1051_;
goto v_reusejp_1049_;
}
v_reusejp_1049_:
{
return v___x_1050_;
}
}
}
}
else
{
lean_object* v___x_1053_; 
if (v_isShared_404_ == 0)
{
lean_ctor_set(v___x_403_, 4, v_l_400_);
lean_ctor_set(v___x_403_, 0, v___x_892_);
v___x_1053_ = v___x_403_;
goto v_reusejp_1052_;
}
else
{
lean_object* v_reuseFailAlloc_1054_; 
v_reuseFailAlloc_1054_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1054_, 0, v___x_892_);
lean_ctor_set(v_reuseFailAlloc_1054_, 1, v_k_398_);
lean_ctor_set(v_reuseFailAlloc_1054_, 2, v_v_399_);
lean_ctor_set(v_reuseFailAlloc_1054_, 3, v_l_400_);
lean_ctor_set(v_reuseFailAlloc_1054_, 4, v_l_400_);
v___x_1053_ = v_reuseFailAlloc_1054_;
goto v_reusejp_1052_;
}
v_reusejp_1052_:
{
return v___x_1053_;
}
}
}
}
}
}
}
else
{
return v_t_397_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_NameMap_erase_spec__0___redArg___boxed(lean_object* v_k_1057_, lean_object* v_t_1058_){
_start:
{
lean_object* v_res_1059_; 
v_res_1059_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_NameMap_erase_spec__0___redArg(v_k_1057_, v_t_1058_);
lean_dec(v_k_1057_);
return v_res_1059_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_erase___redArg(lean_object* v_m_1060_, lean_object* v_n_1061_){
_start:
{
lean_object* v___x_1062_; 
v___x_1062_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_NameMap_erase_spec__0___redArg(v_n_1061_, v_m_1060_);
return v___x_1062_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_erase___redArg___boxed(lean_object* v_m_1063_, lean_object* v_n_1064_){
_start:
{
lean_object* v_res_1065_; 
v_res_1065_ = l_Lean_NameMap_erase___redArg(v_m_1063_, v_n_1064_);
lean_dec(v_n_1064_);
return v_res_1065_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_erase(lean_object* v_00_u03b1_1066_, lean_object* v_m_1067_, lean_object* v_n_1068_){
_start:
{
lean_object* v___x_1069_; 
v___x_1069_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_NameMap_erase_spec__0___redArg(v_n_1068_, v_m_1067_);
return v___x_1069_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_erase___boxed(lean_object* v_00_u03b1_1070_, lean_object* v_m_1071_, lean_object* v_n_1072_){
_start:
{
lean_object* v_res_1073_; 
v_res_1073_ = l_Lean_NameMap_erase(v_00_u03b1_1070_, v_m_1071_, v_n_1072_);
lean_dec(v_n_1072_);
return v_res_1073_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_NameMap_erase_spec__0(lean_object* v_00_u03b2_1074_, lean_object* v_k_1075_, lean_object* v_t_1076_, lean_object* v_h_1077_){
_start:
{
lean_object* v___x_1078_; 
v___x_1078_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_NameMap_erase_spec__0___redArg(v_k_1075_, v_t_1076_);
return v___x_1078_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_NameMap_erase_spec__0___boxed(lean_object* v_00_u03b2_1079_, lean_object* v_k_1080_, lean_object* v_t_1081_, lean_object* v_h_1082_){
_start:
{
lean_object* v_res_1083_; 
v_res_1083_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_NameMap_erase_spec__0(v_00_u03b2_1079_, v_k_1080_, v_t_1081_, v_h_1082_);
lean_dec(v_k_1080_);
return v_res_1083_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_NameMap_alter_spec__0___redArg(lean_object* v_f_1084_, lean_object* v_k_1085_, lean_object* v_t_1086_){
_start:
{
if (lean_obj_tag(v_t_1086_) == 0)
{
lean_object* v_size_1087_; lean_object* v_k_1088_; lean_object* v_v_1089_; lean_object* v_l_1090_; lean_object* v_r_1091_; lean_object* v___x_1093_; uint8_t v_isShared_1094_; uint8_t v_isSharedCheck_1417_; 
v_size_1087_ = lean_ctor_get(v_t_1086_, 0);
v_k_1088_ = lean_ctor_get(v_t_1086_, 1);
v_v_1089_ = lean_ctor_get(v_t_1086_, 2);
v_l_1090_ = lean_ctor_get(v_t_1086_, 3);
v_r_1091_ = lean_ctor_get(v_t_1086_, 4);
v_isSharedCheck_1417_ = !lean_is_exclusive(v_t_1086_);
if (v_isSharedCheck_1417_ == 0)
{
v___x_1093_ = v_t_1086_;
v_isShared_1094_ = v_isSharedCheck_1417_;
goto v_resetjp_1092_;
}
else
{
lean_inc(v_r_1091_);
lean_inc(v_l_1090_);
lean_inc(v_v_1089_);
lean_inc(v_k_1088_);
lean_inc(v_size_1087_);
lean_dec(v_t_1086_);
v___x_1093_ = lean_box(0);
v_isShared_1094_ = v_isSharedCheck_1417_;
goto v_resetjp_1092_;
}
v_resetjp_1092_:
{
uint8_t v___x_1095_; 
v___x_1095_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_1085_, v_k_1088_);
switch(v___x_1095_)
{
case 0:
{
lean_object* v_impl_1096_; lean_object* v___x_1097_; 
lean_del_object(v___x_1093_);
lean_dec(v_size_1087_);
v_impl_1096_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_NameMap_alter_spec__0___redArg(v_f_1084_, v_k_1085_, v_l_1090_);
v___x_1097_ = l_Std_DTreeMap_Internal_Impl_balance___redArg(v_k_1088_, v_v_1089_, v_impl_1096_, v_r_1091_);
return v___x_1097_;
}
case 1:
{
lean_object* v___x_1098_; lean_object* v___x_1099_; 
lean_dec(v_k_1088_);
v___x_1098_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1098_, 0, v_v_1089_);
v___x_1099_ = lean_apply_1(v_f_1084_, v___x_1098_);
if (lean_obj_tag(v___x_1099_) == 0)
{
lean_del_object(v___x_1093_);
lean_dec(v_size_1087_);
lean_dec(v_k_1085_);
if (lean_obj_tag(v_l_1090_) == 0)
{
if (lean_obj_tag(v_r_1091_) == 0)
{
lean_object* v_size_1100_; lean_object* v_k_1101_; lean_object* v_v_1102_; lean_object* v_l_1103_; lean_object* v_r_1104_; lean_object* v_size_1105_; lean_object* v_k_1106_; lean_object* v_v_1107_; lean_object* v_l_1108_; lean_object* v_r_1109_; lean_object* v___x_1110_; uint8_t v___x_1111_; 
v_size_1100_ = lean_ctor_get(v_l_1090_, 0);
v_k_1101_ = lean_ctor_get(v_l_1090_, 1);
v_v_1102_ = lean_ctor_get(v_l_1090_, 2);
v_l_1103_ = lean_ctor_get(v_l_1090_, 3);
v_r_1104_ = lean_ctor_get(v_l_1090_, 4);
lean_inc(v_r_1104_);
v_size_1105_ = lean_ctor_get(v_r_1091_, 0);
v_k_1106_ = lean_ctor_get(v_r_1091_, 1);
v_v_1107_ = lean_ctor_get(v_r_1091_, 2);
v_l_1108_ = lean_ctor_get(v_r_1091_, 3);
lean_inc(v_l_1108_);
v_r_1109_ = lean_ctor_get(v_r_1091_, 4);
v___x_1110_ = lean_unsigned_to_nat(1u);
v___x_1111_ = lean_nat_dec_lt(v_size_1100_, v_size_1105_);
if (v___x_1111_ == 0)
{
lean_object* v___x_1113_; uint8_t v_isShared_1114_; uint8_t v_isSharedCheck_1247_; 
lean_inc(v_l_1103_);
lean_inc(v_v_1102_);
lean_inc(v_k_1101_);
v_isSharedCheck_1247_ = !lean_is_exclusive(v_l_1090_);
if (v_isSharedCheck_1247_ == 0)
{
lean_object* v_unused_1248_; lean_object* v_unused_1249_; lean_object* v_unused_1250_; lean_object* v_unused_1251_; lean_object* v_unused_1252_; 
v_unused_1248_ = lean_ctor_get(v_l_1090_, 4);
lean_dec(v_unused_1248_);
v_unused_1249_ = lean_ctor_get(v_l_1090_, 3);
lean_dec(v_unused_1249_);
v_unused_1250_ = lean_ctor_get(v_l_1090_, 2);
lean_dec(v_unused_1250_);
v_unused_1251_ = lean_ctor_get(v_l_1090_, 1);
lean_dec(v_unused_1251_);
v_unused_1252_ = lean_ctor_get(v_l_1090_, 0);
lean_dec(v_unused_1252_);
v___x_1113_ = v_l_1090_;
v_isShared_1114_ = v_isSharedCheck_1247_;
goto v_resetjp_1112_;
}
else
{
lean_dec(v_l_1090_);
v___x_1113_ = lean_box(0);
v_isShared_1114_ = v_isSharedCheck_1247_;
goto v_resetjp_1112_;
}
v_resetjp_1112_:
{
lean_object* v___x_1115_; lean_object* v_tree_1116_; 
v___x_1115_ = l_Std_DTreeMap_Internal_Impl_maxView___redArg(v_k_1101_, v_v_1102_, v_l_1103_, v_r_1104_);
v_tree_1116_ = lean_ctor_get(v___x_1115_, 2);
lean_inc(v_tree_1116_);
if (lean_obj_tag(v_tree_1116_) == 0)
{
lean_object* v_k_1117_; lean_object* v_v_1118_; lean_object* v_size_1119_; lean_object* v___x_1120_; lean_object* v___x_1121_; uint8_t v___x_1122_; 
v_k_1117_ = lean_ctor_get(v___x_1115_, 0);
lean_inc(v_k_1117_);
v_v_1118_ = lean_ctor_get(v___x_1115_, 1);
lean_inc(v_v_1118_);
lean_dec_ref(v___x_1115_);
v_size_1119_ = lean_ctor_get(v_tree_1116_, 0);
v___x_1120_ = lean_unsigned_to_nat(3u);
v___x_1121_ = lean_nat_mul(v___x_1120_, v_size_1119_);
v___x_1122_ = lean_nat_dec_lt(v___x_1121_, v_size_1105_);
lean_dec(v___x_1121_);
if (v___x_1122_ == 0)
{
lean_object* v___x_1123_; lean_object* v___x_1124_; lean_object* v___x_1126_; 
lean_dec(v_l_1108_);
v___x_1123_ = lean_nat_add(v___x_1110_, v_size_1119_);
v___x_1124_ = lean_nat_add(v___x_1123_, v_size_1105_);
lean_dec(v___x_1123_);
if (v_isShared_1114_ == 0)
{
lean_ctor_set(v___x_1113_, 4, v_r_1091_);
lean_ctor_set(v___x_1113_, 3, v_tree_1116_);
lean_ctor_set(v___x_1113_, 2, v_v_1118_);
lean_ctor_set(v___x_1113_, 1, v_k_1117_);
lean_ctor_set(v___x_1113_, 0, v___x_1124_);
v___x_1126_ = v___x_1113_;
goto v_reusejp_1125_;
}
else
{
lean_object* v_reuseFailAlloc_1127_; 
v_reuseFailAlloc_1127_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1127_, 0, v___x_1124_);
lean_ctor_set(v_reuseFailAlloc_1127_, 1, v_k_1117_);
lean_ctor_set(v_reuseFailAlloc_1127_, 2, v_v_1118_);
lean_ctor_set(v_reuseFailAlloc_1127_, 3, v_tree_1116_);
lean_ctor_set(v_reuseFailAlloc_1127_, 4, v_r_1091_);
v___x_1126_ = v_reuseFailAlloc_1127_;
goto v_reusejp_1125_;
}
v_reusejp_1125_:
{
return v___x_1126_;
}
}
else
{
lean_object* v___x_1129_; uint8_t v_isShared_1130_; uint8_t v_isSharedCheck_1182_; 
lean_inc(v_r_1109_);
lean_inc(v_v_1107_);
lean_inc(v_k_1106_);
lean_inc(v_size_1105_);
v_isSharedCheck_1182_ = !lean_is_exclusive(v_r_1091_);
if (v_isSharedCheck_1182_ == 0)
{
lean_object* v_unused_1183_; lean_object* v_unused_1184_; lean_object* v_unused_1185_; lean_object* v_unused_1186_; lean_object* v_unused_1187_; 
v_unused_1183_ = lean_ctor_get(v_r_1091_, 4);
lean_dec(v_unused_1183_);
v_unused_1184_ = lean_ctor_get(v_r_1091_, 3);
lean_dec(v_unused_1184_);
v_unused_1185_ = lean_ctor_get(v_r_1091_, 2);
lean_dec(v_unused_1185_);
v_unused_1186_ = lean_ctor_get(v_r_1091_, 1);
lean_dec(v_unused_1186_);
v_unused_1187_ = lean_ctor_get(v_r_1091_, 0);
lean_dec(v_unused_1187_);
v___x_1129_ = v_r_1091_;
v_isShared_1130_ = v_isSharedCheck_1182_;
goto v_resetjp_1128_;
}
else
{
lean_dec(v_r_1091_);
v___x_1129_ = lean_box(0);
v_isShared_1130_ = v_isSharedCheck_1182_;
goto v_resetjp_1128_;
}
v_resetjp_1128_:
{
lean_object* v_size_1131_; lean_object* v_k_1132_; lean_object* v_v_1133_; lean_object* v_l_1134_; lean_object* v_r_1135_; lean_object* v_size_1136_; lean_object* v___x_1137_; lean_object* v___x_1138_; uint8_t v___x_1139_; 
v_size_1131_ = lean_ctor_get(v_l_1108_, 0);
v_k_1132_ = lean_ctor_get(v_l_1108_, 1);
v_v_1133_ = lean_ctor_get(v_l_1108_, 2);
v_l_1134_ = lean_ctor_get(v_l_1108_, 3);
v_r_1135_ = lean_ctor_get(v_l_1108_, 4);
v_size_1136_ = lean_ctor_get(v_r_1109_, 0);
v___x_1137_ = lean_unsigned_to_nat(2u);
v___x_1138_ = lean_nat_mul(v___x_1137_, v_size_1136_);
v___x_1139_ = lean_nat_dec_lt(v_size_1131_, v___x_1138_);
lean_dec(v___x_1138_);
if (v___x_1139_ == 0)
{
lean_object* v___x_1141_; uint8_t v_isShared_1142_; uint8_t v_isSharedCheck_1167_; 
lean_inc(v_r_1135_);
lean_inc(v_l_1134_);
lean_inc(v_v_1133_);
lean_inc(v_k_1132_);
v_isSharedCheck_1167_ = !lean_is_exclusive(v_l_1108_);
if (v_isSharedCheck_1167_ == 0)
{
lean_object* v_unused_1168_; lean_object* v_unused_1169_; lean_object* v_unused_1170_; lean_object* v_unused_1171_; lean_object* v_unused_1172_; 
v_unused_1168_ = lean_ctor_get(v_l_1108_, 4);
lean_dec(v_unused_1168_);
v_unused_1169_ = lean_ctor_get(v_l_1108_, 3);
lean_dec(v_unused_1169_);
v_unused_1170_ = lean_ctor_get(v_l_1108_, 2);
lean_dec(v_unused_1170_);
v_unused_1171_ = lean_ctor_get(v_l_1108_, 1);
lean_dec(v_unused_1171_);
v_unused_1172_ = lean_ctor_get(v_l_1108_, 0);
lean_dec(v_unused_1172_);
v___x_1141_ = v_l_1108_;
v_isShared_1142_ = v_isSharedCheck_1167_;
goto v_resetjp_1140_;
}
else
{
lean_dec(v_l_1108_);
v___x_1141_ = lean_box(0);
v_isShared_1142_ = v_isSharedCheck_1167_;
goto v_resetjp_1140_;
}
v_resetjp_1140_:
{
lean_object* v___x_1143_; lean_object* v___x_1144_; lean_object* v___y_1146_; lean_object* v___y_1147_; lean_object* v___y_1148_; lean_object* v___y_1157_; 
v___x_1143_ = lean_nat_add(v___x_1110_, v_size_1119_);
v___x_1144_ = lean_nat_add(v___x_1143_, v_size_1105_);
lean_dec(v_size_1105_);
if (lean_obj_tag(v_l_1134_) == 0)
{
lean_object* v_size_1165_; 
v_size_1165_ = lean_ctor_get(v_l_1134_, 0);
lean_inc(v_size_1165_);
v___y_1157_ = v_size_1165_;
goto v___jp_1156_;
}
else
{
lean_object* v___x_1166_; 
v___x_1166_ = lean_unsigned_to_nat(0u);
v___y_1157_ = v___x_1166_;
goto v___jp_1156_;
}
v___jp_1145_:
{
lean_object* v___x_1149_; lean_object* v___x_1151_; 
v___x_1149_ = lean_nat_add(v___y_1147_, v___y_1148_);
lean_dec(v___y_1148_);
lean_dec(v___y_1147_);
if (v_isShared_1142_ == 0)
{
lean_ctor_set(v___x_1141_, 4, v_r_1109_);
lean_ctor_set(v___x_1141_, 3, v_r_1135_);
lean_ctor_set(v___x_1141_, 2, v_v_1107_);
lean_ctor_set(v___x_1141_, 1, v_k_1106_);
lean_ctor_set(v___x_1141_, 0, v___x_1149_);
v___x_1151_ = v___x_1141_;
goto v_reusejp_1150_;
}
else
{
lean_object* v_reuseFailAlloc_1155_; 
v_reuseFailAlloc_1155_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1155_, 0, v___x_1149_);
lean_ctor_set(v_reuseFailAlloc_1155_, 1, v_k_1106_);
lean_ctor_set(v_reuseFailAlloc_1155_, 2, v_v_1107_);
lean_ctor_set(v_reuseFailAlloc_1155_, 3, v_r_1135_);
lean_ctor_set(v_reuseFailAlloc_1155_, 4, v_r_1109_);
v___x_1151_ = v_reuseFailAlloc_1155_;
goto v_reusejp_1150_;
}
v_reusejp_1150_:
{
lean_object* v___x_1153_; 
if (v_isShared_1130_ == 0)
{
lean_ctor_set(v___x_1129_, 4, v___x_1151_);
lean_ctor_set(v___x_1129_, 3, v___y_1146_);
lean_ctor_set(v___x_1129_, 2, v_v_1133_);
lean_ctor_set(v___x_1129_, 1, v_k_1132_);
lean_ctor_set(v___x_1129_, 0, v___x_1144_);
v___x_1153_ = v___x_1129_;
goto v_reusejp_1152_;
}
else
{
lean_object* v_reuseFailAlloc_1154_; 
v_reuseFailAlloc_1154_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1154_, 0, v___x_1144_);
lean_ctor_set(v_reuseFailAlloc_1154_, 1, v_k_1132_);
lean_ctor_set(v_reuseFailAlloc_1154_, 2, v_v_1133_);
lean_ctor_set(v_reuseFailAlloc_1154_, 3, v___y_1146_);
lean_ctor_set(v_reuseFailAlloc_1154_, 4, v___x_1151_);
v___x_1153_ = v_reuseFailAlloc_1154_;
goto v_reusejp_1152_;
}
v_reusejp_1152_:
{
return v___x_1153_;
}
}
}
v___jp_1156_:
{
lean_object* v___x_1158_; lean_object* v___x_1160_; 
v___x_1158_ = lean_nat_add(v___x_1143_, v___y_1157_);
lean_dec(v___y_1157_);
lean_dec(v___x_1143_);
if (v_isShared_1114_ == 0)
{
lean_ctor_set(v___x_1113_, 4, v_l_1134_);
lean_ctor_set(v___x_1113_, 3, v_tree_1116_);
lean_ctor_set(v___x_1113_, 2, v_v_1118_);
lean_ctor_set(v___x_1113_, 1, v_k_1117_);
lean_ctor_set(v___x_1113_, 0, v___x_1158_);
v___x_1160_ = v___x_1113_;
goto v_reusejp_1159_;
}
else
{
lean_object* v_reuseFailAlloc_1164_; 
v_reuseFailAlloc_1164_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1164_, 0, v___x_1158_);
lean_ctor_set(v_reuseFailAlloc_1164_, 1, v_k_1117_);
lean_ctor_set(v_reuseFailAlloc_1164_, 2, v_v_1118_);
lean_ctor_set(v_reuseFailAlloc_1164_, 3, v_tree_1116_);
lean_ctor_set(v_reuseFailAlloc_1164_, 4, v_l_1134_);
v___x_1160_ = v_reuseFailAlloc_1164_;
goto v_reusejp_1159_;
}
v_reusejp_1159_:
{
lean_object* v___x_1161_; 
v___x_1161_ = lean_nat_add(v___x_1110_, v_size_1136_);
if (lean_obj_tag(v_r_1135_) == 0)
{
lean_object* v_size_1162_; 
v_size_1162_ = lean_ctor_get(v_r_1135_, 0);
lean_inc(v_size_1162_);
v___y_1146_ = v___x_1160_;
v___y_1147_ = v___x_1161_;
v___y_1148_ = v_size_1162_;
goto v___jp_1145_;
}
else
{
lean_object* v___x_1163_; 
v___x_1163_ = lean_unsigned_to_nat(0u);
v___y_1146_ = v___x_1160_;
v___y_1147_ = v___x_1161_;
v___y_1148_ = v___x_1163_;
goto v___jp_1145_;
}
}
}
}
}
else
{
lean_object* v___x_1173_; lean_object* v___x_1174_; lean_object* v___x_1175_; lean_object* v___x_1177_; 
v___x_1173_ = lean_nat_add(v___x_1110_, v_size_1119_);
v___x_1174_ = lean_nat_add(v___x_1173_, v_size_1105_);
lean_dec(v_size_1105_);
v___x_1175_ = lean_nat_add(v___x_1173_, v_size_1131_);
lean_dec(v___x_1173_);
if (v_isShared_1130_ == 0)
{
lean_ctor_set(v___x_1129_, 4, v_l_1108_);
lean_ctor_set(v___x_1129_, 3, v_tree_1116_);
lean_ctor_set(v___x_1129_, 2, v_v_1118_);
lean_ctor_set(v___x_1129_, 1, v_k_1117_);
lean_ctor_set(v___x_1129_, 0, v___x_1175_);
v___x_1177_ = v___x_1129_;
goto v_reusejp_1176_;
}
else
{
lean_object* v_reuseFailAlloc_1181_; 
v_reuseFailAlloc_1181_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1181_, 0, v___x_1175_);
lean_ctor_set(v_reuseFailAlloc_1181_, 1, v_k_1117_);
lean_ctor_set(v_reuseFailAlloc_1181_, 2, v_v_1118_);
lean_ctor_set(v_reuseFailAlloc_1181_, 3, v_tree_1116_);
lean_ctor_set(v_reuseFailAlloc_1181_, 4, v_l_1108_);
v___x_1177_ = v_reuseFailAlloc_1181_;
goto v_reusejp_1176_;
}
v_reusejp_1176_:
{
lean_object* v___x_1179_; 
if (v_isShared_1114_ == 0)
{
lean_ctor_set(v___x_1113_, 4, v_r_1109_);
lean_ctor_set(v___x_1113_, 3, v___x_1177_);
lean_ctor_set(v___x_1113_, 2, v_v_1107_);
lean_ctor_set(v___x_1113_, 1, v_k_1106_);
lean_ctor_set(v___x_1113_, 0, v___x_1174_);
v___x_1179_ = v___x_1113_;
goto v_reusejp_1178_;
}
else
{
lean_object* v_reuseFailAlloc_1180_; 
v_reuseFailAlloc_1180_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1180_, 0, v___x_1174_);
lean_ctor_set(v_reuseFailAlloc_1180_, 1, v_k_1106_);
lean_ctor_set(v_reuseFailAlloc_1180_, 2, v_v_1107_);
lean_ctor_set(v_reuseFailAlloc_1180_, 3, v___x_1177_);
lean_ctor_set(v_reuseFailAlloc_1180_, 4, v_r_1109_);
v___x_1179_ = v_reuseFailAlloc_1180_;
goto v_reusejp_1178_;
}
v_reusejp_1178_:
{
return v___x_1179_;
}
}
}
}
}
}
else
{
lean_object* v___x_1189_; uint8_t v_isShared_1190_; uint8_t v_isSharedCheck_1241_; 
lean_inc(v_r_1109_);
lean_inc(v_v_1107_);
lean_inc(v_k_1106_);
lean_inc(v_size_1105_);
v_isSharedCheck_1241_ = !lean_is_exclusive(v_r_1091_);
if (v_isSharedCheck_1241_ == 0)
{
lean_object* v_unused_1242_; lean_object* v_unused_1243_; lean_object* v_unused_1244_; lean_object* v_unused_1245_; lean_object* v_unused_1246_; 
v_unused_1242_ = lean_ctor_get(v_r_1091_, 4);
lean_dec(v_unused_1242_);
v_unused_1243_ = lean_ctor_get(v_r_1091_, 3);
lean_dec(v_unused_1243_);
v_unused_1244_ = lean_ctor_get(v_r_1091_, 2);
lean_dec(v_unused_1244_);
v_unused_1245_ = lean_ctor_get(v_r_1091_, 1);
lean_dec(v_unused_1245_);
v_unused_1246_ = lean_ctor_get(v_r_1091_, 0);
lean_dec(v_unused_1246_);
v___x_1189_ = v_r_1091_;
v_isShared_1190_ = v_isSharedCheck_1241_;
goto v_resetjp_1188_;
}
else
{
lean_dec(v_r_1091_);
v___x_1189_ = lean_box(0);
v_isShared_1190_ = v_isSharedCheck_1241_;
goto v_resetjp_1188_;
}
v_resetjp_1188_:
{
if (lean_obj_tag(v_l_1108_) == 0)
{
if (lean_obj_tag(v_r_1109_) == 0)
{
lean_object* v_k_1191_; lean_object* v_v_1192_; lean_object* v_size_1193_; lean_object* v___x_1194_; lean_object* v___x_1195_; lean_object* v___x_1197_; 
v_k_1191_ = lean_ctor_get(v___x_1115_, 0);
lean_inc(v_k_1191_);
v_v_1192_ = lean_ctor_get(v___x_1115_, 1);
lean_inc(v_v_1192_);
lean_dec_ref(v___x_1115_);
v_size_1193_ = lean_ctor_get(v_l_1108_, 0);
v___x_1194_ = lean_nat_add(v___x_1110_, v_size_1105_);
lean_dec(v_size_1105_);
v___x_1195_ = lean_nat_add(v___x_1110_, v_size_1193_);
if (v_isShared_1190_ == 0)
{
lean_ctor_set(v___x_1189_, 4, v_l_1108_);
lean_ctor_set(v___x_1189_, 3, v_tree_1116_);
lean_ctor_set(v___x_1189_, 2, v_v_1192_);
lean_ctor_set(v___x_1189_, 1, v_k_1191_);
lean_ctor_set(v___x_1189_, 0, v___x_1195_);
v___x_1197_ = v___x_1189_;
goto v_reusejp_1196_;
}
else
{
lean_object* v_reuseFailAlloc_1201_; 
v_reuseFailAlloc_1201_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1201_, 0, v___x_1195_);
lean_ctor_set(v_reuseFailAlloc_1201_, 1, v_k_1191_);
lean_ctor_set(v_reuseFailAlloc_1201_, 2, v_v_1192_);
lean_ctor_set(v_reuseFailAlloc_1201_, 3, v_tree_1116_);
lean_ctor_set(v_reuseFailAlloc_1201_, 4, v_l_1108_);
v___x_1197_ = v_reuseFailAlloc_1201_;
goto v_reusejp_1196_;
}
v_reusejp_1196_:
{
lean_object* v___x_1199_; 
if (v_isShared_1114_ == 0)
{
lean_ctor_set(v___x_1113_, 4, v_r_1109_);
lean_ctor_set(v___x_1113_, 3, v___x_1197_);
lean_ctor_set(v___x_1113_, 2, v_v_1107_);
lean_ctor_set(v___x_1113_, 1, v_k_1106_);
lean_ctor_set(v___x_1113_, 0, v___x_1194_);
v___x_1199_ = v___x_1113_;
goto v_reusejp_1198_;
}
else
{
lean_object* v_reuseFailAlloc_1200_; 
v_reuseFailAlloc_1200_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1200_, 0, v___x_1194_);
lean_ctor_set(v_reuseFailAlloc_1200_, 1, v_k_1106_);
lean_ctor_set(v_reuseFailAlloc_1200_, 2, v_v_1107_);
lean_ctor_set(v_reuseFailAlloc_1200_, 3, v___x_1197_);
lean_ctor_set(v_reuseFailAlloc_1200_, 4, v_r_1109_);
v___x_1199_ = v_reuseFailAlloc_1200_;
goto v_reusejp_1198_;
}
v_reusejp_1198_:
{
return v___x_1199_;
}
}
}
else
{
lean_object* v_k_1202_; lean_object* v_v_1203_; lean_object* v_k_1204_; lean_object* v_v_1205_; lean_object* v___x_1207_; uint8_t v_isShared_1208_; uint8_t v_isSharedCheck_1219_; 
lean_dec(v_size_1105_);
v_k_1202_ = lean_ctor_get(v___x_1115_, 0);
lean_inc(v_k_1202_);
v_v_1203_ = lean_ctor_get(v___x_1115_, 1);
lean_inc(v_v_1203_);
lean_dec_ref(v___x_1115_);
v_k_1204_ = lean_ctor_get(v_l_1108_, 1);
v_v_1205_ = lean_ctor_get(v_l_1108_, 2);
v_isSharedCheck_1219_ = !lean_is_exclusive(v_l_1108_);
if (v_isSharedCheck_1219_ == 0)
{
lean_object* v_unused_1220_; lean_object* v_unused_1221_; lean_object* v_unused_1222_; 
v_unused_1220_ = lean_ctor_get(v_l_1108_, 4);
lean_dec(v_unused_1220_);
v_unused_1221_ = lean_ctor_get(v_l_1108_, 3);
lean_dec(v_unused_1221_);
v_unused_1222_ = lean_ctor_get(v_l_1108_, 0);
lean_dec(v_unused_1222_);
v___x_1207_ = v_l_1108_;
v_isShared_1208_ = v_isSharedCheck_1219_;
goto v_resetjp_1206_;
}
else
{
lean_inc(v_v_1205_);
lean_inc(v_k_1204_);
lean_dec(v_l_1108_);
v___x_1207_ = lean_box(0);
v_isShared_1208_ = v_isSharedCheck_1219_;
goto v_resetjp_1206_;
}
v_resetjp_1206_:
{
lean_object* v___x_1209_; lean_object* v___x_1211_; 
v___x_1209_ = lean_unsigned_to_nat(3u);
if (v_isShared_1208_ == 0)
{
lean_ctor_set(v___x_1207_, 4, v_r_1109_);
lean_ctor_set(v___x_1207_, 3, v_r_1109_);
lean_ctor_set(v___x_1207_, 2, v_v_1203_);
lean_ctor_set(v___x_1207_, 1, v_k_1202_);
lean_ctor_set(v___x_1207_, 0, v___x_1110_);
v___x_1211_ = v___x_1207_;
goto v_reusejp_1210_;
}
else
{
lean_object* v_reuseFailAlloc_1218_; 
v_reuseFailAlloc_1218_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1218_, 0, v___x_1110_);
lean_ctor_set(v_reuseFailAlloc_1218_, 1, v_k_1202_);
lean_ctor_set(v_reuseFailAlloc_1218_, 2, v_v_1203_);
lean_ctor_set(v_reuseFailAlloc_1218_, 3, v_r_1109_);
lean_ctor_set(v_reuseFailAlloc_1218_, 4, v_r_1109_);
v___x_1211_ = v_reuseFailAlloc_1218_;
goto v_reusejp_1210_;
}
v_reusejp_1210_:
{
lean_object* v___x_1213_; 
if (v_isShared_1190_ == 0)
{
lean_ctor_set(v___x_1189_, 3, v_r_1109_);
lean_ctor_set(v___x_1189_, 0, v___x_1110_);
v___x_1213_ = v___x_1189_;
goto v_reusejp_1212_;
}
else
{
lean_object* v_reuseFailAlloc_1217_; 
v_reuseFailAlloc_1217_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1217_, 0, v___x_1110_);
lean_ctor_set(v_reuseFailAlloc_1217_, 1, v_k_1106_);
lean_ctor_set(v_reuseFailAlloc_1217_, 2, v_v_1107_);
lean_ctor_set(v_reuseFailAlloc_1217_, 3, v_r_1109_);
lean_ctor_set(v_reuseFailAlloc_1217_, 4, v_r_1109_);
v___x_1213_ = v_reuseFailAlloc_1217_;
goto v_reusejp_1212_;
}
v_reusejp_1212_:
{
lean_object* v___x_1215_; 
if (v_isShared_1114_ == 0)
{
lean_ctor_set(v___x_1113_, 4, v___x_1213_);
lean_ctor_set(v___x_1113_, 3, v___x_1211_);
lean_ctor_set(v___x_1113_, 2, v_v_1205_);
lean_ctor_set(v___x_1113_, 1, v_k_1204_);
lean_ctor_set(v___x_1113_, 0, v___x_1209_);
v___x_1215_ = v___x_1113_;
goto v_reusejp_1214_;
}
else
{
lean_object* v_reuseFailAlloc_1216_; 
v_reuseFailAlloc_1216_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1216_, 0, v___x_1209_);
lean_ctor_set(v_reuseFailAlloc_1216_, 1, v_k_1204_);
lean_ctor_set(v_reuseFailAlloc_1216_, 2, v_v_1205_);
lean_ctor_set(v_reuseFailAlloc_1216_, 3, v___x_1211_);
lean_ctor_set(v_reuseFailAlloc_1216_, 4, v___x_1213_);
v___x_1215_ = v_reuseFailAlloc_1216_;
goto v_reusejp_1214_;
}
v_reusejp_1214_:
{
return v___x_1215_;
}
}
}
}
}
}
else
{
if (lean_obj_tag(v_r_1109_) == 0)
{
lean_object* v_k_1223_; lean_object* v_v_1224_; lean_object* v___x_1225_; lean_object* v___x_1227_; 
lean_dec(v_size_1105_);
v_k_1223_ = lean_ctor_get(v___x_1115_, 0);
lean_inc(v_k_1223_);
v_v_1224_ = lean_ctor_get(v___x_1115_, 1);
lean_inc(v_v_1224_);
lean_dec_ref(v___x_1115_);
v___x_1225_ = lean_unsigned_to_nat(3u);
if (v_isShared_1190_ == 0)
{
lean_ctor_set(v___x_1189_, 4, v_l_1108_);
lean_ctor_set(v___x_1189_, 2, v_v_1224_);
lean_ctor_set(v___x_1189_, 1, v_k_1223_);
lean_ctor_set(v___x_1189_, 0, v___x_1110_);
v___x_1227_ = v___x_1189_;
goto v_reusejp_1226_;
}
else
{
lean_object* v_reuseFailAlloc_1231_; 
v_reuseFailAlloc_1231_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1231_, 0, v___x_1110_);
lean_ctor_set(v_reuseFailAlloc_1231_, 1, v_k_1223_);
lean_ctor_set(v_reuseFailAlloc_1231_, 2, v_v_1224_);
lean_ctor_set(v_reuseFailAlloc_1231_, 3, v_l_1108_);
lean_ctor_set(v_reuseFailAlloc_1231_, 4, v_l_1108_);
v___x_1227_ = v_reuseFailAlloc_1231_;
goto v_reusejp_1226_;
}
v_reusejp_1226_:
{
lean_object* v___x_1229_; 
if (v_isShared_1114_ == 0)
{
lean_ctor_set(v___x_1113_, 4, v_r_1109_);
lean_ctor_set(v___x_1113_, 3, v___x_1227_);
lean_ctor_set(v___x_1113_, 2, v_v_1107_);
lean_ctor_set(v___x_1113_, 1, v_k_1106_);
lean_ctor_set(v___x_1113_, 0, v___x_1225_);
v___x_1229_ = v___x_1113_;
goto v_reusejp_1228_;
}
else
{
lean_object* v_reuseFailAlloc_1230_; 
v_reuseFailAlloc_1230_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1230_, 0, v___x_1225_);
lean_ctor_set(v_reuseFailAlloc_1230_, 1, v_k_1106_);
lean_ctor_set(v_reuseFailAlloc_1230_, 2, v_v_1107_);
lean_ctor_set(v_reuseFailAlloc_1230_, 3, v___x_1227_);
lean_ctor_set(v_reuseFailAlloc_1230_, 4, v_r_1109_);
v___x_1229_ = v_reuseFailAlloc_1230_;
goto v_reusejp_1228_;
}
v_reusejp_1228_:
{
return v___x_1229_;
}
}
}
else
{
lean_object* v_k_1232_; lean_object* v_v_1233_; lean_object* v___x_1235_; 
v_k_1232_ = lean_ctor_get(v___x_1115_, 0);
lean_inc(v_k_1232_);
v_v_1233_ = lean_ctor_get(v___x_1115_, 1);
lean_inc(v_v_1233_);
lean_dec_ref(v___x_1115_);
if (v_isShared_1190_ == 0)
{
lean_ctor_set(v___x_1189_, 3, v_r_1109_);
v___x_1235_ = v___x_1189_;
goto v_reusejp_1234_;
}
else
{
lean_object* v_reuseFailAlloc_1240_; 
v_reuseFailAlloc_1240_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1240_, 0, v_size_1105_);
lean_ctor_set(v_reuseFailAlloc_1240_, 1, v_k_1106_);
lean_ctor_set(v_reuseFailAlloc_1240_, 2, v_v_1107_);
lean_ctor_set(v_reuseFailAlloc_1240_, 3, v_r_1109_);
lean_ctor_set(v_reuseFailAlloc_1240_, 4, v_r_1109_);
v___x_1235_ = v_reuseFailAlloc_1240_;
goto v_reusejp_1234_;
}
v_reusejp_1234_:
{
lean_object* v___x_1236_; lean_object* v___x_1238_; 
v___x_1236_ = lean_unsigned_to_nat(2u);
if (v_isShared_1114_ == 0)
{
lean_ctor_set(v___x_1113_, 4, v___x_1235_);
lean_ctor_set(v___x_1113_, 3, v_r_1109_);
lean_ctor_set(v___x_1113_, 2, v_v_1233_);
lean_ctor_set(v___x_1113_, 1, v_k_1232_);
lean_ctor_set(v___x_1113_, 0, v___x_1236_);
v___x_1238_ = v___x_1113_;
goto v_reusejp_1237_;
}
else
{
lean_object* v_reuseFailAlloc_1239_; 
v_reuseFailAlloc_1239_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1239_, 0, v___x_1236_);
lean_ctor_set(v_reuseFailAlloc_1239_, 1, v_k_1232_);
lean_ctor_set(v_reuseFailAlloc_1239_, 2, v_v_1233_);
lean_ctor_set(v_reuseFailAlloc_1239_, 3, v_r_1109_);
lean_ctor_set(v_reuseFailAlloc_1239_, 4, v___x_1235_);
v___x_1238_ = v_reuseFailAlloc_1239_;
goto v_reusejp_1237_;
}
v_reusejp_1237_:
{
return v___x_1238_;
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
lean_object* v___x_1254_; uint8_t v_isShared_1255_; uint8_t v_isSharedCheck_1405_; 
lean_inc(v_r_1109_);
lean_inc(v_v_1107_);
lean_inc(v_k_1106_);
v_isSharedCheck_1405_ = !lean_is_exclusive(v_r_1091_);
if (v_isSharedCheck_1405_ == 0)
{
lean_object* v_unused_1406_; lean_object* v_unused_1407_; lean_object* v_unused_1408_; lean_object* v_unused_1409_; lean_object* v_unused_1410_; 
v_unused_1406_ = lean_ctor_get(v_r_1091_, 4);
lean_dec(v_unused_1406_);
v_unused_1407_ = lean_ctor_get(v_r_1091_, 3);
lean_dec(v_unused_1407_);
v_unused_1408_ = lean_ctor_get(v_r_1091_, 2);
lean_dec(v_unused_1408_);
v_unused_1409_ = lean_ctor_get(v_r_1091_, 1);
lean_dec(v_unused_1409_);
v_unused_1410_ = lean_ctor_get(v_r_1091_, 0);
lean_dec(v_unused_1410_);
v___x_1254_ = v_r_1091_;
v_isShared_1255_ = v_isSharedCheck_1405_;
goto v_resetjp_1253_;
}
else
{
lean_dec(v_r_1091_);
v___x_1254_ = lean_box(0);
v_isShared_1255_ = v_isSharedCheck_1405_;
goto v_resetjp_1253_;
}
v_resetjp_1253_:
{
lean_object* v___x_1256_; lean_object* v_tree_1257_; 
v___x_1256_ = l_Std_DTreeMap_Internal_Impl_minView___redArg(v_k_1106_, v_v_1107_, v_l_1108_, v_r_1109_);
v_tree_1257_ = lean_ctor_get(v___x_1256_, 2);
lean_inc(v_tree_1257_);
if (lean_obj_tag(v_tree_1257_) == 0)
{
lean_object* v_k_1258_; lean_object* v_v_1259_; lean_object* v_size_1260_; lean_object* v___x_1261_; lean_object* v___x_1262_; uint8_t v___x_1263_; 
v_k_1258_ = lean_ctor_get(v___x_1256_, 0);
lean_inc(v_k_1258_);
v_v_1259_ = lean_ctor_get(v___x_1256_, 1);
lean_inc(v_v_1259_);
lean_dec_ref(v___x_1256_);
v_size_1260_ = lean_ctor_get(v_tree_1257_, 0);
v___x_1261_ = lean_unsigned_to_nat(3u);
v___x_1262_ = lean_nat_mul(v___x_1261_, v_size_1260_);
v___x_1263_ = lean_nat_dec_lt(v___x_1262_, v_size_1100_);
lean_dec(v___x_1262_);
if (v___x_1263_ == 0)
{
lean_object* v___x_1264_; lean_object* v___x_1265_; lean_object* v___x_1267_; 
lean_dec(v_r_1104_);
v___x_1264_ = lean_nat_add(v___x_1110_, v_size_1100_);
v___x_1265_ = lean_nat_add(v___x_1264_, v_size_1260_);
lean_dec(v___x_1264_);
if (v_isShared_1255_ == 0)
{
lean_ctor_set(v___x_1254_, 4, v_tree_1257_);
lean_ctor_set(v___x_1254_, 3, v_l_1090_);
lean_ctor_set(v___x_1254_, 2, v_v_1259_);
lean_ctor_set(v___x_1254_, 1, v_k_1258_);
lean_ctor_set(v___x_1254_, 0, v___x_1265_);
v___x_1267_ = v___x_1254_;
goto v_reusejp_1266_;
}
else
{
lean_object* v_reuseFailAlloc_1268_; 
v_reuseFailAlloc_1268_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1268_, 0, v___x_1265_);
lean_ctor_set(v_reuseFailAlloc_1268_, 1, v_k_1258_);
lean_ctor_set(v_reuseFailAlloc_1268_, 2, v_v_1259_);
lean_ctor_set(v_reuseFailAlloc_1268_, 3, v_l_1090_);
lean_ctor_set(v_reuseFailAlloc_1268_, 4, v_tree_1257_);
v___x_1267_ = v_reuseFailAlloc_1268_;
goto v_reusejp_1266_;
}
v_reusejp_1266_:
{
return v___x_1267_;
}
}
else
{
lean_object* v___x_1270_; uint8_t v_isShared_1271_; uint8_t v_isSharedCheck_1334_; 
lean_inc(v_l_1103_);
lean_inc(v_v_1102_);
lean_inc(v_k_1101_);
lean_inc(v_size_1100_);
v_isSharedCheck_1334_ = !lean_is_exclusive(v_l_1090_);
if (v_isSharedCheck_1334_ == 0)
{
lean_object* v_unused_1335_; lean_object* v_unused_1336_; lean_object* v_unused_1337_; lean_object* v_unused_1338_; lean_object* v_unused_1339_; 
v_unused_1335_ = lean_ctor_get(v_l_1090_, 4);
lean_dec(v_unused_1335_);
v_unused_1336_ = lean_ctor_get(v_l_1090_, 3);
lean_dec(v_unused_1336_);
v_unused_1337_ = lean_ctor_get(v_l_1090_, 2);
lean_dec(v_unused_1337_);
v_unused_1338_ = lean_ctor_get(v_l_1090_, 1);
lean_dec(v_unused_1338_);
v_unused_1339_ = lean_ctor_get(v_l_1090_, 0);
lean_dec(v_unused_1339_);
v___x_1270_ = v_l_1090_;
v_isShared_1271_ = v_isSharedCheck_1334_;
goto v_resetjp_1269_;
}
else
{
lean_dec(v_l_1090_);
v___x_1270_ = lean_box(0);
v_isShared_1271_ = v_isSharedCheck_1334_;
goto v_resetjp_1269_;
}
v_resetjp_1269_:
{
lean_object* v_size_1272_; lean_object* v_size_1273_; lean_object* v_k_1274_; lean_object* v_v_1275_; lean_object* v_l_1276_; lean_object* v_r_1277_; lean_object* v___x_1278_; lean_object* v___x_1279_; uint8_t v___x_1280_; 
v_size_1272_ = lean_ctor_get(v_l_1103_, 0);
v_size_1273_ = lean_ctor_get(v_r_1104_, 0);
v_k_1274_ = lean_ctor_get(v_r_1104_, 1);
v_v_1275_ = lean_ctor_get(v_r_1104_, 2);
v_l_1276_ = lean_ctor_get(v_r_1104_, 3);
v_r_1277_ = lean_ctor_get(v_r_1104_, 4);
v___x_1278_ = lean_unsigned_to_nat(2u);
v___x_1279_ = lean_nat_mul(v___x_1278_, v_size_1272_);
v___x_1280_ = lean_nat_dec_lt(v_size_1273_, v___x_1279_);
lean_dec(v___x_1279_);
if (v___x_1280_ == 0)
{
lean_object* v___x_1282_; uint8_t v_isShared_1283_; uint8_t v_isSharedCheck_1318_; 
lean_inc(v_r_1277_);
lean_inc(v_l_1276_);
lean_inc(v_v_1275_);
lean_inc(v_k_1274_);
lean_del_object(v___x_1270_);
v_isSharedCheck_1318_ = !lean_is_exclusive(v_r_1104_);
if (v_isSharedCheck_1318_ == 0)
{
lean_object* v_unused_1319_; lean_object* v_unused_1320_; lean_object* v_unused_1321_; lean_object* v_unused_1322_; lean_object* v_unused_1323_; 
v_unused_1319_ = lean_ctor_get(v_r_1104_, 4);
lean_dec(v_unused_1319_);
v_unused_1320_ = lean_ctor_get(v_r_1104_, 3);
lean_dec(v_unused_1320_);
v_unused_1321_ = lean_ctor_get(v_r_1104_, 2);
lean_dec(v_unused_1321_);
v_unused_1322_ = lean_ctor_get(v_r_1104_, 1);
lean_dec(v_unused_1322_);
v_unused_1323_ = lean_ctor_get(v_r_1104_, 0);
lean_dec(v_unused_1323_);
v___x_1282_ = v_r_1104_;
v_isShared_1283_ = v_isSharedCheck_1318_;
goto v_resetjp_1281_;
}
else
{
lean_dec(v_r_1104_);
v___x_1282_ = lean_box(0);
v_isShared_1283_ = v_isSharedCheck_1318_;
goto v_resetjp_1281_;
}
v_resetjp_1281_:
{
lean_object* v___x_1284_; lean_object* v___x_1285_; lean_object* v___y_1287_; lean_object* v___y_1288_; lean_object* v___y_1289_; lean_object* v___x_1306_; lean_object* v___y_1308_; 
v___x_1284_ = lean_nat_add(v___x_1110_, v_size_1100_);
lean_dec(v_size_1100_);
v___x_1285_ = lean_nat_add(v___x_1284_, v_size_1260_);
lean_dec(v___x_1284_);
v___x_1306_ = lean_nat_add(v___x_1110_, v_size_1272_);
if (lean_obj_tag(v_l_1276_) == 0)
{
lean_object* v_size_1316_; 
v_size_1316_ = lean_ctor_get(v_l_1276_, 0);
lean_inc(v_size_1316_);
v___y_1308_ = v_size_1316_;
goto v___jp_1307_;
}
else
{
lean_object* v___x_1317_; 
v___x_1317_ = lean_unsigned_to_nat(0u);
v___y_1308_ = v___x_1317_;
goto v___jp_1307_;
}
v___jp_1286_:
{
lean_object* v___x_1290_; lean_object* v___x_1292_; 
v___x_1290_ = lean_nat_add(v___y_1288_, v___y_1289_);
lean_dec(v___y_1289_);
lean_dec(v___y_1288_);
lean_inc_ref(v_tree_1257_);
if (v_isShared_1283_ == 0)
{
lean_ctor_set(v___x_1282_, 4, v_tree_1257_);
lean_ctor_set(v___x_1282_, 3, v_r_1277_);
lean_ctor_set(v___x_1282_, 2, v_v_1259_);
lean_ctor_set(v___x_1282_, 1, v_k_1258_);
lean_ctor_set(v___x_1282_, 0, v___x_1290_);
v___x_1292_ = v___x_1282_;
goto v_reusejp_1291_;
}
else
{
lean_object* v_reuseFailAlloc_1305_; 
v_reuseFailAlloc_1305_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1305_, 0, v___x_1290_);
lean_ctor_set(v_reuseFailAlloc_1305_, 1, v_k_1258_);
lean_ctor_set(v_reuseFailAlloc_1305_, 2, v_v_1259_);
lean_ctor_set(v_reuseFailAlloc_1305_, 3, v_r_1277_);
lean_ctor_set(v_reuseFailAlloc_1305_, 4, v_tree_1257_);
v___x_1292_ = v_reuseFailAlloc_1305_;
goto v_reusejp_1291_;
}
v_reusejp_1291_:
{
lean_object* v___x_1294_; uint8_t v_isShared_1295_; uint8_t v_isSharedCheck_1299_; 
v_isSharedCheck_1299_ = !lean_is_exclusive(v_tree_1257_);
if (v_isSharedCheck_1299_ == 0)
{
lean_object* v_unused_1300_; lean_object* v_unused_1301_; lean_object* v_unused_1302_; lean_object* v_unused_1303_; lean_object* v_unused_1304_; 
v_unused_1300_ = lean_ctor_get(v_tree_1257_, 4);
lean_dec(v_unused_1300_);
v_unused_1301_ = lean_ctor_get(v_tree_1257_, 3);
lean_dec(v_unused_1301_);
v_unused_1302_ = lean_ctor_get(v_tree_1257_, 2);
lean_dec(v_unused_1302_);
v_unused_1303_ = lean_ctor_get(v_tree_1257_, 1);
lean_dec(v_unused_1303_);
v_unused_1304_ = lean_ctor_get(v_tree_1257_, 0);
lean_dec(v_unused_1304_);
v___x_1294_ = v_tree_1257_;
v_isShared_1295_ = v_isSharedCheck_1299_;
goto v_resetjp_1293_;
}
else
{
lean_dec(v_tree_1257_);
v___x_1294_ = lean_box(0);
v_isShared_1295_ = v_isSharedCheck_1299_;
goto v_resetjp_1293_;
}
v_resetjp_1293_:
{
lean_object* v___x_1297_; 
if (v_isShared_1295_ == 0)
{
lean_ctor_set(v___x_1294_, 4, v___x_1292_);
lean_ctor_set(v___x_1294_, 3, v___y_1287_);
lean_ctor_set(v___x_1294_, 2, v_v_1275_);
lean_ctor_set(v___x_1294_, 1, v_k_1274_);
lean_ctor_set(v___x_1294_, 0, v___x_1285_);
v___x_1297_ = v___x_1294_;
goto v_reusejp_1296_;
}
else
{
lean_object* v_reuseFailAlloc_1298_; 
v_reuseFailAlloc_1298_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1298_, 0, v___x_1285_);
lean_ctor_set(v_reuseFailAlloc_1298_, 1, v_k_1274_);
lean_ctor_set(v_reuseFailAlloc_1298_, 2, v_v_1275_);
lean_ctor_set(v_reuseFailAlloc_1298_, 3, v___y_1287_);
lean_ctor_set(v_reuseFailAlloc_1298_, 4, v___x_1292_);
v___x_1297_ = v_reuseFailAlloc_1298_;
goto v_reusejp_1296_;
}
v_reusejp_1296_:
{
return v___x_1297_;
}
}
}
}
v___jp_1307_:
{
lean_object* v___x_1309_; lean_object* v___x_1311_; 
v___x_1309_ = lean_nat_add(v___x_1306_, v___y_1308_);
lean_dec(v___y_1308_);
lean_dec(v___x_1306_);
if (v_isShared_1255_ == 0)
{
lean_ctor_set(v___x_1254_, 4, v_l_1276_);
lean_ctor_set(v___x_1254_, 3, v_l_1103_);
lean_ctor_set(v___x_1254_, 2, v_v_1102_);
lean_ctor_set(v___x_1254_, 1, v_k_1101_);
lean_ctor_set(v___x_1254_, 0, v___x_1309_);
v___x_1311_ = v___x_1254_;
goto v_reusejp_1310_;
}
else
{
lean_object* v_reuseFailAlloc_1315_; 
v_reuseFailAlloc_1315_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1315_, 0, v___x_1309_);
lean_ctor_set(v_reuseFailAlloc_1315_, 1, v_k_1101_);
lean_ctor_set(v_reuseFailAlloc_1315_, 2, v_v_1102_);
lean_ctor_set(v_reuseFailAlloc_1315_, 3, v_l_1103_);
lean_ctor_set(v_reuseFailAlloc_1315_, 4, v_l_1276_);
v___x_1311_ = v_reuseFailAlloc_1315_;
goto v_reusejp_1310_;
}
v_reusejp_1310_:
{
lean_object* v___x_1312_; 
v___x_1312_ = lean_nat_add(v___x_1110_, v_size_1260_);
if (lean_obj_tag(v_r_1277_) == 0)
{
lean_object* v_size_1313_; 
v_size_1313_ = lean_ctor_get(v_r_1277_, 0);
lean_inc(v_size_1313_);
v___y_1287_ = v___x_1311_;
v___y_1288_ = v___x_1312_;
v___y_1289_ = v_size_1313_;
goto v___jp_1286_;
}
else
{
lean_object* v___x_1314_; 
v___x_1314_ = lean_unsigned_to_nat(0u);
v___y_1287_ = v___x_1311_;
v___y_1288_ = v___x_1312_;
v___y_1289_ = v___x_1314_;
goto v___jp_1286_;
}
}
}
}
}
else
{
lean_object* v___x_1324_; lean_object* v___x_1325_; lean_object* v___x_1326_; lean_object* v___x_1327_; lean_object* v___x_1329_; 
v___x_1324_ = lean_nat_add(v___x_1110_, v_size_1100_);
lean_dec(v_size_1100_);
v___x_1325_ = lean_nat_add(v___x_1324_, v_size_1260_);
lean_dec(v___x_1324_);
v___x_1326_ = lean_nat_add(v___x_1110_, v_size_1260_);
v___x_1327_ = lean_nat_add(v___x_1326_, v_size_1273_);
lean_dec(v___x_1326_);
if (v_isShared_1255_ == 0)
{
lean_ctor_set(v___x_1254_, 4, v_tree_1257_);
lean_ctor_set(v___x_1254_, 3, v_r_1104_);
lean_ctor_set(v___x_1254_, 2, v_v_1259_);
lean_ctor_set(v___x_1254_, 1, v_k_1258_);
lean_ctor_set(v___x_1254_, 0, v___x_1327_);
v___x_1329_ = v___x_1254_;
goto v_reusejp_1328_;
}
else
{
lean_object* v_reuseFailAlloc_1333_; 
v_reuseFailAlloc_1333_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1333_, 0, v___x_1327_);
lean_ctor_set(v_reuseFailAlloc_1333_, 1, v_k_1258_);
lean_ctor_set(v_reuseFailAlloc_1333_, 2, v_v_1259_);
lean_ctor_set(v_reuseFailAlloc_1333_, 3, v_r_1104_);
lean_ctor_set(v_reuseFailAlloc_1333_, 4, v_tree_1257_);
v___x_1329_ = v_reuseFailAlloc_1333_;
goto v_reusejp_1328_;
}
v_reusejp_1328_:
{
lean_object* v___x_1331_; 
if (v_isShared_1271_ == 0)
{
lean_ctor_set(v___x_1270_, 4, v___x_1329_);
lean_ctor_set(v___x_1270_, 0, v___x_1325_);
v___x_1331_ = v___x_1270_;
goto v_reusejp_1330_;
}
else
{
lean_object* v_reuseFailAlloc_1332_; 
v_reuseFailAlloc_1332_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1332_, 0, v___x_1325_);
lean_ctor_set(v_reuseFailAlloc_1332_, 1, v_k_1101_);
lean_ctor_set(v_reuseFailAlloc_1332_, 2, v_v_1102_);
lean_ctor_set(v_reuseFailAlloc_1332_, 3, v_l_1103_);
lean_ctor_set(v_reuseFailAlloc_1332_, 4, v___x_1329_);
v___x_1331_ = v_reuseFailAlloc_1332_;
goto v_reusejp_1330_;
}
v_reusejp_1330_:
{
return v___x_1331_;
}
}
}
}
}
}
else
{
if (lean_obj_tag(v_l_1103_) == 0)
{
lean_object* v___x_1341_; uint8_t v_isShared_1342_; uint8_t v_isSharedCheck_1363_; 
lean_inc_ref(v_l_1103_);
lean_inc(v_v_1102_);
lean_inc(v_k_1101_);
lean_inc(v_size_1100_);
v_isSharedCheck_1363_ = !lean_is_exclusive(v_l_1090_);
if (v_isSharedCheck_1363_ == 0)
{
lean_object* v_unused_1364_; lean_object* v_unused_1365_; lean_object* v_unused_1366_; lean_object* v_unused_1367_; lean_object* v_unused_1368_; 
v_unused_1364_ = lean_ctor_get(v_l_1090_, 4);
lean_dec(v_unused_1364_);
v_unused_1365_ = lean_ctor_get(v_l_1090_, 3);
lean_dec(v_unused_1365_);
v_unused_1366_ = lean_ctor_get(v_l_1090_, 2);
lean_dec(v_unused_1366_);
v_unused_1367_ = lean_ctor_get(v_l_1090_, 1);
lean_dec(v_unused_1367_);
v_unused_1368_ = lean_ctor_get(v_l_1090_, 0);
lean_dec(v_unused_1368_);
v___x_1341_ = v_l_1090_;
v_isShared_1342_ = v_isSharedCheck_1363_;
goto v_resetjp_1340_;
}
else
{
lean_dec(v_l_1090_);
v___x_1341_ = lean_box(0);
v_isShared_1342_ = v_isSharedCheck_1363_;
goto v_resetjp_1340_;
}
v_resetjp_1340_:
{
if (lean_obj_tag(v_r_1104_) == 0)
{
lean_object* v_k_1343_; lean_object* v_v_1344_; lean_object* v_size_1345_; lean_object* v___x_1346_; lean_object* v___x_1347_; lean_object* v___x_1349_; 
v_k_1343_ = lean_ctor_get(v___x_1256_, 0);
lean_inc(v_k_1343_);
v_v_1344_ = lean_ctor_get(v___x_1256_, 1);
lean_inc(v_v_1344_);
lean_dec_ref(v___x_1256_);
v_size_1345_ = lean_ctor_get(v_r_1104_, 0);
v___x_1346_ = lean_nat_add(v___x_1110_, v_size_1100_);
lean_dec(v_size_1100_);
v___x_1347_ = lean_nat_add(v___x_1110_, v_size_1345_);
if (v_isShared_1255_ == 0)
{
lean_ctor_set(v___x_1254_, 4, v_tree_1257_);
lean_ctor_set(v___x_1254_, 3, v_r_1104_);
lean_ctor_set(v___x_1254_, 2, v_v_1344_);
lean_ctor_set(v___x_1254_, 1, v_k_1343_);
lean_ctor_set(v___x_1254_, 0, v___x_1347_);
v___x_1349_ = v___x_1254_;
goto v_reusejp_1348_;
}
else
{
lean_object* v_reuseFailAlloc_1353_; 
v_reuseFailAlloc_1353_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1353_, 0, v___x_1347_);
lean_ctor_set(v_reuseFailAlloc_1353_, 1, v_k_1343_);
lean_ctor_set(v_reuseFailAlloc_1353_, 2, v_v_1344_);
lean_ctor_set(v_reuseFailAlloc_1353_, 3, v_r_1104_);
lean_ctor_set(v_reuseFailAlloc_1353_, 4, v_tree_1257_);
v___x_1349_ = v_reuseFailAlloc_1353_;
goto v_reusejp_1348_;
}
v_reusejp_1348_:
{
lean_object* v___x_1351_; 
if (v_isShared_1342_ == 0)
{
lean_ctor_set(v___x_1341_, 4, v___x_1349_);
lean_ctor_set(v___x_1341_, 0, v___x_1346_);
v___x_1351_ = v___x_1341_;
goto v_reusejp_1350_;
}
else
{
lean_object* v_reuseFailAlloc_1352_; 
v_reuseFailAlloc_1352_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1352_, 0, v___x_1346_);
lean_ctor_set(v_reuseFailAlloc_1352_, 1, v_k_1101_);
lean_ctor_set(v_reuseFailAlloc_1352_, 2, v_v_1102_);
lean_ctor_set(v_reuseFailAlloc_1352_, 3, v_l_1103_);
lean_ctor_set(v_reuseFailAlloc_1352_, 4, v___x_1349_);
v___x_1351_ = v_reuseFailAlloc_1352_;
goto v_reusejp_1350_;
}
v_reusejp_1350_:
{
return v___x_1351_;
}
}
}
else
{
lean_object* v_k_1354_; lean_object* v_v_1355_; lean_object* v___x_1356_; lean_object* v___x_1358_; 
lean_dec(v_size_1100_);
v_k_1354_ = lean_ctor_get(v___x_1256_, 0);
lean_inc(v_k_1354_);
v_v_1355_ = lean_ctor_get(v___x_1256_, 1);
lean_inc(v_v_1355_);
lean_dec_ref(v___x_1256_);
v___x_1356_ = lean_unsigned_to_nat(3u);
if (v_isShared_1255_ == 0)
{
lean_ctor_set(v___x_1254_, 4, v_r_1104_);
lean_ctor_set(v___x_1254_, 3, v_r_1104_);
lean_ctor_set(v___x_1254_, 2, v_v_1355_);
lean_ctor_set(v___x_1254_, 1, v_k_1354_);
lean_ctor_set(v___x_1254_, 0, v___x_1110_);
v___x_1358_ = v___x_1254_;
goto v_reusejp_1357_;
}
else
{
lean_object* v_reuseFailAlloc_1362_; 
v_reuseFailAlloc_1362_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1362_, 0, v___x_1110_);
lean_ctor_set(v_reuseFailAlloc_1362_, 1, v_k_1354_);
lean_ctor_set(v_reuseFailAlloc_1362_, 2, v_v_1355_);
lean_ctor_set(v_reuseFailAlloc_1362_, 3, v_r_1104_);
lean_ctor_set(v_reuseFailAlloc_1362_, 4, v_r_1104_);
v___x_1358_ = v_reuseFailAlloc_1362_;
goto v_reusejp_1357_;
}
v_reusejp_1357_:
{
lean_object* v___x_1360_; 
if (v_isShared_1342_ == 0)
{
lean_ctor_set(v___x_1341_, 4, v___x_1358_);
lean_ctor_set(v___x_1341_, 0, v___x_1356_);
v___x_1360_ = v___x_1341_;
goto v_reusejp_1359_;
}
else
{
lean_object* v_reuseFailAlloc_1361_; 
v_reuseFailAlloc_1361_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1361_, 0, v___x_1356_);
lean_ctor_set(v_reuseFailAlloc_1361_, 1, v_k_1101_);
lean_ctor_set(v_reuseFailAlloc_1361_, 2, v_v_1102_);
lean_ctor_set(v_reuseFailAlloc_1361_, 3, v_l_1103_);
lean_ctor_set(v_reuseFailAlloc_1361_, 4, v___x_1358_);
v___x_1360_ = v_reuseFailAlloc_1361_;
goto v_reusejp_1359_;
}
v_reusejp_1359_:
{
return v___x_1360_;
}
}
}
}
}
else
{
if (lean_obj_tag(v_r_1104_) == 0)
{
lean_object* v___x_1370_; uint8_t v_isShared_1371_; uint8_t v_isSharedCheck_1393_; 
lean_inc(v_l_1103_);
lean_inc(v_v_1102_);
lean_inc(v_k_1101_);
v_isSharedCheck_1393_ = !lean_is_exclusive(v_l_1090_);
if (v_isSharedCheck_1393_ == 0)
{
lean_object* v_unused_1394_; lean_object* v_unused_1395_; lean_object* v_unused_1396_; lean_object* v_unused_1397_; lean_object* v_unused_1398_; 
v_unused_1394_ = lean_ctor_get(v_l_1090_, 4);
lean_dec(v_unused_1394_);
v_unused_1395_ = lean_ctor_get(v_l_1090_, 3);
lean_dec(v_unused_1395_);
v_unused_1396_ = lean_ctor_get(v_l_1090_, 2);
lean_dec(v_unused_1396_);
v_unused_1397_ = lean_ctor_get(v_l_1090_, 1);
lean_dec(v_unused_1397_);
v_unused_1398_ = lean_ctor_get(v_l_1090_, 0);
lean_dec(v_unused_1398_);
v___x_1370_ = v_l_1090_;
v_isShared_1371_ = v_isSharedCheck_1393_;
goto v_resetjp_1369_;
}
else
{
lean_dec(v_l_1090_);
v___x_1370_ = lean_box(0);
v_isShared_1371_ = v_isSharedCheck_1393_;
goto v_resetjp_1369_;
}
v_resetjp_1369_:
{
lean_object* v_k_1372_; lean_object* v_v_1373_; lean_object* v_k_1374_; lean_object* v_v_1375_; lean_object* v___x_1377_; uint8_t v_isShared_1378_; uint8_t v_isSharedCheck_1389_; 
v_k_1372_ = lean_ctor_get(v___x_1256_, 0);
lean_inc(v_k_1372_);
v_v_1373_ = lean_ctor_get(v___x_1256_, 1);
lean_inc(v_v_1373_);
lean_dec_ref(v___x_1256_);
v_k_1374_ = lean_ctor_get(v_r_1104_, 1);
v_v_1375_ = lean_ctor_get(v_r_1104_, 2);
v_isSharedCheck_1389_ = !lean_is_exclusive(v_r_1104_);
if (v_isSharedCheck_1389_ == 0)
{
lean_object* v_unused_1390_; lean_object* v_unused_1391_; lean_object* v_unused_1392_; 
v_unused_1390_ = lean_ctor_get(v_r_1104_, 4);
lean_dec(v_unused_1390_);
v_unused_1391_ = lean_ctor_get(v_r_1104_, 3);
lean_dec(v_unused_1391_);
v_unused_1392_ = lean_ctor_get(v_r_1104_, 0);
lean_dec(v_unused_1392_);
v___x_1377_ = v_r_1104_;
v_isShared_1378_ = v_isSharedCheck_1389_;
goto v_resetjp_1376_;
}
else
{
lean_inc(v_v_1375_);
lean_inc(v_k_1374_);
lean_dec(v_r_1104_);
v___x_1377_ = lean_box(0);
v_isShared_1378_ = v_isSharedCheck_1389_;
goto v_resetjp_1376_;
}
v_resetjp_1376_:
{
lean_object* v___x_1379_; lean_object* v___x_1381_; 
v___x_1379_ = lean_unsigned_to_nat(3u);
if (v_isShared_1378_ == 0)
{
lean_ctor_set(v___x_1377_, 4, v_l_1103_);
lean_ctor_set(v___x_1377_, 3, v_l_1103_);
lean_ctor_set(v___x_1377_, 2, v_v_1102_);
lean_ctor_set(v___x_1377_, 1, v_k_1101_);
lean_ctor_set(v___x_1377_, 0, v___x_1110_);
v___x_1381_ = v___x_1377_;
goto v_reusejp_1380_;
}
else
{
lean_object* v_reuseFailAlloc_1388_; 
v_reuseFailAlloc_1388_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1388_, 0, v___x_1110_);
lean_ctor_set(v_reuseFailAlloc_1388_, 1, v_k_1101_);
lean_ctor_set(v_reuseFailAlloc_1388_, 2, v_v_1102_);
lean_ctor_set(v_reuseFailAlloc_1388_, 3, v_l_1103_);
lean_ctor_set(v_reuseFailAlloc_1388_, 4, v_l_1103_);
v___x_1381_ = v_reuseFailAlloc_1388_;
goto v_reusejp_1380_;
}
v_reusejp_1380_:
{
lean_object* v___x_1383_; 
if (v_isShared_1255_ == 0)
{
lean_ctor_set(v___x_1254_, 4, v_l_1103_);
lean_ctor_set(v___x_1254_, 3, v_l_1103_);
lean_ctor_set(v___x_1254_, 2, v_v_1373_);
lean_ctor_set(v___x_1254_, 1, v_k_1372_);
lean_ctor_set(v___x_1254_, 0, v___x_1110_);
v___x_1383_ = v___x_1254_;
goto v_reusejp_1382_;
}
else
{
lean_object* v_reuseFailAlloc_1387_; 
v_reuseFailAlloc_1387_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1387_, 0, v___x_1110_);
lean_ctor_set(v_reuseFailAlloc_1387_, 1, v_k_1372_);
lean_ctor_set(v_reuseFailAlloc_1387_, 2, v_v_1373_);
lean_ctor_set(v_reuseFailAlloc_1387_, 3, v_l_1103_);
lean_ctor_set(v_reuseFailAlloc_1387_, 4, v_l_1103_);
v___x_1383_ = v_reuseFailAlloc_1387_;
goto v_reusejp_1382_;
}
v_reusejp_1382_:
{
lean_object* v___x_1385_; 
if (v_isShared_1371_ == 0)
{
lean_ctor_set(v___x_1370_, 4, v___x_1383_);
lean_ctor_set(v___x_1370_, 3, v___x_1381_);
lean_ctor_set(v___x_1370_, 2, v_v_1375_);
lean_ctor_set(v___x_1370_, 1, v_k_1374_);
lean_ctor_set(v___x_1370_, 0, v___x_1379_);
v___x_1385_ = v___x_1370_;
goto v_reusejp_1384_;
}
else
{
lean_object* v_reuseFailAlloc_1386_; 
v_reuseFailAlloc_1386_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1386_, 0, v___x_1379_);
lean_ctor_set(v_reuseFailAlloc_1386_, 1, v_k_1374_);
lean_ctor_set(v_reuseFailAlloc_1386_, 2, v_v_1375_);
lean_ctor_set(v_reuseFailAlloc_1386_, 3, v___x_1381_);
lean_ctor_set(v_reuseFailAlloc_1386_, 4, v___x_1383_);
v___x_1385_ = v_reuseFailAlloc_1386_;
goto v_reusejp_1384_;
}
v_reusejp_1384_:
{
return v___x_1385_;
}
}
}
}
}
}
else
{
lean_object* v_k_1399_; lean_object* v_v_1400_; lean_object* v___x_1401_; lean_object* v___x_1403_; 
v_k_1399_ = lean_ctor_get(v___x_1256_, 0);
lean_inc(v_k_1399_);
v_v_1400_ = lean_ctor_get(v___x_1256_, 1);
lean_inc(v_v_1400_);
lean_dec_ref(v___x_1256_);
v___x_1401_ = lean_unsigned_to_nat(2u);
if (v_isShared_1255_ == 0)
{
lean_ctor_set(v___x_1254_, 4, v_r_1104_);
lean_ctor_set(v___x_1254_, 3, v_l_1090_);
lean_ctor_set(v___x_1254_, 2, v_v_1400_);
lean_ctor_set(v___x_1254_, 1, v_k_1399_);
lean_ctor_set(v___x_1254_, 0, v___x_1401_);
v___x_1403_ = v___x_1254_;
goto v_reusejp_1402_;
}
else
{
lean_object* v_reuseFailAlloc_1404_; 
v_reuseFailAlloc_1404_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1404_, 0, v___x_1401_);
lean_ctor_set(v_reuseFailAlloc_1404_, 1, v_k_1399_);
lean_ctor_set(v_reuseFailAlloc_1404_, 2, v_v_1400_);
lean_ctor_set(v_reuseFailAlloc_1404_, 3, v_l_1090_);
lean_ctor_set(v_reuseFailAlloc_1404_, 4, v_r_1104_);
v___x_1403_ = v_reuseFailAlloc_1404_;
goto v_reusejp_1402_;
}
v_reusejp_1402_:
{
return v___x_1403_;
}
}
}
}
}
}
}
else
{
return v_l_1090_;
}
}
else
{
return v_r_1091_;
}
}
else
{
lean_object* v_val_1411_; lean_object* v___x_1413_; 
v_val_1411_ = lean_ctor_get(v___x_1099_, 0);
lean_inc(v_val_1411_);
lean_dec_ref_known(v___x_1099_, 1);
if (v_isShared_1094_ == 0)
{
lean_ctor_set(v___x_1093_, 2, v_val_1411_);
lean_ctor_set(v___x_1093_, 1, v_k_1085_);
v___x_1413_ = v___x_1093_;
goto v_reusejp_1412_;
}
else
{
lean_object* v_reuseFailAlloc_1414_; 
v_reuseFailAlloc_1414_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1414_, 0, v_size_1087_);
lean_ctor_set(v_reuseFailAlloc_1414_, 1, v_k_1085_);
lean_ctor_set(v_reuseFailAlloc_1414_, 2, v_val_1411_);
lean_ctor_set(v_reuseFailAlloc_1414_, 3, v_l_1090_);
lean_ctor_set(v_reuseFailAlloc_1414_, 4, v_r_1091_);
v___x_1413_ = v_reuseFailAlloc_1414_;
goto v_reusejp_1412_;
}
v_reusejp_1412_:
{
return v___x_1413_;
}
}
}
default: 
{
lean_object* v_impl_1415_; lean_object* v___x_1416_; 
lean_del_object(v___x_1093_);
lean_dec(v_size_1087_);
v_impl_1415_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_NameMap_alter_spec__0___redArg(v_f_1084_, v_k_1085_, v_r_1091_);
v___x_1416_ = l_Std_DTreeMap_Internal_Impl_balance___redArg(v_k_1088_, v_v_1089_, v_l_1090_, v_impl_1415_);
return v___x_1416_;
}
}
}
}
else
{
lean_object* v___x_1418_; lean_object* v___x_1419_; 
v___x_1418_ = lean_box(0);
v___x_1419_ = lean_apply_1(v_f_1084_, v___x_1418_);
if (lean_obj_tag(v___x_1419_) == 0)
{
lean_dec(v_k_1085_);
return v_t_1086_;
}
else
{
lean_object* v_val_1420_; lean_object* v___x_1421_; lean_object* v___x_1422_; 
v_val_1420_ = lean_ctor_get(v___x_1419_, 0);
lean_inc(v_val_1420_);
lean_dec_ref_known(v___x_1419_, 1);
v___x_1421_ = lean_unsigned_to_nat(1u);
v___x_1422_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1422_, 0, v___x_1421_);
lean_ctor_set(v___x_1422_, 1, v_k_1085_);
lean_ctor_set(v___x_1422_, 2, v_val_1420_);
lean_ctor_set(v___x_1422_, 3, v_t_1086_);
lean_ctor_set(v___x_1422_, 4, v_t_1086_);
return v___x_1422_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_alter___redArg(lean_object* v_m_1423_, lean_object* v_n_1424_, lean_object* v_f_1425_){
_start:
{
lean_object* v___x_1426_; 
v___x_1426_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_NameMap_alter_spec__0___redArg(v_f_1425_, v_n_1424_, v_m_1423_);
return v___x_1426_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_alter(lean_object* v_00_u03b1_1427_, lean_object* v_m_1428_, lean_object* v_n_1429_, lean_object* v_f_1430_){
_start:
{
lean_object* v___x_1431_; 
v___x_1431_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_NameMap_alter_spec__0___redArg(v_f_1430_, v_n_1429_, v_m_1428_);
return v___x_1431_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_NameMap_alter_spec__0(lean_object* v_00_u03b1_1432_, lean_object* v_f_1433_, lean_object* v_k_1434_, lean_object* v_t_1435_, lean_object* v_hl_1436_){
_start:
{
lean_object* v___x_1437_; 
v___x_1437_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_NameMap_alter_spec__0___redArg(v_f_1433_, v_k_1434_, v_t_1435_);
return v___x_1437_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_NameMap_contains_spec__0___redArg(lean_object* v_k_1438_, lean_object* v_t_1439_){
_start:
{
if (lean_obj_tag(v_t_1439_) == 0)
{
lean_object* v_k_1440_; lean_object* v_l_1441_; lean_object* v_r_1442_; uint8_t v___x_1443_; 
v_k_1440_ = lean_ctor_get(v_t_1439_, 1);
v_l_1441_ = lean_ctor_get(v_t_1439_, 3);
v_r_1442_ = lean_ctor_get(v_t_1439_, 4);
v___x_1443_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_1438_, v_k_1440_);
switch(v___x_1443_)
{
case 0:
{
v_t_1439_ = v_l_1441_;
goto _start;
}
case 1:
{
uint8_t v___x_1445_; 
v___x_1445_ = 1;
return v___x_1445_;
}
default: 
{
v_t_1439_ = v_r_1442_;
goto _start;
}
}
}
else
{
uint8_t v___x_1447_; 
v___x_1447_ = 0;
return v___x_1447_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_NameMap_contains_spec__0___redArg___boxed(lean_object* v_k_1448_, lean_object* v_t_1449_){
_start:
{
uint8_t v_res_1450_; lean_object* v_r_1451_; 
v_res_1450_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_NameMap_contains_spec__0___redArg(v_k_1448_, v_t_1449_);
lean_dec(v_t_1449_);
lean_dec(v_k_1448_);
v_r_1451_ = lean_box(v_res_1450_);
return v_r_1451_;
}
}
LEAN_EXPORT uint8_t l_Lean_NameMap_contains___redArg(lean_object* v_m_1452_, lean_object* v_n_1453_){
_start:
{
uint8_t v___x_1454_; 
v___x_1454_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_NameMap_contains_spec__0___redArg(v_n_1453_, v_m_1452_);
return v___x_1454_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_contains___redArg___boxed(lean_object* v_m_1455_, lean_object* v_n_1456_){
_start:
{
uint8_t v_res_1457_; lean_object* v_r_1458_; 
v_res_1457_ = l_Lean_NameMap_contains___redArg(v_m_1455_, v_n_1456_);
lean_dec(v_n_1456_);
lean_dec(v_m_1455_);
v_r_1458_ = lean_box(v_res_1457_);
return v_r_1458_;
}
}
LEAN_EXPORT uint8_t l_Lean_NameMap_contains(lean_object* v_00_u03b1_1459_, lean_object* v_m_1460_, lean_object* v_n_1461_){
_start:
{
uint8_t v___x_1462_; 
v___x_1462_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_NameMap_contains_spec__0___redArg(v_n_1461_, v_m_1460_);
return v___x_1462_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_contains___boxed(lean_object* v_00_u03b1_1463_, lean_object* v_m_1464_, lean_object* v_n_1465_){
_start:
{
uint8_t v_res_1466_; lean_object* v_r_1467_; 
v_res_1466_ = l_Lean_NameMap_contains(v_00_u03b1_1463_, v_m_1464_, v_n_1465_);
lean_dec(v_n_1465_);
lean_dec(v_m_1464_);
v_r_1467_ = lean_box(v_res_1466_);
return v_r_1467_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_NameMap_contains_spec__0(lean_object* v_00_u03b2_1468_, lean_object* v_k_1469_, lean_object* v_t_1470_){
_start:
{
uint8_t v___x_1471_; 
v___x_1471_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_NameMap_contains_spec__0___redArg(v_k_1469_, v_t_1470_);
return v___x_1471_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_NameMap_contains_spec__0___boxed(lean_object* v_00_u03b2_1472_, lean_object* v_k_1473_, lean_object* v_t_1474_){
_start:
{
uint8_t v_res_1475_; lean_object* v_r_1476_; 
v_res_1475_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_NameMap_contains_spec__0(v_00_u03b2_1472_, v_k_1473_, v_t_1474_);
lean_dec(v_t_1474_);
lean_dec(v_k_1473_);
v_r_1476_ = lean_box(v_res_1475_);
return v_r_1476_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object* v_t_1477_, lean_object* v_k_1478_){
_start:
{
if (lean_obj_tag(v_t_1477_) == 0)
{
lean_object* v_k_1479_; lean_object* v_v_1480_; lean_object* v_l_1481_; lean_object* v_r_1482_; uint8_t v___x_1483_; 
v_k_1479_ = lean_ctor_get(v_t_1477_, 1);
v_v_1480_ = lean_ctor_get(v_t_1477_, 2);
v_l_1481_ = lean_ctor_get(v_t_1477_, 3);
v_r_1482_ = lean_ctor_get(v_t_1477_, 4);
v___x_1483_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_1478_, v_k_1479_);
switch(v___x_1483_)
{
case 0:
{
v_t_1477_ = v_l_1481_;
goto _start;
}
case 1:
{
lean_object* v___x_1485_; 
lean_inc(v_v_1480_);
v___x_1485_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1485_, 0, v_v_1480_);
return v___x_1485_;
}
default: 
{
v_t_1477_ = v_r_1482_;
goto _start;
}
}
}
else
{
lean_object* v___x_1487_; 
v___x_1487_ = lean_box(0);
return v___x_1487_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg___boxed(lean_object* v_t_1488_, lean_object* v_k_1489_){
_start:
{
lean_object* v_res_1490_; 
v_res_1490_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_t_1488_, v_k_1489_);
lean_dec(v_k_1489_);
lean_dec(v_t_1488_);
return v_res_1490_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_find_x3f___redArg(lean_object* v_m_1491_, lean_object* v_n_1492_){
_start:
{
lean_object* v___x_1493_; 
v___x_1493_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_m_1491_, v_n_1492_);
return v___x_1493_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_find_x3f___redArg___boxed(lean_object* v_m_1494_, lean_object* v_n_1495_){
_start:
{
lean_object* v_res_1496_; 
v_res_1496_ = l_Lean_NameMap_find_x3f___redArg(v_m_1494_, v_n_1495_);
lean_dec(v_n_1495_);
lean_dec(v_m_1494_);
return v_res_1496_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_find_x3f(lean_object* v_00_u03b1_1497_, lean_object* v_m_1498_, lean_object* v_n_1499_){
_start:
{
lean_object* v___x_1500_; 
v___x_1500_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_m_1498_, v_n_1499_);
return v___x_1500_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_find_x3f___boxed(lean_object* v_00_u03b1_1501_, lean_object* v_m_1502_, lean_object* v_n_1503_){
_start:
{
lean_object* v_res_1504_; 
v_res_1504_ = l_Lean_NameMap_find_x3f(v_00_u03b1_1501_, v_m_1502_, v_n_1503_);
lean_dec(v_n_1503_);
lean_dec(v_m_1502_);
return v_res_1504_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0(lean_object* v_00_u03b4_1505_, lean_object* v_t_1506_, lean_object* v_k_1507_){
_start:
{
lean_object* v___x_1508_; 
v___x_1508_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_t_1506_, v_k_1507_);
return v___x_1508_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___boxed(lean_object* v_00_u03b4_1509_, lean_object* v_t_1510_, lean_object* v_k_1511_){
_start:
{
lean_object* v_res_1512_; 
v_res_1512_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0(v_00_u03b4_1509_, v_t_1510_, v_k_1511_);
lean_dec(v_k_1511_);
lean_dec(v_t_1510_);
return v_res_1512_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_get_x3f___redArg(lean_object* v_m_1513_, lean_object* v_n_1514_){
_start:
{
lean_object* v___x_1515_; 
v___x_1515_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_m_1513_, v_n_1514_);
return v___x_1515_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_get_x3f___redArg___boxed(lean_object* v_m_1516_, lean_object* v_n_1517_){
_start:
{
lean_object* v_res_1518_; 
v_res_1518_ = l_Lean_NameMap_get_x3f___redArg(v_m_1516_, v_n_1517_);
lean_dec(v_n_1517_);
lean_dec(v_m_1516_);
return v_res_1518_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_get_x3f(lean_object* v_00_u03b1_1519_, lean_object* v_m_1520_, lean_object* v_n_1521_){
_start:
{
lean_object* v___x_1522_; 
v___x_1522_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_m_1520_, v_n_1521_);
return v___x_1522_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_get_x3f___boxed(lean_object* v_00_u03b1_1523_, lean_object* v_m_1524_, lean_object* v_n_1525_){
_start:
{
lean_object* v_res_1526_; 
v_res_1526_ = l_Lean_NameMap_get_x3f(v_00_u03b1_1523_, v_m_1524_, v_n_1525_);
lean_dec(v_n_1525_);
lean_dec(v_m_1524_);
return v_res_1526_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_get_x21___redArg(lean_object* v_inst_1527_, lean_object* v_m_1528_, lean_object* v_n_1529_){
_start:
{
lean_object* v___x_1530_; lean_object* v___x_1531_; 
v___x_1530_ = ((lean_object*)(l_Lean_NameMap_instBEq___redArg___lam__0___closed__0));
v___x_1531_ = l_Std_DTreeMap_Internal_Impl_Const_get_x21___redArg(v___x_1530_, v_inst_1527_, v_m_1528_, v_n_1529_);
return v___x_1531_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_get_x21___redArg___boxed(lean_object* v_inst_1532_, lean_object* v_m_1533_, lean_object* v_n_1534_){
_start:
{
lean_object* v_res_1535_; 
v_res_1535_ = l_Lean_NameMap_get_x21___redArg(v_inst_1532_, v_m_1533_, v_n_1534_);
lean_dec(v_inst_1532_);
return v_res_1535_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_get_x21(lean_object* v_00_u03b1_1536_, lean_object* v_inst_1537_, lean_object* v_m_1538_, lean_object* v_n_1539_){
_start:
{
lean_object* v___x_1540_; 
v___x_1540_ = l_Lean_NameMap_get_x21___redArg(v_inst_1537_, v_m_1538_, v_n_1539_);
return v___x_1540_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_get_x21___boxed(lean_object* v_00_u03b1_1541_, lean_object* v_inst_1542_, lean_object* v_m_1543_, lean_object* v_n_1544_){
_start:
{
lean_object* v_res_1545_; 
v_res_1545_ = l_Lean_NameMap_get_x21(v_00_u03b1_1541_, v_inst_1542_, v_m_1543_, v_n_1544_);
lean_dec(v_inst_1542_);
return v_res_1545_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_NameMap_getD_spec__0___redArg(lean_object* v_t_1546_, lean_object* v_k_1547_, lean_object* v_fallback_1548_){
_start:
{
if (lean_obj_tag(v_t_1546_) == 0)
{
lean_object* v_k_1549_; lean_object* v_v_1550_; lean_object* v_l_1551_; lean_object* v_r_1552_; uint8_t v___x_1553_; 
v_k_1549_ = lean_ctor_get(v_t_1546_, 1);
v_v_1550_ = lean_ctor_get(v_t_1546_, 2);
v_l_1551_ = lean_ctor_get(v_t_1546_, 3);
v_r_1552_ = lean_ctor_get(v_t_1546_, 4);
v___x_1553_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_1547_, v_k_1549_);
switch(v___x_1553_)
{
case 0:
{
v_t_1546_ = v_l_1551_;
goto _start;
}
case 1:
{
lean_inc(v_v_1550_);
return v_v_1550_;
}
default: 
{
v_t_1546_ = v_r_1552_;
goto _start;
}
}
}
else
{
lean_inc(v_fallback_1548_);
return v_fallback_1548_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_NameMap_getD_spec__0___redArg___boxed(lean_object* v_t_1556_, lean_object* v_k_1557_, lean_object* v_fallback_1558_){
_start:
{
lean_object* v_res_1559_; 
v_res_1559_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_NameMap_getD_spec__0___redArg(v_t_1556_, v_k_1557_, v_fallback_1558_);
lean_dec(v_fallback_1558_);
lean_dec(v_k_1557_);
lean_dec(v_t_1556_);
return v_res_1559_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_getD___redArg(lean_object* v_m_1560_, lean_object* v_n_1561_, lean_object* v_fallback_1562_){
_start:
{
lean_object* v___x_1563_; 
v___x_1563_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_NameMap_getD_spec__0___redArg(v_m_1560_, v_n_1561_, v_fallback_1562_);
return v___x_1563_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_getD___redArg___boxed(lean_object* v_m_1564_, lean_object* v_n_1565_, lean_object* v_fallback_1566_){
_start:
{
lean_object* v_res_1567_; 
v_res_1567_ = l_Lean_NameMap_getD___redArg(v_m_1564_, v_n_1565_, v_fallback_1566_);
lean_dec(v_fallback_1566_);
lean_dec(v_n_1565_);
lean_dec(v_m_1564_);
return v_res_1567_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_getD(lean_object* v_00_u03b1_1568_, lean_object* v_m_1569_, lean_object* v_n_1570_, lean_object* v_fallback_1571_){
_start:
{
lean_object* v___x_1572_; 
v___x_1572_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_NameMap_getD_spec__0___redArg(v_m_1569_, v_n_1570_, v_fallback_1571_);
return v___x_1572_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_getD___boxed(lean_object* v_00_u03b1_1573_, lean_object* v_m_1574_, lean_object* v_n_1575_, lean_object* v_fallback_1576_){
_start:
{
lean_object* v_res_1577_; 
v_res_1577_ = l_Lean_NameMap_getD(v_00_u03b1_1573_, v_m_1574_, v_n_1575_, v_fallback_1576_);
lean_dec(v_fallback_1576_);
lean_dec(v_n_1575_);
lean_dec(v_m_1574_);
return v_res_1577_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_NameMap_getD_spec__0(lean_object* v_00_u03b4_1578_, lean_object* v_t_1579_, lean_object* v_k_1580_, lean_object* v_fallback_1581_){
_start:
{
lean_object* v___x_1582_; 
v___x_1582_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_NameMap_getD_spec__0___redArg(v_t_1579_, v_k_1580_, v_fallback_1581_);
return v___x_1582_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_NameMap_getD_spec__0___boxed(lean_object* v_00_u03b4_1583_, lean_object* v_t_1584_, lean_object* v_k_1585_, lean_object* v_fallback_1586_){
_start:
{
lean_object* v_res_1587_; 
v_res_1587_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_NameMap_getD_spec__0(v_00_u03b4_1583_, v_t_1584_, v_k_1585_, v_fallback_1586_);
lean_dec(v_fallback_1586_);
lean_dec(v_k_1585_);
lean_dec(v_t_1584_);
return v_res_1587_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_instMembershipName___redArg(){
_start:
{
lean_object* v___x_1589_; 
v___x_1589_ = lean_box(0);
return v___x_1589_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_instMembershipName___redArg___boxed(lean_object* v___dummy_1590_){
_start:
{
lean_object* v_res_1591_; 
v_res_1591_ = l_Lean_NameMap_instMembershipName___redArg();
return v_res_1591_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_instMembershipName(lean_object* v_00_u03b1_1592_){
_start:
{
lean_object* v___x_1593_; 
v___x_1593_ = lean_box(0);
return v___x_1593_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_instGetElem_x3fNameMem___redArg___lam__0(lean_object* v_m_1594_, lean_object* v_n_1595_, lean_object* v_h_1596_){
_start:
{
lean_object* v___x_1597_; lean_object* v___x_1598_; 
v___x_1597_ = ((lean_object*)(l_Lean_NameMap_instBEq___redArg___lam__0___closed__0));
v___x_1598_ = l_Std_DTreeMap_Internal_Impl_Const_get___redArg(v___x_1597_, v_m_1594_, v_n_1595_);
return v___x_1598_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_instGetElem_x3fNameMem___redArg___lam__1(lean_object* v_m_1599_, lean_object* v_n_1600_){
_start:
{
lean_object* v___x_1601_; lean_object* v___x_1602_; 
v___x_1601_ = ((lean_object*)(l_Lean_NameMap_instBEq___redArg___lam__0___closed__0));
v___x_1602_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___redArg(v___x_1601_, v_m_1599_, v_n_1600_);
return v___x_1602_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_instGetElem_x3fNameMem___redArg___lam__2(lean_object* v_inst_1603_, lean_object* v_m_1604_, lean_object* v_n_1605_){
_start:
{
lean_object* v___x_1606_; lean_object* v___x_1607_; 
v___x_1606_ = ((lean_object*)(l_Lean_NameMap_instBEq___redArg___lam__0___closed__0));
v___x_1607_ = l_Std_DTreeMap_Internal_Impl_Const_get_x21___redArg(v___x_1606_, v_inst_1603_, v_m_1604_, v_n_1605_);
return v___x_1607_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_instGetElem_x3fNameMem___redArg___lam__2___boxed(lean_object* v_inst_1608_, lean_object* v_m_1609_, lean_object* v_n_1610_){
_start:
{
lean_object* v_res_1611_; 
v_res_1611_ = l_Lean_NameMap_instGetElem_x3fNameMem___redArg___lam__2(v_inst_1608_, v_m_1609_, v_n_1610_);
lean_dec(v_inst_1608_);
return v_res_1611_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_instGetElem_x3fNameMem___redArg(){
_start:
{
lean_object* v___x_1620_; 
v___x_1620_ = ((lean_object*)(l_Lean_NameMap_instGetElem_x3fNameMem___redArg___closed__3));
return v___x_1620_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_instGetElem_x3fNameMem___redArg___boxed(lean_object* v___dummy_1621_){
_start:
{
lean_object* v_res_1622_; 
v_res_1622_ = l_Lean_NameMap_instGetElem_x3fNameMem___redArg();
return v_res_1622_;
}
}
static lean_object* _init_l_Lean_NameMap_instGetElem_x3fNameMem___closed__0(void){
_start:
{
lean_object* v___x_1623_; 
v___x_1623_ = l_Lean_NameMap_instGetElem_x3fNameMem___redArg();
return v___x_1623_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_instGetElem_x3fNameMem(lean_object* v_00_u03b1_1624_){
_start:
{
lean_object* v___x_1625_; 
v___x_1625_ = lean_obj_once(&l_Lean_NameMap_instGetElem_x3fNameMem___closed__0, &l_Lean_NameMap_instGetElem_x3fNameMem___closed__0_once, _init_l_Lean_NameMap_instGetElem_x3fNameMem___closed__0);
return v___x_1625_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_size___redArg(lean_object* v_m_1626_){
_start:
{
if (lean_obj_tag(v_m_1626_) == 0)
{
lean_object* v_size_1627_; 
v_size_1627_ = lean_ctor_get(v_m_1626_, 0);
lean_inc(v_size_1627_);
return v_size_1627_;
}
else
{
lean_object* v___x_1628_; 
v___x_1628_ = lean_unsigned_to_nat(0u);
return v___x_1628_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_size___redArg___boxed(lean_object* v_m_1629_){
_start:
{
lean_object* v_res_1630_; 
v_res_1630_ = l_Lean_NameMap_size___redArg(v_m_1629_);
lean_dec(v_m_1629_);
return v_res_1630_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_size(lean_object* v_00_u03b1_1631_, lean_object* v_m_1632_){
_start:
{
lean_object* v___x_1633_; 
v___x_1633_ = l_Lean_NameMap_size___redArg(v_m_1632_);
return v___x_1633_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_size___boxed(lean_object* v_00_u03b1_1634_, lean_object* v_m_1635_){
_start:
{
lean_object* v_res_1636_; 
v_res_1636_ = l_Lean_NameMap_size(v_00_u03b1_1634_, v_m_1635_);
lean_dec(v_m_1635_);
return v_res_1636_;
}
}
LEAN_EXPORT uint8_t l_Lean_NameMap_isEmpty___redArg(lean_object* v_m_1637_){
_start:
{
if (lean_obj_tag(v_m_1637_) == 0)
{
uint8_t v___x_1638_; 
v___x_1638_ = 0;
return v___x_1638_;
}
else
{
uint8_t v___x_1639_; 
v___x_1639_ = 1;
return v___x_1639_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_isEmpty___redArg___boxed(lean_object* v_m_1640_){
_start:
{
uint8_t v_res_1641_; lean_object* v_r_1642_; 
v_res_1641_ = l_Lean_NameMap_isEmpty___redArg(v_m_1640_);
lean_dec(v_m_1640_);
v_r_1642_ = lean_box(v_res_1641_);
return v_r_1642_;
}
}
LEAN_EXPORT uint8_t l_Lean_NameMap_isEmpty(lean_object* v_00_u03b1_1643_, lean_object* v_m_1644_){
_start:
{
uint8_t v___x_1645_; 
v___x_1645_ = l_Lean_NameMap_isEmpty___redArg(v_m_1644_);
return v___x_1645_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_isEmpty___boxed(lean_object* v_00_u03b1_1646_, lean_object* v_m_1647_){
_start:
{
uint8_t v_res_1648_; lean_object* v_r_1649_; 
v_res_1648_ = l_Lean_NameMap_isEmpty(v_00_u03b1_1646_, v_m_1647_);
lean_dec(v_m_1647_);
v_r_1649_ = lean_box(v_res_1648_);
return v_r_1649_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_NameMap_any_spec__0___redArg(lean_object* v_p_1653_, lean_object* v_init_1654_, lean_object* v_x_1655_){
_start:
{
if (lean_obj_tag(v_x_1655_) == 0)
{
lean_object* v_k_1656_; lean_object* v_v_1657_; lean_object* v_l_1658_; lean_object* v_r_1659_; lean_object* v___x_1660_; 
v_k_1656_ = lean_ctor_get(v_x_1655_, 1);
lean_inc(v_k_1656_);
v_v_1657_ = lean_ctor_get(v_x_1655_, 2);
lean_inc(v_v_1657_);
v_l_1658_ = lean_ctor_get(v_x_1655_, 3);
lean_inc(v_l_1658_);
v_r_1659_ = lean_ctor_get(v_x_1655_, 4);
lean_inc(v_r_1659_);
lean_dec_ref_known(v_x_1655_, 5);
lean_inc_ref(v_p_1653_);
v___x_1660_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_NameMap_any_spec__0___redArg(v_p_1653_, v_init_1654_, v_l_1658_);
if (lean_obj_tag(v___x_1660_) == 0)
{
lean_dec(v_r_1659_);
lean_dec(v_v_1657_);
lean_dec(v_k_1656_);
lean_dec_ref(v_p_1653_);
return v___x_1660_;
}
else
{
lean_object* v___x_1662_; uint8_t v_isShared_1663_; uint8_t v_isSharedCheck_1674_; 
v_isSharedCheck_1674_ = !lean_is_exclusive(v___x_1660_);
if (v_isSharedCheck_1674_ == 0)
{
lean_object* v_unused_1675_; 
v_unused_1675_ = lean_ctor_get(v___x_1660_, 0);
lean_dec(v_unused_1675_);
v___x_1662_ = v___x_1660_;
v_isShared_1663_ = v_isSharedCheck_1674_;
goto v_resetjp_1661_;
}
else
{
lean_dec(v___x_1660_);
v___x_1662_ = lean_box(0);
v_isShared_1663_ = v_isSharedCheck_1674_;
goto v_resetjp_1661_;
}
v_resetjp_1661_:
{
lean_object* v___x_1664_; lean_object* v___x_1665_; uint8_t v___x_1666_; 
v___x_1664_ = lean_box(0);
lean_inc_ref(v_p_1653_);
v___x_1665_ = lean_apply_2(v_p_1653_, v_k_1656_, v_v_1657_);
v___x_1666_ = lean_unbox(v___x_1665_);
if (v___x_1666_ == 0)
{
lean_object* v___x_1667_; 
lean_del_object(v___x_1662_);
v___x_1667_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_NameMap_any_spec__0___redArg___closed__0));
v_init_1654_ = v___x_1667_;
v_x_1655_ = v_r_1659_;
goto _start;
}
else
{
lean_object* v___x_1669_; lean_object* v___x_1670_; lean_object* v___x_1672_; 
lean_dec(v_r_1659_);
lean_dec_ref(v_p_1653_);
v___x_1669_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1669_, 0, v___x_1665_);
v___x_1670_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1670_, 0, v___x_1669_);
lean_ctor_set(v___x_1670_, 1, v___x_1664_);
if (v_isShared_1663_ == 0)
{
lean_ctor_set_tag(v___x_1662_, 0);
lean_ctor_set(v___x_1662_, 0, v___x_1670_);
v___x_1672_ = v___x_1662_;
goto v_reusejp_1671_;
}
else
{
lean_object* v_reuseFailAlloc_1673_; 
v_reuseFailAlloc_1673_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1673_, 0, v___x_1670_);
v___x_1672_ = v_reuseFailAlloc_1673_;
goto v_reusejp_1671_;
}
v_reusejp_1671_:
{
return v___x_1672_;
}
}
}
}
}
else
{
lean_object* v___x_1676_; 
lean_dec_ref(v_p_1653_);
v___x_1676_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1676_, 0, v_init_1654_);
return v___x_1676_;
}
}
}
LEAN_EXPORT uint8_t l_Lean_NameMap_any___redArg(lean_object* v_m_1677_, lean_object* v_p_1678_){
_start:
{
lean_object* v___y_1680_; lean_object* v___x_1685_; lean_object* v___x_1686_; lean_object* v_a_1687_; 
v___x_1685_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_NameMap_any_spec__0___redArg___closed__0));
v___x_1686_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_NameMap_any_spec__0___redArg(v_p_1678_, v___x_1685_, v_m_1677_);
v_a_1687_ = lean_ctor_get(v___x_1686_, 0);
lean_inc(v_a_1687_);
lean_dec_ref(v___x_1686_);
v___y_1680_ = v_a_1687_;
goto v___jp_1679_;
v___jp_1679_:
{
lean_object* v_fst_1681_; 
v_fst_1681_ = lean_ctor_get(v___y_1680_, 0);
lean_inc(v_fst_1681_);
lean_dec_ref(v___y_1680_);
if (lean_obj_tag(v_fst_1681_) == 0)
{
uint8_t v___x_1682_; 
v___x_1682_ = 0;
return v___x_1682_;
}
else
{
lean_object* v_val_1683_; uint8_t v___x_1684_; 
v_val_1683_ = lean_ctor_get(v_fst_1681_, 0);
lean_inc(v_val_1683_);
lean_dec_ref_known(v_fst_1681_, 1);
v___x_1684_ = lean_unbox(v_val_1683_);
lean_dec(v_val_1683_);
return v___x_1684_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_any___redArg___boxed(lean_object* v_m_1688_, lean_object* v_p_1689_){
_start:
{
uint8_t v_res_1690_; lean_object* v_r_1691_; 
v_res_1690_ = l_Lean_NameMap_any___redArg(v_m_1688_, v_p_1689_);
v_r_1691_ = lean_box(v_res_1690_);
return v_r_1691_;
}
}
LEAN_EXPORT uint8_t l_Lean_NameMap_any(lean_object* v_00_u03b1_1692_, lean_object* v_m_1693_, lean_object* v_p_1694_){
_start:
{
uint8_t v___x_1695_; 
v___x_1695_ = l_Lean_NameMap_any___redArg(v_m_1693_, v_p_1694_);
return v___x_1695_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_any___boxed(lean_object* v_00_u03b1_1696_, lean_object* v_m_1697_, lean_object* v_p_1698_){
_start:
{
uint8_t v_res_1699_; lean_object* v_r_1700_; 
v_res_1699_ = l_Lean_NameMap_any(v_00_u03b1_1696_, v_m_1697_, v_p_1698_);
v_r_1700_ = lean_box(v_res_1699_);
return v_r_1700_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_NameMap_any_spec__0(lean_object* v_00_u03b1_1701_, lean_object* v_p_1702_, lean_object* v_init_1703_, lean_object* v_x_1704_){
_start:
{
lean_object* v___x_1705_; 
v___x_1705_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_NameMap_any_spec__0___redArg(v_p_1702_, v_init_1703_, v_x_1704_);
return v___x_1705_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_NameMap_all_spec__0___redArg(lean_object* v_p_1706_, lean_object* v_init_1707_, lean_object* v_x_1708_){
_start:
{
if (lean_obj_tag(v_x_1708_) == 0)
{
lean_object* v_k_1709_; lean_object* v_v_1710_; lean_object* v_l_1711_; lean_object* v_r_1712_; lean_object* v___x_1713_; 
v_k_1709_ = lean_ctor_get(v_x_1708_, 1);
lean_inc(v_k_1709_);
v_v_1710_ = lean_ctor_get(v_x_1708_, 2);
lean_inc(v_v_1710_);
v_l_1711_ = lean_ctor_get(v_x_1708_, 3);
lean_inc(v_l_1711_);
v_r_1712_ = lean_ctor_get(v_x_1708_, 4);
lean_inc(v_r_1712_);
lean_dec_ref_known(v_x_1708_, 5);
lean_inc_ref(v_p_1706_);
v___x_1713_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_NameMap_all_spec__0___redArg(v_p_1706_, v_init_1707_, v_l_1711_);
if (lean_obj_tag(v___x_1713_) == 0)
{
lean_dec(v_r_1712_);
lean_dec(v_v_1710_);
lean_dec(v_k_1709_);
lean_dec_ref(v_p_1706_);
return v___x_1713_;
}
else
{
lean_object* v___x_1715_; uint8_t v_isShared_1716_; uint8_t v_isSharedCheck_1727_; 
v_isSharedCheck_1727_ = !lean_is_exclusive(v___x_1713_);
if (v_isSharedCheck_1727_ == 0)
{
lean_object* v_unused_1728_; 
v_unused_1728_ = lean_ctor_get(v___x_1713_, 0);
lean_dec(v_unused_1728_);
v___x_1715_ = v___x_1713_;
v_isShared_1716_ = v_isSharedCheck_1727_;
goto v_resetjp_1714_;
}
else
{
lean_dec(v___x_1713_);
v___x_1715_ = lean_box(0);
v_isShared_1716_ = v_isSharedCheck_1727_;
goto v_resetjp_1714_;
}
v_resetjp_1714_:
{
lean_object* v___x_1717_; lean_object* v___x_1718_; uint8_t v___x_1719_; 
v___x_1717_ = lean_box(0);
lean_inc_ref(v_p_1706_);
v___x_1718_ = lean_apply_2(v_p_1706_, v_k_1709_, v_v_1710_);
v___x_1719_ = lean_unbox(v___x_1718_);
if (v___x_1719_ == 0)
{
lean_object* v___x_1720_; lean_object* v___x_1721_; lean_object* v___x_1723_; 
lean_dec(v_r_1712_);
lean_dec_ref(v_p_1706_);
v___x_1720_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1720_, 0, v___x_1718_);
v___x_1721_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1721_, 0, v___x_1720_);
lean_ctor_set(v___x_1721_, 1, v___x_1717_);
if (v_isShared_1716_ == 0)
{
lean_ctor_set_tag(v___x_1715_, 0);
lean_ctor_set(v___x_1715_, 0, v___x_1721_);
v___x_1723_ = v___x_1715_;
goto v_reusejp_1722_;
}
else
{
lean_object* v_reuseFailAlloc_1724_; 
v_reuseFailAlloc_1724_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1724_, 0, v___x_1721_);
v___x_1723_ = v_reuseFailAlloc_1724_;
goto v_reusejp_1722_;
}
v_reusejp_1722_:
{
return v___x_1723_;
}
}
else
{
lean_object* v___x_1725_; 
lean_del_object(v___x_1715_);
v___x_1725_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_NameMap_any_spec__0___redArg___closed__0));
v_init_1707_ = v___x_1725_;
v_x_1708_ = v_r_1712_;
goto _start;
}
}
}
}
else
{
lean_object* v___x_1729_; 
lean_dec_ref(v_p_1706_);
v___x_1729_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1729_, 0, v_init_1707_);
return v___x_1729_;
}
}
}
LEAN_EXPORT uint8_t l_Lean_NameMap_all___redArg(lean_object* v_m_1730_, lean_object* v_p_1731_){
_start:
{
lean_object* v___y_1733_; lean_object* v___x_1738_; lean_object* v___x_1739_; lean_object* v_a_1740_; 
v___x_1738_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_NameMap_any_spec__0___redArg___closed__0));
v___x_1739_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_NameMap_all_spec__0___redArg(v_p_1731_, v___x_1738_, v_m_1730_);
v_a_1740_ = lean_ctor_get(v___x_1739_, 0);
lean_inc(v_a_1740_);
lean_dec_ref(v___x_1739_);
v___y_1733_ = v_a_1740_;
goto v___jp_1732_;
v___jp_1732_:
{
lean_object* v_fst_1734_; 
v_fst_1734_ = lean_ctor_get(v___y_1733_, 0);
lean_inc(v_fst_1734_);
lean_dec_ref(v___y_1733_);
if (lean_obj_tag(v_fst_1734_) == 0)
{
uint8_t v___x_1735_; 
v___x_1735_ = 1;
return v___x_1735_;
}
else
{
lean_object* v_val_1736_; uint8_t v___x_1737_; 
v_val_1736_ = lean_ctor_get(v_fst_1734_, 0);
lean_inc(v_val_1736_);
lean_dec_ref_known(v_fst_1734_, 1);
v___x_1737_ = lean_unbox(v_val_1736_);
lean_dec(v_val_1736_);
return v___x_1737_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_all___redArg___boxed(lean_object* v_m_1741_, lean_object* v_p_1742_){
_start:
{
uint8_t v_res_1743_; lean_object* v_r_1744_; 
v_res_1743_ = l_Lean_NameMap_all___redArg(v_m_1741_, v_p_1742_);
v_r_1744_ = lean_box(v_res_1743_);
return v_r_1744_;
}
}
LEAN_EXPORT uint8_t l_Lean_NameMap_all(lean_object* v_00_u03b1_1745_, lean_object* v_m_1746_, lean_object* v_p_1747_){
_start:
{
uint8_t v___x_1748_; 
v___x_1748_ = l_Lean_NameMap_all___redArg(v_m_1746_, v_p_1747_);
return v___x_1748_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_all___boxed(lean_object* v_00_u03b1_1749_, lean_object* v_m_1750_, lean_object* v_p_1751_){
_start:
{
uint8_t v_res_1752_; lean_object* v_r_1753_; 
v_res_1752_ = l_Lean_NameMap_all(v_00_u03b1_1749_, v_m_1750_, v_p_1751_);
v_r_1753_ = lean_box(v_res_1752_);
return v_r_1753_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_NameMap_all_spec__0(lean_object* v_00_u03b1_1754_, lean_object* v_p_1755_, lean_object* v_init_1756_, lean_object* v_x_1757_){
_start:
{
lean_object* v___x_1758_; 
v___x_1758_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_NameMap_all_spec__0___redArg(v_p_1755_, v_init_1756_, v_x_1757_);
return v___x_1758_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_foldl_spec__0_spec__0___redArg(lean_object* v_f_1759_, lean_object* v_init_1760_, lean_object* v_x_1761_){
_start:
{
if (lean_obj_tag(v_x_1761_) == 0)
{
lean_object* v_k_1762_; lean_object* v_v_1763_; lean_object* v_l_1764_; lean_object* v_r_1765_; lean_object* v___x_1766_; lean_object* v___x_1767_; 
v_k_1762_ = lean_ctor_get(v_x_1761_, 1);
lean_inc(v_k_1762_);
v_v_1763_ = lean_ctor_get(v_x_1761_, 2);
lean_inc(v_v_1763_);
v_l_1764_ = lean_ctor_get(v_x_1761_, 3);
lean_inc(v_l_1764_);
v_r_1765_ = lean_ctor_get(v_x_1761_, 4);
lean_inc(v_r_1765_);
lean_dec_ref_known(v_x_1761_, 5);
lean_inc_n(v_f_1759_, 2);
v___x_1766_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_foldl_spec__0_spec__0___redArg(v_f_1759_, v_init_1760_, v_l_1764_);
v___x_1767_ = lean_apply_3(v_f_1759_, v___x_1766_, v_k_1762_, v_v_1763_);
v_init_1760_ = v___x_1767_;
v_x_1761_ = v_r_1765_;
goto _start;
}
else
{
lean_dec(v_f_1759_);
return v_init_1760_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_foldl___redArg(lean_object* v_f_1769_, lean_object* v_init_1770_, lean_object* v_m_1771_){
_start:
{
lean_object* v___x_1772_; 
v___x_1772_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_foldl_spec__0_spec__0___redArg(v_f_1769_, v_init_1770_, v_m_1771_);
return v___x_1772_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_foldl(lean_object* v_00_u03b1_1773_, lean_object* v_00_u03c3_1774_, lean_object* v_f_1775_, lean_object* v_init_1776_, lean_object* v_m_1777_){
_start:
{
lean_object* v___x_1778_; 
v___x_1778_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_foldl_spec__0_spec__0___redArg(v_f_1775_, v_init_1776_, v_m_1777_);
return v___x_1778_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_foldl_spec__0___redArg(lean_object* v_f_1779_, lean_object* v_init_1780_, lean_object* v_t_1781_){
_start:
{
lean_object* v___x_1782_; 
v___x_1782_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_foldl_spec__0_spec__0___redArg(v_f_1779_, v_init_1780_, v_t_1781_);
return v___x_1782_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_foldl_spec__0(lean_object* v_00_u03b1_1783_, lean_object* v_00_u03c3_1784_, lean_object* v_f_1785_, lean_object* v_init_1786_, lean_object* v_t_1787_){
_start:
{
lean_object* v___x_1788_; 
v___x_1788_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_foldl_spec__0_spec__0___redArg(v_f_1785_, v_init_1786_, v_t_1787_);
return v___x_1788_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_foldl_spec__0_spec__0(lean_object* v_00_u03b1_1789_, lean_object* v_00_u03c3_1790_, lean_object* v_f_1791_, lean_object* v_init_1792_, lean_object* v_x_1793_){
_start:
{
lean_object* v___x_1794_; 
v___x_1794_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_foldl_spec__0_spec__0___redArg(v_f_1791_, v_init_1792_, v_x_1793_);
return v___x_1794_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_foldlM___redArg(lean_object* v_inst_1795_, lean_object* v_f_1796_, lean_object* v_init_1797_, lean_object* v_m_1798_){
_start:
{
lean_object* v___x_1799_; 
v___x_1799_ = l_Std_DTreeMap_Internal_Impl_foldlM___redArg(v_inst_1795_, v_f_1796_, v_init_1797_, v_m_1798_);
return v___x_1799_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_foldlM(lean_object* v_00_u03b1_1800_, lean_object* v_m_x27_1801_, lean_object* v_00_u03c3_1802_, lean_object* v_inst_1803_, lean_object* v_f_1804_, lean_object* v_init_1805_, lean_object* v_m_1806_){
_start:
{
lean_object* v___x_1807_; 
v___x_1807_ = l_Std_DTreeMap_Internal_Impl_foldlM___redArg(v_inst_1803_, v_f_1804_, v_init_1805_, v_m_1806_);
return v___x_1807_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_forM___redArg___lam__0(lean_object* v_f_1808_, lean_object* v_x_1809_, lean_object* v_k_1810_, lean_object* v_v_1811_){
_start:
{
lean_object* v___x_1812_; 
v___x_1812_ = lean_apply_2(v_f_1808_, v_k_1810_, v_v_1811_);
return v___x_1812_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_forM___redArg(lean_object* v_inst_1813_, lean_object* v_f_1814_, lean_object* v_m_1815_){
_start:
{
lean_object* v___f_1816_; lean_object* v___x_1817_; lean_object* v___x_1818_; 
v___f_1816_ = lean_alloc_closure((void*)(l_Lean_NameMap_forM___redArg___lam__0), 4, 1);
lean_closure_set(v___f_1816_, 0, v_f_1814_);
v___x_1817_ = lean_box(0);
v___x_1818_ = l_Std_DTreeMap_Internal_Impl_foldlM___redArg(v_inst_1813_, v___f_1816_, v___x_1817_, v_m_1815_);
return v___x_1818_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_forM(lean_object* v_00_u03b1_1819_, lean_object* v_m_x27_1820_, lean_object* v_inst_1821_, lean_object* v_f_1822_, lean_object* v_m_1823_){
_start:
{
lean_object* v___x_1824_; 
v___x_1824_ = l_Lean_NameMap_forM___redArg(v_inst_1821_, v_f_1822_, v_m_1823_);
return v___x_1824_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_NameMap_keys_spec__0___redArg(lean_object* v_init_1825_, lean_object* v_x_1826_){
_start:
{
if (lean_obj_tag(v_x_1826_) == 0)
{
lean_object* v_k_1827_; lean_object* v_l_1828_; lean_object* v_r_1829_; lean_object* v___x_1830_; lean_object* v___x_1831_; 
v_k_1827_ = lean_ctor_get(v_x_1826_, 1);
v_l_1828_ = lean_ctor_get(v_x_1826_, 3);
v_r_1829_ = lean_ctor_get(v_x_1826_, 4);
v___x_1830_ = l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_NameMap_keys_spec__0___redArg(v_init_1825_, v_r_1829_);
lean_inc(v_k_1827_);
v___x_1831_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1831_, 0, v_k_1827_);
lean_ctor_set(v___x_1831_, 1, v___x_1830_);
v_init_1825_ = v___x_1831_;
v_x_1826_ = v_l_1828_;
goto _start;
}
else
{
return v_init_1825_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_NameMap_keys_spec__0___redArg___boxed(lean_object* v_init_1833_, lean_object* v_x_1834_){
_start:
{
lean_object* v_res_1835_; 
v_res_1835_ = l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_NameMap_keys_spec__0___redArg(v_init_1833_, v_x_1834_);
lean_dec(v_x_1834_);
return v_res_1835_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_keys___redArg(lean_object* v_m_1836_){
_start:
{
lean_object* v___x_1837_; lean_object* v___x_1838_; 
v___x_1837_ = lean_box(0);
v___x_1838_ = l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_NameMap_keys_spec__0___redArg(v___x_1837_, v_m_1836_);
return v___x_1838_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_keys___redArg___boxed(lean_object* v_m_1839_){
_start:
{
lean_object* v_res_1840_; 
v_res_1840_ = l_Lean_NameMap_keys___redArg(v_m_1839_);
lean_dec(v_m_1839_);
return v_res_1840_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_keys(lean_object* v_00_u03b1_1841_, lean_object* v_m_1842_){
_start:
{
lean_object* v___x_1843_; 
v___x_1843_ = l_Lean_NameMap_keys___redArg(v_m_1842_);
return v___x_1843_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_keys___boxed(lean_object* v_00_u03b1_1844_, lean_object* v_m_1845_){
_start:
{
lean_object* v_res_1846_; 
v_res_1846_ = l_Lean_NameMap_keys(v_00_u03b1_1844_, v_m_1845_);
lean_dec(v_m_1845_);
return v_res_1846_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_NameMap_keys_spec__0(lean_object* v_00_u03b1_1847_, lean_object* v_init_1848_, lean_object* v_x_1849_){
_start:
{
lean_object* v___x_1850_; 
v___x_1850_ = l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_NameMap_keys_spec__0___redArg(v_init_1848_, v_x_1849_);
return v___x_1850_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_NameMap_keys_spec__0___boxed(lean_object* v_00_u03b1_1851_, lean_object* v_init_1852_, lean_object* v_x_1853_){
_start:
{
lean_object* v_res_1854_; 
v_res_1854_ = l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_NameMap_keys_spec__0(v_00_u03b1_1851_, v_init_1852_, v_x_1853_);
lean_dec(v_x_1853_);
return v_res_1854_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_keysArray_spec__0_spec__0___redArg(lean_object* v_init_1855_, lean_object* v_x_1856_){
_start:
{
if (lean_obj_tag(v_x_1856_) == 0)
{
lean_object* v_k_1857_; lean_object* v_l_1858_; lean_object* v_r_1859_; lean_object* v___x_1860_; lean_object* v___x_1861_; 
v_k_1857_ = lean_ctor_get(v_x_1856_, 1);
lean_inc(v_k_1857_);
v_l_1858_ = lean_ctor_get(v_x_1856_, 3);
lean_inc(v_l_1858_);
v_r_1859_ = lean_ctor_get(v_x_1856_, 4);
lean_inc(v_r_1859_);
lean_dec_ref_known(v_x_1856_, 5);
v___x_1860_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_keysArray_spec__0_spec__0___redArg(v_init_1855_, v_l_1858_);
v___x_1861_ = lean_array_push(v___x_1860_, v_k_1857_);
v_init_1855_ = v___x_1861_;
v_x_1856_ = v_r_1859_;
goto _start;
}
else
{
return v_init_1855_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_keysArray___redArg(lean_object* v_m_1863_){
_start:
{
lean_object* v___y_1865_; 
if (lean_obj_tag(v_m_1863_) == 0)
{
lean_object* v_size_1868_; 
v_size_1868_ = lean_ctor_get(v_m_1863_, 0);
lean_inc(v_size_1868_);
v___y_1865_ = v_size_1868_;
goto v___jp_1864_;
}
else
{
lean_object* v___x_1869_; 
v___x_1869_ = lean_unsigned_to_nat(0u);
v___y_1865_ = v___x_1869_;
goto v___jp_1864_;
}
v___jp_1864_:
{
lean_object* v___x_1866_; lean_object* v___x_1867_; 
v___x_1866_ = lean_mk_empty_array_with_capacity(v___y_1865_);
lean_dec(v___y_1865_);
v___x_1867_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_keysArray_spec__0_spec__0___redArg(v___x_1866_, v_m_1863_);
return v___x_1867_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_keysArray(lean_object* v_00_u03b1_1870_, lean_object* v_m_1871_){
_start:
{
lean_object* v___x_1872_; 
v___x_1872_ = l_Lean_NameMap_keysArray___redArg(v_m_1871_);
return v___x_1872_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_keysArray_spec__0___redArg(lean_object* v_init_1873_, lean_object* v_t_1874_){
_start:
{
lean_object* v___x_1875_; 
v___x_1875_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_keysArray_spec__0_spec__0___redArg(v_init_1873_, v_t_1874_);
return v___x_1875_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_keysArray_spec__0(lean_object* v_00_u03b1_1876_, lean_object* v_init_1877_, lean_object* v_t_1878_){
_start:
{
lean_object* v___x_1879_; 
v___x_1879_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_keysArray_spec__0_spec__0___redArg(v_init_1877_, v_t_1878_);
return v___x_1879_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_keysArray_spec__0_spec__0(lean_object* v_00_u03b1_1880_, lean_object* v_init_1881_, lean_object* v_x_1882_){
_start:
{
lean_object* v___x_1883_; 
v___x_1883_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_keysArray_spec__0_spec__0___redArg(v_init_1881_, v_x_1882_);
return v___x_1883_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_NameMap_values_spec__0___redArg(lean_object* v_init_1884_, lean_object* v_x_1885_){
_start:
{
if (lean_obj_tag(v_x_1885_) == 0)
{
lean_object* v_v_1886_; lean_object* v_l_1887_; lean_object* v_r_1888_; lean_object* v___x_1889_; lean_object* v___x_1890_; 
v_v_1886_ = lean_ctor_get(v_x_1885_, 2);
v_l_1887_ = lean_ctor_get(v_x_1885_, 3);
v_r_1888_ = lean_ctor_get(v_x_1885_, 4);
v___x_1889_ = l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_NameMap_values_spec__0___redArg(v_init_1884_, v_r_1888_);
lean_inc(v_v_1886_);
v___x_1890_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1890_, 0, v_v_1886_);
lean_ctor_set(v___x_1890_, 1, v___x_1889_);
v_init_1884_ = v___x_1890_;
v_x_1885_ = v_l_1887_;
goto _start;
}
else
{
return v_init_1884_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_NameMap_values_spec__0___redArg___boxed(lean_object* v_init_1892_, lean_object* v_x_1893_){
_start:
{
lean_object* v_res_1894_; 
v_res_1894_ = l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_NameMap_values_spec__0___redArg(v_init_1892_, v_x_1893_);
lean_dec(v_x_1893_);
return v_res_1894_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_values___redArg(lean_object* v_m_1895_){
_start:
{
lean_object* v___x_1896_; lean_object* v___x_1897_; 
v___x_1896_ = lean_box(0);
v___x_1897_ = l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_NameMap_values_spec__0___redArg(v___x_1896_, v_m_1895_);
return v___x_1897_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_values___redArg___boxed(lean_object* v_m_1898_){
_start:
{
lean_object* v_res_1899_; 
v_res_1899_ = l_Lean_NameMap_values___redArg(v_m_1898_);
lean_dec(v_m_1898_);
return v_res_1899_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_values(lean_object* v_00_u03b1_1900_, lean_object* v_m_1901_){
_start:
{
lean_object* v___x_1902_; 
v___x_1902_ = l_Lean_NameMap_values___redArg(v_m_1901_);
return v___x_1902_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_values___boxed(lean_object* v_00_u03b1_1903_, lean_object* v_m_1904_){
_start:
{
lean_object* v_res_1905_; 
v_res_1905_ = l_Lean_NameMap_values(v_00_u03b1_1903_, v_m_1904_);
lean_dec(v_m_1904_);
return v_res_1905_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_NameMap_values_spec__0(lean_object* v_00_u03b1_1906_, lean_object* v_init_1907_, lean_object* v_x_1908_){
_start:
{
lean_object* v___x_1909_; 
v___x_1909_ = l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_NameMap_values_spec__0___redArg(v_init_1907_, v_x_1908_);
return v___x_1909_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_NameMap_values_spec__0___boxed(lean_object* v_00_u03b1_1910_, lean_object* v_init_1911_, lean_object* v_x_1912_){
_start:
{
lean_object* v_res_1913_; 
v_res_1913_ = l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_NameMap_values_spec__0(v_00_u03b1_1910_, v_init_1911_, v_x_1912_);
lean_dec(v_x_1912_);
return v_res_1913_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_valuesArray_spec__0_spec__0___redArg(lean_object* v_init_1914_, lean_object* v_x_1915_){
_start:
{
if (lean_obj_tag(v_x_1915_) == 0)
{
lean_object* v_v_1916_; lean_object* v_l_1917_; lean_object* v_r_1918_; lean_object* v___x_1919_; lean_object* v___x_1920_; 
v_v_1916_ = lean_ctor_get(v_x_1915_, 2);
lean_inc(v_v_1916_);
v_l_1917_ = lean_ctor_get(v_x_1915_, 3);
lean_inc(v_l_1917_);
v_r_1918_ = lean_ctor_get(v_x_1915_, 4);
lean_inc(v_r_1918_);
lean_dec_ref_known(v_x_1915_, 5);
v___x_1919_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_valuesArray_spec__0_spec__0___redArg(v_init_1914_, v_l_1917_);
v___x_1920_ = lean_array_push(v___x_1919_, v_v_1916_);
v_init_1914_ = v___x_1920_;
v_x_1915_ = v_r_1918_;
goto _start;
}
else
{
return v_init_1914_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_valuesArray___redArg(lean_object* v_m_1922_){
_start:
{
lean_object* v___y_1924_; 
if (lean_obj_tag(v_m_1922_) == 0)
{
lean_object* v_size_1927_; 
v_size_1927_ = lean_ctor_get(v_m_1922_, 0);
lean_inc(v_size_1927_);
v___y_1924_ = v_size_1927_;
goto v___jp_1923_;
}
else
{
lean_object* v___x_1928_; 
v___x_1928_ = lean_unsigned_to_nat(0u);
v___y_1924_ = v___x_1928_;
goto v___jp_1923_;
}
v___jp_1923_:
{
lean_object* v___x_1925_; lean_object* v___x_1926_; 
v___x_1925_ = lean_mk_empty_array_with_capacity(v___y_1924_);
lean_dec(v___y_1924_);
v___x_1926_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_valuesArray_spec__0_spec__0___redArg(v___x_1925_, v_m_1922_);
return v___x_1926_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_valuesArray(lean_object* v_00_u03b1_1929_, lean_object* v_m_1930_){
_start:
{
lean_object* v___x_1931_; 
v___x_1931_ = l_Lean_NameMap_valuesArray___redArg(v_m_1930_);
return v___x_1931_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_valuesArray_spec__0___redArg(lean_object* v_init_1932_, lean_object* v_t_1933_){
_start:
{
lean_object* v___x_1934_; 
v___x_1934_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_valuesArray_spec__0_spec__0___redArg(v_init_1932_, v_t_1933_);
return v___x_1934_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_valuesArray_spec__0(lean_object* v_00_u03b1_1935_, lean_object* v_init_1936_, lean_object* v_t_1937_){
_start:
{
lean_object* v___x_1938_; 
v___x_1938_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_valuesArray_spec__0_spec__0___redArg(v_init_1936_, v_t_1937_);
return v___x_1938_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_valuesArray_spec__0_spec__0(lean_object* v_00_u03b1_1939_, lean_object* v_init_1940_, lean_object* v_x_1941_){
_start:
{
lean_object* v___x_1942_; 
v___x_1942_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_valuesArray_spec__0_spec__0___redArg(v_init_1940_, v_x_1941_);
return v___x_1942_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_NameMap_toList_spec__0___redArg(lean_object* v_init_1943_, lean_object* v_x_1944_){
_start:
{
if (lean_obj_tag(v_x_1944_) == 0)
{
lean_object* v_k_1945_; lean_object* v_v_1946_; lean_object* v_l_1947_; lean_object* v_r_1948_; lean_object* v___x_1949_; lean_object* v___x_1950_; lean_object* v___x_1951_; 
v_k_1945_ = lean_ctor_get(v_x_1944_, 1);
v_v_1946_ = lean_ctor_get(v_x_1944_, 2);
v_l_1947_ = lean_ctor_get(v_x_1944_, 3);
v_r_1948_ = lean_ctor_get(v_x_1944_, 4);
v___x_1949_ = l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_NameMap_toList_spec__0___redArg(v_init_1943_, v_r_1948_);
lean_inc(v_v_1946_);
lean_inc(v_k_1945_);
v___x_1950_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1950_, 0, v_k_1945_);
lean_ctor_set(v___x_1950_, 1, v_v_1946_);
v___x_1951_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1951_, 0, v___x_1950_);
lean_ctor_set(v___x_1951_, 1, v___x_1949_);
v_init_1943_ = v___x_1951_;
v_x_1944_ = v_l_1947_;
goto _start;
}
else
{
return v_init_1943_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_NameMap_toList_spec__0___redArg___boxed(lean_object* v_init_1953_, lean_object* v_x_1954_){
_start:
{
lean_object* v_res_1955_; 
v_res_1955_ = l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_NameMap_toList_spec__0___redArg(v_init_1953_, v_x_1954_);
lean_dec(v_x_1954_);
return v_res_1955_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_toList___redArg(lean_object* v_m_1956_){
_start:
{
lean_object* v___x_1957_; lean_object* v___x_1958_; 
v___x_1957_ = lean_box(0);
v___x_1958_ = l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_NameMap_toList_spec__0___redArg(v___x_1957_, v_m_1956_);
return v___x_1958_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_toList___redArg___boxed(lean_object* v_m_1959_){
_start:
{
lean_object* v_res_1960_; 
v_res_1960_ = l_Lean_NameMap_toList___redArg(v_m_1959_);
lean_dec(v_m_1959_);
return v_res_1960_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_toList(lean_object* v_00_u03b1_1961_, lean_object* v_m_1962_){
_start:
{
lean_object* v___x_1963_; 
v___x_1963_ = l_Lean_NameMap_toList___redArg(v_m_1962_);
return v___x_1963_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_toList___boxed(lean_object* v_00_u03b1_1964_, lean_object* v_m_1965_){
_start:
{
lean_object* v_res_1966_; 
v_res_1966_ = l_Lean_NameMap_toList(v_00_u03b1_1964_, v_m_1965_);
lean_dec(v_m_1965_);
return v_res_1966_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_NameMap_toList_spec__0(lean_object* v_00_u03b1_1967_, lean_object* v_init_1968_, lean_object* v_x_1969_){
_start:
{
lean_object* v___x_1970_; 
v___x_1970_ = l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_NameMap_toList_spec__0___redArg(v_init_1968_, v_x_1969_);
return v___x_1970_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_NameMap_toList_spec__0___boxed(lean_object* v_00_u03b1_1971_, lean_object* v_init_1972_, lean_object* v_x_1973_){
_start:
{
lean_object* v_res_1974_; 
v_res_1974_ = l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_NameMap_toList_spec__0(v_00_u03b1_1971_, v_init_1972_, v_x_1973_);
lean_dec(v_x_1973_);
return v_res_1974_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_toArray_spec__0_spec__0___redArg(lean_object* v_init_1975_, lean_object* v_x_1976_){
_start:
{
if (lean_obj_tag(v_x_1976_) == 0)
{
lean_object* v_k_1977_; lean_object* v_v_1978_; lean_object* v_l_1979_; lean_object* v_r_1980_; lean_object* v___x_1981_; lean_object* v___x_1982_; lean_object* v___x_1983_; 
v_k_1977_ = lean_ctor_get(v_x_1976_, 1);
v_v_1978_ = lean_ctor_get(v_x_1976_, 2);
v_l_1979_ = lean_ctor_get(v_x_1976_, 3);
v_r_1980_ = lean_ctor_get(v_x_1976_, 4);
v___x_1981_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_toArray_spec__0_spec__0___redArg(v_init_1975_, v_l_1979_);
lean_inc(v_v_1978_);
lean_inc(v_k_1977_);
v___x_1982_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1982_, 0, v_k_1977_);
lean_ctor_set(v___x_1982_, 1, v_v_1978_);
v___x_1983_ = lean_array_push(v___x_1981_, v___x_1982_);
v_init_1975_ = v___x_1983_;
v_x_1976_ = v_r_1980_;
goto _start;
}
else
{
return v_init_1975_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_toArray_spec__0_spec__0___redArg___boxed(lean_object* v_init_1985_, lean_object* v_x_1986_){
_start:
{
lean_object* v_res_1987_; 
v_res_1987_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_toArray_spec__0_spec__0___redArg(v_init_1985_, v_x_1986_);
lean_dec(v_x_1986_);
return v_res_1987_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_toArray___redArg(lean_object* v_m_1990_){
_start:
{
lean_object* v___x_1991_; lean_object* v___x_1992_; 
v___x_1991_ = ((lean_object*)(l_Lean_NameMap_toArray___redArg___closed__0));
v___x_1992_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_toArray_spec__0_spec__0___redArg(v___x_1991_, v_m_1990_);
return v___x_1992_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_toArray___redArg___boxed(lean_object* v_m_1993_){
_start:
{
lean_object* v_res_1994_; 
v_res_1994_ = l_Lean_NameMap_toArray___redArg(v_m_1993_);
lean_dec(v_m_1993_);
return v_res_1994_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_toArray(lean_object* v_00_u03b1_1995_, lean_object* v_m_1996_){
_start:
{
lean_object* v___x_1997_; 
v___x_1997_ = l_Lean_NameMap_toArray___redArg(v_m_1996_);
return v___x_1997_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_toArray___boxed(lean_object* v_00_u03b1_1998_, lean_object* v_m_1999_){
_start:
{
lean_object* v_res_2000_; 
v_res_2000_ = l_Lean_NameMap_toArray(v_00_u03b1_1998_, v_m_1999_);
lean_dec(v_m_1999_);
return v_res_2000_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_toArray_spec__0___redArg(lean_object* v_init_2001_, lean_object* v_t_2002_){
_start:
{
lean_object* v___x_2003_; 
v___x_2003_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_toArray_spec__0_spec__0___redArg(v_init_2001_, v_t_2002_);
return v___x_2003_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_toArray_spec__0___redArg___boxed(lean_object* v_init_2004_, lean_object* v_t_2005_){
_start:
{
lean_object* v_res_2006_; 
v_res_2006_ = l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_toArray_spec__0___redArg(v_init_2004_, v_t_2005_);
lean_dec(v_t_2005_);
return v_res_2006_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_toArray_spec__0(lean_object* v_00_u03b1_2007_, lean_object* v_init_2008_, lean_object* v_t_2009_){
_start:
{
lean_object* v___x_2010_; 
v___x_2010_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_toArray_spec__0_spec__0___redArg(v_init_2008_, v_t_2009_);
return v___x_2010_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_toArray_spec__0___boxed(lean_object* v_00_u03b1_2011_, lean_object* v_init_2012_, lean_object* v_t_2013_){
_start:
{
lean_object* v_res_2014_; 
v_res_2014_ = l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_toArray_spec__0(v_00_u03b1_2011_, v_init_2012_, v_t_2013_);
lean_dec(v_t_2013_);
return v_res_2014_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_toArray_spec__0_spec__0(lean_object* v_00_u03b1_2015_, lean_object* v_init_2016_, lean_object* v_x_2017_){
_start:
{
lean_object* v___x_2018_; 
v___x_2018_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_toArray_spec__0_spec__0___redArg(v_init_2016_, v_x_2017_);
return v___x_2018_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_toArray_spec__0_spec__0___boxed(lean_object* v_00_u03b1_2019_, lean_object* v_init_2020_, lean_object* v_x_2021_){
_start:
{
lean_object* v_res_2022_; 
v_res_2022_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_toArray_spec__0_spec__0(v_00_u03b1_2019_, v_init_2020_, v_x_2021_);
lean_dec(v_x_2021_);
return v_res_2022_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_NameMap_ofList_spec__0___redArg(lean_object* v_as_x27_2023_, lean_object* v_b_2024_){
_start:
{
if (lean_obj_tag(v_as_x27_2023_) == 0)
{
return v_b_2024_;
}
else
{
lean_object* v_head_2025_; lean_object* v_tail_2026_; lean_object* v_fst_2027_; lean_object* v_snd_2028_; lean_object* v_r_2029_; 
v_head_2025_ = lean_ctor_get(v_as_x27_2023_, 0);
v_tail_2026_ = lean_ctor_get(v_as_x27_2023_, 1);
v_fst_2027_ = lean_ctor_get(v_head_2025_, 0);
v_snd_2028_ = lean_ctor_get(v_head_2025_, 1);
lean_inc(v_snd_2028_);
lean_inc(v_fst_2027_);
v_r_2029_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_fst_2027_, v_snd_2028_, v_b_2024_);
v_as_x27_2023_ = v_tail_2026_;
v_b_2024_ = v_r_2029_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_NameMap_ofList_spec__0___redArg___boxed(lean_object* v_as_x27_2031_, lean_object* v_b_2032_){
_start:
{
lean_object* v_res_2033_; 
v_res_2033_ = l_List_forIn_x27_loop___at___00Lean_NameMap_ofList_spec__0___redArg(v_as_x27_2031_, v_b_2032_);
lean_dec(v_as_x27_2031_);
return v_res_2033_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_ofList___redArg(lean_object* v_l_2034_){
_start:
{
lean_object* v_r_2035_; lean_object* v___x_2036_; 
v_r_2035_ = lean_box(1);
v___x_2036_ = l_List_forIn_x27_loop___at___00Lean_NameMap_ofList_spec__0___redArg(v_l_2034_, v_r_2035_);
return v___x_2036_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_ofList___redArg___boxed(lean_object* v_l_2037_){
_start:
{
lean_object* v_res_2038_; 
v_res_2038_ = l_Lean_NameMap_ofList___redArg(v_l_2037_);
lean_dec(v_l_2037_);
return v_res_2038_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_ofList(lean_object* v_00_u03b1_2039_, lean_object* v_l_2040_){
_start:
{
lean_object* v___x_2041_; 
v___x_2041_ = l_Lean_NameMap_ofList___redArg(v_l_2040_);
return v___x_2041_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_ofList___boxed(lean_object* v_00_u03b1_2042_, lean_object* v_l_2043_){
_start:
{
lean_object* v_res_2044_; 
v_res_2044_ = l_Lean_NameMap_ofList(v_00_u03b1_2042_, v_l_2043_);
lean_dec(v_l_2043_);
return v_res_2044_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_NameMap_ofList_spec__0(lean_object* v_00_u03b1_2045_, lean_object* v_as_2046_, lean_object* v_as_x27_2047_, lean_object* v_b_2048_, lean_object* v_a_2049_){
_start:
{
lean_object* v___x_2050_; 
v___x_2050_ = l_List_forIn_x27_loop___at___00Lean_NameMap_ofList_spec__0___redArg(v_as_x27_2047_, v_b_2048_);
return v___x_2050_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_NameMap_ofList_spec__0___boxed(lean_object* v_00_u03b1_2051_, lean_object* v_as_2052_, lean_object* v_as_x27_2053_, lean_object* v_b_2054_, lean_object* v_a_2055_){
_start:
{
lean_object* v_res_2056_; 
v_res_2056_ = l_List_forIn_x27_loop___at___00Lean_NameMap_ofList_spec__0(v_00_u03b1_2051_, v_as_2052_, v_as_x27_2053_, v_b_2054_, v_a_2055_);
lean_dec(v_as_x27_2053_);
lean_dec(v_as_2052_);
return v_res_2056_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_NameMap_ofArray_spec__0___redArg(lean_object* v_as_2057_, size_t v_sz_2058_, size_t v_i_2059_, lean_object* v_b_2060_){
_start:
{
uint8_t v___x_2061_; 
v___x_2061_ = lean_usize_dec_lt(v_i_2059_, v_sz_2058_);
if (v___x_2061_ == 0)
{
return v_b_2060_;
}
else
{
lean_object* v_a_2062_; lean_object* v_fst_2063_; lean_object* v_snd_2064_; lean_object* v_r_2065_; size_t v___x_2066_; size_t v___x_2067_; 
v_a_2062_ = lean_array_uget_borrowed(v_as_2057_, v_i_2059_);
v_fst_2063_ = lean_ctor_get(v_a_2062_, 0);
v_snd_2064_ = lean_ctor_get(v_a_2062_, 1);
lean_inc(v_snd_2064_);
lean_inc(v_fst_2063_);
v_r_2065_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_fst_2063_, v_snd_2064_, v_b_2060_);
v___x_2066_ = ((size_t)1ULL);
v___x_2067_ = lean_usize_add(v_i_2059_, v___x_2066_);
v_i_2059_ = v___x_2067_;
v_b_2060_ = v_r_2065_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_NameMap_ofArray_spec__0___redArg___boxed(lean_object* v_as_2069_, lean_object* v_sz_2070_, lean_object* v_i_2071_, lean_object* v_b_2072_){
_start:
{
size_t v_sz_boxed_2073_; size_t v_i_boxed_2074_; lean_object* v_res_2075_; 
v_sz_boxed_2073_ = lean_unbox_usize(v_sz_2070_);
lean_dec(v_sz_2070_);
v_i_boxed_2074_ = lean_unbox_usize(v_i_2071_);
lean_dec(v_i_2071_);
v_res_2075_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_NameMap_ofArray_spec__0___redArg(v_as_2069_, v_sz_boxed_2073_, v_i_boxed_2074_, v_b_2072_);
lean_dec_ref(v_as_2069_);
return v_res_2075_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_ofArray___redArg(lean_object* v_l_2076_){
_start:
{
lean_object* v_r_2077_; size_t v_sz_2078_; size_t v___x_2079_; lean_object* v___x_2080_; 
v_r_2077_ = lean_box(1);
v_sz_2078_ = lean_array_size(v_l_2076_);
v___x_2079_ = ((size_t)0ULL);
v___x_2080_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_NameMap_ofArray_spec__0___redArg(v_l_2076_, v_sz_2078_, v___x_2079_, v_r_2077_);
return v___x_2080_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_ofArray___redArg___boxed(lean_object* v_l_2081_){
_start:
{
lean_object* v_res_2082_; 
v_res_2082_ = l_Lean_NameMap_ofArray___redArg(v_l_2081_);
lean_dec_ref(v_l_2081_);
return v_res_2082_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_ofArray(lean_object* v_00_u03b1_2083_, lean_object* v_l_2084_){
_start:
{
lean_object* v___x_2085_; 
v___x_2085_ = l_Lean_NameMap_ofArray___redArg(v_l_2084_);
return v___x_2085_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_ofArray___boxed(lean_object* v_00_u03b1_2086_, lean_object* v_l_2087_){
_start:
{
lean_object* v_res_2088_; 
v_res_2088_ = l_Lean_NameMap_ofArray(v_00_u03b1_2086_, v_l_2087_);
lean_dec_ref(v_l_2087_);
return v_res_2088_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_NameMap_ofArray_spec__0(lean_object* v_00_u03b1_2089_, lean_object* v_as_2090_, size_t v_sz_2091_, size_t v_i_2092_, lean_object* v_b_2093_){
_start:
{
lean_object* v___x_2094_; 
v___x_2094_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_NameMap_ofArray_spec__0___redArg(v_as_2090_, v_sz_2091_, v_i_2092_, v_b_2093_);
return v___x_2094_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_NameMap_ofArray_spec__0___boxed(lean_object* v_00_u03b1_2095_, lean_object* v_as_2096_, lean_object* v_sz_2097_, lean_object* v_i_2098_, lean_object* v_b_2099_){
_start:
{
size_t v_sz_boxed_2100_; size_t v_i_boxed_2101_; lean_object* v_res_2102_; 
v_sz_boxed_2100_ = lean_unbox_usize(v_sz_2097_);
lean_dec(v_sz_2097_);
v_i_boxed_2101_ = lean_unbox_usize(v_i_2098_);
lean_dec(v_i_2098_);
v_res_2102_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_NameMap_ofArray_spec__0(v_00_u03b1_2095_, v_as_2096_, v_sz_boxed_2100_, v_i_boxed_2101_, v_b_2099_);
lean_dec_ref(v_as_2096_);
return v_res_2102_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_NameMap_mergeWith_spec__0___redArg___lam__0(lean_object* v_b_u2082_2103_, lean_object* v_f_2104_, lean_object* v_a_2105_, lean_object* v_x_2106_){
_start:
{
if (lean_obj_tag(v_x_2106_) == 0)
{
lean_object* v___x_2107_; 
lean_dec(v_a_2105_);
lean_dec(v_f_2104_);
v___x_2107_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2107_, 0, v_b_u2082_2103_);
return v___x_2107_;
}
else
{
lean_object* v_val_2108_; lean_object* v___x_2110_; uint8_t v_isShared_2111_; uint8_t v_isSharedCheck_2116_; 
v_val_2108_ = lean_ctor_get(v_x_2106_, 0);
v_isSharedCheck_2116_ = !lean_is_exclusive(v_x_2106_);
if (v_isSharedCheck_2116_ == 0)
{
v___x_2110_ = v_x_2106_;
v_isShared_2111_ = v_isSharedCheck_2116_;
goto v_resetjp_2109_;
}
else
{
lean_inc(v_val_2108_);
lean_dec(v_x_2106_);
v___x_2110_ = lean_box(0);
v_isShared_2111_ = v_isSharedCheck_2116_;
goto v_resetjp_2109_;
}
v_resetjp_2109_:
{
lean_object* v___x_2112_; lean_object* v___x_2114_; 
v___x_2112_ = lean_apply_3(v_f_2104_, v_a_2105_, v_val_2108_, v_b_u2082_2103_);
if (v_isShared_2111_ == 0)
{
lean_ctor_set(v___x_2110_, 0, v___x_2112_);
v___x_2114_ = v___x_2110_;
goto v_reusejp_2113_;
}
else
{
lean_object* v_reuseFailAlloc_2115_; 
v_reuseFailAlloc_2115_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2115_, 0, v___x_2112_);
v___x_2114_ = v_reuseFailAlloc_2115_;
goto v_reusejp_2113_;
}
v_reusejp_2113_:
{
return v___x_2114_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_NameMap_mergeWith_spec__0___redArg(lean_object* v_b_u2082_2117_, lean_object* v_f_2118_, lean_object* v_a_2119_, lean_object* v_k_2120_, lean_object* v_t_2121_){
_start:
{
if (lean_obj_tag(v_t_2121_) == 0)
{
lean_object* v_size_2122_; lean_object* v_k_2123_; lean_object* v_v_2124_; lean_object* v_l_2125_; lean_object* v_r_2126_; lean_object* v___x_2128_; uint8_t v_isShared_2129_; uint8_t v_isSharedCheck_2141_; 
v_size_2122_ = lean_ctor_get(v_t_2121_, 0);
v_k_2123_ = lean_ctor_get(v_t_2121_, 1);
v_v_2124_ = lean_ctor_get(v_t_2121_, 2);
v_l_2125_ = lean_ctor_get(v_t_2121_, 3);
v_r_2126_ = lean_ctor_get(v_t_2121_, 4);
v_isSharedCheck_2141_ = !lean_is_exclusive(v_t_2121_);
if (v_isSharedCheck_2141_ == 0)
{
v___x_2128_ = v_t_2121_;
v_isShared_2129_ = v_isSharedCheck_2141_;
goto v_resetjp_2127_;
}
else
{
lean_inc(v_r_2126_);
lean_inc(v_l_2125_);
lean_inc(v_v_2124_);
lean_inc(v_k_2123_);
lean_inc(v_size_2122_);
lean_dec(v_t_2121_);
v___x_2128_ = lean_box(0);
v_isShared_2129_ = v_isSharedCheck_2141_;
goto v_resetjp_2127_;
}
v_resetjp_2127_:
{
uint8_t v___x_2130_; 
v___x_2130_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_2120_, v_k_2123_);
switch(v___x_2130_)
{
case 0:
{
lean_object* v_impl_2131_; lean_object* v___x_2132_; 
lean_del_object(v___x_2128_);
lean_dec(v_size_2122_);
v_impl_2131_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_NameMap_mergeWith_spec__0___redArg(v_b_u2082_2117_, v_f_2118_, v_a_2119_, v_k_2120_, v_l_2125_);
v___x_2132_ = l_Std_DTreeMap_Internal_Impl_balance___redArg(v_k_2123_, v_v_2124_, v_impl_2131_, v_r_2126_);
return v___x_2132_;
}
case 1:
{
lean_object* v___x_2133_; lean_object* v___x_2134_; lean_object* v_val_2135_; lean_object* v___x_2137_; 
lean_dec(v_k_2123_);
v___x_2133_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2133_, 0, v_v_2124_);
v___x_2134_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_NameMap_mergeWith_spec__0___redArg___lam__0(v_b_u2082_2117_, v_f_2118_, v_a_2119_, v___x_2133_);
v_val_2135_ = lean_ctor_get(v___x_2134_, 0);
lean_inc(v_val_2135_);
lean_dec(v___x_2134_);
if (v_isShared_2129_ == 0)
{
lean_ctor_set(v___x_2128_, 2, v_val_2135_);
lean_ctor_set(v___x_2128_, 1, v_k_2120_);
v___x_2137_ = v___x_2128_;
goto v_reusejp_2136_;
}
else
{
lean_object* v_reuseFailAlloc_2138_; 
v_reuseFailAlloc_2138_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2138_, 0, v_size_2122_);
lean_ctor_set(v_reuseFailAlloc_2138_, 1, v_k_2120_);
lean_ctor_set(v_reuseFailAlloc_2138_, 2, v_val_2135_);
lean_ctor_set(v_reuseFailAlloc_2138_, 3, v_l_2125_);
lean_ctor_set(v_reuseFailAlloc_2138_, 4, v_r_2126_);
v___x_2137_ = v_reuseFailAlloc_2138_;
goto v_reusejp_2136_;
}
v_reusejp_2136_:
{
return v___x_2137_;
}
}
default: 
{
lean_object* v_impl_2139_; lean_object* v___x_2140_; 
lean_del_object(v___x_2128_);
lean_dec(v_size_2122_);
v_impl_2139_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_NameMap_mergeWith_spec__0___redArg(v_b_u2082_2117_, v_f_2118_, v_a_2119_, v_k_2120_, v_r_2126_);
v___x_2140_ = l_Std_DTreeMap_Internal_Impl_balance___redArg(v_k_2123_, v_v_2124_, v_l_2125_, v_impl_2139_);
return v___x_2140_;
}
}
}
}
else
{
lean_object* v___x_2142_; lean_object* v___x_2143_; lean_object* v_val_2144_; lean_object* v___x_2145_; lean_object* v___x_2146_; 
v___x_2142_ = lean_box(0);
v___x_2143_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_NameMap_mergeWith_spec__0___redArg___lam__0(v_b_u2082_2117_, v_f_2118_, v_a_2119_, v___x_2142_);
v_val_2144_ = lean_ctor_get(v___x_2143_, 0);
lean_inc(v_val_2144_);
lean_dec(v___x_2143_);
v___x_2145_ = lean_unsigned_to_nat(1u);
v___x_2146_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2146_, 0, v___x_2145_);
lean_ctor_set(v___x_2146_, 1, v_k_2120_);
lean_ctor_set(v___x_2146_, 2, v_val_2144_);
lean_ctor_set(v___x_2146_, 3, v_t_2121_);
lean_ctor_set(v___x_2146_, 4, v_t_2121_);
return v___x_2146_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_mergeWith_spec__1_spec__1___redArg(lean_object* v_f_2147_, lean_object* v_init_2148_, lean_object* v_x_2149_){
_start:
{
if (lean_obj_tag(v_x_2149_) == 0)
{
lean_object* v_k_2150_; lean_object* v_v_2151_; lean_object* v_l_2152_; lean_object* v_r_2153_; lean_object* v___x_2154_; lean_object* v___x_2155_; 
v_k_2150_ = lean_ctor_get(v_x_2149_, 1);
lean_inc_n(v_k_2150_, 2);
v_v_2151_ = lean_ctor_get(v_x_2149_, 2);
lean_inc(v_v_2151_);
v_l_2152_ = lean_ctor_get(v_x_2149_, 3);
lean_inc(v_l_2152_);
v_r_2153_ = lean_ctor_get(v_x_2149_, 4);
lean_inc(v_r_2153_);
lean_dec_ref_known(v_x_2149_, 5);
lean_inc_n(v_f_2147_, 2);
v___x_2154_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_mergeWith_spec__1_spec__1___redArg(v_f_2147_, v_init_2148_, v_l_2152_);
v___x_2155_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_NameMap_mergeWith_spec__0___redArg(v_v_2151_, v_f_2147_, v_k_2150_, v_k_2150_, v___x_2154_);
v_init_2148_ = v___x_2155_;
v_x_2149_ = v_r_2153_;
goto _start;
}
else
{
lean_dec(v_f_2147_);
return v_init_2148_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_mergeWith___redArg(lean_object* v_f_2157_, lean_object* v_m_u2081_2158_, lean_object* v_m_u2082_2159_){
_start:
{
lean_object* v___x_2160_; 
v___x_2160_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_mergeWith_spec__1_spec__1___redArg(v_f_2157_, v_m_u2081_2158_, v_m_u2082_2159_);
return v___x_2160_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_mergeWith(lean_object* v_00_u03b1_2161_, lean_object* v_f_2162_, lean_object* v_m_u2081_2163_, lean_object* v_m_u2082_2164_){
_start:
{
lean_object* v___x_2165_; 
v___x_2165_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_mergeWith_spec__1_spec__1___redArg(v_f_2162_, v_m_u2081_2163_, v_m_u2082_2164_);
return v___x_2165_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_NameMap_mergeWith_spec__0(lean_object* v_00_u03b1_2166_, lean_object* v_b_u2082_2167_, lean_object* v_f_2168_, lean_object* v_a_2169_, lean_object* v_k_2170_, lean_object* v_t_2171_, lean_object* v_hl_2172_){
_start:
{
lean_object* v___x_2173_; 
v___x_2173_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_NameMap_mergeWith_spec__0___redArg(v_b_u2082_2167_, v_f_2168_, v_a_2169_, v_k_2170_, v_t_2171_);
return v___x_2173_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_mergeWith_spec__1___redArg(lean_object* v_f_2174_, lean_object* v_init_2175_, lean_object* v_t_2176_){
_start:
{
lean_object* v___x_2177_; 
v___x_2177_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_mergeWith_spec__1_spec__1___redArg(v_f_2174_, v_init_2175_, v_t_2176_);
return v___x_2177_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_mergeWith_spec__1(lean_object* v_00_u03b1_2178_, lean_object* v_f_2179_, lean_object* v_init_2180_, lean_object* v_t_2181_){
_start:
{
lean_object* v___x_2182_; 
v___x_2182_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_mergeWith_spec__1_spec__1___redArg(v_f_2179_, v_init_2180_, v_t_2181_);
return v___x_2182_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_mergeWith_spec__1_spec__1(lean_object* v_00_u03b1_2183_, lean_object* v_f_2184_, lean_object* v_init_2185_, lean_object* v_x_2186_){
_start:
{
lean_object* v___x_2187_; 
v___x_2187_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_mergeWith_spec__1_spec__1___redArg(v_f_2184_, v_init_2185_, v_x_2186_);
return v___x_2187_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_instInsertProdName___redArg___lam__0(lean_object* v_e_2188_, lean_object* v_s_2189_){
_start:
{
lean_object* v_fst_2190_; lean_object* v_snd_2191_; lean_object* v___x_2192_; 
v_fst_2190_ = lean_ctor_get(v_e_2188_, 0);
lean_inc(v_fst_2190_);
v_snd_2191_ = lean_ctor_get(v_e_2188_, 1);
lean_inc(v_snd_2191_);
lean_dec_ref(v_e_2188_);
v___x_2192_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_fst_2190_, v_snd_2191_, v_s_2189_);
return v___x_2192_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_instInsertProdName___redArg(){
_start:
{
lean_object* v___f_2195_; 
v___f_2195_ = ((lean_object*)(l_Lean_NameMap_instInsertProdName___redArg___closed__0));
return v___f_2195_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_instInsertProdName___redArg___boxed(lean_object* v___dummy_2196_){
_start:
{
lean_object* v_res_2197_; 
v_res_2197_ = l_Lean_NameMap_instInsertProdName___redArg();
return v_res_2197_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_instInsertProdName(lean_object* v_00_u03b1_2198_){
_start:
{
lean_object* v___f_2199_; 
v___f_2199_ = ((lean_object*)(l_Lean_NameMap_instInsertProdName___redArg___closed__0));
return v___f_2199_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_instForInProdNameOfMonad___redArg___lam__0(lean_object* v_f_2200_, lean_object* v_a_2201_, lean_object* v_b_2202_, lean_object* v_c_2203_){
_start:
{
lean_object* v___x_2204_; lean_object* v___x_2205_; 
v___x_2204_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2204_, 0, v_a_2201_);
lean_ctor_set(v___x_2204_, 1, v_b_2202_);
v___x_2205_ = lean_apply_2(v_f_2200_, v___x_2204_, v_c_2203_);
return v___x_2205_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_instForInProdNameOfMonad___redArg___lam__1(lean_object* v_toPure_2206_, lean_object* v_____do__lift_2207_){
_start:
{
lean_object* v_a_2208_; lean_object* v___x_2209_; 
v_a_2208_ = lean_ctor_get(v_____do__lift_2207_, 0);
lean_inc(v_a_2208_);
lean_dec_ref(v_____do__lift_2207_);
v___x_2209_ = lean_apply_2(v_toPure_2206_, lean_box(0), v_a_2208_);
return v___x_2209_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_instForInProdNameOfMonad___redArg___lam__2(lean_object* v_inst_2210_, lean_object* v_00_u03b2_2211_, lean_object* v_m_2212_, lean_object* v_init_2213_, lean_object* v_f_2214_){
_start:
{
lean_object* v_toApplicative_2215_; lean_object* v_toBind_2216_; lean_object* v_toPure_2217_; lean_object* v___f_2218_; lean_object* v___x_2219_; lean_object* v___f_2220_; lean_object* v___x_2221_; 
v_toApplicative_2215_ = lean_ctor_get(v_inst_2210_, 0);
v_toBind_2216_ = lean_ctor_get(v_inst_2210_, 1);
lean_inc(v_toBind_2216_);
v_toPure_2217_ = lean_ctor_get(v_toApplicative_2215_, 1);
lean_inc(v_toPure_2217_);
v___f_2218_ = lean_alloc_closure((void*)(l_Lean_NameMap_instForInProdNameOfMonad___redArg___lam__0), 4, 1);
lean_closure_set(v___f_2218_, 0, v_f_2214_);
v___x_2219_ = l_Std_DTreeMap_Internal_Impl_forInStep___redArg(v_inst_2210_, v___f_2218_, v_init_2213_, v_m_2212_);
v___f_2220_ = lean_alloc_closure((void*)(l_Lean_NameMap_instForInProdNameOfMonad___redArg___lam__1), 2, 1);
lean_closure_set(v___f_2220_, 0, v_toPure_2217_);
v___x_2221_ = lean_apply_4(v_toBind_2216_, lean_box(0), lean_box(0), v___x_2219_, v___f_2220_);
return v___x_2221_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_instForInProdNameOfMonad___redArg(lean_object* v_inst_2222_){
_start:
{
lean_object* v___f_2223_; 
v___f_2223_ = lean_alloc_closure((void*)(l_Lean_NameMap_instForInProdNameOfMonad___redArg___lam__2), 5, 1);
lean_closure_set(v___f_2223_, 0, v_inst_2222_);
return v___f_2223_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_instForInProdNameOfMonad(lean_object* v_00_u03b1_2224_, lean_object* v_m_2225_, lean_object* v_inst_2226_){
_start:
{
lean_object* v___f_2227_; 
v___f_2227_ = lean_alloc_closure((void*)(l_Lean_NameMap_instForInProdNameOfMonad___redArg___lam__2), 5, 1);
lean_closure_set(v___f_2227_, 0, v_inst_2226_);
return v___f_2227_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_filter___at___00Lean_NameMap_filter_spec__0___redArg(lean_object* v_f_2228_, lean_object* v_t_2229_){
_start:
{
if (lean_obj_tag(v_t_2229_) == 0)
{
lean_object* v_k_2230_; lean_object* v_v_2231_; lean_object* v_l_2232_; lean_object* v_r_2233_; lean_object* v___x_2234_; uint8_t v___x_2235_; 
v_k_2230_ = lean_ctor_get(v_t_2229_, 1);
lean_inc_n(v_k_2230_, 2);
v_v_2231_ = lean_ctor_get(v_t_2229_, 2);
lean_inc_n(v_v_2231_, 2);
v_l_2232_ = lean_ctor_get(v_t_2229_, 3);
lean_inc(v_l_2232_);
v_r_2233_ = lean_ctor_get(v_t_2229_, 4);
lean_inc(v_r_2233_);
lean_dec_ref_known(v_t_2229_, 5);
lean_inc_ref(v_f_2228_);
v___x_2234_ = lean_apply_2(v_f_2228_, v_k_2230_, v_v_2231_);
v___x_2235_ = lean_unbox(v___x_2234_);
if (v___x_2235_ == 0)
{
lean_object* v_impl_2236_; lean_object* v_impl_2237_; lean_object* v___x_2238_; 
lean_dec(v_v_2231_);
lean_dec(v_k_2230_);
lean_inc_ref(v_f_2228_);
v_impl_2236_ = l_Std_DTreeMap_Internal_Impl_filter___at___00Lean_NameMap_filter_spec__0___redArg(v_f_2228_, v_l_2232_);
v_impl_2237_ = l_Std_DTreeMap_Internal_Impl_filter___at___00Lean_NameMap_filter_spec__0___redArg(v_f_2228_, v_r_2233_);
v___x_2238_ = l_Std_DTreeMap_Internal_Impl_link2___redArg(v_impl_2236_, v_impl_2237_);
return v___x_2238_;
}
else
{
lean_object* v_impl_2239_; lean_object* v_impl_2240_; lean_object* v___x_2241_; 
lean_inc_ref(v_f_2228_);
v_impl_2239_ = l_Std_DTreeMap_Internal_Impl_filter___at___00Lean_NameMap_filter_spec__0___redArg(v_f_2228_, v_l_2232_);
v_impl_2240_ = l_Std_DTreeMap_Internal_Impl_filter___at___00Lean_NameMap_filter_spec__0___redArg(v_f_2228_, v_r_2233_);
v___x_2241_ = l_Std_DTreeMap_Internal_Impl_link___redArg(v_k_2230_, v_v_2231_, v_impl_2239_, v_impl_2240_);
return v___x_2241_;
}
}
else
{
lean_dec_ref(v_f_2228_);
return v_t_2229_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_filter___redArg(lean_object* v_f_2242_, lean_object* v_m_2243_){
_start:
{
lean_object* v___x_2244_; 
v___x_2244_ = l_Std_DTreeMap_Internal_Impl_filter___at___00Lean_NameMap_filter_spec__0___redArg(v_f_2242_, v_m_2243_);
return v___x_2244_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_filter(lean_object* v_00_u03b1_2245_, lean_object* v_f_2246_, lean_object* v_m_2247_){
_start:
{
lean_object* v___x_2248_; 
v___x_2248_ = l_Std_DTreeMap_Internal_Impl_filter___at___00Lean_NameMap_filter_spec__0___redArg(v_f_2246_, v_m_2247_);
return v___x_2248_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_filter___at___00Lean_NameMap_filter_spec__0(lean_object* v_00_u03b1_2249_, lean_object* v_f_2250_, lean_object* v_t_2251_, lean_object* v_hl_2252_){
_start:
{
lean_object* v___x_2253_; 
v___x_2253_ = l_Std_DTreeMap_Internal_Impl_filter___at___00Lean_NameMap_filter_spec__0___redArg(v_f_2250_, v_t_2251_);
return v___x_2253_;
}
}
static lean_object* _init_l_Lean_NameSet_empty(void){
_start:
{
lean_object* v___x_2254_; 
v___x_2254_ = lean_box(1);
return v___x_2254_;
}
}
static lean_object* _init_l_Lean_NameSet_instEmptyCollection(void){
_start:
{
lean_object* v___x_2255_; 
v___x_2255_ = lean_box(1);
return v___x_2255_;
}
}
static lean_object* _init_l_Lean_NameSet_instInhabited(void){
_start:
{
lean_object* v___x_2256_; 
v___x_2256_ = lean_box(1);
return v___x_2256_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameSet_insert(lean_object* v_s_2257_, lean_object* v_n_2258_){
_start:
{
uint8_t v___x_2259_; 
v___x_2259_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_NameMap_contains_spec__0___redArg(v_n_2258_, v_s_2257_);
if (v___x_2259_ == 0)
{
lean_object* v___x_2260_; lean_object* v___x_2261_; 
v___x_2260_ = lean_box(0);
v___x_2261_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_n_2258_, v___x_2260_, v_s_2257_);
return v___x_2261_;
}
else
{
lean_dec(v_n_2258_);
return v_s_2257_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_NameSet_containsThenInsert(lean_object* v_s_2262_, lean_object* v_n_2263_){
_start:
{
uint8_t v___x_2264_; 
v___x_2264_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_NameMap_contains_spec__0___redArg(v_n_2263_, v_s_2262_);
if (v___x_2264_ == 0)
{
lean_object* v___x_2265_; lean_object* v___x_2266_; lean_object* v___x_2267_; lean_object* v___x_2268_; 
v___x_2265_ = lean_box(0);
v___x_2266_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_n_2263_, v___x_2265_, v_s_2262_);
v___x_2267_ = lean_box(v___x_2264_);
v___x_2268_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2268_, 0, v___x_2267_);
lean_ctor_set(v___x_2268_, 1, v___x_2266_);
return v___x_2268_;
}
else
{
lean_object* v___x_2269_; lean_object* v___x_2270_; 
lean_dec(v_n_2263_);
v___x_2269_ = lean_box(v___x_2264_);
v___x_2270_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2270_, 0, v___x_2269_);
lean_ctor_set(v___x_2270_, 1, v_s_2262_);
return v___x_2270_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_NameSet_erase(lean_object* v_s_2271_, lean_object* v_n_2272_){
_start:
{
lean_object* v___x_2273_; 
v___x_2273_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_NameMap_erase_spec__0___redArg(v_n_2272_, v_s_2271_);
return v___x_2273_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameSet_erase___boxed(lean_object* v_s_2274_, lean_object* v_n_2275_){
_start:
{
lean_object* v_res_2276_; 
v_res_2276_ = l_Lean_NameSet_erase(v_s_2274_, v_n_2275_);
lean_dec(v_n_2275_);
return v_res_2276_;
}
}
LEAN_EXPORT uint8_t l_Lean_NameSet_contains(lean_object* v_s_2277_, lean_object* v_n_2278_){
_start:
{
uint8_t v___x_2279_; 
v___x_2279_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_NameMap_contains_spec__0___redArg(v_n_2278_, v_s_2277_);
return v___x_2279_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameSet_contains___boxed(lean_object* v_s_2280_, lean_object* v_n_2281_){
_start:
{
uint8_t v_res_2282_; lean_object* v_r_2283_; 
v_res_2282_ = l_Lean_NameSet_contains(v_s_2280_, v_n_2281_);
lean_dec(v_n_2281_);
lean_dec(v_s_2280_);
v_r_2283_ = lean_box(v_res_2282_);
return v_r_2283_;
}
}
static lean_object* _init_l_Lean_NameSet_instMembershipName(void){
_start:
{
lean_object* v___x_2284_; 
v___x_2284_ = lean_box(0);
return v___x_2284_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameSet_size(lean_object* v_s_2285_){
_start:
{
if (lean_obj_tag(v_s_2285_) == 0)
{
lean_object* v_size_2286_; 
v_size_2286_ = lean_ctor_get(v_s_2285_, 0);
lean_inc(v_size_2286_);
return v_size_2286_;
}
else
{
lean_object* v___x_2287_; 
v___x_2287_ = lean_unsigned_to_nat(0u);
return v___x_2287_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_NameSet_size___boxed(lean_object* v_s_2288_){
_start:
{
lean_object* v_res_2289_; 
v_res_2289_ = l_Lean_NameSet_size(v_s_2288_);
lean_dec(v_s_2288_);
return v_res_2289_;
}
}
LEAN_EXPORT uint8_t l_Lean_NameSet_isEmpty(lean_object* v_s_2290_){
_start:
{
if (lean_obj_tag(v_s_2290_) == 0)
{
uint8_t v___x_2291_; 
v___x_2291_ = 0;
return v___x_2291_;
}
else
{
uint8_t v___x_2292_; 
v___x_2292_ = 1;
return v___x_2292_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_NameSet_isEmpty___boxed(lean_object* v_s_2293_){
_start:
{
uint8_t v_res_2294_; lean_object* v_r_2295_; 
v_res_2294_ = l_Lean_NameSet_isEmpty(v_s_2293_);
lean_dec(v_s_2293_);
v_r_2295_ = lean_box(v_res_2294_);
return v_r_2295_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_NameSet_any_spec__0(lean_object* v_p_2296_, lean_object* v_init_2297_, lean_object* v_x_2298_){
_start:
{
if (lean_obj_tag(v_x_2298_) == 0)
{
lean_object* v_k_2299_; lean_object* v_l_2300_; lean_object* v_r_2301_; lean_object* v___x_2302_; 
v_k_2299_ = lean_ctor_get(v_x_2298_, 1);
lean_inc(v_k_2299_);
v_l_2300_ = lean_ctor_get(v_x_2298_, 3);
lean_inc(v_l_2300_);
v_r_2301_ = lean_ctor_get(v_x_2298_, 4);
lean_inc(v_r_2301_);
lean_dec_ref_known(v_x_2298_, 5);
lean_inc_ref(v_p_2296_);
v___x_2302_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_NameSet_any_spec__0(v_p_2296_, v_init_2297_, v_l_2300_);
if (lean_obj_tag(v___x_2302_) == 0)
{
lean_dec(v_r_2301_);
lean_dec(v_k_2299_);
lean_dec_ref(v_p_2296_);
return v___x_2302_;
}
else
{
lean_object* v___x_2304_; uint8_t v_isShared_2305_; uint8_t v_isSharedCheck_2316_; 
v_isSharedCheck_2316_ = !lean_is_exclusive(v___x_2302_);
if (v_isSharedCheck_2316_ == 0)
{
lean_object* v_unused_2317_; 
v_unused_2317_ = lean_ctor_get(v___x_2302_, 0);
lean_dec(v_unused_2317_);
v___x_2304_ = v___x_2302_;
v_isShared_2305_ = v_isSharedCheck_2316_;
goto v_resetjp_2303_;
}
else
{
lean_dec(v___x_2302_);
v___x_2304_ = lean_box(0);
v_isShared_2305_ = v_isSharedCheck_2316_;
goto v_resetjp_2303_;
}
v_resetjp_2303_:
{
lean_object* v___x_2306_; lean_object* v___x_2307_; uint8_t v___x_2308_; 
v___x_2306_ = lean_box(0);
lean_inc_ref(v_p_2296_);
v___x_2307_ = lean_apply_1(v_p_2296_, v_k_2299_);
v___x_2308_ = lean_unbox(v___x_2307_);
if (v___x_2308_ == 0)
{
lean_object* v___x_2309_; 
lean_del_object(v___x_2304_);
v___x_2309_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_NameMap_any_spec__0___redArg___closed__0));
v_init_2297_ = v___x_2309_;
v_x_2298_ = v_r_2301_;
goto _start;
}
else
{
lean_object* v___x_2311_; lean_object* v___x_2312_; lean_object* v___x_2314_; 
lean_dec(v_r_2301_);
lean_dec_ref(v_p_2296_);
v___x_2311_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2311_, 0, v___x_2307_);
v___x_2312_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2312_, 0, v___x_2311_);
lean_ctor_set(v___x_2312_, 1, v___x_2306_);
if (v_isShared_2305_ == 0)
{
lean_ctor_set_tag(v___x_2304_, 0);
lean_ctor_set(v___x_2304_, 0, v___x_2312_);
v___x_2314_ = v___x_2304_;
goto v_reusejp_2313_;
}
else
{
lean_object* v_reuseFailAlloc_2315_; 
v_reuseFailAlloc_2315_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2315_, 0, v___x_2312_);
v___x_2314_ = v_reuseFailAlloc_2315_;
goto v_reusejp_2313_;
}
v_reusejp_2313_:
{
return v___x_2314_;
}
}
}
}
}
else
{
lean_object* v___x_2318_; 
lean_dec_ref(v_p_2296_);
v___x_2318_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2318_, 0, v_init_2297_);
return v___x_2318_;
}
}
}
LEAN_EXPORT uint8_t l_Lean_NameSet_any(lean_object* v_s_2319_, lean_object* v_p_2320_){
_start:
{
lean_object* v___y_2322_; lean_object* v___x_2327_; lean_object* v___x_2328_; lean_object* v_a_2329_; 
v___x_2327_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_NameMap_any_spec__0___redArg___closed__0));
v___x_2328_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_NameSet_any_spec__0(v_p_2320_, v___x_2327_, v_s_2319_);
v_a_2329_ = lean_ctor_get(v___x_2328_, 0);
lean_inc(v_a_2329_);
lean_dec_ref(v___x_2328_);
v___y_2322_ = v_a_2329_;
goto v___jp_2321_;
v___jp_2321_:
{
lean_object* v_fst_2323_; 
v_fst_2323_ = lean_ctor_get(v___y_2322_, 0);
lean_inc(v_fst_2323_);
lean_dec_ref(v___y_2322_);
if (lean_obj_tag(v_fst_2323_) == 0)
{
uint8_t v___x_2324_; 
v___x_2324_ = 0;
return v___x_2324_;
}
else
{
lean_object* v_val_2325_; uint8_t v___x_2326_; 
v_val_2325_ = lean_ctor_get(v_fst_2323_, 0);
lean_inc(v_val_2325_);
lean_dec_ref_known(v_fst_2323_, 1);
v___x_2326_ = lean_unbox(v_val_2325_);
lean_dec(v_val_2325_);
return v___x_2326_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_NameSet_any___boxed(lean_object* v_s_2330_, lean_object* v_p_2331_){
_start:
{
uint8_t v_res_2332_; lean_object* v_r_2333_; 
v_res_2332_ = l_Lean_NameSet_any(v_s_2330_, v_p_2331_);
v_r_2333_ = lean_box(v_res_2332_);
return v_r_2333_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_NameSet_all_spec__0(lean_object* v_p_2334_, lean_object* v_init_2335_, lean_object* v_x_2336_){
_start:
{
if (lean_obj_tag(v_x_2336_) == 0)
{
lean_object* v_k_2337_; lean_object* v_l_2338_; lean_object* v_r_2339_; lean_object* v___x_2340_; 
v_k_2337_ = lean_ctor_get(v_x_2336_, 1);
lean_inc(v_k_2337_);
v_l_2338_ = lean_ctor_get(v_x_2336_, 3);
lean_inc(v_l_2338_);
v_r_2339_ = lean_ctor_get(v_x_2336_, 4);
lean_inc(v_r_2339_);
lean_dec_ref_known(v_x_2336_, 5);
lean_inc_ref(v_p_2334_);
v___x_2340_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_NameSet_all_spec__0(v_p_2334_, v_init_2335_, v_l_2338_);
if (lean_obj_tag(v___x_2340_) == 0)
{
lean_dec(v_r_2339_);
lean_dec(v_k_2337_);
lean_dec_ref(v_p_2334_);
return v___x_2340_;
}
else
{
lean_object* v___x_2342_; uint8_t v_isShared_2343_; uint8_t v_isSharedCheck_2354_; 
v_isSharedCheck_2354_ = !lean_is_exclusive(v___x_2340_);
if (v_isSharedCheck_2354_ == 0)
{
lean_object* v_unused_2355_; 
v_unused_2355_ = lean_ctor_get(v___x_2340_, 0);
lean_dec(v_unused_2355_);
v___x_2342_ = v___x_2340_;
v_isShared_2343_ = v_isSharedCheck_2354_;
goto v_resetjp_2341_;
}
else
{
lean_dec(v___x_2340_);
v___x_2342_ = lean_box(0);
v_isShared_2343_ = v_isSharedCheck_2354_;
goto v_resetjp_2341_;
}
v_resetjp_2341_:
{
lean_object* v___x_2344_; lean_object* v___x_2345_; uint8_t v___x_2346_; 
v___x_2344_ = lean_box(0);
lean_inc_ref(v_p_2334_);
v___x_2345_ = lean_apply_1(v_p_2334_, v_k_2337_);
v___x_2346_ = lean_unbox(v___x_2345_);
if (v___x_2346_ == 0)
{
lean_object* v___x_2347_; lean_object* v___x_2348_; lean_object* v___x_2350_; 
lean_dec(v_r_2339_);
lean_dec_ref(v_p_2334_);
v___x_2347_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2347_, 0, v___x_2345_);
v___x_2348_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2348_, 0, v___x_2347_);
lean_ctor_set(v___x_2348_, 1, v___x_2344_);
if (v_isShared_2343_ == 0)
{
lean_ctor_set_tag(v___x_2342_, 0);
lean_ctor_set(v___x_2342_, 0, v___x_2348_);
v___x_2350_ = v___x_2342_;
goto v_reusejp_2349_;
}
else
{
lean_object* v_reuseFailAlloc_2351_; 
v_reuseFailAlloc_2351_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2351_, 0, v___x_2348_);
v___x_2350_ = v_reuseFailAlloc_2351_;
goto v_reusejp_2349_;
}
v_reusejp_2349_:
{
return v___x_2350_;
}
}
else
{
lean_object* v___x_2352_; 
lean_del_object(v___x_2342_);
v___x_2352_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_NameMap_any_spec__0___redArg___closed__0));
v_init_2335_ = v___x_2352_;
v_x_2336_ = v_r_2339_;
goto _start;
}
}
}
}
else
{
lean_object* v___x_2356_; 
lean_dec_ref(v_p_2334_);
v___x_2356_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2356_, 0, v_init_2335_);
return v___x_2356_;
}
}
}
LEAN_EXPORT uint8_t l_Lean_NameSet_all(lean_object* v_s_2357_, lean_object* v_p_2358_){
_start:
{
lean_object* v___y_2360_; lean_object* v___x_2365_; lean_object* v___x_2366_; lean_object* v_a_2367_; 
v___x_2365_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_NameMap_any_spec__0___redArg___closed__0));
v___x_2366_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_NameSet_all_spec__0(v_p_2358_, v___x_2365_, v_s_2357_);
v_a_2367_ = lean_ctor_get(v___x_2366_, 0);
lean_inc(v_a_2367_);
lean_dec_ref(v___x_2366_);
v___y_2360_ = v_a_2367_;
goto v___jp_2359_;
v___jp_2359_:
{
lean_object* v_fst_2361_; 
v_fst_2361_ = lean_ctor_get(v___y_2360_, 0);
lean_inc(v_fst_2361_);
lean_dec_ref(v___y_2360_);
if (lean_obj_tag(v_fst_2361_) == 0)
{
uint8_t v___x_2362_; 
v___x_2362_ = 1;
return v___x_2362_;
}
else
{
lean_object* v_val_2363_; uint8_t v___x_2364_; 
v_val_2363_ = lean_ctor_get(v_fst_2361_, 0);
lean_inc(v_val_2363_);
lean_dec_ref_known(v_fst_2361_, 1);
v___x_2364_ = lean_unbox(v_val_2363_);
lean_dec(v_val_2363_);
return v___x_2364_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_NameSet_all___boxed(lean_object* v_s_2368_, lean_object* v_p_2369_){
_start:
{
uint8_t v_res_2370_; lean_object* v_r_2371_; 
v_res_2370_ = l_Lean_NameSet_all(v_s_2368_, v_p_2369_);
v_r_2371_ = lean_box(v_res_2370_);
return v_r_2371_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameSet_foldl_spec__0_spec__0___redArg(lean_object* v_f_2372_, lean_object* v_init_2373_, lean_object* v_x_2374_){
_start:
{
if (lean_obj_tag(v_x_2374_) == 0)
{
lean_object* v_k_2375_; lean_object* v_l_2376_; lean_object* v_r_2377_; lean_object* v___x_2378_; lean_object* v___x_2379_; 
v_k_2375_ = lean_ctor_get(v_x_2374_, 1);
lean_inc(v_k_2375_);
v_l_2376_ = lean_ctor_get(v_x_2374_, 3);
lean_inc(v_l_2376_);
v_r_2377_ = lean_ctor_get(v_x_2374_, 4);
lean_inc(v_r_2377_);
lean_dec_ref_known(v_x_2374_, 5);
lean_inc_n(v_f_2372_, 2);
v___x_2378_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameSet_foldl_spec__0_spec__0___redArg(v_f_2372_, v_init_2373_, v_l_2376_);
v___x_2379_ = lean_apply_2(v_f_2372_, v___x_2378_, v_k_2375_);
v_init_2373_ = v___x_2379_;
v_x_2374_ = v_r_2377_;
goto _start;
}
else
{
lean_dec(v_f_2372_);
return v_init_2373_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_NameSet_foldl___redArg(lean_object* v_f_2381_, lean_object* v_init_2382_, lean_object* v_s_2383_){
_start:
{
lean_object* v___x_2384_; 
v___x_2384_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameSet_foldl_spec__0_spec__0___redArg(v_f_2381_, v_init_2382_, v_s_2383_);
return v___x_2384_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameSet_foldl(lean_object* v_00_u03c3_2385_, lean_object* v_f_2386_, lean_object* v_init_2387_, lean_object* v_s_2388_){
_start:
{
lean_object* v___x_2389_; 
v___x_2389_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameSet_foldl_spec__0_spec__0___redArg(v_f_2386_, v_init_2387_, v_s_2388_);
return v___x_2389_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameSet_foldl_spec__0___redArg(lean_object* v_f_2390_, lean_object* v_init_2391_, lean_object* v_t_2392_){
_start:
{
lean_object* v___x_2393_; 
v___x_2393_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameSet_foldl_spec__0_spec__0___redArg(v_f_2390_, v_init_2391_, v_t_2392_);
return v___x_2393_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameSet_foldl_spec__0(lean_object* v_00_u03c3_2394_, lean_object* v_f_2395_, lean_object* v_init_2396_, lean_object* v_t_2397_){
_start:
{
lean_object* v___x_2398_; 
v___x_2398_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameSet_foldl_spec__0_spec__0___redArg(v_f_2395_, v_init_2396_, v_t_2397_);
return v___x_2398_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameSet_foldl_spec__0_spec__0(lean_object* v_00_u03c3_2399_, lean_object* v_f_2400_, lean_object* v_init_2401_, lean_object* v_x_2402_){
_start:
{
lean_object* v___x_2403_; 
v___x_2403_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameSet_foldl_spec__0_spec__0___redArg(v_f_2400_, v_init_2401_, v_x_2402_);
return v___x_2403_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameSet_foldlM___redArg___lam__0(lean_object* v_f_2404_, lean_object* v_c_2405_, lean_object* v_a_2406_, lean_object* v_x_2407_){
_start:
{
lean_object* v___x_2408_; 
v___x_2408_ = lean_apply_2(v_f_2404_, v_c_2405_, v_a_2406_);
return v___x_2408_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameSet_foldlM___redArg(lean_object* v_inst_2409_, lean_object* v_f_2410_, lean_object* v_init_2411_, lean_object* v_s_2412_){
_start:
{
lean_object* v___f_2413_; lean_object* v___x_2414_; 
v___f_2413_ = lean_alloc_closure((void*)(l_Lean_NameSet_foldlM___redArg___lam__0), 4, 1);
lean_closure_set(v___f_2413_, 0, v_f_2410_);
v___x_2414_ = l_Std_DTreeMap_Internal_Impl_foldlM___redArg(v_inst_2409_, v___f_2413_, v_init_2411_, v_s_2412_);
return v___x_2414_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameSet_foldlM(lean_object* v_m_2415_, lean_object* v_00_u03c3_2416_, lean_object* v_inst_2417_, lean_object* v_f_2418_, lean_object* v_init_2419_, lean_object* v_s_2420_){
_start:
{
lean_object* v___x_2421_; 
v___x_2421_ = l_Lean_NameSet_foldlM___redArg(v_inst_2417_, v_f_2418_, v_init_2419_, v_s_2420_);
return v___x_2421_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_NameSet_toList_spec__0(lean_object* v_init_2422_, lean_object* v_x_2423_){
_start:
{
if (lean_obj_tag(v_x_2423_) == 0)
{
lean_object* v_k_2424_; lean_object* v_l_2425_; lean_object* v_r_2426_; lean_object* v___x_2427_; lean_object* v___x_2428_; 
v_k_2424_ = lean_ctor_get(v_x_2423_, 1);
v_l_2425_ = lean_ctor_get(v_x_2423_, 3);
v_r_2426_ = lean_ctor_get(v_x_2423_, 4);
v___x_2427_ = l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_NameSet_toList_spec__0(v_init_2422_, v_r_2426_);
lean_inc(v_k_2424_);
v___x_2428_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2428_, 0, v_k_2424_);
lean_ctor_set(v___x_2428_, 1, v___x_2427_);
v_init_2422_ = v___x_2428_;
v_x_2423_ = v_l_2425_;
goto _start;
}
else
{
return v_init_2422_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_NameSet_toList_spec__0___boxed(lean_object* v_init_2430_, lean_object* v_x_2431_){
_start:
{
lean_object* v_res_2432_; 
v_res_2432_ = l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_NameSet_toList_spec__0(v_init_2430_, v_x_2431_);
lean_dec(v_x_2431_);
return v_res_2432_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameSet_toList(lean_object* v_s_2433_){
_start:
{
lean_object* v___x_2434_; lean_object* v___x_2435_; 
v___x_2434_ = lean_box(0);
v___x_2435_ = l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_NameSet_toList_spec__0(v___x_2434_, v_s_2433_);
return v___x_2435_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameSet_toList___boxed(lean_object* v_s_2436_){
_start:
{
lean_object* v_res_2437_; 
v_res_2437_ = l_Lean_NameSet_toList(v_s_2436_);
lean_dec(v_s_2436_);
return v_res_2437_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameSet_toArray_spec__0_spec__0(lean_object* v_init_2438_, lean_object* v_x_2439_){
_start:
{
if (lean_obj_tag(v_x_2439_) == 0)
{
lean_object* v_k_2440_; lean_object* v_l_2441_; lean_object* v_r_2442_; lean_object* v___x_2443_; lean_object* v___x_2444_; 
v_k_2440_ = lean_ctor_get(v_x_2439_, 1);
lean_inc(v_k_2440_);
v_l_2441_ = lean_ctor_get(v_x_2439_, 3);
lean_inc(v_l_2441_);
v_r_2442_ = lean_ctor_get(v_x_2439_, 4);
lean_inc(v_r_2442_);
lean_dec_ref_known(v_x_2439_, 5);
v___x_2443_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameSet_toArray_spec__0_spec__0(v_init_2438_, v_l_2441_);
v___x_2444_ = lean_array_push(v___x_2443_, v_k_2440_);
v_init_2438_ = v___x_2444_;
v_x_2439_ = v_r_2442_;
goto _start;
}
else
{
return v_init_2438_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_NameSet_toArray(lean_object* v_s_2446_){
_start:
{
lean_object* v___y_2448_; 
if (lean_obj_tag(v_s_2446_) == 0)
{
lean_object* v_size_2451_; 
v_size_2451_ = lean_ctor_get(v_s_2446_, 0);
lean_inc(v_size_2451_);
v___y_2448_ = v_size_2451_;
goto v___jp_2447_;
}
else
{
lean_object* v___x_2452_; 
v___x_2452_ = lean_unsigned_to_nat(0u);
v___y_2448_ = v___x_2452_;
goto v___jp_2447_;
}
v___jp_2447_:
{
lean_object* v___x_2449_; lean_object* v___x_2450_; 
v___x_2449_ = lean_mk_empty_array_with_capacity(v___y_2448_);
lean_dec(v___y_2448_);
v___x_2450_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameSet_toArray_spec__0_spec__0(v___x_2449_, v_s_2446_);
return v___x_2450_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameSet_toArray_spec__0(lean_object* v_init_2453_, lean_object* v_t_2454_){
_start:
{
lean_object* v___x_2455_; 
v___x_2455_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameSet_toArray_spec__0_spec__0(v_init_2453_, v_t_2454_);
return v___x_2455_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_NameSet_merge_spec__0___redArg___lam__0(lean_object* v_b_u2082_2458_, lean_object* v_x_2459_){
_start:
{
if (lean_obj_tag(v_x_2459_) == 0)
{
lean_object* v___x_2460_; 
v___x_2460_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2460_, 0, v_b_u2082_2458_);
return v___x_2460_;
}
else
{
lean_object* v___x_2461_; 
v___x_2461_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_NameSet_merge_spec__0___redArg___lam__0___closed__0));
return v___x_2461_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_NameSet_merge_spec__0___redArg___lam__0___boxed(lean_object* v_b_u2082_2462_, lean_object* v_x_2463_){
_start:
{
lean_object* v_res_2464_; 
v_res_2464_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_NameSet_merge_spec__0___redArg___lam__0(v_b_u2082_2462_, v_x_2463_);
lean_dec(v_x_2463_);
return v_res_2464_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_NameSet_merge_spec__0___redArg(lean_object* v_b_u2082_2465_, lean_object* v_k_2466_, lean_object* v_t_2467_){
_start:
{
if (lean_obj_tag(v_t_2467_) == 0)
{
lean_object* v_size_2468_; lean_object* v_k_2469_; lean_object* v_v_2470_; lean_object* v_l_2471_; lean_object* v_r_2472_; lean_object* v___x_2474_; uint8_t v_isShared_2475_; uint8_t v_isSharedCheck_2487_; 
v_size_2468_ = lean_ctor_get(v_t_2467_, 0);
v_k_2469_ = lean_ctor_get(v_t_2467_, 1);
v_v_2470_ = lean_ctor_get(v_t_2467_, 2);
v_l_2471_ = lean_ctor_get(v_t_2467_, 3);
v_r_2472_ = lean_ctor_get(v_t_2467_, 4);
v_isSharedCheck_2487_ = !lean_is_exclusive(v_t_2467_);
if (v_isSharedCheck_2487_ == 0)
{
v___x_2474_ = v_t_2467_;
v_isShared_2475_ = v_isSharedCheck_2487_;
goto v_resetjp_2473_;
}
else
{
lean_inc(v_r_2472_);
lean_inc(v_l_2471_);
lean_inc(v_v_2470_);
lean_inc(v_k_2469_);
lean_inc(v_size_2468_);
lean_dec(v_t_2467_);
v___x_2474_ = lean_box(0);
v_isShared_2475_ = v_isSharedCheck_2487_;
goto v_resetjp_2473_;
}
v_resetjp_2473_:
{
uint8_t v___x_2476_; 
v___x_2476_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_2466_, v_k_2469_);
switch(v___x_2476_)
{
case 0:
{
lean_object* v_impl_2477_; lean_object* v___x_2478_; 
lean_del_object(v___x_2474_);
lean_dec(v_size_2468_);
v_impl_2477_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_NameSet_merge_spec__0___redArg(v_b_u2082_2465_, v_k_2466_, v_l_2471_);
v___x_2478_ = l_Std_DTreeMap_Internal_Impl_balance___redArg(v_k_2469_, v_v_2470_, v_impl_2477_, v_r_2472_);
return v___x_2478_;
}
case 1:
{
lean_object* v___x_2479_; lean_object* v___x_2480_; lean_object* v_val_2481_; lean_object* v___x_2483_; 
lean_dec(v_k_2469_);
v___x_2479_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2479_, 0, v_v_2470_);
v___x_2480_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_NameSet_merge_spec__0___redArg___lam__0(v_b_u2082_2465_, v___x_2479_);
lean_dec_ref_known(v___x_2479_, 1);
v_val_2481_ = lean_ctor_get(v___x_2480_, 0);
lean_inc(v_val_2481_);
lean_dec(v___x_2480_);
if (v_isShared_2475_ == 0)
{
lean_ctor_set(v___x_2474_, 2, v_val_2481_);
lean_ctor_set(v___x_2474_, 1, v_k_2466_);
v___x_2483_ = v___x_2474_;
goto v_reusejp_2482_;
}
else
{
lean_object* v_reuseFailAlloc_2484_; 
v_reuseFailAlloc_2484_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2484_, 0, v_size_2468_);
lean_ctor_set(v_reuseFailAlloc_2484_, 1, v_k_2466_);
lean_ctor_set(v_reuseFailAlloc_2484_, 2, v_val_2481_);
lean_ctor_set(v_reuseFailAlloc_2484_, 3, v_l_2471_);
lean_ctor_set(v_reuseFailAlloc_2484_, 4, v_r_2472_);
v___x_2483_ = v_reuseFailAlloc_2484_;
goto v_reusejp_2482_;
}
v_reusejp_2482_:
{
return v___x_2483_;
}
}
default: 
{
lean_object* v_impl_2485_; lean_object* v___x_2486_; 
lean_del_object(v___x_2474_);
lean_dec(v_size_2468_);
v_impl_2485_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_NameSet_merge_spec__0___redArg(v_b_u2082_2465_, v_k_2466_, v_r_2472_);
v___x_2486_ = l_Std_DTreeMap_Internal_Impl_balance___redArg(v_k_2469_, v_v_2470_, v_l_2471_, v_impl_2485_);
return v___x_2486_;
}
}
}
}
else
{
lean_object* v___x_2488_; lean_object* v___x_2489_; lean_object* v_val_2490_; lean_object* v___x_2491_; lean_object* v___x_2492_; 
v___x_2488_ = lean_box(0);
v___x_2489_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_NameSet_merge_spec__0___redArg___lam__0(v_b_u2082_2465_, v___x_2488_);
v_val_2490_ = lean_ctor_get(v___x_2489_, 0);
lean_inc(v_val_2490_);
lean_dec(v___x_2489_);
v___x_2491_ = lean_unsigned_to_nat(1u);
v___x_2492_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2492_, 0, v___x_2491_);
lean_ctor_set(v___x_2492_, 1, v_k_2466_);
lean_ctor_set(v___x_2492_, 2, v_val_2490_);
lean_ctor_set(v___x_2492_, 3, v_t_2467_);
lean_ctor_set(v___x_2492_, 4, v_t_2467_);
return v___x_2492_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameSet_merge_spec__1_spec__1(lean_object* v_init_2493_, lean_object* v_x_2494_){
_start:
{
if (lean_obj_tag(v_x_2494_) == 0)
{
lean_object* v_k_2495_; lean_object* v_v_2496_; lean_object* v_l_2497_; lean_object* v_r_2498_; lean_object* v___x_2499_; lean_object* v___x_2500_; 
v_k_2495_ = lean_ctor_get(v_x_2494_, 1);
lean_inc(v_k_2495_);
v_v_2496_ = lean_ctor_get(v_x_2494_, 2);
lean_inc(v_v_2496_);
v_l_2497_ = lean_ctor_get(v_x_2494_, 3);
lean_inc(v_l_2497_);
v_r_2498_ = lean_ctor_get(v_x_2494_, 4);
lean_inc(v_r_2498_);
lean_dec_ref_known(v_x_2494_, 5);
v___x_2499_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameSet_merge_spec__1_spec__1(v_init_2493_, v_l_2497_);
v___x_2500_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_NameSet_merge_spec__0___redArg(v_v_2496_, v_k_2495_, v___x_2499_);
v_init_2493_ = v___x_2500_;
v_x_2494_ = v_r_2498_;
goto _start;
}
else
{
return v_init_2493_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_NameSet_merge(lean_object* v_s_2502_, lean_object* v_t_2503_){
_start:
{
lean_object* v___x_2504_; 
v___x_2504_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameSet_merge_spec__1_spec__1(v_s_2502_, v_t_2503_);
return v___x_2504_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_NameSet_merge_spec__0(lean_object* v_b_u2082_2505_, lean_object* v_k_2506_, lean_object* v_t_2507_, lean_object* v_hl_2508_){
_start:
{
lean_object* v___x_2509_; 
v___x_2509_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_NameSet_merge_spec__0___redArg(v_b_u2082_2505_, v_k_2506_, v_t_2507_);
return v___x_2509_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameSet_merge_spec__1(lean_object* v_init_2510_, lean_object* v_t_2511_){
_start:
{
lean_object* v___x_2512_; 
v___x_2512_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameSet_merge_spec__1_spec__1(v_init_2510_, v_t_2511_);
return v___x_2512_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameSet_union(lean_object* v_s_2513_, lean_object* v_t_2514_){
_start:
{
lean_object* v___x_2515_; lean_object* v___x_2516_; 
v___x_2515_ = ((lean_object*)(l_Lean_NameMap_instBEq___redArg___lam__0___closed__0));
v___x_2516_ = l_Std_DTreeMap_Internal_Impl_union___at___00Std_DTreeMap_union_spec__0___redArg(v___x_2515_, v_s_2513_, v_t_2514_);
return v___x_2516_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameSet_instInsertName___lam__0(lean_object* v_n_2517_, lean_object* v_s_2518_){
_start:
{
lean_object* v___x_2519_; 
v___x_2519_ = l_Lean_NameSet_insert(v_s_2518_, v_n_2517_);
return v___x_2519_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameSet_instForInNameOfMonad___redArg___lam__0(lean_object* v_f_2522_, lean_object* v_a_2523_, lean_object* v_b_2524_, lean_object* v_c_2525_){
_start:
{
lean_object* v___x_2526_; 
v___x_2526_ = lean_apply_2(v_f_2522_, v_a_2523_, v_c_2525_);
return v___x_2526_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameSet_instForInNameOfMonad___redArg___lam__2(lean_object* v_inst_2527_, lean_object* v_00_u03b2_2528_, lean_object* v_s_2529_, lean_object* v_init_2530_, lean_object* v_f_2531_){
_start:
{
lean_object* v_toApplicative_2532_; lean_object* v_toBind_2533_; lean_object* v_toPure_2534_; lean_object* v___f_2535_; lean_object* v___x_2536_; lean_object* v___f_2537_; lean_object* v___x_2538_; 
v_toApplicative_2532_ = lean_ctor_get(v_inst_2527_, 0);
v_toBind_2533_ = lean_ctor_get(v_inst_2527_, 1);
lean_inc(v_toBind_2533_);
v_toPure_2534_ = lean_ctor_get(v_toApplicative_2532_, 1);
lean_inc(v_toPure_2534_);
v___f_2535_ = lean_alloc_closure((void*)(l_Lean_NameSet_instForInNameOfMonad___redArg___lam__0), 4, 1);
lean_closure_set(v___f_2535_, 0, v_f_2531_);
v___x_2536_ = l_Std_DTreeMap_Internal_Impl_forInStep___redArg(v_inst_2527_, v___f_2535_, v_init_2530_, v_s_2529_);
v___f_2537_ = lean_alloc_closure((void*)(l_Lean_NameMap_instForInProdNameOfMonad___redArg___lam__1), 2, 1);
lean_closure_set(v___f_2537_, 0, v_toPure_2534_);
v___x_2538_ = lean_apply_4(v_toBind_2533_, lean_box(0), lean_box(0), v___x_2536_, v___f_2537_);
return v___x_2538_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameSet_instForInNameOfMonad___redArg(lean_object* v_inst_2539_){
_start:
{
lean_object* v___f_2540_; 
v___f_2540_ = lean_alloc_closure((void*)(l_Lean_NameSet_instForInNameOfMonad___redArg___lam__2), 5, 1);
lean_closure_set(v___f_2540_, 0, v_inst_2539_);
return v___f_2540_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameSet_instForInNameOfMonad(lean_object* v_m_2541_, lean_object* v_inst_2542_){
_start:
{
lean_object* v___f_2543_; 
v___f_2543_ = lean_alloc_closure((void*)(l_Lean_NameSet_instForInNameOfMonad___redArg___lam__2), 5, 1);
lean_closure_set(v___f_2543_, 0, v_inst_2542_);
return v___f_2543_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameSet_append(lean_object* v_s_2544_, lean_object* v_t_2545_){
_start:
{
lean_object* v___x_2546_; 
v___x_2546_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameSet_merge_spec__1_spec__1(v_s_2544_, v_t_2545_);
return v___x_2546_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameSet_instSingletonName___lam__0(lean_object* v_n_2549_){
_start:
{
lean_object* v___x_2550_; lean_object* v___x_2551_; 
v___x_2550_ = lean_box(1);
v___x_2551_ = l_Lean_NameSet_insert(v___x_2550_, v_n_2549_);
return v___x_2551_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameSet_instInter___lam__0(lean_object* v_t_2555_, lean_object* v_r_2556_, lean_object* v_n_2557_){
_start:
{
uint8_t v___x_2558_; 
v___x_2558_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_NameMap_contains_spec__0___redArg(v_n_2557_, v_t_2555_);
if (v___x_2558_ == 0)
{
lean_dec(v_n_2557_);
return v_r_2556_;
}
else
{
lean_object* v___x_2559_; 
v___x_2559_ = l_Lean_NameSet_insert(v_r_2556_, v_n_2557_);
return v___x_2559_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_NameSet_instInter___lam__0___boxed(lean_object* v_t_2560_, lean_object* v_r_2561_, lean_object* v_n_2562_){
_start:
{
lean_object* v_res_2563_; 
v_res_2563_ = l_Lean_NameSet_instInter___lam__0(v_t_2560_, v_r_2561_, v_n_2562_);
lean_dec(v_t_2560_);
return v_res_2563_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameSet_instInter___lam__1(lean_object* v_s_2564_, lean_object* v_t_2565_){
_start:
{
lean_object* v___f_2566_; lean_object* v___x_2567_; lean_object* v___x_2568_; 
v___f_2566_ = lean_alloc_closure((void*)(l_Lean_NameSet_instInter___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2566_, 0, v_t_2565_);
v___x_2567_ = lean_box(1);
v___x_2568_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameSet_foldl_spec__0_spec__0___redArg(v___f_2566_, v___x_2567_, v_s_2564_);
return v___x_2568_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameSet_instSDiff___lam__0(lean_object* v_s_2571_, lean_object* v_n_2572_){
_start:
{
lean_object* v___x_2573_; 
v___x_2573_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_NameMap_erase_spec__0___redArg(v_n_2572_, v_s_2571_);
return v___x_2573_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameSet_instSDiff___lam__0___boxed(lean_object* v_s_2574_, lean_object* v_n_2575_){
_start:
{
lean_object* v_res_2576_; 
v_res_2576_ = l_Lean_NameSet_instSDiff___lam__0(v_s_2574_, v_n_2575_);
lean_dec(v_n_2575_);
return v_res_2576_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameSet_instSDiff___lam__1(lean_object* v___f_2577_, lean_object* v_s_2578_, lean_object* v_t_2579_){
_start:
{
lean_object* v___x_2580_; 
v___x_2580_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameSet_foldl_spec__0_spec__0___redArg(v___f_2577_, v_s_2578_, v_t_2579_);
return v___x_2580_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_filter___at___00Lean_NameSet_filter_spec__0___redArg(lean_object* v_f_2585_, lean_object* v_t_2586_){
_start:
{
if (lean_obj_tag(v_t_2586_) == 0)
{
lean_object* v_k_2587_; lean_object* v_v_2588_; lean_object* v_l_2589_; lean_object* v_r_2590_; lean_object* v___x_2591_; uint8_t v___x_2592_; 
v_k_2587_ = lean_ctor_get(v_t_2586_, 1);
lean_inc_n(v_k_2587_, 2);
v_v_2588_ = lean_ctor_get(v_t_2586_, 2);
lean_inc(v_v_2588_);
v_l_2589_ = lean_ctor_get(v_t_2586_, 3);
lean_inc(v_l_2589_);
v_r_2590_ = lean_ctor_get(v_t_2586_, 4);
lean_inc(v_r_2590_);
lean_dec_ref_known(v_t_2586_, 5);
lean_inc_ref(v_f_2585_);
v___x_2591_ = lean_apply_1(v_f_2585_, v_k_2587_);
v___x_2592_ = lean_unbox(v___x_2591_);
if (v___x_2592_ == 0)
{
lean_object* v_impl_2593_; lean_object* v_impl_2594_; lean_object* v___x_2595_; 
lean_dec(v_v_2588_);
lean_dec(v_k_2587_);
lean_inc_ref(v_f_2585_);
v_impl_2593_ = l_Std_DTreeMap_Internal_Impl_filter___at___00Lean_NameSet_filter_spec__0___redArg(v_f_2585_, v_l_2589_);
v_impl_2594_ = l_Std_DTreeMap_Internal_Impl_filter___at___00Lean_NameSet_filter_spec__0___redArg(v_f_2585_, v_r_2590_);
v___x_2595_ = l_Std_DTreeMap_Internal_Impl_link2___redArg(v_impl_2593_, v_impl_2594_);
return v___x_2595_;
}
else
{
lean_object* v_impl_2596_; lean_object* v_impl_2597_; lean_object* v___x_2598_; 
lean_inc_ref(v_f_2585_);
v_impl_2596_ = l_Std_DTreeMap_Internal_Impl_filter___at___00Lean_NameSet_filter_spec__0___redArg(v_f_2585_, v_l_2589_);
v_impl_2597_ = l_Std_DTreeMap_Internal_Impl_filter___at___00Lean_NameSet_filter_spec__0___redArg(v_f_2585_, v_r_2590_);
v___x_2598_ = l_Std_DTreeMap_Internal_Impl_link___redArg(v_k_2587_, v_v_2588_, v_impl_2596_, v_impl_2597_);
return v___x_2598_;
}
}
else
{
lean_dec_ref(v_f_2585_);
return v_t_2586_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_NameSet_filter(lean_object* v_f_2599_, lean_object* v_s_2600_){
_start:
{
lean_object* v___x_2601_; 
v___x_2601_ = l_Std_DTreeMap_Internal_Impl_filter___at___00Lean_NameSet_filter_spec__0___redArg(v_f_2599_, v_s_2600_);
return v___x_2601_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_filter___at___00Lean_NameSet_filter_spec__0(lean_object* v_f_2602_, lean_object* v_t_2603_, lean_object* v_hl_2604_){
_start:
{
lean_object* v___x_2605_; 
v___x_2605_ = l_Std_DTreeMap_Internal_Impl_filter___at___00Lean_NameSet_filter_spec__0___redArg(v_f_2602_, v_t_2603_);
return v___x_2605_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameSet_ofList(lean_object* v_l_2606_){
_start:
{
lean_object* v___x_2607_; lean_object* v___x_2608_; 
v___x_2607_ = ((lean_object*)(l_Lean_NameMap_instBEq___redArg___lam__0___closed__0));
v___x_2608_ = l_Std_TreeSet_ofList___redArg(v_l_2606_, v___x_2607_);
return v___x_2608_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameSet_ofList___boxed(lean_object* v_l_2609_){
_start:
{
lean_object* v_res_2610_; 
v_res_2610_ = l_Lean_NameSet_ofList(v_l_2609_);
lean_dec(v_l_2609_);
return v_res_2610_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameSet_ofArray(lean_object* v_l_2611_){
_start:
{
lean_object* v___x_2612_; lean_object* v___x_2613_; 
v___x_2612_ = ((lean_object*)(l_Lean_NameMap_instBEq___redArg___lam__0___closed__0));
v___x_2613_ = l_Std_TreeSet_ofArray___redArg(v_l_2611_, v___x_2612_);
return v___x_2613_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameSet_ofArray___boxed(lean_object* v_l_2614_){
_start:
{
lean_object* v_res_2615_; 
v_res_2615_ = l_Lean_NameSet_ofArray(v_l_2614_);
lean_dec_ref(v_l_2614_);
return v_res_2615_;
}
}
static lean_object* _init_l_Lean_NameSSet_empty___closed__0(void){
_start:
{
lean_object* v___x_2616_; 
v___x_2616_ = l_Lean_SMap_empty___redArg();
return v___x_2616_;
}
}
static lean_object* _init_l_Lean_NameSSet_empty(void){
_start:
{
lean_object* v___x_2617_; 
v___x_2617_ = lean_obj_once(&l_Lean_NameSSet_empty___closed__0, &l_Lean_NameSSet_empty___closed__0_once, _init_l_Lean_NameSSet_empty___closed__0);
return v___x_2617_;
}
}
static lean_object* _init_l_Lean_NameSSet_instEmptyCollection(void){
_start:
{
lean_object* v___x_2618_; 
v___x_2618_ = lean_obj_once(&l_Lean_NameSSet_empty___closed__0, &l_Lean_NameSSet_empty___closed__0_once, _init_l_Lean_NameSSet_empty___closed__0);
return v___x_2618_;
}
}
static lean_object* _init_l_Lean_NameSSet_instInhabited(void){
_start:
{
lean_object* v___x_2619_; 
v___x_2619_ = lean_obj_once(&l_Lean_NameSSet_empty___closed__0, &l_Lean_NameSSet_empty___closed__0_once, _init_l_Lean_NameSSet_empty___closed__0);
return v___x_2619_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameSSet_insert(lean_object* v_s_2622_, lean_object* v_n_2623_){
_start:
{
lean_object* v___x_2624_; lean_object* v___x_2625_; lean_object* v___x_2626_; lean_object* v___x_2627_; 
v___x_2624_ = ((lean_object*)(l_Lean_NameSSet_insert___closed__0));
v___x_2625_ = ((lean_object*)(l_Lean_NameSSet_insert___closed__1));
v___x_2626_ = lean_box(0);
v___x_2627_ = l_Lean_SMap_insert___redArg(v___x_2624_, v___x_2625_, v_s_2622_, v_n_2623_, v___x_2626_);
return v___x_2627_;
}
}
LEAN_EXPORT uint8_t l_Lean_NameSSet_contains(lean_object* v_s_2628_, lean_object* v_n_2629_){
_start:
{
lean_object* v___x_2630_; lean_object* v___x_2631_; uint8_t v___x_2632_; 
v___x_2630_ = ((lean_object*)(l_Lean_NameSSet_insert___closed__0));
v___x_2631_ = ((lean_object*)(l_Lean_NameSSet_insert___closed__1));
v___x_2632_ = l_Lean_SMap_contains___redArg(v___x_2630_, v___x_2631_, v_s_2628_, v_n_2629_);
return v___x_2632_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameSSet_contains___boxed(lean_object* v_s_2633_, lean_object* v_n_2634_){
_start:
{
uint8_t v_res_2635_; lean_object* v_r_2636_; 
v_res_2635_ = l_Lean_NameSSet_contains(v_s_2633_, v_n_2634_);
v_r_2636_ = lean_box(v_res_2635_);
return v_r_2636_;
}
}
static lean_object* _init_l_Lean_NameHashSet_empty___closed__0(void){
_start:
{
lean_object* v___x_2637_; lean_object* v___x_2638_; lean_object* v___x_2639_; 
v___x_2637_ = lean_box(0);
v___x_2638_ = lean_unsigned_to_nat(16u);
v___x_2639_ = lean_mk_array(v___x_2638_, v___x_2637_);
return v___x_2639_;
}
}
static lean_object* _init_l_Lean_NameHashSet_empty___closed__1(void){
_start:
{
lean_object* v___x_2640_; lean_object* v___x_2641_; lean_object* v___x_2642_; 
v___x_2640_ = lean_obj_once(&l_Lean_NameHashSet_empty___closed__0, &l_Lean_NameHashSet_empty___closed__0_once, _init_l_Lean_NameHashSet_empty___closed__0);
v___x_2641_ = lean_unsigned_to_nat(0u);
v___x_2642_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2642_, 0, v___x_2641_);
lean_ctor_set(v___x_2642_, 1, v___x_2640_);
return v___x_2642_;
}
}
static lean_object* _init_l_Lean_NameHashSet_empty(void){
_start:
{
lean_object* v___x_2643_; 
v___x_2643_ = lean_obj_once(&l_Lean_NameHashSet_empty___closed__1, &l_Lean_NameHashSet_empty___closed__1_once, _init_l_Lean_NameHashSet_empty___closed__1);
return v___x_2643_;
}
}
static lean_object* _init_l_Lean_NameHashSet_instEmptyCollection(void){
_start:
{
lean_object* v___x_2644_; 
v___x_2644_ = lean_obj_once(&l_Lean_NameHashSet_empty___closed__1, &l_Lean_NameHashSet_empty___closed__1_once, _init_l_Lean_NameHashSet_empty___closed__1);
return v___x_2644_;
}
}
static lean_object* _init_l_Lean_NameHashSet_instInhabited(void){
_start:
{
lean_object* v___x_2645_; 
v___x_2645_ = lean_obj_once(&l_Lean_NameHashSet_empty___closed__1, &l_Lean_NameHashSet_empty___closed__1_once, _init_l_Lean_NameHashSet_empty___closed__1);
return v___x_2645_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_NameHashSet_insert_spec__0_spec__0___redArg(lean_object* v_a_2646_, lean_object* v_x_2647_){
_start:
{
if (lean_obj_tag(v_x_2647_) == 0)
{
uint8_t v___x_2648_; 
v___x_2648_ = 0;
return v___x_2648_;
}
else
{
lean_object* v_key_2649_; lean_object* v_tail_2650_; uint8_t v___x_2651_; 
v_key_2649_ = lean_ctor_get(v_x_2647_, 0);
v_tail_2650_ = lean_ctor_get(v_x_2647_, 2);
v___x_2651_ = lean_name_eq(v_key_2649_, v_a_2646_);
if (v___x_2651_ == 0)
{
v_x_2647_ = v_tail_2650_;
goto _start;
}
else
{
return v___x_2651_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_NameHashSet_insert_spec__0_spec__0___redArg___boxed(lean_object* v_a_2653_, lean_object* v_x_2654_){
_start:
{
uint8_t v_res_2655_; lean_object* v_r_2656_; 
v_res_2655_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_NameHashSet_insert_spec__0_spec__0___redArg(v_a_2653_, v_x_2654_);
lean_dec(v_x_2654_);
lean_dec(v_a_2653_);
v_r_2656_ = lean_box(v_res_2655_);
return v_r_2656_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_NameHashSet_insert_spec__0_spec__1_spec__2_spec__3___redArg(lean_object* v_x_2657_, lean_object* v_x_2658_){
_start:
{
if (lean_obj_tag(v_x_2658_) == 0)
{
return v_x_2657_;
}
else
{
lean_object* v_key_2659_; lean_object* v_value_2660_; lean_object* v_tail_2661_; lean_object* v___x_2663_; uint8_t v_isShared_2664_; uint8_t v_isSharedCheck_2687_; 
v_key_2659_ = lean_ctor_get(v_x_2658_, 0);
v_value_2660_ = lean_ctor_get(v_x_2658_, 1);
v_tail_2661_ = lean_ctor_get(v_x_2658_, 2);
v_isSharedCheck_2687_ = !lean_is_exclusive(v_x_2658_);
if (v_isSharedCheck_2687_ == 0)
{
v___x_2663_ = v_x_2658_;
v_isShared_2664_ = v_isSharedCheck_2687_;
goto v_resetjp_2662_;
}
else
{
lean_inc(v_tail_2661_);
lean_inc(v_value_2660_);
lean_inc(v_key_2659_);
lean_dec(v_x_2658_);
v___x_2663_ = lean_box(0);
v_isShared_2664_ = v_isSharedCheck_2687_;
goto v_resetjp_2662_;
}
v_resetjp_2662_:
{
lean_object* v___x_2665_; uint64_t v___y_2667_; 
v___x_2665_ = lean_array_get_size(v_x_2657_);
if (lean_obj_tag(v_key_2659_) == 0)
{
uint64_t v___x_2685_; 
v___x_2685_ = 1723ULL;
v___y_2667_ = v___x_2685_;
goto v___jp_2666_;
}
else
{
uint64_t v_hash_2686_; 
v_hash_2686_ = lean_ctor_get_uint64(v_key_2659_, sizeof(void*)*2);
v___y_2667_ = v_hash_2686_;
goto v___jp_2666_;
}
v___jp_2666_:
{
uint64_t v___x_2668_; uint64_t v___x_2669_; uint64_t v_fold_2670_; uint64_t v___x_2671_; uint64_t v___x_2672_; uint64_t v___x_2673_; size_t v___x_2674_; size_t v___x_2675_; size_t v___x_2676_; size_t v___x_2677_; size_t v___x_2678_; lean_object* v___x_2679_; lean_object* v___x_2681_; 
v___x_2668_ = 32ULL;
v___x_2669_ = lean_uint64_shift_right(v___y_2667_, v___x_2668_);
v_fold_2670_ = lean_uint64_xor(v___y_2667_, v___x_2669_);
v___x_2671_ = 16ULL;
v___x_2672_ = lean_uint64_shift_right(v_fold_2670_, v___x_2671_);
v___x_2673_ = lean_uint64_xor(v_fold_2670_, v___x_2672_);
v___x_2674_ = lean_uint64_to_usize(v___x_2673_);
v___x_2675_ = lean_usize_of_nat(v___x_2665_);
v___x_2676_ = ((size_t)1ULL);
v___x_2677_ = lean_usize_sub(v___x_2675_, v___x_2676_);
v___x_2678_ = lean_usize_land(v___x_2674_, v___x_2677_);
v___x_2679_ = lean_array_uget_borrowed(v_x_2657_, v___x_2678_);
lean_inc(v___x_2679_);
if (v_isShared_2664_ == 0)
{
lean_ctor_set(v___x_2663_, 2, v___x_2679_);
v___x_2681_ = v___x_2663_;
goto v_reusejp_2680_;
}
else
{
lean_object* v_reuseFailAlloc_2684_; 
v_reuseFailAlloc_2684_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2684_, 0, v_key_2659_);
lean_ctor_set(v_reuseFailAlloc_2684_, 1, v_value_2660_);
lean_ctor_set(v_reuseFailAlloc_2684_, 2, v___x_2679_);
v___x_2681_ = v_reuseFailAlloc_2684_;
goto v_reusejp_2680_;
}
v_reusejp_2680_:
{
lean_object* v___x_2682_; 
v___x_2682_ = lean_array_uset(v_x_2657_, v___x_2678_, v___x_2681_);
v_x_2657_ = v___x_2682_;
v_x_2658_ = v_tail_2661_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_NameHashSet_insert_spec__0_spec__1_spec__2___redArg(lean_object* v_i_2688_, lean_object* v_source_2689_, lean_object* v_target_2690_){
_start:
{
lean_object* v___x_2691_; uint8_t v___x_2692_; 
v___x_2691_ = lean_array_get_size(v_source_2689_);
v___x_2692_ = lean_nat_dec_lt(v_i_2688_, v___x_2691_);
if (v___x_2692_ == 0)
{
lean_dec_ref(v_source_2689_);
lean_dec(v_i_2688_);
return v_target_2690_;
}
else
{
lean_object* v_es_2693_; lean_object* v___x_2694_; lean_object* v_source_2695_; lean_object* v_target_2696_; lean_object* v___x_2697_; lean_object* v___x_2698_; 
v_es_2693_ = lean_array_fget(v_source_2689_, v_i_2688_);
v___x_2694_ = lean_box(0);
v_source_2695_ = lean_array_fset(v_source_2689_, v_i_2688_, v___x_2694_);
v_target_2696_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_NameHashSet_insert_spec__0_spec__1_spec__2_spec__3___redArg(v_target_2690_, v_es_2693_);
v___x_2697_ = lean_unsigned_to_nat(1u);
v___x_2698_ = lean_nat_add(v_i_2688_, v___x_2697_);
lean_dec(v_i_2688_);
v_i_2688_ = v___x_2698_;
v_source_2689_ = v_source_2695_;
v_target_2690_ = v_target_2696_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_NameHashSet_insert_spec__0_spec__1___redArg(lean_object* v_data_2700_){
_start:
{
lean_object* v___x_2701_; lean_object* v___x_2702_; lean_object* v_nbuckets_2703_; lean_object* v___x_2704_; lean_object* v___x_2705_; lean_object* v___x_2706_; lean_object* v___x_2707_; lean_object* v___x_2708_; 
v___x_2701_ = lean_array_get_size(v_data_2700_);
v___x_2702_ = lean_unsigned_to_nat(2u);
v_nbuckets_2703_ = lean_nat_mul(v___x_2701_, v___x_2702_);
v___x_2704_ = lean_unsigned_to_nat(0u);
v___x_2705_ = lean_box(0);
v___x_2706_ = lean_mk_array(v_nbuckets_2703_, v___x_2705_);
v___x_2707_ = lean_array_propagate_mark(v_data_2700_, v___x_2706_);
v___x_2708_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_NameHashSet_insert_spec__0_spec__1_spec__2___redArg(v___x_2704_, v_data_2700_, v___x_2707_);
return v___x_2708_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_NameHashSet_insert_spec__0___redArg(lean_object* v_m_2709_, lean_object* v_a_2710_, lean_object* v_b_2711_){
_start:
{
lean_object* v_size_2712_; lean_object* v_buckets_2713_; lean_object* v___x_2714_; uint64_t v___y_2716_; 
v_size_2712_ = lean_ctor_get(v_m_2709_, 0);
v_buckets_2713_ = lean_ctor_get(v_m_2709_, 1);
v___x_2714_ = lean_array_get_size(v_buckets_2713_);
if (lean_obj_tag(v_a_2710_) == 0)
{
uint64_t v___x_2753_; 
v___x_2753_ = 1723ULL;
v___y_2716_ = v___x_2753_;
goto v___jp_2715_;
}
else
{
uint64_t v_hash_2754_; 
v_hash_2754_ = lean_ctor_get_uint64(v_a_2710_, sizeof(void*)*2);
v___y_2716_ = v_hash_2754_;
goto v___jp_2715_;
}
v___jp_2715_:
{
uint64_t v___x_2717_; uint64_t v___x_2718_; uint64_t v_fold_2719_; uint64_t v___x_2720_; uint64_t v___x_2721_; uint64_t v___x_2722_; size_t v___x_2723_; size_t v___x_2724_; size_t v___x_2725_; size_t v___x_2726_; size_t v___x_2727_; lean_object* v_bkt_2728_; uint8_t v___x_2729_; 
v___x_2717_ = 32ULL;
v___x_2718_ = lean_uint64_shift_right(v___y_2716_, v___x_2717_);
v_fold_2719_ = lean_uint64_xor(v___y_2716_, v___x_2718_);
v___x_2720_ = 16ULL;
v___x_2721_ = lean_uint64_shift_right(v_fold_2719_, v___x_2720_);
v___x_2722_ = lean_uint64_xor(v_fold_2719_, v___x_2721_);
v___x_2723_ = lean_uint64_to_usize(v___x_2722_);
v___x_2724_ = lean_usize_of_nat(v___x_2714_);
v___x_2725_ = ((size_t)1ULL);
v___x_2726_ = lean_usize_sub(v___x_2724_, v___x_2725_);
v___x_2727_ = lean_usize_land(v___x_2723_, v___x_2726_);
v_bkt_2728_ = lean_array_uget_borrowed(v_buckets_2713_, v___x_2727_);
v___x_2729_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_NameHashSet_insert_spec__0_spec__0___redArg(v_a_2710_, v_bkt_2728_);
if (v___x_2729_ == 0)
{
lean_object* v___x_2731_; uint8_t v_isShared_2732_; uint8_t v_isSharedCheck_2750_; 
lean_inc_ref(v_buckets_2713_);
lean_inc(v_size_2712_);
v_isSharedCheck_2750_ = !lean_is_exclusive(v_m_2709_);
if (v_isSharedCheck_2750_ == 0)
{
lean_object* v_unused_2751_; lean_object* v_unused_2752_; 
v_unused_2751_ = lean_ctor_get(v_m_2709_, 1);
lean_dec(v_unused_2751_);
v_unused_2752_ = lean_ctor_get(v_m_2709_, 0);
lean_dec(v_unused_2752_);
v___x_2731_ = v_m_2709_;
v_isShared_2732_ = v_isSharedCheck_2750_;
goto v_resetjp_2730_;
}
else
{
lean_dec(v_m_2709_);
v___x_2731_ = lean_box(0);
v_isShared_2732_ = v_isSharedCheck_2750_;
goto v_resetjp_2730_;
}
v_resetjp_2730_:
{
lean_object* v___x_2733_; lean_object* v_size_x27_2734_; lean_object* v___x_2735_; lean_object* v_buckets_x27_2736_; lean_object* v___x_2737_; lean_object* v___x_2738_; lean_object* v___x_2739_; lean_object* v___x_2740_; lean_object* v___x_2741_; uint8_t v___x_2742_; 
v___x_2733_ = lean_unsigned_to_nat(1u);
v_size_x27_2734_ = lean_nat_add(v_size_2712_, v___x_2733_);
lean_dec(v_size_2712_);
lean_inc(v_bkt_2728_);
v___x_2735_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2735_, 0, v_a_2710_);
lean_ctor_set(v___x_2735_, 1, v_b_2711_);
lean_ctor_set(v___x_2735_, 2, v_bkt_2728_);
v_buckets_x27_2736_ = lean_array_uset(v_buckets_2713_, v___x_2727_, v___x_2735_);
v___x_2737_ = lean_unsigned_to_nat(4u);
v___x_2738_ = lean_nat_mul(v_size_x27_2734_, v___x_2737_);
v___x_2739_ = lean_unsigned_to_nat(3u);
v___x_2740_ = lean_nat_div(v___x_2738_, v___x_2739_);
lean_dec(v___x_2738_);
v___x_2741_ = lean_array_get_size(v_buckets_x27_2736_);
v___x_2742_ = lean_nat_dec_le(v___x_2740_, v___x_2741_);
lean_dec(v___x_2740_);
if (v___x_2742_ == 0)
{
lean_object* v_val_2743_; lean_object* v___x_2745_; 
v_val_2743_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_NameHashSet_insert_spec__0_spec__1___redArg(v_buckets_x27_2736_);
if (v_isShared_2732_ == 0)
{
lean_ctor_set(v___x_2731_, 1, v_val_2743_);
lean_ctor_set(v___x_2731_, 0, v_size_x27_2734_);
v___x_2745_ = v___x_2731_;
goto v_reusejp_2744_;
}
else
{
lean_object* v_reuseFailAlloc_2746_; 
v_reuseFailAlloc_2746_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2746_, 0, v_size_x27_2734_);
lean_ctor_set(v_reuseFailAlloc_2746_, 1, v_val_2743_);
v___x_2745_ = v_reuseFailAlloc_2746_;
goto v_reusejp_2744_;
}
v_reusejp_2744_:
{
return v___x_2745_;
}
}
else
{
lean_object* v___x_2748_; 
if (v_isShared_2732_ == 0)
{
lean_ctor_set(v___x_2731_, 1, v_buckets_x27_2736_);
lean_ctor_set(v___x_2731_, 0, v_size_x27_2734_);
v___x_2748_ = v___x_2731_;
goto v_reusejp_2747_;
}
else
{
lean_object* v_reuseFailAlloc_2749_; 
v_reuseFailAlloc_2749_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2749_, 0, v_size_x27_2734_);
lean_ctor_set(v_reuseFailAlloc_2749_, 1, v_buckets_x27_2736_);
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
lean_dec(v_b_2711_);
lean_dec(v_a_2710_);
return v_m_2709_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_NameHashSet_insert(lean_object* v_s_2755_, lean_object* v_n_2756_){
_start:
{
lean_object* v___x_2757_; lean_object* v___x_2758_; 
v___x_2757_ = lean_box(0);
v___x_2758_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_NameHashSet_insert_spec__0___redArg(v_s_2755_, v_n_2756_, v___x_2757_);
return v___x_2758_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_NameHashSet_insert_spec__0(lean_object* v_00_u03b2_2759_, lean_object* v_m_2760_, lean_object* v_a_2761_, lean_object* v_b_2762_){
_start:
{
lean_object* v___x_2763_; 
v___x_2763_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_NameHashSet_insert_spec__0___redArg(v_m_2760_, v_a_2761_, v_b_2762_);
return v___x_2763_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_NameHashSet_insert_spec__0_spec__0(lean_object* v_00_u03b2_2764_, lean_object* v_a_2765_, lean_object* v_x_2766_){
_start:
{
uint8_t v___x_2767_; 
v___x_2767_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_NameHashSet_insert_spec__0_spec__0___redArg(v_a_2765_, v_x_2766_);
return v___x_2767_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_NameHashSet_insert_spec__0_spec__0___boxed(lean_object* v_00_u03b2_2768_, lean_object* v_a_2769_, lean_object* v_x_2770_){
_start:
{
uint8_t v_res_2771_; lean_object* v_r_2772_; 
v_res_2771_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_NameHashSet_insert_spec__0_spec__0(v_00_u03b2_2768_, v_a_2769_, v_x_2770_);
lean_dec(v_x_2770_);
lean_dec(v_a_2769_);
v_r_2772_ = lean_box(v_res_2771_);
return v_r_2772_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_NameHashSet_insert_spec__0_spec__1(lean_object* v_00_u03b2_2773_, lean_object* v_data_2774_){
_start:
{
lean_object* v___x_2775_; 
v___x_2775_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_NameHashSet_insert_spec__0_spec__1___redArg(v_data_2774_);
return v___x_2775_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_NameHashSet_insert_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_2776_, lean_object* v_i_2777_, lean_object* v_source_2778_, lean_object* v_target_2779_){
_start:
{
lean_object* v___x_2780_; 
v___x_2780_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_NameHashSet_insert_spec__0_spec__1_spec__2___redArg(v_i_2777_, v_source_2778_, v_target_2779_);
return v___x_2780_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_NameHashSet_insert_spec__0_spec__1_spec__2_spec__3(lean_object* v_00_u03b2_2781_, lean_object* v_x_2782_, lean_object* v_x_2783_){
_start:
{
lean_object* v___x_2784_; 
v___x_2784_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_NameHashSet_insert_spec__0_spec__1_spec__2_spec__3___redArg(v_x_2782_, v_x_2783_);
return v___x_2784_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_NameHashSet_contains_spec__0___redArg(lean_object* v_m_2785_, lean_object* v_a_2786_){
_start:
{
lean_object* v_buckets_2787_; lean_object* v___x_2788_; uint64_t v___y_2790_; 
v_buckets_2787_ = lean_ctor_get(v_m_2785_, 1);
v___x_2788_ = lean_array_get_size(v_buckets_2787_);
if (lean_obj_tag(v_a_2786_) == 0)
{
uint64_t v___x_2804_; 
v___x_2804_ = 1723ULL;
v___y_2790_ = v___x_2804_;
goto v___jp_2789_;
}
else
{
uint64_t v_hash_2805_; 
v_hash_2805_ = lean_ctor_get_uint64(v_a_2786_, sizeof(void*)*2);
v___y_2790_ = v_hash_2805_;
goto v___jp_2789_;
}
v___jp_2789_:
{
uint64_t v___x_2791_; uint64_t v___x_2792_; uint64_t v_fold_2793_; uint64_t v___x_2794_; uint64_t v___x_2795_; uint64_t v___x_2796_; size_t v___x_2797_; size_t v___x_2798_; size_t v___x_2799_; size_t v___x_2800_; size_t v___x_2801_; lean_object* v___x_2802_; uint8_t v___x_2803_; 
v___x_2791_ = 32ULL;
v___x_2792_ = lean_uint64_shift_right(v___y_2790_, v___x_2791_);
v_fold_2793_ = lean_uint64_xor(v___y_2790_, v___x_2792_);
v___x_2794_ = 16ULL;
v___x_2795_ = lean_uint64_shift_right(v_fold_2793_, v___x_2794_);
v___x_2796_ = lean_uint64_xor(v_fold_2793_, v___x_2795_);
v___x_2797_ = lean_uint64_to_usize(v___x_2796_);
v___x_2798_ = lean_usize_of_nat(v___x_2788_);
v___x_2799_ = ((size_t)1ULL);
v___x_2800_ = lean_usize_sub(v___x_2798_, v___x_2799_);
v___x_2801_ = lean_usize_land(v___x_2797_, v___x_2800_);
v___x_2802_ = lean_array_uget_borrowed(v_buckets_2787_, v___x_2801_);
v___x_2803_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_NameHashSet_insert_spec__0_spec__0___redArg(v_a_2786_, v___x_2802_);
return v___x_2803_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_NameHashSet_contains_spec__0___redArg___boxed(lean_object* v_m_2806_, lean_object* v_a_2807_){
_start:
{
uint8_t v_res_2808_; lean_object* v_r_2809_; 
v_res_2808_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_NameHashSet_contains_spec__0___redArg(v_m_2806_, v_a_2807_);
lean_dec(v_a_2807_);
lean_dec_ref(v_m_2806_);
v_r_2809_ = lean_box(v_res_2808_);
return v_r_2809_;
}
}
LEAN_EXPORT uint8_t l_Lean_NameHashSet_contains(lean_object* v_s_2810_, lean_object* v_n_2811_){
_start:
{
uint8_t v___x_2812_; 
v___x_2812_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_NameHashSet_contains_spec__0___redArg(v_s_2810_, v_n_2811_);
return v___x_2812_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameHashSet_contains___boxed(lean_object* v_s_2813_, lean_object* v_n_2814_){
_start:
{
uint8_t v_res_2815_; lean_object* v_r_2816_; 
v_res_2815_ = l_Lean_NameHashSet_contains(v_s_2813_, v_n_2814_);
lean_dec(v_n_2814_);
lean_dec_ref(v_s_2813_);
v_r_2816_ = lean_box(v_res_2815_);
return v_r_2816_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_NameHashSet_contains_spec__0(lean_object* v_00_u03b2_2817_, lean_object* v_m_2818_, lean_object* v_a_2819_){
_start:
{
uint8_t v___x_2820_; 
v___x_2820_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_NameHashSet_contains_spec__0___redArg(v_m_2818_, v_a_2819_);
return v___x_2820_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_NameHashSet_contains_spec__0___boxed(lean_object* v_00_u03b2_2821_, lean_object* v_m_2822_, lean_object* v_a_2823_){
_start:
{
uint8_t v_res_2824_; lean_object* v_r_2825_; 
v_res_2824_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_NameHashSet_contains_spec__0(v_00_u03b2_2821_, v_m_2822_, v_a_2823_);
lean_dec(v_a_2823_);
lean_dec_ref(v_m_2822_);
v_r_2825_ = lean_box(v_res_2824_);
return v_r_2825_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_filter_go___at___00Std_DHashMap_Internal_Raw_u2080_filter___at___00Lean_NameHashSet_filter_spec__0_spec__0(lean_object* v_f_2826_, lean_object* v_acc_2827_, lean_object* v_a_2828_){
_start:
{
if (lean_obj_tag(v_a_2828_) == 0)
{
lean_dec_ref(v_f_2826_);
return v_acc_2827_;
}
else
{
lean_object* v_key_2829_; lean_object* v_value_2830_; lean_object* v_tail_2831_; lean_object* v___x_2833_; uint8_t v_isShared_2834_; uint8_t v_isSharedCheck_2842_; 
v_key_2829_ = lean_ctor_get(v_a_2828_, 0);
v_value_2830_ = lean_ctor_get(v_a_2828_, 1);
v_tail_2831_ = lean_ctor_get(v_a_2828_, 2);
v_isSharedCheck_2842_ = !lean_is_exclusive(v_a_2828_);
if (v_isSharedCheck_2842_ == 0)
{
v___x_2833_ = v_a_2828_;
v_isShared_2834_ = v_isSharedCheck_2842_;
goto v_resetjp_2832_;
}
else
{
lean_inc(v_tail_2831_);
lean_inc(v_value_2830_);
lean_inc(v_key_2829_);
lean_dec(v_a_2828_);
v___x_2833_ = lean_box(0);
v_isShared_2834_ = v_isSharedCheck_2842_;
goto v_resetjp_2832_;
}
v_resetjp_2832_:
{
lean_object* v___x_2835_; uint8_t v___x_2836_; 
lean_inc_ref(v_f_2826_);
lean_inc(v_key_2829_);
v___x_2835_ = lean_apply_1(v_f_2826_, v_key_2829_);
v___x_2836_ = lean_unbox(v___x_2835_);
if (v___x_2836_ == 0)
{
lean_del_object(v___x_2833_);
lean_dec(v_value_2830_);
lean_dec(v_key_2829_);
v_a_2828_ = v_tail_2831_;
goto _start;
}
else
{
lean_object* v___x_2839_; 
if (v_isShared_2834_ == 0)
{
lean_ctor_set(v___x_2833_, 2, v_acc_2827_);
v___x_2839_ = v___x_2833_;
goto v_reusejp_2838_;
}
else
{
lean_object* v_reuseFailAlloc_2841_; 
v_reuseFailAlloc_2841_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2841_, 0, v_key_2829_);
lean_ctor_set(v_reuseFailAlloc_2841_, 1, v_value_2830_);
lean_ctor_set(v_reuseFailAlloc_2841_, 2, v_acc_2827_);
v___x_2839_ = v_reuseFailAlloc_2841_;
goto v_reusejp_2838_;
}
v_reusejp_2838_:
{
v_acc_2827_ = v___x_2839_;
v_a_2828_ = v_tail_2831_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_DHashMap_Internal_Raw_u2080_filter___at___00Lean_NameHashSet_filter_spec__0_spec__1(lean_object* v_f_2843_, size_t v_sz_2844_, size_t v_i_2845_, lean_object* v_bs_2846_){
_start:
{
uint8_t v___x_2847_; 
v___x_2847_ = lean_usize_dec_lt(v_i_2845_, v_sz_2844_);
if (v___x_2847_ == 0)
{
lean_dec_ref(v_f_2843_);
return v_bs_2846_;
}
else
{
lean_object* v_v_2848_; lean_object* v___x_2849_; lean_object* v_bs_x27_2850_; lean_object* v___x_2851_; lean_object* v___x_2852_; size_t v___x_2853_; size_t v___x_2854_; lean_object* v___x_2855_; 
v_v_2848_ = lean_array_uget(v_bs_2846_, v_i_2845_);
v___x_2849_ = lean_unsigned_to_nat(0u);
v_bs_x27_2850_ = lean_array_uset(v_bs_2846_, v_i_2845_, v___x_2849_);
v___x_2851_ = lean_box(0);
lean_inc_ref(v_f_2843_);
v___x_2852_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_filter_go___at___00Std_DHashMap_Internal_Raw_u2080_filter___at___00Lean_NameHashSet_filter_spec__0_spec__0(v_f_2843_, v___x_2851_, v_v_2848_);
v___x_2853_ = ((size_t)1ULL);
v___x_2854_ = lean_usize_add(v_i_2845_, v___x_2853_);
v___x_2855_ = lean_array_uset(v_bs_x27_2850_, v_i_2845_, v___x_2852_);
v_i_2845_ = v___x_2854_;
v_bs_2846_ = v___x_2855_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_DHashMap_Internal_Raw_u2080_filter___at___00Lean_NameHashSet_filter_spec__0_spec__1___boxed(lean_object* v_f_2857_, lean_object* v_sz_2858_, lean_object* v_i_2859_, lean_object* v_bs_2860_){
_start:
{
size_t v_sz_boxed_2861_; size_t v_i_boxed_2862_; lean_object* v_res_2863_; 
v_sz_boxed_2861_ = lean_unbox_usize(v_sz_2858_);
lean_dec(v_sz_2858_);
v_i_boxed_2862_ = lean_unbox_usize(v_i_2859_);
lean_dec(v_i_2859_);
v_res_2863_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_DHashMap_Internal_Raw_u2080_filter___at___00Lean_NameHashSet_filter_spec__0_spec__1(v_f_2857_, v_sz_boxed_2861_, v_i_boxed_2862_, v_bs_2860_);
return v_res_2863_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_DHashMap_Internal_Raw_u2080_filter___at___00Lean_NameHashSet_filter_spec__0_spec__2(lean_object* v_as_2864_, size_t v_i_2865_, size_t v_stop_2866_, lean_object* v_b_2867_){
_start:
{
uint8_t v___x_2868_; 
v___x_2868_ = lean_usize_dec_eq(v_i_2865_, v_stop_2866_);
if (v___x_2868_ == 0)
{
lean_object* v___x_2869_; lean_object* v___x_2870_; lean_object* v___x_2871_; size_t v___x_2872_; size_t v___x_2873_; 
v___x_2869_ = lean_array_uget_borrowed(v_as_2864_, v_i_2865_);
v___x_2870_ = l_Std_DHashMap_Internal_AssocList_length___redArg(v___x_2869_);
v___x_2871_ = lean_nat_add(v_b_2867_, v___x_2870_);
lean_dec(v___x_2870_);
lean_dec(v_b_2867_);
v___x_2872_ = ((size_t)1ULL);
v___x_2873_ = lean_usize_add(v_i_2865_, v___x_2872_);
v_i_2865_ = v___x_2873_;
v_b_2867_ = v___x_2871_;
goto _start;
}
else
{
return v_b_2867_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_DHashMap_Internal_Raw_u2080_filter___at___00Lean_NameHashSet_filter_spec__0_spec__2___boxed(lean_object* v_as_2875_, lean_object* v_i_2876_, lean_object* v_stop_2877_, lean_object* v_b_2878_){
_start:
{
size_t v_i_boxed_2879_; size_t v_stop_boxed_2880_; lean_object* v_res_2881_; 
v_i_boxed_2879_ = lean_unbox_usize(v_i_2876_);
lean_dec(v_i_2876_);
v_stop_boxed_2880_ = lean_unbox_usize(v_stop_2877_);
lean_dec(v_stop_2877_);
v_res_2881_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_DHashMap_Internal_Raw_u2080_filter___at___00Lean_NameHashSet_filter_spec__0_spec__2(v_as_2875_, v_i_boxed_2879_, v_stop_boxed_2880_, v_b_2878_);
lean_dec_ref(v_as_2875_);
return v_res_2881_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_filter___at___00Lean_NameHashSet_filter_spec__0(lean_object* v_f_2882_, lean_object* v_m_2883_){
_start:
{
lean_object* v_buckets_2884_; lean_object* v___x_2886_; uint8_t v_isShared_2887_; uint8_t v_isSharedCheck_2902_; 
v_buckets_2884_ = lean_ctor_get(v_m_2883_, 1);
v_isSharedCheck_2902_ = !lean_is_exclusive(v_m_2883_);
if (v_isSharedCheck_2902_ == 0)
{
lean_object* v_unused_2903_; 
v_unused_2903_ = lean_ctor_get(v_m_2883_, 0);
lean_dec(v_unused_2903_);
v___x_2886_ = v_m_2883_;
v_isShared_2887_ = v_isSharedCheck_2902_;
goto v_resetjp_2885_;
}
else
{
lean_inc(v_buckets_2884_);
lean_dec(v_m_2883_);
v___x_2886_ = lean_box(0);
v_isShared_2887_ = v_isSharedCheck_2902_;
goto v_resetjp_2885_;
}
v_resetjp_2885_:
{
size_t v_sz_2888_; size_t v___x_2889_; lean_object* v_newBuckets_2890_; lean_object* v___x_2891_; lean_object* v___x_2892_; uint8_t v___x_2893_; 
v_sz_2888_ = lean_array_size(v_buckets_2884_);
v___x_2889_ = ((size_t)0ULL);
v_newBuckets_2890_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_DHashMap_Internal_Raw_u2080_filter___at___00Lean_NameHashSet_filter_spec__0_spec__1(v_f_2882_, v_sz_2888_, v___x_2889_, v_buckets_2884_);
v___x_2891_ = lean_unsigned_to_nat(0u);
v___x_2892_ = lean_array_get_size(v_newBuckets_2890_);
v___x_2893_ = lean_nat_dec_lt(v___x_2891_, v___x_2892_);
if (v___x_2893_ == 0)
{
lean_object* v___x_2895_; 
if (v_isShared_2887_ == 0)
{
lean_ctor_set(v___x_2886_, 1, v_newBuckets_2890_);
lean_ctor_set(v___x_2886_, 0, v___x_2891_);
v___x_2895_ = v___x_2886_;
goto v_reusejp_2894_;
}
else
{
lean_object* v_reuseFailAlloc_2896_; 
v_reuseFailAlloc_2896_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2896_, 0, v___x_2891_);
lean_ctor_set(v_reuseFailAlloc_2896_, 1, v_newBuckets_2890_);
v___x_2895_ = v_reuseFailAlloc_2896_;
goto v_reusejp_2894_;
}
v_reusejp_2894_:
{
return v___x_2895_;
}
}
else
{
size_t v___x_2897_; lean_object* v___x_2898_; lean_object* v___x_2900_; 
v___x_2897_ = lean_usize_of_nat(v___x_2892_);
v___x_2898_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_DHashMap_Internal_Raw_u2080_filter___at___00Lean_NameHashSet_filter_spec__0_spec__2(v_newBuckets_2890_, v___x_2889_, v___x_2897_, v___x_2891_);
if (v_isShared_2887_ == 0)
{
lean_ctor_set(v___x_2886_, 1, v_newBuckets_2890_);
lean_ctor_set(v___x_2886_, 0, v___x_2898_);
v___x_2900_ = v___x_2886_;
goto v_reusejp_2899_;
}
else
{
lean_object* v_reuseFailAlloc_2901_; 
v_reuseFailAlloc_2901_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2901_, 0, v___x_2898_);
lean_ctor_set(v_reuseFailAlloc_2901_, 1, v_newBuckets_2890_);
v___x_2900_ = v_reuseFailAlloc_2901_;
goto v_reusejp_2899_;
}
v_reusejp_2899_:
{
return v___x_2900_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_NameHashSet_filter(lean_object* v_f_2904_, lean_object* v_s_2905_){
_start:
{
lean_object* v___x_2906_; 
v___x_2906_ = l_Std_DHashMap_Internal_Raw_u2080_filter___at___00Lean_NameHashSet_filter_spec__0(v_f_2904_, v_s_2905_);
return v___x_2906_;
}
}
LEAN_EXPORT uint8_t l_List_beq___at___00Lean_MacroScopesView_isPrefixOf_spec__0(lean_object* v_x_2907_, lean_object* v_x_2908_){
_start:
{
if (lean_obj_tag(v_x_2907_) == 0)
{
if (lean_obj_tag(v_x_2908_) == 0)
{
uint8_t v___x_2909_; 
v___x_2909_ = 1;
return v___x_2909_;
}
else
{
uint8_t v___x_2910_; 
v___x_2910_ = 0;
return v___x_2910_;
}
}
else
{
if (lean_obj_tag(v_x_2908_) == 0)
{
uint8_t v___x_2911_; 
v___x_2911_ = 0;
return v___x_2911_;
}
else
{
lean_object* v_head_2912_; lean_object* v_tail_2913_; lean_object* v_head_2914_; lean_object* v_tail_2915_; uint8_t v___x_2916_; 
v_head_2912_ = lean_ctor_get(v_x_2907_, 0);
v_tail_2913_ = lean_ctor_get(v_x_2907_, 1);
v_head_2914_ = lean_ctor_get(v_x_2908_, 0);
v_tail_2915_ = lean_ctor_get(v_x_2908_, 1);
v___x_2916_ = lean_nat_dec_eq(v_head_2912_, v_head_2914_);
if (v___x_2916_ == 0)
{
return v___x_2916_;
}
else
{
v_x_2907_ = v_tail_2913_;
v_x_2908_ = v_tail_2915_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_beq___at___00Lean_MacroScopesView_isPrefixOf_spec__0___boxed(lean_object* v_x_2918_, lean_object* v_x_2919_){
_start:
{
uint8_t v_res_2920_; lean_object* v_r_2921_; 
v_res_2920_ = l_List_beq___at___00Lean_MacroScopesView_isPrefixOf_spec__0(v_x_2918_, v_x_2919_);
lean_dec(v_x_2919_);
lean_dec(v_x_2918_);
v_r_2921_ = lean_box(v_res_2920_);
return v_r_2921_;
}
}
LEAN_EXPORT uint8_t l_Lean_MacroScopesView_isPrefixOf(lean_object* v_v_u2081_2922_, lean_object* v_v_u2082_2923_){
_start:
{
lean_object* v_name_2924_; lean_object* v_imported_2925_; lean_object* v_ctx_2926_; lean_object* v_scopes_2927_; lean_object* v_name_2928_; lean_object* v_imported_2929_; lean_object* v_ctx_2930_; lean_object* v_scopes_2931_; uint8_t v___y_2933_; uint8_t v___x_2936_; 
v_name_2924_ = lean_ctor_get(v_v_u2081_2922_, 0);
v_imported_2925_ = lean_ctor_get(v_v_u2081_2922_, 1);
v_ctx_2926_ = lean_ctor_get(v_v_u2081_2922_, 2);
v_scopes_2927_ = lean_ctor_get(v_v_u2081_2922_, 3);
v_name_2928_ = lean_ctor_get(v_v_u2082_2923_, 0);
v_imported_2929_ = lean_ctor_get(v_v_u2082_2923_, 1);
v_ctx_2930_ = lean_ctor_get(v_v_u2082_2923_, 2);
v_scopes_2931_ = lean_ctor_get(v_v_u2082_2923_, 3);
v___x_2936_ = l_Lean_Name_isPrefixOf(v_name_2924_, v_name_2928_);
if (v___x_2936_ == 0)
{
v___y_2933_ = v___x_2936_;
goto v___jp_2932_;
}
else
{
uint8_t v___x_2937_; 
v___x_2937_ = l_List_beq___at___00Lean_MacroScopesView_isPrefixOf_spec__0(v_scopes_2927_, v_scopes_2931_);
v___y_2933_ = v___x_2937_;
goto v___jp_2932_;
}
v___jp_2932_:
{
if (v___y_2933_ == 0)
{
return v___y_2933_;
}
else
{
uint8_t v___x_2934_; 
v___x_2934_ = lean_name_eq(v_ctx_2926_, v_ctx_2930_);
if (v___x_2934_ == 0)
{
return v___x_2934_;
}
else
{
uint8_t v___x_2935_; 
v___x_2935_ = lean_name_eq(v_imported_2925_, v_imported_2929_);
return v___x_2935_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MacroScopesView_isPrefixOf___boxed(lean_object* v_v_u2081_2938_, lean_object* v_v_u2082_2939_){
_start:
{
uint8_t v_res_2940_; lean_object* v_r_2941_; 
v_res_2940_ = l_Lean_MacroScopesView_isPrefixOf(v_v_u2081_2938_, v_v_u2082_2939_);
lean_dec_ref(v_v_u2082_2939_);
lean_dec_ref(v_v_u2081_2938_);
v_r_2941_ = lean_box(v_res_2940_);
return v_r_2941_;
}
}
LEAN_EXPORT uint8_t l_Lean_MacroScopesView_isSuffixOf(lean_object* v_v_u2081_2942_, lean_object* v_v_u2082_2943_){
_start:
{
lean_object* v_name_2944_; lean_object* v_imported_2945_; lean_object* v_ctx_2946_; lean_object* v_scopes_2947_; lean_object* v_name_2948_; lean_object* v_imported_2949_; lean_object* v_ctx_2950_; lean_object* v_scopes_2951_; uint8_t v___y_2953_; uint8_t v___x_2956_; 
v_name_2944_ = lean_ctor_get(v_v_u2081_2942_, 0);
v_imported_2945_ = lean_ctor_get(v_v_u2081_2942_, 1);
v_ctx_2946_ = lean_ctor_get(v_v_u2081_2942_, 2);
v_scopes_2947_ = lean_ctor_get(v_v_u2081_2942_, 3);
v_name_2948_ = lean_ctor_get(v_v_u2082_2943_, 0);
v_imported_2949_ = lean_ctor_get(v_v_u2082_2943_, 1);
v_ctx_2950_ = lean_ctor_get(v_v_u2082_2943_, 2);
v_scopes_2951_ = lean_ctor_get(v_v_u2082_2943_, 3);
v___x_2956_ = l_Lean_Name_isSuffixOf(v_name_2944_, v_name_2948_);
if (v___x_2956_ == 0)
{
v___y_2953_ = v___x_2956_;
goto v___jp_2952_;
}
else
{
uint8_t v___x_2957_; 
v___x_2957_ = l_List_beq___at___00Lean_MacroScopesView_isPrefixOf_spec__0(v_scopes_2947_, v_scopes_2951_);
v___y_2953_ = v___x_2957_;
goto v___jp_2952_;
}
v___jp_2952_:
{
if (v___y_2953_ == 0)
{
return v___y_2953_;
}
else
{
uint8_t v___x_2954_; 
v___x_2954_ = lean_name_eq(v_ctx_2946_, v_ctx_2950_);
if (v___x_2954_ == 0)
{
return v___x_2954_;
}
else
{
uint8_t v___x_2955_; 
v___x_2955_ = lean_name_eq(v_imported_2945_, v_imported_2949_);
return v___x_2955_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MacroScopesView_isSuffixOf___boxed(lean_object* v_v_u2081_2958_, lean_object* v_v_u2082_2959_){
_start:
{
uint8_t v_res_2960_; lean_object* v_r_2961_; 
v_res_2960_ = l_Lean_MacroScopesView_isSuffixOf(v_v_u2081_2958_, v_v_u2082_2959_);
lean_dec_ref(v_v_u2082_2959_);
lean_dec_ref(v_v_u2081_2958_);
v_r_2961_ = lean_box(v_res_2960_);
return v_r_2961_;
}
}
lean_object* runtime_initialize_Std_Data_HashSet_Basic(uint8_t builtin);
lean_object* runtime_initialize_Std_Data_TreeSet_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Data_SSet(uint8_t builtin);
lean_object* runtime_initialize_Lean_Data_Name(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Data_NameMap_Basic(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Std_Data_HashSet_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Data_TreeSet_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Data_SSet(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Data_Name(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_NameSet_empty = _init_l_Lean_NameSet_empty();
lean_mark_persistent(l_Lean_NameSet_empty);
l_Lean_NameSet_instEmptyCollection = _init_l_Lean_NameSet_instEmptyCollection();
lean_mark_persistent(l_Lean_NameSet_instEmptyCollection);
l_Lean_NameSet_instInhabited = _init_l_Lean_NameSet_instInhabited();
lean_mark_persistent(l_Lean_NameSet_instInhabited);
l_Lean_NameSet_instMembershipName = _init_l_Lean_NameSet_instMembershipName();
lean_mark_persistent(l_Lean_NameSet_instMembershipName);
l_Lean_NameSSet_empty = _init_l_Lean_NameSSet_empty();
lean_mark_persistent(l_Lean_NameSSet_empty);
l_Lean_NameSSet_instEmptyCollection = _init_l_Lean_NameSSet_instEmptyCollection();
lean_mark_persistent(l_Lean_NameSSet_instEmptyCollection);
l_Lean_NameSSet_instInhabited = _init_l_Lean_NameSSet_instInhabited();
lean_mark_persistent(l_Lean_NameSSet_instInhabited);
l_Lean_NameHashSet_empty = _init_l_Lean_NameHashSet_empty();
lean_mark_persistent(l_Lean_NameHashSet_empty);
l_Lean_NameHashSet_instEmptyCollection = _init_l_Lean_NameHashSet_instEmptyCollection();
lean_mark_persistent(l_Lean_NameHashSet_instEmptyCollection);
l_Lean_NameHashSet_instInhabited = _init_l_Lean_NameHashSet_instInhabited();
lean_mark_persistent(l_Lean_NameHashSet_instInhabited);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Data_NameMap_Basic(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Std_Data_HashSet_Basic(uint8_t builtin);
lean_object* initialize_Std_Data_TreeSet_Basic(uint8_t builtin);
lean_object* initialize_Lean_Data_SSet(uint8_t builtin);
lean_object* initialize_Lean_Data_Name(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Data_NameMap_Basic(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Std_Data_HashSet_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Data_TreeSet_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Data_SSet(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Data_Name(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Data_NameMap_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Data_NameMap_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Data_NameMap_Basic(builtin);
}
#ifdef __cplusplus
}
#endif
