class Solution {
public:
    int minCost(vector<int>& cost, vector<int>& dp, int n) {
        if (n <= 1) {
            return dp[n] = 0;
        }
        if (dp[n] != -1) {
            return dp[n];
        }
        int twoJump = minCost(cost, dp, n - 2) + cost[n - 2];
        int oneJump = minCost(cost, dp, n - 1) + cost[n - 1];
        return dp[n] = min(oneJump, twoJump);
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n = (int)cost.size();
        vector<int> dp(n + 1, -1);
        return minCost(cost, dp, n);
    }
};
