class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = ssize(nums);
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        for (int i = 0; i < n - 2; ++i) {
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }
            if (nums[i] > 0) {
                break;
            }
            int left = i + 1, right = n - 1;
            while (left < right) {
                if (nums[i] + nums[left] + nums[right] == 0) {
                    res.push_back({nums[i], nums[left], nums[right]});
                    while (left < right && nums[left] == nums[left + 1]) {
                        ++left;
                    }
                    while (right > left && nums[right] == nums[right - 1]) {
                        --right;
                    }
                    ++left;
                    --right;
                } else if (nums[i] + nums[left] + nums[right] > 0) {
                    --right;
                } else {
                    ++left;
                }
            }
        }
        return res;
    }
};
