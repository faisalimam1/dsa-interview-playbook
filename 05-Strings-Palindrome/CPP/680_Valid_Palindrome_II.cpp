/*
------------------------------------------------------------
Problem : LeetCode 680 - Valid Palindrome II
Pattern : String Two Pointers (One Allowed Deletion)
Difficulty : Easy

Approach
--------
1. Use two pointers:
      left  -> start of string
      right -> end of string

2. If characters match,
      move both pointers inward.

3. At the first mismatch,
      we have only two possibilities:
      - Skip the left character
      - Skip the right character

4. If either remaining substring is a palindrome,
      return true.

5. Otherwise return false.

Time Complexity  : O(n)
Space Complexity : O(1)
------------------------------------------------------------
*/

#include <string>
using namespace std;

class Solution {
public:

    // Checks whether substring s[left...right] is a palindrome.
    bool isPalindrome(const string& s, int left, int right) {

        while (left < right) {

            // Mismatch found
            if (s[left] != s[right])
                return false;

            left++;
            right--;
        }

        return true;
    }

    bool validPalindrome(string s) {

        int left = 0;
        int right = s.size() - 1;

        while (left < right) {

            // Characters match -> continue checking
            if (s[left] == s[right]) {
                left++;
                right--;
            }

            // First mismatch
            else {

                // Option 1 : Skip left character
                // Option 2 : Skip right character
                return isPalindrome(s, left + 1, right) ||
                       isPalindrome(s, left, right - 1);
            }
        }

        // Entire string is already a palindrome
        return true;
    }
};
