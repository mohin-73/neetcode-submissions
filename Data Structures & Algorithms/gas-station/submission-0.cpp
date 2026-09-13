class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = ssize(gas);
        int totalGas = 0, totalCost = 0;
        int currGas = 0, startIdx = 0;
        for (int i = 0; i < n; ++i) {
            totalGas += gas[i];
            totalCost += cost[i];
            currGas += gas[i] - cost[i];
            if (currGas < 0) {
                startIdx = i + 1;
                currGas = 0;
            }
        }
        return totalCost > totalGas ? -1 : startIdx;
    }
};
