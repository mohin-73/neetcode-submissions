class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = ssize(nums1);
        int m = ssize(nums2);
        vector<int> res(n, -1);
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (nums2[j] == nums1[i]) {
                    for (int k = j + 1; k < m; ++k) {
                        if (nums2[k] > nums1[i]) {
                            res[i] = nums2[k];
                            j = m;
                            break;
                        }
                    }
                }
            }
        }
        return res;
    }
};
