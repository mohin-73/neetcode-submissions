class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, bool> seen;
        for (int &num : nums1) {
            seen[num] = true;
        }
        vector<int> res;
        unordered_map<int, bool> taken;
        for (int &num : nums2) {
            if (seen[num] && !taken[num]) {
                res.push_back(num);
                taken[num] = true;
            }
        }
        return res;
    }
};
