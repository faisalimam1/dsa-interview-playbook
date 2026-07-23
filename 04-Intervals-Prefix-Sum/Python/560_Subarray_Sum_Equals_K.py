# LeetCode 560 - Subarray Sum Equals K
# Pattern: Prefix Sum + Hash Map
# Time: O(n)
# Space: O(n)

from typing import List

class Solution:
    def subarraySum(self, nums: List[int], k: int) -> int:

        prefix_count = {0: 1}

        current_prefix = 0
        count = 0

        for num in nums:

            current_prefix += num

            # Prefix sum needed to form sum = k
            required_prefix = current_prefix - k

            if required_prefix in prefix_count:
                count += prefix_count[required_prefix]

            # Store current prefix sum
            prefix_count[current_prefix] = prefix_count.get(current_prefix, 0) + 1

        return count
