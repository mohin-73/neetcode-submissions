class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        int n = ssize(customers);
        int currTime = customers[0][0];
        double totalWaitingTime = 0;
        for (int i = 0; i < n; ++i) {
            currTime = max(currTime, customers[i][0]);
            totalWaitingTime += currTime + customers[i][1] - customers[i][0];
            currTime += customers[i][1];
        }
        return totalWaitingTime / n;
    }
};
