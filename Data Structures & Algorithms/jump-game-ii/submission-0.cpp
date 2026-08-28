class Solution {
public:
    int jump(vector<int>& nums) {
        int n = ssize(nums);
        int curr = 0, jumps = 0, farthest = 0;
        for (int i = 0; i < n - 1; ++i) {
            farthest = max(farthest, i + nums[i]);
            if (i == curr) {
                ++jumps;
                curr = farthest;
            }
        }
        return jumps;
    }
};
