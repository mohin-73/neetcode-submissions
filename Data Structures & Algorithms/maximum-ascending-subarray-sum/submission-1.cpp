class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int maxSum = nums[0], currSum = nums[0];
        int n = ssize(nums);
        for (int i = 1; i < n; ++i) {
            if (nums[i] > nums[i - 1]) {
                currSum += nums[i];
                maxSum = max(maxSum, currSum);
            } else {
                currSum = nums[i];
            }
        }
        return maxSum;
    }
};
