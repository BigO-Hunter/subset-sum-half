# VERDICT — α=1/2 vehicle: the v2 lane

**Decision (2026-11-02, R2125607414/R2125607749):** `/Volumes/Substrate-1/bigo/subsetsum-v2-snapshot`
is the sole vehicle for the 1/2 filing. The classic-mitm lane
(`subsetsum-classic-mitm`) is **parked as fallback**, not merged and not deleted.

**Evidence, measured by building both lanes to `Submission` (lake, v4.34.1, /opt/homebrew/bin/lake):**

| | v2 lane | classic-mitm lane |
|---|---|---|
| before this session | 24/25 modules green; `Prog2Merge2` FAIL (5 errors) | 14/15 modules green; `PhaseDA` FAIL (14 errors) |
| after this session | **25/25 modules, 0 errors** (`lake build Submission`) | unchanged, 14/15 |
| end-to-end proof | `Race_bound : SolvedInTime (75/100)` **fully green** — validates the whole composition chain (exec→det-collapse→BigO→Race) | none: `Race.bound` is a conditional placeholder over `bound_of_program` |
| proven phase walks for the 1/2 program | prologue, `phaseA_exec` (+cost `12+44·(2^h−1)+24h`), `canon_exec`, `phaseA_exec_p2`, `init2_exec`, `lswap2_exec` | **zero** — prologue for 3/4 layout only, no phase walk |
| F-risks 1–3 (report §3F) | **all discharged in-tree**: wide envelope `pro_addr_lt2` (base case `by decide`, n≥4), `prog2_no_rand` (ProgFacts import present), `halfSums_head_zero` general in `a` (free for the 2nd half) | n/a (different design) |
| axiom hygiene | `propext, Classical.choice, Quot.sound` only — verified with `#print axioms` on every phase theorem, **no `sorryAx`** | same three on the analytic core |
| what it still lacks | `round2_exec`/`lround2_exec`/`phaseA2_exec` (2nd-half round driver), `scanB_exec`, prog2 budget chain, `Race.bound (1/2)` | `PhaseDA` fix, `PhaseDB` walk (program segment exists, no proof), `hcorr`, `hhalts`, unconditional race |

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

**What remains, in order:** (1) `round2_exec` → `lround2_exec` → `phaseA2_exec` — port
`PhaseA.round_exec` (and its `Prog2PhaseA.round_exec_p2` twin) to `instA2 x h` / bases `B2,B3` / pcs
173→223; (2) `scanB_exec` (pcs 224→243) — the two-pointer sweep, accept-iff-witness; `halfSums_head_zero`
and the Pairwise/getD monotonicity lemmas it needs are already green in `Prog2Layout`; (3) the ≤-chain
budgeting prologue + phaseA + canon + phaseA2 + scanB under one `T = C·2^(n/2) + D·n`; (4) `Race.bound :
SolvedInTime (1/2)` via `correct_of_det`, with `den_one_half`/`num_one_half` imported from the classic
lane's salvage set.

**Filing payload:** repo `subsetsum-v2-snapshot` (no remote yet — push to a fresh repo at filing; never
darkhipo/subset-sum-mitm, never GitHub issue #94), SHA `2536a1d` + the commits that follow this one,
entry theorem `theorem Race.bound : BigOSpeedrun.SubsetSum.SolvedInTime (1/2)`, bound **1/2**, toolchain
`leanprover/lean4:v4.34.1`, trusted statement `sha256 80bc6d28…`.
