/*
Problem: 121. Best Time to Buy and Sell Stock

Pattern: Running Minimum / Greedy

Time Complexity: O(n)
Space Complexity: O(1)
*/

var maxProfit = function(prices) {

    let minPrice = prices[0];
    let maxProfit = 0;

    for (let i = 1; i < prices.length; i++) {

        minPrice = Math.min(minPrice, prices[i]);

        const profit = prices[i] - minPrice;

        maxProfit = Math.max(maxProfit, profit);
    }

    return maxProfit;
};