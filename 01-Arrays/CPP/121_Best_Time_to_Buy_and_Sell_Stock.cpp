/*
===============================================================================
                            DSA Interview Playbook
===============================================================================

Problem:
121. Best Time to Buy and Sell Stock

Link:
https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

Pattern:
Running Minimum / Greedy

Difficulty:
Easy

Approach:
Traverse the array once while maintaining the minimum stock price seen so far.
At each step, calculate the profit by selling on the current day and update the
maximum profit if it is greater.

Time Complexity:
O(n)

Space Complexity:
O(1)

Key Insight:
Maintain two state variables:
1. minPrice  -> Lowest stock price seen so far.
2. maxProfit -> Maximum profit achievable so far.

===============================================================================
*/

class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int minPrice = prices[0];
        int maxProfit = 0;

        for (int i = 1; i < prices.size(); i++) {

            if (prices[i] < minPrice)
                minPrice = prices[i];

            int profit = prices[i] - minPrice;

            if (profit > maxProfit)
                maxProfit = profit;
        }

        return maxProfit;
    }
};