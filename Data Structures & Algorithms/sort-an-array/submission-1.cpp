class Solution {
public:
    void merge(vector<int>& nums, int left, int mid, int right) {
        vector<int> vec;
        int i = left, j = mid + 1;
        while (i <= mid && j <= right) {
            if (nums[i] <= nums[j]) {
                vec.push_back(nums[i++]);
            } else {
                vec.push_back(nums[j++]);
            }
        }
        while (i <= mid) {
            vec.push_back(nums[i++]);
        }
        while (j <= right) {
            vec.push_back(nums[j++]);
        }
        for (int idx = 0; idx < ssize(vec); ++idx) {
            nums[idx + left] = vec[idx];
        }
    }
    void mergeSort(vector<int>& nums, int left, int right) {
        if (left >= right) {
            return;
        }
        int mid = (left + right) / 2;
        mergeSort(nums, left, mid);
        mergeSort(nums, mid + 1, right);
        merge(nums, left, mid, right);
    }
    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums, 0, ssize(nums) - 1);
        return nums;
    }
};
