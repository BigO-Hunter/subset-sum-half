// Lean compiler output
// Module: Submission.Spec
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
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_List_range(lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_List_mapTR_loop___at___00SubsetSum_MITM_Spec_choiceSum_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_List_foldr___at___00List_sum___at___00SubsetSum_MITM_Spec_choiceSum_spec__1_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_List_foldr___at___00List_sum___at___00SubsetSum_MITM_Spec_choiceSum_spec__1_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_List_sum___at___00SubsetSum_MITM_Spec_choiceSum_spec__1(lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_List_sum___at___00SubsetSum_MITM_Spec_choiceSum_spec__1___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_Spec_choiceSum(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_List_mapTR_loop___at___00SubsetSum_MITM_Spec_choiceSum_spec__0(lean_object* v_S_1_, lean_object* v_a_2_, lean_object* v_a_3_, lean_object* v_a_4_){
_start:
{
if (lean_obj_tag(v_a_3_) == 0)
{
lean_object* v___x_5_; 
lean_dec_ref(v_a_2_);
lean_dec_ref(v_S_1_);
v___x_5_ = l_List_reverse___redArg(v_a_4_);
return v___x_5_;
}
else
{
lean_object* v_head_6_; lean_object* v_tail_7_; lean_object* v___x_9_; uint8_t v_isShared_10_; uint8_t v_isSharedCheck_21_; 
v_head_6_ = lean_ctor_get(v_a_3_, 0);
v_tail_7_ = lean_ctor_get(v_a_3_, 1);
v_isSharedCheck_21_ = !lean_is_exclusive(v_a_3_);
if (v_isSharedCheck_21_ == 0)
{
v___x_9_ = v_a_3_;
v_isShared_10_ = v_isSharedCheck_21_;
goto v_resetjp_8_;
}
else
{
lean_inc(v_tail_7_);
lean_inc(v_head_6_);
lean_dec(v_a_3_);
v___x_9_ = lean_box(0);
v_isShared_10_ = v_isSharedCheck_21_;
goto v_resetjp_8_;
}
v_resetjp_8_:
{
lean_object* v___y_12_; lean_object* v___x_17_; uint8_t v___x_18_; 
lean_inc_ref(v_S_1_);
lean_inc(v_head_6_);
v___x_17_ = lean_apply_1(v_S_1_, v_head_6_);
v___x_18_ = lean_unbox(v___x_17_);
if (v___x_18_ == 0)
{
lean_object* v___x_19_; 
lean_dec(v_head_6_);
v___x_19_ = lean_unsigned_to_nat(0u);
v___y_12_ = v___x_19_;
goto v___jp_11_;
}
else
{
lean_object* v___x_20_; 
lean_inc_ref(v_a_2_);
v___x_20_ = lean_apply_1(v_a_2_, v_head_6_);
v___y_12_ = v___x_20_;
goto v___jp_11_;
}
v___jp_11_:
{
lean_object* v___x_14_; 
if (v_isShared_10_ == 0)
{
lean_ctor_set(v___x_9_, 1, v_a_4_);
lean_ctor_set(v___x_9_, 0, v___y_12_);
v___x_14_ = v___x_9_;
goto v_reusejp_13_;
}
else
{
lean_object* v_reuseFailAlloc_16_; 
v_reuseFailAlloc_16_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_16_, 0, v___y_12_);
lean_ctor_set(v_reuseFailAlloc_16_, 1, v_a_4_);
v___x_14_ = v_reuseFailAlloc_16_;
goto v_reusejp_13_;
}
v_reusejp_13_:
{
v_a_3_ = v_tail_7_;
v_a_4_ = v___x_14_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_subsetsum_List_foldr___at___00List_sum___at___00SubsetSum_MITM_Spec_choiceSum_spec__1_spec__1(lean_object* v_init_22_, lean_object* v_x_23_){
_start:
{
if (lean_obj_tag(v_x_23_) == 0)
{
lean_inc(v_init_22_);
return v_init_22_;
}
else
{
lean_object* v_head_24_; lean_object* v_tail_25_; lean_object* v___x_26_; lean_object* v___x_27_; 
v_head_24_ = lean_ctor_get(v_x_23_, 0);
v_tail_25_ = lean_ctor_get(v_x_23_, 1);
v___x_26_ = lp_subsetsum_List_foldr___at___00List_sum___at___00SubsetSum_MITM_Spec_choiceSum_spec__1_spec__1(v_init_22_, v_tail_25_);
v___x_27_ = lean_nat_add(v_head_24_, v___x_26_);
lean_dec(v___x_26_);
return v___x_27_;
}
}
}
LEAN_EXPORT lean_object* lp_subsetsum_List_foldr___at___00List_sum___at___00SubsetSum_MITM_Spec_choiceSum_spec__1_spec__1___boxed(lean_object* v_init_28_, lean_object* v_x_29_){
_start:
{
lean_object* v_res_30_; 
v_res_30_ = lp_subsetsum_List_foldr___at___00List_sum___at___00SubsetSum_MITM_Spec_choiceSum_spec__1_spec__1(v_init_28_, v_x_29_);
lean_dec(v_x_29_);
lean_dec(v_init_28_);
return v_res_30_;
}
}
LEAN_EXPORT lean_object* lp_subsetsum_List_sum___at___00SubsetSum_MITM_Spec_choiceSum_spec__1(lean_object* v_l_31_){
_start:
{
lean_object* v___x_32_; lean_object* v___x_33_; 
v___x_32_ = lean_unsigned_to_nat(0u);
v___x_33_ = lp_subsetsum_List_foldr___at___00List_sum___at___00SubsetSum_MITM_Spec_choiceSum_spec__1_spec__1(v___x_32_, v_l_31_);
return v___x_33_;
}
}
LEAN_EXPORT lean_object* lp_subsetsum_List_sum___at___00SubsetSum_MITM_Spec_choiceSum_spec__1___boxed(lean_object* v_l_34_){
_start:
{
lean_object* v_res_35_; 
v_res_35_ = lp_subsetsum_List_sum___at___00SubsetSum_MITM_Spec_choiceSum_spec__1(v_l_34_);
lean_dec(v_l_34_);
return v_res_35_;
}
}
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_Spec_choiceSum(lean_object* v_a_36_, lean_object* v_S_37_, lean_object* v_n_38_){
_start:
{
lean_object* v___x_39_; lean_object* v___x_40_; lean_object* v___x_41_; lean_object* v___x_42_; 
v___x_39_ = l_List_range(v_n_38_);
v___x_40_ = lean_box(0);
v___x_41_ = lp_subsetsum_List_mapTR_loop___at___00SubsetSum_MITM_Spec_choiceSum_spec__0(v_S_37_, v_a_36_, v___x_39_, v___x_40_);
v___x_42_ = lp_subsetsum_List_sum___at___00SubsetSum_MITM_Spec_choiceSum_spec__1(v___x_41_);
lean_dec(v___x_41_);
return v___x_42_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_subsetsum_Submission_SubsetSumStatement(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_subsetsum_Submission_Spec(uint8_t builtin) {
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
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
