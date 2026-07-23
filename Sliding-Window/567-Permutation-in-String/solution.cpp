#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        if (s1.size() > s2.size()) {
            return false;
        }

        vector<int> s1Freq(26, 0);
        vector<int> windowFreq(26, 0);

        // Build frequency tables
        for (int i = 0; i < s1.size(); i++) {
            s1Freq[s1[i] - 'a']++;
            windowFreq[s2[i] - 'a']++;
        }

        if (s1Freq == windowFreq) {
            return true;
        }

        // Slide the window across s2
        for (int right = s1.size(); right < s2.size(); right++) {

            windowFreq[s2[right] - 'a']++;                    // Add incoming character
            windowFreq[s2[right - s1.size()] - 'a']--;        // Remove outgoing character

            if (s1Freq == windowFreq) {
                return true;
            }
        }

        return false;
    }
};