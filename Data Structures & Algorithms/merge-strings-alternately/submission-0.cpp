class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n = ssize(word1), m = ssize(word2);
        string mergedString;
        int k = min(n, m);
        for (int i = 0; i < min(n, m); ++i) {
            mergedString += word1[i];
            mergedString += word2[i];
        }
        for (int i = k; i < n; ++i) {
            mergedString += word1[i];
        }
        for (int i = k; i < m; ++i) {
            mergedString += word2[i];
        }
        return mergedString;
    }
};
