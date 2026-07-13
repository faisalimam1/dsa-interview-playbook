/*

Problem:
1480. Running Sum of 1D Array

Link:
https://leetcode.com/problems/running-sum-of-1d-array/

Pattern:
Running Sum

Difficulty:
Easy

Approach:
Traverse the array once from left to right. Each element stores the running sum
by adding the previous running sum to the current element.

Time Complexity:
O(n)

Space Complexity:
O(1)

Key Insight:
The running sum at index i equals the running sum at index (i - 1) plus the
current element. Since previous elements are no longer needed in their original
form, the input array can be updated in-place.

===============================================================================
*/

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {

        for (int i = 1; i < nums.size(); i++) {
            nums[i] += nums[i - 1];
        }

        return nums;
    }
};