// Lean compiler output
// Module: Submission.Sort
// Imports: public import Init public meta import Init public import Submission.Spec
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
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_mmerge(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum___private_Submission_Sort_0__SubsetSum_MITM_mmerge_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum___private_Submission_Sort_0__SubsetSum_MITM_mmerge_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_List_mapTR_loop___at___00SubsetSum_MITM_halfSums_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object lp_subsetsum_SubsetSum_MITM_halfSums___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_subsetsum_SubsetSum_MITM_halfSums___closed__0 = (const lean_object*)&lp_subsetsum_SubsetSum_MITM_halfSums___closed__0_value;
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_halfSums(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_halfSums___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum___private_Submission_Sort_0__SubsetSum_MITM_halfSums_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum___private_Submission_Sort_0__SubsetSum_MITM_halfSums_match__1_splitter___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum___private_Submission_Sort_0__SubsetSum_MITM_halfSums_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum___private_Submission_Sort_0__SubsetSum_MITM_halfSums_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_mmerge(lean_object* v_x_1_, lean_object* v_x_2_){
_start:
{
if (lean_obj_tag(v_x_1_) == 0)
{
return v_x_2_;
}
else
{
if (lean_obj_tag(v_x_2_) == 0)
{
return v_x_1_;
}
else
{
lean_object* v_head_3_; lean_object* v_tail_4_; lean_object* v_head_5_; lean_object* v_tail_6_; uint8_t v___x_7_; 
v_head_3_ = lean_ctor_get(v_x_1_, 0);
v_tail_4_ = lean_ctor_get(v_x_1_, 1);
v_head_5_ = lean_ctor_get(v_x_2_, 0);
v_tail_6_ = lean_ctor_get(v_x_2_, 1);
v___x_7_ = lean_nat_dec_lt(v_head_5_, v_head_3_);
if (v___x_7_ == 0)
{
lean_object* v___x_9_; uint8_t v_isShared_10_; uint8_t v_isSharedCheck_15_; 
lean_inc(v_tail_4_);
lean_inc(v_head_3_);
v_isSharedCheck_15_ = !lean_is_exclusive(v_x_1_);
if (v_isSharedCheck_15_ == 0)
{
lean_object* v_unused_16_; lean_object* v_unused_17_; 
v_unused_16_ = lean_ctor_get(v_x_1_, 1);
lean_dec(v_unused_16_);
v_unused_17_ = lean_ctor_get(v_x_1_, 0);
lean_dec(v_unused_17_);
v___x_9_ = v_x_1_;
v_isShared_10_ = v_isSharedCheck_15_;
goto v_resetjp_8_;
}
else
{
lean_dec(v_x_1_);
v___x_9_ = lean_box(0);
v_isShared_10_ = v_isSharedCheck_15_;
goto v_resetjp_8_;
}
v_resetjp_8_:
{
lean_object* v___x_11_; lean_object* v___x_13_; 
v___x_11_ = lp_subsetsum_SubsetSum_MITM_mmerge(v_tail_4_, v_x_2_);
if (v_isShared_10_ == 0)
{
lean_ctor_set(v___x_9_, 1, v___x_11_);
v___x_13_ = v___x_9_;
goto v_reusejp_12_;
}
else
{
lean_object* v_reuseFailAlloc_14_; 
v_reuseFailAlloc_14_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_14_, 0, v_head_3_);
lean_ctor_set(v_reuseFailAlloc_14_, 1, v___x_11_);
v___x_13_ = v_reuseFailAlloc_14_;
goto v_reusejp_12_;
}
v_reusejp_12_:
{
return v___x_13_;
}
}
}
else
{
lean_object* v___x_19_; uint8_t v_isShared_20_; uint8_t v_isSharedCheck_25_; 
lean_inc(v_tail_6_);
lean_inc(v_head_5_);
v_isSharedCheck_25_ = !lean_is_exclusive(v_x_2_);
if (v_isSharedCheck_25_ == 0)
{
lean_object* v_unused_26_; lean_object* v_unused_27_; 
v_unused_26_ = lean_ctor_get(v_x_2_, 1);
lean_dec(v_unused_26_);
v_unused_27_ = lean_ctor_get(v_x_2_, 0);
lean_dec(v_unused_27_);
v___x_19_ = v_x_2_;
v_isShared_20_ = v_isSharedCheck_25_;
goto v_resetjp_18_;
}
else
{
lean_dec(v_x_2_);
v___x_19_ = lean_box(0);
v_isShared_20_ = v_isSharedCheck_25_;
goto v_resetjp_18_;
}
v_resetjp_18_:
{
lean_object* v___x_21_; lean_object* v___x_23_; 
v___x_21_ = lp_subsetsum_SubsetSum_MITM_mmerge(v_x_1_, v_tail_6_);
if (v_isShared_20_ == 0)
{
lean_ctor_set(v___x_19_, 1, v___x_21_);
v___x_23_ = v___x_19_;
goto v_reusejp_22_;
}
else
{
lean_object* v_reuseFailAlloc_24_; 
v_reuseFailAlloc_24_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_24_, 0, v_head_5_);
lean_ctor_set(v_reuseFailAlloc_24_, 1, v___x_21_);
v___x_23_ = v_reuseFailAlloc_24_;
goto v_reusejp_22_;
}
v_reusejp_22_:
{
return v___x_23_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_subsetsum___private_Submission_Sort_0__SubsetSum_MITM_mmerge_match__1_splitter___redArg(lean_object* v_x_28_, lean_object* v_x_29_, lean_object* v_h__1_30_, lean_object* v_h__2_31_, lean_object* v_h__3_32_){
_start:
{
if (lean_obj_tag(v_x_28_) == 0)
{
lean_object* v___x_33_; 
lean_dec(v_h__3_32_);
lean_dec(v_h__2_31_);
v___x_33_ = lean_apply_1(v_h__1_30_, v_x_29_);
return v___x_33_;
}
else
{
lean_dec(v_h__1_30_);
if (lean_obj_tag(v_x_29_) == 0)
{
lean_object* v___x_34_; 
lean_dec(v_h__3_32_);
v___x_34_ = lean_apply_2(v_h__2_31_, v_x_28_, lean_box(0));
return v___x_34_;
}
else
{
lean_object* v_head_35_; lean_object* v_tail_36_; lean_object* v_head_37_; lean_object* v_tail_38_; lean_object* v___x_39_; 
lean_dec(v_h__2_31_);
v_head_35_ = lean_ctor_get(v_x_28_, 0);
lean_inc(v_head_35_);
v_tail_36_ = lean_ctor_get(v_x_28_, 1);
lean_inc(v_tail_36_);
lean_dec_ref_known(v_x_28_, 2);
v_head_37_ = lean_ctor_get(v_x_29_, 0);
lean_inc(v_head_37_);
v_tail_38_ = lean_ctor_get(v_x_29_, 1);
lean_inc(v_tail_38_);
lean_dec_ref_known(v_x_29_, 2);
v___x_39_ = lean_apply_4(v_h__3_32_, v_head_35_, v_tail_36_, v_head_37_, v_tail_38_);
return v___x_39_;
}
}
}
}
LEAN_EXPORT lean_object* lp_subsetsum___private_Submission_Sort_0__SubsetSum_MITM_mmerge_match__1_splitter(lean_object* v_motive_40_, lean_object* v_x_41_, lean_object* v_x_42_, lean_object* v_h__1_43_, lean_object* v_h__2_44_, lean_object* v_h__3_45_){
_start:
{
if (lean_obj_tag(v_x_41_) == 0)
{
lean_object* v___x_46_; 
lean_dec(v_h__3_45_);
lean_dec(v_h__2_44_);
v___x_46_ = lean_apply_1(v_h__1_43_, v_x_42_);
return v___x_46_;
}
else
{
lean_dec(v_h__1_43_);
if (lean_obj_tag(v_x_42_) == 0)
{
lean_object* v___x_47_; 
lean_dec(v_h__3_45_);
v___x_47_ = lean_apply_2(v_h__2_44_, v_x_41_, lean_box(0));
return v___x_47_;
}
else
{
lean_object* v_head_48_; lean_object* v_tail_49_; lean_object* v_head_50_; lean_object* v_tail_51_; lean_object* v___x_52_; 
lean_dec(v_h__2_44_);
v_head_48_ = lean_ctor_get(v_x_41_, 0);
lean_inc(v_head_48_);
v_tail_49_ = lean_ctor_get(v_x_41_, 1);
lean_inc(v_tail_49_);
lean_dec_ref_known(v_x_41_, 2);
v_head_50_ = lean_ctor_get(v_x_42_, 0);
lean_inc(v_head_50_);
v_tail_51_ = lean_ctor_get(v_x_42_, 1);
lean_inc(v_tail_51_);
lean_dec_ref_known(v_x_42_, 2);
v___x_52_ = lean_apply_4(v_h__3_45_, v_head_48_, v_tail_49_, v_head_50_, v_tail_51_);
return v___x_52_;
}
}
}
}
LEAN_EXPORT lean_object* lp_subsetsum_List_mapTR_loop___at___00SubsetSum_MITM_halfSums_spec__0(lean_object* v_a_53_, lean_object* v_n_54_, lean_object* v_a_55_, lean_object* v_a_56_){
_start:
{
if (lean_obj_tag(v_a_55_) == 0)
{
lean_object* v___x_57_; 
lean_dec(v_n_54_);
lean_dec_ref(v_a_53_);
v___x_57_ = l_List_reverse___redArg(v_a_56_);
return v___x_57_;
}
else
{
lean_object* v_head_58_; lean_object* v_tail_59_; lean_object* v___x_61_; uint8_t v_isShared_62_; uint8_t v_isSharedCheck_69_; 
v_head_58_ = lean_ctor_get(v_a_55_, 0);
v_tail_59_ = lean_ctor_get(v_a_55_, 1);
v_isSharedCheck_69_ = !lean_is_exclusive(v_a_55_);
if (v_isSharedCheck_69_ == 0)
{
v___x_61_ = v_a_55_;
v_isShared_62_ = v_isSharedCheck_69_;
goto v_resetjp_60_;
}
else
{
lean_inc(v_tail_59_);
lean_inc(v_head_58_);
lean_dec(v_a_55_);
v___x_61_ = lean_box(0);
v_isShared_62_ = v_isSharedCheck_69_;
goto v_resetjp_60_;
}
v_resetjp_60_:
{
lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_66_; 
lean_inc_ref(v_a_53_);
lean_inc(v_n_54_);
v___x_63_ = lean_apply_1(v_a_53_, v_n_54_);
v___x_64_ = lean_nat_add(v_head_58_, v___x_63_);
lean_dec(v___x_63_);
lean_dec(v_head_58_);
if (v_isShared_62_ == 0)
{
lean_ctor_set(v___x_61_, 1, v_a_56_);
lean_ctor_set(v___x_61_, 0, v___x_64_);
v___x_66_ = v___x_61_;
goto v_reusejp_65_;
}
else
{
lean_object* v_reuseFailAlloc_68_; 
v_reuseFailAlloc_68_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_68_, 0, v___x_64_);
lean_ctor_set(v_reuseFailAlloc_68_, 1, v_a_56_);
v___x_66_ = v_reuseFailAlloc_68_;
goto v_reusejp_65_;
}
v_reusejp_65_:
{
v_a_55_ = v_tail_59_;
v_a_56_ = v___x_66_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_halfSums(lean_object* v_a_73_, lean_object* v_x_74_){
_start:
{
lean_object* v_zero_75_; uint8_t v_isZero_76_; 
v_zero_75_ = lean_unsigned_to_nat(0u);
v_isZero_76_ = lean_nat_dec_eq(v_x_74_, v_zero_75_);
if (v_isZero_76_ == 1)
{
lean_object* v___x_77_; 
lean_dec_ref(v_a_73_);
v___x_77_ = ((lean_object*)(lp_subsetsum_SubsetSum_MITM_halfSums___closed__0));
return v___x_77_;
}
else
{
lean_object* v_one_78_; lean_object* v_n_79_; lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; 
v_one_78_ = lean_unsigned_to_nat(1u);
v_n_79_ = lean_nat_sub(v_x_74_, v_one_78_);
lean_inc_ref(v_a_73_);
v___x_80_ = lp_subsetsum_SubsetSum_MITM_halfSums(v_a_73_, v_n_79_);
v___x_81_ = lean_box(0);
lean_inc(v___x_80_);
v___x_82_ = lp_subsetsum_List_mapTR_loop___at___00SubsetSum_MITM_halfSums_spec__0(v_a_73_, v_n_79_, v___x_80_, v___x_81_);
v___x_83_ = lp_subsetsum_SubsetSum_MITM_mmerge(v___x_80_, v___x_82_);
return v___x_83_;
}
}
}
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_halfSums___boxed(lean_object* v_a_84_, lean_object* v_x_85_){
_start:
{
lean_object* v_res_86_; 
v_res_86_ = lp_subsetsum_SubsetSum_MITM_halfSums(v_a_84_, v_x_85_);
lean_dec(v_x_85_);
return v_res_86_;
}
}
LEAN_EXPORT lean_object* lp_subsetsum___private_Submission_Sort_0__SubsetSum_MITM_halfSums_match__1_splitter___redArg(lean_object* v_x_87_, lean_object* v_h__1_88_, lean_object* v_h__2_89_){
_start:
{
lean_object* v_zero_90_; uint8_t v_isZero_91_; 
v_zero_90_ = lean_unsigned_to_nat(0u);
v_isZero_91_ = lean_nat_dec_eq(v_x_87_, v_zero_90_);
if (v_isZero_91_ == 1)
{
lean_object* v___x_92_; lean_object* v___x_93_; 
lean_dec(v_h__2_89_);
v___x_92_ = lean_box(0);
v___x_93_ = lean_apply_1(v_h__1_88_, v___x_92_);
return v___x_93_;
}
else
{
lean_object* v_one_94_; lean_object* v_n_95_; lean_object* v___x_96_; 
lean_dec(v_h__1_88_);
v_one_94_ = lean_unsigned_to_nat(1u);
v_n_95_ = lean_nat_sub(v_x_87_, v_one_94_);
v___x_96_ = lean_apply_1(v_h__2_89_, v_n_95_);
return v___x_96_;
}
}
}
LEAN_EXPORT lean_object* lp_subsetsum___private_Submission_Sort_0__SubsetSum_MITM_halfSums_match__1_splitter___redArg___boxed(lean_object* v_x_97_, lean_object* v_h__1_98_, lean_object* v_h__2_99_){
_start:
{
lean_object* v_res_100_; 
v_res_100_ = lp_subsetsum___private_Submission_Sort_0__SubsetSum_MITM_halfSums_match__1_splitter___redArg(v_x_97_, v_h__1_98_, v_h__2_99_);
lean_dec(v_x_97_);
return v_res_100_;
}
}
LEAN_EXPORT lean_object* lp_subsetsum___private_Submission_Sort_0__SubsetSum_MITM_halfSums_match__1_splitter(lean_object* v_motive_101_, lean_object* v_x_102_, lean_object* v_h__1_103_, lean_object* v_h__2_104_){
_start:
{
lean_object* v_zero_105_; uint8_t v_isZero_106_; 
v_zero_105_ = lean_unsigned_to_nat(0u);
v_isZero_106_ = lean_nat_dec_eq(v_x_102_, v_zero_105_);
if (v_isZero_106_ == 1)
{
lean_object* v___x_107_; lean_object* v___x_108_; 
lean_dec(v_h__2_104_);
v___x_107_ = lean_box(0);
v___x_108_ = lean_apply_1(v_h__1_103_, v___x_107_);
return v___x_108_;
}
else
{
lean_object* v_one_109_; lean_object* v_n_110_; lean_object* v___x_111_; 
lean_dec(v_h__1_103_);
v_one_109_ = lean_unsigned_to_nat(1u);
v_n_110_ = lean_nat_sub(v_x_102_, v_one_109_);
v___x_111_ = lean_apply_1(v_h__2_104_, v_n_110_);
return v___x_111_;
}
}
}
LEAN_EXPORT lean_object* lp_subsetsum___private_Submission_Sort_0__SubsetSum_MITM_halfSums_match__1_splitter___boxed(lean_object* v_motive_112_, lean_object* v_x_113_, lean_object* v_h__1_114_, lean_object* v_h__2_115_){
_start:
{
lean_object* v_res_116_; 
v_res_116_ = lp_subsetsum___private_Submission_Sort_0__SubsetSum_MITM_halfSums_match__1_splitter(v_motive_112_, v_x_113_, v_h__1_114_, v_h__2_115_);
lean_dec(v_x_113_);
return v_res_116_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_subsetsum_Submission_Spec(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_subsetsum_Submission_Sort(uint8_t builtin) {
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
res = initialize_subsetsum_Submission_Spec(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
