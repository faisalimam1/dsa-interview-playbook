/*
Problem: 1672. Richest Customer Wealth

Pattern: Single Pass Traversal

Time Complexity: O(m × n)
Space Complexity: O(1)
*/

var maximumWealth = function(accounts) {

    let maxWealth = 0;

    for (const customer of accounts) {

        let customerWealth = 0;

        for (const money of customer) {
            customerWealth += money;
        }

        maxWealth = Math.max(maxWealth, customerWealth);
    }

    return maxWealth;
};