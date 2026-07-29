class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = (int)cost.size();
        vector<int> dp(n + 1);
        dp[0] = 0;
        dp[1] = 0;
        for (int i = 2; i <= n; ++i) {
            int oneJump = dp[i - 1] + cost[i - 1];
            int twoJump = dp[i - 2] + cost[i - 2];
            dp[i] = min(oneJump, twoJump);
        }
        return dp[n];
    }
};
