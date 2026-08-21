class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int, int> mp;
        for (int num : nums) {
            ++mp[num];
        }
        int mx = 0;
        for (int num : nums) {
            if (mp[num]) {
                int cnt = 1;
                int a = num + 1;
                int b = num - 1;
                mp[num] = 0;
                while (mp[a]) {
                    ++cnt;
                    mp[a] = 0;
                    ++a;
                }
                while (mp[b]) {
                    ++cnt;
                    mp[b] = 0;
                    --b;
                }
                mx = max(mx, cnt);
            }
        }
        return mx;
    }
};
