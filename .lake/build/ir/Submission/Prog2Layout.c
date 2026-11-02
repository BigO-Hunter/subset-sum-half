// Lean compiler output
// Module: Submission.Prog2Layout
// Imports: public import Init public meta import Init public import Submission.PhaseA public import Submission.Prog2
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
lean_object* lp_subsetsum_SubsetSum_MITM_instA(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_instA2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_instA2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_instA2(lean_object* v_n_1_, lean_object* v_x_2_, lean_object* v_h_3_, lean_object* v_i_4_){
_start:
{
lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_5_ = lean_nat_add(v_i_4_, v_h_3_);
v___x_6_ = lp_subsetsum_SubsetSum_MITM_instA(v_n_1_, v_x_2_, v___x_5_);
return v___x_6_;
}
}
LEAN_EXPORT lean_object* lp_subsetsum_SubsetSum_MITM_instA2___boxed(lean_object* v_n_7_, lean_object* v_x_8_, lean_object* v_h_9_, lean_object* v_i_10_){
_start:
{
lean_object* v_res_11_; 
v_res_11_ = lp_subsetsum_SubsetSum_MITM_instA2(v_n_7_, v_x_8_, v_h_9_, v_i_10_);
lean_dec(v_i_10_);
lean_dec(v_h_9_);
lean_dec(v_n_7_);
return v_res_11_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_subsetsum_Submission_PhaseA(uint8_t builtin);
lean_object* initialize_subsetsum_Submission_Prog2(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_subsetsum_Submission_Prog2Layout(uint8_t builtin) {
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
res = initialize_subsetsum_Submission_PhaseA(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_subsetsum_Submission_Prog2(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
