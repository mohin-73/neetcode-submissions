class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n = ssize(arr);
        vector<pair<int, int>> vp;
        vector<int> res;
        for (int i = 0; i < n; ++i) {
            vp.push_back({abs(arr[i] - x), arr[i]});
        }
        sort(vp.begin(), vp.end());
        for (int i = 0; i < k; ++i) {
            res.push_back(vp[i].second);
        }
        sort(res.begin(), res.end());
        return res;
    }
};
