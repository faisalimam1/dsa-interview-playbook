/*
Problem: 268. Missing Number

Pattern: Sum Formula

Time Complexity: O(n)
Space Complexity: O(1)
*/

var missingNumber = function(nums) {

    const n = nums.length;
    const expectedSum = n * (n + 1) / 2;

    let actualSum = 0;

    for (const num of nums) {
        actualSum += num;
    }

    return expectedSum - actualSum;
};