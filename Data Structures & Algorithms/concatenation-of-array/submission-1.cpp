class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans;
        ans.reserve(ssize(nums) * 2);
        for (int num : nums) {
            ans.push_back(num);
        }
        for (int num : nums) {
            ans.push_back(num);
        }
        return ans;
    }
};
