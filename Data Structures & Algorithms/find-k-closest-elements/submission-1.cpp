class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n = ssize(arr);
        int left = 0, right = n - 1;
        while (right - left + 1 > k) {
            if (abs(x - arr[left]) > abs(x - arr[right])) {
                ++left;
            } else {
                --right;
            }
        }
        return vector<int>(arr.begin() + left, arr.begin() + right + 1);
    }
};
