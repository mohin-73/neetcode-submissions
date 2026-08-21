class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0, n = ssize(s);
        int mx = 0;
        unordered_map<char, int> mp;
        for (int right = 0; right < n; ++right) {
            ++mp[s[right]];
            while (mp[s[right]] > 1) {
                --mp[s[left++]];
            }
            mx = max(mx, right - left + 1);
        }
        return mx;
    }
};
