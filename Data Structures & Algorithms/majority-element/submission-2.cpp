class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = -1, vote = 0;
        for (int &num : nums) {
            if (vote == 0) {
                candidate = num;
            }
            vote += (num == candidate) ? 1 : -1;
        }
        return candidate;
    }
};
