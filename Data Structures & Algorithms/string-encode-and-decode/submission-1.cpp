class Solution {
public:

    string encode(vector<string>& strs) {
        string str;
        for (auto st : strs) {
            str += to_string(ssize(st)) + "#" + st;
        }
        return str;
    }

    vector<string> decode(string s) {
        vector<string> res;
        int i = 0, len = ssize(s);
        while (i < len) {
            string ls;
            while (s[i] != '#') {
                ls += s[i++];
            }
            ++i;
            int k = stoi(ls);
            res.push_back(s.substr(i, k));
            i += k;
        }
        return res;
    }
};
