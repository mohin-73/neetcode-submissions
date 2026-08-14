class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        int n = ssize(nums);
        sort(nums.begin(), nums.end());
        int left = 0, res = 1;
        long long sum = 0;
        for (int right = 0; right < n; ++right) {
            sum += nums[right];
            while (1LL * (right - left + 1) * nums[right] - sum > k) {
                sum -= nums[left++];
            }
            res = max(res, right - left + 1);
        }
        return res;
    }
};
