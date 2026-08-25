class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        if (str1 + str2 != str2 + str1) {
            return "";
        }
        int n = ssize(str1);
        int m = ssize(str2);
        return str1.substr(0, gcd(n, m));
    }
};
