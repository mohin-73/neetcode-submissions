class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> freq(26, 0);
        int n = ssize(s);
        int left = 0;
        int maxFreq = 0;
        int res = 0;
        for (int right = 0; right < n; ++right) {
            maxFreq = max(maxFreq, ++freq[s[right] - 'A']);
            while ((right - left + 1) - maxFreq > k) {
                --freq[s[left++] - 'A'];
            }
            res = max(res, right - left + 1);
        }
        return res;
    }
};
