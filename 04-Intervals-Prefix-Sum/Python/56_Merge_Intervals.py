# LeetCode 56 - Merge Intervals
# Pattern: Intervals + Sorting
# Time: O(n log n)
# Space: O(n)

from typing import List

class Solution:
    def merge(self, intervals: List[List[int]]) -> List[List[int]]:

        if not intervals:
            return []

        # Sort intervals by starting time
        intervals.sort()

        merged = [intervals[0]]

        for interval in intervals[1:]:

            # Overlapping interval
            if interval[0] <= merged[-1][1]:
                merged[-1][1] = max(merged[-1][1], interval[1])
            # Non-overlapping interval
            else:
                merged.append(interval)

        return merged
