class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = ssize(nums);
        int left = 0, right = n - 1;
        while (left <= right) {
            if (nums[left] == val) {
                swap(nums[left], nums[right--]);
                n = n - 1;
            } else {
                ++left;
            }
        }
        return n;
    }
};
