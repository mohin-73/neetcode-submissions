class Solution {
public:
    string addBinary(string a, string b) {
        while (a.length() < b.length()) {
            a = '0' + a;
        }
        while (a.length() > b.length()) {
            b = '0' + b;
        }
        int len = a.length() - 1;
        string sum;
        int carry = 0;
        while (len >= 0) {
            int x = carry + a[len] + b[len] - '0' - '0';
            if (x % 2 == 1) {
                sum = '1' + sum;
            } else {
                sum = '0' + sum;
            }
            if (x > 1) {
                carry = 1;
            } else {
                carry = 0;
            }
            --len;
        }
        if (carry) {
            sum = '1' + sum;
        }
        return sum;
    }
};
