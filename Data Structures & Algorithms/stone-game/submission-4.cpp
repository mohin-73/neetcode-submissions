class Solution {
public:
    vector<vector<int>> dp{501, vector<int>(501, -1)};
    int solve(vector<int>& piles, int left, int right) {
        if (left == right) {
            return piles[left];
        }
        if (dp[left][right] != -1) {
            return dp[left][right];
        }
        int takeLeft = piles[left] - solve(piles, left + 1, right);
        int takeRight = piles[right] - solve(piles, left, right - 1);
        return dp[left][right] = max(takeLeft, takeRight);
    }
    bool stoneGame(vector<int>& piles) {
        return solve(piles, 0, ssize(piles) - 1) > 0;
    }
};
