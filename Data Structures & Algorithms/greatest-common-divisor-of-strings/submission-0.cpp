class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int n = ssize(str1);
        int m = ssize(str2);
        int k = min(n, m);
        string st, ans;
        for (int i = 0; i < k; ++i) {
            if (str1[i] == str2[i]) {
                st.push_back(str1[i]);
            }
            if (n % (i + 1) == 0 && m % (i + 1) == 0) {
                int a = n / (i + 1);
                int b = m / (i + 1);
                string s1, s2;
                while (a--) {
                    s1 += st;
                }
                while (b--) {
                    s2 += st;
                }
                if (s1 == str1 && s2 == str2) {
                    ans = st;
                }
            }
        }
        return ans;
    }
};
