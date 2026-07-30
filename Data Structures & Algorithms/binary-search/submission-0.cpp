class Solution {
public:
    int binarySearch(vector<int>& nums, int tar, int left, int right) {
        while (left <= right) {
            int mid = (left + right) / 2;
            if (nums[mid] == tar) {
                return mid;
            } else if (nums[mid] > tar) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int n = (int)nums.size();
        return binarySearch(nums, target, 0, n - 1);
    }
};
