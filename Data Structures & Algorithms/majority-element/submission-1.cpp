class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = ssize(nums);
        int candidate = nums[0], vote = 1;
        for (int i = 1; i < n; ++i) {
            if (nums[i] == candidate) {
                ++vote;
            } else if (vote == 0) {
                candidate = nums[i];
                vote = 1;
            } else {
                --vote;
            }
        }
        return candidate;
    }
};
