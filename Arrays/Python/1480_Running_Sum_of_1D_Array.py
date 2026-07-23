"""
===============================================================================
                            DSA Interview Playbook
===============================================================================

Problem:
1480. Running Sum of 1D Array

Link:
https://leetcode.com/problems/running-sum-of-1d-array/

Pattern:
Running Sum

Difficulty:
Easy

Approach:
Traverse the array once from left to right. Update each element by adding the
previous running sum.

Time Complexity:
O(n)

Space Complexity:
O(1)

Key Insight:
Reuse the previous running sum instead of recomputing it.

===============================================================================
"""

class Solution:
    def runningSum(self, nums: list[int]) -> list[int]:

        for i in range(1, len(nums)):
            nums[i] += nums[i - 1]

        return nums