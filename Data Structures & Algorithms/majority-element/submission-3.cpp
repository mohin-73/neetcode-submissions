class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = nums.front();
        int vote = 1;
        for (int i = 1; i < ssize(nums); ++i) {
            if (vote == 0) {
                candidate = nums[i];
                vote = 1;
            } else if (candidate == nums[i]) {
                ++vote;
            } else {
                --vote;
            }
        }
        return candidate;
    }
};
