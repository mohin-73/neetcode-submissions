class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> ans;
        stack<int> stk;
        for (int wt : asteroids) {
            bool flag = true;
            while (flag) {
                if (stk.empty()) {
                    stk.push(wt);
                    break;
                }
                int k = stk.top();
                if ((k > 0 && wt > 0) || (k < 0 && wt < 0)) {
                    stk.push(wt);
                    break;
                }
                if (k > 0 && wt < 0) {
                    if (abs(k) == abs(wt)) {
                        stk.pop();
                        flag = false;
                    } else if (abs(k) < abs(wt)) {
                        stk.pop();
                    } else {
                        flag = false;
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
