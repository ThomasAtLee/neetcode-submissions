class Solution {
   public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<char> curr_row;
        vector<char> curr_col;
        vector<char> curr_sqr;
        vector<vector<int>> corners = {{0, 0}, {0, 3}, {0, 6}, {3, 0}, {3, 3},
                                       {3, 6}, {6, 0}, {6, 3}, {6, 6}};
        for (int row = 0; row < 9; row++) {
            curr_row.clear();
            curr_col.clear();
            for (int col = 0; col < 9; col++) {
                if (board[row][col] != '.') {
                    if (count(curr_row.begin(), curr_row.end(), board[row][col]) > 0) {
                        return false;
                    }
                    curr_row.push_back(board[row][col]);
                }

                // switch col and row for columns
                if (board[col][row] != '.') {
                    if (count(curr_col.begin(), curr_col.end(), board[col][row]) > 0) {
                        return false;
                    }
                    curr_col.push_back(board[col][row]);
                }
            }
        }

        for (int i = 0; i < 9; i++) {
            curr_sqr.clear();
            for (int row = corners[i][0]; row < corners[i][0] + 3; row++) {
                for (int col = corners[i][1]; col < corners[i][1] + 3; col++) {
                    if (board[row][col] == '.') {
                        continue;
                    }
                    if (count(curr_sqr.begin(), curr_sqr.end(), board[row][col]) > 0) {
                        return false;
                    }
                    curr_sqr.push_back(board[row][col]);
                }
            }
        }
        return true;
    }
};
