class Solution {
public:
    double binExp(double b, int p) {
        if (p == 0) {
            return 1.00;
        }
        if (p == 1) {
            return b;
        }
        double half = binExp(b, p / 2);
        if (p % 2 == 0) {
            return half * half;
        }
        return half * half * b;
    }
    double myPow(double x, int n) {
        int p = abs(n);
        if (n < 0) {
            return 1.00 / binExp(x, p);
        }
        return binExp(x, n);
    }
};
