class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = ssize(nums);
        int maj1 = 0, cnt1 = 0;
        int maj2 = 0, cnt2 = 0;
        for (int num : nums) {
            if (num == maj1) {
                ++cnt1;
            } else if (num == maj2) {
                ++cnt2;
            } else if (cnt1 == 0) {
                maj1 = num;
                cnt1 = 1;
            } else if (cnt2 == 0) {
                maj2 = num;
                cnt2 = 1;
            } else {
                --cnt1;
                --cnt2;
            }
        }
        int freq1 = 0, freq2 = 0;
        for (int num : nums) {
            if (num == maj1) {
                ++freq1;
            } else if (num == maj2) {
                ++freq2;
            }
        }
        vector<int> res;
        if (freq1 * 3 > n) {
            res.push_back(maj1);
        }
        if (freq2 * 3 > n) {
            res.push_back(maj2);
        }
        return res;
    }
};
