# Day 3 - Sliding Window

## Overview

Day 3 focused on mastering the **Sliding Window** pattern—one of the most common techniques used in coding interviews to optimize problems involving contiguous subarrays and substrings.

Rather than memorizing templates, the focus was on understanding **when to expand a window, when to shrink it, and how to maintain a valid window** for different problem constraints.

---

## Problems Solved

| LeetCode | Problem | Pattern | Difficulty |
|----------:|---------|---------|------------|
| 643 | Maximum Average Subarray I | Fixed Sliding Window | Easy |
| 1456 | Maximum Number of Vowels in a Substring of Given Length | Fixed Sliding Window | Medium |
| 567 | Permutation in String | Sliding Window + Frequency Array | Medium |
| 209 | Minimum Size Subarray Sum | Variable Sliding Window | Medium |
| 1004 | Max Consecutive Ones III | Variable Sliding Window | Medium |

---

## Concepts Covered

- Fixed Size Sliding Window
- Variable Size Sliding Window
- Window Expansion
- Window Shrinking
- Window Validity
- Running Sum
- Running Count
- Frequency Array
- Loop Invariants
- State Variables

---

## Pattern Recognition

Consider using the Sliding Window technique when the problem involves:

- Contiguous subarrays
- Contiguous substrings
- Longest window
- Shortest window
- Maximum / Minimum
- Fixed-size window (k)
- "At most K"
- Running sum
- Running frequency/count

---

## Complexity

| Pattern | Time | Space |
|---------|------|-------|
| Fixed Sliding Window | O(n) | O(1) |
| Variable Sliding Window | O(n) | O(1) |
| Sliding Window + Frequency Array | O(n) | O(1) |

---

## Key Takeaways

- The Sliding Window framework remains the same across many problems.
- The **window validity condition** determines how the algorithm behaves.
- Choosing the correct state variables makes the implementation straightforward.
- Many brute-force O(n²) solutions can be optimized to O(n).

---

## Language

- C++

---

**Author:** Faisal Imam