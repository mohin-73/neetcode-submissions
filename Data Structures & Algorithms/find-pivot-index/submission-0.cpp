class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = ssize(nums);
        int rightSum = accumulate(nums.begin(), nums.end(), 0);
        int leftSum = 0, idx = -1;
        for (int i = 0; i < n; ++i) {
            rightSum -= nums[i];
            if (leftSum == rightSum) {
                idx = i;
                break;
            }
            leftSum += nums[i];
        }
        return idx;
    }
};
