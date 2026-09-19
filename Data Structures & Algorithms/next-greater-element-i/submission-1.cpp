class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = ssize(nums2);
        vector<int> nxt(10001, -1);
        stack<int> stk;
        for (int i = n - 1; i >= 0; --i) {
            while (!stk.empty() && stk.top() < nums2[i]) {
                stk.pop();
            }
            if (!stk.empty()) {
                nxt[nums2[i]] = stk.top();
            }
            stk.push(nums2[i]);
        }
        vector<int> result;
        for (int num : nums1) {
            result.push_back(nxt[num]);
        }
        return result;
    }
};
