class Solution {
public:
    int scoreOfString(string s) {
        int n = ssize(s), score = 0;
        for (int i = 0; i + 1 < n; ++i) {
            score += abs(s[i] - s[i + 1]);
        }
        return score;
    }
};
