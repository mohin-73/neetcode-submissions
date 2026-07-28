class Solution {
public:
    int maxLoot(vector<int>& nums, vector<int>& dp, int n) {
        if (n == 0) {
            return dp[n] = nums[0];
        } else if (n == 1) {
            return dp[n] = max(nums[0], nums[1]);
        }
        if (dp[n] != -1) {
            return dp[n];
        }
        return dp[n] = max(nums[n] + maxLoot(nums, dp, n - 2), maxLoot(nums, dp, n - 1));
    }
    int rob(vector<int>& nums) {
        int n = (int)nums.size();
        vector<int> dp(n, -1);
        return maxLoot(nums, dp, n - 1);
    }
};
