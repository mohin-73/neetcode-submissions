class Solution {
public:
    bool binarySearch(vector<int>& nums, int left, int right, int num) {
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] == num) {
                return true;
            } else if (nums[mid] > num) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return false;
    }
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n = ssize(nums1) - 1;
        sort(nums1.begin(), nums1.end());
        vector<int> res;
        unordered_map<int, bool> taken;
        for (int &num : nums2) {
            bool flag = binarySearch(nums1, 0, n, num);
            if (flag && !taken[num]) {
                res.push_back(num);
                taken[num] = true;
            }
        }
        return res;
    }
};
