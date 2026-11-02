// Lean compiler output
// Module: Submission.Prog2
// Imports: public import Init public meta import Init public import Submission.Program public import Submission.ProgFacts
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
lean_object* lp_subsetsum_SubsetSum_MITM_jmp(lean_object*);
extern lean_object* lp_subsetsum_SubsetSum_MITM_phaseA;
extern lean_object* lp_subsetsum_SubsetSum_MITM_prologue;
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
extern lean_object* lp_subsetsum_SubsetSum_MITM_smallN;
lean_object* lp_subsetsum_SubsetSum_MITM_resolve(lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_LCANCH;
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_LCANLOOP;
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_LROUND2;
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_LMERGE2;
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_LHAVEJ2;
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_LBOTH2;
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_LTAKEJ2;
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_LTAKEL2;
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_LSTEP2;
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_LDRAINI2;
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_LDILOOP2;
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_LDJLOOP2;
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_LSWAP2;
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_LDRAINJ2;
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_LSCAN;
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_LSCANLESS;
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_LSCANGTR;
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_LSCANDEC;
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_LPHASEA2;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_canon___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(20) << 1) | 1)),((lean_object*)(((size_t)(8) << 1) | 1)),((lean_object*)(((size_t)(7) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_canon___closed__0 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_canon___closed__0_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_canon___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_canon___closed__0_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_canon___closed__1 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_canon___closed__1_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_canon___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(20) << 1) | 1)),((lean_object*)(((size_t)(20) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_canon___closed__2 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_canon___closed__2_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_canon___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_canon___closed__2_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_canon___closed__3 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_canon___closed__3_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_canon___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(22) << 1) | 1)),((lean_object*)(((size_t)(20) << 1) | 1)),((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_canon___closed__4 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_canon___closed__4_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_canon___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_canon___closed__4_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_canon___closed__5 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_canon___closed__5_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_canon___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(20) << 1) | 1)),((lean_object*)(((size_t)(18) << 1) | 1)),((lean_object*)(((size_t)(70) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_canon___closed__6 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_canon___closed__6_value;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_canon___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_canon___closed__7;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_canon___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(70) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_canon___closed__8 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_canon___closed__8_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_canon___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(12) << 1) | 1)),((lean_object*)(((size_t)(12) << 1) | 1)),((lean_object*)(((size_t)(12) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_canon___closed__9 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_canon___closed__9_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_canon___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_canon___closed__9_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_canon___closed__10 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_canon___closed__10_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_canon___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(71) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_canon___closed__11 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_canon___closed__11_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_canon___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(21) << 1) | 1)),((lean_object*)(((size_t)(18) << 1) | 1)),((lean_object*)(((size_t)(12) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_canon___closed__12 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_canon___closed__12_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_canon___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_canon___closed__12_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_canon___closed__13 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_canon___closed__13_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_canon___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 11}, .m_objs = {((lean_object*)(((size_t)(15) << 1) | 1)),((lean_object*)(((size_t)(21) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_canon___closed__14 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_canon___closed__14_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_canon___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_canon___closed__14_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_canon___closed__15 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_canon___closed__15_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_canon___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(21) << 1) | 1)),((lean_object*)(((size_t)(20) << 1) | 1)),((lean_object*)(((size_t)(12) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_canon___closed__16 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_canon___closed__16_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_canon___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_canon___closed__16_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_canon___closed__17 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_canon___closed__17_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_canon___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 12}, .m_objs = {((lean_object*)(((size_t)(21) << 1) | 1)),((lean_object*)(((size_t)(15) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_canon___closed__18 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_canon___closed__18_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_canon___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_canon___closed__18_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_canon___closed__19 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_canon___closed__19_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_canon___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(12) << 1) | 1)),((lean_object*)(((size_t)(12) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_canon___closed__20 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_canon___closed__20_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_canon___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_canon___closed__20_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_canon___closed__21 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_canon___closed__21_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_canon___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(12) << 1) | 1)),((lean_object*)(((size_t)(11) << 1) | 1)),((lean_object*)(((size_t)(71) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_canon___closed__22 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_canon___closed__22_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_canon___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(88) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_canon___closed__23 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_canon___closed__23_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_canon___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_canon___closed__23_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_canon___closed__24 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_canon___closed__24_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_canon___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_canon___closed__22_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_canon___closed__24_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_canon___closed__25 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_canon___closed__25_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_canon___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_canon___closed__21_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_canon___closed__25_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_canon___closed__26 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_canon___closed__26_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_canon___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_canon___closed__19_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_canon___closed__26_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_canon___closed__27 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_canon___closed__27_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_canon___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_canon___closed__17_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_canon___closed__27_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_canon___closed__28 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_canon___closed__28_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_canon___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_canon___closed__15_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_canon___closed__28_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_canon___closed__29 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_canon___closed__29_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_canon___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_canon___closed__13_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_canon___closed__29_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_canon___closed__30 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_canon___closed__30_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_canon___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_canon___closed__11_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_canon___closed__30_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_canon___closed__31 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_canon___closed__31_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_canon___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_canon___closed__10_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_canon___closed__31_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_canon___closed__32 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_canon___closed__32_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_canon___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_canon___closed__8_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_canon___closed__32_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_canon___closed__33 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_canon___closed__33_value;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_canon___closed__34_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_canon___closed__34;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_canon___closed__35_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_canon___closed__35;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_canon___closed__36_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_canon___closed__36;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_canon___closed__37_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_canon___closed__37;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_canon___closed__38_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_canon___closed__38;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_canon___closed__39_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_canon___closed__39;
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_canon;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(18) << 1) | 1)),((lean_object*)(((size_t)(19) << 1) | 1)),((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__0 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__0_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__0_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__1 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__1_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(19) << 1) | 1)),((lean_object*)(((size_t)(20) << 1) | 1)),((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__2 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__2_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__2_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__3 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__3_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__4 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__4_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA2___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__4_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__5 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__5_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA2___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(21) << 1) | 1)),((lean_object*)(((size_t)(4) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__6 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__6_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA2___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__6_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__7 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__7_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA2___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)(((size_t)(21) << 1) | 1)),((lean_object*)(((size_t)(72) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__8 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__8_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA2___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__8_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__9 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__9_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA2___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__7_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__9_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__10 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__10_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA2___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__5_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__10_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__11 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__11_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA2___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__3_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__11_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__12 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__12_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA2___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__1_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__12_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__13 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__13_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA2___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(14) << 1) | 1)),((lean_object*)(((size_t)(14) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__14 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__14_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA2___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__14_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__15 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__15_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA2___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(13) << 1) | 1)),((lean_object*)(((size_t)(11) << 1) | 1)),((lean_object*)(((size_t)(81) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__16 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__16_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA2___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(82) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__17 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__17_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA2___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(11) << 1) | 1)),((lean_object*)(((size_t)(11) << 1) | 1)),((lean_object*)(((size_t)(11) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__18 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__18_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA2___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__18_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__19 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__19_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA2___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(20) << 1) | 1)),((lean_object*)(((size_t)(18) << 1) | 1)),((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__20 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__20_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA2___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__20_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__21 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__21_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA2___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__21_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__13_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__22 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__22_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA2___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__19_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__22_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__23 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__23_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA2___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__17_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__23_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__24 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__24_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA2___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__16_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__24_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__25 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__25_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA2___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__15_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__25_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__26 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__26_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA2___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 11}, .m_objs = {((lean_object*)(((size_t)(16) << 1) | 1)),((lean_object*)(((size_t)(21) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__27 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__27_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA2___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__27_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__28 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__28_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA2___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(16) << 1) | 1)),((lean_object*)(((size_t)(16) << 1) | 1)),((lean_object*)(((size_t)(17) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__29 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__29_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA2___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__29_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__30 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__30_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA2___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(20) << 1) | 1)),((lean_object*)(((size_t)(19) << 1) | 1)),((lean_object*)(((size_t)(14) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__31 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__31_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA2___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__31_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__32 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__32_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA2___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 12}, .m_objs = {((lean_object*)(((size_t)(20) << 1) | 1)),((lean_object*)(((size_t)(16) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__33 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__33_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA2___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__33_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__34 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__34_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA2___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(13) << 1) | 1)),((lean_object*)(((size_t)(13) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__35 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__35_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA2___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__35_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__36 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__36_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA2___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__36_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__26_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__37 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__37_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA2___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__34_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__37_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__38 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__38_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA2___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__32_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__38_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__39 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__39_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA2___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__30_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__39_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__40 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__40_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA2___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__28_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__40_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__41 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__41_value;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA2___closed__42_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__42;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA2___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(83) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__43 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__43_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA2___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(81) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__44 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__44_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA2___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(21) << 1) | 1)),((lean_object*)(((size_t)(18) << 1) | 1)),((lean_object*)(((size_t)(13) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__45 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__45_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA2___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__45_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__46 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__46_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA2___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__46_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__41_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__47 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__47_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA2___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__44_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__47_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__48 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__48_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA2___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__43_value),((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__48_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__49 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__49_value;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA2___closed__50_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__50;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA2___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(21) << 1) | 1)),((lean_object*)(((size_t)(19) << 1) | 1)),((lean_object*)(((size_t)(14) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__51 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__51_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA2___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__51_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__52 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__52_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA2___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(12) << 1) | 1)),((lean_object*)(((size_t)(11) << 1) | 1)),((lean_object*)(((size_t)(80) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__53 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__53_value;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA2___closed__54_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__54;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA2___closed__55_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__55;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA2___closed__56_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__56;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA2___closed__57_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__57;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA2___closed__58_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__58;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA2___closed__59_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(80) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__59 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__59_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA2___closed__60_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(20) << 1) | 1)),((lean_object*)(((size_t)(18) << 1) | 1)),((lean_object*)(((size_t)(12) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__60 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__60_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA2___closed__61_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__60_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__61 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__61_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA2___closed__62_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 11}, .m_objs = {((lean_object*)(((size_t)(15) << 1) | 1)),((lean_object*)(((size_t)(20) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__62 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__62_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA2___closed__63_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__62_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__63 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__63_value;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA2___closed__64_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__64;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA2___closed__65_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__65;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA2___closed__66_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__66;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA2___closed__67_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__67;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA2___closed__68_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__68;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA2___closed__69_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(78) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__69 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__69_value;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA2___closed__70_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__70;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA2___closed__71_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(79) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__71 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__71_value;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA2___closed__72_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__72;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA2___closed__73_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__73;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA2___closed__74_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__74;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA2___closed__75_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__75;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA2___closed__76_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__76;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA2___closed__77_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__77;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA2___closed__78_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(77) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__78 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__78_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA2___closed__79_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 12}, .m_objs = {((lean_object*)(((size_t)(20) << 1) | 1)),((lean_object*)(((size_t)(15) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__79 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__79_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA2___closed__80_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__79_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__80 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__80_value;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA2___closed__81_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__81;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA2___closed__82_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__82;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA2___closed__83_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__83;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA2___closed__84_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__84;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA2___closed__85_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__85;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA2___closed__86_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(76) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__86 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__86_value;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA2___closed__87_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__87;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA2___closed__88_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__88;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA2___closed__89_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__89;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA2___closed__90_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__90;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA2___closed__91_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__91;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA2___closed__92_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(16) << 1) | 1)),((lean_object*)(((size_t)(15) << 1) | 1)),((lean_object*)(((size_t)(76) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__92 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__92_value;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA2___closed__93_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__93;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA2___closed__94_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__94;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA2___closed__95_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__95;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA2___closed__96_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__96;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA2___closed__97_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__97;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA2___closed__98_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(74) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__98 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__98_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA2___closed__99_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(12) << 1) | 1)),((lean_object*)(((size_t)(11) << 1) | 1)),((lean_object*)(((size_t)(75) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__99 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__99_value;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA2___closed__100_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__100;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA2___closed__101_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(75) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__101 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__101_value;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA2___closed__102_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__102;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA2___closed__103_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__103;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA2___closed__104_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__104;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA2___closed__105_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__105;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA2___closed__106_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__106;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA2___closed__107_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(14) << 1) | 1)),((lean_object*)(((size_t)(14) << 1) | 1)),((lean_object*)(((size_t)(14) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__107 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__107_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA2___closed__108_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__107_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__108 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__108_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA2___closed__109_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(73) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__109 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__109_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA2___closed__110_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(13) << 1) | 1)),((lean_object*)(((size_t)(11) << 1) | 1)),((lean_object*)(((size_t)(74) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__110 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__110_value;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA2___closed__111_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__111;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA2___closed__112_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__112;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA2___closed__113_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__113;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA2___closed__114_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__114;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA2___closed__115_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__115;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA2___closed__116_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(20) << 1) | 1)),((lean_object*)(((size_t)(8) << 1) | 1)),((lean_object*)(((size_t)(9) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__116 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__116_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA2___closed__117_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__116_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__117 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__117_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA2___closed__118_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(20) << 1) | 1)),((lean_object*)(((size_t)(20) << 1) | 1)),((lean_object*)(((size_t)(10) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__118 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__118_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA2___closed__119_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__118_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__119 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__119_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA2___closed__120_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 11}, .m_objs = {((lean_object*)(((size_t)(17) << 1) | 1)),((lean_object*)(((size_t)(20) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__120 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__120_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA2___closed__121_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__120_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__121 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__121_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA2___closed__122_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(13) << 1) | 1)),((lean_object*)(((size_t)(13) << 1) | 1)),((lean_object*)(((size_t)(13) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__122 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__122_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA2___closed__123_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__122_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__123 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__123_value;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA2___closed__124_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__124;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA2___closed__125_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__125;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA2___closed__126_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__126;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA2___closed__127_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__127;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA2___closed__128_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__128;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA2___closed__129_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 12}, .m_objs = {((lean_object*)(((size_t)(20) << 1) | 1)),((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__129 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__129_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA2___closed__130_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__129_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__130 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__130_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA2___closed__131_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__131 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__131_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA2___closed__132_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__131_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__132 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__132_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA2___closed__133_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(72) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__133 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__133_value;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA2___closed__134_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__134;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA2___closed__135_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__135;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA2___closed__136_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__136;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA2___closed__137_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__137;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA2___closed__138_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(18) << 1) | 1)),((lean_object*)(((size_t)(22) << 1) | 1)),((lean_object*)(((size_t)(11) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__138 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__138_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA2___closed__139_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__138_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__139 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__139_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA2___closed__140_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(18) << 1) | 1)),((lean_object*)(((size_t)(18) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__140 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__140_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA2___closed__141_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__140_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__141 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__141_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA2___closed__142_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(19) << 1) | 1)),((lean_object*)(((size_t)(18) << 1) | 1)),((lean_object*)(((size_t)(20) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__142 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__142_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA2___closed__143_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__142_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__143 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__143_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA2___closed__144_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(19) << 1) | 1)),((lean_object*)(((size_t)(19) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__144 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__144_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA2___closed__145_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__144_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__145 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__145_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA2___closed__146_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(11) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__146 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__146_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA2___closed__147_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__146_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__147 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__147_value;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA2___closed__148_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__148;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA2___closed__149_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__149;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA2___closed__150_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__150;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA2___closed__151_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__151;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA2___closed__152_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__152;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA2___closed__153_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(5) << 1) | 1)),((lean_object*)(((size_t)(11) << 1) | 1)),((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__153 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__153_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA2___closed__154_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__153_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__154 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__154_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA2___closed__155_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(4) << 1) | 1)),((lean_object*)(((size_t)(7) << 1) | 1)),((lean_object*)(((size_t)(9) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__155 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__155_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA2___closed__156_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__155_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__156 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__156_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA2___closed__157_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(20) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__157 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__157_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA2___closed__158_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__157_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__158 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__158_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA2___closed__159_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 9}, .m_objs = {((lean_object*)(((size_t)(20) << 1) | 1)),((lean_object*)(((size_t)(20) << 1) | 1)),((lean_object*)(((size_t)(4) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__159 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__159_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_phaseA2___closed__160_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__159_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__160 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__160_value;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA2___closed__161_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__161;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA2___closed__162_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__162;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA2___closed__163_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__163;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_phaseA2___closed__164_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2___closed__164;
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_phaseA2;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_scanB___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(13) << 1) | 1)),((lean_object*)(((size_t)(11) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_scanB___closed__0 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_scanB___closed__0_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_scanB___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_scanB___closed__0_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_scanB___closed__1 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_scanB___closed__1_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_scanB___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(84) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_scanB___closed__2 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_scanB___closed__2_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_scanB___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(20) << 1) | 1)),((lean_object*)(((size_t)(22) << 1) | 1)),((lean_object*)(((size_t)(12) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_scanB___closed__3 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_scanB___closed__3_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_scanB___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_scanB___closed__3_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_scanB___closed__4 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_scanB___closed__4_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_scanB___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(14) << 1) | 1)),((lean_object*)(((size_t)(15) << 1) | 1)),((lean_object*)(((size_t)(16) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_scanB___closed__5 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_scanB___closed__5_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_scanB___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_scanB___closed__5_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_scanB___closed__6 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_scanB___closed__6_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_scanB___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(14) << 1) | 1)),((lean_object*)(((size_t)(17) << 1) | 1)),((lean_object*)(((size_t)(85) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_scanB___closed__7 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_scanB___closed__7_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_scanB___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(17) << 1) | 1)),((lean_object*)(((size_t)(14) << 1) | 1)),((lean_object*)(((size_t)(86) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_scanB___closed__8 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_scanB___closed__8_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_scanB___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(15) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_scanB___closed__9 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_scanB___closed__9_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_scanB___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(85) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_scanB___closed__10 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_scanB___closed__10_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_scanB___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(12) << 1) | 1)),((lean_object*)(((size_t)(5) << 1) | 1)),((lean_object*)(((size_t)(84) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_scanB___closed__11 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_scanB___closed__11_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_scanB___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(16) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_scanB___closed__12 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_scanB___closed__12_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_scanB___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(86) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_scanB___closed__13 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_scanB___closed__13_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_scanB___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)(((size_t)(13) << 1) | 1)),((lean_object*)(((size_t)(87) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_scanB___closed__14 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_scanB___closed__14_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_scanB___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(87) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_scanB___closed__15 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_scanB___closed__15_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_scanB___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(13) << 1) | 1)),((lean_object*)(((size_t)(13) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_scanB___closed__16 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_scanB___closed__16_value;
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_scanB___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_subsetsum_SubsetSum_MITM_scanB___closed__16_value)}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_scanB___closed__17 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_scanB___closed__17_value;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_scanB___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_scanB___closed__18;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_scanB___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_scanB___closed__19;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_scanB___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_scanB___closed__20;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_scanB___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_scanB___closed__21;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_scanB___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_scanB___closed__22;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_scanB___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_scanB___closed__23;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_scanB___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_scanB___closed__24;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_scanB___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_scanB___closed__25;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_scanB___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_scanB___closed__26;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_scanB___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_scanB___closed__27;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_scanB___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_scanB___closed__28;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_scanB___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_scanB___closed__29;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_scanB___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_scanB___closed__30;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_scanB___closed__31_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_scanB___closed__31;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_scanB___closed__32_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_scanB___closed__32;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_scanB___closed__33_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_scanB___closed__33;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_scanB___closed__34_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_scanB___closed__34;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_scanB___closed__35_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_scanB___closed__35;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_scanB___closed__36_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_scanB___closed__36;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_scanB___closed__37_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_scanB___closed__37;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_scanB___closed__38_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_scanB___closed__38;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_scanB___closed__39_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_scanB___closed__39;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_scanB___closed__40_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_scanB___closed__40;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_scanB___closed__41_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_scanB___closed__41;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_scanB___closed__42_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_scanB___closed__42;
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_scanB;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_prog2Lines___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_prog2Lines___closed__0;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_prog2Lines___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_prog2Lines___closed__1;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_prog2Lines___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_prog2Lines___closed__2;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_prog2Lines___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_prog2Lines___closed__3;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_prog2Lines___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_prog2Lines___closed__4;
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_prog2Lines;
static lean_once_cell_t lp_subsetsum_SubsetSum_MITM_prog2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_subsetsum_SubsetSum_MITM_prog2___closed__0;
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_prog2;
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_LCANCH(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = lean_unsigned_to_nat(70u);
return v___x_1_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_LCANLOOP(void){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_unsigned_to_nat(71u);
return v___x_2_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_LROUND2(void){
_start:
{
lean_object* v___x_3_; 
v___x_3_ = lean_unsigned_to_nat(72u);
return v___x_3_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_LMERGE2(void){
_start:
{
lean_object* v___x_4_; 
v___x_4_ = lean_unsigned_to_nat(73u);
return v___x_4_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_LHAVEJ2(void){
_start:
{
lean_object* v___x_5_; 
v___x_5_ = lean_unsigned_to_nat(74u);
return v___x_5_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_LBOTH2(void){
_start:
{
lean_object* v___x_6_; 
v___x_6_ = lean_unsigned_to_nat(75u);
return v___x_6_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_LTAKEJ2(void){
_start:
{
lean_object* v___x_7_; 
v___x_7_ = lean_unsigned_to_nat(76u);
return v___x_7_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_LTAKEL2(void){
_start:
{
lean_object* v___x_8_; 
v___x_8_ = lean_unsigned_to_nat(77u);
return v___x_8_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_LSTEP2(void){
_start:
{
lean_object* v___x_9_; 
v___x_9_ = lean_unsigned_to_nat(78u);
return v___x_9_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_LDRAINI2(void){
_start:
{
lean_object* v___x_10_; 
v___x_10_ = lean_unsigned_to_nat(79u);
return v___x_10_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_LDILOOP2(void){
_start:
{
lean_object* v___x_11_; 
v___x_11_ = lean_unsigned_to_nat(80u);
return v___x_11_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_LDJLOOP2(void){
_start:
{
lean_object* v___x_12_; 
v___x_12_ = lean_unsigned_to_nat(81u);
return v___x_12_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_LSWAP2(void){
_start:
{
lean_object* v___x_13_; 
v___x_13_ = lean_unsigned_to_nat(82u);
return v___x_13_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_LDRAINJ2(void){
_start:
{
lean_object* v___x_14_; 
v___x_14_ = lean_unsigned_to_nat(83u);
return v___x_14_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_LSCAN(void){
_start:
{
lean_object* v___x_15_; 
v___x_15_ = lean_unsigned_to_nat(84u);
return v___x_15_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_LSCANLESS(void){
_start:
{
lean_object* v___x_16_; 
v___x_16_ = lean_unsigned_to_nat(85u);
return v___x_16_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_LSCANGTR(void){
_start:
{
lean_object* v___x_17_; 
v___x_17_ = lean_unsigned_to_nat(86u);
return v___x_17_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_LSCANDEC(void){
_start:
{
lean_object* v___x_18_; 
v___x_18_ = lean_unsigned_to_nat(87u);
return v___x_18_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_LPHASEA2(void){
_start:
{
lean_object* v___x_19_; 
v___x_19_ = lean_unsigned_to_nat(88u);
return v___x_19_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_canon___closed__7(void){
_start:
{
lean_object* v___x_41_; lean_object* v___x_42_; 
v___x_41_ = lean_unsigned_to_nat(88u);
v___x_42_ = lp_subsetsum_SubsetSum_MITM_jmp(v___x_41_);
return v___x_42_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_canon___closed__34(void){
_start:
{
lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; 
v___x_114_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_canon___closed__33));
v___x_115_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_canon___closed__7, &lp_subsetsum_SubsetSum_MITM_canon___closed__7_once, _init_lp_subsetsum_SubsetSum_MITM_canon___closed__7);
v___x_116_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_116_, 0, v___x_115_);
lean_ctor_set(v___x_116_, 1, v___x_114_);
return v___x_116_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_canon___closed__35(void){
_start:
{
lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; 
v___x_117_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_canon___closed__34, &lp_subsetsum_SubsetSum_MITM_canon___closed__34_once, _init_lp_subsetsum_SubsetSum_MITM_canon___closed__34);
v___x_118_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_canon___closed__6));
v___x_119_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_119_, 0, v___x_118_);
lean_ctor_set(v___x_119_, 1, v___x_117_);
return v___x_119_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_canon___closed__36(void){
_start:
{
lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; 
v___x_120_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_canon___closed__35, &lp_subsetsum_SubsetSum_MITM_canon___closed__35_once, _init_lp_subsetsum_SubsetSum_MITM_canon___closed__35);
v___x_121_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_canon___closed__5));
v___x_122_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_122_, 0, v___x_121_);
lean_ctor_set(v___x_122_, 1, v___x_120_);
return v___x_122_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_canon___closed__37(void){
_start:
{
lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v___x_125_; 
v___x_123_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_canon___closed__36, &lp_subsetsum_SubsetSum_MITM_canon___closed__36_once, _init_lp_subsetsum_SubsetSum_MITM_canon___closed__36);
v___x_124_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_canon___closed__3));
v___x_125_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_125_, 0, v___x_124_);
lean_ctor_set(v___x_125_, 1, v___x_123_);
return v___x_125_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_canon___closed__38(void){
_start:
{
lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; 
v___x_126_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_canon___closed__37, &lp_subsetsum_SubsetSum_MITM_canon___closed__37_once, _init_lp_subsetsum_SubsetSum_MITM_canon___closed__37);
v___x_127_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_canon___closed__3));
v___x_128_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_128_, 0, v___x_127_);
lean_ctor_set(v___x_128_, 1, v___x_126_);
return v___x_128_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_canon___closed__39(void){
_start:
{
lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; 
v___x_129_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_canon___closed__38, &lp_subsetsum_SubsetSum_MITM_canon___closed__38_once, _init_lp_subsetsum_SubsetSum_MITM_canon___closed__38);
v___x_130_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_canon___closed__1));
v___x_131_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_131_, 0, v___x_130_);
lean_ctor_set(v___x_131_, 1, v___x_129_);
return v___x_131_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_canon(void){
_start:
{
lean_object* v___x_132_; 
v___x_132_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_canon___closed__39, &lp_subsetsum_SubsetSum_MITM_canon___closed__39_once, _init_lp_subsetsum_SubsetSum_MITM_canon___closed__39);
return v___x_132_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__42(void){
_start:
{
lean_object* v___x_252_; lean_object* v___x_253_; 
v___x_252_ = lean_unsigned_to_nat(82u);
v___x_253_ = lp_subsetsum_SubsetSum_MITM_jmp(v___x_252_);
return v___x_253_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__50(void){
_start:
{
lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v_y_275_; 
v___x_273_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseA2___closed__49));
v___x_274_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__42, &lp_subsetsum_SubsetSum_MITM_phaseA2___closed__42_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__42);
v_y_275_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_y_275_, 0, v___x_274_);
lean_ctor_set(v_y_275_, 1, v___x_273_);
return v_y_275_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__54(void){
_start:
{
lean_object* v_y_286_; lean_object* v___x_287_; lean_object* v___x_288_; 
v_y_286_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__50, &lp_subsetsum_SubsetSum_MITM_phaseA2___closed__50_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__50);
v___x_287_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseA2___closed__53));
v___x_288_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_288_, 0, v___x_287_);
lean_ctor_set(v___x_288_, 1, v_y_286_);
return v___x_288_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__55(void){
_start:
{
lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; 
v___x_289_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__54, &lp_subsetsum_SubsetSum_MITM_phaseA2___closed__54_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__54);
v___x_290_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseA2___closed__15));
v___x_291_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_291_, 0, v___x_290_);
lean_ctor_set(v___x_291_, 1, v___x_289_);
return v___x_291_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__56(void){
_start:
{
lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; 
v___x_292_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__55, &lp_subsetsum_SubsetSum_MITM_phaseA2___closed__55_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__55);
v___x_293_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_canon___closed__21));
v___x_294_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_294_, 0, v___x_293_);
lean_ctor_set(v___x_294_, 1, v___x_292_);
return v___x_294_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__57(void){
_start:
{
lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; 
v___x_295_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__56, &lp_subsetsum_SubsetSum_MITM_phaseA2___closed__56_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__56);
v___x_296_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_canon___closed__19));
v___x_297_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_297_, 0, v___x_296_);
lean_ctor_set(v___x_297_, 1, v___x_295_);
return v___x_297_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__58(void){
_start:
{
lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v_y_300_; 
v___x_298_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__57, &lp_subsetsum_SubsetSum_MITM_phaseA2___closed__57_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__57);
v___x_299_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseA2___closed__52));
v_y_300_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_y_300_, 0, v___x_299_);
lean_ctor_set(v_y_300_, 1, v___x_298_);
return v_y_300_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__64(void){
_start:
{
lean_object* v_y_314_; lean_object* v___x_315_; lean_object* v___x_316_; 
v_y_314_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__58, &lp_subsetsum_SubsetSum_MITM_phaseA2___closed__58_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__58);
v___x_315_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseA2___closed__63));
v___x_316_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_316_, 0, v___x_315_);
lean_ctor_set(v___x_316_, 1, v_y_314_);
return v___x_316_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__65(void){
_start:
{
lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v___x_319_; 
v___x_317_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__64, &lp_subsetsum_SubsetSum_MITM_phaseA2___closed__64_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__64);
v___x_318_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseA2___closed__61));
v___x_319_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_319_, 0, v___x_318_);
lean_ctor_set(v___x_319_, 1, v___x_317_);
return v___x_319_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__66(void){
_start:
{
lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v___x_322_; 
v___x_320_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__65, &lp_subsetsum_SubsetSum_MITM_phaseA2___closed__65_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__65);
v___x_321_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseA2___closed__59));
v___x_322_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_322_, 0, v___x_321_);
lean_ctor_set(v___x_322_, 1, v___x_320_);
return v___x_322_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__67(void){
_start:
{
lean_object* v___x_323_; lean_object* v___x_324_; lean_object* v___x_325_; 
v___x_323_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__66, &lp_subsetsum_SubsetSum_MITM_phaseA2___closed__66_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__66);
v___x_324_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__42, &lp_subsetsum_SubsetSum_MITM_phaseA2___closed__42_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__42);
v___x_325_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_325_, 0, v___x_324_);
lean_ctor_set(v___x_325_, 1, v___x_323_);
return v___x_325_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__68(void){
_start:
{
lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v_y_328_; 
v___x_326_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__67, &lp_subsetsum_SubsetSum_MITM_phaseA2___closed__67_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__67);
v___x_327_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseA2___closed__53));
v_y_328_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_y_328_, 0, v___x_327_);
lean_ctor_set(v_y_328_, 1, v___x_326_);
return v_y_328_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__70(void){
_start:
{
lean_object* v___x_331_; lean_object* v___x_332_; 
v___x_331_ = lean_unsigned_to_nat(73u);
v___x_332_ = lp_subsetsum_SubsetSum_MITM_jmp(v___x_331_);
return v___x_332_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__72(void){
_start:
{
lean_object* v_y_335_; lean_object* v___x_336_; lean_object* v___x_337_; 
v_y_335_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__68, &lp_subsetsum_SubsetSum_MITM_phaseA2___closed__68_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__68);
v___x_336_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseA2___closed__71));
v___x_337_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_337_, 0, v___x_336_);
lean_ctor_set(v___x_337_, 1, v_y_335_);
return v___x_337_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__73(void){
_start:
{
lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_340_; 
v___x_338_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__72, &lp_subsetsum_SubsetSum_MITM_phaseA2___closed__72_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__72);
v___x_339_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__70, &lp_subsetsum_SubsetSum_MITM_phaseA2___closed__70_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__70);
v___x_340_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_340_, 0, v___x_339_);
lean_ctor_set(v___x_340_, 1, v___x_338_);
return v___x_340_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__74(void){
_start:
{
lean_object* v___x_341_; lean_object* v___x_342_; lean_object* v___x_343_; 
v___x_341_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__73, &lp_subsetsum_SubsetSum_MITM_phaseA2___closed__73_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__73);
v___x_342_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseA2___closed__15));
v___x_343_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_343_, 0, v___x_342_);
lean_ctor_set(v___x_343_, 1, v___x_341_);
return v___x_343_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__75(void){
_start:
{
lean_object* v___x_344_; lean_object* v___x_345_; lean_object* v___x_346_; 
v___x_344_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__74, &lp_subsetsum_SubsetSum_MITM_phaseA2___closed__74_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__74);
v___x_345_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseA2___closed__69));
v___x_346_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_346_, 0, v___x_345_);
lean_ctor_set(v___x_346_, 1, v___x_344_);
return v___x_346_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__76(void){
_start:
{
lean_object* v___x_347_; lean_object* v___x_348_; lean_object* v_y_349_; 
v___x_347_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__75, &lp_subsetsum_SubsetSum_MITM_phaseA2___closed__75_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__75);
v___x_348_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_canon___closed__21));
v_y_349_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_y_349_, 0, v___x_348_);
lean_ctor_set(v_y_349_, 1, v___x_347_);
return v_y_349_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__77(void){
_start:
{
lean_object* v___x_350_; lean_object* v___x_351_; 
v___x_350_ = lean_unsigned_to_nat(78u);
v___x_351_ = lp_subsetsum_SubsetSum_MITM_jmp(v___x_350_);
return v___x_351_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__81(void){
_start:
{
lean_object* v_y_359_; lean_object* v___x_360_; lean_object* v___x_361_; 
v_y_359_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__76, &lp_subsetsum_SubsetSum_MITM_phaseA2___closed__76_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__76);
v___x_360_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseA2___closed__80));
v___x_361_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_361_, 0, v___x_360_);
lean_ctor_set(v___x_361_, 1, v_y_359_);
return v___x_361_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__82(void){
_start:
{
lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; 
v___x_362_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__81, &lp_subsetsum_SubsetSum_MITM_phaseA2___closed__81_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__81);
v___x_363_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseA2___closed__32));
v___x_364_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_364_, 0, v___x_363_);
lean_ctor_set(v___x_364_, 1, v___x_362_);
return v___x_364_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__83(void){
_start:
{
lean_object* v___x_365_; lean_object* v___x_366_; lean_object* v___x_367_; 
v___x_365_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__82, &lp_subsetsum_SubsetSum_MITM_phaseA2___closed__82_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__82);
v___x_366_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseA2___closed__78));
v___x_367_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_367_, 0, v___x_366_);
lean_ctor_set(v___x_367_, 1, v___x_365_);
return v___x_367_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__84(void){
_start:
{
lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v_y_370_; 
v___x_368_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__83, &lp_subsetsum_SubsetSum_MITM_phaseA2___closed__83_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__83);
v___x_369_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__77, &lp_subsetsum_SubsetSum_MITM_phaseA2___closed__77_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__77);
v_y_370_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_y_370_, 0, v___x_369_);
lean_ctor_set(v_y_370_, 1, v___x_368_);
return v_y_370_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__85(void){
_start:
{
lean_object* v___x_371_; lean_object* v___x_372_; 
v___x_371_ = lean_unsigned_to_nat(77u);
v___x_372_ = lp_subsetsum_SubsetSum_MITM_jmp(v___x_371_);
return v___x_372_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__87(void){
_start:
{
lean_object* v_y_375_; lean_object* v___x_376_; lean_object* v___x_377_; 
v_y_375_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__84, &lp_subsetsum_SubsetSum_MITM_phaseA2___closed__84_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__84);
v___x_376_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseA2___closed__36));
v___x_377_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_377_, 0, v___x_376_);
lean_ctor_set(v___x_377_, 1, v_y_375_);
return v___x_377_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__88(void){
_start:
{
lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v___x_380_; 
v___x_378_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__87, &lp_subsetsum_SubsetSum_MITM_phaseA2___closed__87_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__87);
v___x_379_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseA2___closed__34));
v___x_380_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_380_, 0, v___x_379_);
lean_ctor_set(v___x_380_, 1, v___x_378_);
return v___x_380_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__89(void){
_start:
{
lean_object* v___x_381_; lean_object* v___x_382_; lean_object* v___x_383_; 
v___x_381_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__88, &lp_subsetsum_SubsetSum_MITM_phaseA2___closed__88_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__88);
v___x_382_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseA2___closed__32));
v___x_383_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_383_, 0, v___x_382_);
lean_ctor_set(v___x_383_, 1, v___x_381_);
return v___x_383_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__90(void){
_start:
{
lean_object* v___x_384_; lean_object* v___x_385_; lean_object* v___x_386_; 
v___x_384_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__89, &lp_subsetsum_SubsetSum_MITM_phaseA2___closed__89_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__89);
v___x_385_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseA2___closed__86));
v___x_386_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_386_, 0, v___x_385_);
lean_ctor_set(v___x_386_, 1, v___x_384_);
return v___x_386_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__91(void){
_start:
{
lean_object* v___x_387_; lean_object* v___x_388_; lean_object* v_y_389_; 
v___x_387_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__90, &lp_subsetsum_SubsetSum_MITM_phaseA2___closed__90_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__90);
v___x_388_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__85, &lp_subsetsum_SubsetSum_MITM_phaseA2___closed__85_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__85);
v_y_389_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_y_389_, 0, v___x_388_);
lean_ctor_set(v_y_389_, 1, v___x_387_);
return v_y_389_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__93(void){
_start:
{
lean_object* v_y_394_; lean_object* v___x_395_; lean_object* v___x_396_; 
v_y_394_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__91, &lp_subsetsum_SubsetSum_MITM_phaseA2___closed__91_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__91);
v___x_395_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseA2___closed__92));
v___x_396_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_396_, 0, v___x_395_);
lean_ctor_set(v___x_396_, 1, v_y_394_);
return v___x_396_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__94(void){
_start:
{
lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v___x_399_; 
v___x_397_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__93, &lp_subsetsum_SubsetSum_MITM_phaseA2___closed__93_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__93);
v___x_398_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseA2___closed__30));
v___x_399_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_399_, 0, v___x_398_);
lean_ctor_set(v___x_399_, 1, v___x_397_);
return v___x_399_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__95(void){
_start:
{
lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; 
v___x_400_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__94, &lp_subsetsum_SubsetSum_MITM_phaseA2___closed__94_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__94);
v___x_401_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseA2___closed__28));
v___x_402_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_402_, 0, v___x_401_);
lean_ctor_set(v___x_402_, 1, v___x_400_);
return v___x_402_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__96(void){
_start:
{
lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; 
v___x_403_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__95, &lp_subsetsum_SubsetSum_MITM_phaseA2___closed__95_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__95);
v___x_404_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseA2___closed__46));
v___x_405_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_405_, 0, v___x_404_);
lean_ctor_set(v___x_405_, 1, v___x_403_);
return v___x_405_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__97(void){
_start:
{
lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v_y_408_; 
v___x_406_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__96, &lp_subsetsum_SubsetSum_MITM_phaseA2___closed__96_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__96);
v___x_407_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseA2___closed__63));
v_y_408_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_y_408_, 0, v___x_407_);
lean_ctor_set(v_y_408_, 1, v___x_406_);
return v_y_408_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__100(void){
_start:
{
lean_object* v___x_415_; lean_object* v___x_416_; 
v___x_415_ = lean_unsigned_to_nat(83u);
v___x_416_ = lp_subsetsum_SubsetSum_MITM_jmp(v___x_415_);
return v___x_416_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__102(void){
_start:
{
lean_object* v_y_419_; lean_object* v___x_420_; lean_object* v___x_421_; 
v_y_419_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__97, &lp_subsetsum_SubsetSum_MITM_phaseA2___closed__97_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__97);
v___x_420_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseA2___closed__61));
v___x_421_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_421_, 0, v___x_420_);
lean_ctor_set(v___x_421_, 1, v_y_419_);
return v___x_421_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__103(void){
_start:
{
lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; 
v___x_422_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__102, &lp_subsetsum_SubsetSum_MITM_phaseA2___closed__102_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__102);
v___x_423_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseA2___closed__101));
v___x_424_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_424_, 0, v___x_423_);
lean_ctor_set(v___x_424_, 1, v___x_422_);
return v___x_424_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__104(void){
_start:
{
lean_object* v___x_425_; lean_object* v___x_426_; lean_object* v___x_427_; 
v___x_425_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__103, &lp_subsetsum_SubsetSum_MITM_phaseA2___closed__103_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__103);
v___x_426_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__100, &lp_subsetsum_SubsetSum_MITM_phaseA2___closed__100_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__100);
v___x_427_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_427_, 0, v___x_426_);
lean_ctor_set(v___x_427_, 1, v___x_425_);
return v___x_427_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__105(void){
_start:
{
lean_object* v___x_428_; lean_object* v___x_429_; lean_object* v___x_430_; 
v___x_428_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__104, &lp_subsetsum_SubsetSum_MITM_phaseA2___closed__104_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__104);
v___x_429_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseA2___closed__99));
v___x_430_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_430_, 0, v___x_429_);
lean_ctor_set(v___x_430_, 1, v___x_428_);
return v___x_430_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__106(void){
_start:
{
lean_object* v___x_431_; lean_object* v___x_432_; lean_object* v_y_433_; 
v___x_431_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__105, &lp_subsetsum_SubsetSum_MITM_phaseA2___closed__105_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__105);
v___x_432_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseA2___closed__98));
v_y_433_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_y_433_, 0, v___x_432_);
lean_ctor_set(v_y_433_, 1, v___x_431_);
return v_y_433_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__111(void){
_start:
{
lean_object* v___x_444_; lean_object* v___x_445_; 
v___x_444_ = lean_unsigned_to_nat(79u);
v___x_445_ = lp_subsetsum_SubsetSum_MITM_jmp(v___x_444_);
return v___x_445_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__112(void){
_start:
{
lean_object* v_y_446_; lean_object* v___x_447_; lean_object* v___x_448_; 
v_y_446_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__106, &lp_subsetsum_SubsetSum_MITM_phaseA2___closed__106_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__106);
v___x_447_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__111, &lp_subsetsum_SubsetSum_MITM_phaseA2___closed__111_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__111);
v___x_448_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_448_, 0, v___x_447_);
lean_ctor_set(v___x_448_, 1, v_y_446_);
return v___x_448_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__113(void){
_start:
{
lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; 
v___x_449_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__112, &lp_subsetsum_SubsetSum_MITM_phaseA2___closed__112_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__112);
v___x_450_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseA2___closed__110));
v___x_451_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_451_, 0, v___x_450_);
lean_ctor_set(v___x_451_, 1, v___x_449_);
return v___x_451_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__114(void){
_start:
{
lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; 
v___x_452_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__113, &lp_subsetsum_SubsetSum_MITM_phaseA2___closed__113_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__113);
v___x_453_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseA2___closed__109));
v___x_454_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_454_, 0, v___x_453_);
lean_ctor_set(v___x_454_, 1, v___x_452_);
return v___x_454_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__115(void){
_start:
{
lean_object* v___x_455_; lean_object* v___x_456_; lean_object* v_y_457_; 
v___x_455_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__114, &lp_subsetsum_SubsetSum_MITM_phaseA2___closed__114_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__114);
v___x_456_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseA2___closed__108));
v_y_457_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_y_457_, 0, v___x_456_);
lean_ctor_set(v_y_457_, 1, v___x_455_);
return v_y_457_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__124(void){
_start:
{
lean_object* v_y_478_; lean_object* v___x_479_; lean_object* v___x_480_; 
v_y_478_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__115, &lp_subsetsum_SubsetSum_MITM_phaseA2___closed__115_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__115);
v___x_479_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseA2___closed__123));
v___x_480_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_480_, 0, v___x_479_);
lean_ctor_set(v___x_480_, 1, v_y_478_);
return v___x_480_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__125(void){
_start:
{
lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; 
v___x_481_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__124, &lp_subsetsum_SubsetSum_MITM_phaseA2___closed__124_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__124);
v___x_482_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_canon___closed__10));
v___x_483_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_483_, 0, v___x_482_);
lean_ctor_set(v___x_483_, 1, v___x_481_);
return v___x_483_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__126(void){
_start:
{
lean_object* v___x_484_; lean_object* v___x_485_; lean_object* v___x_486_; 
v___x_484_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__125, &lp_subsetsum_SubsetSum_MITM_phaseA2___closed__125_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__125);
v___x_485_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseA2___closed__121));
v___x_486_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_486_, 0, v___x_485_);
lean_ctor_set(v___x_486_, 1, v___x_484_);
return v___x_486_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__127(void){
_start:
{
lean_object* v___x_487_; lean_object* v___x_488_; lean_object* v___x_489_; 
v___x_487_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__126, &lp_subsetsum_SubsetSum_MITM_phaseA2___closed__126_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__126);
v___x_488_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseA2___closed__119));
v___x_489_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_489_, 0, v___x_488_);
lean_ctor_set(v___x_489_, 1, v___x_487_);
return v___x_489_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__128(void){
_start:
{
lean_object* v___x_490_; lean_object* v___x_491_; lean_object* v_y_492_; 
v___x_490_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__127, &lp_subsetsum_SubsetSum_MITM_phaseA2___closed__127_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__127);
v___x_491_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseA2___closed__117));
v_y_492_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_y_492_, 0, v___x_491_);
lean_ctor_set(v_y_492_, 1, v___x_490_);
return v_y_492_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__134(void){
_start:
{
lean_object* v_y_506_; lean_object* v___x_507_; lean_object* v___x_508_; 
v_y_506_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__128, &lp_subsetsum_SubsetSum_MITM_phaseA2___closed__128_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__128);
v___x_507_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseA2___closed__133));
v___x_508_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_508_, 0, v___x_507_);
lean_ctor_set(v___x_508_, 1, v_y_506_);
return v___x_508_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__135(void){
_start:
{
lean_object* v___x_509_; lean_object* v___x_510_; lean_object* v___x_511_; 
v___x_509_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__134, &lp_subsetsum_SubsetSum_MITM_phaseA2___closed__134_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__134);
v___x_510_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseA2___closed__132));
v___x_511_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_511_, 0, v___x_510_);
lean_ctor_set(v___x_511_, 1, v___x_509_);
return v___x_511_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__136(void){
_start:
{
lean_object* v___x_512_; lean_object* v___x_513_; lean_object* v___x_514_; 
v___x_512_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__135, &lp_subsetsum_SubsetSum_MITM_phaseA2___closed__135_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__135);
v___x_513_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseA2___closed__130));
v___x_514_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_514_, 0, v___x_513_);
lean_ctor_set(v___x_514_, 1, v___x_512_);
return v___x_514_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__137(void){
_start:
{
lean_object* v___x_515_; lean_object* v___x_516_; lean_object* v_y_517_; 
v___x_515_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__136, &lp_subsetsum_SubsetSum_MITM_phaseA2___closed__136_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__136);
v___x_516_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseA2___closed__21));
v_y_517_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_y_517_, 0, v___x_516_);
lean_ctor_set(v_y_517_, 1, v___x_515_);
return v_y_517_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__148(void){
_start:
{
lean_object* v_y_546_; lean_object* v___x_547_; lean_object* v___x_548_; 
v_y_546_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__137, &lp_subsetsum_SubsetSum_MITM_phaseA2___closed__137_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__137);
v___x_547_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseA2___closed__147));
v___x_548_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_548_, 0, v___x_547_);
lean_ctor_set(v___x_548_, 1, v_y_546_);
return v___x_548_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__149(void){
_start:
{
lean_object* v___x_549_; lean_object* v___x_550_; lean_object* v___x_551_; 
v___x_549_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__148, &lp_subsetsum_SubsetSum_MITM_phaseA2___closed__148_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__148);
v___x_550_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseA2___closed__145));
v___x_551_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_551_, 0, v___x_550_);
lean_ctor_set(v___x_551_, 1, v___x_549_);
return v___x_551_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__150(void){
_start:
{
lean_object* v___x_552_; lean_object* v___x_553_; lean_object* v___x_554_; 
v___x_552_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__149, &lp_subsetsum_SubsetSum_MITM_phaseA2___closed__149_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__149);
v___x_553_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseA2___closed__143));
v___x_554_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_554_, 0, v___x_553_);
lean_ctor_set(v___x_554_, 1, v___x_552_);
return v___x_554_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__151(void){
_start:
{
lean_object* v___x_555_; lean_object* v___x_556_; lean_object* v___x_557_; 
v___x_555_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__150, &lp_subsetsum_SubsetSum_MITM_phaseA2___closed__150_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__150);
v___x_556_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseA2___closed__141));
v___x_557_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_557_, 0, v___x_556_);
lean_ctor_set(v___x_557_, 1, v___x_555_);
return v___x_557_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__152(void){
_start:
{
lean_object* v___x_558_; lean_object* v___x_559_; lean_object* v_y_560_; 
v___x_558_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__151, &lp_subsetsum_SubsetSum_MITM_phaseA2___closed__151_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__151);
v___x_559_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseA2___closed__139));
v_y_560_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_y_560_, 0, v___x_559_);
lean_ctor_set(v_y_560_, 1, v___x_558_);
return v_y_560_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__161(void){
_start:
{
lean_object* v_y_584_; lean_object* v___x_585_; lean_object* v___x_586_; 
v_y_584_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__152, &lp_subsetsum_SubsetSum_MITM_phaseA2___closed__152_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__152);
v___x_585_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseA2___closed__160));
v___x_586_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_586_, 0, v___x_585_);
lean_ctor_set(v___x_586_, 1, v_y_584_);
return v___x_586_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__162(void){
_start:
{
lean_object* v___x_587_; lean_object* v___x_588_; lean_object* v___x_589_; 
v___x_587_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__161, &lp_subsetsum_SubsetSum_MITM_phaseA2___closed__161_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__161);
v___x_588_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseA2___closed__158));
v___x_589_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_589_, 0, v___x_588_);
lean_ctor_set(v___x_589_, 1, v___x_587_);
return v___x_589_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__163(void){
_start:
{
lean_object* v___x_590_; lean_object* v___x_591_; lean_object* v___x_592_; 
v___x_590_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__162, &lp_subsetsum_SubsetSum_MITM_phaseA2___closed__162_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__162);
v___x_591_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseA2___closed__156));
v___x_592_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_592_, 0, v___x_591_);
lean_ctor_set(v___x_592_, 1, v___x_590_);
return v___x_592_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__164(void){
_start:
{
lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; 
v___x_593_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__163, &lp_subsetsum_SubsetSum_MITM_phaseA2___closed__163_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__163);
v___x_594_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseA2___closed__154));
v___x_595_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_595_, 0, v___x_594_);
lean_ctor_set(v___x_595_, 1, v___x_593_);
return v___x_595_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_phaseA2(void){
_start:
{
lean_object* v___x_596_; 
v___x_596_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_phaseA2___closed__164, &lp_subsetsum_SubsetSum_MITM_phaseA2___closed__164_once, _init_lp_subsetsum_SubsetSum_MITM_phaseA2___closed__164);
return v___x_596_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_scanB___closed__18(void){
_start:
{
lean_object* v___x_648_; lean_object* v___x_649_; 
v___x_648_ = lean_unsigned_to_nat(84u);
v___x_649_ = lp_subsetsum_SubsetSum_MITM_jmp(v___x_648_);
return v___x_649_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_scanB___closed__19(void){
_start:
{
lean_object* v___x_650_; lean_object* v___x_651_; lean_object* v___x_652_; 
v___x_650_ = lean_box(0);
v___x_651_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_scanB___closed__18, &lp_subsetsum_SubsetSum_MITM_scanB___closed__18_once, _init_lp_subsetsum_SubsetSum_MITM_scanB___closed__18);
v___x_652_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_652_, 0, v___x_651_);
lean_ctor_set(v___x_652_, 1, v___x_650_);
return v___x_652_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_scanB___closed__20(void){
_start:
{
lean_object* v___x_653_; lean_object* v___x_654_; lean_object* v___x_655_; 
v___x_653_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_scanB___closed__19, &lp_subsetsum_SubsetSum_MITM_scanB___closed__19_once, _init_lp_subsetsum_SubsetSum_MITM_scanB___closed__19);
v___x_654_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_scanB___closed__17));
v___x_655_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_655_, 0, v___x_654_);
lean_ctor_set(v___x_655_, 1, v___x_653_);
return v___x_655_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_scanB___closed__21(void){
_start:
{
lean_object* v___x_656_; lean_object* v___x_657_; lean_object* v___x_658_; 
v___x_656_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_scanB___closed__20, &lp_subsetsum_SubsetSum_MITM_scanB___closed__20_once, _init_lp_subsetsum_SubsetSum_MITM_scanB___closed__20);
v___x_657_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_scanB___closed__15));
v___x_658_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_658_, 0, v___x_657_);
lean_ctor_set(v___x_658_, 1, v___x_656_);
return v___x_658_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_scanB___closed__22(void){
_start:
{
lean_object* v___x_659_; lean_object* v___x_660_; lean_object* v___x_661_; 
v___x_659_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_scanB___closed__21, &lp_subsetsum_SubsetSum_MITM_scanB___closed__21_once, _init_lp_subsetsum_SubsetSum_MITM_scanB___closed__21);
v___x_660_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_scanB___closed__12));
v___x_661_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_661_, 0, v___x_660_);
lean_ctor_set(v___x_661_, 1, v___x_659_);
return v___x_661_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_scanB___closed__23(void){
_start:
{
lean_object* v___x_662_; lean_object* v___x_663_; lean_object* v___x_664_; 
v___x_662_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_scanB___closed__22, &lp_subsetsum_SubsetSum_MITM_scanB___closed__22_once, _init_lp_subsetsum_SubsetSum_MITM_scanB___closed__22);
v___x_663_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_scanB___closed__14));
v___x_664_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_664_, 0, v___x_663_);
lean_ctor_set(v___x_664_, 1, v___x_662_);
return v___x_664_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_scanB___closed__24(void){
_start:
{
lean_object* v___x_665_; lean_object* v___x_666_; lean_object* v___x_667_; 
v___x_665_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_scanB___closed__23, &lp_subsetsum_SubsetSum_MITM_scanB___closed__23_once, _init_lp_subsetsum_SubsetSum_MITM_scanB___closed__23);
v___x_666_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_scanB___closed__13));
v___x_667_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_667_, 0, v___x_666_);
lean_ctor_set(v___x_667_, 1, v___x_665_);
return v___x_667_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_scanB___closed__25(void){
_start:
{
lean_object* v___x_668_; lean_object* v___x_669_; lean_object* v___x_670_; 
v___x_668_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_scanB___closed__24, &lp_subsetsum_SubsetSum_MITM_scanB___closed__24_once, _init_lp_subsetsum_SubsetSum_MITM_scanB___closed__24);
v___x_669_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_scanB___closed__12));
v___x_670_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_670_, 0, v___x_669_);
lean_ctor_set(v___x_670_, 1, v___x_668_);
return v___x_670_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_scanB___closed__26(void){
_start:
{
lean_object* v___x_671_; lean_object* v___x_672_; lean_object* v___x_673_; 
v___x_671_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_scanB___closed__25, &lp_subsetsum_SubsetSum_MITM_scanB___closed__25_once, _init_lp_subsetsum_SubsetSum_MITM_scanB___closed__25);
v___x_672_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_scanB___closed__11));
v___x_673_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_673_, 0, v___x_672_);
lean_ctor_set(v___x_673_, 1, v___x_671_);
return v___x_673_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_scanB___closed__27(void){
_start:
{
lean_object* v___x_674_; lean_object* v___x_675_; lean_object* v___x_676_; 
v___x_674_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_scanB___closed__26, &lp_subsetsum_SubsetSum_MITM_scanB___closed__26_once, _init_lp_subsetsum_SubsetSum_MITM_scanB___closed__26);
v___x_675_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_canon___closed__21));
v___x_676_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_676_, 0, v___x_675_);
lean_ctor_set(v___x_676_, 1, v___x_674_);
return v___x_676_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_scanB___closed__28(void){
_start:
{
lean_object* v___x_677_; lean_object* v___x_678_; lean_object* v___x_679_; 
v___x_677_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_scanB___closed__27, &lp_subsetsum_SubsetSum_MITM_scanB___closed__27_once, _init_lp_subsetsum_SubsetSum_MITM_scanB___closed__27);
v___x_678_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_scanB___closed__10));
v___x_679_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_679_, 0, v___x_678_);
lean_ctor_set(v___x_679_, 1, v___x_677_);
return v___x_679_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_scanB___closed__29(void){
_start:
{
lean_object* v___x_680_; lean_object* v___x_681_; lean_object* v___x_682_; 
v___x_680_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_scanB___closed__28, &lp_subsetsum_SubsetSum_MITM_scanB___closed__28_once, _init_lp_subsetsum_SubsetSum_MITM_scanB___closed__28);
v___x_681_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_scanB___closed__9));
v___x_682_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_682_, 0, v___x_681_);
lean_ctor_set(v___x_682_, 1, v___x_680_);
return v___x_682_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_scanB___closed__30(void){
_start:
{
lean_object* v___x_683_; lean_object* v___x_684_; lean_object* v___x_685_; 
v___x_683_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_scanB___closed__29, &lp_subsetsum_SubsetSum_MITM_scanB___closed__29_once, _init_lp_subsetsum_SubsetSum_MITM_scanB___closed__29);
v___x_684_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_scanB___closed__8));
v___x_685_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_685_, 0, v___x_684_);
lean_ctor_set(v___x_685_, 1, v___x_683_);
return v___x_685_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_scanB___closed__31(void){
_start:
{
lean_object* v___x_686_; lean_object* v___x_687_; lean_object* v___x_688_; 
v___x_686_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_scanB___closed__30, &lp_subsetsum_SubsetSum_MITM_scanB___closed__30_once, _init_lp_subsetsum_SubsetSum_MITM_scanB___closed__30);
v___x_687_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_scanB___closed__7));
v___x_688_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_688_, 0, v___x_687_);
lean_ctor_set(v___x_688_, 1, v___x_686_);
return v___x_688_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_scanB___closed__32(void){
_start:
{
lean_object* v___x_689_; lean_object* v___x_690_; lean_object* v___x_691_; 
v___x_689_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_scanB___closed__31, &lp_subsetsum_SubsetSum_MITM_scanB___closed__31_once, _init_lp_subsetsum_SubsetSum_MITM_scanB___closed__31);
v___x_690_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_scanB___closed__6));
v___x_691_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_691_, 0, v___x_690_);
lean_ctor_set(v___x_691_, 1, v___x_689_);
return v___x_691_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_scanB___closed__33(void){
_start:
{
lean_object* v___x_692_; lean_object* v___x_693_; lean_object* v___x_694_; 
v___x_692_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_scanB___closed__32, &lp_subsetsum_SubsetSum_MITM_scanB___closed__32_once, _init_lp_subsetsum_SubsetSum_MITM_scanB___closed__32);
v___x_693_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseA2___closed__28));
v___x_694_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_694_, 0, v___x_693_);
lean_ctor_set(v___x_694_, 1, v___x_692_);
return v___x_694_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_scanB___closed__34(void){
_start:
{
lean_object* v___x_695_; lean_object* v___x_696_; lean_object* v___x_697_; 
v___x_695_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_scanB___closed__33, &lp_subsetsum_SubsetSum_MITM_scanB___closed__33_once, _init_lp_subsetsum_SubsetSum_MITM_scanB___closed__33);
v___x_696_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseA2___closed__46));
v___x_697_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_697_, 0, v___x_696_);
lean_ctor_set(v___x_697_, 1, v___x_695_);
return v___x_697_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_scanB___closed__35(void){
_start:
{
lean_object* v___x_698_; lean_object* v___x_699_; lean_object* v___x_700_; 
v___x_698_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_scanB___closed__34, &lp_subsetsum_SubsetSum_MITM_scanB___closed__34_once, _init_lp_subsetsum_SubsetSum_MITM_scanB___closed__34);
v___x_699_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseA2___closed__63));
v___x_700_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_700_, 0, v___x_699_);
lean_ctor_set(v___x_700_, 1, v___x_698_);
return v___x_700_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_scanB___closed__36(void){
_start:
{
lean_object* v___x_701_; lean_object* v___x_702_; lean_object* v___x_703_; 
v___x_701_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_scanB___closed__35, &lp_subsetsum_SubsetSum_MITM_scanB___closed__35_once, _init_lp_subsetsum_SubsetSum_MITM_scanB___closed__35);
v___x_702_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_scanB___closed__4));
v___x_703_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_703_, 0, v___x_702_);
lean_ctor_set(v___x_703_, 1, v___x_701_);
return v___x_703_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_scanB___closed__37(void){
_start:
{
lean_object* v___x_704_; lean_object* v___x_705_; lean_object* v___x_706_; 
v___x_704_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_scanB___closed__36, &lp_subsetsum_SubsetSum_MITM_scanB___closed__36_once, _init_lp_subsetsum_SubsetSum_MITM_scanB___closed__36);
v___x_705_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_scanB___closed__2));
v___x_706_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_706_, 0, v___x_705_);
lean_ctor_set(v___x_706_, 1, v___x_704_);
return v___x_706_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_scanB___closed__38(void){
_start:
{
lean_object* v___x_707_; lean_object* v___x_708_; lean_object* v___x_709_; 
v___x_707_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_scanB___closed__37, &lp_subsetsum_SubsetSum_MITM_scanB___closed__37_once, _init_lp_subsetsum_SubsetSum_MITM_scanB___closed__37);
v___x_708_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_scanB___closed__1));
v___x_709_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_709_, 0, v___x_708_);
lean_ctor_set(v___x_709_, 1, v___x_707_);
return v___x_709_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_scanB___closed__39(void){
_start:
{
lean_object* v___x_710_; lean_object* v___x_711_; lean_object* v___x_712_; 
v___x_710_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_scanB___closed__38, &lp_subsetsum_SubsetSum_MITM_scanB___closed__38_once, _init_lp_subsetsum_SubsetSum_MITM_scanB___closed__38);
v___x_711_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_canon___closed__10));
v___x_712_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_712_, 0, v___x_711_);
lean_ctor_set(v___x_712_, 1, v___x_710_);
return v___x_712_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_scanB___closed__40(void){
_start:
{
lean_object* v___x_713_; lean_object* v___x_714_; lean_object* v___x_715_; 
v___x_713_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_scanB___closed__39, &lp_subsetsum_SubsetSum_MITM_scanB___closed__39_once, _init_lp_subsetsum_SubsetSum_MITM_scanB___closed__39);
v___x_714_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_phaseA2___closed__121));
v___x_715_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_715_, 0, v___x_714_);
lean_ctor_set(v___x_715_, 1, v___x_713_);
return v___x_715_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_scanB___closed__41(void){
_start:
{
lean_object* v___x_716_; lean_object* v___x_717_; lean_object* v___x_718_; 
v___x_716_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_scanB___closed__40, &lp_subsetsum_SubsetSum_MITM_scanB___closed__40_once, _init_lp_subsetsum_SubsetSum_MITM_scanB___closed__40);
v___x_717_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_canon___closed__3));
v___x_718_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_718_, 0, v___x_717_);
lean_ctor_set(v___x_718_, 1, v___x_716_);
return v___x_718_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_scanB___closed__42(void){
_start:
{
lean_object* v___x_719_; lean_object* v___x_720_; lean_object* v___x_721_; 
v___x_719_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_scanB___closed__41, &lp_subsetsum_SubsetSum_MITM_scanB___closed__41_once, _init_lp_subsetsum_SubsetSum_MITM_scanB___closed__41);
v___x_720_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_canon___closed__1));
v___x_721_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_721_, 0, v___x_720_);
lean_ctor_set(v___x_721_, 1, v___x_719_);
return v___x_721_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_scanB(void){
_start:
{
lean_object* v___x_722_; 
v___x_722_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_scanB___closed__42, &lp_subsetsum_SubsetSum_MITM_scanB___closed__42_once, _init_lp_subsetsum_SubsetSum_MITM_scanB___closed__42);
return v___x_722_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_prog2Lines___closed__0(void){
_start:
{
lean_object* v___x_723_; lean_object* v___x_724_; lean_object* v___x_725_; 
v___x_723_ = lp_subsetsum_SubsetSum_MITM_phaseA;
v___x_724_ = lp_subsetsum_SubsetSum_MITM_prologue;
v___x_725_ = l_List_appendTR___redArg(v___x_724_, v___x_723_);
return v___x_725_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_prog2Lines___closed__1(void){
_start:
{
lean_object* v___x_726_; lean_object* v___x_727_; lean_object* v___x_728_; 
v___x_726_ = lp_subsetsum_SubsetSum_MITM_canon;
v___x_727_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_prog2Lines___closed__0, &lp_subsetsum_SubsetSum_MITM_prog2Lines___closed__0_once, _init_lp_subsetsum_SubsetSum_MITM_prog2Lines___closed__0);
v___x_728_ = l_List_appendTR___redArg(v___x_727_, v___x_726_);
return v___x_728_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_prog2Lines___closed__2(void){
_start:
{
lean_object* v___x_729_; lean_object* v___x_730_; lean_object* v___x_731_; 
v___x_729_ = lp_subsetsum_SubsetSum_MITM_phaseA2;
v___x_730_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_prog2Lines___closed__1, &lp_subsetsum_SubsetSum_MITM_prog2Lines___closed__1_once, _init_lp_subsetsum_SubsetSum_MITM_prog2Lines___closed__1);
v___x_731_ = l_List_appendTR___redArg(v___x_730_, v___x_729_);
return v___x_731_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_prog2Lines___closed__3(void){
_start:
{
lean_object* v___x_732_; lean_object* v___x_733_; lean_object* v___x_734_; 
v___x_732_ = lp_subsetsum_SubsetSum_MITM_scanB;
v___x_733_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_prog2Lines___closed__2, &lp_subsetsum_SubsetSum_MITM_prog2Lines___closed__2_once, _init_lp_subsetsum_SubsetSum_MITM_prog2Lines___closed__2);
v___x_734_ = l_List_appendTR___redArg(v___x_733_, v___x_732_);
return v___x_734_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_prog2Lines___closed__4(void){
_start:
{
lean_object* v___x_735_; lean_object* v___x_736_; lean_object* v___x_737_; 
v___x_735_ = lp_subsetsum_SubsetSum_MITM_smallN;
v___x_736_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_prog2Lines___closed__3, &lp_subsetsum_SubsetSum_MITM_prog2Lines___closed__3_once, _init_lp_subsetsum_SubsetSum_MITM_prog2Lines___closed__3);
v___x_737_ = l_List_appendTR___redArg(v___x_736_, v___x_735_);
return v___x_737_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_prog2Lines(void){
_start:
{
lean_object* v___x_738_; 
v___x_738_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_prog2Lines___closed__4, &lp_subsetsum_SubsetSum_MITM_prog2Lines___closed__4_once, _init_lp_subsetsum_SubsetSum_MITM_prog2Lines___closed__4);
return v___x_738_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_prog2___closed__0(void){
_start:
{
lean_object* v___x_739_; lean_object* v___x_740_; 
v___x_739_ = lp_subsetsum_SubsetSum_MITM_prog2Lines;
v___x_740_ = lp_subsetsum_SubsetSum_MITM_resolve(v___x_739_);
return v___x_740_;
}
}
static lean_object* _init_lp_subsetsum_SubsetSum_MITM_prog2(void){
_start:
{
lean_object* v___x_741_; 
v___x_741_ = lean_obj_once(&lp_subsetsum_SubsetSum_MITM_prog2___closed__0, &lp_subsetsum_SubsetSum_MITM_prog2___closed__0_once, _init_lp_subsetsum_SubsetSum_MITM_prog2___closed__0);
return v___x_741_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_subsetsum_Submission_Program(uint8_t builtin);
lean_object* initialize_subsetsum_Submission_ProgFacts(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_subsetsum_Submission_Prog2(uint8_t builtin) {
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
res = initialize_subsetsum_Submission_Program(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_subsetsum_Submission_ProgFacts(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
lp_subsetsum_SubsetSum_MITM_LCANCH = _init_lp_subsetsum_SubsetSum_MITM_LCANCH();
lean_mark_persistent(lp_subsetsum_SubsetSum_MITM_LCANCH);
lp_subsetsum_SubsetSum_MITM_LCANLOOP = _init_lp_subsetsum_SubsetSum_MITM_LCANLOOP();
lean_mark_persistent(lp_subsetsum_SubsetSum_MITM_LCANLOOP);
lp_subsetsum_SubsetSum_MITM_LROUND2 = _init_lp_subsetsum_SubsetSum_MITM_LROUND2();
lean_mark_persistent(lp_subsetsum_SubsetSum_MITM_LROUND2);
lp_subsetsum_SubsetSum_MITM_LMERGE2 = _init_lp_subsetsum_SubsetSum_MITM_LMERGE2();
lean_mark_persistent(lp_subsetsum_SubsetSum_MITM_LMERGE2);
lp_subsetsum_SubsetSum_MITM_LHAVEJ2 = _init_lp_subsetsum_SubsetSum_MITM_LHAVEJ2();
lean_mark_persistent(lp_subsetsum_SubsetSum_MITM_LHAVEJ2);
lp_subsetsum_SubsetSum_MITM_LBOTH2 = _init_lp_subsetsum_SubsetSum_MITM_LBOTH2();
lean_mark_persistent(lp_subsetsum_SubsetSum_MITM_LBOTH2);
lp_subsetsum_SubsetSum_MITM_LTAKEJ2 = _init_lp_subsetsum_SubsetSum_MITM_LTAKEJ2();
lean_mark_persistent(lp_subsetsum_SubsetSum_MITM_LTAKEJ2);
lp_subsetsum_SubsetSum_MITM_LTAKEL2 = _init_lp_subsetsum_SubsetSum_MITM_LTAKEL2();
lean_mark_persistent(lp_subsetsum_SubsetSum_MITM_LTAKEL2);
lp_subsetsum_SubsetSum_MITM_LSTEP2 = _init_lp_subsetsum_SubsetSum_MITM_LSTEP2();
lean_mark_persistent(lp_subsetsum_SubsetSum_MITM_LSTEP2);
lp_subsetsum_SubsetSum_MITM_LDRAINI2 = _init_lp_subsetsum_SubsetSum_MITM_LDRAINI2();
lean_mark_persistent(lp_subsetsum_SubsetSum_MITM_LDRAINI2);
lp_subsetsum_SubsetSum_MITM_LDILOOP2 = _init_lp_subsetsum_SubsetSum_MITM_LDILOOP2();
lean_mark_persistent(lp_subsetsum_SubsetSum_MITM_LDILOOP2);
lp_subsetsum_SubsetSum_MITM_LDJLOOP2 = _init_lp_subsetsum_SubsetSum_MITM_LDJLOOP2();
lean_mark_persistent(lp_subsetsum_SubsetSum_MITM_LDJLOOP2);
lp_subsetsum_SubsetSum_MITM_LSWAP2 = _init_lp_subsetsum_SubsetSum_MITM_LSWAP2();
lean_mark_persistent(lp_subsetsum_SubsetSum_MITM_LSWAP2);
lp_subsetsum_SubsetSum_MITM_LDRAINJ2 = _init_lp_subsetsum_SubsetSum_MITM_LDRAINJ2();
lean_mark_persistent(lp_subsetsum_SubsetSum_MITM_LDRAINJ2);
lp_subsetsum_SubsetSum_MITM_LSCAN = _init_lp_subsetsum_SubsetSum_MITM_LSCAN();
lean_mark_persistent(lp_subsetsum_SubsetSum_MITM_LSCAN);
lp_subsetsum_SubsetSum_MITM_LSCANLESS = _init_lp_subsetsum_SubsetSum_MITM_LSCANLESS();
lean_mark_persistent(lp_subsetsum_SubsetSum_MITM_LSCANLESS);
lp_subsetsum_SubsetSum_MITM_LSCANGTR = _init_lp_subsetsum_SubsetSum_MITM_LSCANGTR();
lean_mark_persistent(lp_subsetsum_SubsetSum_MITM_LSCANGTR);
lp_subsetsum_SubsetSum_MITM_LSCANDEC = _init_lp_subsetsum_SubsetSum_MITM_LSCANDEC();
lean_mark_persistent(lp_subsetsum_SubsetSum_MITM_LSCANDEC);
lp_subsetsum_SubsetSum_MITM_LPHASEA2 = _init_lp_subsetsum_SubsetSum_MITM_LPHASEA2();
lean_mark_persistent(lp_subsetsum_SubsetSum_MITM_LPHASEA2);
lp_subsetsum_SubsetSum_MITM_canon = _init_lp_subsetsum_SubsetSum_MITM_canon();
lean_mark_persistent(lp_subsetsum_SubsetSum_MITM_canon);
lp_subsetsum_SubsetSum_MITM_phaseA2 = _init_lp_subsetsum_SubsetSum_MITM_phaseA2();
lean_mark_persistent(lp_subsetsum_SubsetSum_MITM_phaseA2);
lp_subsetsum_SubsetSum_MITM_scanB = _init_lp_subsetsum_SubsetSum_MITM_scanB();
lean_mark_persistent(lp_subsetsum_SubsetSum_MITM_scanB);
lp_subsetsum_SubsetSum_MITM_prog2Lines = _init_lp_subsetsum_SubsetSum_MITM_prog2Lines();
lean_mark_persistent(lp_subsetsum_SubsetSum_MITM_prog2Lines);
lp_subsetsum_SubsetSum_MITM_prog2 = _init_lp_subsetsum_SubsetSum_MITM_prog2();
lean_mark_persistent(lp_subsetsum_SubsetSum_MITM_prog2);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
