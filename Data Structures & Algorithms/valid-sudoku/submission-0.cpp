class Solution {
public:
    bool isRowValid(vector<vector<char>>& board, int row) {
        set<char> st;
        int cnt = 0;
        for (int col = 0; col < 9; ++col) {
            if (board[row][col] != '.') {
                st.insert(board[row][col]);
                ++cnt;
            }
        }
        return cnt == ssize(st);
    }
    bool isColValid(vector<vector<char>>& board, int col) {
        set<char> st;
        int cnt = 0;
        for (int row = 0; row < 9; ++row) {
            if (board[row][col] != '.') {
                st.insert(board[row][col]);
                ++cnt;
            }
        }
        return cnt == ssize(st);
    }
    bool isBoxValid(vector<vector<char>>& board, int x, int y) {
        set<char> st;
        int cnt = 0;
        for (int i = x; i < x + 3; ++i) {
            for (int j = y; j < y + 3; ++j) {
                if (board[i][j] != '.') {
                    st.insert(board[i][j]);
                    ++cnt;
                }
            }
        }
        return cnt == ssize(st);
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int x = 0; x <= 6; x += 3) {
            for (int y = 0; y <= 6; y += 3) {
                if (!isBoxValid(board, x, y)) {
                    return false;
                }
            }
        } 
        for (int i = 0; i < 9; ++i) {
            if (!isRowValid(board, i)) {
                return false;
            }
            if (!isColValid(board, i)) {
                return false;
            }
        }
        return true;
    }
};
