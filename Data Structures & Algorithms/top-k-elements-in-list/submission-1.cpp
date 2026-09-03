class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        for (int num : nums) {
            ++freq[num];
        }
        vector<pair<int, int>> vp;
        for (auto &[n, f] : freq) {
            vp.emplace_back(f, n);
        }
        sort(vp.begin(), vp.end(), greater<pair<int, int>>());
        vector<int> res;
        for (int i = 0; i < k; ++i) {
            res.push_back(vp[i].second);
        }
        return res;
    }
};
