class Solution {
public:

    string encode(vector<string>& strs) {
        string res;
        for (string &str : strs) {
            res += to_string(ssize(str)) + "#" + str;
        }
        return res;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        int i = 0, len = ssize(s);
        while (i < len) {
            string lstr;
            while (s[i] != '#') {
                lstr += s[i++];
            }
            ++i;
            int k = stoi(lstr);
            ans.push_back(s.substr(i, k));
            i += k;
        }
        return ans;
    }
};
