"""
Problem: 1672. Richest Customer Wealth

Pattern: Single Pass Traversal

Time Complexity: O(m × n)
Space Complexity: O(1)
"""

class Solution:
    def maximumWealth(self, accounts: list[list[int]]) -> int:

        maxWealth = 0

        for customer in accounts:

            customerWealth = 0

            for money in customer:
                customerWealth += money

            maxWealth = max(maxWealth, customerWealth)

        return maxWealth