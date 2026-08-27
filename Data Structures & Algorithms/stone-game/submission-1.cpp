#include <cstring>
class Solution {
public:
    int dp[501][501][2];
    int calScoreOfAlex(vector<int>& piles, int left, int right, int turn) {
        if (left > right) {
            return 0;
        }
        if (left == right) {
            return piles[left];
        }
        if (dp[left][right][turn] != -1) {
            return dp[left][right][turn];
        }
        int mxScore = 0;
        if (turn == 0) {
            int l = piles[left] + calScoreOfAlex(piles, left + 1, right, 1);
            int r = piles[right] + calScoreOfAlex(piles, left, right - 1, 1);
            mxScore += max(l, r);
        } else {
            int l = piles[left] + calScoreOfAlex(piles, left + 1, right, 0);
            int r = piles[right] + calScoreOfAlex(piles, left, right - 1, 0);
            mxScore += min(l, r);
        }
        return dp[left][right][turn] = mxScore;
    }
    bool stoneGame(vector<int>& piles) {
        memset(dp, -1, sizeof(dp));
        int left = 0, right = ssize(piles) - 1;
        int total = accumulate(piles.begin(), piles.end(), 0);
        int scoreOfAlex = calScoreOfAlex(piles, left, right, 0);
        return scoreOfAlex * 2 > total;
    }
};
