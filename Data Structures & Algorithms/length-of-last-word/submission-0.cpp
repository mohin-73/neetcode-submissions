class Solution {
public:
    int lengthOfLastWord(string s) {
        int start = ssize(s) - 1;
        while (start >= 0 && s[start] == ' ') {
            --start;
        }
        int cnt = 0;
        while (start >= 0 && s[start] != ' ') {
            ++cnt;
            --start;
        }
        return cnt;
    }
};
