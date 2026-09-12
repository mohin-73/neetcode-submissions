class Solution {
public:
    int maxTurbulenceSize(vector<int>& arr) {
        int n = ssize(arr);
        int up = 1, down = 1, res = 1;
        for (int i = 1; i < n; ++i) {
            if (arr[i] > arr[i - 1]) {
                up = down + 1;
                res = max(res, up);
                down = 1;
            } else if (arr[i] < arr[i - 1]) {
                down = up + 1;
                res = max(res, down);
                up = 1;
            } else {
                up = 1;
                down = 1;
            }
        }
        return res;
    }
};
