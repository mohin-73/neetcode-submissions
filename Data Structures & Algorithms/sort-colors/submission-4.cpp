class Solution {
public:
    void sortColors(vector<int>& nums) {
        int left = 0, curr = 0, right = ssize(nums) - 1;
        while (curr <= right) {
            if (nums[curr] == 0) {
                swap(nums[curr++], nums[left++]);
            } else if (nums[curr] == 2) {
                swap(nums[curr], nums[right--]);
            } else {
                ++curr;
            }
        }
    }
};
