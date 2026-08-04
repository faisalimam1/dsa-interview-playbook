/*
Problem: LeetCode 242 - Valid Anagram

Pattern:
Hashing / Frequency Counting

Approach:
- If the lengths differ, they cannot be anagrams.
- Count the frequency of each character in the first string.
- Decrease the frequency using the second string.
- If all frequencies become zero, the strings are anagrams.

Time Complexity: O(n)
Space Complexity: O(1)
(Only 26 lowercase English letters)
*/

#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    bool isAnagram(const string& s, const string& t) {
        if (s.length() != t.length()) {
            return false;
        }

        vector<int> frequency(26, 0);

        for (char ch : s) {
            frequency[ch - 'a']++;
        }

        for (char ch : t) {
            frequency[ch - 'a']--;
        }

        for (int count : frequency) {
            if (count != 0) {
                return false;
            }
        }

        return true;
    }
};
