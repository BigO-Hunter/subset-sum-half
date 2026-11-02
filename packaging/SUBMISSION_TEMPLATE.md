### Problem

subset-sum

### Repository URL

[TBD: your-repo-url]

### Commit SHA

[TBD: pinned-sha]

### Bound

1/2   <!-- for the prog2 payload; the 3/4 value below the old banner is DEAD: >1/2 gets no run -->

### Notes

Single finite program for all n ≥ 2. Deterministic (no `rand` used).
Meet-in-the-middle: sorted first-half sums via doubling merge, binary
search for complements. No Mathlib dependency.
