# 📚 Day 1 – Arrays

> *"Arrays are the foundation of almost every Data Structures & Algorithms interview. Understanding how to traverse, maintain state, and optimize computations on arrays is the first step toward solving more complex problems."*

---

# 📑 Table of Contents

- Introduction
- Learning Objectives
- Why Arrays Matter
- Time Complexity Cheat Sheet
- Single Pass Traversal
- State Variables
- Loop Invariants
- Running Sum
- Prefix Sum
- Interview Framework
- Problems Covered
- Complexity Summary
- Common Mistakes
- Interview Tips
- Revision Cheat Sheet
- What's Next?

---

# 🎯 Learning Objectives

By the end of this chapter, I should be able to:

- Understand how arrays are stored in memory.
- Analyze the time complexity of common array operations.
- Traverse arrays efficiently using a single pass.
- Maintain state variables while scanning an array.
- Identify Running Sum and Prefix Sum patterns.
- Explain my approach clearly during technical interviews.

---

# 📖 What is an Array?

An array is a linear data structure that stores elements of the same data type in **contiguous memory locations**.

Because the memory is contiguous, accessing an element by its index takes constant time.

```cpp
arr[5]
```

Time Complexity:

```
O(1)
```

---

# 💡 Why Arrays Matter

Arrays are the most frequently used data structure in coding interviews.

Many advanced patterns are built on top of simple array traversal.

Examples include:

- Two Pointers
- Sliding Window
- Prefix Sum
- Binary Search
- Greedy Algorithms
- Dynamic Programming

Mastering arrays makes learning these patterns significantly easier.

---

# ⏱ Time Complexity Cheat Sheet

| Operation | Complexity |
|------------|-----------:|
| Access by Index | O(1) |
| Update | O(1) |
| Traverse | O(n) |
| Search | O(n) |
| Insert at End | O(1) (amortized) |
| Insert at Beginning | O(n) |
| Insert in Middle | O(n) |
| Delete | O(n) |

---

# 🔄 Single Pass Traversal

One of the most common interview techniques is scanning an array exactly once.

General template:

```cpp
for (int i = 0; i < nums.size(); i++)
{
    // Process nums[i]
}
```

Whenever a problem can be solved in a single traversal, aim for **O(n)** time complexity.

---

# 🧠 State Variables

A state variable stores information that is carried forward while traversing an array.

Examples:

| Problem | State Variable |
|----------|----------------|
| Running Sum | runningSum |
| Richest Customer Wealth | maxWealth |
| Best Time to Buy & Sell Stock | minPrice, maxProfit |
| Maximum Subarray | currentSum, maxSum |
| Contains Duplicate | visited |
| Move Zeroes | leftPointer |

Ask yourself before coding:

> **What information must I remember while moving from left to right?**

The answer often reveals the correct state variables.

---

# 🔁 Loop Invariants

A loop invariant is a condition that remains true before and after every iteration.

Examples:

Running Sum:

> `runningSum` always stores the sum of all elements processed so far.

Richest Customer Wealth:

> `maxWealth` always stores the highest customer wealth seen so far.

Understanding invariants makes it easier to reason about correctness.

---

# ➕ Pattern 1 – Running Sum

### Recognition Clues

- Running total
- Cumulative sum
- Sum till current index

Instead of repeatedly summing from the beginning of the array, maintain a running total.

```
runningSum += nums[i]
```

Time Complexity:

```
O(n)
```

Space Complexity:

```
O(1)
```

---

# ➕ Pattern 2 – Prefix Sum

A Prefix Sum array stores the cumulative sum at every index.

Example:

```
Array

2 5 3 8 1
```

Prefix Sum

```
2 7 10 18 19
```

Range Sum Formula:

```
Prefix[R] - Prefix[L-1]
```

This allows answering multiple range sum queries in constant time after preprocessing.

---

# 🎤 Interview Framework

For every problem, follow this sequence:

1. Clarify the problem.
2. Restate it in your own words.
3. Solve a small example manually.
4. Explain the brute-force approach.
5. Analyze complexity.
6. Identify the pattern.
7. Optimize the solution.
8. Dry run.
9. Code.
10. Discuss complexity and edge cases.

---

# 📝 Problems Covered

| Problem | Pattern |
|----------|----------|
| Running Sum of 1D Array (#1480) | Running Sum |
| Richest Customer Wealth (#1672) | Single Pass Traversal |

> More Day 1 problems will be added as they are completed.

---

# 📊 Complexity Summary

| Pattern | Time | Space |
|----------|------|------:|
| Running Sum | O(n) | O(1) |
| Prefix Sum Construction | O(n) | O(n) |
| Single Pass Scan | O(n) | O(1) |

---

# ⚠ Common Mistakes

- Forgetting to initialize state variables.
- Updating variables in the wrong order.
- Ignoring edge cases such as empty arrays.
- Confusing Running Sum with Prefix Sum.
- Recomputing values instead of reusing previous work.

---

# 💼 Interview Tips

Before writing code, always identify:

- State Variables
- Loop Invariant
- Termination Condition
- Time Complexity
- Space Complexity

During the interview:

- Explain your thought process.
- Start with brute force.
- Justify every optimization.
- Dry run your solution before finishing.

---

# 📌 Revision Cheat Sheet

### Recognition Clues

| If you see... | Think... |
|---------------|----------|
| Running Total | Running Sum |
| Sum till current index | Running Sum |
| Multiple Range Sum Queries | Prefix Sum |
| Scan every element once | Single Pass Traversal |

---

### State Variables Learned

- runningSum
- maxWealth

---

### Core Ideas

- Reuse previous computations.
- Avoid repeated work.
- Maintain state while scanning.
- Optimize after understanding brute force.

---

# 🚀 What's Next?

The next chapter introduces one of the most important interview patterns:

> **Day 2 – Two Pointers**

We'll learn how to solve problems efficiently by moving two indices through an array instead of repeatedly traversing it.
