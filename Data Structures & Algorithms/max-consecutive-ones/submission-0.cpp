class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = ssize(nums), mx = 0;
        for (int idx = 0; idx < n; ++idx) {
            int cnt = 0;
            while (idx < n && nums[idx] == 1) {
                ++cnt;
                ++idx;
            }
            mx = max(mx, cnt);
        }
        return mx;
    }
};
