class Solution {
public:
    string convertToTitle(int columnNumber) {
        string title;
        while (columnNumber--) {
            int k = columnNumber % 26;
            title.push_back((char)('A' + k));
            columnNumber /= 26;
        }
        reverse(title.begin(), title.end());
        return title;
    }
};
