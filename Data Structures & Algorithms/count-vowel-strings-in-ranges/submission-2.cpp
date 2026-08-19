class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        int n = ssize(words);
        vector<int> prefix(n + 1, 0);
        for (int i = 0; i < n; ++i) {
            char first = words[i].front();
            char last = words[i].back();
            bool a = first == 'a' || first == 'e' || first == 'i' || first == 'o' || first == 'u';
            bool b = last == 'a' || last == 'e' || last == 'i' || last == 'o' || last == 'u';
            prefix[i + 1] = prefix[i] + (a & b);
        }
        vector<int> res;
        res.reserve(ssize(queries));
        for (const auto& q : queries) {
            res.push_back(prefix[q[1] + 1] - prefix[q[0]]);
        }
        return res;
    }
};
