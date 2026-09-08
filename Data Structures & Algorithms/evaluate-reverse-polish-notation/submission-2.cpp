class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> res;
        for (auto token : tokens) {
            if (token == "+" || token == "-" || token == "*" || token == "/") {
                int a = res.top();
                res.pop();
                int b = res.top();
                res.pop();
                if (token == "+") {
                    res.push(b + a);
                } else if (token == "-") {
                    res.push(b - a);
                } else if (token == "*") {
                    res.push(b * a);
                } else {
                    res.push(b / a);
                }
            } else {
                res.push(stoi(token));
            }
        }
        return res.top();
    }
};

