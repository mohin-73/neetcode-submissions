class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pt;
        for (int i = 1; i <= numRows; ++i) {
            vector<int> row(i, 1);
            for (int j = 1; j < i - 1; ++j) {
                row[j] = pt[i - 2][j - 1] + pt[i - 2][j];
            }
            pt.push_back(row);
        }
        return pt;
    }
};
