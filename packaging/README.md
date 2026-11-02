# Subset Sum: O(2^(αn)) on the randomized word RAM

A Lean 4 proof that subset sum is solvable in time O(2^(αn)) on the
randomized word RAM model of the Big O Speedrun (bigospeedrun.com),
with α = 3/4.

## The program

A single finite program (≈250 instructions) for all input sizes n ≥ 2:
- **Prologue**: relocates the input block above the register file
  (RELOC = 2n + 23), computes h = n/2, and sets up arrays
- **Phase A**: builds the sorted subset sums of the first half
  {a₁, ..., a_h} by doubling merges (S_{k+1} = merge(S_k, S_k + a_{k+1}))
- **Phase B**: enumerates all 2^(n-h) subset sums s of the second half,
  binary-searches t − s in the sorted first-half sums
- **Small-n path** (n ≤ 3): unrolled verdicts

The program is deterministic (never uses `rand`), so correctness holds at
100% on every random tape, satisfying the 2/3 threshold trivially.

## The proof

- **Spec layer** (`Spec.lean`): the MITM decomposition theorem — a subset
  sum over h + n indices decomposes as a first-half sum s ≤ t and a
  shifted-second-half sum t − s
- **Bridge** (`Bridge.lean`): the statement's `Instance.yes` ↔ the spec's
  `isSum`
- **Sort** (`Sort.lean`): the doubling-merge construction produces sorted
  lists containing exactly the subset sums
- **Fit** (`Fit.lean`): all values fit in w-bit words (w ≥ 4(n + b))
- **Words** (`Words.lean`): BitVec ↔ Nat vocabulary, wrapped complements
  are unmatchable
- **ExecEq** (`ExecEq.lean`): the bench mirror IS the statement's `exec`
- **PhaseA/B/SmallN**: exec-level invariants for each program phase
- **Runtime**: the step bound T(n) = O(2^(n/2) · poly(n)) and the BigO
  discharge at α = 3/4
- **Race**: assembles everything into `SolvedInTime (3/4)`

## Building

```bash
lake build Submission
```

No Mathlib dependency — the proof uses only core Lean 4.
