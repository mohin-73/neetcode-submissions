class Solution {
public:
    bool isSubsequence(string s, string t) {
        if (s.empty()) {
            return true;
        }
        int curr = 0, len = ssize(s);
        for (char ch : t) {
            if (s[curr] == ch) {
                if (++curr == len) {
                    return true;
                }
            }
            
        }
        return false;
    }
};
