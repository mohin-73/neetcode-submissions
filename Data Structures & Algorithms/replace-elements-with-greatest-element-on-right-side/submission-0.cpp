class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = ssize(arr);
        int rmax = arr[n - 1];
        arr[n - 1] = -1;
        for (int i = n - 2; i >= 0; --i) {
            int temp = arr[i];
            arr[i] = rmax;
            rmax = max(rmax, temp);
        }
        return arr;
    }
};
