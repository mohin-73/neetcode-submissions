class Solution {
public:
    string longestPalindrome(string s) {
        string longestPalindromicSubstring;
        int leftIndex = 0, rightIndex = 0, maxLength = 1;
        int n = s.length();
        for (int i = 0; i < n; ++i) {
            int l = i - 1;
            int r = i + 1;
            int currLength = 1;
            while (l >= 0 && r < n && s[l] == s[r]) {
                --l;
                ++r;
                currLength += 2;
            }
            if (currLength > maxLength) {
                leftIndex = l + 1;
                rightIndex = r - 1;
                maxLength = currLength;
            }
            if (i < n - 1 && s[i] == s[i + 1]) {
                currLength = 2;
                l = i - 1;
                r = i + 2;
                while (l >= 0 && r < n && s[l] == s[r]) {
                    --l;
                    ++r;
                    currLength += 2;
                }
                if (currLength > maxLength) {
                    leftIndex = l + 1;
                    rightIndex = r - 1;
                    maxLength = currLength;
                }
            } 
        }
        for (int i = leftIndex; i <= rightIndex; ++i) {
            longestPalindromicSubstring += s[i];
        }
        return longestPalindromicSubstring;
    }
};
