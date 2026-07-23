// LeetCode 560 - Subarray Sum Equals K
// Pattern: Prefix Sum + Hash Map
// Time: O(n)
// Space: O(n)

var subarraySum = function(nums, k) {

    const prefixCount = new Map();
    prefixCount.set(0, 1);

    let currentPrefix = 0;
    let count = 0;

    for (const num of nums) {

        currentPrefix += num;

        // Prefix sum needed to form sum = k
        const requiredPrefix = currentPrefix - k;

        if (prefixCount.has(requiredPrefix)) {
            count += prefixCount.get(requiredPrefix);
        }

        // Store current prefix sum
        prefixCount.set(
            currentPrefix,
            (prefixCount.get(currentPrefix) || 0) + 1
        );
    }

    return count;
};
