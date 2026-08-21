class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int, bool> mp;
        for (int num : nums) {
            mp[num] = true;
        }
        int mx = 0;
        for (int num : nums) {
            if (mp[num]) {
                int cnt = 1;
                int a = num + 1, b = num - 1;
                mp[num] = 0;
                while (mp[a]) {
                    ++cnt;
                    mp[a++] = false;
                }
                while (mp[b]) {
                    ++cnt;
                    mp[b--] = false;
                }
                mx = max(mx, cnt);
            }
        }
        return mx;
    }
};
