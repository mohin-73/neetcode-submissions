class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = ssize(prices);
        int curr = prices.front(), res = 0;
        for (int i = 1; i < n; ++i) {
            if (prices[i] > curr) {
                res += prices[i] - curr;
            }
            curr = prices[i];
        }
        return res;
    }
};
