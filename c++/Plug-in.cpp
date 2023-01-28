//https://codeforces.com/group/Ct1cN5bG36/contest/343246/problem/B
//pased
#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    int i = 0;
    while (i < s.size() - 1) {
        if (s[i] == s[i+1]) {
            s.erase(i, 2);
            if (i > 0) {
                i--;
            }
        } else {
            i++;
        }
    }

    cout << s << endl;
    return 0;
}