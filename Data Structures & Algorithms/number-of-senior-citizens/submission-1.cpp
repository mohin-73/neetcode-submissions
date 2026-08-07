class Solution {
public:
    int countSeniors(vector<string>& details) {
        int cnt = 0;
        for (string &str : details) {
            if (str[11] >= '7') {
                ++cnt;
                continue;
            }
            if (str[11] >= '6' && str[12] >= '1') {
                ++cnt;
            }
        }
        return cnt;
    }
};
