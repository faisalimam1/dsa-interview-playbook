/*
------------------------------------------------------------
Problem : LeetCode 5 - Longest Palindromic Substring
Pattern : Expand Around Center
Difficulty : Medium

Approach
--------
1. Every palindrome grows from a center.
2. A center can be:
      - A single character (odd-length palindrome)
      - Between two characters (even-length palindrome)
3. For every index in the string:
      - Expand around the odd center.
      - Expand around the even center.
4. Track the longest palindrome found.
5. Return the longest substring.

Time Complexity  : O(n^2)
Space Complexity : O(1)
------------------------------------------------------------
*/

class Solution {
public:

    // Expand from the given center and update the longest palindrome.
    void expandFromCenter(const string& s,
                          int left,
                          int right,
                          int& bestStart,
                          int& bestLength) {

        // Expand while characters match and pointers stay within bounds.
        while (left >= 0 &&
               right < s.size() &&
               s[left] == s[right]) {

            int currentLength = right - left + 1;

            // Update answer if a longer palindrome is found.
            if (currentLength > bestLength) {
                bestLength = currentLength;
                bestStart = left;
            }

            left--;
            right++;
        }
    }

    string longestPalindrome(string s) {

        if (s.empty())
            return "";

        int bestStart = 0;
        int bestLength = 1;

        for (int center = 0; center < s.size(); center++) {

            // Odd-length palindrome
            expandFromCenter(s,
                             center,
                             center,
                             bestStart,
                             bestLength);

            // Even-length palindrome
            expandFromCenter(s,
                             center,
                             center + 1,
                             bestStart,
                             bestLength);
        }

        return s.substr(bestStart, bestLength);
    }
};