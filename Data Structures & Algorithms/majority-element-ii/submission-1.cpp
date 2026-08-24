class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = ssize(nums);
        vector<int> res;
        unordered_map<int, int> freq;
        for (int num : nums) {
            ++freq[num];
        }
        for (auto [num, cnt] : freq) {
            if (cnt * 3 > n) {
                res.push_back(num);
            }
        }
        return res;
    }
};
