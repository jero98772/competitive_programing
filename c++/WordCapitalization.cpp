//https://codeforces.com/contest/281/problem/A
//pased
#include <bits/stdc++.h>
using namespace std;
int main(){
	string l;cin>>l;
	if(islower(l[0])){
		l[0]=toupper(l[0]);
	}
	cout<<l<<endl;
}
