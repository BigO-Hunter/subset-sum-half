# VERDICT — α=1/2 vehicle: the v2 lane

**Decision (2026-11-02, R2125607414/R2125607749):** `/Volumes/Substrate-1/bigo/subsetsum-v2-snapshot`
is the sole vehicle for the 1/2 filing. The classic-mitm lane
(`subsetsum-classic-mitm`) is **parked as fallback**, not merged and not deleted.

**Evidence, measured by building both lanes to `Submission` (lake, v4.34.1, /opt/homebrew/bin/lake):**

| | v2 lane | classic-mitm lane |
|---|---|---|
| before this session | 24/25 modules green; `Prog2Merge2` FAIL (5 errors) | 14/15 modules green; `PhaseDA` FAIL (14 errors) |
| after this session | **26/26 modules, 0 errors** (`lake build Submission`, 26 jobs) | unchanged, 14/15 |
| end-to-end proof | `Race_bound : SolvedInTime (75/100)` **fully green** — validates the whole composition chain (exec→det-collapse→BigO→Race) | none: `Race.bound` is a conditional placeholder over `bound_of_program` |
| proven phase walks for the 1/2 program | prologue, `phaseA_exec` (+cost `12+44·(2^h−1)+24h`), `canon_exec`, `phaseA_exec_p2`, `init2_exec`, `lswap2_exec`, **`round2_exec`/`lround2_exec`/`phaseA2_exec` (+cost `12+44·(2^m−1)+25m`)** | **zero** — prologue for 3/4 layout only, no phase walk |
| F-risks 1–3 (report §3F) | **all discharged in-tree**: wide envelope `pro_addr_lt2` (base case `by decide`, n≥4), `prog2_no_rand` (ProgFacts import present), `halfSums_head_zero` general in `a` (free for the 2nd half) | n/a (different design) |
| axiom hygiene | `propext, Classical.choice, Quot.sound` only — verified with `#print axioms` on every phase theorem, **no `sorryAx`** | same three on the analytic core |
| what it still lacks | `scanB_exec` (pcs 224→243), prog2 budget chain (5 phases), `Race.bound (1/2)` | `PhaseDA` fix, `PhaseDB` walk (program segment exists, no proof), `hcorr`, `hhalts`, unconditional race |

v2 wins on accumulated *proven* mass for the 1/2 program (12.8k green lines, 3 of 6 phase groups done,
3 of 5 report F-risks pre-discharged) and on having a green end-to-end template to copy for the final
assembly. The classic lane's asset — `mitmDA_iff`, `daCost_le ≤ 84·2^((n+1)/2)`, `flat_bigO_half (1/2)`,
`den_one_half`/`num_one_half` — is a **salvage set**: if `scanB_exec` proves harder than `PhaseDB`, the
direct-address core is the alternative, and its `Rat` lemmas for the literal `1/2` are needed by either
lane. The 3/4 bound in v2 (`Race_bound`) is correct but **unlistable** — the 2026-11-02 ruling gives a
proof run only at α ≤ 1/2; it now serves purely as an assembly template.

**F-risk 5 (packaging):** satisfied structurally — `Submission.lean` at repo root, modules under
`Submission/`, vendored statement byte-exact (`sha256 80bc6d28…`, content-identical in both lanes), bound
carried as a reduced rational, no Mathlib. `packaging/` still describes the dead 3/4 payload and the
pipeline targets the *darkhipo* repo; both must be repointed at filing time (fresh repo).

**PROGRESS 2026-11-02 (later session):** items (1) and the battery are DONE.
`Submission/Prog2PhaseA2.lean` proves `round2_exec` (173→223, `44·L+24`), `lround2_exec` (173→224) and
`phaseA2_exec` (161→224, `12 + 44·(2^m−1) + 25·m`) — `lake build Submission` is **26 jobs green**, no
sorry, and `#print axioms` gives the standard three for all of them.  The per-round constant is **25**,
not 24: a round costs `44·L+24` and the guard at pc 223 costs one more, which makes the induction exact —
`44·(2^m−2^(k−1)) + 25·(m+1−k) = 44·L+24+1 + [44·(2^m−2^k) + 25·(m−k)]`.  The prog2 rock battery runs
and passes **55/55** (`Bench2C.lean`, rewritten: the old file used `exec`'s closure memory, which is
Θ(t²) per run — n=24 needs 3.4·10¹⁰ chain traversals — so it could never finish; the new one uses an
Array-memory interpreter pinned three ways to the statement's `exec`).  Measured worst-case totals are
Θ(2^(n/2)): `prog2` 66.3→63.9 ×2^(n/2) over n=12..24 (growth 4.000 per n+4) while `prog`'s Phase B/2^m
climbs 144→184→224→264, i.e. the Θ(n) poly factor, measured.

**What remains, in order:** (1) `scanB_exec` (pcs 224→243) — the two-pointer sweep, accept-iff-witness;
`halfSums_head_zero`, `halfSumsSumLe` (no-wrap), `pairwise_getD_mono` and `mem_arrL` it needs are already
green in `Prog2Layout`; (2) the ≤-chain budgeting prologue + phaseA + canon + phaseA2 + scanB under one
`T = C·2^(n/2) + D·n` (phaseA carries `12+44·(2^h−1)+24h`, phaseA2 now `12+44·(2^m−1)+25m`; measured
C ≈ 64 with a ≥3× margin over the analytic 230); (3) `Race.bound : SolvedInTime (1/2)` via
`correct_of_det`, with `den_one_half`/`num_one_half` imported from the classic lane's salvage set.

**Open issues filed against this lane (register):** R2125607814 — **CLOSED by measurement**: the
battery was never swap-bound, it was O(t²) by construction; `Bench2C.lean` now runs it in seconds at
55/55, and the stale v1-era `Bench2.lean` is deleted. R2125607815 — the root `Submission.lean` is an
empty scaffold that does not import the proof (**still open**: nothing to import until `Race.bound`
exists); R2125607816 — repoint `packaging/file.py` to the 1/2 payload and untrack `.lake` (still open).
Read those before filing.

**Filing payload:** repo `subsetsum-v2-snapshot` (no remote yet — push to a fresh repo at filing; never
darkhipo/subset-sum-mitm, never GitHub issue #94), SHA `2536a1d` + the commits that follow this one,
entry theorem `theorem Race.bound : BigOSpeedrun.SubsetSum.SolvedInTime (1/2)`, bound **1/2**, toolchain
`leanprover/lean4:v4.34.1`, trusted statement `sha256 80bc6d28…`.
