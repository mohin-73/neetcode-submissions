class Solution {
public:
    int minSpeed(vector<int>& piles, int n, int low, int high, int h) {
        int res = high;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            int cnt = 0;
            for (int i = 0; i < n; ++i) {
                cnt += (piles[i] + mid - 1) / mid;
            }
            if (cnt <= h) {
                res = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return res;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = (int)piles.size();
        int high = *max_element(piles.begin(), piles.end());
        return minSpeed(piles, n, 1, high, h);
    }
};
