/*
===============================================================================
                            DSA Interview Playbook
===============================================================================

Problem:
268. Missing Number

Link:
https://leetcode.com/problems/missing-number/

Pattern:
Sum Formula

Difficulty:
Easy

Time Complexity:
O(n)

Space Complexity:
O(1)

===============================================================================
*/

class Solution {
public:
    int missingNumber(vector<int>& nums) {

        int n = nums.size();
        int expectedSum = n * (n + 1) / 2;
        int actualSum = 0;

        for (int num : nums) {
            actualSum += num;
        }

        return expectedSum - actualSum;
    }
};