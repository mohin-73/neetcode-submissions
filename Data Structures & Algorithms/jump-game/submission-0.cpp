class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = (int)nums.size();
        int farthest = 0;
        for (int i = 0; i <= farthest; ++i) {
            farthest = max(farthest, i + nums[i]);
            if (farthest >= n - 1) {
                return true;
            }
        }
        return false;
    }
};
