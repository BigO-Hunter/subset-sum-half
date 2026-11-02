// Lean compiler output
// Module: Submission.Bridge
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
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_instA(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_instA___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_subsetsum_SubsetSum_MITM_liftS(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_liftS___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_instA(lean_object* v_n_1_, lean_object* v_x_2_, lean_object* v_i_3_){
_start:
{
uint8_t v___x_4_; 
v___x_4_ = lean_nat_dec_lt(v_i_3_, v_n_1_);
if (v___x_4_ == 0)
{
lean_object* v___x_5_; 
lean_dec(v_i_3_);
lean_dec_ref(v_x_2_);
v___x_5_ = lean_unsigned_to_nat(0u);
return v___x_5_;
}
else
{
lean_object* v_a_6_; lean_object* v___x_7_; 
v_a_6_ = lean_ctor_get(v_x_2_, 0);
lean_inc_ref(v_a_6_);
lean_dec_ref(v_x_2_);
v___x_7_ = lean_apply_1(v_a_6_, v_i_3_);
return v___x_7_;
}
}
}
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_instA___boxed(lean_object* v_n_8_, lean_object* v_x_9_, lean_object* v_i_10_){
_start:
{
lean_object* v_res_11_; 
v_res_11_ = lp_subsetsum_SubsetSum_MITM_instA(v_n_8_, v_x_9_, v_i_10_);
lean_dec(v_n_8_);
return v_res_11_;
}
}
LEAN_EXPORT uint8_t lp_subsetsum_SubsetSum_MITM_liftS(lean_object* v_n_12_, lean_object* v_S_13_, lean_object* v_i_14_){
_start:
{
uint8_t v___x_15_; 
v___x_15_ = lean_nat_dec_lt(v_i_14_, v_n_12_);
if (v___x_15_ == 0)
{
lean_dec(v_i_14_);
lean_dec_ref(v_S_13_);
return v___x_15_;
}
else
{
lean_object* v___x_16_; uint8_t v___x_17_; 
v___x_16_ = lean_apply_1(v_S_13_, v_i_14_);
v___x_17_ = lean_unbox(v___x_16_);
return v___x_17_;
}
}
}
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_liftS___boxed(lean_object* v_n_18_, lean_object* v_S_19_, lean_object* v_i_20_){
_start:
{
uint8_t v_res_21_; lean_object* v_r_22_; 
v_res_21_ = lp_subsetsum_SubsetSum_MITM_liftS(v_n_18_, v_S_19_, v_i_20_);
lean_dec(v_n_18_);
v_r_22_ = lean_box(v_res_21_);
return v_r_22_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_subsetsum_Submission_Spec(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_subsetsum_Submission_Bridge(uint8_t builtin) {
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
