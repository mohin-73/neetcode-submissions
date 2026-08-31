class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int cnt = 0;
        for (int i = 0; i < ssize(nums); ++i)
            if (nums[i] != val)
                swap(nums[cnt++], nums[i]);
        return cnt;
    }
};
