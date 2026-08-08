class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        for (string &str : strs) {
            string temp = str;
            sort(temp.begin(), temp.end());
            mp[temp].push_back(str);
        }
        vector<vector<string>> groups;
        for (auto &[key, group] : mp) {
            groups.push_back(group);
        }
        return groups;
    }
};
