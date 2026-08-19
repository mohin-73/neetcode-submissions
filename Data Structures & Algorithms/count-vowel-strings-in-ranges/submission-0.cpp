class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        int n = ssize(words);
        vector<int> prefix(n + 1, 0);
        int idx = 1;
        for (string word : words) {
            char s = word[0];
            bool a = s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u';
            s = word[ssize(word) - 1];
            bool b = s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u';
            if (a & b) {
                prefix[idx] = prefix[idx - 1] + 1;
            } else {
                prefix[idx] = prefix[idx - 1];
            }
            ++idx;
        }
        vector<int> res;
        for (auto v : queries) {
            int left = v[0];
            int right = v[1];
            res.push_back(prefix[right + 1] - prefix[left]);
        }
        return res;
    }
};
