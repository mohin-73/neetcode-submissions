class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = (int)nums.size();
        int maxSum, currSum;
        maxSum = currSum = nums[0];
        for (int i = 1; i < n; ++i) {
            currSum = max(currSum + nums[i], nums[i]);
            maxSum = max(maxSum, currSum);
        }
        return maxSum;
    }
};
