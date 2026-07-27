# Day 4 - Intervals & Prefix Sum

## Overview

Day 4 combined two patterns that both rely on **reusing precomputed work** instead of recomputing it:

- **Intervals** — sort by start time, then merge or compare neighbours in a single pass.
- **Prefix Sum** — carry a cumulative total so any range can be answered in constant time.

The unifying idea is that once the data is in the right order (sorted intervals, or a running cumulative total), a single linear scan is enough to answer questions that look like they need nested loops.

---

## Problems Solved

| LeetCode | Problem | Pattern | Difficulty |
|----------:|---------|---------|------------|
| 56 | Merge Intervals | Sort + Merge Overlapping Intervals | Medium |
| 238 | Product of Array Except Self | Prefix / Suffix Products | Medium |
| 560 | Subarray Sum Equals K | Prefix Sum + Hash Map | Medium |

---

## Concepts Covered

- Sorting as a preprocessing step
- Overlap condition (`current.start <= previous.end`)
- Merging by extending the end (`max(previous.end, current.end)`)
- Prefix products and suffix products
- Prefix sum as a running total
- Complement lookup (`currentPrefix - k`)
- Seeding the empty prefix (`prefixCount[0] = 1`)

---

## Pattern Recognition

**Reach for Intervals when the problem involves:**

- Start/end pairs, ranges, meetings, or bookings
- Merging, inserting, or removing overlaps
- Counting rooms, resources, or collisions

**Reach for Prefix Sum when the problem involves:**

- Range sum or range product queries
- "Subarray that sums to K"
- Counting subarrays with a target sum
- A result at index `i` that depends on everything to its left *and* right

---

## Complexity

| Pattern | Time | Space |
|---------|------|-------|
| Merge Intervals | O(n log n) | O(n) |
| Prefix / Suffix Products | O(n) | O(1) extra |
| Prefix Sum + Hash Map | O(n) | O(n) |

> Merge Intervals is dominated by the sort, not the merge scan.

---

## Key Takeaways

- Sorting by start time is what makes a single-pass merge correct—without it, overlaps can be missed.
- Product of Array Except Self avoids division by walking left-to-right, then right-to-left, reusing the output array to stay at O(1) extra space.
- `prefixCount[0] = 1` handles subarrays that start at index 0. Forgetting it is the single most common bug in Subarray Sum Equals K.
- Prefix Sum turns "sum of a range" into a subtraction, which is what makes the hash map complement trick work.

---

## Languages

- C++
- Python
- JavaScript

---

**Author:** Faisal Imam
