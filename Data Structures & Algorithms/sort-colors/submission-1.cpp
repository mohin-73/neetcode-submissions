class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = ssize(nums);
        int curr = 0, left = 0;
        int right = n - 1;
        while (curr <= right) {
            if (nums[curr] == 0) {
                swap(nums[left++], nums[curr++]);
            } else if (nums[curr] == 2) {
                swap(nums[curr], nums[right--]);
            } else {
                ++curr;
            }
        }
    }
};
