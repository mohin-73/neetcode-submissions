class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> freq(26, 0);
        for (char ch : magazine) {
            ++freq[ch - 'a'];
        }
        for (char ch : ransomNote) {
            int k = --freq[ch - 'a'];
            if (k < 0) {
                return false;
            }
        }
        return true;
    }
};
