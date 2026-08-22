class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n = ssize(nums);
        int cnt1 = 1, cnt2 = 1, mx = 1;
        for (int i = 1; i < n; ++i) {
            if (nums[i] > nums[i - 1]) {
                mx = max(mx, ++cnt1);
                cnt2 = 1;
            } else if (nums[i] < nums[i - 1]) {
                mx = max(mx, ++cnt2);
                cnt1 = 1;
            } else {
                cnt1 = cnt2 = 1;
            }
        }
        return mx;
    }
};
