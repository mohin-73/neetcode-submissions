class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = (int)nums.size();
        int missing = n;
        for (int i = 0; i < n; ++i) {
            missing ^= nums[i];
            missing ^= i;
        }
        return missing;
    }
};
