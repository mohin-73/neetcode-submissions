class Solution {
public:
    int appendCharacters(string s, string t) {
        int n = ssize(t);
        int i = 0;
        for (char ch : s) {
            if (ch == t[i]) {
                ++i;
                if (i == n) {
                    goto jump;
                }
            }
        }
        jump:
        return n - i;
    }
};
