class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int left = 0, right = ssize(nums) - 1;
        while (left <= right) {
            if (nums[left] == val) {
                swap(nums[left], nums[right--]);
            } else {
                ++left;
            }
        }
        return left;
    }
};
