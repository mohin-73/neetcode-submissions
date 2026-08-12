class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = ssize(nums);
        vector<pair<int, int>> vp;
        unordered_map<int, int> mp;
        for (int &num : nums) {
            ++mp[num];
        }
        for (auto &[num, freq] : mp) {
            vp.push_back(make_pair(freq, num));
        }
        sort(vp.begin(), vp.end(), greater<pair<int, int>>());
        vector<int> res;
        for (int i = 0; i < k; ++i) {
            res.push_back(vp[i].second);
        }
        return res;
    }
};
