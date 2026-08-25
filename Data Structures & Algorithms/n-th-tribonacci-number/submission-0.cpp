class Solution {
public:
    int tribonacci(int n) {
        int t0 = 0, t1 = 1, t2 = 1;
        if (n == 0) {
            return 0;
        } else if (n == 1 || n == 2) {
            return 1;
        }
        int nth = 0;
        for (int i = 3; i <= n; ++i) {
            nth = t0 + t1 + t2;
            t0 = t1;
            t1 = t2;
            t2 = nth;
        }
        return nth;
    }
};
