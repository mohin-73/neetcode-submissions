class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(), 0);
        while (low <= high) {
            int mid = low + (high - low) / 2;
            int cnt = 1;
            int temp = mid;
            for (int wt : weights) {
                if (wt <= temp) {
                    temp -= wt;
                } else {
                    ++cnt;
                    temp = mid - wt;
                }
            }
            if (cnt <= days) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};
