class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> stk;
        for (string str : operations) {
            if (str == "+") {
                int k = stk.top();
                stk.pop();
                int x = k + stk.top();
                stk.push(k);
                stk.push(x);
            } else if (str == "D") {
                stk.push(stk.top() * 2);
            } else if (str == "C") {
                stk.pop();
            } else {
                stk.push((int)stol(str));
            }
        }
        int score = 0;
        while (!stk.empty()) {
            score += stk.top();
            stk.pop();
        }
        return score;
    }
};
