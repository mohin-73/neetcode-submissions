class Solution {
public:
    int jump(vector<int>& nums) {
        int n = ssize(nums);
        int currEnd = 0, minJumps = 0, farthest = 0;
        for (int i = 0; i < n - 1; ++i) {
            farthest = max(farthest, i + nums[i]);
            if (currEnd == i) {
                ++minJumps;
                currEnd = farthest;
            }
        }
        return minJumps;
    }
};
