# Day 5 - Strings: Palindrome & Expand Around Center

## Overview

Day 5 focuses on **palindrome-based string patterns**—checking symmetry with two pointers, and generating palindromes by expanding outward from a center.

The key idea: a palindrome is defined by its **center**. A string of length `n` has **`2n - 1` centers**—`n` odd-length centers (each character) and `n - 1` even-length centers (each gap between two characters). Expanding outward from every center covers every possible palindromic substring.

---

## Problems Solved

| LeetCode | Problem | Pattern | Difficulty |
|----------:|---------|---------|------------|
| 680 | Valid Palindrome II | Two Pointers + One Allowed Deletion | Easy |

---

## Concepts Covered

- Opposite-End Two Pointers on strings
- Palindrome validity check
- Branching at the first mismatch
- Helper function for substring palindrome check
- Odd vs even palindrome centers

---

## Pattern Recognition

Consider these patterns when the problem involves:

- Checking symmetry from both ends
- "Is it a palindrome after removing at most K characters"
- Longest / count of palindromic substrings
- Substrings that must read the same forwards and backwards

---

## Complexity

| Pattern | Time | Space |
|---------|------|-------|
| Two Pointers Palindrome Check | O(n) | O(1) |
| Two Pointers + One Deletion | O(n) | O(1) |

---

## Key Takeaways

- At the first mismatch with one deletion allowed, only **two** branches exist—skip left or skip right. No further branching is needed.
- Each branch is a plain palindrome check, so the total work stays O(n), not O(n²).
- A reusable `isPalindrome(s, left, right)` helper keeps the main function readable.

---

## Language

- C++

---

**Author:** Faisal Imam
