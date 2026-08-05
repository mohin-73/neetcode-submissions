class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0;
        for (char ch : t) {
            if (i < ssize(s) && ch == s[i]) {
                ++i;
            }
        }
        return i == ssize(s);
    }
};
