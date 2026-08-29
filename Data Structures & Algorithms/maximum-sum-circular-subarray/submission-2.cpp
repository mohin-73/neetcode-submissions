class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n = ssize(nums);
        int totalSum = accumulate(nums.begin(), nums.end(), 0);
        int maxSum, minSum, currMaxSum, currMinSum;
        maxSum = minSum = currMaxSum = currMinSum = nums.front();
        for (int i = 1; i < n; ++i) {
            currMaxSum = max(currMaxSum + nums[i], nums[i]);
            maxSum = max(maxSum, currMaxSum);
            currMinSum = min(currMinSum + nums[i], nums[i]);
            minSum = min(minSum, currMinSum);
        }
        if (maxSum < 0) {
            return maxSum;
        }
        maxSum = max(maxSum, totalSum - minSum);
        return maxSum;
    }
};
