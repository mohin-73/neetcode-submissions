class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = ssize(nums), left = 0;
        for (int right = 1; right < n; ++right) {
            if (nums[right] != nums[left]) {
                swap(nums[right], nums[++left]);
            }
        }
        return left + 1;
    }
};
