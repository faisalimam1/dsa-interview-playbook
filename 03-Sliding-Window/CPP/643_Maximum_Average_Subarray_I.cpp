#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {

        int windowSum = 0;

        // Build the first fixed-size window of length k
        for (int i = 0; i < k; i++) {
            windowSum += nums[i];
        }

        int maxSum = windowSum;

        // Slide the fixed-size window across the array
        for (int right = k; right < nums.size(); right++) {

            windowSum += nums[right];        // Add incoming element
            windowSum -= nums[right - k];    // Remove outgoing element

            maxSum = max(maxSum, windowSum);
        }

        return (double)maxSum / k;
    }
};
