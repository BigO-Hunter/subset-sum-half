// Lean compiler output
// Module: Submission.Program
// Imports: public import Init public meta import Init public import Submission.SubsetSumStatement
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
lean_object* lean_array_to_list(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_List_range(lean_object*);
lean_object* l_List_drop___redArg(lean_object*, lean_object*);
lean_object* l_List_foldl___at___00Array_appendList_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_Line_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_Line_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_Line_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_Line_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_Line_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_Line_mark_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_Line_mark_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_Line_raw_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_Line_raw_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_Line_jblt_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_Line_jblt_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_resolve_offsets(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_List_find_x3f___at___00SubsetSum_MITM_resolve_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_List_find_x3f___at___00SubsetSum_MITM_resolve_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_List_filterMapTR_go___at___00SubsetSum_MITM_resolve_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_List_filterMapTR_go___at___00SubsetSum_MITM_resolve_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_array_object lp_subsetsum_SubsetSum_MITM_resolve___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_resolve___closed__0 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_resolve___closed__0_value;
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_resolve(lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_rCUR;
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_rONE;
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_rZER;
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_rTMP;
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_rBND;
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_rIDX;
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_rVAL;
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_rN;
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_rRE;
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_rH;
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_rK;
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_rL;
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_rI;
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_rJ;
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_rW;
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_rVI;
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_rVJ;
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_rAK;
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_rSRC;
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_rDST;
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_rT1;
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_rT2;
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_rT3;
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_LROUND;
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_LMERGE;
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_LHAVEJ;
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_LBOTH;
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_LTAKEJ;
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_LTAKEL;
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_LSTEP;
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_LDRAINI;
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_LDRAINJ;
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_LDILOOP;
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_LDJLOOP;
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_LSWAP;
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_jmp(lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_LCOPY;
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_LCOPY2;
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_LSMALL;
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_LSMALLOK;
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_LSMALLOK2;
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_LSMALLR;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_saveAk___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_saveAk___closed__0 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_saveAk___closed__0_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_saveAk___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_saveAk___closed__0_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_saveAk___closed__1 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_saveAk___closed__1_value;
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_saveAk(lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00SubsetSum_MITM_prologue_spec__0(lean_object*, lean_object*);
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__0 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__0_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__0_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__1 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__1_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 12}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__2 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__2_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__2_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__3 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__3_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__4 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__4_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__4_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__5 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__5_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 12}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__6 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__6_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__6_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__7 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__7_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__8 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__8_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__8_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__9 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__9_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__9_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__10 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__10_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__7_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__10_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__11 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__11_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_saveAk___closed__1_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__11_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__12 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__12_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__5_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__12_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__13 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__13_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__3_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__13_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__14 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__14_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__1_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__14_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__15 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__15_value;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_prologue___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__16;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_prologue___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__17;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__18 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__18_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__18_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__19 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__19_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1)),((lean_object*)(((size_t)(3) << 1) | 1)),((lean_object*)(((size_t)(3) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__20 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__20_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__20_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__21 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__21_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1)),((lean_object*)(((size_t)(3) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__22 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__22_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__22_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__23 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__23_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(3) << 1) | 1)),((lean_object*)(((size_t)(50) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__24 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__24_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__24_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__25 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__25_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__23_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__25_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__26 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__26_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__21_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__26_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__27 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__27_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__21_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__27_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__28 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__28_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__19_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__28_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__29 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__29_value;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_prologue___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__30;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_prologue___closed__31_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__31;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_prologue___closed__32_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__32;
static const lean_array_object lp_subsetsum_SubsetSum_MITM_prologue___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__33 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__33_value;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_prologue___closed__34_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__34;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_prologue___closed__35_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__35;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(5) << 1) | 1)),((lean_object*)(((size_t)(5) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__36 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__36_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__36_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__37 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__37_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(5) << 1) | 1)),((lean_object*)(((size_t)(4) << 1) | 1)),((lean_object*)(((size_t)(3) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__38 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__38_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(7) << 1) | 1)),((lean_object*)(((size_t)(4) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__39 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__39_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__39_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__40 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__40_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(7) << 1) | 1)),((lean_object*)(((size_t)(7) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__41 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__41_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__41_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__42 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__42_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(8) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__43 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__43_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__43_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__44 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__44_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__44_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__45 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__45_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__42_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__45_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__46 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__46_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__40_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__46_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__47 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__47_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__38_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__47_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__48 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__48_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__37_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__48_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__49 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__49_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__50 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__50_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(20) << 1) | 1)),((lean_object*)(((size_t)(5) << 1) | 1)),((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__51 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__51_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__51_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__52 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__52_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 11}, .m_objs = {((lean_object*)(((size_t)(6) << 1) | 1)),((lean_object*)(((size_t)(20) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__53 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__53_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__54_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__53_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__54 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__54_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__55_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(21) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(5) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__55 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__55_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__56_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__55_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__56 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__56_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__57_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 12}, .m_objs = {((lean_object*)(((size_t)(21) << 1) | 1)),((lean_object*)(((size_t)(6) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__57 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__57_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__58_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__57_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__58 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__58_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__59_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__58_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__49_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__59 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__59_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__60_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__56_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__59_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__60 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__60_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__61_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__54_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__60_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__61 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__61_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__62_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__52_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__61_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__62 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__62_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__63_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__50_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__62_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__63 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__63_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__64_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(5) << 1) | 1)),((lean_object*)(((size_t)(3) << 1) | 1)),((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__64 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__64_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__65_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__64_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__65 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__65_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__66_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(4) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(3) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__66 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__66_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__67_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__66_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__67 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__67_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__68_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 10}, .m_objs = {((lean_object*)(((size_t)(4) << 1) | 1)),((lean_object*)(((size_t)(4) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__68 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__68_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__69_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__68_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__69 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__69_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__70_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(4) << 1) | 1)),((lean_object*)(((size_t)(4) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__70 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__70_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__71_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__70_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__71 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__71_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__72_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__71_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__63_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__72 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__72_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__73_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__71_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__72_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__73 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__73_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__74_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__69_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__73_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__74 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__74_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__75_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__67_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__74_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__75 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__75_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__76_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__65_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__75_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__76 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__76_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__77_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(6) << 1) | 1)),((lean_object*)(((size_t)(6) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__77 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__77_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__78_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__77_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__78 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__78_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__79_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 12}, .m_objs = {((lean_object*)(((size_t)(6) << 1) | 1)),((lean_object*)(((size_t)(7) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__79 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__79_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__80_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__79_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__80 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__80_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__81_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(5) << 1) | 1)),((lean_object*)(((size_t)(3) << 1) | 1)),((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__81 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__81_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__82_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__81_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__76_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__82 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__82_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__83_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__37_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__82_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__83 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__83_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__84_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__80_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__83_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__84 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__84_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__85_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__78_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__84_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__85 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__85_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__86_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1)),((lean_object*)(((size_t)(3) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__86 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__86_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__87_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__86_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__87 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__87_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__88_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__88 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__88_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__89_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(6) << 1) | 1)),((lean_object*)(((size_t)(4) << 1) | 1)),((lean_object*)(((size_t)(5) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__89 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__89_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__90_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__89_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__90 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__90_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__91_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 11}, .m_objs = {((lean_object*)(((size_t)(7) << 1) | 1)),((lean_object*)(((size_t)(6) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__91 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__91_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__92_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__91_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__92 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__92_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__93_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(6) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(5) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__93 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__93_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__94_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__93_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__94 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__94_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__95_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__94_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__85_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__95 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__95_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__96_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__92_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__95_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__96 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__96_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__97_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__90_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__96_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__97 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__97_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__98_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__88_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__97_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__98 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__98_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__99_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__87_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__98_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__99 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__99_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__100_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(5) << 1) | 1)),((lean_object*)(((size_t)(5) << 1) | 1)),((lean_object*)(((size_t)(5) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__100 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__100_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__101_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__100_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__101 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__101_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__102_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__101_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__99_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__102 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__102_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__103_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__67_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__102_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__103 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__103_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__104_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_saveAk___closed__1_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__103_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__104 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__104_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__105_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_saveAk___closed__1_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__104_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__105 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__105_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__106_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(4) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__106 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__106_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__107_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__106_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__107 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__107_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__108_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(4) << 1) | 1)),((lean_object*)(((size_t)(4) << 1) | 1)),((lean_object*)(((size_t)(4) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__108 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__108_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__109_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__108_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__109 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__109_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__110_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(4) << 1) | 1)),((lean_object*)(((size_t)(4) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__110 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__110_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__111_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__110_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__111 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__111_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__112_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1)),((lean_object*)(((size_t)(3) << 1) | 1)),((lean_object*)(((size_t)(4) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__112 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__112_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__113_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__112_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__113 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__113_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__114_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__113_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__105_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__114 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__114_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__115_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__111_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__114_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__115 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__115_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__116_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__109_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__115_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__116 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__116_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__117_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__109_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__116_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__117 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__117_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__118_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__107_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__117_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__118 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__118_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__119_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__21_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__118_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__119 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__119_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__120_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__21_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__119_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__120 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__120_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__121_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__21_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__120_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__121 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__121_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_prologue___closed__122_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__19_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__121_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__122 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_prologue___closed__122_value;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_prologue___closed__123_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_prologue___closed__123;
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_prologue;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(18) << 1) | 1)),((lean_object*)(((size_t)(19) << 1) | 1)),((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__0 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__0_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__0_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__1 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__1_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(19) << 1) | 1)),((lean_object*)(((size_t)(20) << 1) | 1)),((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__2 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__2_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__2_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__3 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__3_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__4 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__4_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__4_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__5 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__5_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(21) << 1) | 1)),((lean_object*)(((size_t)(9) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__6 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__6_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__6_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__7 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__7_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)(((size_t)(21) << 1) | 1)),((lean_object*)(((size_t)(10) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__8 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__8_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__8_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__9 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__9_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__7_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__9_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__10 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__10_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__5_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__10_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__11 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__11_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__3_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__11_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__12 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__12_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__1_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__12_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__13 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__13_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(14) << 1) | 1)),((lean_object*)(((size_t)(14) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__14 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__14_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__14_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__15 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__15_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(13) << 1) | 1)),((lean_object*)(((size_t)(11) << 1) | 1)),((lean_object*)(((size_t)(20) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__16 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__16_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(21) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__17 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__17_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(11) << 1) | 1)),((lean_object*)(((size_t)(11) << 1) | 1)),((lean_object*)(((size_t)(11) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__18 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__18_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__18_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__19 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__19_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(20) << 1) | 1)),((lean_object*)(((size_t)(18) << 1) | 1)),((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__20 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__20_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__20_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__21 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__21_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__21_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__13_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__22 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__22_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__19_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__22_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__23 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__23_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__17_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__23_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__24 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__24_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__16_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__24_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__25 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__25_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__15_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__25_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__26 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__26_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 11}, .m_objs = {((lean_object*)(((size_t)(16) << 1) | 1)),((lean_object*)(((size_t)(21) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__27 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__27_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__27_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__28 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__28_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(16) << 1) | 1)),((lean_object*)(((size_t)(16) << 1) | 1)),((lean_object*)(((size_t)(17) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__29 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__29_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__29_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__30 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__30_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(20) << 1) | 1)),((lean_object*)(((size_t)(19) << 1) | 1)),((lean_object*)(((size_t)(14) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__31 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__31_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__31_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__32 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__32_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 12}, .m_objs = {((lean_object*)(((size_t)(20) << 1) | 1)),((lean_object*)(((size_t)(16) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__33 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__33_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__33_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__34 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__34_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(13) << 1) | 1)),((lean_object*)(((size_t)(13) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__35 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__35_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__35_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__36 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__36_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__36_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__26_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__37 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__37_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__34_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__37_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__38 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__38_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__32_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__38_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__39 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__39_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__30_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__39_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__40 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__40_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__28_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__40_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__41 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__41_value;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA___closed__42_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__42;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(18) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__43 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__43_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(20) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__44 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__44_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(21) << 1) | 1)),((lean_object*)(((size_t)(18) << 1) | 1)),((lean_object*)(((size_t)(13) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__45 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__45_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__45_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__46 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__46_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__46_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__41_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__47 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__47_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__44_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__47_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__48 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__48_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__43_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__48_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__49 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__49_value;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA___closed__50_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__50;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(21) << 1) | 1)),((lean_object*)(((size_t)(19) << 1) | 1)),((lean_object*)(((size_t)(14) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__51 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__51_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__51_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__52 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__52_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 12}, .m_objs = {((lean_object*)(((size_t)(21) << 1) | 1)),((lean_object*)(((size_t)(15) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__53 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__53_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA___closed__54_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__53_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__54 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__54_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA___closed__55_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(12) << 1) | 1)),((lean_object*)(((size_t)(12) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__55 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__55_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA___closed__56_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__55_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__56 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__56_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA___closed__57_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(12) << 1) | 1)),((lean_object*)(((size_t)(11) << 1) | 1)),((lean_object*)(((size_t)(19) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__57 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__57_value;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA___closed__58_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__58;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA___closed__59_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__59;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA___closed__60_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__60;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA___closed__61_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__61;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA___closed__62_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__62;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA___closed__63_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(19) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__63 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__63_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA___closed__64_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(20) << 1) | 1)),((lean_object*)(((size_t)(18) << 1) | 1)),((lean_object*)(((size_t)(12) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__64 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__64_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA___closed__65_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__64_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__65 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__65_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA___closed__66_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 11}, .m_objs = {((lean_object*)(((size_t)(15) << 1) | 1)),((lean_object*)(((size_t)(20) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__66 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__66_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA___closed__67_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__66_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__67 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__67_value;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA___closed__68_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__68;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA___closed__69_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__69;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA___closed__70_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__70;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA___closed__71_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__71;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA___closed__72_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(16) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__72 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__72_value;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA___closed__73_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__73;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA___closed__74_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(17) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__74 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__74_value;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA___closed__75_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__75;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA___closed__76_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__76;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA___closed__77_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__77;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA___closed__78_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__78;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA___closed__79_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__79;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA___closed__80_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(15) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__80 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__80_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA___closed__81_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 12}, .m_objs = {((lean_object*)(((size_t)(20) << 1) | 1)),((lean_object*)(((size_t)(15) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__81 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__81_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA___closed__82_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__81_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__82 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__82_value;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA___closed__83_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__83;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA___closed__84_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__84;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA___closed__85_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__85;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA___closed__86_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__86;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA___closed__87_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(14) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__87 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__87_value;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA___closed__88_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__88;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA___closed__89_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__89;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA___closed__90_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__90;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA___closed__91_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__91;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA___closed__92_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__92;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA___closed__93_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__93;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA___closed__94_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(16) << 1) | 1)),((lean_object*)(((size_t)(15) << 1) | 1)),((lean_object*)(((size_t)(14) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__94 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__94_value;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA___closed__95_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__95;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA___closed__96_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__96;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA___closed__97_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__97;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA___closed__98_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__98;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA___closed__99_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__99;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA___closed__100_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__100;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA___closed__101_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(12) << 1) | 1)),((lean_object*)(((size_t)(11) << 1) | 1)),((lean_object*)(((size_t)(13) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__101 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__101_value;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA___closed__102_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__102;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA___closed__103_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(13) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__103 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__103_value;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA___closed__104_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__104;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA___closed__105_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__105;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA___closed__106_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__106;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA___closed__107_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__107;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA___closed__108_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__108;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA___closed__109_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(11) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__109 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__109_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA___closed__110_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(13) << 1) | 1)),((lean_object*)(((size_t)(11) << 1) | 1)),((lean_object*)(((size_t)(12) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__110 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__110_value;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA___closed__111_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__111;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA___closed__112_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(12) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__112 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__112_value;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA___closed__113_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__113;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA___closed__114_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__114;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA___closed__115_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__115;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA___closed__116_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__116;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA___closed__117_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(20) << 1) | 1)),((lean_object*)(((size_t)(8) << 1) | 1)),((lean_object*)(((size_t)(10) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__117 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__117_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA___closed__118_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__117_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__118 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__118_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA___closed__119_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 11}, .m_objs = {((lean_object*)(((size_t)(17) << 1) | 1)),((lean_object*)(((size_t)(20) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__119 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__119_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA___closed__120_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__119_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__120 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__120_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA___closed__121_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(12) << 1) | 1)),((lean_object*)(((size_t)(12) << 1) | 1)),((lean_object*)(((size_t)(12) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__121 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__121_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA___closed__122_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__121_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__122 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__122_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA___closed__123_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(13) << 1) | 1)),((lean_object*)(((size_t)(13) << 1) | 1)),((lean_object*)(((size_t)(13) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__123 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__123_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA___closed__124_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__123_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__124 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__124_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA___closed__125_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(14) << 1) | 1)),((lean_object*)(((size_t)(14) << 1) | 1)),((lean_object*)(((size_t)(14) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__125 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__125_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA___closed__126_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__125_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__126 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__126_value;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA___closed__127_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__127;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA___closed__128_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__128;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA___closed__129_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__129;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA___closed__130_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__130;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA___closed__131_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__131;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA___closed__132_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 12}, .m_objs = {((lean_object*)(((size_t)(20) << 1) | 1)),((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__132 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__132_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA___closed__133_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__132_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__133 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__133_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA___closed__134_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__134 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__134_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA___closed__135_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__134_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__135 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__135_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA___closed__136_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__136 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__136_value;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA___closed__137_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__137;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA___closed__138_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__138;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA___closed__139_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__139;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA___closed__140_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__140;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA___closed__141_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(20) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__141 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__141_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA___closed__142_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__141_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__142 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__142_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA___closed__143_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 9}, .m_objs = {((lean_object*)(((size_t)(20) << 1) | 1)),((lean_object*)(((size_t)(20) << 1) | 1)),((lean_object*)(((size_t)(9) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__143 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__143_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA___closed__144_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__143_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__144 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__144_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA___closed__145_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(19) << 1) | 1)),((lean_object*)(((size_t)(18) << 1) | 1)),((lean_object*)(((size_t)(20) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__145 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__145_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA___closed__146_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__145_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__146 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__146_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA___closed__147_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(19) << 1) | 1)),((lean_object*)(((size_t)(19) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__147 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__147_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA___closed__148_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__147_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__148 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__148_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA___closed__149_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(11) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__149 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__149_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA___closed__150_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__149_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__150 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__150_value;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA___closed__151_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__151;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA___closed__152_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__152;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA___closed__153_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__153;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA___closed__154_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__154;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA___closed__155_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__155;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA___closed__156_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 10}, .m_objs = {((lean_object*)(((size_t)(9) << 1) | 1)),((lean_object*)(((size_t)(7) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__156 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__156_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA___closed__157_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__156_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__157 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__157_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA___closed__158_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(18) << 1) | 1)),((lean_object*)(((size_t)(8) << 1) | 1)),((lean_object*)(((size_t)(7) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__158 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__158_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA___closed__159_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__158_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__159 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__159_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA___closed__160_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(18) << 1) | 1)),((lean_object*)(((size_t)(18) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__160 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__160_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA___closed__161_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__160_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__161 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__161_value;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA___closed__162_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__162;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA___closed__163_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__163;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA___closed__164_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__164;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA___closed__165_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA___closed__165;
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_phaseA;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_progPA___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_progPA___closed__0;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_progPA___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_progPA___closed__1;
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_progPA;
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_LBIDX;
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_LBBIT;
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_LBBIT2;
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_LADDK;
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_LBITNEXT;
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_LAFTER;
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_LBSRCH;
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_LSMID;
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_LGTR;
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_LLESS;
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_LNEXT;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseB___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(39) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__0 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseB___closed__0_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseB___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(12) << 1) | 1)),((lean_object*)(((size_t)(20) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__1 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseB___closed__1_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseB___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseB___closed__1_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__2 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseB___closed__2_value;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseB___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__3;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseB___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(40) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__4 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseB___closed__4_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseB___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)(((size_t)(22) << 1) | 1)),((lean_object*)(((size_t)(30) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__5 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseB___closed__5_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseB___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(16) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__6 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseB___closed__6_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseB___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseB___closed__6_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__7 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseB___closed__7_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseB___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseB___closed__5_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseB___closed__7_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__8 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseB___closed__8_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseB___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA___closed__5_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseB___closed__8_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__9 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseB___closed__9_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseB___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseB___closed__4_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseB___closed__9_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__10 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseB___closed__10_value;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseB___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__11;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseB___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__12;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseB___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__13;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseB___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 11}, .m_objs = {((lean_object*)(((size_t)(15) << 1) | 1)),((lean_object*)(((size_t)(21) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__14 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseB___closed__14_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseB___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseB___closed__14_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__15 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseB___closed__15_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseB___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(15) << 1) | 1)),((lean_object*)(((size_t)(16) << 1) | 1)),((lean_object*)(((size_t)(39) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__16 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseB___closed__16_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseB___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(16) << 1) | 1)),((lean_object*)(((size_t)(15) << 1) | 1)),((lean_object*)(((size_t)(38) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__17 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseB___closed__17_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseB___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(15) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__18 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseB___closed__18_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseB___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(38) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__19 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseB___closed__19_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseB___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(13) << 1) | 1)),((lean_object*)(((size_t)(20) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__20 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseB___closed__20_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseB___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseB___closed__20_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__21 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseB___closed__21_value;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseB___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__22;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseB___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__23;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseB___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__24;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseB___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__25;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseB___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__26;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseB___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__27;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseB___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__28;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseB___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(20) << 1) | 1)),((lean_object*)(((size_t)(13) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__29 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseB___closed__29_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseB___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseB___closed__29_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__30 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseB___closed__30_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseB___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(12) << 1) | 1)),((lean_object*)(((size_t)(20) << 1) | 1)),((lean_object*)(((size_t)(37) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__31 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseB___closed__31_value;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseB___closed__32_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__32;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseB___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(37) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__33 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseB___closed__33_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseB___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(20) << 1) | 1)),((lean_object*)(((size_t)(12) << 1) | 1)),((lean_object*)(((size_t)(13) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__34 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseB___closed__34_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseB___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseB___closed__34_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__35 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseB___closed__35_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseB___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 10}, .m_objs = {((lean_object*)(((size_t)(20) << 1) | 1)),((lean_object*)(((size_t)(20) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__36 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseB___closed__36_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseB___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseB___closed__36_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__37 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseB___closed__37_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseB___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(21) << 1) | 1)),((lean_object*)(((size_t)(18) << 1) | 1)),((lean_object*)(((size_t)(20) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__38 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseB___closed__38_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseB___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseB___closed__38_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__39 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseB___closed__39_value;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseB___closed__40_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__40;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseB___closed__41_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__41;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseB___closed__42_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__42;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseB___closed__43_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__43;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseB___closed__44_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__44;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseB___closed__45_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__45;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseB___closed__46_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__46;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseB___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(20) << 1) | 1)),((lean_object*)(((size_t)(8) << 1) | 1)),((lean_object*)(((size_t)(7) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__47 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseB___closed__47_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseB___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseB___closed__47_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__48 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseB___closed__48_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseB___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(20) << 1) | 1)),((lean_object*)(((size_t)(20) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__49 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseB___closed__49_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseB___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseB___closed__49_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__50 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseB___closed__50_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseB___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 11}, .m_objs = {((lean_object*)(((size_t)(21) << 1) | 1)),((lean_object*)(((size_t)(20) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__51 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseB___closed__51_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseB___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseB___closed__51_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__52 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseB___closed__52_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseB___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(16) << 1) | 1)),((lean_object*)(((size_t)(21) << 1) | 1)),((lean_object*)(((size_t)(14) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__53 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseB___closed__53_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseB___closed__54_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseB___closed__53_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__54 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseB___closed__54_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseB___closed__55_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(13) << 1) | 1)),((lean_object*)(((size_t)(11) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__55 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseB___closed__55_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseB___closed__56_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseB___closed__55_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__56 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseB___closed__56_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseB___closed__57_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(36) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__57 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseB___closed__57_value;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseB___closed__58_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__58;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseB___closed__59_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__59;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseB___closed__60_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__60;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseB___closed__61_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__61;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseB___closed__62_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__62;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseB___closed__63_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__63;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseB___closed__64_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__64;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseB___closed__65_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__65;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseB___closed__66_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(33) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__66 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseB___closed__66_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseB___closed__67_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(14) << 1) | 1)),((lean_object*)(((size_t)(14) << 1) | 1)),((lean_object*)(((size_t)(17) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__67 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseB___closed__67_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseB___closed__68_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseB___closed__67_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__68 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseB___closed__68_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseB___closed__69_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(34) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__69 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseB___closed__69_value;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseB___closed__70_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__70;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseB___closed__71_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(35) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__71 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseB___closed__71_value;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseB___closed__72_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__72;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseB___closed__73_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__73;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseB___closed__74_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__74;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseB___closed__75_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__75;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseB___closed__76_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__76;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseB___closed__77_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__77;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseB___closed__78_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__78;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseB___closed__79_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(20) << 1) | 1)),((lean_object*)(((size_t)(8) << 1) | 1)),((lean_object*)(((size_t)(9) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__79 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseB___closed__79_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseB___closed__80_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseB___closed__79_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__80 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseB___closed__80_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseB___closed__81_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(20) << 1) | 1)),((lean_object*)(((size_t)(20) << 1) | 1)),((lean_object*)(((size_t)(13) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__81 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseB___closed__81_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseB___closed__82_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseB___closed__81_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__82 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseB___closed__82_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseB___closed__83_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 10}, .m_objs = {((lean_object*)(((size_t)(21) << 1) | 1)),((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)(((size_t)(13) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__83 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseB___closed__83_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseB___closed__84_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseB___closed__83_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__84 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseB___closed__84_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseB___closed__85_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 6}, .m_objs = {((lean_object*)(((size_t)(21) << 1) | 1)),((lean_object*)(((size_t)(21) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__85 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseB___closed__85_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseB___closed__86_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseB___closed__85_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__86 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseB___closed__86_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseB___closed__87_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)(((size_t)(21) << 1) | 1)),((lean_object*)(((size_t)(33) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__87 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseB___closed__87_value;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseB___closed__88_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__88;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseB___closed__89_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__89;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseB___closed__90_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__90;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseB___closed__91_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__91;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseB___closed__92_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__92;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseB___closed__93_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__93;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseB___closed__94_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__94;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseB___closed__95_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(30) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__95 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseB___closed__95_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseB___closed__96_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(31) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__96 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseB___closed__96_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseB___closed__97_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(13) << 1) | 1)),((lean_object*)(((size_t)(19) << 1) | 1)),((lean_object*)(((size_t)(32) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__97 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseB___closed__97_value;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseB___closed__98_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__98;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseB___closed__99_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(32) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__99 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseB___closed__99_value;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseB___closed__100_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__100;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseB___closed__101_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__101;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseB___closed__102_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__102;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseB___closed__103_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__103;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseB___closed__104_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__104;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseB___closed__105_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__105;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseB___closed__106_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__106;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseB___closed__107_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 9}, .m_objs = {((lean_object*)(((size_t)(11) << 1) | 1)),((lean_object*)(((size_t)(11) << 1) | 1)),((lean_object*)(((size_t)(9) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__107 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseB___closed__107_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseB___closed__108_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseB___closed__107_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__108 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseB___closed__108_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseB___closed__109_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(19) << 1) | 1)),((lean_object*)(((size_t)(7) << 1) | 1)),((lean_object*)(((size_t)(9) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__109 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseB___closed__109_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseB___closed__110_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseB___closed__109_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__110 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseB___closed__110_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseB___closed__111_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(22) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__111 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseB___closed__111_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseB___closed__112_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseB___closed__111_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__112 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseB___closed__112_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseB___closed__113_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 9}, .m_objs = {((lean_object*)(((size_t)(22) << 1) | 1)),((lean_object*)(((size_t)(22) << 1) | 1)),((lean_object*)(((size_t)(19) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__113 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseB___closed__113_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseB___closed__114_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseB___closed__113_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__114 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseB___closed__114_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseB___closed__115_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)(((size_t)(10) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__115 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseB___closed__115_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseB___closed__116_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseB___closed__115_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__116 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseB___closed__116_value;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseB___closed__117_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__117;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseB___closed__118_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__118;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseB___closed__119_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__119;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseB___closed__120_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__120;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseB___closed__121_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__121;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseB___closed__122_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseB___closed__122;
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_phaseB;
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_LS2;
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_LS3;
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_LS2a;
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_LS2b;
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_LS2c;
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_LS3a;
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_LS3b;
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_LS3c;
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_LS3d;
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_LS3e;
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_LS3f;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(61) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__0 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__0_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(62) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__1 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__1_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseB___closed__18_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__2 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__2_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__1_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__2_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__3 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__3_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseB___closed__6_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__3_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__4 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__4_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__0_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__4_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__5 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__5_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseB___closed__18_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__5_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__6 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__6_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(64) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__7 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__7_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(20) << 1) | 1)),((lean_object*)(((size_t)(17) << 1) | 1)),((lean_object*)(((size_t)(21) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__8 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__8_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__8_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__9 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__9_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(20) << 1) | 1)),((lean_object*)(((size_t)(14) << 1) | 1)),((lean_object*)(((size_t)(61) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__10 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__10_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(14) << 1) | 1)),((lean_object*)(((size_t)(20) << 1) | 1)),((lean_object*)(((size_t)(61) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__11 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__11_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__11_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__6_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__12 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__12_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__10_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__12_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__13 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__13_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__9_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__13_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__14 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__14_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__7_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__14_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__15 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__15_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(63) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__16 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__16_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(20) << 1) | 1)),((lean_object*)(((size_t)(17) << 1) | 1)),((lean_object*)(((size_t)(16) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__17 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__17_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__17_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__18 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__18_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(20) << 1) | 1)),((lean_object*)(((size_t)(14) << 1) | 1)),((lean_object*)(((size_t)(64) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__19 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__19_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(14) << 1) | 1)),((lean_object*)(((size_t)(20) << 1) | 1)),((lean_object*)(((size_t)(64) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__20 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__20_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseB___closed__18_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__15_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__21 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__21_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__20_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__21_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__22 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__22_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__19_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__22_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__23 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__23_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__18_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__23_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__24 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__24_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__16_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__24_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__25 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__25_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(20) << 1) | 1)),((lean_object*)(((size_t)(17) << 1) | 1)),((lean_object*)(((size_t)(15) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__26 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__26_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__26_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__27 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__27_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(20) << 1) | 1)),((lean_object*)(((size_t)(14) << 1) | 1)),((lean_object*)(((size_t)(63) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__28 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__28_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(14) << 1) | 1)),((lean_object*)(((size_t)(20) << 1) | 1)),((lean_object*)(((size_t)(63) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__29 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__29_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseB___closed__18_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__25_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__30 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__30_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__29_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__30_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__31 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__31_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__28_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__31_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__32 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__32_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__27_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__32_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__33 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__33_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(58) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__34 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__34_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(17) << 1) | 1)),((lean_object*)(((size_t)(14) << 1) | 1)),((lean_object*)(((size_t)(59) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__35 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__35_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(14) << 1) | 1)),((lean_object*)(((size_t)(17) << 1) | 1)),((lean_object*)(((size_t)(59) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__36 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__36_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(59) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__37 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__37_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__37_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__33_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__38 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__38_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseB___closed__18_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__38_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__39 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__39_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__36_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__39_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__40 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__40_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__35_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__40_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__41 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__41_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__34_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__41_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__42 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__42_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(57) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__43 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__43_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(21) << 1) | 1)),((lean_object*)(((size_t)(14) << 1) | 1)),((lean_object*)(((size_t)(58) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__44 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__44_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(14) << 1) | 1)),((lean_object*)(((size_t)(21) << 1) | 1)),((lean_object*)(((size_t)(58) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__45 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__45_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseB___closed__18_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__42_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__46 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__46_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__45_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__46_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__47 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__47_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__44_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__47_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__48 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__48_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__43_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__48_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__49 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__49_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(56) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__50 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__50_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(16) << 1) | 1)),((lean_object*)(((size_t)(14) << 1) | 1)),((lean_object*)(((size_t)(57) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__51 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__51_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(14) << 1) | 1)),((lean_object*)(((size_t)(16) << 1) | 1)),((lean_object*)(((size_t)(57) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__52 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__52_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseB___closed__18_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__49_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__53 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__53_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__54_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__52_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__53_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__54 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__54_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__55_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__51_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__54_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__55 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__55_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__56_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__50_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__55_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__56 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__56_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__57_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseB___closed__18_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__56_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__57 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__57_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__58_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(14) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(62) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__58 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__58_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__59_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(21) << 1) | 1)),((lean_object*)(((size_t)(15) << 1) | 1)),((lean_object*)(((size_t)(16) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__59 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__59_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__60_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__59_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__60 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__60_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__61_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(15) << 1) | 1)),((lean_object*)(((size_t)(14) << 1) | 1)),((lean_object*)(((size_t)(56) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__61 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__61_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__62_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(14) << 1) | 1)),((lean_object*)(((size_t)(15) << 1) | 1)),((lean_object*)(((size_t)(56) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__62 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__62_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__63_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__62_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__57_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__63 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__63_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__64_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__61_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__63_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__64 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__64_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__65_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__60_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__64_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__65 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__65_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__66_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__58_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__65_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__66 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__66_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__67_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(55) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__67 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__67_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__68_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(60) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__68 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__68_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__69_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(52) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__69 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__69_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__70_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__69_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__66_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__70 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__70_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__71_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseB___closed__18_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__70_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__71 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__71_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__72_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__68_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__71_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__72 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__72_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__73_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseB___closed__6_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__72_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__73 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__73_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__74_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__67_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__73_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__74 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__74_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__75_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(54) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__75 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__75_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__76_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(21) << 1) | 1)),((lean_object*)(((size_t)(14) << 1) | 1)),((lean_object*)(((size_t)(55) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__76 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__76_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__77_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(14) << 1) | 1)),((lean_object*)(((size_t)(21) << 1) | 1)),((lean_object*)(((size_t)(55) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__77 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__77_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__78_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseB___closed__18_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__74_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__78 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__78_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__79_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__77_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__78_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__79 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__79_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__80_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__76_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__79_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__80 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__80_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__81_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__75_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__80_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__81 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__81_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__82_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(53) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__82 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__82_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__83_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(16) << 1) | 1)),((lean_object*)(((size_t)(14) << 1) | 1)),((lean_object*)(((size_t)(54) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__83 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__83_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__84_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(14) << 1) | 1)),((lean_object*)(((size_t)(16) << 1) | 1)),((lean_object*)(((size_t)(54) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__84 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__84_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__85_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseB___closed__18_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__81_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__85 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__85_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__86_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__84_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__85_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__86 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__86_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__87_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__83_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__86_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__87 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__87_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__88_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__82_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__87_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__88 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__88_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__89_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseB___closed__18_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__88_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__89 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__89_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__90_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(14) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(60) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__90 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__90_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__91_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(15) << 1) | 1)),((lean_object*)(((size_t)(14) << 1) | 1)),((lean_object*)(((size_t)(53) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__91 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__91_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__92_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(14) << 1) | 1)),((lean_object*)(((size_t)(15) << 1) | 1)),((lean_object*)(((size_t)(53) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__92 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__92_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__93_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__92_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__89_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__93 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__93_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__94_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__91_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__93_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__94 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__94_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__95_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__60_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__94_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__95 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__95_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__96_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__90_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__95_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__96 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__96_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__97_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(21) << 1) | 1)),((lean_object*)(((size_t)(21) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__97 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__97_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__98_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__97_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__98 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__98_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__99_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 11}, .m_objs = {((lean_object*)(((size_t)(14) << 1) | 1)),((lean_object*)(((size_t)(21) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__99 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__99_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__100_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__99_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__100 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__100_value;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_smallN___closed__101_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__101;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__102_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(51) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__102 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__102_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__103_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(14) << 1) | 1)),((lean_object*)(((size_t)(17) << 1) | 1)),((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__103 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__103_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__104_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__103_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__104 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__104_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__105_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__104_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__96_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__105 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__105_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__106_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__102_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__105_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__106 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__106_value;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_smallN___closed__107_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__107;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_smallN___closed__108_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__108;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_smallN___closed__109_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__109;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__110_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(21) << 1) | 1)),((lean_object*)(((size_t)(21) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__110 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__110_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__111_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__110_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__111 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__111_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__112_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(21) << 1) | 1)),((lean_object*)(((size_t)(51) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__112 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__112_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__113_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(21) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__113 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__113_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__114_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__113_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__114 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__114_value;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_smallN___closed__115_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__115;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_smallN___closed__116_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__116;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_smallN___closed__117_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__117;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_smallN___closed__118_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__118;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__119_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 11}, .m_objs = {((lean_object*)(((size_t)(16) << 1) | 1)),((lean_object*)(((size_t)(20) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__119 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__119_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__120_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__119_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__120 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__120_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__121_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(21) << 1) | 1)),((lean_object*)(((size_t)(3) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__121 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__121_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__122_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__121_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__122 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__122_value;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_smallN___closed__123_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__123;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_smallN___closed__124_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__124;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_smallN___closed__125_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__125;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_smallN___closed__126_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__126;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_smallN___closed__127_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__127;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__128_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(50) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__128 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__128_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__129_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(20) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__129 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__129_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__130_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__129_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__130 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__130_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__131_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(20) << 1) | 1)),((lean_object*)(((size_t)(20) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__131 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__131_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_smallN___closed__132_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__131_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__132 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_smallN___closed__132_value;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_smallN___closed__133_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__133;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_smallN___closed__134_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__134;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_smallN___closed__135_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__135;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_smallN___closed__136_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_smallN___closed__136;
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_smallN;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_prog___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_prog___closed__0;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_prog___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_prog___closed__1;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_prog___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_prog___closed__2;
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_prog;
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_Line_ctorIdx(lean_object* v_x_1_){
_start:
{
switch(lean_obj_tag(v_x_1_))
{
case 0:
{
lean_object* v___x_2_; 
v___x_2_ = lean_unsigned_to_nat(0u);
return v___x_2_;
}
case 1:
{
lean_object* v___x_3_; 
v___x_3_ = lean_unsigned_to_nat(1u);
return v___x_3_;
}
default: 
{
lean_object* v___x_4_; 
v___x_4_ = lean_unsigned_to_nat(2u);
return v___x_4_;
}
}
}
}
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_Line_ctorIdx___boxed(lean_object* v_x_5_){
_start:
{
lean_object* v_res_6_; 
v_res_6_ = lp_subsetsum_SubsetSum_MITM_Line_ctorIdx(v_x_5_);
lean_dec_ref(v_x_5_);
return v_res_6_;
}
}
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_Line_ctorElim___redArg(lean_object* v_t_7_, lean_object* v_k_8_){
_start:
{
if (lean_obj_tag(v_t_7_) == 2)
{
lean_object* v_i_9_; lean_object* v_j_10_; lean_object* v_l_11_; lean_object* v___x_12_; 
v_i_9_ = lean_ctor_get(v_t_7_, 0);
lean_inc(v_i_9_);
v_j_10_ = lean_ctor_get(v_t_7_, 1);
lean_inc(v_j_10_);
v_l_11_ = lean_ctor_get(v_t_7_, 2);
lean_inc(v_l_11_);
lean_dec_ref_known(v_t_7_, 3);
v___x_12_ = lean_apply_3(v_k_8_, v_i_9_, v_j_10_, v_l_11_);
return v___x_12_;
}
else
{
lean_object* v_l_13_; lean_object* v___x_14_; 
v_l_13_ = lean_ctor_get(v_t_7_, 0);
lean_inc(v_l_13_);
lean_dec_ref(v_t_7_);
v___x_14_ = lean_apply_1(v_k_8_, v_l_13_);
return v___x_14_;
}
}
}
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_Line_ctorElim(lean_object* v_motive_15_, lean_object* v_ctorIdx_16_, lean_object* v_t_17_, lean_object* v_h_18_, lean_object* v_k_19_){
_start:
{
lean_object* v___x_20_; 
v___x_20_ = lp_subsetsum_SubsetSum_MITM_Line_ctorElim___redArg(v_t_17_, v_k_19_);
return v___x_20_;
}
}
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_Line_ctorElim___boxed(lean_object* v_motive_21_, lean_object* v_ctorIdx_22_, lean_object* v_t_23_, lean_object* v_h_24_, lean_object* v_k_25_){
_start:
{
lean_object* v_res_26_; 
v_res_26_ = lp_subsetsum_SubsetSum_MITM_Line_ctorElim(v_motive_21_, v_ctorIdx_22_, v_t_23_, v_h_24_, v_k_25_);
lean_dec(v_ctorIdx_22_);
return v_res_26_;
}
}
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_Line_mark_elim___redArg(lean_object* v_t_27_, lean_object* v_mark_28_){
_start:
{
lean_object* v___x_29_; 
v___x_29_ = lp_subsetsum_SubsetSum_MITM_Line_ctorElim___redArg(v_t_27_, v_mark_28_);
return v___x_29_;
}
}
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_Line_mark_elim(lean_object* v_motive_30_, lean_object* v_t_31_, lean_object* v_h_32_, lean_object* v_mark_33_){
_start:
{
lean_object* v___x_34_; 
v___x_34_ = lp_subsetsum_SubsetSum_MITM_Line_ctorElim___redArg(v_t_31_, v_mark_33_);
return v___x_34_;
}
}
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_Line_raw_elim___redArg(lean_object* v_t_35_, lean_object* v_raw_36_){
_start:
{
lean_object* v___x_37_; 
v___x_37_ = lp_subsetsum_SubsetSum_MITM_Line_ctorElim___redArg(v_t_35_, v_raw_36_);
return v___x_37_;
}
}
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_Line_raw_elim(lean_object* v_motive_38_, lean_object* v_t_39_, lean_object* v_h_40_, lean_object* v_raw_41_){
_start:
{
lean_object* v___x_42_; 
v___x_42_ = lp_subsetsum_SubsetSum_MITM_Line_ctorElim___redArg(v_t_39_, v_raw_41_);
return v___x_42_;
}
}
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_Line_jblt_elim___redArg(lean_object* v_t_43_, lean_object* v_jblt_44_){
_start:
{
lean_object* v___x_45_; 
v___x_45_ = lp_subsetsum_SubsetSum_MITM_Line_ctorElim___redArg(v_t_43_, v_jblt_44_);
return v___x_45_;
}
}
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_Line_jblt_elim(lean_object* v_motive_46_, lean_object* v_t_47_, lean_object* v_h_48_, lean_object* v_jblt_49_){
_start:
{
lean_object* v___x_50_; 
v___x_50_ = lp_subsetsum_SubsetSum_MITM_Line_ctorElim___redArg(v_t_47_, v_jblt_49_);
return v___x_50_;
}
}
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_resolve_offsets(lean_object* v_a_51_, lean_object* v_a_52_){
_start:
{
if (lean_obj_tag(v_a_52_) == 0)
{
lean_object* v___x_53_; 
lean_dec(v_a_51_);
v___x_53_ = lean_box(0);
return v___x_53_;
}
else
{
lean_object* v_head_54_; 
v_head_54_ = lean_ctor_get(v_a_52_, 0);
if (lean_obj_tag(v_head_54_) == 0)
{
lean_object* v_tail_55_; lean_object* v___x_57_; uint8_t v_isShared_58_; uint8_t v_isSharedCheck_65_; 
lean_inc_ref(v_head_54_);
v_tail_55_ = lean_ctor_get(v_a_52_, 1);
v_isSharedCheck_65_ = !lean_is_exclusive(v_a_52_);
if (v_isSharedCheck_65_ == 0)
{
lean_object* v_unused_66_; 
v_unused_66_ = lean_ctor_get(v_a_52_, 0);
lean_dec(v_unused_66_);
v___x_57_ = v_a_52_;
v_isShared_58_ = v_isSharedCheck_65_;
goto v_resetjp_56_;
}
else
{
lean_inc(v_tail_55_);
lean_dec(v_a_52_);
v___x_57_ = lean_box(0);
v_isShared_58_ = v_isSharedCheck_65_;
goto v_resetjp_56_;
}
v_resetjp_56_:
{
lean_object* v_l_59_; lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_63_; 
v_l_59_ = lean_ctor_get(v_head_54_, 0);
lean_inc(v_l_59_);
lean_dec_ref_known(v_head_54_, 1);
lean_inc(v_a_51_);
v___x_60_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_60_, 0, v_l_59_);
lean_ctor_set(v___x_60_, 1, v_a_51_);
v___x_61_ = lp_subsetsum_SubsetSum_MITM_resolve_offsets(v_a_51_, v_tail_55_);
if (v_isShared_58_ == 0)
{
lean_ctor_set(v___x_57_, 1, v___x_61_);
lean_ctor_set(v___x_57_, 0, v___x_60_);
v___x_63_ = v___x_57_;
goto v_reusejp_62_;
}
else
{
lean_object* v_reuseFailAlloc_64_; 
v_reuseFailAlloc_64_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_64_, 0, v___x_60_);
lean_ctor_set(v_reuseFailAlloc_64_, 1, v___x_61_);
v___x_63_ = v_reuseFailAlloc_64_;
goto v_reusejp_62_;
}
v_reusejp_62_:
{
return v___x_63_;
}
}
}
else
{
lean_object* v_tail_67_; lean_object* v___x_68_; lean_object* v___x_69_; 
v_tail_67_ = lean_ctor_get(v_a_52_, 1);
lean_inc(v_tail_67_);
lean_dec_ref_known(v_a_52_, 2);
v___x_68_ = lean_unsigned_to_nat(1u);
v___x_69_ = lean_nat_add(v_a_51_, v___x_68_);
lean_dec(v_a_51_);
v_a_51_ = v___x_69_;
v_a_52_ = v_tail_67_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_subsetsum_List_find_x3f___at___00SubsetSum_MITM_resolve_spec__0(lean_object* v_l_71_, lean_object* v_x_72_){
_start:
{
if (lean_obj_tag(v_x_72_) == 0)
{
lean_object* v___x_73_; 
v___x_73_ = lean_box(0);
return v___x_73_;
}
else
{
lean_object* v_head_74_; lean_object* v_tail_75_; lean_object* v_fst_76_; uint8_t v___x_77_; 
v_head_74_ = lean_ctor_get(v_x_72_, 0);
v_tail_75_ = lean_ctor_get(v_x_72_, 1);
v_fst_76_ = lean_ctor_get(v_head_74_, 0);
v___x_77_ = lean_nat_dec_eq(v_fst_76_, v_l_71_);
if (v___x_77_ == 0)
{
v_x_72_ = v_tail_75_;
goto _start;
}
else
{
lean_object* v___x_79_; 
lean_inc(v_head_74_);
v___x_79_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_79_, 0, v_head_74_);
return v___x_79_;
}
}
}
}
LEAN_EXPORT lean_object* lp_subsetsum_List_find_x3f___at___00SubsetSum_MITM_resolve_spec__0___boxed(lean_object* v_l_80_, lean_object* v_x_81_){
_start:
{
lean_object* v_res_82_; 
v_res_82_ = lp_subsetsum_List_find_x3f___at___00SubsetSum_MITM_resolve_spec__0(v_l_80_, v_x_81_);
lean_dec(v_x_81_);
lean_dec(v_l_80_);
return v_res_82_;
}
}
LEAN_EXPORT lean_object* lp_subsetsum_List_filterMapTR_go___at___00SubsetSum_MITM_resolve_spec__1(lean_object* v_table_83_, lean_object* v_a_84_, lean_object* v_a_85_){
_start:
{
if (lean_obj_tag(v_a_84_) == 0)
{
lean_object* v___x_86_; 
v___x_86_ = lean_array_to_list(v_a_85_);
return v___x_86_;
}
else
{
lean_object* v_head_87_; lean_object* v_tail_88_; lean_object* v_val_90_; 
v_head_87_ = lean_ctor_get(v_a_84_, 0);
lean_inc(v_head_87_);
v_tail_88_ = lean_ctor_get(v_a_84_, 1);
lean_inc(v_tail_88_);
lean_dec_ref_known(v_a_84_, 2);
switch(lean_obj_tag(v_head_87_))
{
case 0:
{
lean_dec_ref_known(v_head_87_, 1);
v_a_84_ = v_tail_88_;
goto _start;
}
case 1:
{
lean_object* v_i_94_; 
v_i_94_ = lean_ctor_get(v_head_87_, 0);
lean_inc(v_i_94_);
lean_dec_ref_known(v_head_87_, 1);
v_val_90_ = v_i_94_;
goto v___jp_89_;
}
default: 
{
lean_object* v_i_95_; lean_object* v_j_96_; lean_object* v_l_97_; lean_object* v___x_99_; uint8_t v_isShared_100_; uint8_t v_isSharedCheck_110_; 
v_i_95_ = lean_ctor_get(v_head_87_, 0);
v_j_96_ = lean_ctor_get(v_head_87_, 1);
v_l_97_ = lean_ctor_get(v_head_87_, 2);
v_isSharedCheck_110_ = !lean_is_exclusive(v_head_87_);
if (v_isSharedCheck_110_ == 0)
{
v___x_99_ = v_head_87_;
v_isShared_100_ = v_isSharedCheck_110_;
goto v_resetjp_98_;
}
else
{
lean_inc(v_l_97_);
lean_inc(v_j_96_);
lean_inc(v_i_95_);
lean_dec(v_head_87_);
v___x_99_ = lean_box(0);
v_isShared_100_ = v_isSharedCheck_110_;
goto v_resetjp_98_;
}
v_resetjp_98_:
{
lean_object* v___y_102_; lean_object* v___x_106_; 
v___x_106_ = lp_subsetsum_List_find_x3f___at___00SubsetSum_MITM_resolve_spec__0(v_l_97_, v_table_83_);
lean_dec(v_l_97_);
if (lean_obj_tag(v___x_106_) == 0)
{
lean_object* v___x_107_; 
v___x_107_ = lean_unsigned_to_nat(0u);
v___y_102_ = v___x_107_;
goto v___jp_101_;
}
else
{
lean_object* v_val_108_; lean_object* v_snd_109_; 
v_val_108_ = lean_ctor_get(v___x_106_, 0);
lean_inc(v_val_108_);
lean_dec_ref_known(v___x_106_, 1);
v_snd_109_ = lean_ctor_get(v_val_108_, 1);
lean_inc(v_snd_109_);
lean_dec(v_val_108_);
v___y_102_ = v_snd_109_;
goto v___jp_101_;
}
v___jp_101_:
{
lean_object* v___x_104_; 
if (v_isShared_100_ == 0)
{
lean_ctor_set_tag(v___x_99_, 14);
lean_ctor_set(v___x_99_, 2, v___y_102_);
v___x_104_ = v___x_99_;
goto v_reusejp_103_;
}
else
{
lean_object* v_reuseFailAlloc_105_; 
v_reuseFailAlloc_105_ = lean_alloc_ctor(14, 3, 0);
lean_ctor_set(v_reuseFailAlloc_105_, 0, v_i_95_);
lean_ctor_set(v_reuseFailAlloc_105_, 1, v_j_96_);
lean_ctor_set(v_reuseFailAlloc_105_, 2, v___y_102_);
v___x_104_ = v_reuseFailAlloc_105_;
goto v_reusejp_103_;
}
v_reusejp_103_:
{
v_val_90_ = v___x_104_;
goto v___jp_89_;
}
}
}
}
}
v___jp_89_:
{
lean_object* v___x_91_; 
v___x_91_ = lean_array_push(v_a_85_, v_val_90_);
v_a_84_ = v_tail_88_;
v_a_85_ = v___x_91_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_subsetsum_List_filterMapTR_go___at___00SubsetSum_MITM_resolve_spec__1___boxed(lean_object* v_table_111_, lean_object* v_a_112_, lean_object* v_a_113_){
_start:
{
lean_object* v_res_114_; 
v_res_114_ = lp_subsetsum_List_filterMapTR_go___at___00SubsetSum_MITM_resolve_spec__1(v_table_111_, v_a_112_, v_a_113_);
lean_dec(v_table_111_);
return v_res_114_;
}
}
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_resolve(lean_object* v_ls_117_){
_start:
{
lean_object* v___x_118_; lean_object* v_table_119_; lean_object* v___x_120_; lean_object* v___x_121_; 
v___x_118_ = lean_unsigned_to_nat(0u);
lean_inc(v_ls_117_);
v_table_119_ = lp_subsetsum_SubsetSum_MITM_resolve_offsets(v___x_118_, v_ls_117_);
v___x_120_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_resolve___closed__0));
v___x_121_ = lp_subsetsum_List_filterMapTR_go___at___00SubsetSum_MITM_resolve_spec__1(v_table_119_, v_ls_117_, v___x_120_);
lean_dec(v_table_119_);
return v___x_121_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_rCUR(void){
_start:
{
lean_object* v___x_122_; 
v___x_122_ = lean_unsigned_to_nat(0u);
return v___x_122_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_rONE(void){
_start:
{
lean_object* v___x_123_; 
v___x_123_ = lean_unsigned_to_nat(1u);
return v___x_123_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_rZER(void){
_start:
{
lean_object* v___x_124_; 
v___x_124_ = lean_unsigned_to_nat(2u);
return v___x_124_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_rTMP(void){
_start:
{
lean_object* v___x_125_; 
v___x_125_ = lean_unsigned_to_nat(3u);
return v___x_125_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_rBND(void){
_start:
{
lean_object* v___x_126_; 
v___x_126_ = lean_unsigned_to_nat(4u);
return v___x_126_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_rIDX(void){
_start:
{
lean_object* v___x_127_; 
v___x_127_ = lean_unsigned_to_nat(5u);
return v___x_127_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_rVAL(void){
_start:
{
lean_object* v___x_128_; 
v___x_128_ = lean_unsigned_to_nat(6u);
return v___x_128_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_rN(void){
_start:
{
lean_object* v___x_129_; 
v___x_129_ = lean_unsigned_to_nat(7u);
return v___x_129_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_rRE(void){
_start:
{
lean_object* v___x_130_; 
v___x_130_ = lean_unsigned_to_nat(8u);
return v___x_130_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_rH(void){
_start:
{
lean_object* v___x_131_; 
v___x_131_ = lean_unsigned_to_nat(9u);
return v___x_131_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_rK(void){
_start:
{
lean_object* v___x_132_; 
v___x_132_ = lean_unsigned_to_nat(10u);
return v___x_132_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_rL(void){
_start:
{
lean_object* v___x_133_; 
v___x_133_ = lean_unsigned_to_nat(11u);
return v___x_133_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_rI(void){
_start:
{
lean_object* v___x_134_; 
v___x_134_ = lean_unsigned_to_nat(12u);
return v___x_134_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_rJ(void){
_start:
{
lean_object* v___x_135_; 
v___x_135_ = lean_unsigned_to_nat(13u);
return v___x_135_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_rW(void){
_start:
{
lean_object* v___x_136_; 
v___x_136_ = lean_unsigned_to_nat(14u);
return v___x_136_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_rVI(void){
_start:
{
lean_object* v___x_137_; 
v___x_137_ = lean_unsigned_to_nat(15u);
return v___x_137_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_rVJ(void){
_start:
{
lean_object* v___x_138_; 
v___x_138_ = lean_unsigned_to_nat(16u);
return v___x_138_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_rAK(void){
_start:
{
lean_object* v___x_139_; 
v___x_139_ = lean_unsigned_to_nat(17u);
return v___x_139_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_rSRC(void){
_start:
{
lean_object* v___x_140_; 
v___x_140_ = lean_unsigned_to_nat(18u);
return v___x_140_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_rDST(void){
_start:
{
lean_object* v___x_141_; 
v___x_141_ = lean_unsigned_to_nat(19u);
return v___x_141_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_rT1(void){
_start:
{
lean_object* v___x_142_; 
v___x_142_ = lean_unsigned_to_nat(20u);
return v___x_142_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_rT2(void){
_start:
{
lean_object* v___x_143_; 
v___x_143_ = lean_unsigned_to_nat(21u);
return v___x_143_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_rT3(void){
_start:
{
lean_object* v___x_144_; 
v___x_144_ = lean_unsigned_to_nat(22u);
return v___x_144_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_LROUND(void){
_start:
{
lean_object* v___x_145_; 
v___x_145_ = lean_unsigned_to_nat(10u);
return v___x_145_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_LMERGE(void){
_start:
{
lean_object* v___x_146_; 
v___x_146_ = lean_unsigned_to_nat(11u);
return v___x_146_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_LHAVEJ(void){
_start:
{
lean_object* v___x_147_; 
v___x_147_ = lean_unsigned_to_nat(12u);
return v___x_147_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_LBOTH(void){
_start:
{
lean_object* v___x_148_; 
v___x_148_ = lean_unsigned_to_nat(13u);
return v___x_148_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_LTAKEJ(void){
_start:
{
lean_object* v___x_149_; 
v___x_149_ = lean_unsigned_to_nat(14u);
return v___x_149_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_LTAKEL(void){
_start:
{
lean_object* v___x_150_; 
v___x_150_ = lean_unsigned_to_nat(15u);
return v___x_150_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_LSTEP(void){
_start:
{
lean_object* v___x_151_; 
v___x_151_ = lean_unsigned_to_nat(16u);
return v___x_151_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_LDRAINI(void){
_start:
{
lean_object* v___x_152_; 
v___x_152_ = lean_unsigned_to_nat(17u);
return v___x_152_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_LDRAINJ(void){
_start:
{
lean_object* v___x_153_; 
v___x_153_ = lean_unsigned_to_nat(18u);
return v___x_153_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_LDILOOP(void){
_start:
{
lean_object* v___x_154_; 
v___x_154_ = lean_unsigned_to_nat(19u);
return v___x_154_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_LDJLOOP(void){
_start:
{
lean_object* v___x_155_; 
v___x_155_ = lean_unsigned_to_nat(20u);
return v___x_155_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_LSWAP(void){
_start:
{
lean_object* v___x_156_; 
v___x_156_ = lean_unsigned_to_nat(21u);
return v___x_156_;
}
}
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_jmp(lean_object* v_l_157_){
_start:
{
lean_object* v___x_158_; lean_object* v___x_159_; lean_object* v___x_160_; 
v___x_158_ = lean_unsigned_to_nat(2u);
v___x_159_ = lean_unsigned_to_nat(1u);
v___x_160_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_160_, 0, v___x_158_);
lean_ctor_set(v___x_160_, 1, v___x_159_);
lean_ctor_set(v___x_160_, 2, v_l_157_);
return v___x_160_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_LCOPY(void){
_start:
{
lean_object* v___x_161_; 
v___x_161_ = lean_unsigned_to_nat(2u);
return v___x_161_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_LCOPY2(void){
_start:
{
lean_object* v___x_162_; 
v___x_162_ = lean_unsigned_to_nat(3u);
return v___x_162_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_LSMALL(void){
_start:
{
lean_object* v___x_163_; 
v___x_163_ = lean_unsigned_to_nat(50u);
return v___x_163_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_LSMALLOK(void){
_start:
{
lean_object* v___x_164_; 
v___x_164_ = lean_unsigned_to_nat(60u);
return v___x_164_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_LSMALLOK2(void){
_start:
{
lean_object* v___x_165_; 
v___x_165_ = lean_unsigned_to_nat(62u);
return v___x_165_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_LSMALLR(void){
_start:
{
lean_object* v___x_166_; 
v___x_166_ = lean_unsigned_to_nat(61u);
return v___x_166_;
}
}
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_saveAk(lean_object* v_k_172_){
_start:
{
lean_object* v___x_173_; lean_object* v___x_174_; lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; 
v___x_173_ = lean_unsigned_to_nat(0u);
v___x_174_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_saveAk___closed__1));
v___x_175_ = lean_alloc_ctor(12, 2, 0);
lean_ctor_set(v___x_175_, 0, v___x_173_);
lean_ctor_set(v___x_175_, 1, v_k_172_);
v___x_176_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_176_, 0, v___x_175_);
v___x_177_ = lean_box(0);
v___x_178_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_178_, 0, v___x_176_);
lean_ctor_set(v___x_178_, 1, v___x_177_);
v___x_179_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_179_, 0, v___x_174_);
lean_ctor_set(v___x_179_, 1, v___x_178_);
return v___x_179_;
}
}
LEAN_EXPORT lean_object* lp_subsetsum___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00SubsetSum_MITM_prologue_spec__0(lean_object* v_a_180_, lean_object* v_a_181_){
_start:
{
if (lean_obj_tag(v_a_180_) == 0)
{
lean_object* v___x_182_; 
v___x_182_ = lean_array_to_list(v_a_181_);
return v___x_182_;
}
else
{
lean_object* v_head_183_; lean_object* v_tail_184_; lean_object* v___x_185_; lean_object* v___x_186_; 
v_head_183_ = lean_ctor_get(v_a_180_, 0);
lean_inc(v_head_183_);
v_tail_184_ = lean_ctor_get(v_a_180_, 1);
lean_inc(v_tail_184_);
lean_dec_ref_known(v_a_180_, 2);
v___x_185_ = lp_subsetsum_SubsetSum_MITM_saveAk(v_head_183_);
v___x_186_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_181_, v___x_185_);
v_a_180_ = v_tail_184_;
v_a_181_ = v___x_186_;
goto _start;
}
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_prologue___closed__16(void){
_start:
{
lean_object* v___x_228_; lean_object* v___x_229_; 
v___x_228_ = lean_unsigned_to_nat(3u);
v___x_229_ = lp_subsetsum_SubsetSum_MITM_saveAk(v___x_228_);
return v___x_229_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_prologue___closed__17(void){
_start:
{
lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; 
v___x_230_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_prologue___closed__16, &lp_subsetsum_SubsetSum_MITM_prologue___closed__16_once, _init_lp_subsetsum_SubsetSum_MITM_prologue___closed__16);
v___x_231_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_prologue___closed__15));
v___x_232_ = l_List_appendTR___redArg(v___x_231_, v___x_230_);
return v___x_232_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_prologue___closed__30(void){
_start:
{
lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; 
v___x_266_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_prologue___closed__29));
v___x_267_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_prologue___closed__17, &lp_subsetsum_SubsetSum_MITM_prologue___closed__17_once, _init_lp_subsetsum_SubsetSum_MITM_prologue___closed__17);
v___x_268_ = l_List_appendTR___redArg(v___x_267_, v___x_266_);
return v___x_268_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_prologue___closed__31(void){
_start:
{
lean_object* v___x_269_; lean_object* v___x_270_; 
v___x_269_ = lean_unsigned_to_nat(23u);
v___x_270_ = l_List_range(v___x_269_);
return v___x_270_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_prologue___closed__32(void){
_start:
{
lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_273_; 
v___x_271_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_prologue___closed__31, &lp_subsetsum_SubsetSum_MITM_prologue___closed__31_once, _init_lp_subsetsum_SubsetSum_MITM_prologue___closed__31);
v___x_272_ = lean_unsigned_to_nat(4u);
v___x_273_ = l_List_drop___redArg(v___x_272_, v___x_271_);
return v___x_273_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_prologue___closed__34(void){
_start:
{
lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; 
v___x_276_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_prologue___closed__33));
v___x_277_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_prologue___closed__32, &lp_subsetsum_SubsetSum_MITM_prologue___closed__32_once, _init_lp_subsetsum_SubsetSum_MITM_prologue___closed__32);
v___x_278_ = lp_subsetsum___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00SubsetSum_MITM_prologue_spec__0(v___x_277_, v___x_276_);
return v___x_278_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_prologue___closed__35(void){
_start:
{
lean_object* v___x_279_; lean_object* v___x_280_; lean_object* v___x_281_; 
v___x_279_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_prologue___closed__34, &lp_subsetsum_SubsetSum_MITM_prologue___closed__34_once, _init_lp_subsetsum_SubsetSum_MITM_prologue___closed__34);
v___x_280_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_prologue___closed__30, &lp_subsetsum_SubsetSum_MITM_prologue___closed__30_once, _init_lp_subsetsum_SubsetSum_MITM_prologue___closed__30);
v___x_281_ = l_List_appendTR___redArg(v___x_280_, v___x_279_);
return v___x_281_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_prologue___closed__123(void){
_start:
{
lean_object* v___x_526_; lean_object* v___x_527_; lean_object* v___x_528_; 
v___x_526_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_prologue___closed__122));
v___x_527_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_prologue___closed__35, &lp_subsetsum_SubsetSum_MITM_prologue___closed__35_once, _init_lp_subsetsum_SubsetSum_MITM_prologue___closed__35);
v___x_528_ = l_List_appendTR___redArg(v___x_527_, v___x_526_);
return v___x_528_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_prologue(void){
_start:
{
lean_object* v___x_529_; 
v___x_529_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_prologue___closed__123, &lp_subsetsum_SubsetSum_MITM_prologue___closed__123_once, _init_lp_subsetsum_SubsetSum_MITM_prologue___closed__123);
return v___x_529_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__42(void){
_start:
{
lean_object* v___x_648_; lean_object* v___x_649_; 
v___x_648_ = lean_unsigned_to_nat(21u);
v___x_649_ = lp_subsetsum_SubsetSum_MITM_jmp(v___x_648_);
return v___x_649_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__50(void){
_start:
{
lean_object* v___x_669_; lean_object* v___x_670_; lean_object* v_y_671_; 
v___x_669_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseA___closed__49));
v___x_670_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA___closed__42, &lp_subsetsum_SubsetSum_MITM_phaseA___closed__42_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__42);
v_y_671_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_y_671_, 0, v___x_670_);
lean_ctor_set(v_y_671_, 1, v___x_669_);
return v_y_671_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__58(void){
_start:
{
lean_object* v_y_692_; lean_object* v___x_693_; lean_object* v___x_694_; 
v_y_692_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA___closed__50, &lp_subsetsum_SubsetSum_MITM_phaseA___closed__50_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__50);
v___x_693_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseA___closed__57));
v___x_694_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_694_, 0, v___x_693_);
lean_ctor_set(v___x_694_, 1, v_y_692_);
return v___x_694_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__59(void){
_start:
{
lean_object* v___x_695_; lean_object* v___x_696_; lean_object* v___x_697_; 
v___x_695_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA___closed__58, &lp_subsetsum_SubsetSum_MITM_phaseA___closed__58_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__58);
v___x_696_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseA___closed__15));
v___x_697_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_697_, 0, v___x_696_);
lean_ctor_set(v___x_697_, 1, v___x_695_);
return v___x_697_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__60(void){
_start:
{
lean_object* v___x_698_; lean_object* v___x_699_; lean_object* v___x_700_; 
v___x_698_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA___closed__59, &lp_subsetsum_SubsetSum_MITM_phaseA___closed__59_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__59);
v___x_699_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseA___closed__56));
v___x_700_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_700_, 0, v___x_699_);
lean_ctor_set(v___x_700_, 1, v___x_698_);
return v___x_700_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__61(void){
_start:
{
lean_object* v___x_701_; lean_object* v___x_702_; lean_object* v___x_703_; 
v___x_701_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA___closed__60, &lp_subsetsum_SubsetSum_MITM_phaseA___closed__60_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__60);
v___x_702_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseA___closed__54));
v___x_703_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_703_, 0, v___x_702_);
lean_ctor_set(v___x_703_, 1, v___x_701_);
return v___x_703_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__62(void){
_start:
{
lean_object* v___x_704_; lean_object* v___x_705_; lean_object* v_y_706_; 
v___x_704_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA___closed__61, &lp_subsetsum_SubsetSum_MITM_phaseA___closed__61_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__61);
v___x_705_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseA___closed__52));
v_y_706_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_y_706_, 0, v___x_705_);
lean_ctor_set(v_y_706_, 1, v___x_704_);
return v_y_706_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__68(void){
_start:
{
lean_object* v_y_720_; lean_object* v___x_721_; lean_object* v___x_722_; 
v_y_720_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA___closed__62, &lp_subsetsum_SubsetSum_MITM_phaseA___closed__62_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__62);
v___x_721_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseA___closed__67));
v___x_722_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_722_, 0, v___x_721_);
lean_ctor_set(v___x_722_, 1, v_y_720_);
return v___x_722_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__69(void){
_start:
{
lean_object* v___x_723_; lean_object* v___x_724_; lean_object* v___x_725_; 
v___x_723_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA___closed__68, &lp_subsetsum_SubsetSum_MITM_phaseA___closed__68_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__68);
v___x_724_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseA___closed__65));
v___x_725_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_725_, 0, v___x_724_);
lean_ctor_set(v___x_725_, 1, v___x_723_);
return v___x_725_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__70(void){
_start:
{
lean_object* v___x_726_; lean_object* v___x_727_; lean_object* v___x_728_; 
v___x_726_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA___closed__69, &lp_subsetsum_SubsetSum_MITM_phaseA___closed__69_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__69);
v___x_727_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseA___closed__63));
v___x_728_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_728_, 0, v___x_727_);
lean_ctor_set(v___x_728_, 1, v___x_726_);
return v___x_728_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__71(void){
_start:
{
lean_object* v___x_729_; lean_object* v___x_730_; lean_object* v_y_731_; 
v___x_729_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA___closed__70, &lp_subsetsum_SubsetSum_MITM_phaseA___closed__70_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__70);
v___x_730_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA___closed__42, &lp_subsetsum_SubsetSum_MITM_phaseA___closed__42_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__42);
v_y_731_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_y_731_, 0, v___x_730_);
lean_ctor_set(v_y_731_, 1, v___x_729_);
return v_y_731_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__73(void){
_start:
{
lean_object* v___x_734_; lean_object* v___x_735_; 
v___x_734_ = lean_unsigned_to_nat(11u);
v___x_735_ = lp_subsetsum_SubsetSum_MITM_jmp(v___x_734_);
return v___x_735_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__75(void){
_start:
{
lean_object* v_y_738_; lean_object* v___x_739_; lean_object* v___x_740_; 
v_y_738_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA___closed__71, &lp_subsetsum_SubsetSum_MITM_phaseA___closed__71_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__71);
v___x_739_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseA___closed__57));
v___x_740_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_740_, 0, v___x_739_);
lean_ctor_set(v___x_740_, 1, v_y_738_);
return v___x_740_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__76(void){
_start:
{
lean_object* v___x_741_; lean_object* v___x_742_; lean_object* v___x_743_; 
v___x_741_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA___closed__75, &lp_subsetsum_SubsetSum_MITM_phaseA___closed__75_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__75);
v___x_742_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseA___closed__74));
v___x_743_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_743_, 0, v___x_742_);
lean_ctor_set(v___x_743_, 1, v___x_741_);
return v___x_743_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__77(void){
_start:
{
lean_object* v___x_744_; lean_object* v___x_745_; lean_object* v___x_746_; 
v___x_744_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA___closed__76, &lp_subsetsum_SubsetSum_MITM_phaseA___closed__76_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__76);
v___x_745_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA___closed__73, &lp_subsetsum_SubsetSum_MITM_phaseA___closed__73_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__73);
v___x_746_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_746_, 0, v___x_745_);
lean_ctor_set(v___x_746_, 1, v___x_744_);
return v___x_746_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__78(void){
_start:
{
lean_object* v___x_747_; lean_object* v___x_748_; lean_object* v___x_749_; 
v___x_747_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA___closed__77, &lp_subsetsum_SubsetSum_MITM_phaseA___closed__77_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__77);
v___x_748_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseA___closed__15));
v___x_749_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_749_, 0, v___x_748_);
lean_ctor_set(v___x_749_, 1, v___x_747_);
return v___x_749_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__79(void){
_start:
{
lean_object* v___x_750_; lean_object* v___x_751_; lean_object* v_y_752_; 
v___x_750_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA___closed__78, &lp_subsetsum_SubsetSum_MITM_phaseA___closed__78_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__78);
v___x_751_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseA___closed__72));
v_y_752_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_y_752_, 0, v___x_751_);
lean_ctor_set(v_y_752_, 1, v___x_750_);
return v_y_752_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__83(void){
_start:
{
lean_object* v_y_760_; lean_object* v___x_761_; lean_object* v___x_762_; 
v_y_760_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA___closed__79, &lp_subsetsum_SubsetSum_MITM_phaseA___closed__79_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__79);
v___x_761_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseA___closed__56));
v___x_762_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_762_, 0, v___x_761_);
lean_ctor_set(v___x_762_, 1, v_y_760_);
return v___x_762_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__84(void){
_start:
{
lean_object* v___x_763_; lean_object* v___x_764_; lean_object* v___x_765_; 
v___x_763_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA___closed__83, &lp_subsetsum_SubsetSum_MITM_phaseA___closed__83_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__83);
v___x_764_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseA___closed__82));
v___x_765_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_765_, 0, v___x_764_);
lean_ctor_set(v___x_765_, 1, v___x_763_);
return v___x_765_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__85(void){
_start:
{
lean_object* v___x_766_; lean_object* v___x_767_; lean_object* v___x_768_; 
v___x_766_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA___closed__84, &lp_subsetsum_SubsetSum_MITM_phaseA___closed__84_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__84);
v___x_767_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseA___closed__32));
v___x_768_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_768_, 0, v___x_767_);
lean_ctor_set(v___x_768_, 1, v___x_766_);
return v___x_768_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__86(void){
_start:
{
lean_object* v___x_769_; lean_object* v___x_770_; lean_object* v_y_771_; 
v___x_769_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA___closed__85, &lp_subsetsum_SubsetSum_MITM_phaseA___closed__85_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__85);
v___x_770_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseA___closed__80));
v_y_771_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_y_771_, 0, v___x_770_);
lean_ctor_set(v_y_771_, 1, v___x_769_);
return v_y_771_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__88(void){
_start:
{
lean_object* v___x_774_; lean_object* v___x_775_; 
v___x_774_ = lean_unsigned_to_nat(16u);
v___x_775_ = lp_subsetsum_SubsetSum_MITM_jmp(v___x_774_);
return v___x_775_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__89(void){
_start:
{
lean_object* v_y_776_; lean_object* v___x_777_; lean_object* v___x_778_; 
v_y_776_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA___closed__86, &lp_subsetsum_SubsetSum_MITM_phaseA___closed__86_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__86);
v___x_777_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA___closed__88, &lp_subsetsum_SubsetSum_MITM_phaseA___closed__88_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__88);
v___x_778_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_778_, 0, v___x_777_);
lean_ctor_set(v___x_778_, 1, v_y_776_);
return v___x_778_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__90(void){
_start:
{
lean_object* v___x_779_; lean_object* v___x_780_; lean_object* v___x_781_; 
v___x_779_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA___closed__89, &lp_subsetsum_SubsetSum_MITM_phaseA___closed__89_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__89);
v___x_780_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseA___closed__36));
v___x_781_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_781_, 0, v___x_780_);
lean_ctor_set(v___x_781_, 1, v___x_779_);
return v___x_781_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__91(void){
_start:
{
lean_object* v___x_782_; lean_object* v___x_783_; lean_object* v___x_784_; 
v___x_782_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA___closed__90, &lp_subsetsum_SubsetSum_MITM_phaseA___closed__90_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__90);
v___x_783_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseA___closed__34));
v___x_784_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_784_, 0, v___x_783_);
lean_ctor_set(v___x_784_, 1, v___x_782_);
return v___x_784_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__92(void){
_start:
{
lean_object* v___x_785_; lean_object* v___x_786_; lean_object* v___x_787_; 
v___x_785_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA___closed__91, &lp_subsetsum_SubsetSum_MITM_phaseA___closed__91_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__91);
v___x_786_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseA___closed__32));
v___x_787_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_787_, 0, v___x_786_);
lean_ctor_set(v___x_787_, 1, v___x_785_);
return v___x_787_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__93(void){
_start:
{
lean_object* v___x_788_; lean_object* v___x_789_; lean_object* v_y_790_; 
v___x_788_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA___closed__92, &lp_subsetsum_SubsetSum_MITM_phaseA___closed__92_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__92);
v___x_789_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseA___closed__87));
v_y_790_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_y_790_, 0, v___x_789_);
lean_ctor_set(v_y_790_, 1, v___x_788_);
return v_y_790_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__95(void){
_start:
{
lean_object* v___x_795_; lean_object* v___x_796_; 
v___x_795_ = lean_unsigned_to_nat(15u);
v___x_796_ = lp_subsetsum_SubsetSum_MITM_jmp(v___x_795_);
return v___x_796_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__96(void){
_start:
{
lean_object* v_y_797_; lean_object* v___x_798_; lean_object* v___x_799_; 
v_y_797_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA___closed__93, &lp_subsetsum_SubsetSum_MITM_phaseA___closed__93_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__93);
v___x_798_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA___closed__95, &lp_subsetsum_SubsetSum_MITM_phaseA___closed__95_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__95);
v___x_799_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_799_, 0, v___x_798_);
lean_ctor_set(v___x_799_, 1, v_y_797_);
return v___x_799_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__97(void){
_start:
{
lean_object* v___x_800_; lean_object* v___x_801_; lean_object* v___x_802_; 
v___x_800_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA___closed__96, &lp_subsetsum_SubsetSum_MITM_phaseA___closed__96_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__96);
v___x_801_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseA___closed__94));
v___x_802_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_802_, 0, v___x_801_);
lean_ctor_set(v___x_802_, 1, v___x_800_);
return v___x_802_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__98(void){
_start:
{
lean_object* v___x_803_; lean_object* v___x_804_; lean_object* v___x_805_; 
v___x_803_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA___closed__97, &lp_subsetsum_SubsetSum_MITM_phaseA___closed__97_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__97);
v___x_804_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseA___closed__30));
v___x_805_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_805_, 0, v___x_804_);
lean_ctor_set(v___x_805_, 1, v___x_803_);
return v___x_805_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__99(void){
_start:
{
lean_object* v___x_806_; lean_object* v___x_807_; lean_object* v___x_808_; 
v___x_806_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA___closed__98, &lp_subsetsum_SubsetSum_MITM_phaseA___closed__98_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__98);
v___x_807_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseA___closed__28));
v___x_808_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_808_, 0, v___x_807_);
lean_ctor_set(v___x_808_, 1, v___x_806_);
return v___x_808_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__100(void){
_start:
{
lean_object* v___x_809_; lean_object* v___x_810_; lean_object* v_y_811_; 
v___x_809_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA___closed__99, &lp_subsetsum_SubsetSum_MITM_phaseA___closed__99_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__99);
v___x_810_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseA___closed__46));
v_y_811_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_y_811_, 0, v___x_810_);
lean_ctor_set(v_y_811_, 1, v___x_809_);
return v_y_811_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__102(void){
_start:
{
lean_object* v___x_816_; lean_object* v___x_817_; 
v___x_816_ = lean_unsigned_to_nat(18u);
v___x_817_ = lp_subsetsum_SubsetSum_MITM_jmp(v___x_816_);
return v___x_817_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__104(void){
_start:
{
lean_object* v_y_820_; lean_object* v___x_821_; lean_object* v___x_822_; 
v_y_820_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA___closed__100, &lp_subsetsum_SubsetSum_MITM_phaseA___closed__100_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__100);
v___x_821_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseA___closed__67));
v___x_822_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_822_, 0, v___x_821_);
lean_ctor_set(v___x_822_, 1, v_y_820_);
return v___x_822_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__105(void){
_start:
{
lean_object* v___x_823_; lean_object* v___x_824_; lean_object* v___x_825_; 
v___x_823_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA___closed__104, &lp_subsetsum_SubsetSum_MITM_phaseA___closed__104_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__104);
v___x_824_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseA___closed__65));
v___x_825_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_825_, 0, v___x_824_);
lean_ctor_set(v___x_825_, 1, v___x_823_);
return v___x_825_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__106(void){
_start:
{
lean_object* v___x_826_; lean_object* v___x_827_; lean_object* v___x_828_; 
v___x_826_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA___closed__105, &lp_subsetsum_SubsetSum_MITM_phaseA___closed__105_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__105);
v___x_827_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseA___closed__103));
v___x_828_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_828_, 0, v___x_827_);
lean_ctor_set(v___x_828_, 1, v___x_826_);
return v___x_828_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__107(void){
_start:
{
lean_object* v___x_829_; lean_object* v___x_830_; lean_object* v___x_831_; 
v___x_829_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA___closed__106, &lp_subsetsum_SubsetSum_MITM_phaseA___closed__106_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__106);
v___x_830_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA___closed__102, &lp_subsetsum_SubsetSum_MITM_phaseA___closed__102_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__102);
v___x_831_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_831_, 0, v___x_830_);
lean_ctor_set(v___x_831_, 1, v___x_829_);
return v___x_831_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__108(void){
_start:
{
lean_object* v___x_832_; lean_object* v___x_833_; lean_object* v_y_834_; 
v___x_832_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA___closed__107, &lp_subsetsum_SubsetSum_MITM_phaseA___closed__107_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__107);
v___x_833_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseA___closed__101));
v_y_834_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_y_834_, 0, v___x_833_);
lean_ctor_set(v_y_834_, 1, v___x_832_);
return v_y_834_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__111(void){
_start:
{
lean_object* v___x_841_; lean_object* v___x_842_; 
v___x_841_ = lean_unsigned_to_nat(17u);
v___x_842_ = lp_subsetsum_SubsetSum_MITM_jmp(v___x_841_);
return v___x_842_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__113(void){
_start:
{
lean_object* v_y_845_; lean_object* v___x_846_; lean_object* v___x_847_; 
v_y_845_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA___closed__108, &lp_subsetsum_SubsetSum_MITM_phaseA___closed__108_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__108);
v___x_846_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseA___closed__112));
v___x_847_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_847_, 0, v___x_846_);
lean_ctor_set(v___x_847_, 1, v_y_845_);
return v___x_847_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__114(void){
_start:
{
lean_object* v___x_848_; lean_object* v___x_849_; lean_object* v___x_850_; 
v___x_848_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA___closed__113, &lp_subsetsum_SubsetSum_MITM_phaseA___closed__113_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__113);
v___x_849_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA___closed__111, &lp_subsetsum_SubsetSum_MITM_phaseA___closed__111_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__111);
v___x_850_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_850_, 0, v___x_849_);
lean_ctor_set(v___x_850_, 1, v___x_848_);
return v___x_850_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__115(void){
_start:
{
lean_object* v___x_851_; lean_object* v___x_852_; lean_object* v___x_853_; 
v___x_851_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA___closed__114, &lp_subsetsum_SubsetSum_MITM_phaseA___closed__114_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__114);
v___x_852_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseA___closed__110));
v___x_853_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_853_, 0, v___x_852_);
lean_ctor_set(v___x_853_, 1, v___x_851_);
return v___x_853_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__116(void){
_start:
{
lean_object* v___x_854_; lean_object* v___x_855_; lean_object* v_y_856_; 
v___x_854_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA___closed__115, &lp_subsetsum_SubsetSum_MITM_phaseA___closed__115_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__115);
v___x_855_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseA___closed__109));
v_y_856_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_y_856_, 0, v___x_855_);
lean_ctor_set(v_y_856_, 1, v___x_854_);
return v_y_856_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__127(void){
_start:
{
lean_object* v_y_880_; lean_object* v___x_881_; lean_object* v___x_882_; 
v_y_880_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA___closed__116, &lp_subsetsum_SubsetSum_MITM_phaseA___closed__116_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__116);
v___x_881_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseA___closed__126));
v___x_882_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_882_, 0, v___x_881_);
lean_ctor_set(v___x_882_, 1, v_y_880_);
return v___x_882_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__128(void){
_start:
{
lean_object* v___x_883_; lean_object* v___x_884_; lean_object* v___x_885_; 
v___x_883_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA___closed__127, &lp_subsetsum_SubsetSum_MITM_phaseA___closed__127_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__127);
v___x_884_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseA___closed__124));
v___x_885_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_885_, 0, v___x_884_);
lean_ctor_set(v___x_885_, 1, v___x_883_);
return v___x_885_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__129(void){
_start:
{
lean_object* v___x_886_; lean_object* v___x_887_; lean_object* v___x_888_; 
v___x_886_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA___closed__128, &lp_subsetsum_SubsetSum_MITM_phaseA___closed__128_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__128);
v___x_887_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseA___closed__122));
v___x_888_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_888_, 0, v___x_887_);
lean_ctor_set(v___x_888_, 1, v___x_886_);
return v___x_888_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__130(void){
_start:
{
lean_object* v___x_889_; lean_object* v___x_890_; lean_object* v___x_891_; 
v___x_889_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA___closed__129, &lp_subsetsum_SubsetSum_MITM_phaseA___closed__129_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__129);
v___x_890_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseA___closed__120));
v___x_891_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_891_, 0, v___x_890_);
lean_ctor_set(v___x_891_, 1, v___x_889_);
return v___x_891_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__131(void){
_start:
{
lean_object* v___x_892_; lean_object* v___x_893_; lean_object* v_y_894_; 
v___x_892_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA___closed__130, &lp_subsetsum_SubsetSum_MITM_phaseA___closed__130_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__130);
v___x_893_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseA___closed__118));
v_y_894_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_y_894_, 0, v___x_893_);
lean_ctor_set(v_y_894_, 1, v___x_892_);
return v_y_894_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__137(void){
_start:
{
lean_object* v_y_908_; lean_object* v___x_909_; lean_object* v___x_910_; 
v_y_908_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA___closed__131, &lp_subsetsum_SubsetSum_MITM_phaseA___closed__131_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__131);
v___x_909_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseA___closed__136));
v___x_910_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_910_, 0, v___x_909_);
lean_ctor_set(v___x_910_, 1, v_y_908_);
return v___x_910_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__138(void){
_start:
{
lean_object* v___x_911_; lean_object* v___x_912_; lean_object* v___x_913_; 
v___x_911_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA___closed__137, &lp_subsetsum_SubsetSum_MITM_phaseA___closed__137_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__137);
v___x_912_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseA___closed__135));
v___x_913_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_913_, 0, v___x_912_);
lean_ctor_set(v___x_913_, 1, v___x_911_);
return v___x_913_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__139(void){
_start:
{
lean_object* v___x_914_; lean_object* v___x_915_; lean_object* v___x_916_; 
v___x_914_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA___closed__138, &lp_subsetsum_SubsetSum_MITM_phaseA___closed__138_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__138);
v___x_915_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseA___closed__133));
v___x_916_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_916_, 0, v___x_915_);
lean_ctor_set(v___x_916_, 1, v___x_914_);
return v___x_916_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__140(void){
_start:
{
lean_object* v___x_917_; lean_object* v___x_918_; lean_object* v_y_919_; 
v___x_917_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA___closed__139, &lp_subsetsum_SubsetSum_MITM_phaseA___closed__139_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__139);
v___x_918_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseA___closed__21));
v_y_919_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_y_919_, 0, v___x_918_);
lean_ctor_set(v_y_919_, 1, v___x_917_);
return v_y_919_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__151(void){
_start:
{
lean_object* v_y_948_; lean_object* v___x_949_; lean_object* v___x_950_; 
v_y_948_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA___closed__140, &lp_subsetsum_SubsetSum_MITM_phaseA___closed__140_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__140);
v___x_949_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseA___closed__150));
v___x_950_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_950_, 0, v___x_949_);
lean_ctor_set(v___x_950_, 1, v_y_948_);
return v___x_950_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__152(void){
_start:
{
lean_object* v___x_951_; lean_object* v___x_952_; lean_object* v___x_953_; 
v___x_951_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA___closed__151, &lp_subsetsum_SubsetSum_MITM_phaseA___closed__151_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__151);
v___x_952_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseA___closed__148));
v___x_953_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_953_, 0, v___x_952_);
lean_ctor_set(v___x_953_, 1, v___x_951_);
return v___x_953_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__153(void){
_start:
{
lean_object* v___x_954_; lean_object* v___x_955_; lean_object* v___x_956_; 
v___x_954_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA___closed__152, &lp_subsetsum_SubsetSum_MITM_phaseA___closed__152_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__152);
v___x_955_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseA___closed__146));
v___x_956_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_956_, 0, v___x_955_);
lean_ctor_set(v___x_956_, 1, v___x_954_);
return v___x_956_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__154(void){
_start:
{
lean_object* v___x_957_; lean_object* v___x_958_; lean_object* v___x_959_; 
v___x_957_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA___closed__153, &lp_subsetsum_SubsetSum_MITM_phaseA___closed__153_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__153);
v___x_958_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseA___closed__144));
v___x_959_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_959_, 0, v___x_958_);
lean_ctor_set(v___x_959_, 1, v___x_957_);
return v___x_959_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__155(void){
_start:
{
lean_object* v___x_960_; lean_object* v___x_961_; lean_object* v_y_962_; 
v___x_960_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA___closed__154, &lp_subsetsum_SubsetSum_MITM_phaseA___closed__154_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__154);
v___x_961_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseA___closed__142));
v_y_962_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_y_962_, 0, v___x_961_);
lean_ctor_set(v_y_962_, 1, v___x_960_);
return v_y_962_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__162(void){
_start:
{
lean_object* v_y_980_; lean_object* v___x_981_; lean_object* v___x_982_; 
v_y_980_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA___closed__155, &lp_subsetsum_SubsetSum_MITM_phaseA___closed__155_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__155);
v___x_981_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseA___closed__161));
v___x_982_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_982_, 0, v___x_981_);
lean_ctor_set(v___x_982_, 1, v_y_980_);
return v___x_982_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__163(void){
_start:
{
lean_object* v___x_983_; lean_object* v___x_984_; lean_object* v___x_985_; 
v___x_983_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA___closed__162, &lp_subsetsum_SubsetSum_MITM_phaseA___closed__162_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__162);
v___x_984_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseA___closed__161));
v___x_985_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_985_, 0, v___x_984_);
lean_ctor_set(v___x_985_, 1, v___x_983_);
return v___x_985_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__164(void){
_start:
{
lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v___x_988_; 
v___x_986_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA___closed__163, &lp_subsetsum_SubsetSum_MITM_phaseA___closed__163_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__163);
v___x_987_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseA___closed__159));
v___x_988_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_988_, 0, v___x_987_);
lean_ctor_set(v___x_988_, 1, v___x_986_);
return v___x_988_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__165(void){
_start:
{
lean_object* v___x_989_; lean_object* v___x_990_; lean_object* v___x_991_; 
v___x_989_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA___closed__164, &lp_subsetsum_SubsetSum_MITM_phaseA___closed__164_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__164);
v___x_990_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseA___closed__157));
v___x_991_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_991_, 0, v___x_990_);
lean_ctor_set(v___x_991_, 1, v___x_989_);
return v___x_991_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA(void){
_start:
{
lean_object* v___x_992_; 
v___x_992_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA___closed__165, &lp_subsetsum_SubsetSum_MITM_phaseA___closed__165_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA___closed__165);
return v___x_992_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_progPA___closed__0(void){
_start:
{
lean_object* v___x_993_; lean_object* v___x_994_; lean_object* v___x_995_; 
v___x_993_ = lp_subsetsum_SubsetSum_MITM_phaseA;
v___x_994_ = lp_subsetsum_SubsetSum_MITM_prologue;
v___x_995_ = l_List_appendTR___redArg(v___x_994_, v___x_993_);
return v___x_995_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_progPA___closed__1(void){
_start:
{
lean_object* v___x_996_; lean_object* v___x_997_; 
v___x_996_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_progPA___closed__0, &lp_subsetsum_SubsetSum_MITM_progPA___closed__0_once, _init_lp_subsetsum_SubsetSum_MITM_progPA___closed__0);
v___x_997_ = lp_subsetsum_SubsetSum_MITM_resolve(v___x_996_);
return v___x_997_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_progPA(void){
_start:
{
lean_object* v___x_998_; 
v___x_998_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_progPA___closed__1, &lp_subsetsum_SubsetSum_MITM_progPA___closed__1_once, _init_lp_subsetsum_SubsetSum_MITM_progPA___closed__1);
return v___x_998_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_LBIDX(void){
_start:
{
lean_object* v___x_999_; 
v___x_999_ = lean_unsigned_to_nat(30u);
return v___x_999_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_LBBIT(void){
_start:
{
lean_object* v___x_1000_; 
v___x_1000_ = lean_unsigned_to_nat(31u);
return v___x_1000_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_LBBIT2(void){
_start:
{
lean_object* v___x_1001_; 
v___x_1001_ = lean_unsigned_to_nat(32u);
return v___x_1001_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_LADDK(void){
_start:
{
lean_object* v___x_1002_; 
v___x_1002_ = lean_unsigned_to_nat(33u);
return v___x_1002_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_LBITNEXT(void){
_start:
{
lean_object* v___x_1003_; 
v___x_1003_ = lean_unsigned_to_nat(34u);
return v___x_1003_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_LAFTER(void){
_start:
{
lean_object* v___x_1004_; 
v___x_1004_ = lean_unsigned_to_nat(35u);
return v___x_1004_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_LBSRCH(void){
_start:
{
lean_object* v___x_1005_; 
v___x_1005_ = lean_unsigned_to_nat(36u);
return v___x_1005_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_LSMID(void){
_start:
{
lean_object* v___x_1006_; 
v___x_1006_ = lean_unsigned_to_nat(37u);
return v___x_1006_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_LGTR(void){
_start:
{
lean_object* v___x_1007_; 
v___x_1007_ = lean_unsigned_to_nat(38u);
return v___x_1007_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_LLESS(void){
_start:
{
lean_object* v___x_1008_; 
v___x_1008_ = lean_unsigned_to_nat(39u);
return v___x_1008_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_LNEXT(void){
_start:
{
lean_object* v___x_1009_; 
v___x_1009_ = lean_unsigned_to_nat(40u);
return v___x_1009_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__3(void){
_start:
{
lean_object* v___x_1018_; lean_object* v___x_1019_; 
v___x_1018_ = lean_unsigned_to_nat(36u);
v___x_1019_ = lp_subsetsum_SubsetSum_MITM_jmp(v___x_1018_);
return v___x_1019_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__11(void){
_start:
{
lean_object* v___x_1040_; lean_object* v___x_1041_; lean_object* v___x_1042_; 
v___x_1040_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseB___closed__10));
v___x_1041_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseB___closed__3, &lp_subsetsum_SubsetSum_MITM_phaseB___closed__3_once, _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__3);
v___x_1042_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1042_, 0, v___x_1041_);
lean_ctor_set(v___x_1042_, 1, v___x_1040_);
return v___x_1042_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__12(void){
_start:
{
lean_object* v___x_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; 
v___x_1043_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseB___closed__11, &lp_subsetsum_SubsetSum_MITM_phaseB___closed__11_once, _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__11);
v___x_1044_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseB___closed__2));
v___x_1045_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1045_, 0, v___x_1044_);
lean_ctor_set(v___x_1045_, 1, v___x_1043_);
return v___x_1045_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__13(void){
_start:
{
lean_object* v___x_1046_; lean_object* v___x_1047_; lean_object* v_y_1048_; 
v___x_1046_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseB___closed__12, &lp_subsetsum_SubsetSum_MITM_phaseB___closed__12_once, _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__12);
v___x_1047_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseB___closed__0));
v_y_1048_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_y_1048_, 0, v___x_1047_);
lean_ctor_set(v_y_1048_, 1, v___x_1046_);
return v_y_1048_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__22(void){
_start:
{
lean_object* v_y_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; 
v_y_1072_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseB___closed__13, &lp_subsetsum_SubsetSum_MITM_phaseB___closed__13_once, _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__13);
v___x_1073_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseB___closed__3, &lp_subsetsum_SubsetSum_MITM_phaseB___closed__3_once, _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__3);
v___x_1074_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1074_, 0, v___x_1073_);
lean_ctor_set(v___x_1074_, 1, v_y_1072_);
return v___x_1074_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__23(void){
_start:
{
lean_object* v___x_1075_; lean_object* v___x_1076_; lean_object* v___x_1077_; 
v___x_1075_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseB___closed__22, &lp_subsetsum_SubsetSum_MITM_phaseB___closed__22_once, _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__22);
v___x_1076_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseB___closed__21));
v___x_1077_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1077_, 0, v___x_1076_);
lean_ctor_set(v___x_1077_, 1, v___x_1075_);
return v___x_1077_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__24(void){
_start:
{
lean_object* v___x_1078_; lean_object* v___x_1079_; lean_object* v___x_1080_; 
v___x_1078_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseB___closed__23, &lp_subsetsum_SubsetSum_MITM_phaseB___closed__23_once, _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__23);
v___x_1079_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseB___closed__19));
v___x_1080_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1080_, 0, v___x_1079_);
lean_ctor_set(v___x_1080_, 1, v___x_1078_);
return v___x_1080_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__25(void){
_start:
{
lean_object* v___x_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; 
v___x_1081_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseB___closed__24, &lp_subsetsum_SubsetSum_MITM_phaseB___closed__24_once, _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__24);
v___x_1082_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseB___closed__18));
v___x_1083_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1083_, 0, v___x_1082_);
lean_ctor_set(v___x_1083_, 1, v___x_1081_);
return v___x_1083_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__26(void){
_start:
{
lean_object* v___x_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; 
v___x_1084_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseB___closed__25, &lp_subsetsum_SubsetSum_MITM_phaseB___closed__25_once, _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__25);
v___x_1085_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseB___closed__17));
v___x_1086_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1086_, 0, v___x_1085_);
lean_ctor_set(v___x_1086_, 1, v___x_1084_);
return v___x_1086_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__27(void){
_start:
{
lean_object* v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; 
v___x_1087_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseB___closed__26, &lp_subsetsum_SubsetSum_MITM_phaseB___closed__26_once, _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__26);
v___x_1088_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseB___closed__16));
v___x_1089_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1089_, 0, v___x_1088_);
lean_ctor_set(v___x_1089_, 1, v___x_1087_);
return v___x_1089_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__28(void){
_start:
{
lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v_y_1092_; 
v___x_1090_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseB___closed__27, &lp_subsetsum_SubsetSum_MITM_phaseB___closed__27_once, _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__27);
v___x_1091_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseB___closed__15));
v_y_1092_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_y_1092_, 0, v___x_1091_);
lean_ctor_set(v_y_1092_, 1, v___x_1090_);
return v_y_1092_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__32(void){
_start:
{
lean_object* v___x_1103_; lean_object* v___x_1104_; 
v___x_1103_ = lean_unsigned_to_nat(40u);
v___x_1104_ = lp_subsetsum_SubsetSum_MITM_jmp(v___x_1103_);
return v___x_1104_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__40(void){
_start:
{
lean_object* v_y_1124_; lean_object* v___x_1125_; lean_object* v___x_1126_; 
v_y_1124_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseB___closed__28, &lp_subsetsum_SubsetSum_MITM_phaseB___closed__28_once, _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__28);
v___x_1125_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseB___closed__39));
v___x_1126_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1126_, 0, v___x_1125_);
lean_ctor_set(v___x_1126_, 1, v_y_1124_);
return v___x_1126_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__41(void){
_start:
{
lean_object* v___x_1127_; lean_object* v___x_1128_; lean_object* v___x_1129_; 
v___x_1127_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseB___closed__40, &lp_subsetsum_SubsetSum_MITM_phaseB___closed__40_once, _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__40);
v___x_1128_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseB___closed__37));
v___x_1129_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1129_, 0, v___x_1128_);
lean_ctor_set(v___x_1129_, 1, v___x_1127_);
return v___x_1129_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__42(void){
_start:
{
lean_object* v___x_1130_; lean_object* v___x_1131_; lean_object* v___x_1132_; 
v___x_1130_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseB___closed__41, &lp_subsetsum_SubsetSum_MITM_phaseB___closed__41_once, _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__41);
v___x_1131_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseB___closed__35));
v___x_1132_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1132_, 0, v___x_1131_);
lean_ctor_set(v___x_1132_, 1, v___x_1130_);
return v___x_1132_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__43(void){
_start:
{
lean_object* v___x_1133_; lean_object* v___x_1134_; lean_object* v___x_1135_; 
v___x_1133_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseB___closed__42, &lp_subsetsum_SubsetSum_MITM_phaseB___closed__42_once, _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__42);
v___x_1134_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseB___closed__33));
v___x_1135_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1135_, 0, v___x_1134_);
lean_ctor_set(v___x_1135_, 1, v___x_1133_);
return v___x_1135_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__44(void){
_start:
{
lean_object* v___x_1136_; lean_object* v___x_1137_; lean_object* v___x_1138_; 
v___x_1136_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseB___closed__43, &lp_subsetsum_SubsetSum_MITM_phaseB___closed__43_once, _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__43);
v___x_1137_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseB___closed__32, &lp_subsetsum_SubsetSum_MITM_phaseB___closed__32_once, _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__32);
v___x_1138_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1138_, 0, v___x_1137_);
lean_ctor_set(v___x_1138_, 1, v___x_1136_);
return v___x_1138_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__45(void){
_start:
{
lean_object* v___x_1139_; lean_object* v___x_1140_; lean_object* v___x_1141_; 
v___x_1139_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseB___closed__44, &lp_subsetsum_SubsetSum_MITM_phaseB___closed__44_once, _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__44);
v___x_1140_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseB___closed__31));
v___x_1141_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1141_, 0, v___x_1140_);
lean_ctor_set(v___x_1141_, 1, v___x_1139_);
return v___x_1141_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__46(void){
_start:
{
lean_object* v___x_1142_; lean_object* v___x_1143_; lean_object* v_y_1144_; 
v___x_1142_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseB___closed__45, &lp_subsetsum_SubsetSum_MITM_phaseB___closed__45_once, _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__45);
v___x_1143_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseB___closed__30));
v_y_1144_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_y_1144_, 0, v___x_1143_);
lean_ctor_set(v_y_1144_, 1, v___x_1142_);
return v_y_1144_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__58(void){
_start:
{
lean_object* v_y_1175_; lean_object* v___x_1176_; lean_object* v___x_1177_; 
v_y_1175_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseB___closed__46, &lp_subsetsum_SubsetSum_MITM_phaseB___closed__46_once, _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__46);
v___x_1176_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseB___closed__57));
v___x_1177_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1177_, 0, v___x_1176_);
lean_ctor_set(v___x_1177_, 1, v_y_1175_);
return v___x_1177_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__59(void){
_start:
{
lean_object* v___x_1178_; lean_object* v___x_1179_; lean_object* v___x_1180_; 
v___x_1178_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseB___closed__58, &lp_subsetsum_SubsetSum_MITM_phaseB___closed__58_once, _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__58);
v___x_1179_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseB___closed__56));
v___x_1180_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1180_, 0, v___x_1179_);
lean_ctor_set(v___x_1180_, 1, v___x_1178_);
return v___x_1180_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__60(void){
_start:
{
lean_object* v___x_1181_; lean_object* v___x_1182_; lean_object* v___x_1183_; 
v___x_1181_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseB___closed__59, &lp_subsetsum_SubsetSum_MITM_phaseB___closed__59_once, _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__59);
v___x_1182_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseA___closed__122));
v___x_1183_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1183_, 0, v___x_1182_);
lean_ctor_set(v___x_1183_, 1, v___x_1181_);
return v___x_1183_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__61(void){
_start:
{
lean_object* v___x_1184_; lean_object* v___x_1185_; lean_object* v___x_1186_; 
v___x_1184_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseB___closed__60, &lp_subsetsum_SubsetSum_MITM_phaseB___closed__60_once, _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__60);
v___x_1185_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseB___closed__54));
v___x_1186_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1186_, 0, v___x_1185_);
lean_ctor_set(v___x_1186_, 1, v___x_1184_);
return v___x_1186_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__62(void){
_start:
{
lean_object* v___x_1187_; lean_object* v___x_1188_; lean_object* v___x_1189_; 
v___x_1187_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseB___closed__61, &lp_subsetsum_SubsetSum_MITM_phaseB___closed__61_once, _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__61);
v___x_1188_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseB___closed__52));
v___x_1189_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1189_, 0, v___x_1188_);
lean_ctor_set(v___x_1189_, 1, v___x_1187_);
return v___x_1189_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__63(void){
_start:
{
lean_object* v___x_1190_; lean_object* v___x_1191_; lean_object* v___x_1192_; 
v___x_1190_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseB___closed__62, &lp_subsetsum_SubsetSum_MITM_phaseB___closed__62_once, _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__62);
v___x_1191_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseB___closed__50));
v___x_1192_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1192_, 0, v___x_1191_);
lean_ctor_set(v___x_1192_, 1, v___x_1190_);
return v___x_1192_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__64(void){
_start:
{
lean_object* v___x_1193_; lean_object* v___x_1194_; lean_object* v_y_1195_; 
v___x_1193_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseB___closed__63, &lp_subsetsum_SubsetSum_MITM_phaseB___closed__63_once, _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__63);
v___x_1194_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseB___closed__48));
v_y_1195_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_y_1195_, 0, v___x_1194_);
lean_ctor_set(v_y_1195_, 1, v___x_1193_);
return v_y_1195_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__65(void){
_start:
{
lean_object* v___x_1196_; lean_object* v___x_1197_; 
v___x_1196_ = lean_unsigned_to_nat(34u);
v___x_1197_ = lp_subsetsum_SubsetSum_MITM_jmp(v___x_1196_);
return v___x_1197_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__70(void){
_start:
{
lean_object* v___x_1207_; lean_object* v___x_1208_; 
v___x_1207_ = lean_unsigned_to_nat(31u);
v___x_1208_ = lp_subsetsum_SubsetSum_MITM_jmp(v___x_1207_);
return v___x_1208_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__72(void){
_start:
{
lean_object* v_y_1211_; lean_object* v___x_1212_; lean_object* v___x_1213_; 
v_y_1211_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseB___closed__64, &lp_subsetsum_SubsetSum_MITM_phaseB___closed__64_once, _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__64);
v___x_1212_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseB___closed__71));
v___x_1213_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1213_, 0, v___x_1212_);
lean_ctor_set(v___x_1213_, 1, v_y_1211_);
return v___x_1213_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__73(void){
_start:
{
lean_object* v___x_1214_; lean_object* v___x_1215_; lean_object* v___x_1216_; 
v___x_1214_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseB___closed__72, &lp_subsetsum_SubsetSum_MITM_phaseB___closed__72_once, _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__72);
v___x_1215_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseB___closed__70, &lp_subsetsum_SubsetSum_MITM_phaseB___closed__70_once, _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__70);
v___x_1216_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1216_, 0, v___x_1215_);
lean_ctor_set(v___x_1216_, 1, v___x_1214_);
return v___x_1216_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__74(void){
_start:
{
lean_object* v___x_1217_; lean_object* v___x_1218_; lean_object* v___x_1219_; 
v___x_1217_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseB___closed__73, &lp_subsetsum_SubsetSum_MITM_phaseB___closed__73_once, _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__73);
v___x_1218_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseA___closed__36));
v___x_1219_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1219_, 0, v___x_1218_);
lean_ctor_set(v___x_1219_, 1, v___x_1217_);
return v___x_1219_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__75(void){
_start:
{
lean_object* v___x_1220_; lean_object* v___x_1221_; lean_object* v___x_1222_; 
v___x_1220_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseB___closed__74, &lp_subsetsum_SubsetSum_MITM_phaseB___closed__74_once, _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__74);
v___x_1221_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseB___closed__69));
v___x_1222_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1222_, 0, v___x_1221_);
lean_ctor_set(v___x_1222_, 1, v___x_1220_);
return v___x_1222_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__76(void){
_start:
{
lean_object* v___x_1223_; lean_object* v___x_1224_; lean_object* v___x_1225_; 
v___x_1223_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseB___closed__75, &lp_subsetsum_SubsetSum_MITM_phaseB___closed__75_once, _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__75);
v___x_1224_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseB___closed__68));
v___x_1225_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1225_, 0, v___x_1224_);
lean_ctor_set(v___x_1225_, 1, v___x_1223_);
return v___x_1225_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__77(void){
_start:
{
lean_object* v___x_1226_; lean_object* v___x_1227_; lean_object* v___x_1228_; 
v___x_1226_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseB___closed__76, &lp_subsetsum_SubsetSum_MITM_phaseB___closed__76_once, _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__76);
v___x_1227_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseB___closed__66));
v___x_1228_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1228_, 0, v___x_1227_);
lean_ctor_set(v___x_1228_, 1, v___x_1226_);
return v___x_1228_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__78(void){
_start:
{
lean_object* v___x_1229_; lean_object* v___x_1230_; lean_object* v_y_1231_; 
v___x_1229_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseB___closed__77, &lp_subsetsum_SubsetSum_MITM_phaseB___closed__77_once, _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__77);
v___x_1230_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseB___closed__65, &lp_subsetsum_SubsetSum_MITM_phaseB___closed__65_once, _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__65);
v_y_1231_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_y_1231_, 0, v___x_1230_);
lean_ctor_set(v_y_1231_, 1, v___x_1229_);
return v_y_1231_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__88(void){
_start:
{
lean_object* v_y_1258_; lean_object* v___x_1259_; lean_object* v___x_1260_; 
v_y_1258_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseB___closed__78, &lp_subsetsum_SubsetSum_MITM_phaseB___closed__78_once, _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__78);
v___x_1259_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseB___closed__87));
v___x_1260_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1260_, 0, v___x_1259_);
lean_ctor_set(v___x_1260_, 1, v_y_1258_);
return v___x_1260_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__89(void){
_start:
{
lean_object* v___x_1261_; lean_object* v___x_1262_; lean_object* v___x_1263_; 
v___x_1261_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseB___closed__88, &lp_subsetsum_SubsetSum_MITM_phaseB___closed__88_once, _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__88);
v___x_1262_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseB___closed__86));
v___x_1263_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1263_, 0, v___x_1262_);
lean_ctor_set(v___x_1263_, 1, v___x_1261_);
return v___x_1263_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__90(void){
_start:
{
lean_object* v___x_1264_; lean_object* v___x_1265_; lean_object* v___x_1266_; 
v___x_1264_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseB___closed__89, &lp_subsetsum_SubsetSum_MITM_phaseB___closed__89_once, _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__89);
v___x_1265_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseB___closed__84));
v___x_1266_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1266_, 0, v___x_1265_);
lean_ctor_set(v___x_1266_, 1, v___x_1264_);
return v___x_1266_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__91(void){
_start:
{
lean_object* v___x_1267_; lean_object* v___x_1268_; lean_object* v___x_1269_; 
v___x_1267_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseB___closed__90, &lp_subsetsum_SubsetSum_MITM_phaseB___closed__90_once, _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__90);
v___x_1268_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseA___closed__120));
v___x_1269_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1269_, 0, v___x_1268_);
lean_ctor_set(v___x_1269_, 1, v___x_1267_);
return v___x_1269_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__92(void){
_start:
{
lean_object* v___x_1270_; lean_object* v___x_1271_; lean_object* v___x_1272_; 
v___x_1270_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseB___closed__91, &lp_subsetsum_SubsetSum_MITM_phaseB___closed__91_once, _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__91);
v___x_1271_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseB___closed__82));
v___x_1272_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1272_, 0, v___x_1271_);
lean_ctor_set(v___x_1272_, 1, v___x_1270_);
return v___x_1272_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__93(void){
_start:
{
lean_object* v___x_1273_; lean_object* v___x_1274_; lean_object* v___x_1275_; 
v___x_1273_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseB___closed__92, &lp_subsetsum_SubsetSum_MITM_phaseB___closed__92_once, _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__92);
v___x_1274_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseB___closed__50));
v___x_1275_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1275_, 0, v___x_1274_);
lean_ctor_set(v___x_1275_, 1, v___x_1273_);
return v___x_1275_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__94(void){
_start:
{
lean_object* v___x_1276_; lean_object* v___x_1277_; lean_object* v_y_1278_; 
v___x_1276_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseB___closed__93, &lp_subsetsum_SubsetSum_MITM_phaseB___closed__93_once, _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__93);
v___x_1277_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseB___closed__80));
v_y_1278_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_y_1278_, 0, v___x_1277_);
lean_ctor_set(v_y_1278_, 1, v___x_1276_);
return v_y_1278_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__98(void){
_start:
{
lean_object* v___x_1287_; lean_object* v___x_1288_; 
v___x_1287_ = lean_unsigned_to_nat(35u);
v___x_1288_ = lp_subsetsum_SubsetSum_MITM_jmp(v___x_1287_);
return v___x_1288_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__100(void){
_start:
{
lean_object* v_y_1291_; lean_object* v___x_1292_; lean_object* v___x_1293_; 
v_y_1291_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseB___closed__94, &lp_subsetsum_SubsetSum_MITM_phaseB___closed__94_once, _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__94);
v___x_1292_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseB___closed__99));
v___x_1293_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1293_, 0, v___x_1292_);
lean_ctor_set(v___x_1293_, 1, v_y_1291_);
return v___x_1293_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__101(void){
_start:
{
lean_object* v___x_1294_; lean_object* v___x_1295_; lean_object* v___x_1296_; 
v___x_1294_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseB___closed__100, &lp_subsetsum_SubsetSum_MITM_phaseB___closed__100_once, _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__100);
v___x_1295_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseB___closed__98, &lp_subsetsum_SubsetSum_MITM_phaseB___closed__98_once, _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__98);
v___x_1296_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1296_, 0, v___x_1295_);
lean_ctor_set(v___x_1296_, 1, v___x_1294_);
return v___x_1296_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__102(void){
_start:
{
lean_object* v___x_1297_; lean_object* v___x_1298_; lean_object* v___x_1299_; 
v___x_1297_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseB___closed__101, &lp_subsetsum_SubsetSum_MITM_phaseB___closed__101_once, _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__101);
v___x_1298_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseB___closed__97));
v___x_1299_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1299_, 0, v___x_1298_);
lean_ctor_set(v___x_1299_, 1, v___x_1297_);
return v___x_1299_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__103(void){
_start:
{
lean_object* v___x_1300_; lean_object* v___x_1301_; lean_object* v___x_1302_; 
v___x_1300_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseB___closed__102, &lp_subsetsum_SubsetSum_MITM_phaseB___closed__102_once, _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__102);
v___x_1301_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseB___closed__96));
v___x_1302_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1302_, 0, v___x_1301_);
lean_ctor_set(v___x_1302_, 1, v___x_1300_);
return v___x_1302_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__104(void){
_start:
{
lean_object* v___x_1303_; lean_object* v___x_1304_; lean_object* v___x_1305_; 
v___x_1303_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseB___closed__103, &lp_subsetsum_SubsetSum_MITM_phaseB___closed__103_once, _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__103);
v___x_1304_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseA___closed__124));
v___x_1305_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1305_, 0, v___x_1304_);
lean_ctor_set(v___x_1305_, 1, v___x_1303_);
return v___x_1305_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__105(void){
_start:
{
lean_object* v___x_1306_; lean_object* v___x_1307_; lean_object* v___x_1308_; 
v___x_1306_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseB___closed__104, &lp_subsetsum_SubsetSum_MITM_phaseB___closed__104_once, _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__104);
v___x_1307_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseA___closed__126));
v___x_1308_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1308_, 0, v___x_1307_);
lean_ctor_set(v___x_1308_, 1, v___x_1306_);
return v___x_1308_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__106(void){
_start:
{
lean_object* v___x_1309_; lean_object* v___x_1310_; lean_object* v_y_1311_; 
v___x_1309_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseB___closed__105, &lp_subsetsum_SubsetSum_MITM_phaseB___closed__105_once, _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__105);
v___x_1310_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseB___closed__95));
v_y_1311_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_y_1311_, 0, v___x_1310_);
lean_ctor_set(v_y_1311_, 1, v___x_1309_);
return v_y_1311_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__117(void){
_start:
{
lean_object* v_y_1338_; lean_object* v___x_1339_; lean_object* v___x_1340_; 
v_y_1338_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseB___closed__106, &lp_subsetsum_SubsetSum_MITM_phaseB___closed__106_once, _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__106);
v___x_1339_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseB___closed__116));
v___x_1340_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1340_, 0, v___x_1339_);
lean_ctor_set(v___x_1340_, 1, v_y_1338_);
return v___x_1340_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__118(void){
_start:
{
lean_object* v___x_1341_; lean_object* v___x_1342_; lean_object* v___x_1343_; 
v___x_1341_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseB___closed__117, &lp_subsetsum_SubsetSum_MITM_phaseB___closed__117_once, _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__117);
v___x_1342_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseB___closed__114));
v___x_1343_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1343_, 0, v___x_1342_);
lean_ctor_set(v___x_1343_, 1, v___x_1341_);
return v___x_1343_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__119(void){
_start:
{
lean_object* v___x_1344_; lean_object* v___x_1345_; lean_object* v___x_1346_; 
v___x_1344_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseB___closed__118, &lp_subsetsum_SubsetSum_MITM_phaseB___closed__118_once, _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__118);
v___x_1345_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseB___closed__112));
v___x_1346_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1346_, 0, v___x_1345_);
lean_ctor_set(v___x_1346_, 1, v___x_1344_);
return v___x_1346_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__120(void){
_start:
{
lean_object* v___x_1347_; lean_object* v___x_1348_; lean_object* v___x_1349_; 
v___x_1347_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseB___closed__119, &lp_subsetsum_SubsetSum_MITM_phaseB___closed__119_once, _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__119);
v___x_1348_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseB___closed__110));
v___x_1349_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1349_, 0, v___x_1348_);
lean_ctor_set(v___x_1349_, 1, v___x_1347_);
return v___x_1349_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__121(void){
_start:
{
lean_object* v___x_1350_; lean_object* v___x_1351_; lean_object* v___x_1352_; 
v___x_1350_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseB___closed__120, &lp_subsetsum_SubsetSum_MITM_phaseB___closed__120_once, _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__120);
v___x_1351_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseB___closed__108));
v___x_1352_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1352_, 0, v___x_1351_);
lean_ctor_set(v___x_1352_, 1, v___x_1350_);
return v___x_1352_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__122(void){
_start:
{
lean_object* v___x_1353_; lean_object* v___x_1354_; lean_object* v___x_1355_; 
v___x_1353_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseB___closed__121, &lp_subsetsum_SubsetSum_MITM_phaseB___closed__121_once, _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__121);
v___x_1354_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseA___closed__150));
v___x_1355_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1355_, 0, v___x_1354_);
lean_ctor_set(v___x_1355_, 1, v___x_1353_);
return v___x_1355_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseB(void){
_start:
{
lean_object* v___x_1356_; 
v___x_1356_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseB___closed__122, &lp_subsetsum_SubsetSum_MITM_phaseB___closed__122_once, _init_lp_subsetsum_SubsetSum_MITM_phaseB___closed__122);
return v___x_1356_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_LS2(void){
_start:
{
lean_object* v___x_1357_; 
v___x_1357_ = lean_unsigned_to_nat(51u);
return v___x_1357_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_LS3(void){
_start:
{
lean_object* v___x_1358_; 
v___x_1358_ = lean_unsigned_to_nat(52u);
return v___x_1358_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_LS2a(void){
_start:
{
lean_object* v___x_1359_; 
v___x_1359_ = lean_unsigned_to_nat(53u);
return v___x_1359_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_LS2b(void){
_start:
{
lean_object* v___x_1360_; 
v___x_1360_ = lean_unsigned_to_nat(54u);
return v___x_1360_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_LS2c(void){
_start:
{
lean_object* v___x_1361_; 
v___x_1361_ = lean_unsigned_to_nat(55u);
return v___x_1361_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_LS3a(void){
_start:
{
lean_object* v___x_1362_; 
v___x_1362_ = lean_unsigned_to_nat(56u);
return v___x_1362_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_LS3b(void){
_start:
{
lean_object* v___x_1363_; 
v___x_1363_ = lean_unsigned_to_nat(57u);
return v___x_1363_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_LS3c(void){
_start:
{
lean_object* v___x_1364_; 
v___x_1364_ = lean_unsigned_to_nat(58u);
return v___x_1364_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_LS3d(void){
_start:
{
lean_object* v___x_1365_; 
v___x_1365_ = lean_unsigned_to_nat(59u);
return v___x_1365_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_LS3e(void){
_start:
{
lean_object* v___x_1366_; 
v___x_1366_ = lean_unsigned_to_nat(63u);
return v___x_1366_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_LS3f(void){
_start:
{
lean_object* v___x_1367_; 
v___x_1367_ = lean_unsigned_to_nat(64u);
return v___x_1367_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_smallN___closed__101(void){
_start:
{
lean_object* v___x_1678_; lean_object* v___x_1679_; 
v___x_1678_ = lean_unsigned_to_nat(52u);
v___x_1679_ = lp_subsetsum_SubsetSum_MITM_jmp(v___x_1678_);
return v___x_1679_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_smallN___closed__107(void){
_start:
{
lean_object* v___x_1694_; lean_object* v___x_1695_; lean_object* v___x_1696_; 
v___x_1694_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_smallN___closed__106));
v___x_1695_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_smallN___closed__101, &lp_subsetsum_SubsetSum_MITM_smallN___closed__101_once, _init_lp_subsetsum_SubsetSum_MITM_smallN___closed__101);
v___x_1696_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1696_, 0, v___x_1695_);
lean_ctor_set(v___x_1696_, 1, v___x_1694_);
return v___x_1696_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_smallN___closed__108(void){
_start:
{
lean_object* v___x_1697_; lean_object* v___x_1698_; lean_object* v___x_1699_; 
v___x_1697_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_smallN___closed__107, &lp_subsetsum_SubsetSum_MITM_smallN___closed__107_once, _init_lp_subsetsum_SubsetSum_MITM_smallN___closed__107);
v___x_1698_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_smallN___closed__100));
v___x_1699_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1699_, 0, v___x_1698_);
lean_ctor_set(v___x_1699_, 1, v___x_1697_);
return v___x_1699_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_smallN___closed__109(void){
_start:
{
lean_object* v___x_1700_; lean_object* v___x_1701_; lean_object* v_y_1702_; 
v___x_1700_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_smallN___closed__108, &lp_subsetsum_SubsetSum_MITM_smallN___closed__108_once, _init_lp_subsetsum_SubsetSum_MITM_smallN___closed__108);
v___x_1701_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_smallN___closed__98));
v_y_1702_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_y_1702_, 0, v___x_1701_);
lean_ctor_set(v_y_1702_, 1, v___x_1700_);
return v_y_1702_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_smallN___closed__115(void){
_start:
{
lean_object* v_y_1717_; lean_object* v___x_1718_; lean_object* v___x_1719_; 
v_y_1717_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_smallN___closed__109, &lp_subsetsum_SubsetSum_MITM_smallN___closed__109_once, _init_lp_subsetsum_SubsetSum_MITM_smallN___closed__109);
v___x_1718_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_smallN___closed__98));
v___x_1719_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1719_, 0, v___x_1718_);
lean_ctor_set(v___x_1719_, 1, v_y_1717_);
return v___x_1719_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_smallN___closed__116(void){
_start:
{
lean_object* v___x_1720_; lean_object* v___x_1721_; lean_object* v___x_1722_; 
v___x_1720_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_smallN___closed__115, &lp_subsetsum_SubsetSum_MITM_smallN___closed__115_once, _init_lp_subsetsum_SubsetSum_MITM_smallN___closed__115);
v___x_1721_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_smallN___closed__114));
v___x_1722_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1722_, 0, v___x_1721_);
lean_ctor_set(v___x_1722_, 1, v___x_1720_);
return v___x_1722_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_smallN___closed__117(void){
_start:
{
lean_object* v___x_1723_; lean_object* v___x_1724_; lean_object* v___x_1725_; 
v___x_1723_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_smallN___closed__116, &lp_subsetsum_SubsetSum_MITM_smallN___closed__116_once, _init_lp_subsetsum_SubsetSum_MITM_smallN___closed__116);
v___x_1724_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_smallN___closed__112));
v___x_1725_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1725_, 0, v___x_1724_);
lean_ctor_set(v___x_1725_, 1, v___x_1723_);
return v___x_1725_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_smallN___closed__118(void){
_start:
{
lean_object* v___x_1726_; lean_object* v___x_1727_; lean_object* v_y_1728_; 
v___x_1726_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_smallN___closed__117, &lp_subsetsum_SubsetSum_MITM_smallN___closed__117_once, _init_lp_subsetsum_SubsetSum_MITM_smallN___closed__117);
v___x_1727_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_smallN___closed__111));
v_y_1728_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_y_1728_, 0, v___x_1727_);
lean_ctor_set(v_y_1728_, 1, v___x_1726_);
return v_y_1728_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_smallN___closed__123(void){
_start:
{
lean_object* v_y_1740_; lean_object* v___x_1741_; lean_object* v___x_1742_; 
v_y_1740_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_smallN___closed__118, &lp_subsetsum_SubsetSum_MITM_smallN___closed__118_once, _init_lp_subsetsum_SubsetSum_MITM_smallN___closed__118);
v___x_1741_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_smallN___closed__122));
v___x_1742_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1742_, 0, v___x_1741_);
lean_ctor_set(v___x_1742_, 1, v_y_1740_);
return v___x_1742_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_smallN___closed__124(void){
_start:
{
lean_object* v___x_1743_; lean_object* v___x_1744_; lean_object* v___x_1745_; 
v___x_1743_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_smallN___closed__123, &lp_subsetsum_SubsetSum_MITM_smallN___closed__123_once, _init_lp_subsetsum_SubsetSum_MITM_smallN___closed__123);
v___x_1744_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseA___closed__120));
v___x_1745_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1745_, 0, v___x_1744_);
lean_ctor_set(v___x_1745_, 1, v___x_1743_);
return v___x_1745_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_smallN___closed__125(void){
_start:
{
lean_object* v___x_1746_; lean_object* v___x_1747_; lean_object* v___x_1748_; 
v___x_1746_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_smallN___closed__124, &lp_subsetsum_SubsetSum_MITM_smallN___closed__124_once, _init_lp_subsetsum_SubsetSum_MITM_smallN___closed__124);
v___x_1747_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseB___closed__50));
v___x_1748_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1748_, 0, v___x_1747_);
lean_ctor_set(v___x_1748_, 1, v___x_1746_);
return v___x_1748_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_smallN___closed__126(void){
_start:
{
lean_object* v___x_1749_; lean_object* v___x_1750_; lean_object* v___x_1751_; 
v___x_1749_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_smallN___closed__125, &lp_subsetsum_SubsetSum_MITM_smallN___closed__125_once, _init_lp_subsetsum_SubsetSum_MITM_smallN___closed__125);
v___x_1750_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_smallN___closed__120));
v___x_1751_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1751_, 0, v___x_1750_);
lean_ctor_set(v___x_1751_, 1, v___x_1749_);
return v___x_1751_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_smallN___closed__127(void){
_start:
{
lean_object* v___x_1752_; lean_object* v___x_1753_; lean_object* v_y_1754_; 
v___x_1752_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_smallN___closed__126, &lp_subsetsum_SubsetSum_MITM_smallN___closed__126_once, _init_lp_subsetsum_SubsetSum_MITM_smallN___closed__126);
v___x_1753_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseB___closed__50));
v_y_1754_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_y_1754_, 0, v___x_1753_);
lean_ctor_set(v_y_1754_, 1, v___x_1752_);
return v_y_1754_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_smallN___closed__133(void){
_start:
{
lean_object* v_y_1768_; lean_object* v___x_1769_; lean_object* v___x_1770_; 
v_y_1768_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_smallN___closed__127, &lp_subsetsum_SubsetSum_MITM_smallN___closed__127_once, _init_lp_subsetsum_SubsetSum_MITM_smallN___closed__127);
v___x_1769_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseA___closed__67));
v___x_1770_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1770_, 0, v___x_1769_);
lean_ctor_set(v___x_1770_, 1, v_y_1768_);
return v___x_1770_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_smallN___closed__134(void){
_start:
{
lean_object* v___x_1771_; lean_object* v___x_1772_; lean_object* v___x_1773_; 
v___x_1771_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_smallN___closed__133, &lp_subsetsum_SubsetSum_MITM_smallN___closed__133_once, _init_lp_subsetsum_SubsetSum_MITM_smallN___closed__133);
v___x_1772_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_smallN___closed__132));
v___x_1773_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1773_, 0, v___x_1772_);
lean_ctor_set(v___x_1773_, 1, v___x_1771_);
return v___x_1773_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_smallN___closed__135(void){
_start:
{
lean_object* v___x_1774_; lean_object* v___x_1775_; lean_object* v___x_1776_; 
v___x_1774_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_smallN___closed__134, &lp_subsetsum_SubsetSum_MITM_smallN___closed__134_once, _init_lp_subsetsum_SubsetSum_MITM_smallN___closed__134);
v___x_1775_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_smallN___closed__130));
v___x_1776_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1776_, 0, v___x_1775_);
lean_ctor_set(v___x_1776_, 1, v___x_1774_);
return v___x_1776_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_smallN___closed__136(void){
_start:
{
lean_object* v___x_1777_; lean_object* v___x_1778_; lean_object* v___x_1779_; 
v___x_1777_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_smallN___closed__135, &lp_subsetsum_SubsetSum_MITM_smallN___closed__135_once, _init_lp_subsetsum_SubsetSum_MITM_smallN___closed__135);
v___x_1778_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_smallN___closed__128));
v___x_1779_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1779_, 0, v___x_1778_);
lean_ctor_set(v___x_1779_, 1, v___x_1777_);
return v___x_1779_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_smallN(void){
_start:
{
lean_object* v___x_1780_; 
v___x_1780_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_smallN___closed__136, &lp_subsetsum_SubsetSum_MITM_smallN___closed__136_once, _init_lp_subsetsum_SubsetSum_MITM_smallN___closed__136);
return v___x_1780_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_prog___closed__0(void){
_start:
{
lean_object* v___x_1781_; lean_object* v___x_1782_; lean_object* v___x_1783_; 
v___x_1781_ = lp_subsetsum_SubsetSum_MITM_phaseB;
v___x_1782_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_progPA___closed__0, &lp_subsetsum_SubsetSum_MITM_progPA___closed__0_once, _init_lp_subsetsum_SubsetSum_MITM_progPA___closed__0);
v___x_1783_ = l_List_appendTR___redArg(v___x_1782_, v___x_1781_);
return v___x_1783_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_prog___closed__1(void){
_start:
{
lean_object* v___x_1784_; lean_object* v___x_1785_; lean_object* v___x_1786_; 
v___x_1784_ = lp_subsetsum_SubsetSum_MITM_smallN;
v___x_1785_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_prog___closed__0, &lp_subsetsum_SubsetSum_MITM_prog___closed__0_once, _init_lp_subsetsum_SubsetSum_MITM_prog___closed__0);
v___x_1786_ = l_List_appendTR___redArg(v___x_1785_, v___x_1784_);
return v___x_1786_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_prog___closed__2(void){
_start:
{
lean_object* v___x_1787_; lean_object* v___x_1788_; 
v___x_1787_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_prog___closed__1, &lp_subsetsum_SubsetSum_MITM_prog___closed__1_once, _init_lp_subsetsum_SubsetSum_MITM_prog___closed__1);
v___x_1788_ = lp_subsetsum_SubsetSum_MITM_resolve(v___x_1787_);
return v___x_1788_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_prog(void){
_start:
{
lean_object* v___x_1789_; 
v___x_1789_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_prog___closed__2, &lp_subsetsum_SubsetSum_MITM_prog___closed__2_once, _init_lp_subsetsum_SubsetSum_MITM_prog___closed__2);
return v___x_1789_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_subsetsum_Submission_SubsetSumStatement(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_subsetsum_Submission_Program(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
lean_initialize_runtime_module();
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_subsetsum_Submission_SubsetSumStatement(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
lp_subsetsum_SubsetSum_MITM_rCUR = _init_lp_subsetsum_SubsetSum_MITM_rCUR();
lean_mark_persistent(lp_subsetsum_SubsetSum_MITM_rCUR);
lp_subsetsum_SubsetSum_MITM_rONE = _init_lp_subsetsum_SubsetSum_MITM_rONE();
lean_mark_persistent(lp_subsetsum_SubsetSum_MITM_rONE);
lp_subsetsum_SubsetSum_MITM_rZER = _init_lp_subsetsum_SubsetSum_MITM_rZER();
lean_mark_persistent(lp_subsetsum_SubsetSum_MITM_rZER);
lp_subsetsum_SubsetSum_MITM_rTMP = _init_lp_subsetsum_SubsetSum_MITM_rTMP();
lean_mark_persistent(lp_subsetsum_SubsetSum_MITM_rTMP);
lp_subsetsum_SubsetSum_MITM_rBND = _init_lp_subsetsum_SubsetSum_MITM_rBND();
lean_mark_persistent(lp_subsetsum_SubsetSum_MITM_rBND);
lp_subsetsum_SubsetSum_MITM_rIDX = _init_lp_subsetsum_SubsetSum_MITM_rIDX();
lean_mark_persistent(lp_subsetsum_SubsetSum_MITM_rIDX);
lp_subsetsum_SubsetSum_MITM_rVAL = _init_lp_subsetsum_SubsetSum_MITM_rVAL();
lean_mark_persistent(lp_subsetsum_SubsetSum_MITM_rVAL);
lp_subsetsum_SubsetSum_MITM_rN = _init_lp_subsetsum_SubsetSum_MITM_rN();
lean_mark_persistent(lp_subsetsum_SubsetSum_MITM_rN);
lp_subsetsum_SubsetSum_MITM_rRE = _init_lp_subsetsum_SubsetSum_MITM_rRE();
lean_mark_persistent(lp_subsetsum_SubsetSum_MITM_rRE);
lp_subsetsum_SubsetSum_MITM_rH = _init_lp_subsetsum_SubsetSum_MITM_rH();
lean_mark_persistent(lp_subsetsum_SubsetSum_MITM_rH);
lp_subsetsum_SubsetSum_MITM_rK = _init_lp_subsetsum_SubsetSum_MITM_rK();
lean_mark_persistent(lp_subsetsum_SubsetSum_MITM_rK);
lp_subsetsum_SubsetSum_MITM_rL = _init_lp_subsetsum_SubsetSum_MITM_rL();
lean_mark_persistent(lp_subsetsum_SubsetSum_MITM_rL);
lp_subsetsum_SubsetSum_MITM_rI = _init_lp_subsetsum_SubsetSum_MITM_rI();
lean_mark_persistent(lp_subsetsum_SubsetSum_MITM_rI);
lp_subsetsum_SubsetSum_MITM_rJ = _init_lp_subsetsum_SubsetSum_MITM_rJ();
lean_mark_persistent(lp_subsetsum_SubsetSum_MITM_rJ);
lp_subsetsum_SubsetSum_MITM_rW = _init_lp_subsetsum_SubsetSum_MITM_rW();
lean_mark_persistent(lp_subsetsum_SubsetSum_MITM_rW);
lp_subsetsum_SubsetSum_MITM_rVI = _init_lp_subsetsum_SubsetSum_MITM_rVI();
lean_mark_persistent(lp_subsetsum_SubsetSum_MITM_rVI);
lp_subsetsum_SubsetSum_MITM_rVJ = _init_lp_subsetsum_SubsetSum_MITM_rVJ();
lean_mark_persistent(lp_subsetsum_SubsetSum_MITM_rVJ);
lp_subsetsum_SubsetSum_MITM_rAK = _init_lp_subsetsum_SubsetSum_MITM_rAK();
lean_mark_persistent(lp_subsetsum_SubsetSum_MITM_rAK);
lp_subsetsum_SubsetSum_MITM_rSRC = _init_lp_subsetsum_SubsetSum_MITM_rSRC();
lean_mark_persistent(lp_subsetsum_SubsetSum_MITM_rSRC);
lp_subsetsum_SubsetSum_MITM_rDST = _init_lp_subsetsum_SubsetSum_MITM_rDST();
lean_mark_persistent(lp_subsetsum_SubsetSum_MITM_rDST);
lp_subsetsum_SubsetSum_MITM_rT1 = _init_lp_subsetsum_SubsetSum_MITM_rT1();
lean_mark_persistent(lp_subsetsum_SubsetSum_MITM_rT1);
lp_subsetsum_SubsetSum_MITM_rT2 = _init_lp_subsetsum_SubsetSum_MITM_rT2();
lean_mark_persistent(lp_subsetsum_SubsetSum_MITM_rT2);
lp_subsetsum_SubsetSum_MITM_rT3 = _init_lp_subsetsum_SubsetSum_MITM_rT3();
lean_mark_persistent(lp_subsetsum_SubsetSum_MITM_rT3);
lp_subsetsum_SubsetSum_MITM_LROUND = _init_lp_subsetsum_SubsetSum_MITM_LROUND();
lean_mark_persistent(lp_subsetsum_SubsetSum_MITM_LROUND);
lp_subsetsum_SubsetSum_MITM_LMERGE = _init_lp_subsetsum_SubsetSum_MITM_LMERGE();
lean_mark_persistent(lp_subsetsum_SubsetSum_MITM_LMERGE);
lp_subsetsum_SubsetSum_MITM_LHAVEJ = _init_lp_subsetsum_SubsetSum_MITM_LHAVEJ();
lean_mark_persistent(lp_subsetsum_SubsetSum_MITM_LHAVEJ);
lp_subsetsum_SubsetSum_MITM_LBOTH = _init_lp_subsetsum_SubsetSum_MITM_LBOTH();
lean_mark_persistent(lp_subsetsum_SubsetSum_MITM_LBOTH);
lp_subsetsum_SubsetSum_MITM_LTAKEJ = _init_lp_subsetsum_SubsetSum_MITM_LTAKEJ();
lean_mark_persistent(lp_subsetsum_SubsetSum_MITM_LTAKEJ);
lp_subsetsum_SubsetSum_MITM_LTAKEL = _init_lp_subsetsum_SubsetSum_MITM_LTAKEL();
lean_mark_persistent(lp_subsetsum_SubsetSum_MITM_LTAKEL);
lp_subsetsum_SubsetSum_MITM_LSTEP = _init_lp_subsetsum_SubsetSum_MITM_LSTEP();
lean_mark_persistent(lp_subsetsum_SubsetSum_MITM_LSTEP);
lp_subsetsum_SubsetSum_MITM_LDRAINI = _init_lp_subsetsum_SubsetSum_MITM_LDRAINI();
lean_mark_persistent(lp_subsetsum_SubsetSum_MITM_LDRAINI);
lp_subsetsum_SubsetSum_MITM_LDRAINJ = _init_lp_subsetsum_SubsetSum_MITM_LDRAINJ();
lean_mark_persistent(lp_subsetsum_SubsetSum_MITM_LDRAINJ);
lp_subsetsum_SubsetSum_MITM_LDILOOP = _init_lp_subsetsum_SubsetSum_MITM_LDILOOP();
lean_mark_persistent(lp_subsetsum_SubsetSum_MITM_LDILOOP);
lp_subsetsum_SubsetSum_MITM_LDJLOOP = _init_lp_subsetsum_SubsetSum_MITM_LDJLOOP();
lean_mark_persistent(lp_subsetsum_SubsetSum_MITM_LDJLOOP);
lp_subsetsum_SubsetSum_MITM_LSWAP = _init_lp_subsetsum_SubsetSum_MITM_LSWAP();
lean_mark_persistent(lp_subsetsum_SubsetSum_MITM_LSWAP);
lp_subsetsum_SubsetSum_MITM_LCOPY = _init_lp_subsetsum_SubsetSum_MITM_LCOPY();
lean_mark_persistent(lp_subsetsum_SubsetSum_MITM_LCOPY);
lp_subsetsum_SubsetSum_MITM_LCOPY2 = _init_lp_subsetsum_SubsetSum_MITM_LCOPY2();
lean_mark_persistent(lp_subsetsum_SubsetSum_MITM_LCOPY2);
lp_subsetsum_SubsetSum_MITM_LSMALL = _init_lp_subsetsum_SubsetSum_MITM_LSMALL();
lean_mark_persistent(lp_subsetsum_SubsetSum_MITM_LSMALL);
lp_subsetsum_SubsetSum_MITM_LSMALLOK = _init_lp_subsetsum_SubsetSum_MITM_LSMALLOK();
lean_mark_persistent(lp_subsetsum_SubsetSum_MITM_LSMALLOK);
lp_subsetsum_SubsetSum_MITM_LSMALLOK2 = _init_lp_subsetsum_SubsetSum_MITM_LSMALLOK2();
lean_mark_persistent(lp_subsetsum_SubsetSum_MITM_LSMALLOK2);
lp_subsetsum_SubsetSum_MITM_LSMALLR = _init_lp_subsetsum_SubsetSum_MITM_LSMALLR();
lean_mark_persistent(lp_subsetsum_SubsetSum_MITM_LSMALLR);
lp_subsetsum_SubsetSum_MITM_prologue = _init_lp_subsetsum_SubsetSum_MITM_prologue();
lean_mark_persistent(lp_subsetsum_SubsetSum_MITM_prologue);
lp_subsetsum_SubsetSum_MITM_phaseA = _init_lp_subsetsum_SubsetSum_MITM_phaseA();
lean_mark_persistent(lp_subsetsum_SubsetSum_MITM_phaseA);
lp_subsetsum_SubsetSum_MITM_progPA = _init_lp_subsetsum_SubsetSum_MITM_progPA();
lean_mark_persistent(lp_subsetsum_SubsetSum_MITM_progPA);
lp_subsetsum_SubsetSum_MITM_LBIDX = _init_lp_subsetsum_SubsetSum_MITM_LBIDX();
lean_mark_persistent(lp_subsetsum_SubsetSum_MITM_LBIDX);
lp_subsetsum_SubsetSum_MITM_LBBIT = _init_lp_subsetsum_SubsetSum_MITM_LBBIT();
lean_mark_persistent(lp_subsetsum_SubsetSum_MITM_LBBIT);
lp_subsetsum_SubsetSum_MITM_LBBIT2 = _init_lp_subsetsum_SubsetSum_MITM_LBBIT2();
lean_mark_persistent(lp_subsetsum_SubsetSum_MITM_LBBIT2);
lp_subsetsum_SubsetSum_MITM_LADDK = _init_lp_subsetsum_SubsetSum_MITM_LADDK();
lean_mark_persistent(lp_subsetsum_SubsetSum_MITM_LADDK);
lp_subsetsum_SubsetSum_MITM_LBITNEXT = _init_lp_subsetsum_SubsetSum_MITM_LBITNEXT();
lean_mark_persistent(lp_subsetsum_SubsetSum_MITM_LBITNEXT);
lp_subsetsum_SubsetSum_MITM_LAFTER = _init_lp_subsetsum_SubsetSum_MITM_LAFTER();
lean_mark_persistent(lp_subsetsum_SubsetSum_MITM_LAFTER);
lp_subsetsum_SubsetSum_MITM_LBSRCH = _init_lp_subsetsum_SubsetSum_MITM_LBSRCH();
lean_mark_persistent(lp_subsetsum_SubsetSum_MITM_LBSRCH);
lp_subsetsum_SubsetSum_MITM_LSMID = _init_lp_subsetsum_SubsetSum_MITM_LSMID();
lean_mark_persistent(lp_subsetsum_SubsetSum_MITM_LSMID);
lp_subsetsum_SubsetSum_MITM_LGTR = _init_lp_subsetsum_SubsetSum_MITM_LGTR();
lean_mark_persistent(lp_subsetsum_SubsetSum_MITM_LGTR);
lp_subsetsum_SubsetSum_MITM_LLESS = _init_lp_subsetsum_SubsetSum_MITM_LLESS();
lean_mark_persistent(lp_subsetsum_SubsetSum_MITM_LLESS);
lp_subsetsum_SubsetSum_MITM_LNEXT = _init_lp_subsetsum_SubsetSum_MITM_LNEXT();
lean_mark_persistent(lp_subsetsum_SubsetSum_MITM_LNEXT);
lp_subsetsum_SubsetSum_MITM_phaseB = _init_lp_subsetsum_SubsetSum_MITM_phaseB();
lean_mark_persistent(lp_subsetsum_SubsetSum_MITM_phaseB);
lp_subsetsum_SubsetSum_MITM_LS2 = _init_lp_subsetsum_SubsetSum_MITM_LS2();
lean_mark_persistent(lp_subsetsum_SubsetSum_MITM_LS2);
lp_subsetsum_SubsetSum_MITM_LS3 = _init_lp_subsetsum_SubsetSum_MITM_LS3();
lean_mark_persistent(lp_subsetsum_SubsetSum_MITM_LS3);
lp_subsetsum_SubsetSum_MITM_LS2a = _init_lp_subsetsum_SubsetSum_MITM_LS2a();
lean_mark_persistent(lp_subsetsum_SubsetSum_MITM_LS2a);
lp_subsetsum_SubsetSum_MITM_LS2b = _init_lp_subsetsum_SubsetSum_MITM_LS2b();
lean_mark_persistent(lp_subsetsum_SubsetSum_MITM_LS2b);
lp_subsetsum_SubsetSum_MITM_LS2c = _init_lp_subsetsum_SubsetSum_MITM_LS2c();
lean_mark_persistent(lp_subsetsum_SubsetSum_MITM_LS2c);
lp_subsetsum_SubsetSum_MITM_LS3a = _init_lp_subsetsum_SubsetSum_MITM_LS3a();
lean_mark_persistent(lp_subsetsum_SubsetSum_MITM_LS3a);
lp_subsetsum_SubsetSum_MITM_LS3b = _init_lp_subsetsum_SubsetSum_MITM_LS3b();
lean_mark_persistent(lp_subsetsum_SubsetSum_MITM_LS3b);
lp_subsetsum_SubsetSum_MITM_LS3c = _init_lp_subsetsum_SubsetSum_MITM_LS3c();
lean_mark_persistent(lp_subsetsum_SubsetSum_MITM_LS3c);
lp_subsetsum_SubsetSum_MITM_LS3d = _init_lp_subsetsum_SubsetSum_MITM_LS3d();
lean_mark_persistent(lp_subsetsum_SubsetSum_MITM_LS3d);
lp_subsetsum_SubsetSum_MITM_LS3e = _init_lp_subsetsum_SubsetSum_MITM_LS3e();
lean_mark_persistent(lp_subsetsum_SubsetSum_MITM_LS3e);
lp_subsetsum_SubsetSum_MITM_LS3f = _init_lp_subsetsum_SubsetSum_MITM_LS3f();
lean_mark_persistent(lp_subsetsum_SubsetSum_MITM_LS3f);
lp_subsetsum_SubsetSum_MITM_smallN = _init_lp_subsetsum_SubsetSum_MITM_smallN();
lean_mark_persistent(lp_subsetsum_SubsetSum_MITM_smallN);
lp_subsetsum_SubsetSum_MITM_prog = _init_lp_subsetsum_SubsetSum_MITM_prog();
lean_mark_persistent(lp_subsetsum_SubsetSum_MITM_prog);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
