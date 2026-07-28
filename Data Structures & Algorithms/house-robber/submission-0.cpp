class Solution {
public:
    int rob(vector<int>& nums) {
        int n = (int)nums.size();
        if (n == 1) {
            return nums[0];
        }
        int prev = nums[0];
        int curr = max(nums[0], nums[1]);
        for (int i = 2; i < n; ++i) {
            int temp = curr;
            curr = max(prev + nums[i], curr);
            prev = temp;
        }
        return curr;
    }
};
