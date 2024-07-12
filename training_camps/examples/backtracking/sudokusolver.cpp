#include <iostream>
#include <vector>

using namespace std;

class SudokuSolver {
public:
    SudokuSolver(vector<vector<int>>& board) : board(board), N(9) {}

    bool solve() {
        return solveSudoku(0, 0);
    }

    void printBoard() {
        for (int r = 0; r < N; ++r) {
            for (int d = 0; d < N; ++d) {
                cout << board[r][d] << " ";
            }
            cout << endl;
        }
    }

private:
    vector<vector<int>>& board;
    const int N;

    bool solveSudoku(int row, int col) {
        if(row==N-1 && col==N){
            return true;
        }
        if(col==N){
            row++;
            col=0;
        }
        if(board[row][col]!=0){
            return solveSudoku(row,col+1);
        }
        for (int num = 1; num <= 9; num++) {
            if(isSafe(row,col,num)){
                board[row][col]=num;
                if(solveSudoku(row,col+1)){
                    return true;
                }
            }
            board[row][col]=0;
        }

        return false; 
    }

    bool isSafe(int row, int col, int num) {
        for (int x = 0; x < N; x++)
        {
            if(board[row][x]==num || board[x][col]==num){
                return false;
            }
        }
        int startCol=col-col%3;
        int startRow=row-row%3;

        for (int i = 0; i < 3; ++i)
        {
            for (int j = 0; j < 3; ++j)
            {
                if(board[i+startRow][j+startCol]==num){
                    return false;
                }
            }
        }

        return true;
    }
};

int main() {
    vector<vector<int>> board = {
        {5, 3, 0, 6, 7, 0, 0, 0, 0},
        {6, 0, 0, 1, 9, 5, 0, 0, 0},
        {0, 9, 8, 0, 0, 0, 0, 6, 0},
        {8, 0, 0, 0, 6, 0, 0, 0, 3},
        {4, 0, 0, 8, 0, 3, 0, 0, 1},
        {7, 0, 0, 0, 2, 0, 0, 0, 6},
        {0, 6, 0, 0, 0, 0, 2, 8, 0},
        {0, 0, 0, 4, 1, 9, 0, 0, 5},
        {0, 0, 0, 0, 8, 0, 0, 7, 9}
    };

    SudokuSolver solver(board);

    if (solver.solve()) {
        solver.printBoard();
    } else {
        cout << "No solution exists." << endl;
    }

    return 0;
}
