# Day 2 – Two Pointers

## Pattern Learned

**Opposite-End Two Pointers**

---

## Problems Solved

| LeetCode | Problem | Difficulty |
|----------|---------|------------|
| 167 | Two Sum II – Input Array Is Sorted | Easy |
| 125 | Valid Palindrome | Easy |
| 11 | Container With Most Water | Medium |

---

## Pattern Recognition Clues

Use this pattern when:

- The array/string is sorted or can be processed from both ends.
- The answer depends on a pair of elements.
- Eliminating one side is logically safe.
- You're checking symmetry or optimizing a pair.

---

## State Variables

### Two Sum II

- left
- right
- currentSum

### Valid Palindrome

- left
- right

### Container With Most Water

- left
- right
- currentArea
- maxArea

---

## Complexity

| Problem | Time | Space |
|---------|------|-------|
| Two Sum II | O(n) | O(1) |
| Valid Palindrome | O(n) | O(1) |
| Container With Most Water | O(n) | O(1) |

---

## Languages

- C++
- Python
- JavaScript

---

## Interview Takeaways

- Derive brute force before optimization.
- Identify state variables before coding.
- Define loop invariants.
- Dry-run before implementation.
- Translate the same algorithm across multiple languages.