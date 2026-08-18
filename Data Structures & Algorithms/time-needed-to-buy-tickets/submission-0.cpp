class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        queue<pair<int, int>> qp;
        int n = ssize(tickets);
        for (int i = 0; i < n; ++i) {
            qp.push({i, tickets[i]});
        }
        int time = 0;
        while (true) {
            ++time;
            auto [p, t] = qp.front();
            qp.pop();
            t = t - 1;
            if (t == 0) {
                if (p == k) {
                    break;
                }
            } else {
                qp.push({p, t});
            }
        }
        return time;
    }
};
