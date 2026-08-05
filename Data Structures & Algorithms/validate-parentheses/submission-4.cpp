class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        for (char ch : s) {
            if (ch == '(' || ch == '{' || ch == '[') {
                stk.push(ch);
                continue;
            }
            if (stk.empty()) {
                return false;
            } else if (ch == ')' && stk.top() != '(') {
                return false;
            } else if (ch == '}' && stk.top() != '{') {
                return false;
            } else if (ch == ']' && stk.top() != '[') {
                return false;
            }
            stk.pop();
        }
        return stk.empty();
    }
};
