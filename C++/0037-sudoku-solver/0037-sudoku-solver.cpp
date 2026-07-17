class Solution {
public:

    bool isSafe(vector<vector<char>>& board, int row, int col, char digit)
    {
        // Column
        for(int i = 0; i < 9; i++)
        {
            if(board[i][col] == digit)
                return false;
        }

        // Row
        for(int j = 0; j < 9; j++)
        {
            if(board[row][j] == digit)
                return false;
        }

        // 3 × 3 Box
        int startRow = (row / 3) * 3;
        int startCol = (col / 3) * 3;

        for(int i = startRow; i < startRow + 3; i++)
        {
            for(int j = startCol; j < startCol + 3; j++)
            {
                if(board[i][j] == digit)
                    return false;
            }
        }

        return true;
    }

    bool sudokuSolver(vector<vector<char>>& board, int row, int col)
    {
        if(row == 9)
            return true;

        int nextRow = row;
        int nextCol = col + 1;

        if(col == 8)
        {
            nextRow = row + 1;
            nextCol = 0;
        }

        if(board[row][col] != '.')
            return sudokuSolver(board, nextRow, nextCol);

        for(char digit = '1'; digit <= '9'; digit++)
        {
            if(isSafe(board, row, col, digit))
            {
                board[row][col] = digit;

                if(sudokuSolver(board, nextRow, nextCol))
                    return true;

                board[row][col] = '.';
            }
        }

        return false;
    }

    void solveSudoku(vector<vector<char>>& board) {
        sudokuSolver(board, 0, 0);
    }
};