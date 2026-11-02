# VERDICT — α=1/2 FILED: `Race.bound : SolvedInTime (1/2)` is GREEN

**Status 2026-11-02 (campaign close).** The v2 lane (`subsetsum-v2-snapshot`) is
the 1/2 vehicle and the vehicle has arrived:

```lean
theorem SubsetSum.MITM.Race.bound : BigOSpeedrun.SubsetSum.SolvedInTime (1 / 2 : Rat)
```

`#print axioms SubsetSum.MITM.Race.bound` → `[propext, Classical.choice,
Quot.sound]`.  `lake build` → **30 jobs, 0 errors, 0 sorry**.  The classic-mitm
lane (`subsetsum-classic-mitm`) stays **parked as fallback**; nothing there was
touched, and its `den_one_half`/`num_one_half`/flat-`BigO` template were the
salvage set used here (attributed in `Prog2Race.lean`).

## What landed (the last three steps)

| step | what | where |
|---|---|---|
| 1 | `scanB_exec` (pcs 224→243): the two-pointer sweep, accept-iff-witness, cost `12·(2^h+2^m)+40` | `Prog2ScanB.lean` (653 lines) |
| 2 | the budget `≤`-chain, folded to `174·2^h + 55n + 306 ≤ hzn n = 480·2^⌈(n+1)/2⌉`, and `hzn_bigO : BigO hzn (1/2)` with `K = 460800` | `Prog2Race.lean` |
| 3 | `bign_run2` (five-segment composition) → `prog2_halts` → `Race.bound` | `Prog2Race.lean` |

### The sweep (step 1)
`ScanInv` — every pair outside the live rectangle `i ≤ a < |S₁|`, `b ≤ j`
misses `t`.  `scanInv_less`/`scanInv_gtr` extend it across `i++`/`j--` using
`sortedness` (`pairwise_getD_mono`); the reject arms discharge it: `i`
exhausted kills every row, and `j = 0` with `s > t` kills the rest because
`S₂[0] = 0` (`halfSums_head_zero`) makes every remaining `a` overshoot alone.
A round trip is ≤ 10 instructions and strictly decreases
`(|S₁|−i) + j`.  **No subtraction** — `halfSumsSumLe` gives
`S₁[i] + S₂[j] ≤ Σa < 2^w`, so the `blt` word compare IS the ℕ compare and the
3/4 lane's wrapped-complement machinery is unnecessary.

### The measured/analytic budget (step 2)
| segment | pcs | proven cost |
|---|---|---|
| prologue (`prologue_exec2`) | 0→86 | `236 + 6·(n+2−23)` |
| phaseA (`phaseA_exec_p2`) | 86→148 | `12 + 44·(2^h−1) + 24h` |
| canon (`canon_exec`) | 148→161 | `6·2^h + 6` |
| phaseA2 (`phaseA2_exec`) | 161→224 | `12 + 44·(2^m−1) + 25m` |
| scanB (`scanB_exec`) | 224→verdict | `12·(2^h+2^m) + 40` |

Folded with `2^m ≤ 2·2^h` and `24h+25m ≤ 49n`: `≤ 174·2^h + 49n + 6n + 306`.
The parked lane's prediction (analytic `≤ 230·2^(n/2) + O(n)`, measured C ≈ 64)
is **beaten on paper**: the analytic coefficient is 174, and the *filed* flat
horizon is 480 (`2.8×` margin over the analytic, `7.5×` over the measured).

**Flat, not polynomial.** At `α = 1/2` a `poly(n)` factor squares to
`2^n·poly(n)²`, which is not `O(2^n)`.  The 3/4 lane's
`stepBound n = 2^(n/2+20)·(n+2)^8` shape is therefore unusable here; the
horizon is `hzn n = 480·2^⌈(n+1)/2⌉` and `(hzn n)² ≤ 480²·2·2^n`.

## Two contract gaps closed on the way (both the same shape)

`scanB` reads cells that `phaseA2` *preserves but never reported* — `Pres
(AReg2 n)` is silent on cells `≤ 22` (they are exactly the register file) and
on the `S₁` strip (which lies inside `AReg2`).  Threaded as intrinsic facts
(no new hypotheses):

