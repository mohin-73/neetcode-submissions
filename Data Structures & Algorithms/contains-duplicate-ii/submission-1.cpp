class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = ssize(nums);
        unordered_map<int, int> idx;
        for (int i = 0; i < n; ++i) {
            auto it = idx.find(nums[i]);
            if (it != idx.end() && i - it->second <= k) {
                return true;
            }
            idx[nums[i]] = i;
        }
        return false;
    }
};
