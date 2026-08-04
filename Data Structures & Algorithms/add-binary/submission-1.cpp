class Solution {
public:
    string addBinary(string a, string b) {
        while (a.length() < b.length()) {
            a = '0' + a;
        }
        while (a.length() > b.length()) {
            b = '0' + b;
        }
        string sum;
        int carry = 0;
        for (int i = (int)a.length() - 1; i >= 0; --i) {
            int x = carry + (a[i] - '0') + (b[i] - '0');
            sum.push_back((x % 2) + '0');
            carry = x / 2;
        }
        if (carry) {
            sum.push_back('1');
        }
        reverse(sum.begin(), sum.end());
        return sum;
    }
};
