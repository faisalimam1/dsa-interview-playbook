/*
===============================================================================
                            DSA Interview Playbook
===============================================================================

Problem:
283. Move Zeroes

Link:
https://leetcode.com/problems/move-zeroes/

Pattern:
Two Pointers

Difficulty:
Easy

Approach:
Maintain a pointer indicating the position where the next non-zero element
should be placed. Swap the current non-zero element with the element at the
pointer and increment the pointer.

Time Complexity:
O(n)

Space Complexity:
O(1)

===============================================================================
*/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        int left = 0;

        for (int right = 0; right < nums.size(); right++) {

            if (nums[right] != 0) {
                swap(nums[left], nums[right]);
                left++;
            }
        }
    }
};