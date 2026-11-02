// Lean compiler output
// Module: Submission.Race
// Imports: public import Init public meta import Init public import Submission.SubsetSumStatement public import Submission.Spec public import Submission.Bridge public import Submission.Sort public import Submission.Det public import Submission.ProgFacts public import Submission.Fit public import Submission.Words public import Submission.ExecEq public import Submission.Program public import Submission.Prologue public import Submission.PhaseA public import Submission.PhaseB public import Submission.SmallN public import Submission.Runtime
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
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_subsetsum_Submission_SubsetSumStatement(uint8_t builtin);
lean_object* initialize_subsetsum_Submission_Spec(uint8_t builtin);
lean_object* initialize_subsetsum_Submission_Bridge(uint8_t builtin);
lean_object* initialize_subsetsum_Submission_Sort(uint8_t builtin);
lean_object* initialize_subsetsum_Submission_Det(uint8_t builtin);
lean_object* initialize_subsetsum_Submission_ProgFacts(uint8_t builtin);
lean_object* initialize_subsetsum_Submission_Fit(uint8_t builtin);
lean_object* initialize_subsetsum_Submission_Words(uint8_t builtin);
lean_object* initialize_subsetsum_Submission_ExecEq(uint8_t builtin);
lean_object* initialize_subsetsum_Submission_Program(uint8_t builtin);
lean_object* initialize_subsetsum_Submission_Prologue(uint8_t builtin);
lean_object* initialize_subsetsum_Submission_PhaseA(uint8_t builtin);
lean_object* initialize_subsetsum_Submission_PhaseB(uint8_t builtin);
lean_object* initialize_subsetsum_Submission_SmallN(uint8_t builtin);
lean_object* initialize_subsetsum_Submission_Runtime(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_subsetsum_Submission_Race(uint8_t builtin) {
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
res = initialize_subsetsum_Submission_Spec(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_subsetsum_Submission_Bridge(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_subsetsum_Submission_Sort(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_subsetsum_Submission_Det(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_subsetsum_Submission_ProgFacts(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_subsetsum_Submission_Fit(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_subsetsum_Submission_Words(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_subsetsum_Submission_ExecEq(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_subsetsum_Submission_Program(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_subsetsum_Submission_Prologue(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_subsetsum_Submission_PhaseA(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_subsetsum_Submission_PhaseB(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_subsetsum_Submission_SmallN(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_subsetsum_Submission_Runtime(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
