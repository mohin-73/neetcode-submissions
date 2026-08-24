class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = ssize(nums);
        vector<int> res;
        unordered_map<int, int> freq;
        unordered_map<int, bool> taken;
        for (int num : nums) {
            ++freq[num];
            if (freq[num] * 3 > n && !taken[num]) {
                res.push_back(num);
                taken[num] = true;
            }
        }
        return res;
    }
};
