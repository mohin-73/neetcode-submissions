class Solution {
public:
    int rob(vector<int>& nums) {
        int n = (int)nums.size();
        if (n == 1) {
            return nums[0];
        }
        int prev = 0;
        int curr = 0;
        for (int i = 0; i < n; ++i) {
            int temp = curr;
            curr = max(prev + nums[i], curr);
            prev = temp;
        }
        return curr;
    }
};
