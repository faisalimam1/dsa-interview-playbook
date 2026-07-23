/*
===============================================================================
                            DSA Interview Playbook
===============================================================================

Problem:
1672. Richest Customer Wealth

Link:
https://leetcode.com/problems/richest-customer-wealth/

Pattern:
Single Pass Traversal

Difficulty:
Easy

Approach:
Traverse each customer's accounts, compute the total wealth for that customer,
and maintain the maximum wealth encountered.

Time Complexity:
O(m × n)

Space Complexity:
O(1)

Key Insight:
Maintain two state variables:
1. customerWealth -> Wealth of the current customer.
2. maxWealth -> Maximum wealth seen so far.

===============================================================================
*/

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {

        int maxWealth = 0;

        for (const auto& customer : accounts) {

            int customerWealth = 0;

            for (int money : customer) {
                customerWealth += money;
            }

            maxWealth = max(maxWealth, customerWealth);
        }

        return maxWealth;
    }
};