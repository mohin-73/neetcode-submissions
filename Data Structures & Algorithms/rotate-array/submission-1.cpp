class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = ssize(nums);
        k = k % n;
        int x = n - k, y = n - 1;
        while (x < y) {
            swap(nums[x++], nums[y--]);
        }
        x = 0, y = n - k - 1;
        while (x < y) {
            swap(nums[x++], nums[y--]);
        }
        x = 0, y = n - 1;
        while (x < y) {
            swap(nums[x++], nums[y--]);
        }
    }
};
