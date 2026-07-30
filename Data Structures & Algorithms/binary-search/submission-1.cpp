class Solution {
public:
    int binarySearch(vector<int>& nums, int tar, int left, int right) {
        if (left > right) {
            return -1;
        }
        int mid = left + (right - left) / 2;
        if (nums[mid] == tar) {
            return mid;
        }
        if (nums[mid] > tar) {
            return binarySearch(nums, tar, left, mid - 1);
        }
        return binarySearch(nums, tar, mid + 1, right);
    }
    int search(vector<int>& nums, int target) {
        int n = (int)nums.size();
        return binarySearch(nums, target, 0, n - 1);
    }
};
