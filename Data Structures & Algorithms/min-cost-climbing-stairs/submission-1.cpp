class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = (int)cost.size();
        int prev = 0;
        int curr = 0;
        for (int i = 2; i <= n; ++i) {
            int temp = curr;
            int oneJump = curr + cost[i - 1];
            int twoJump = prev + cost[i - 2];
            curr = min(oneJump, twoJump);
            prev = temp;
        }
        return curr;
    }
};
