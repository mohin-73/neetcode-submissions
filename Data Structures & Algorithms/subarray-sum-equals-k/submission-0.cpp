class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int currSum = 0, arrayCount = 0;
        unordered_map<int, int> prefixSum;
        for (int num : nums) {
            ++prefixSum[currSum];
            currSum += num;
            arrayCount += prefixSum[currSum - k];
        }
        return arrayCount;
    }
};
