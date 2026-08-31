class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string str = strs.front();
        int len = ssize(str);
        for (const auto &st: strs) {
            len = min(len, (int)ssize(st));
        }
        int x = 0;
        while (x < len) {
            bool flag = true;
            for (const auto &st : strs) {
                if (str[x] != st[x]) {
                    flag = false;
                    break;
                }
            }
            if (!flag) {
                break;
            }
            ++x;
        }
        return str.substr(0, x);
    }
};
