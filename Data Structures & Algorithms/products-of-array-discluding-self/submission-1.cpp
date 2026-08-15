class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = ssize(nums);
        vector<int> ans(n, 1);
        for (int i = 1; i < n; ++i) {
            ans[i] = ans[i - 1] * nums[i - 1];
        }
        int x = 1;
        for (int i = n - 2; i >= 0; --i) {
            x *= nums[i + 1];
            ans[i] *= x;
        }
        return ans;
    }
};
