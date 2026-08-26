class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> a(26, 0);
        vector<int> b(26, 0);
        for (char ch : s1) {
            ++a[ch - 'a'];
        }
        int size = ssize(s1);
        int left = 0, n = ssize(s2);
        for (int right = 0; right < n; ++right) {
            ++b[s2[right] - 'a'];
            while (right - left + 1 > size) {
                --b[s2[left++] - 'a'];
            }
            if (right - left + 1 == size && a == b) {
                return true;
            }
        }
        return false;
    }
};
