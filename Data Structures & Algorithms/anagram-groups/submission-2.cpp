class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> groups;
        unordered_map<string, vector<string>> mp;
        for (const string &str : strs) {
            string temp = str;
            sort(temp.begin(), temp.end());
            mp[temp].push_back(str);
        }
        for (auto &[str, group] : mp) {
            groups.push_back(group);
        }
        return groups;
    }
};
