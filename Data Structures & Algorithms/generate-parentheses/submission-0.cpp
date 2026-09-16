class Solution {
public:
    void solve(vector<string>& result, string par, int n, int op, int cl) {
        if (ssize(par) == 2 * n) {
            result.push_back(par);
            return;
        }
        if (op < n) {
            par.push_back('(');
            solve(result, par, n, op + 1, cl);
            par.pop_back();
        }
        if (cl < op) {
            par.push_back(')');
            solve(result, par, n, op, cl + 1);
            par.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        solve(result, "", n, 0, 0);
        return result;
    }
};
