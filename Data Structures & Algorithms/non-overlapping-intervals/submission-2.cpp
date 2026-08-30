class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int n = ssize(intervals);
        vector<pair<int, int>> vp;
        for (int i = 0; i < n; ++i) {
            vp.push_back({intervals[i][1], intervals[i][0]});
        }
        sort(vp.begin(), vp.end());
        int cnt = 1, currEnd = vp[0].first;
        for (int i = 1; i < n; ++i) {
            if (vp[i].second >= currEnd) {
                ++cnt;
                currEnd = vp[i].first;
            }
        }
        return n - cnt;
    }
};
