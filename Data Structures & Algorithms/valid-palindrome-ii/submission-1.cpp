class Solution {
public:
    bool isPalindrome(string &s, int left, int right) {
        while (left < right) {
            if (s[left++] != s[right--]) {
                return false;
            }
        }
        return true;
    }
    bool validPalindrome(string s) {
        int left = 0, right = ssize(s) - 1;
        while (left < right) {
            if (s[left] != s[right]) {
                bool x = isPalindrome(s, left + 1, right);
                bool y = isPalindrome(s, left, right - 1);
                return x || y;
            } else {
                ++left;
                --right;
            }
        }
        return true;
    }
};
