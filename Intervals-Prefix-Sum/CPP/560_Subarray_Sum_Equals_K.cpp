// LeetCode 560 - Subarray Sum Equals K
// Pattern: Prefix Sum + Hash Map
// Time: O(n)
// Space: O(n)

#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        unordered_map<int, int> prefixCount;

        // Empty prefix sum
        prefixCount[0] = 1;

        int currentPrefix = 0;
        int count = 0;

        for (int num : nums) {

            currentPrefix += num;

            // Prefix sum needed to form sum = k
            int requiredPrefix = currentPrefix - k;

            if (prefixCount.count(requiredPrefix)) {
                count += prefixCount[requiredPrefix];
            }

            // Store current prefix sum
            prefixCount[currentPrefix]++;
        }

        return count;
    }
};
