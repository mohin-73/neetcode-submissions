class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = (int)strs.size();
        int minLen = INT_MAX;
        for (int i = 0; i < n; ++i) {
            minLen = min(minLen, (int)strs[i].size());
        }
        string commonPrefix;
        for (int i = 0; i < minLen; ++i) {
            char ch = strs[0][i];
            for (int j = 1; j < n; ++j) {
                if (strs[j][i] != ch) {
                    return commonPrefix;
                }
            }
            commonPrefix += ch;
        }
        return commonPrefix;
    }
};
