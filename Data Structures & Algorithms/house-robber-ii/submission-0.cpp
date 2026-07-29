class Solution {
public:
    int core(vector<int>& nums, int left, int right) {
        int prev = 0;
        int curr = 0;
        for (int idx = left; idx <= right; ++idx) {
            int temp = curr;
            curr = max(curr, prev + nums[idx]);
            prev = temp;
        }
        return curr;
    }
    int rob(vector<int>& nums) {
        int n = (int)nums.size();
        if (n == 1) {
            return nums[0];
        }
        return max(core(nums, 0, n - 2), core(nums, 1, n - 1));
    }
};
