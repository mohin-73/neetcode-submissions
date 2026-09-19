class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temps) {
        int n = ssize(temps);
        vector<int> result(n, 0);
        stack<int> stk;
        for (int i = n - 1; i >= 0; --i) {
            while (!stk.empty() && temps[stk.top()] <= temps[i]) {
                stk.pop();
            }
            if (!stk.empty()) {
                result[i] = stk.top() - i;
            }
            stk.push(i);
        }
        return result;
    }
};
