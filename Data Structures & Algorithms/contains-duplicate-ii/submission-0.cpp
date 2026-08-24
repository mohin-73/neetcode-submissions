class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = ssize(nums);
        unordered_map<int, int> idx;
        for (int i = 0; i < n; ++i) {
            if (idx[nums[i]]) {
                int x = i + 1 - idx[nums[i]];
                if (x <= k) {
                    return true;
                }
            }
            idx[nums[i]] = i + 1;
        }
        return false;
    }
};
