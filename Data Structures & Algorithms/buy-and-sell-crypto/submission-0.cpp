class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = (int)prices.size();
        int mp = 0, bp = prices.front();
        for (int i = 1; i < n; ++i) {
            if (bp > prices[i]) {
                bp = prices[i];
                continue;
            }
            mp = max(mp, prices[i] - bp);
        }
        return mp;
    }
};
