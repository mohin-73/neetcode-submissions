class Solution {
public:
    bool canPlaceFlowers(vector<int>& nums, int n) {
        if (n == 0) {
            return true;
        }
        int k = ssize(nums);
        nums.insert(nums.begin(), 0);
        nums.push_back(0);
        int cnt = 0;
        for (int i = 1; i <= k; ++i) {
            if (nums[i] == 0 && nums[i - 1] == 0 && nums[i + 1] == 0) {
                ++cnt;
                if (cnt == n) {
                    return true;
                }
                nums[i] = 1;
            }
        }
        return false;
    }
};
