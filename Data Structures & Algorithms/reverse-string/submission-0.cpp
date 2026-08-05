class Solution {
public:
    void revStr(vector<char>& str, int i, int j) {
        while (i < j) {
            swap(str[i++], str[j--]);
        }
    }
    void reverseString(vector<char>& s) {
        int i = 0, j = ssize(s) - 1;
        revStr(s, i, j);
    }
};
