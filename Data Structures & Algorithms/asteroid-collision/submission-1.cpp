class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> ans;
        stack<int> stk;
        for (int wt : asteroids) {
            while (true) {
                if (stk.empty()) {
                    stk.push(wt);
                    break;
                }
                int k = stk.top();
                if (k > 0 && wt < 0) {
                    if (abs(k) == abs(wt)) {
                        stk.pop();
                        break;
                    } else if (abs(k) < abs(wt)) {
                        stk.pop();
                    } else {
                        break;
                    }
                } else {
                    stk.push(wt);
                    break;
                }
            }
        }
        while (!stk.empty()) {
            ans.push_back(stk.top());
            stk.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
