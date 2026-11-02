// Lean compiler output
// Module: Submission.ProgFacts
// Imports: public import Init public meta import Init public import Submission.Det
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
LEAN_EXPORT uint8_t lp_subsetsum_SubsetSum_MITM_isRandInstr(lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_isRandInstr___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum___private_Submission_ProgFacts_0__SubsetSum_MITM_isRandInstr_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum___private_Submission_ProgFacts_0__SubsetSum_MITM_isRandInstr_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_subsetsum_SubsetSum_MITM_isRandInstr(lean_object* v_x_1_){
_start:
{
if (lean_obj_tag(v_x_1_) == 13)
{
uint8_t v___x_2_; 
v___x_2_ = 1;
return v___x_2_;
}
else
{
uint8_t v___x_3_; 
v___x_3_ = 0;
return v___x_3_;
}
}
}
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_isRandInstr___boxed(lean_object* v_x_4_){
_start:
{
uint8_t v_res_5_; lean_object* v_r_6_; 
v_res_5_ = lp_subsetsum_SubsetSum_MITM_isRandInstr(v_x_4_);
lean_dec(v_x_4_);
v_r_6_ = lean_box(v_res_5_);
return v_r_6_;
}
}
LEAN_EXPORT lean_object* lp_subsetsum___private_Submission_ProgFacts_0__SubsetSum_MITM_isRandInstr_match__1_splitter___redArg(lean_object* v_x_7_, lean_object* v_h__1_8_, lean_object* v_h__2_9_){
_start:
{
if (lean_obj_tag(v_x_7_) == 13)
{
lean_object* v_i_10_; lean_object* v___x_11_; 
lean_dec(v_h__2_9_);
v_i_10_ = lean_ctor_get(v_x_7_, 0);
lean_inc(v_i_10_);
lean_dec_ref_known(v_x_7_, 1);
v___x_11_ = lean_apply_1(v_h__1_8_, v_i_10_);
return v___x_11_;
}
else
{
lean_object* v___x_12_; 
lean_dec(v_h__1_8_);
v___x_12_ = lean_apply_2(v_h__2_9_, v_x_7_, lean_box(0));
return v___x_12_;
}
}
}
LEAN_EXPORT lean_object* lp_subsetsum___private_Submission_ProgFacts_0__SubsetSum_MITM_isRandInstr_match__1_splitter(lean_object* v_motive_13_, lean_object* v_x_14_, lean_object* v_h__1_15_, lean_object* v_h__2_16_){
_start:
{
if (lean_obj_tag(v_x_14_) == 13)
{
lean_object* v_i_17_; lean_object* v___x_18_; 
lean_dec(v_h__2_16_);
v_i_17_ = lean_ctor_get(v_x_14_, 0);
lean_inc(v_i_17_);
lean_dec_ref_known(v_x_14_, 1);
v___x_18_ = lean_apply_1(v_h__1_15_, v_i_17_);
return v___x_18_;
}
else
{
lean_object* v___x_19_; 
lean_dec(v_h__1_15_);
v___x_19_ = lean_apply_2(v_h__2_16_, v_x_14_, lean_box(0));
return v___x_19_;
}
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_subsetsum_Submission_Det(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_subsetsum_Submission_ProgFacts(uint8_t builtin) {
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
res = initialize_subsetsum_Submission_Det(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
