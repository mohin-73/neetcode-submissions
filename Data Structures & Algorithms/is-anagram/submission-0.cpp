class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> vec(26, 0);
        if (s.size() != t.size()) {
            return false;
        }
        int n = (int)s.size();
        for (int i = 0; i < n; ++i) {
            int v1 = (int)(s[i] - 'a');
            int v2 = (int)(t[i] - 'a');
            vec[v1] += 1;
            vec[v2] -= 1;
        }
        for (int &v : vec) {
            if (v != 0) {
                return false;
            }
        }
        return true;
    }
};
