class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = 2;
        vector<int> ans;
        ans.reserve(ssize(nums) * n);
        while (n--) {
            for (int num : nums) {
                ans.push_back(num);
            }
        }
        return ans;
    }
};
