class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int, bool> isPresent;
        for (int num : nums) {
            isPresent[num] = true;
        }
        int longestSeq = 0;
        for (int num : nums) {
            if (isPresent[num]) {
                int cnt = 1;
                int left = num - 1;
                int right = num + 1;
                isPresent[num] = false;
                while (isPresent[left]) {
                    ++cnt;
                    isPresent[left--] = false;
                }
                while (isPresent[right]) {
                    ++cnt;
                    isPresent[right++] = false;
                }
                longestSeq = max(longestSeq, cnt);
            }
        }
        return longestSeq;
    }
};
