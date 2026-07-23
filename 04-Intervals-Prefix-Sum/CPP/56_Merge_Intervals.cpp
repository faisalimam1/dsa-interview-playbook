// LeetCode 56 - Merge Intervals
// Pattern: Intervals + Sorting
// Time: O(n log n)
// Space: O(n)

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {

        if (intervals.empty())
            return {};

        // Sort intervals by starting time
        sort(intervals.begin(), intervals.end());

        vector<vector<int>> merged;
        merged.push_back(intervals[0]);

        for (int i = 1; i < intervals.size(); i++) {

            // Overlapping interval
            if (intervals[i][0] <= merged.back()[1]) {
                merged.back()[1] = max(merged.back()[1], intervals[i][1]);
            }
            // Non-overlapping interval
            else {
                merged.push_back(intervals[i]);
            }
        }

        return merged;
    }
};
