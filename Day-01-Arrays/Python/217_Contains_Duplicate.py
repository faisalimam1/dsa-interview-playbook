"""
Problem: 217. Contains Duplicate

Pattern: Hash Set

Time Complexity: O(n)
Space Complexity: O(n)
"""

class Solution:
    def containsDuplicate(self, nums: list[int]) -> bool:

        seen = set()

        for num in nums:

            if num in seen:
                return True

            seen.add(num)

        return False