#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxVowels(string s, int k) {

        auto isVowel = [](char c) {
            return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
        };

        int vowelCount = 0;

        // Build the first fixed-size window of length k
        for (int i = 0; i < k; i++) {
            if (isVowel(s[i])) {
                vowelCount++;
            }
        }

        int maxCount = vowelCount;

        // Slide the fixed-size window across the string
        for (int right = k; right < s.size(); right++) {

            if (isVowel(s[right])) {         // Add incoming character
                vowelCount++;
            }

            if (isVowel(s[right - k])) {     // Remove outgoing character
                vowelCount--;
            }

            maxCount = max(maxCount, vowelCount);
        }

        return maxCount;
    }
};