* `f' 5 = 2^h` and `f' 22 = f0 22` — the scan's `i`-bound and `S₁` base;
  `round2_exec` derives them from the merge's `Pres (MReg d L)`;
* `arrL f' A1 H = arrL f0 A1 H` — the `S₁` strip `[3n+25, 3n+25+2^h)` is
  disjoint from the merge's write region **only under `q < 2^h`**
  (`d ≥ 3n+26+2^h`), so the bound had to be carried: without it the strip's
  tail IS reachable by the merge.

## prologue/small-n: why `prog2` has its own

`resolve` maps labels through the *whole-program* offset table, so `prog` and
`prog2` share pcs 0–147 instruction-for-instruction **except pc 12**:
`blt 0 3 192` vs `blt 0 3 244` (smallN sits after scanB in prog2).  That one
differs is why a generic `exec`-prefix-congruence transport cannot be stated
without carrying the small-n guard's state through the walk — so the prologue
is duplicated (`Prog2Prologue.lean`, `section ExecWalk` only; the `inF`/
`memOf`/`up`/`exec_*_step` vocabulary is imported) and the small-n block is
ported with an exact **+52 pc shift** (`Prog2SmallN.lean`; every numeral in
`[192,300]` becomes its `+52` image, `fit_up` becomes `upFit`).

## Toolchain traps confirmed (both cost real time; both are real)

1. **`omega` will not bind `2^k` atoms as naturals** — even `0 ≤ 2^n` fails.
   Every arithmetic fact over the big numerals is a file-scope lemma over
   *opaque* `A`/`B`/`P` instantiated at the real power terms
   (`budget2_arith`), and the `omega` calls that do see powers carry their
   relations by hand (`1 ≤ 2^k` supplied explicitly).
2. **`omega` silently drops hypotheses once `2^(n − n/2)` is in play** (a
   `Nat` subtraction of two variables) and prints a *bogus counterexample*.
   The bridge `2^m = 2^(n−n/2)` is therefore applied by `rw` only, never by
   `omega`.
3. Newly confirmed: **`set` is unavailable** in v4.34.1 — the 3/4 lane's note
   about "introducing atoms with `set`" means *parameterising the lemma*, not
   the tactic.
4. `set`/`lt_trichotomy` absent → use `Nat.lt_trichotomy`, named definitions,
   and `let`.

## Filing payload

* repo `subsetsum-v2-snapshot`, **no remote yet** — push to a fresh repo at
  filing; **never** darkhipo/subset-sum-mitm, **never** GitHub issue #94.
* HEAD at close: the `THE SUMMIT` commit; the run is
  `3790108`, `55a…`/`a3b3d4c`/`05da3fe`/`4a50ef8`/`54c4738`/`fb07c66`
  preceding it (see `git log`).
* entry theorem `theorem Race.bound : BigOSpeedrun.SubsetSum.SolvedInTime (1/2)`
  (root module `Submission.lean` imports it, so `import Submission` + `#check
  SubsetSum.MITM.Race.bound` works).
* bound **1/2**; toolchain `leanprover/lean4:v4.34.1`; **no Mathlib**.
* trusted statement `Submission/SubsetSumStatement.lean`,
  `sha256 80bc6d282676fc056a220968a727ab983b8c5a280cb0d9f24561bb3c90867517`
  (byte-exact, unchanged).
* `lake build` (defaultTargets added) → 30 jobs, 0 errors, 0 sorry.
* `.lake/` is untracked and gitignored (R2125607816 closed).

## Register items

* **R2125607814** — CLOSED by measurement (the battery was O(t²) by
  construction; `Bench2C.lean` runs 55/55 in seconds).
* **R2125607815** — CLOSED: the root `Submission.lean` now imports the proof.
* **R2125607816** — CLOSED: `.lake` untracked + gitignored.  `packaging/`
  still describes the dead 3/4 payload and the pipeline still targets the
  *darkhipo* repo — **repoint at filing time only** (deliberately not touched
  here: the parked/competitor surfaces are out of bounds).
