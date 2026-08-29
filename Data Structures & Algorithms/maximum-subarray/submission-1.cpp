class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = ssize(nums);
        int currSum = nums.front();
        int maxSum = nums.front();
        for (int i = 1; i < n; ++i) {
            currSum = max(currSum + nums[i], nums[i]);
            maxSum = max(maxSum, currSum);
        }
        return maxSum;
    }
};
