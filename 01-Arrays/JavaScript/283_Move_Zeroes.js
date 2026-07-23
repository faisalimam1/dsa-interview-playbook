/*
Problem: 283. Move Zeroes

Pattern: Two Pointers

Time Complexity: O(n)
Space Complexity: O(1)
*/

var moveZeroes = function(nums) {

    let left = 0;

    for (let right = 0; right < nums.length; right++) {

        if (nums[right] !== 0) {

            [nums[left], nums[right]] = [nums[right], nums[left]];
            left++;
        }
    }
};