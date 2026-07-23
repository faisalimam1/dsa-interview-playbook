# LeetCode 238 - Product of Array Except Self
# Pattern: Prefix & Suffix Products
# Time: O(n)
# Space: O(1) Extra Space (excluding output array)

from typing import List

class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:

        n = len(nums)
        answer = [0] * n

        # Store prefix products
        answer[0] = 1
        for i in range(1, n):
            answer[i] = answer[i - 1] * nums[i - 1]

        # Multiply with suffix products
        right_product = 1
        for i in range(n - 1, -1, -1):
            answer[i] *= right_product
            right_product *= nums[i]

        return answer
