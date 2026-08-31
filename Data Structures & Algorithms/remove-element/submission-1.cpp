class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = ssize(nums);
        int left = 0, right = n - 1, cnt = 0;
        for (int i = 0; i <= right; ++i) {
            if (nums[i] == val) {
                swap(nums[i--], nums[right--]);
            } else {
                swap(nums[left++], nums[i]);
            }
        }
        return left;
    }
};
