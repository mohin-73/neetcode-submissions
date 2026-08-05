class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = nums[0], vote = 1;
        for (int &curr : nums) {
            if (curr == candidate) {
                ++vote;
            } else if (vote == 0) {
                candidate = curr;
                vote = 1;
            } else {
                --vote;
            }
        }
        return candidate;
    }
};
