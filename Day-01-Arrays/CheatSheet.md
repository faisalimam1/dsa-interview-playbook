# 📄 Day 1 – Arrays Cheat Sheet

> **5-Minute Interview Revision**

---

# 🧠 Pattern Summary

| Pattern | Recognition Clues | Time | Space |
|---------|-------------------|------|------:|
| Single Pass Scan | Process every element once | O(n) | O(1) |
| Running Sum | Running total, cumulative sum | O(n) | O(1) |
| Prefix Sum | Multiple range sum queries | O(n) | O(n) |

---

# 🎯 Recognition Clues

| If you see... | Think... |
|---------------|----------|
| Running total | Running Sum |
| Sum till current index | Running Sum |
| Multiple range sum queries | Prefix Sum |
| Traverse every element once | Single Pass Scan |
| Best value while scanning | Running State |

---

# 📌 State Variables

| Problem | State Variables |
|----------|-----------------|
| Running Sum | `runningSum` |
| Richest Customer Wealth | `customerWealth`, `maxWealth` |
| Best Time to Buy & Sell Stock | `minPrice`, `maxProfit` |
| Maximum Subarray | `currentSum`, `maxSum` |

---

# 🔁 Loop Invariants

### Running Sum

> `runningSum` always stores the sum of all processed elements.

---

### Richest Customer Wealth

> `maxWealth` always stores the maximum customer wealth seen so far.

---

### Best Time to Buy & Sell Stock

> `minPrice` is the minimum price seen so far.

> `maxProfit` is the maximum profit seen so far.

---

### Maximum Subarray

> `currentSum` stores the best subarray ending at the current index.

---

# ⚡ Running Sum

### Formula

```cpp
runningSum += nums[i];
```

Recognition:

- Running total
- Cumulative value
- Sum till current index

Complexity

```
Time : O(n)

Space : O(1)
```

---

# ⚡ Prefix Sum

### Construction

```cpp
prefix[i] = prefix[i-1] + nums[i];
```

### Range Sum

```text
sum(L,R)

=

prefix[R]

-

prefix[L-1]
```

Use Prefix Sum when there are **multiple range sum queries**.

---

# ⏱ Complexity Cheat Sheet

| Operation | Complexity |
|------------|-----------:|
| Access | O(1) |
| Update | O(1) |
| Search | O(n) |
| Traverse | O(n) |
| Insert Beginning | O(n) |
| Insert Middle | O(n) |
| Delete | O(n) |

---

# ❌ Common Mistakes

- Forgetting to initialize state variables.
- Updating variables in the wrong order.
- Confusing Running Sum with Prefix Sum.
- Recomputing values instead of reusing previous work.
- Ignoring edge cases.

---

# 💼 Interview Checklist

Before writing code, identify:

- ✅ Pattern
- ✅ State Variables
- ✅ Loop Invariant
- ✅ Brute Force
- ✅ Optimization
- ✅ Time Complexity
- ✅ Space Complexity

---

# 🎤 Common Interview Questions

- Why is array indexing O(1)?
- Why is insertion in the middle O(n)?
- Running Sum vs Prefix Sum?
- Why does Prefix Sum work?
- Why can Running Sum overwrite the input array?
- What is a loop invariant?
- What is a state variable?

---

# 🚀 Key Takeaways

- Every optimization removes repeated work.
- Think in terms of **patterns**, not problems.
- State variables drive single-pass algorithms.
- Loop invariants help prove correctness.
- Always derive the optimal solution instead of memorizing it.

---

# 📝 Problems Covered

| # | Problem | Pattern |
|---|---------|---------|
| 1480 | Running Sum of 1D Array | Running Sum |
| 1672 | Richest Customer Wealth | Single Pass Traversal |
| 121 | Best Time to Buy & Sell Stock | Running Minimum |
| 53 | Maximum Subarray | Kadane's Algorithm |
| 217 | Contains Duplicate | Hash Set |
| 268 | Missing Number | Sum / XOR |
| 283 | Move Zeroes | Two Pointers Foundation |

---

> **Remember:** Strong interview performance comes from recognizing patterns, maintaining the correct state, and explaining your reasoning clearly.
