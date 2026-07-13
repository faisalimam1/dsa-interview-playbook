"""
Problem: 268. Missing Number

Pattern: Sum Formula

Time Complexity: O(n)
Space Complexity: O(1)
"""

class Solution:
    def missingNumber(self, nums: list[int]) -> int:

        n = len(nums)
        expectedSum = n * (n + 1) // 2
        actualSum = sum(nums)

        return expectedSum - actualSum