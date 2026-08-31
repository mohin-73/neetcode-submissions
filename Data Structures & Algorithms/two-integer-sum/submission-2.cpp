class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = ssize(nums);
        unordered_map<int, int> idx;
        for (int i = 0; i < n; ++i) {
            int x = target - nums[i];
            auto it = idx.find(x);
            if (it != idx.end()) {
                return {it->second, i};
            }
            idx[nums[i]] = i;
        }
        return {};
    }
};
