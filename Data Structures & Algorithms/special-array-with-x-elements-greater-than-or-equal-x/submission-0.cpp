class Solution {
public:
    int countNums(vector<int>& nums, int val) {
        int cnt = 0;
        for (int &num : nums) {
            cnt += num >= val;
        }
        return cnt;
    }
    int specialArray(vector<int>& nums) {
        int low = 1;
        int high = ssize(nums);
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (countNums(nums, mid) == mid) {
                return mid;
            } else if (countNums(nums, mid) > mid) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return -1;
    }
};
