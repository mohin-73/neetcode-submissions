class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row = ssize(matrix);
        int col = ssize(matrix.front());
        bool aux[201][201];
        for (int i = 0; i < row; ++i) {
            for (int j = 0; j < col; ++j) {
                aux[i][j] = true;
            }
        }
        for (int i = 0; i < row; ++i) {
            for (int j = 0; j < col; ++j) {
                if (matrix[i][j] == 0) {
                    aux[i][j] = false;
                }
            }
        }
        for (int i = 0; i < row; ++i) {
            for (int j = 0; j < col; ++j) {
                if (!aux[i][j]) {
                    for (int x = 0; x < col; ++x) {
                        matrix[i][x] = 0;
                    }
                    for (int x = 0; x < row; ++x) {
                        matrix[x][j] = 0;
                    }
                }
            }
        }
    }
};
