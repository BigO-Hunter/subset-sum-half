import Submission.SubsetSumStatement
import Submission.Prog2Race

/-!
# Subset-sum submission: deterministic MITM, `α = 1/2`

**Target, met:** `SubsetSum.MITM.Race.bound : SolvedInTime (1 / 2 : Rat)`.

```
theorem SubsetSum.MITM.Race.bound : BigOSpeedrun.SubsetSum.SolvedInTime (1 / 2 : Rat)
```

`#print axioms SubsetSum.MITM.Race.bound` gives
`[propext, Classical.choice, Quot.sound]` — no `sorryAx`, no extra axioms.

## The program (`prog2`)

One `List Instr` for all `n`, deterministic (no `rand`), no advice, no `c`:

* **prologue** (pcs 0–85) — relocation bootstrap: the whole input is copied
  above `2n` so the register file can reuse cells `0..8`;
* **phaseA** (86–147) — the doubling merge over the first half
  `a_1..a_h` (`h = ⌊n/2⌋`) producing the sorted `2^h` subset sums of the
  first half;
* **canon** (148–160) — move that array to the fixed address `3n+25` and
  record the base in cell 22;
* **phaseA2** (161–223) — the same doubling merge over the second half
  `a_{h+1}..a_n`, producing the sorted `2^(n−h)` subset sums of the second
  half;
* **scanB** (224–243) — the two-pointer sweep: `s = S₁[i] + S₂[j]`,
  `i++` on `s < t`, `j--` on `s > t`, accept on `s = t`, reject on
  exhaustion.  No subtraction, so no wrapped-complement reasoning;
* **smallN** (244–300) — the unrolled `n = 2, 3` verdicts.

## Why `α = 1/2`

Both merges are `Θ` of the *length* of the arrays they build
(`44·(2^k − 1) + 24k`) and the scan is `12·(2^h + 2^m) + 40`, so

```
T(n) ≤ 174·2^h + 55n + 306 ≤ 480·2^⌈(n+1)/2⌉ = hzn n,
```

and a *flat* horizon squares into `O(2^n)`:

```
(hzn n)^2 ≤ 480²·2·2^n.
```

There is deliberately no `poly(n)` factor: at `α = 1/2` a polynomial
factor would square to `2^n·poly(n)²`, which is not `O(2^n)`.  That is
exactly why this lane could not reuse the `α = 3/4` submission's
`stepBound n = 2^(n/2+20)·(n+2)^8` shape.

## Layout

| module | content |
|---|---|
| `Submission/Prog2.lean` | the instruction list and the label map |
| `Submission/Prog2Layout.lean` | the wide address envelope, `instA2`, no-wrap and sortedness helpers |
| `Submission/Prog2Prologue.lean` | the prologue walk for `prog2` (`prologue_exec2`) |
| `Submission/Prog2PhaseA.lean` | phaseA for `prog2` (`phaseA_exec_p2`) |
| `Submission/Prog2Canon.lean` | `canon_exec` |
| `Submission/Prog2Merge2.lean` | the merge loop `merge_exec_m2`, `init2_exec`, `lswap2_exec` |
| `Submission/Prog2PhaseA2.lean` | `round2_exec`, `lround2_exec`, `phaseA2_exec` |
| `Submission/Prog2ScanB.lean` | the sweep `scanB_exec` |
| `Submission/Prog2SmallN.lean` | the unrolled `n ≤ 3` verdicts |
| `Submission/Prog2Race.lean` | the composition, the `α = 1/2` `BigO`, `Race.bound` |

Toolchain `leanprover/lean4:v4.34.1`, **no Mathlib**.  The vendored statement
is `Submission/SubsetSumStatement.lean`, byte-exact (`sha256 80bc6d28…`).

## Disciplines this lane paid for

* Both `omega` traps are real here.  `omega` will not bind `2^k` atoms as
  naturals, and it silently drops hypotheses once `2^(n − n/2)` (a `Nat`
  subtraction of two variables) is in play, printing a bogus counterexample.
  Every arithmetic step involving the big numerals therefore goes through
  file-scope lemmas over *opaque* `A`/`B`/`P` instantiated at the real power
  terms (`budget2_arith`), and the few `omega` calls over powers carry their
  relations by hand (`1 ≤ 2^k` supplied explicitly).
* `set` is unavailable in this toolchain; the 3/4 lane's note about
  "introducing atoms with `set`" means *parameterising the lemma*, not the
  tactic.
* BitVec comparisons only reflect `Nat` comparisons when both sides fit the
  word, so `halfSumsSumLe` (no-wrap: `S₁[i] + S₂[j] ≤ Σ a < 2^w`) is what
  makes `scanB`'s `blt` a genuine arithmetic test.
-/
