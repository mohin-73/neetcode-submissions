class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = ssize(haystack);
        int len = ssize(needle), curr = 0;
        for (int idx = 0; idx < n; ++idx) {
            if (haystack[idx] == needle[curr]) {
                ++curr;
            } else {
                idx = idx - curr;
                curr = 0;
            }
            if (curr == len) {
                return idx - len + 1;
            }
        }
        return -1;
    }
};
