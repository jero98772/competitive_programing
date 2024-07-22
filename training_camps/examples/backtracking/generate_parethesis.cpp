#include <iostream>
#include <vector>
#include <string>

using namespace std;

void generateParenthesisUtil(int n, int open, int close, string current, vector<string>& result) {
    if (current.length() == n*2){
        result.push_back(current);
        return;
    }
    if(open<n){
        generateParenthesisUtil(n,open+1,close,current+"(",result);
    }
    if(close<open){
        generateParenthesisUtil(n,open,close+1,current+")",result);
    }
}

vector<string> generateParenthesis(int n) {
    vector<string> result;
    generateParenthesisUtil(n,0,0,"",result);
    return result;
}

int main() {
    int n = 3;  // Example with 3 pairs of parentheses

    vector<string> result = generateParenthesis(n);

    cout << "All combinations of well-formed parentheses are:" << endl;
    for (const string& combination : result) {
        cout << combination << endl;
    }

    return 0;
}
