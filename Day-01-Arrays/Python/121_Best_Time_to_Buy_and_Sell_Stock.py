"""
Problem: 121. Best Time to Buy and Sell Stock

Pattern: Running Minimum / Greedy

Time Complexity: O(n)
Space Complexity: O(1)
"""

class Solution:
    def maxProfit(self, prices: list[int]) -> int:

        minPrice = prices[0]
        maxProfit = 0

        for price in prices[1:]:

            minPrice = min(minPrice, price)
            profit = price - minPrice
            maxProfit = max(maxProfit, profit)

        return maxProfit