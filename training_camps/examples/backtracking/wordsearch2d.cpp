#include <iostream>
#include <vector>
#include <string>

using namespace std;

class WordSearch{
public:
    WordSearch(vector<vector<char>> &board,const string& word): board(board),word(word),rows(board.size()), cols(board[0].size()){}
    bool exist(){
        for (int row = 0; row < rows; ++row)
        {
            for (int col = 0; col < cols; ++row)
            {
                if(backtrack(row,col,0)){
                    return true;
                }
            }
        }
        return false;
    }

private:
    vector<vector<char>>& board;
    const string& word;
    int rows, cols;
    bool backtrack(int row,int col, int index){
        if(index==word.size()){
            return true;
        }
        if (row < 0 || row >= rows || col < 0 || col >= cols || board[row][col] != word[index]) {
            return false;
        }
        char temp=board[row][col];
        board[row][col] = '#'; // Mark the cell as visited
        bool found = backtrack(row-1,col,index+1)||backtrack(row+1,col,index+1)||backtrack(row,col-1,index+1)||backtrack(row,col+1,index+1);
        board[row][col]=temp;
        return found;

    }

};


int main() {
    vector<vector<char>> board = {
        {'A', 'B', 'C', 'E'},
        {'S', 'F', 'C', 'S'},
        {'A', 'D', 'E', 'E'}
    };
    string word = "ABCCED";

    WordSearch ws(board, word);

    if (ws.exist()) {
        cout << "The word \"" << word << "\" exists in the grid." << endl;
    } else {
        cout << "The word \"" << word << "\" does not exist in the grid." << endl;
    }

    return 0;
}
