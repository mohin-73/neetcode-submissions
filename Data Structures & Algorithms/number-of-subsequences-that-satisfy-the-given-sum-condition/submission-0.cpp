class Solution {
public:
    int mod = 1e9 + 7;
    int numSubseq(vector<int>& nums, int target) {
        int n = ssize(nums);
        sort(nums.begin(), nums.end());
        vector<int> power(n);
        power[0] = 1;
        for (int i = 1; i < n; ++i) {
            power[i] = (int)((2LL * power[i - 1]) % mod);
        }
        int left = 0, right = n - 1, res = 0;
        while (left <= right) {
            if (nums[left] + nums[right] > target) {
                --right;
            } else {
                res = (res % mod + power[right - left] % mod) % mod;
                ++left;
            }
        }
        return res;
    }
};
