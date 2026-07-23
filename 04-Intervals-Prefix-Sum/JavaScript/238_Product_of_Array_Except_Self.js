// LeetCode 238 - Product of Array Except Self
// Pattern: Prefix & Suffix Products
// Time: O(n)
// Space: O(1) Extra Space (excluding output array)

var productExceptSelf = function(nums) {

    const n = nums.length;
    const answer = new Array(n);

    // Store prefix products
    answer[0] = 1;
    for (let i = 1; i < n; i++) {
        answer[i] = answer[i - 1] * nums[i - 1];
    }

    // Multiply with suffix products
    let rightProduct = 1;

    for (let i = n - 1; i >= 0; i--) {
        answer[i] *= rightProduct;
        rightProduct *= nums[i];
    }

    return answer;
};
