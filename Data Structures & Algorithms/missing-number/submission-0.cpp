class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = (int)nums.size();
        int t = (n * (n + 1)) / 2;
        int s = accumulate(nums.begin(), nums.end(), 0);
        return t - s;
    }
};
