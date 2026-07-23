// LeetCode 56 - Merge Intervals
// Pattern: Intervals + Sorting
// Time: O(n log n)
// Space: O(n)

var merge = function(intervals) {

    if (intervals.length === 0)
        return [];

    // Sort intervals by starting time
    intervals.sort((a, b) => a[0] - b[0]);

    const merged = [intervals[0]];

    for (let i = 1; i < intervals.length; i++) {

        // Overlapping interval
        if (intervals[i][0] <= merged[merged.length - 1][1]) {
            merged[merged.length - 1][1] =
                Math.max(merged[merged.length - 1][1], intervals[i][1]);
        }
        // Non-overlapping interval
        else {
            merged.push(intervals[i]);
        }
    }

    return merged;
};
