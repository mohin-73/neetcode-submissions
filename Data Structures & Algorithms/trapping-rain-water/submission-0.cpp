class Solution {
public:
    int trap(vector<int>& height) {
        int n = (int)height.size();
        vector<int> leftMax(n);
        vector<int> rightMax(n);
        int left = height[0], right = height[n - 1];
        for (int i = 0, j = n - 1; i < n; ++i, --j) {
            left = max(left, height[i]);
            right = max(right, height[j]);
            leftMax[i] = max(left, height[i]);
            rightMax[j] = max(right, height[j]);
        }
        int maxWater = 0;
        for (int i = 0; i < n; ++i) {
            int k = min(leftMax[i], rightMax[i]);
            maxWater += k - height[i];
        }
        return maxWater;
    }
};
