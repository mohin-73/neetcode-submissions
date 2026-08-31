class Solution {
public:
    bool isAnagram(string s, string t) {
        if (ssize(s) != ssize(t)) {
            return false;
        }
        vector<int> freq(26, 0);
        for (int i = 0; i < ssize(s); ++i) {
            ++freq[s[i] - 'a'];
            --freq[t[i] - 'a'];
        }
        for (int x : freq) {
            if (x != 0) {
                return false;
            }
        }
        return true;
    }
};
