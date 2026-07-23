/*
Problem: 1480. Running Sum of 1D Array

Pattern: Running Sum

Time Complexity: O(n)
Space Complexity: O(1)
*/

var runningSum = function(nums) {

    for (let i = 1; i < nums.length; i++) {
        nums[i] += nums[i - 1];
    }

    return nums;
};