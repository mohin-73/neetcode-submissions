class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int a = 0, b = 0, c1 = 0, c2 = 0, f1 = 0, f2 = 0;
        vector<int> r;
        for (int &n : nums) {
            if (a == n) {
                ++c1;
            } else if (b == n) {
                ++c2;
            } else if (c1 == 0) {
                a = n;
                c1 = 1;
            } else if (c2 == 0) {
                b = n;
                c2 = 1;
            } else {
                --c1;
                --c2;
            }
        }
        for (int &n : nums) {
            if (a == n) {
                ++f1;
            } else if (b == n) {
                ++f2;
            }
        }
        if (f1 * 3 > ssize(nums)) {
            r.push_back(a);
        }
        if (f2 * 3 > ssize(nums)) {
            r.push_back(b);
        }
        return r;
    }
};
