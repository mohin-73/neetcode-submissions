class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n = ssize(nums);
        int cnt1 = 0, cnt2 = 0;
        for (int i = 1; i < n; ++i) {
            cnt1 += nums[i] >= nums[i - 1];
            cnt2 += nums[i] <= nums[i - 1];
        }
        return cnt1 == n - 1 || cnt2 == n - 1;
    }
};
