class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = ssize(nums);
        int left = 0, right = n - 1;
        for (int curr = 0; curr <= right; ++curr) {
            if (nums[curr] == 0) {
                swap(nums[left++], nums[curr]);
            } else if (nums[curr] == 2) {
                swap(nums[curr--], nums[right--]);
            }
        }
    }
};
