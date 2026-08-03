class Solution {
public:
    bool isValid(string s) {
        stack<int> stk;
        for (char ch : s) {
            if (ch == '(' || ch == '{' || ch == '[') {
                stk.push(ch);
                continue;
            }
            if (stk.empty()) {
                return false;
            } else if (stk.top() == '(' && ch == ')') {
                stk.pop();
            } else if (stk.top() == '{' && ch == '}') {
                stk.pop();
            } else if (stk.top() == '[' && ch == ']') {
                stk.pop();
            } else {
                return false;
            }
        }
        return stk.empty();
    }
};
