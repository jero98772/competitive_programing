#include <iostream>
#include <vector>

using namespace std;

class NQueens{
    public:
        NQueens(int n):size(n),board(n,vector<int>(n,0)){}
        void solve(){
            if(placeQueens(0)){
                printBoard();
            }else{
                cout << "No solution exists." << endl;
            }

        }
    private:
        int size;
        vector<vector<int>> board;
        bool placeQueens(int row){
            if (row>=size){
                return true;
            }
            for(int col=0;col<size;++col){
                if(isSafe(row,col)){
                    board[row][col]=1;
                    if(placeQueens(row+1)){
                        return true;
                    }
                    board[row][col]=0;

                }
            }
            return false;
        }
        bool isSafe(int row,int col){
            for (int i = 0; i < row; ++i)
            {
                if(board[i][col]==1){
                    return false;
                }
            }
            for (int i = row, j =col; i>=0&& j>=0; --i,j--)
            {
                if(board[i][j]==1){
                    return false;
                }
            }
            for (int i = row, j =col; i>= 0&& j<size; --i,++j)
            {
                if(board[i][j]==1){
                    return false;
                }
            }
        return true;
        }

    void printBoard() {
        for (int i = 0; i < size; ++i) {
            for (int j = 0; j < size; ++j) {
                if (board[i][j] == 1) {
                    cout << "Q ";
                } else {
                    cout << ". ";
                }
            }
            cout << endl;
        }
    }
};

int main() {
    int n;
    cout << "Enter the value of N: ";
    cin >> n;

    NQueens nq(n);
    nq.solve();

    return 0;
}
