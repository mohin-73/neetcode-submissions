class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n = ssize(nums);
        int totalSum = accumulate(nums.begin(), nums.end(), 0);
        int maxSum, minSum, currSum1, currSum2;
        maxSum = minSum = currSum1 = currSum2 = nums.front();
        for (int i = 1; i < n; ++i) {
            currSum1 = max(currSum1 + nums[i], nums[i]);
            maxSum = max(maxSum, currSum1);
            currSum2 = min(currSum2 + nums[i], nums[i]);
            minSum = min(minSum, currSum2);
        }
        if (maxSum < 0) {
            return maxSum;
        }
        maxSum = max(maxSum, totalSum - minSum);
        return maxSum;
    }
};
